/*
 * Copyright (c) 2001-2003 International Computer Science Institute
 * See LICENSE file for licensing, conditions, and warranties on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by '../../xrl/scripts/clnt-gen'.
 *
 * $XORP: xorp/xrl/interfaces/bgp_xif.hh,v 1.11 2003/03/10 23:01:26 hodson Exp $
 */

#ifndef __XRL_INTERFACES_BGP_XIF_HH__
#define __XRL_INTERFACES_BGP_XIF_HH__

#undef XORP_LIBRARY_NAME
#define XORP_LIBRARY_NAME "XifBgp"

#include "libxorp/xlog.h"
#include "libxorp/callback.hh"

#include "libxipc/xrl.hh"
#include "libxipc/xrl_error.hh"
#include "libxipc/xrl_sender.hh"


class XrlBgpV0p2Client {
public:
    XrlBgpV0p2Client(XrlSender* s) : _sender(s) {}
    virtual ~XrlBgpV0p2Client() {}

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr CB0;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the BGP version currently running.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_get_bgp_version(
	const char*	target_name, 
	const CB0&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB1;
    /**
     *  Send Xrl intended to:
     *  
     *  Get local config
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param id our BGP ID.
     */
    bool send_local_config(
	const char*	target_name, 
	const uint32_t&	as, 
	const IPv4&	id, 
	const CB1&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB2;
    /**
     *  Send Xrl intended to:
     *  
     *  Set the local AS number.
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param as our AS number.
     */
    bool send_set_local_as(
	const char*	target_name, 
	const uint32_t&	as, 
	const CB2&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr CB3;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the local AS number.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_get_local_as(
	const char*	target_name, 
	const CB3&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB4;
    /**
     *  Send Xrl intended to:
     *  
     *  Set the BGP id.
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param id our BGP ID.
     */
    bool send_set_bgpid(
	const char*	target_name, 
	const IPv4&	id, 
	const CB4&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const IPv4*>::RefPtr CB5;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the BGP id.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_get_bgpid(
	const char*	target_name, 
	const CB5&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB6;
    /**
     *  Send Xrl intended to:
     *  
     *  Add peer.
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param as the peer's AS number.
     *  
     *  @param next_hop the local next hop.
     *  
     *  @param holdtime expects traffic in this time interval.
     */
    bool send_add_peer(
	const char*	target_name, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const uint32_t&	as, 
	const IPv4&	next_hop, 
	const uint32_t&	holdtime, 
	const CB6&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB7;
    /**
     *  Send Xrl intended to:
     *  
     *  Delete peer.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_delete_peer(
	const char*	target_name, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB7&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB8;
    /**
     *  Send Xrl intended to:
     *  
     *  Enable this peer.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_enable_peer(
	const char*	target_name, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB8&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB9;
    /**
     *  Send Xrl intended to:
     *  
     *  Disable this peer.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_disable_peer(
	const char*	target_name, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB9&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB10;
    /**
     *  Send Xrl intended to:
     *  
     *  Set next hop rewrite filter.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_next_hop_rewrite_filter(
	const char*	target_name, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const IPv4&	next_hop, 
	const CB10&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB11;
    /**
     *  Send Xrl intended to:
     *  
     *  Set the peer state enabled or disabled.
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param toggle enabled or disabled.
     */
    bool send_set_peer_state(
	const char*	target_name, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const bool&	toggle, 
	const CB11&	cb
    );

    typedef XorpCallback3<void, const XrlError&, const uint32_t*, const bool*>::RefPtr CB12;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the first item of a list of BGP peers See RFC 1657 (BGP MIB) for
     *  full definitions of return values.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_get_peer_list_start(
	const char*	target_name, 
	const CB12&	cb
    );

    typedef XorpCallback6<void, const XrlError&, const IPv4*, const uint32_t*, const IPv4*, const uint32_t*, const bool*>::RefPtr CB13;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the next item of a list of BGP peers
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param token token from prior call to get_peer_list
     */
    bool send_get_peer_list_next(
	const char*	target_name, 
	const uint32_t&	token, 
	const CB13&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const IPv4*>::RefPtr CB14;

    bool send_get_peer_id(
	const char*	target_name, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB14&	cb
    );

    typedef XorpCallback3<void, const XrlError&, const uint32_t*, const uint32_t*>::RefPtr CB15;

    bool send_get_peer_status(
	const char*	target_name, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB15&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const int32_t*>::RefPtr CB16;

    bool send_get_peer_negotiated_version(
	const char*	target_name, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB16&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr CB17;

    bool send_get_peer_as(
	const char*	target_name, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB17&	cb
    );

    typedef XorpCallback7<void, const XrlError&, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*>::RefPtr CB18;

    bool send_get_peer_msg_stats(
	const char*	target_name, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB18&	cb
    );

    typedef XorpCallback3<void, const XrlError&, const uint32_t*, const uint32_t*>::RefPtr CB19;

    bool send_get_peer_established_stats(
	const char*	target_name, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB19&	cb
    );

    typedef XorpCallback8<void, const XrlError&, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*>::RefPtr CB20;

    bool send_get_peer_timer_config(
	const char*	target_name, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB20&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB21;
    /**
     *  Send Xrl intended to:
     *  
     *  Register rib.
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param name rib name.
     */
    bool send_register_rib(
	const char*	target_name, 
	const string&	name, 
	const CB21&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB22;
    /**
     *  Send Xrl intended to:
     *  
     *  add route
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param origin the origin of the path information.
     *  
     *  @param next_hop the border router that should be used as a detination
     *  for the nlri.
     *  
     *  @param nlri network level reachability information.
     */
    bool send_add_route(
	const char*	target_name, 
	const int32_t&	origin, 
	const int32_t&	asnum, 
	const IPv4&	next_hop, 
	const IPv4Net&	nlri, 
	const CB22&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB23;
    /**
     *  Send Xrl intended to:
     *  
     *  delete route
     *  
     *  @param tgt_name Xrl Target name
     *  
     *  @param nlri network level reachability information.
     */
    bool send_delete_route(
	const char*	target_name, 
	const IPv4Net&	nlri, 
	const CB23&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr CB24;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the first item of a list of BGP routes See RFC 1657 (BGP MIB) for
     *  full definitions of return values.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_get_v4_route_list_start(
	const char*	target_name, 
	const CB24&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr CB25;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the first item of a list of BGP routes See RFC 1657 (BGP MIB) for
     *  full definitions of return values.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_get_v6_route_list_start(
	const char*	target_name, 
	const CB25&	cb
    );

    typedef XorpCallback12<void, const XrlError&, const IPv4*, const IPv4Net*, const uint32_t*, const vector<uint8_t>*, const IPv4*, const int32_t*, const int32_t*, const int32_t*, const vector<uint8_t>*, const int32_t*, const vector<uint8_t>*>::RefPtr CB26;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the next route in the list See RFC 1657 (BGP MIB) for full
     *  definitions of return values.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_get_v4_route_list_next(
	const char*	target_name, 
	const uint32_t&	token, 
	const CB26&	cb
    );

    typedef XorpCallback12<void, const XrlError&, const IPv4*, const IPv6Net*, const uint32_t*, const vector<uint8_t>*, const IPv6*, const int32_t*, const int32_t*, const int32_t*, const vector<uint8_t>*, const int32_t*, const vector<uint8_t>*>::RefPtr CB27;
    /**
     *  Send Xrl intended to:
     *  
     *  Get the next route in the list See RFC 1657 (BGP MIB) for full
     *  definitions of return values.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_get_v6_route_list_next(
	const char*	target_name, 
	const uint32_t&	token, 
	const CB27&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB28;
    /**
     *  Send Xrl intended to:
     *  
     *  Terminate bgp process
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_terminate(
	const char*	target_name, 
	const CB28&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB29;
    /**
     *  Send Xrl intended to:
     *  
     *  Set which parameters we support per peer
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_set_parameter(
	const char*	target_name, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const string&	parameter, 
	const CB29&	cb
    );

protected:
    XrlSender* _sender;

private:
    void unmarshall0(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB0		cb
    );

    void unmarshall1(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB1		cb
    );

    void unmarshall2(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB2		cb
    );

    void unmarshall3(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB3		cb
    );

    void unmarshall4(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB4		cb
    );

    void unmarshall5(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB5		cb
    );

    void unmarshall6(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB6		cb
    );

    void unmarshall7(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB7		cb
    );

    void unmarshall8(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB8		cb
    );

    void unmarshall9(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB9		cb
    );

    void unmarshall10(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB10		cb
    );

    void unmarshall11(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB11		cb
    );

    void unmarshall12(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB12		cb
    );

    void unmarshall13(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB13		cb
    );

    void unmarshall14(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB14		cb
    );

    void unmarshall15(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB15		cb
    );

    void unmarshall16(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB16		cb
    );

    void unmarshall17(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB17		cb
    );

    void unmarshall18(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB18		cb
    );

    void unmarshall19(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB19		cb
    );

    void unmarshall20(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB20		cb
    );

    void unmarshall21(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB21		cb
    );

    void unmarshall22(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB22		cb
    );

    void unmarshall23(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB23		cb
    );

    void unmarshall24(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB24		cb
    );

    void unmarshall25(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB25		cb
    );

    void unmarshall26(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB26		cb
    );

    void unmarshall27(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB27		cb
    );

    void unmarshall28(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB28		cb
    );

    void unmarshall29(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB29		cb
    );

};

#endif /* __XRL_INTERFACES_BGP_XIF_HH__ */
