// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-
// vim:set sts=4 ts=8:

// Copyright (c) 2001-2004 International Computer Science Institute
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software")
// to deal in the Software without restriction, subject to the conditions
// listed in the XORP LICENSE file. These conditions include: you must
// preserve this copyright notice, and you cannot mention the copyright
// holders in advertising related to the Software without their permission.
// The Software is provided WITHOUT ANY WARRANTY, EXPRESS OR IMPLIED. This
// notice is a summary of the XORP LICENSE file; the license in that file is
// legally binding.

// $XORP$

#ifndef __OSPF_PEER_MANAGER_HH__
#define __OSPF_PEER_MANAGER_HH__

/**
 * An opaque handle that identifies a peer.
 */
typedef uint32_t PeerID;

template <typename A> class Ospf;
template <typename A> class Peer;
template <typename A> class AreaRouter;

/**
 * Peer Manager:
 *	1) Monitor the state of the interfaces. An interface going
 *	up/down will be monitored and trigger either adjacency
 *	attempts or new (withdraw) LSAs.
 *	2) Manage interface configuration state. Control peers and
 *	area state.
 *	3) Accept incoming hello's and demultiplex to the correct peer.
 *	4) Manage the set of peers (peers are bound to interface and
 *	area). The peers themselves are hidden and are only
 *	exposed by reference (PeerID).
 */
template <typename A>
class PeerManager {
 public:
    PeerManager(Ospf<A> &ospf)
	: _ospf(ospf)
    {}

    ~PeerManager();

    /**
     * Create an area router.
     */
    bool create_area_router(OspfTypes::AreaID area,
			    OspfTypes::AreaType area_type);

    AreaRouter<A> *get_area_router(OspfTypes::AreaID area);

    /**
     * Destroy an area router.
     */
    bool destroy_area_router(OspfTypes::AreaID area);

    /**
     * Generate PeerID.
     * Internally we want to deal with peers as simple IDs not
     * interface/vif.
     * Throw an exception if we already have a mapping.
     */
    PeerID create_peerid(const string& interface, const string& vif)
	throw(BadPeer);

    /**
     * Convert an interface/vif to a PeerID.
     * Throw an exception if no mapping is found.
     */
    PeerID get_peerid(const string& interface, const string& vif) 
	throw(BadPeer);

    /**
     * Get rid of this mapping.
     */
    void destroy_peerid(const string& interface, const string& vif)
	throw(BadPeer);

    /**
     * Create a peer.
     */
    bool create_peer(const string& interface, const string& vif,
		     OspfTypes::LinkType linktype, OspfTypes::AreaID area)
	throw(BadPeer);
	
    /**
     * Delete a peer.
     */
    bool delete_peer(const PeerID);

    /**
     * Take a peer up or down.
     */
    bool set_state_peer(const PeerID, bool state);

    /**
     * Demultiplex incoming packets to the associated peer. If the
     * packet contains LSAs send it to the LSA database manager if
     * appropriate.
     */
    void incoming_packet(const string& interface, const string& vif,
			 Packet *packet);

 private:
    Ospf<A>& _ospf;			// Reference to the controlling class.
    
    PeerID _next_peerid;		// Next PeerID to allocate.
    map<string, PeerID> _pmap;		// Map from interface/vif to PeerID.

    map<PeerID, Peer<A> *> _peers;	// All of our peers

    map<OspfTypes::AreaID, AreaRouter<A> *> _areas;	// All the areas
};

#endif // __OSPF_PEER_MANAGER_HH__
