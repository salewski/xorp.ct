/*
 * Copyright (c) 2001-2003 International Computer Science Institute
 * See LICENSE file for licensing, conditions, and warranties on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by '../../xrl/scripts/clnt-gen'.
 */

#ident "$XORP: xorp/xrl/interfaces/bgp_xif.cc,v 1.12 2003/05/06 02:20:02 atanu Exp $"

#include "bgp_xif.hh"

bool
XrlBgpV0p2Client::send_get_bgp_version(
	const char*	the_tgt, 
	const CB0&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_bgp_version");
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall0, cb));
}


/* Unmarshall get_bgp_version */
void
XrlBgpV0p2Client::unmarshall0(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB0		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0);
	return;
    } else if (a && a->size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != 1)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    uint32_t version;
    try {
	a->get("version", version);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    cb->dispatch(e, &version);
}

bool
XrlBgpV0p2Client::send_local_config(
	const char*	the_tgt, 
	const uint32_t&	as, 
	const IPv4&	id, 
	const CB1&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/local_config");
    x.args().add("as", as);
    x.args().add("id", id);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall1, cb));
}


/* Unmarshall local_config */
void
XrlBgpV0p2Client::unmarshall1(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB1		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_set_local_as(
	const char*	the_tgt, 
	const uint32_t&	as, 
	const CB2&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/set_local_as");
    x.args().add("as", as);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall2, cb));
}


/* Unmarshall set_local_as */
void
XrlBgpV0p2Client::unmarshall2(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB2		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_get_local_as(
	const char*	the_tgt, 
	const CB3&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_local_as");
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall3, cb));
}


/* Unmarshall get_local_as */
void
XrlBgpV0p2Client::unmarshall3(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB3		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0);
	return;
    } else if (a && a->size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != 1)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    uint32_t as;
    try {
	a->get("as", as);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    cb->dispatch(e, &as);
}

bool
XrlBgpV0p2Client::send_set_bgpid(
	const char*	the_tgt, 
	const IPv4&	id, 
	const CB4&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/set_bgpid");
    x.args().add("id", id);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall4, cb));
}


/* Unmarshall set_bgpid */
void
XrlBgpV0p2Client::unmarshall4(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB4		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_get_bgpid(
	const char*	the_tgt, 
	const CB5&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_bgpid");
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall5, cb));
}


/* Unmarshall get_bgpid */
void
XrlBgpV0p2Client::unmarshall5(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB5		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0);
	return;
    } else if (a && a->size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != 1)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    IPv4 id;
    try {
	a->get("id", id);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    cb->dispatch(e, &id);
}

bool
XrlBgpV0p2Client::send_add_peer(
	const char*	the_tgt, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const uint32_t&	as, 
	const IPv4&	next_hop, 
	const uint32_t&	holdtime, 
	const CB6&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/add_peer");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    x.args().add("as", as);
    x.args().add("next_hop", next_hop);
    x.args().add("holdtime", holdtime);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall6, cb));
}


/* Unmarshall add_peer */
void
XrlBgpV0p2Client::unmarshall6(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB6		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_delete_peer(
	const char*	the_tgt, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB7&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/delete_peer");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall7, cb));
}


/* Unmarshall delete_peer */
void
XrlBgpV0p2Client::unmarshall7(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB7		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_enable_peer(
	const char*	the_tgt, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB8&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/enable_peer");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall8, cb));
}


/* Unmarshall enable_peer */
void
XrlBgpV0p2Client::unmarshall8(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB8		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_disable_peer(
	const char*	the_tgt, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB9&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/disable_peer");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall9, cb));
}


/* Unmarshall disable_peer */
void
XrlBgpV0p2Client::unmarshall9(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB9		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_next_hop_rewrite_filter(
	const char*	the_tgt, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const IPv4&	next_hop, 
	const CB10&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/next_hop_rewrite_filter");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    x.args().add("next_hop", next_hop);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall10, cb));
}


/* Unmarshall next_hop_rewrite_filter */
void
XrlBgpV0p2Client::unmarshall10(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB10		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_set_peer_state(
	const char*	the_tgt, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const bool&	toggle, 
	const CB11&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/set_peer_state");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    x.args().add("toggle", toggle);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall11, cb));
}


/* Unmarshall set_peer_state */
void
XrlBgpV0p2Client::unmarshall11(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB11		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_get_peer_list_start(
	const char*	the_tgt, 
	const CB12&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_list_start");
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall12, cb));
}


/* Unmarshall get_peer_list_start */
void
XrlBgpV0p2Client::unmarshall12(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB12		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0, 0);
	return;
    } else if (a && a->size() != 2) {
	XLOG_ERROR("Wrong number of arguments (%u != 2)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0);
	return;
    }
    uint32_t token;
    bool more;
    try {
	a->get("token", token);
	a->get("more", more);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0);
	return;
    }
    cb->dispatch(e, &token, &more);
}

bool
XrlBgpV0p2Client::send_get_peer_list_next(
	const char*	the_tgt, 
	const uint32_t&	token, 
	const CB13&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_list_next");
    x.args().add("token", token);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall13, cb));
}


