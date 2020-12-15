/* Generated by ./xlat/gen.sh from ./xlat/sock_rxrpc_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RXRPC_SECURITY_KEY) || (defined(HAVE_DECL_RXRPC_SECURITY_KEY) && HAVE_DECL_RXRPC_SECURITY_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RXRPC_SECURITY_KEY) == (1), "RXRPC_SECURITY_KEY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RXRPC_SECURITY_KEY 1
#endif
#if defined(RXRPC_SECURITY_KEYRING) || (defined(HAVE_DECL_RXRPC_SECURITY_KEYRING) && HAVE_DECL_RXRPC_SECURITY_KEYRING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RXRPC_SECURITY_KEYRING) == (2), "RXRPC_SECURITY_KEYRING != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RXRPC_SECURITY_KEYRING 2
#endif
#if defined(RXRPC_EXCLUSIVE_CONNECTION) || (defined(HAVE_DECL_RXRPC_EXCLUSIVE_CONNECTION) && HAVE_DECL_RXRPC_EXCLUSIVE_CONNECTION)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RXRPC_EXCLUSIVE_CONNECTION) == (3), "RXRPC_EXCLUSIVE_CONNECTION != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RXRPC_EXCLUSIVE_CONNECTION 3
#endif
#if defined(RXRPC_MIN_SECURITY_LEVEL) || (defined(HAVE_DECL_RXRPC_MIN_SECURITY_LEVEL) && HAVE_DECL_RXRPC_MIN_SECURITY_LEVEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RXRPC_MIN_SECURITY_LEVEL) == (4), "RXRPC_MIN_SECURITY_LEVEL != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RXRPC_MIN_SECURITY_LEVEL 4
#endif
#if defined(RXRPC_UPGRADEABLE_SERVICE) || (defined(HAVE_DECL_RXRPC_UPGRADEABLE_SERVICE) && HAVE_DECL_RXRPC_UPGRADEABLE_SERVICE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RXRPC_UPGRADEABLE_SERVICE) == (5), "RXRPC_UPGRADEABLE_SERVICE != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RXRPC_UPGRADEABLE_SERVICE 5
#endif
#if defined(RXRPC_SUPPORTED_CMSG) || (defined(HAVE_DECL_RXRPC_SUPPORTED_CMSG) && HAVE_DECL_RXRPC_SUPPORTED_CMSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RXRPC_SUPPORTED_CMSG) == (6), "RXRPC_SUPPORTED_CMSG != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RXRPC_SUPPORTED_CMSG 6
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_rxrpc_options in mpers mode

# else

static const struct xlat_data sock_rxrpc_options_xdata[] = {
 [RXRPC_SECURITY_KEY] = XLAT(RXRPC_SECURITY_KEY),
 [RXRPC_SECURITY_KEYRING] = XLAT(RXRPC_SECURITY_KEYRING),
 [RXRPC_EXCLUSIVE_CONNECTION] = XLAT(RXRPC_EXCLUSIVE_CONNECTION),
 [RXRPC_MIN_SECURITY_LEVEL] = XLAT(RXRPC_MIN_SECURITY_LEVEL),
 [RXRPC_UPGRADEABLE_SERVICE] = XLAT(RXRPC_UPGRADEABLE_SERVICE),
 [RXRPC_SUPPORTED_CMSG] = XLAT(RXRPC_SUPPORTED_CMSG),
};
static
const struct xlat sock_rxrpc_options[1] = { {
 .data = sock_rxrpc_options_xdata,
 .size = ARRAY_SIZE(sock_rxrpc_options_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
