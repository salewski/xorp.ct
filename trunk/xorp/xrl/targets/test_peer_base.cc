/*
 * Copyright (c) 2001-2003 International Computer Science Institute
 * See LICENSE file for licensing, conditions, and warranties on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by '../scripts/tgt-gen'.
 */

#ident "$XORP: xorp/xrl/targets/test_peer_base.cc,v 1.3 2003/03/10 23:01:36 hodson Exp $"


#include "test_peer_base.hh"

const XrlCmdError
XrlTestPeerTargetBase::handle_common_0_1_get_target_name(const Xrl& xrl, XrlArgs* args)
{
    if (xrl.const_args().size() != 0) { 
	XLOG_ERROR("Wrong number of arguments (%u != 0) handling common/0.1/get_target_name", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    if (args == 0) {
	XLOG_FATAL("Return list empty");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    string name; 
    try {
	XrlCmdError e = common_0_1_get_target_name(
	    name);
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for common/0.1/get_target_name failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }

    /* Marshall return values */
    try {
	args->add("name", name);
    } catch (const XrlArgs::XrlAtomFound& ) {
	XLOG_FATAL("Duplicate atom name"); /* XXX Should never happen */
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_common_0_1_get_version(const Xrl& xrl, XrlArgs* args)
{
    if (xrl.const_args().size() != 0) { 
	XLOG_ERROR("Wrong number of arguments (%u != 0) handling common/0.1/get_version", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    if (args == 0) {
	XLOG_FATAL("Return list empty");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    string version; 
    try {
	XrlCmdError e = common_0_1_get_version(
	    version);
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for common/0.1/get_version failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }

    /* Marshall return values */
    try {
	args->add("version", version);
    } catch (const XrlArgs::XrlAtomFound& ) {
	XLOG_FATAL("Duplicate atom name"); /* XXX Should never happen */
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_common_0_1_get_status(const Xrl& xrl, XrlArgs* args)
{
    if (xrl.const_args().size() != 0) { 
	XLOG_ERROR("Wrong number of arguments (%u != 0) handling common/0.1/get_status", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    if (args == 0) {
	XLOG_FATAL("Return list empty");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    uint32_t status; 
    string reason; 
    try {
	XrlCmdError e = common_0_1_get_status(
	    status, 
	    reason);
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for common/0.1/get_status failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }

    /* Marshall return values */
    try {
	args->add("status", status);
	args->add("reason", reason);
    } catch (const XrlArgs::XrlAtomFound& ) {
	XLOG_FATAL("Duplicate atom name"); /* XXX Should never happen */
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_test_peer_0_1_register(const Xrl& xrl, XrlArgs* /* args */)
{
    if (xrl.const_args().size() != 1) { 
	XLOG_ERROR("Wrong number of arguments (%u != 1) handling test_peer/0.1/register", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = test_peer_0_1_register(
	    xrl.const_args().get_string("coordinator"));
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for test_peer/0.1/register failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_test_peer_0_1_packetisation(const Xrl& xrl, XrlArgs* /* args */)
{
    if (xrl.const_args().size() != 1) { 
	XLOG_ERROR("Wrong number of arguments (%u != 1) handling test_peer/0.1/packetisation", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = test_peer_0_1_packetisation(
	    xrl.const_args().get_string("protocol"));
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for test_peer/0.1/packetisation failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_test_peer_0_1_connect(const Xrl& xrl, XrlArgs* /* args */)
{
    if (xrl.const_args().size() != 2) { 
	XLOG_ERROR("Wrong number of arguments (%u != 2) handling test_peer/0.1/connect", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = test_peer_0_1_connect(
	    xrl.const_args().get_string("host"), 
	    xrl.const_args().get_uint32("port"));
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for test_peer/0.1/connect failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_test_peer_0_1_listen(const Xrl& xrl, XrlArgs* /* args */)
{
    if (xrl.const_args().size() != 2) { 
	XLOG_ERROR("Wrong number of arguments (%u != 2) handling test_peer/0.1/listen", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = test_peer_0_1_listen(
	    xrl.const_args().get_string("address"), 
	    xrl.const_args().get_uint32("port"));
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for test_peer/0.1/listen failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_test_peer_0_1_send(const Xrl& xrl, XrlArgs* /* args */)
{
    if (xrl.const_args().size() != 1) { 
	XLOG_ERROR("Wrong number of arguments (%u != 1) handling test_peer/0.1/send", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = test_peer_0_1_send(
	    xrl.const_args().get_binary("data"));
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for test_peer/0.1/send failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_test_peer_0_1_disconnect(const Xrl& xrl, XrlArgs* /* args */)
{
    if (xrl.const_args().size() != 0) { 
	XLOG_ERROR("Wrong number of arguments (%u != 0) handling test_peer/0.1/disconnect", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = test_peer_0_1_disconnect();
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for test_peer/0.1/disconnect failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_test_peer_0_1_reset(const Xrl& xrl, XrlArgs* /* args */)
{
    if (xrl.const_args().size() != 0) { 
	XLOG_ERROR("Wrong number of arguments (%u != 0) handling test_peer/0.1/reset", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = test_peer_0_1_reset();
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for test_peer/0.1/reset failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestPeerTargetBase::handle_test_peer_0_1_terminate(const Xrl& xrl, XrlArgs* /* args */)
{
    if (xrl.const_args().size() != 0) { 
	XLOG_ERROR("Wrong number of arguments (%u != 0) handling test_peer/0.1/terminate", (uint32_t)xrl.const_args().size());
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = test_peer_0_1_terminate();
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for test_peer/0.1/terminate failed: %s \"%s\"",
            		 e.str().c_str(), e.note().c_str());
	    return e;
        }
    } catch (const XrlArgs::XrlAtomNotFound& e) {
	XLOG_ERROR("Argument not found");
	return XrlCmdError::BAD_ARGS();
    }
    return XrlCmdError::OKAY();
}

