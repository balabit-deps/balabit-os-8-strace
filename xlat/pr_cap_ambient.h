/* Generated by ./xlat/gen.sh from ./xlat/pr_cap_ambient.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PR_CAP_AMBIENT_IS_SET) || (defined(HAVE_DECL_PR_CAP_AMBIENT_IS_SET) && HAVE_DECL_PR_CAP_AMBIENT_IS_SET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_CAP_AMBIENT_IS_SET) == (1), "PR_CAP_AMBIENT_IS_SET != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_CAP_AMBIENT_IS_SET 1
#endif
#if defined(PR_CAP_AMBIENT_RAISE) || (defined(HAVE_DECL_PR_CAP_AMBIENT_RAISE) && HAVE_DECL_PR_CAP_AMBIENT_RAISE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_CAP_AMBIENT_RAISE) == (2), "PR_CAP_AMBIENT_RAISE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_CAP_AMBIENT_RAISE 2
#endif
#if defined(PR_CAP_AMBIENT_LOWER) || (defined(HAVE_DECL_PR_CAP_AMBIENT_LOWER) && HAVE_DECL_PR_CAP_AMBIENT_LOWER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_CAP_AMBIENT_LOWER) == (3), "PR_CAP_AMBIENT_LOWER != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_CAP_AMBIENT_LOWER 3
#endif
#if defined(PR_CAP_AMBIENT_CLEAR_ALL) || (defined(HAVE_DECL_PR_CAP_AMBIENT_CLEAR_ALL) && HAVE_DECL_PR_CAP_AMBIENT_CLEAR_ALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_CAP_AMBIENT_CLEAR_ALL) == (4), "PR_CAP_AMBIENT_CLEAR_ALL != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_CAP_AMBIENT_CLEAR_ALL 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_cap_ambient in mpers mode

# else

static const struct xlat_data pr_cap_ambient_xdata[] = {
 [PR_CAP_AMBIENT_IS_SET] = XLAT(PR_CAP_AMBIENT_IS_SET),
 [PR_CAP_AMBIENT_RAISE] = XLAT(PR_CAP_AMBIENT_RAISE),
 [PR_CAP_AMBIENT_LOWER] = XLAT(PR_CAP_AMBIENT_LOWER),
 [PR_CAP_AMBIENT_CLEAR_ALL] = XLAT(PR_CAP_AMBIENT_CLEAR_ALL),
};
static
const struct xlat pr_cap_ambient[1] = { {
 .data = pr_cap_ambient_xdata,
 .size = ARRAY_SIZE(pr_cap_ambient_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
