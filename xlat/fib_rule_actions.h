/* Generated by ./xlat/gen.sh from ./xlat/fib_rule_actions.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FR_ACT_UNSPEC) || (defined(HAVE_DECL_FR_ACT_UNSPEC) && HAVE_DECL_FR_ACT_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_UNSPEC) == (0), "FR_ACT_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_UNSPEC 0
#endif
#if defined(FR_ACT_TO_TBL) || (defined(HAVE_DECL_FR_ACT_TO_TBL) && HAVE_DECL_FR_ACT_TO_TBL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_TO_TBL) == (1), "FR_ACT_TO_TBL != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_TO_TBL 1
#endif
#if defined(FR_ACT_GOTO) || (defined(HAVE_DECL_FR_ACT_GOTO) && HAVE_DECL_FR_ACT_GOTO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_GOTO) == (2), "FR_ACT_GOTO != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_GOTO 2
#endif
#if defined(FR_ACT_NOP) || (defined(HAVE_DECL_FR_ACT_NOP) && HAVE_DECL_FR_ACT_NOP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_NOP) == (3), "FR_ACT_NOP != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_NOP 3
#endif
#if defined(FR_ACT_RES3) || (defined(HAVE_DECL_FR_ACT_RES3) && HAVE_DECL_FR_ACT_RES3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_RES3) == (4), "FR_ACT_RES3 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_RES3 4
#endif
#if defined(FR_ACT_RES4) || (defined(HAVE_DECL_FR_ACT_RES4) && HAVE_DECL_FR_ACT_RES4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_RES4) == (5), "FR_ACT_RES4 != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_RES4 5
#endif
#if defined(FR_ACT_BLACKHOLE) || (defined(HAVE_DECL_FR_ACT_BLACKHOLE) && HAVE_DECL_FR_ACT_BLACKHOLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_BLACKHOLE) == (6), "FR_ACT_BLACKHOLE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_BLACKHOLE 6
#endif
#if defined(FR_ACT_UNREACHABLE) || (defined(HAVE_DECL_FR_ACT_UNREACHABLE) && HAVE_DECL_FR_ACT_UNREACHABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_UNREACHABLE) == (7), "FR_ACT_UNREACHABLE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_UNREACHABLE 7
#endif
#if defined(FR_ACT_PROHIBIT) || (defined(HAVE_DECL_FR_ACT_PROHIBIT) && HAVE_DECL_FR_ACT_PROHIBIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_PROHIBIT) == (8), "FR_ACT_PROHIBIT != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_PROHIBIT 8
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fib_rule_actions in mpers mode

# else

static const struct xlat_data fib_rule_actions_xdata[] = {
 [FR_ACT_UNSPEC] = XLAT(FR_ACT_UNSPEC),
 [FR_ACT_TO_TBL] = XLAT(FR_ACT_TO_TBL),
 [FR_ACT_GOTO] = XLAT(FR_ACT_GOTO),
 [FR_ACT_NOP] = XLAT(FR_ACT_NOP),
 [FR_ACT_RES3] = XLAT(FR_ACT_RES3),
 [FR_ACT_RES4] = XLAT(FR_ACT_RES4),
 [FR_ACT_BLACKHOLE] = XLAT(FR_ACT_BLACKHOLE),
 [FR_ACT_UNREACHABLE] = XLAT(FR_ACT_UNREACHABLE),
 [FR_ACT_PROHIBIT] = XLAT(FR_ACT_PROHIBIT),
};
static
const struct xlat fib_rule_actions[1] = { {
 .data = fib_rule_actions_xdata,
 .size = ARRAY_SIZE(fib_rule_actions_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
