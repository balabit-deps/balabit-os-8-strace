/* Generated by ./xlat/gen.sh from ./xlat/rename_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RENAME_NOREPLACE) || (defined(HAVE_DECL_RENAME_NOREPLACE) && HAVE_DECL_RENAME_NOREPLACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RENAME_NOREPLACE) == (1), "RENAME_NOREPLACE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RENAME_NOREPLACE 1
#endif
#if defined(RENAME_EXCHANGE) || (defined(HAVE_DECL_RENAME_EXCHANGE) && HAVE_DECL_RENAME_EXCHANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RENAME_EXCHANGE) == (2), "RENAME_EXCHANGE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RENAME_EXCHANGE 2
#endif
#if defined(RENAME_WHITEOUT) || (defined(HAVE_DECL_RENAME_WHITEOUT) && HAVE_DECL_RENAME_WHITEOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RENAME_WHITEOUT) == (4), "RENAME_WHITEOUT != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RENAME_WHITEOUT 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rename_flags in mpers mode

# else

static const struct xlat_data rename_flags_xdata[] = {
 XLAT(RENAME_NOREPLACE),
 XLAT(RENAME_EXCHANGE),
 XLAT(RENAME_WHITEOUT),
};
static
const struct xlat rename_flags[1] = { {
 .data = rename_flags_xdata,
 .size = ARRAY_SIZE(rename_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
