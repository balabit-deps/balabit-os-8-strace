/* Generated by ./xlat/gen.sh from ./xlat/sock_udp_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(UDP_CORK) || (defined(HAVE_DECL_UDP_CORK) && HAVE_DECL_UDP_CORK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UDP_CORK) == (1), "UDP_CORK != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UDP_CORK 1
#endif
#if defined(UDP_ENCAP) || (defined(HAVE_DECL_UDP_ENCAP) && HAVE_DECL_UDP_ENCAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UDP_ENCAP) == (100), "UDP_ENCAP != 100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UDP_ENCAP 100
#endif
#if defined(UDP_NO_CHECK6_TX) || (defined(HAVE_DECL_UDP_NO_CHECK6_TX) && HAVE_DECL_UDP_NO_CHECK6_TX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UDP_NO_CHECK6_TX) == (101), "UDP_NO_CHECK6_TX != 101");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UDP_NO_CHECK6_TX 101
#endif
#if defined(UDP_NO_CHECK6_RX) || (defined(HAVE_DECL_UDP_NO_CHECK6_RX) && HAVE_DECL_UDP_NO_CHECK6_RX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UDP_NO_CHECK6_RX) == (102), "UDP_NO_CHECK6_RX != 102");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UDP_NO_CHECK6_RX 102
#endif
#if defined(UDP_SEGMENT) || (defined(HAVE_DECL_UDP_SEGMENT) && HAVE_DECL_UDP_SEGMENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UDP_SEGMENT) == (103), "UDP_SEGMENT != 103");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UDP_SEGMENT 103
#endif
#if defined(UDP_GRO) || (defined(HAVE_DECL_UDP_GRO) && HAVE_DECL_UDP_GRO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UDP_GRO) == (104), "UDP_GRO != 104");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UDP_GRO 104
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_udp_options in mpers mode

# else

static const struct xlat_data sock_udp_options_xdata[] = {
 XLAT(UDP_CORK),
 XLAT(UDP_ENCAP),
 XLAT(UDP_NO_CHECK6_TX),
 XLAT(UDP_NO_CHECK6_RX),
 XLAT(UDP_SEGMENT),
 XLAT(UDP_GRO),
};
static
const struct xlat sock_udp_options[1] = { {
 .data = sock_udp_options_xdata,
 .size = ARRAY_SIZE(sock_udp_options_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
