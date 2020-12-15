/* Generated by ./xlat/gen.sh from ./xlat/nl_selinux_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SELNL_MSG_SETENFORCE) || (defined(HAVE_DECL_SELNL_MSG_SETENFORCE) && HAVE_DECL_SELNL_MSG_SETENFORCE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SELNL_MSG_SETENFORCE) == (0x10), "SELNL_MSG_SETENFORCE != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SELNL_MSG_SETENFORCE 0x10
#endif
#if defined(SELNL_MSG_POLICYLOAD) || (defined(HAVE_DECL_SELNL_MSG_POLICYLOAD) && HAVE_DECL_SELNL_MSG_POLICYLOAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SELNL_MSG_POLICYLOAD) == (0x11), "SELNL_MSG_POLICYLOAD != 0x11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SELNL_MSG_POLICYLOAD 0x11
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nl_selinux_types in mpers mode

# else

static const struct xlat_data nl_selinux_types_xdata[] = {
 XLAT(SELNL_MSG_SETENFORCE),
 XLAT(SELNL_MSG_POLICYLOAD),
};
static
const struct xlat nl_selinux_types[1] = { {
 .data = nl_selinux_types_xdata,
 .size = ARRAY_SIZE(nl_selinux_types_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
