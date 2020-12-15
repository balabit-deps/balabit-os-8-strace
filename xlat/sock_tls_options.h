/* Generated by ./xlat/gen.sh from ./xlat/sock_tls_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TLS_TX) || (defined(HAVE_DECL_TLS_TX) && HAVE_DECL_TLS_TX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_TX) == (1), "TLS_TX != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TLS_TX 1
#endif
#if defined(TLS_RX) || (defined(HAVE_DECL_TLS_RX) && HAVE_DECL_TLS_RX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_RX) == (2), "TLS_RX != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TLS_RX 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_tls_options in mpers mode

# else

static const struct xlat_data sock_tls_options_xdata[] = {
 [TLS_TX] = XLAT(TLS_TX),
 [TLS_RX] = XLAT(TLS_RX),
};
static
const struct xlat sock_tls_options[1] = { {
 .data = sock_tls_options_xdata,
 .size = ARRAY_SIZE(sock_tls_options_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
