// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001-2003 International Computer Science Institute
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

// $XORP: xorp/bgp/harness/coord.hh,v 1.2 2003/03/10 23:20:09 hodson Exp $

#ifndef __BGP_HARNESS_COORD_HH__
#define __BGP_HARNESS_COORD_HH__

#include "xrl/targets/coord_base.hh"
#include "command.hh"

class Coord {
public:
    Coord(EventLoop& eventloop, Command& command);
    void command(const string& command);
    bool pending();
    void datain(const string&  peer, const bool& status, const uint32_t& secs,
		 const uint32_t& micro, const vector<uint8_t>&  data);
    void datain_error(const string&  peer, const string& reason);
    void datain_closed(const string&  peer);
    bool done();
private:
    bool _done;
    EventLoop& _eventloop;
    Command& _command;
};

class XrlCoordTarget : XrlCoordTargetBase {
public:
    XrlCoordTarget(XrlRouter *r, Coord& coord);

    /**
     *  Get name of Xrl Target
     */
    XrlCmdError common_0_1_get_target_name(
	// Output values, 
	string&	name);

    /**
     *  Get version string from Xrl Target
     */
    XrlCmdError common_0_1_get_version(
	// Output values, 
	string&	version);

    /**
     *  Get status from Xrl Target
     */
    XrlCmdError common_0_1_get_status(
				      // Output values,
				      uint32_t& status,
				      string&	reason);

    XrlCmdError coord_0_1_command(
	// Input values, 
	const string&	command);

    XrlCmdError coord_0_1_pending(
	// Output values, 
	bool&	pending);

    XrlCmdError datain_0_1_receive(
	// Input values, 
	const string&	peer, 
	const bool&	status, 
	const uint32_t&	secs, 
	const uint32_t&	micro, 
	const vector<uint8_t>&	data);

    XrlCmdError datain_0_1_error(
	// Input values, 
	const string&	peer, 
	const string&	reason);

    XrlCmdError datain_0_1_closed(
	// Input values, 
        const string&	peer);
private:
    Coord& _coord;
    int _incommand;
};

#endif // __BGP_HARNESS_COORD_HH__