/* Unmarshall get_peer_list_next */
void
XrlBgpV0p2Client::unmarshall13(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB13		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0, 0, 0, 0, 0);
	return;
    } else if (a && a->size() != 5) {
	XLOG_ERROR("Wrong number of arguments (%u != 5)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0);
	return;
    }
    IPv4 local_ip;
    uint32_t local_port;
    IPv4 peer_ip;
    uint32_t peer_port;
    bool more;
    try {
	a->get("local_ip", local_ip);
	a->get("local_port", local_port);
	a->get("peer_ip", peer_ip);
	a->get("peer_port", peer_port);
	a->get("more", more);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0);
	return;
    }
    cb->dispatch(e, &local_ip, &local_port, &peer_ip, &peer_port, &more);
}

bool
XrlBgpV0p2Client::send_get_peer_id(
	const char*	the_tgt, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB14&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_id");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall14, cb));
}


/* Unmarshall get_peer_id */
void
XrlBgpV0p2Client::unmarshall14(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB14		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0);
	return;
    } else if (a && a->size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != 1)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    IPv4 peer_id;
    try {
	a->get("peer_id", peer_id);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    cb->dispatch(e, &peer_id);
}

bool
XrlBgpV0p2Client::send_get_peer_status(
	const char*	the_tgt, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB15&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_status");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall15, cb));
}


/* Unmarshall get_peer_status */
void
XrlBgpV0p2Client::unmarshall15(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB15		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0, 0);
	return;
    } else if (a && a->size() != 2) {
	XLOG_ERROR("Wrong number of arguments (%u != 2)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0);
	return;
    }
    uint32_t peer_state;
    uint32_t admin_status;
    try {
	a->get("peer_state", peer_state);
	a->get("admin_status", admin_status);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0);
	return;
    }
    cb->dispatch(e, &peer_state, &admin_status);
}

bool
XrlBgpV0p2Client::send_get_peer_negotiated_version(
	const char*	the_tgt, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB16&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_negotiated_version");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall16, cb));
}


/* Unmarshall get_peer_negotiated_version */
void
XrlBgpV0p2Client::unmarshall16(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB16		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0);
	return;
    } else if (a && a->size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != 1)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    int32_t neg_version;
    try {
	a->get("neg_version", neg_version);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    cb->dispatch(e, &neg_version);
}

bool
XrlBgpV0p2Client::send_get_peer_as(
	const char*	the_tgt, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB17&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_as");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall17, cb));
}


/* Unmarshall get_peer_as */
void
XrlBgpV0p2Client::unmarshall17(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB17		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0);
	return;
    } else if (a && a->size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != 1)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    uint32_t peer_as;
    try {
	a->get("peer_as", peer_as);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    cb->dispatch(e, &peer_as);
}

bool
XrlBgpV0p2Client::send_get_peer_msg_stats(
	const char*	the_tgt, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB18&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_msg_stats");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall18, cb));
}


/* Unmarshall get_peer_msg_stats */
void
XrlBgpV0p2Client::unmarshall18(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB18		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0, 0, 0, 0, 0, 0);
	return;
    } else if (a && a->size() != 6) {
	XLOG_ERROR("Wrong number of arguments (%u != 6)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0, 0);
	return;
    }
    uint32_t in_updates;
    uint32_t out_updates;
    uint32_t in_msgs;
    uint32_t out_msgs;
    uint32_t last_error;
    uint32_t in_update_elapsed;
    try {
	a->get("in_updates", in_updates);
	a->get("out_updates", out_updates);
	a->get("in_msgs", in_msgs);
	a->get("out_msgs", out_msgs);
	a->get("last_error", last_error);
	a->get("in_update_elapsed", in_update_elapsed);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0, 0);
	return;
    }
    cb->dispatch(e, &in_updates, &out_updates, &in_msgs, &out_msgs, &last_error, &in_update_elapsed);
}

