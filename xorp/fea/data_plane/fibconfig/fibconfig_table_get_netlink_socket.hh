// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001-2009 XORP, Inc.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License, Version 2, June
// 1991 as published by the Free Software Foundation. Redistribution
// and/or modification of this program under the terms of any other
// version of the GNU General Public License is not permitted.
// 
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. For more details,
// see the GNU General Public License, Version 2, a copy of which can be
// found in the XORP LICENSE.gpl file.
// 
// XORP Inc, 2953 Bunker Hill Lane, Suite 204, Santa Clara, CA 95054, USA;
// http://xorp.net

// $XORP: xorp/fea/data_plane/fibconfig/fibconfig_table_get_netlink_socket.hh,v 1.9 2008/10/02 21:56:59 bms Exp $

#ifndef __FEA_DATA_PLANE_FIBCONFIG_FIBCONFIG_TABLE_GET_NETLINK_SOCKET_HH__
#define __FEA_DATA_PLANE_FIBCONFIG_FIBCONFIG_TABLE_GET_NETLINK_SOCKET_HH__

#include "fea/fibconfig_table_get.hh"
#include "fea/data_plane/control_socket/netlink_socket.hh"


class FibConfigTableGetNetlinkSocket : public FibConfigTableGet,
				       public NetlinkSocket {
public:
    /**
     * Constructor.
     *
     * @param fea_data_plane_manager the corresponding data plane manager
     * (@ref FeaDataPlaneManager).
     */
    FibConfigTableGetNetlinkSocket(FeaDataPlaneManager& fea_data_plane_manager);

    /**
     * Virtual destructor.
     */
    virtual ~FibConfigTableGetNetlinkSocket();

    /**
     * Start operation.
     * 
     * @param error_msg the error message (if error).
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int start(string& error_msg);
    
    /**
     * Stop operation.
     * 
     * @param error_msg the error message (if error).
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int stop(string& error_msg);

    /**
     * Obtain the IPv4 unicast forwarding table.
     *
     * @param fte_list the return-by-reference list with all entries in
     * the IPv4 unicast forwarding table.
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int get_table4(list<Fte4>& fte_list);

    /**
     * Obtain the IPv6 unicast forwarding table.
     *
     * @param fte_list the return-by-reference list with all entries in
     * the IPv6 unicast forwarding table.
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int get_table6(list<Fte6>& fte_list);

    /**
     * Parse information about routing table information received from
     * the underlying system.
     * 
     * The information to parse is in NETLINK format
     * (e.g., obtained by netlink(7) sockets mechanism).
     * 
     * @param family the address family to consider only ((e.g., AF_INET
     * or AF_INET6 for IPv4 and IPv6 respectively).
     * @param iftree the interface tree to use.
     * @param fte_list the list with the Fte entries to store the result.
     * @param buffer the buffer with the data to parse.
     * @param is_nlm_get_only if true, consider only the entries obtained
     * by RTM_GETROUTE.
     * @return XORP_OK on success, otherwise XORP_ERROR.
     * @see FteX.
     */
    static int parse_buffer_netlink_socket(int family, const IfTree& iftree,
					   list<FteX>& fte_list,
					   const vector<uint8_t>& buffer,
					   bool is_nlm_get_only, const FibConfig& fibconfig);

private:
    int get_table(int family, list<FteX>& fte_list);

    NetlinkSocketReader	_ns_reader;
};

#endif // __FEA_DATA_PLANE_FIBCONFIG_FIBCONFIG_TABLE_GET_NETLINK_SOCKET_HH__
