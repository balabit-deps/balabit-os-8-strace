/* Generated by ./xlat/gen.sh from ./xlat/ebpf_size.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_DW) || (defined(HAVE_DECL_BPF_DW) && HAVE_DECL_BPF_DW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_DW) == (0x18), "BPF_DW != 0x18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_DW 0x18
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ebpf_size in mpers mode

# else

static const struct xlat_data ebpf_size_xdata[] = {
 XLAT(BPF_DW),
};
static
const struct xlat ebpf_size[1] = { {
 .data = ebpf_size_xdata,
 .size = ARRAY_SIZE(ebpf_size_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