bool
XrlBgpV0p2Client::send_get_peer_established_stats(
	const char*	the_tgt, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB19&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_established_stats");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall19, cb));
}


/* Unmarshall get_peer_established_stats */
void
XrlBgpV0p2Client::unmarshall19(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB19		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0, 0);
	return;
    } else if (a && a->size() != 2) {
	XLOG_ERROR("Wrong number of arguments (%u != 2)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0);
	return;
    }
    uint32_t transitions;
    uint32_t established_time;
    try {
	a->get("transitions", transitions);
	a->get("established_time", established_time);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0);
	return;
    }
    cb->dispatch(e, &transitions, &established_time);
}

bool
XrlBgpV0p2Client::send_get_peer_timer_config(
	const char*	the_tgt, 
	const IPv4&	local_ip, 
	const uint32_t&	local_port, 
	const IPv4&	peer_ip, 
	const uint32_t&	peer_port, 
	const CB20&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_peer_timer_config");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall20, cb));
}


/* Unmarshall get_peer_timer_config */
void
XrlBgpV0p2Client::unmarshall20(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB20		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0, 0, 0, 0, 0, 0, 0);
	return;
    } else if (a && a->size() != 7) {
	XLOG_ERROR("Wrong number of arguments (%u != 7)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0, 0, 0);
	return;
    }
    uint32_t retry_interval;
    uint32_t hold_time;
    uint32_t keep_alive;
    uint32_t hold_time_conf;
    uint32_t keep_alive_conf;
    uint32_t min_as_orgination_interval;
    uint32_t min_route_adv_interval;
    try {
	a->get("retry_interval", retry_interval);
	a->get("hold_time", hold_time);
	a->get("keep_alive", keep_alive);
	a->get("hold_time_conf", hold_time_conf);
	a->get("keep_alive_conf", keep_alive_conf);
	a->get("min_as_orgination_interval", min_as_orgination_interval);
	a->get("min_route_adv_interval", min_route_adv_interval);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0, 0, 0);
	return;
    }
    cb->dispatch(e, &retry_interval, &hold_time, &keep_alive, &hold_time_conf, &keep_alive_conf, &min_as_orgination_interval, &min_route_adv_interval);
}

bool
XrlBgpV0p2Client::send_register_rib(
	const char*	the_tgt, 
	const string&	name, 
	const CB21&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/register_rib");
    x.args().add("name", name);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall21, cb));
}


/* Unmarshall register_rib */
void
XrlBgpV0p2Client::unmarshall21(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB21		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_add_route(
	const char*	the_tgt, 
	const int32_t&	origin, 
	const int32_t&	asnum, 
	const IPv4&	next_hop, 
	const IPv4Net&	nlri, 
	const CB22&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/add_route");
    x.args().add("origin", origin);
    x.args().add("asnum", asnum);
    x.args().add("next_hop", next_hop);
    x.args().add("nlri", nlri);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall22, cb));
}


/* Unmarshall add_route */
void
XrlBgpV0p2Client::unmarshall22(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB22		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_delete_route(
	const char*	the_tgt, 
	const IPv4Net&	nlri, 
	const CB23&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/delete_route");
    x.args().add("nlri", nlri);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall23, cb));
}


/* Unmarshall delete_route */
void
XrlBgpV0p2Client::unmarshall23(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB23		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_get_v4_route_list_start(
	const char*	the_tgt, 
	const CB24&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_v4_route_list_start");
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall24, cb));
}


/* Unmarshall get_v4_route_list_start */
void
XrlBgpV0p2Client::unmarshall24(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB24		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0);
	return;
    } else if (a && a->size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != 1)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    uint32_t token;
    try {
	a->get("token", token);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    cb->dispatch(e, &token);
}

bool
XrlBgpV0p2Client::send_get_v6_route_list_start(
	const char*	the_tgt, 
	const CB25&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_v6_route_list_start");
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall25, cb));
}


/* Unmarshall get_v6_route_list_start */
void
XrlBgpV0p2Client::unmarshall25(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB25		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0);
	return;
    } else if (a && a->size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != 1)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    uint32_t token;
    try {
	a->get("token", token);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0);
	return;
    }
    cb->dispatch(e, &token);
}

