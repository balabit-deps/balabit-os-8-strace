/* Generated by ./xlat/gen.sh from ./xlat/btrfs_scrub_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BTRFS_SCRUB_READONLY) || (defined(HAVE_DECL_BTRFS_SCRUB_READONLY) && HAVE_DECL_BTRFS_SCRUB_READONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_SCRUB_READONLY) == (1), "BTRFS_SCRUB_READONLY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_SCRUB_READONLY 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_scrub_flags[];

# else

static const struct xlat_data btrfs_scrub_flags_xdata[] = {
 XLAT_TYPE(uint64_t, BTRFS_SCRUB_READONLY),
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_scrub_flags[1] = { {
 .data = btrfs_scrub_flags_xdata,
 .size = ARRAY_SIZE(btrfs_scrub_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */