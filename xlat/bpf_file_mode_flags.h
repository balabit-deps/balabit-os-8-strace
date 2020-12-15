/* Generated by ./xlat/gen.sh from ./xlat/bpf_file_mode_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_F_RDONLY) || (defined(HAVE_DECL_BPF_F_RDONLY) && HAVE_DECL_BPF_F_RDONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_RDONLY) == ((1U << 3)), "BPF_F_RDONLY != (1U << 3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_RDONLY (1U << 3)
#endif
#if defined(BPF_F_WRONLY) || (defined(HAVE_DECL_BPF_F_WRONLY) && HAVE_DECL_BPF_F_WRONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_WRONLY) == ((1U << 4)), "BPF_F_WRONLY != (1U << 4)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_WRONLY (1U << 4)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_file_mode_flags in mpers mode

# else

static const struct xlat_data bpf_file_mode_flags_xdata[] = {
 XLAT(BPF_F_RDONLY),
 XLAT(BPF_F_WRONLY),
};
static
const struct xlat bpf_file_mode_flags[1] = { {
 .data = bpf_file_mode_flags_xdata,
 .size = ARRAY_SIZE(bpf_file_mode_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