bool
XrlBgpV0p2Client::send_get_v4_route_list_next(
	const char*	the_tgt, 
	const uint32_t&	token, 
	const CB26&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_v4_route_list_next");
    x.args().add("token", token);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall26, cb));
}


/* Unmarshall get_v4_route_list_next */
void
XrlBgpV0p2Client::unmarshall26(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB26		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
    } else if (a && a->size() != 11) {
	XLOG_ERROR("Wrong number of arguments (%u != 11)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
    }
    IPv4 peer_id;
    IPv4Net net;
    uint32_t best_and_origin;
    vector<uint8_t> aspath;
    IPv4 nexthop;
    int32_t med;
    int32_t localpref;
    int32_t atomic_agg;
    vector<uint8_t> aggregator;
    int32_t calc_localpref;
    vector<uint8_t> attr_unknown;
    try {
	a->get("peer_id", peer_id);
	a->get("net", net);
	a->get("best_and_origin", best_and_origin);
	a->get("aspath", aspath);
	a->get("nexthop", nexthop);
	a->get("med", med);
	a->get("localpref", localpref);
	a->get("atomic_agg", atomic_agg);
	a->get("aggregator", aggregator);
	a->get("calc_localpref", calc_localpref);
	a->get("attr_unknown", attr_unknown);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
    }
    cb->dispatch(e, &peer_id, &net, &best_and_origin, &aspath, &nexthop, &med, &localpref, &atomic_agg, &aggregator, &calc_localpref, &attr_unknown);
}

bool
XrlBgpV0p2Client::send_get_v6_route_list_next(
	const char*	the_tgt, 
	const uint32_t&	token, 
	const CB27&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/get_v6_route_list_next");
    x.args().add("token", token);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall27, cb));
}


/* Unmarshall get_v6_route_list_next */
void
XrlBgpV0p2Client::unmarshall27(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB27		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
    } else if (a && a->size() != 11) {
	XLOG_ERROR("Wrong number of arguments (%u != 11)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
    }
    IPv4 peer_id;
    IPv6Net net;
    uint32_t best_and_origin;
    vector<uint8_t> aspath;
    IPv6 nexthop;
    int32_t med;
    int32_t localpref;
    int32_t atomic_agg;
    vector<uint8_t> aggregator;
    int32_t calc_localpref;
    vector<uint8_t> attr_unknown;
    try {
	a->get("peer_id", peer_id);
	a->get("net", net);
	a->get("best_and_origin", best_and_origin);
	a->get("aspath", aspath);
	a->get("nexthop", nexthop);
	a->get("med", med);
	a->get("localpref", localpref);
	a->get("atomic_agg", atomic_agg);
	a->get("aggregator", aggregator);
	a->get("calc_localpref", calc_localpref);
	a->get("attr_unknown", attr_unknown);
    } catch (const XrlArgs::XrlAtomNotFound&) {
	XLOG_ERROR("Atom not found");
	cb->dispatch(XrlError::BAD_ARGS(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
    }
    cb->dispatch(e, &peer_id, &net, &best_and_origin, &aspath, &nexthop, &med, &localpref, &atomic_agg, &aggregator, &calc_localpref, &attr_unknown);
}

bool
XrlBgpV0p2Client::send_terminate(
	const char*	the_tgt, 
	const CB28&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/terminate");
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall28, cb));
}


/* Unmarshall terminate */
void
XrlBgpV0p2Client::unmarshall28(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB28		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlBgpV0p2Client::send_set_parameter(
	const char*	the_tgt, 
	const string&	local_ip, 
	const uint32_t&	local_port, 
	const string&	peer_ip, 
	const uint32_t&	peer_port, 
	const string&	parameter, 
	const CB29&	cb
)
{
    Xrl x(the_tgt, "bgp/0.2/set_parameter");
    x.args().add("local_ip", local_ip);
    x.args().add("local_port", local_port);
    x.args().add("peer_ip", peer_ip);
    x.args().add("peer_port", peer_port);
    x.args().add("parameter", parameter);
    return _sender->send(x, callback(this, &XrlBgpV0p2Client::unmarshall29, cb));
}


/* Unmarshall set_parameter */
void
XrlBgpV0p2Client::unmarshall29(
	const XrlError&	e, 
	XrlArgs*	a, 
	CB29		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != 0)", (uint32_t)a->size());
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}
