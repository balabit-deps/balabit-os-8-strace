/* Generated by ./xlat/gen.sh from ./xlat/ebpf_regs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_REG_0) || (defined(HAVE_DECL_BPF_REG_0) && HAVE_DECL_BPF_REG_0)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_0) == (0), "BPF_REG_0 != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_0 0
#endif
#if defined(BPF_REG_1) || (defined(HAVE_DECL_BPF_REG_1) && HAVE_DECL_BPF_REG_1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_1) == (1), "BPF_REG_1 != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_1 1
#endif
#if defined(BPF_REG_2) || (defined(HAVE_DECL_BPF_REG_2) && HAVE_DECL_BPF_REG_2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_2) == (2), "BPF_REG_2 != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_2 2
#endif
#if defined(BPF_REG_3) || (defined(HAVE_DECL_BPF_REG_3) && HAVE_DECL_BPF_REG_3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_3) == (3), "BPF_REG_3 != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_3 3
#endif
#if defined(BPF_REG_4) || (defined(HAVE_DECL_BPF_REG_4) && HAVE_DECL_BPF_REG_4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_4) == (4), "BPF_REG_4 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_4 4
#endif
#if defined(BPF_REG_5) || (defined(HAVE_DECL_BPF_REG_5) && HAVE_DECL_BPF_REG_5)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_5) == (5), "BPF_REG_5 != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_5 5
#endif
#if defined(BPF_REG_6) || (defined(HAVE_DECL_BPF_REG_6) && HAVE_DECL_BPF_REG_6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_6) == (6), "BPF_REG_6 != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_6 6
#endif
#if defined(BPF_REG_7) || (defined(HAVE_DECL_BPF_REG_7) && HAVE_DECL_BPF_REG_7)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_7) == (7), "BPF_REG_7 != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_7 7
#endif
#if defined(BPF_REG_8) || (defined(HAVE_DECL_BPF_REG_8) && HAVE_DECL_BPF_REG_8)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_8) == (8), "BPF_REG_8 != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_8 8
#endif
#if defined(BPF_REG_9) || (defined(HAVE_DECL_BPF_REG_9) && HAVE_DECL_BPF_REG_9)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_9) == (9), "BPF_REG_9 != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_9 9
#endif
#if defined(BPF_REG_10) || (defined(HAVE_DECL_BPF_REG_10) && HAVE_DECL_BPF_REG_10)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_REG_10) == (10), "BPF_REG_10 != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_REG_10 10
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ebpf_regs in mpers mode

# else

static const struct xlat_data ebpf_regs_xdata[] = {
 [BPF_REG_0] = XLAT(BPF_REG_0),
 [BPF_REG_1] = XLAT(BPF_REG_1),
 [BPF_REG_2] = XLAT(BPF_REG_2),
 [BPF_REG_3] = XLAT(BPF_REG_3),
 [BPF_REG_4] = XLAT(BPF_REG_4),
 [BPF_REG_5] = XLAT(BPF_REG_5),
 [BPF_REG_6] = XLAT(BPF_REG_6),
 [BPF_REG_7] = XLAT(BPF_REG_7),
 [BPF_REG_8] = XLAT(BPF_REG_8),
 [BPF_REG_9] = XLAT(BPF_REG_9),
 [BPF_REG_10] = XLAT(BPF_REG_10),
};
static
const struct xlat ebpf_regs[1] = { {
 .data = ebpf_regs_xdata,
 .size = ARRAY_SIZE(ebpf_regs_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
