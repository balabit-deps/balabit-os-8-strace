/* Generated by ./xlat/gen.sh from ./xlat/rtnl_ifla_port_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IFLA_PORT_UNSPEC) || (defined(HAVE_DECL_IFLA_PORT_UNSPEC) && HAVE_DECL_IFLA_PORT_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_PORT_UNSPEC) == (0), "IFLA_PORT_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_PORT_UNSPEC 0
#endif
#if defined(IFLA_PORT_VF) || (defined(HAVE_DECL_IFLA_PORT_VF) && HAVE_DECL_IFLA_PORT_VF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_PORT_VF) == (1), "IFLA_PORT_VF != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_PORT_VF 1
#endif
#if defined(IFLA_PORT_PROFILE) || (defined(HAVE_DECL_IFLA_PORT_PROFILE) && HAVE_DECL_IFLA_PORT_PROFILE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_PORT_PROFILE) == (2), "IFLA_PORT_PROFILE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_PORT_PROFILE 2
#endif
#if defined(IFLA_PORT_VSI_TYPE) || (defined(HAVE_DECL_IFLA_PORT_VSI_TYPE) && HAVE_DECL_IFLA_PORT_VSI_TYPE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_PORT_VSI_TYPE) == (3), "IFLA_PORT_VSI_TYPE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_PORT_VSI_TYPE 3
#endif
#if defined(IFLA_PORT_INSTANCE_UUID) || (defined(HAVE_DECL_IFLA_PORT_INSTANCE_UUID) && HAVE_DECL_IFLA_PORT_INSTANCE_UUID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_PORT_INSTANCE_UUID) == (4), "IFLA_PORT_INSTANCE_UUID != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_PORT_INSTANCE_UUID 4
#endif
#if defined(IFLA_PORT_HOST_UUID) || (defined(HAVE_DECL_IFLA_PORT_HOST_UUID) && HAVE_DECL_IFLA_PORT_HOST_UUID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_PORT_HOST_UUID) == (5), "IFLA_PORT_HOST_UUID != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_PORT_HOST_UUID 5
#endif
#if defined(IFLA_PORT_REQUEST) || (defined(HAVE_DECL_IFLA_PORT_REQUEST) && HAVE_DECL_IFLA_PORT_REQUEST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_PORT_REQUEST) == (6), "IFLA_PORT_REQUEST != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_PORT_REQUEST 6
#endif
#if defined(IFLA_PORT_RESPONSE) || (defined(HAVE_DECL_IFLA_PORT_RESPONSE) && HAVE_DECL_IFLA_PORT_RESPONSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_PORT_RESPONSE) == (7), "IFLA_PORT_RESPONSE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_PORT_RESPONSE 7
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_port_attrs in mpers mode

# else

static const struct xlat_data rtnl_ifla_port_attrs_xdata[] = {
 [IFLA_PORT_UNSPEC] = XLAT(IFLA_PORT_UNSPEC),
 [IFLA_PORT_VF] = XLAT(IFLA_PORT_VF),
 [IFLA_PORT_PROFILE] = XLAT(IFLA_PORT_PROFILE),
 [IFLA_PORT_VSI_TYPE] = XLAT(IFLA_PORT_VSI_TYPE),
 [IFLA_PORT_INSTANCE_UUID] = XLAT(IFLA_PORT_INSTANCE_UUID),
 [IFLA_PORT_HOST_UUID] = XLAT(IFLA_PORT_HOST_UUID),
 [IFLA_PORT_REQUEST] = XLAT(IFLA_PORT_REQUEST),
 [IFLA_PORT_RESPONSE] = XLAT(IFLA_PORT_RESPONSE),
};
static
const struct xlat rtnl_ifla_port_attrs[1] = { {
 .data = rtnl_ifla_port_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_port_attrs_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
