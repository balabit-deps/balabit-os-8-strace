/* Generated by ./xlat/gen.sh from ./xlat/rtnl_rta_metrics_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RTAX_UNSPEC) || (defined(HAVE_DECL_RTAX_UNSPEC) && HAVE_DECL_RTAX_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_UNSPEC) == (0), "RTAX_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_UNSPEC 0
#endif
#if defined(RTAX_LOCK) || (defined(HAVE_DECL_RTAX_LOCK) && HAVE_DECL_RTAX_LOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_LOCK) == (1), "RTAX_LOCK != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_LOCK 1
#endif
#if defined(RTAX_MTU) || (defined(HAVE_DECL_RTAX_MTU) && HAVE_DECL_RTAX_MTU)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_MTU) == (2), "RTAX_MTU != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_MTU 2
#endif
#if defined(RTAX_WINDOW) || (defined(HAVE_DECL_RTAX_WINDOW) && HAVE_DECL_RTAX_WINDOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_WINDOW) == (3), "RTAX_WINDOW != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_WINDOW 3
#endif
#if defined(RTAX_RTT) || (defined(HAVE_DECL_RTAX_RTT) && HAVE_DECL_RTAX_RTT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_RTT) == (4), "RTAX_RTT != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_RTT 4
#endif
#if defined(RTAX_RTTVAR) || (defined(HAVE_DECL_RTAX_RTTVAR) && HAVE_DECL_RTAX_RTTVAR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_RTTVAR) == (5), "RTAX_RTTVAR != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_RTTVAR 5
#endif
#if defined(RTAX_SSTHRESH) || (defined(HAVE_DECL_RTAX_SSTHRESH) && HAVE_DECL_RTAX_SSTHRESH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_SSTHRESH) == (6), "RTAX_SSTHRESH != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_SSTHRESH 6
#endif
#if defined(RTAX_CWND) || (defined(HAVE_DECL_RTAX_CWND) && HAVE_DECL_RTAX_CWND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_CWND) == (7), "RTAX_CWND != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_CWND 7
#endif
#if defined(RTAX_ADVMSS) || (defined(HAVE_DECL_RTAX_ADVMSS) && HAVE_DECL_RTAX_ADVMSS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_ADVMSS) == (8), "RTAX_ADVMSS != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_ADVMSS 8
#endif
#if defined(RTAX_REORDERING) || (defined(HAVE_DECL_RTAX_REORDERING) && HAVE_DECL_RTAX_REORDERING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_REORDERING) == (9), "RTAX_REORDERING != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_REORDERING 9
#endif
#if defined(RTAX_HOPLIMIT) || (defined(HAVE_DECL_RTAX_HOPLIMIT) && HAVE_DECL_RTAX_HOPLIMIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_HOPLIMIT) == (10), "RTAX_HOPLIMIT != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_HOPLIMIT 10
#endif
#if defined(RTAX_INITCWND) || (defined(HAVE_DECL_RTAX_INITCWND) && HAVE_DECL_RTAX_INITCWND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_INITCWND) == (11), "RTAX_INITCWND != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_INITCWND 11
#endif
#if defined(RTAX_FEATURES) || (defined(HAVE_DECL_RTAX_FEATURES) && HAVE_DECL_RTAX_FEATURES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_FEATURES) == (12), "RTAX_FEATURES != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_FEATURES 12
#endif
#if defined(RTAX_RTO_MIN) || (defined(HAVE_DECL_RTAX_RTO_MIN) && HAVE_DECL_RTAX_RTO_MIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_RTO_MIN) == (13), "RTAX_RTO_MIN != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_RTO_MIN 13
#endif
#if defined(RTAX_INITRWND) || (defined(HAVE_DECL_RTAX_INITRWND) && HAVE_DECL_RTAX_INITRWND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_INITRWND) == (14), "RTAX_INITRWND != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_INITRWND 14
#endif
#if defined(RTAX_QUICKACK) || (defined(HAVE_DECL_RTAX_QUICKACK) && HAVE_DECL_RTAX_QUICKACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_QUICKACK) == (15), "RTAX_QUICKACK != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_QUICKACK 15
#endif
#if defined(RTAX_CC_ALGO) || (defined(HAVE_DECL_RTAX_CC_ALGO) && HAVE_DECL_RTAX_CC_ALGO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTAX_CC_ALGO) == (16), "RTAX_CC_ALGO != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTAX_CC_ALGO 16
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_rta_metrics_attrs in mpers mode

# else

static const struct xlat_data rtnl_rta_metrics_attrs_xdata[] = {
 [RTAX_UNSPEC] = XLAT(RTAX_UNSPEC),
 [RTAX_LOCK] = XLAT(RTAX_LOCK),
 [RTAX_MTU] = XLAT(RTAX_MTU),
 [RTAX_WINDOW] = XLAT(RTAX_WINDOW),
 [RTAX_RTT] = XLAT(RTAX_RTT),
 [RTAX_RTTVAR] = XLAT(RTAX_RTTVAR),
 [RTAX_SSTHRESH] = XLAT(RTAX_SSTHRESH),
 [RTAX_CWND] = XLAT(RTAX_CWND),
 [RTAX_ADVMSS] = XLAT(RTAX_ADVMSS),
 [RTAX_REORDERING] = XLAT(RTAX_REORDERING),
 [RTAX_HOPLIMIT] = XLAT(RTAX_HOPLIMIT),
 [RTAX_INITCWND] = XLAT(RTAX_INITCWND),
 [RTAX_FEATURES] = XLAT(RTAX_FEATURES),
 [RTAX_RTO_MIN] = XLAT(RTAX_RTO_MIN),
 [RTAX_INITRWND] = XLAT(RTAX_INITRWND),
 [RTAX_QUICKACK] = XLAT(RTAX_QUICKACK),
 [RTAX_CC_ALGO] = XLAT(RTAX_CC_ALGO),
};
static
const struct xlat rtnl_rta_metrics_attrs[1] = { {
 .data = rtnl_rta_metrics_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_rta_metrics_attrs_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
