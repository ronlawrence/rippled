//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#ifndef RIPPLE_TEST_JTX_H_INCLUDED
#define RIPPLE_TEST_JTX_H_INCLUDED

// Convenience header that includes everything

#include <ripple/json/to_string.h>
#include <test/support/jtx/Account.h>
#include <test/support/jtx/amount.h>
#include <test/support/jtx/balance.h>
#include <test/support/jtx/delivermin.h>
#include <test/support/jtx/Env.h>
#include <test/support/jtx/Env_ss.h>
#include <test/support/jtx/fee.h>
#include <test/support/jtx/flags.h>
#include <test/support/jtx/jtx_json.h>
#include <test/support/jtx/JTx.h>
#include <test/support/jtx/memo.h>
#include <test/support/jtx/multisign.h>
#include <test/support/jtx/noop.h>
#include <test/support/jtx/offer.h>
#include <test/support/jtx/owners.h>
#include <test/support/jtx/paths.h>
#include <test/support/jtx/pay.h>
#include <test/support/jtx/prop.h>
#include <test/support/jtx/quality.h>
#include <test/support/jtx/rate.h>
#include <test/support/jtx/regkey.h>
#include <test/support/jtx/require.h>
#include <test/support/jtx/requires.h>
#include <test/support/jtx/sendmax.h>
#include <test/support/jtx/seq.h>
#include <test/support/jtx/sig.h>
#include <test/support/jtx/tag.h>
#include <test/support/jtx/tags.h>
#include <test/support/jtx/ter.h>
#include <test/support/jtx/ticket.h>
#include <test/support/jtx/trust.h>
#include <test/support/jtx/txflags.h>
#include <test/support/jtx/utility.h>

#endif