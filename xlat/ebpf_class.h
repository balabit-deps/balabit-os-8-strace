/* Generated by ./xlat/gen.sh from ./xlat/ebpf_class.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_LD) || (defined(HAVE_DECL_BPF_LD) && HAVE_DECL_BPF_LD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_LD) == (0x0), "BPF_LD != 0x0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_LD 0x0
#endif
#if defined(BPF_LDX) || (defined(HAVE_DECL_BPF_LDX) && HAVE_DECL_BPF_LDX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_LDX) == (0x1), "BPF_LDX != 0x1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_LDX 0x1
#endif
#if defined(BPF_ST) || (defined(HAVE_DECL_BPF_ST) && HAVE_DECL_BPF_ST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ST) == (0x2), "BPF_ST != 0x2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ST 0x2
#endif
#if defined(BPF_STX) || (defined(HAVE_DECL_BPF_STX) && HAVE_DECL_BPF_STX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_STX) == (0x3), "BPF_STX != 0x3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_STX 0x3
#endif
#if defined(BPF_ALU) || (defined(HAVE_DECL_BPF_ALU) && HAVE_DECL_BPF_ALU)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ALU) == (0x4), "BPF_ALU != 0x4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ALU 0x4
#endif
#if defined(BPF_JMP) || (defined(HAVE_DECL_BPF_JMP) && HAVE_DECL_BPF_JMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JMP) == (0x5), "BPF_JMP != 0x5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JMP 0x5
#endif
#if defined(BPF_JMP32) || (defined(HAVE_DECL_BPF_JMP32) && HAVE_DECL_BPF_JMP32)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JMP32) == (0x6), "BPF_JMP32 != 0x6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JMP32 0x6
#endif
#if defined(BPF_ALU64) || (defined(HAVE_DECL_BPF_ALU64) && HAVE_DECL_BPF_ALU64)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ALU64) == (0x7), "BPF_ALU64 != 0x7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ALU64 0x7
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ebpf_class in mpers mode

# else

static const struct xlat_data ebpf_class_xdata[] = {
 [BPF_LD] = XLAT(BPF_LD),
 [BPF_LDX] = XLAT(BPF_LDX),
 [BPF_ST] = XLAT(BPF_ST),
 [BPF_STX] = XLAT(BPF_STX),
 [BPF_ALU] = XLAT(BPF_ALU),
 [BPF_JMP] = XLAT(BPF_JMP),
 [BPF_JMP32] = XLAT(BPF_JMP32),
 [BPF_ALU64] = XLAT(BPF_ALU64),
};
static
const struct xlat ebpf_class[1] = { {
 .data = ebpf_class_xdata,
 .size = ARRAY_SIZE(ebpf_class_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
