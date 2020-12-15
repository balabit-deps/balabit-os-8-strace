/* Generated by ./xlat/gen.sh from ./xlat/btrfs_qgroup_ctl_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_qgroup_ctl_cmds[];

# else

static const struct xlat_data btrfs_qgroup_ctl_cmds_xdata[] = {
#if defined(BTRFS_QUOTA_CTL_ENABLE) || (defined(HAVE_DECL_BTRFS_QUOTA_CTL_ENABLE) && HAVE_DECL_BTRFS_QUOTA_CTL_ENABLE)
  XLAT_TYPE(uint64_t, BTRFS_QUOTA_CTL_ENABLE),
#endif
#if defined(BTRFS_QUOTA_CTL_DISABLE) || (defined(HAVE_DECL_BTRFS_QUOTA_CTL_DISABLE) && HAVE_DECL_BTRFS_QUOTA_CTL_DISABLE)
  XLAT_TYPE(uint64_t, BTRFS_QUOTA_CTL_DISABLE),
#endif
#if defined(BTRFS_QUOTA_CTL_RESCAN__NOTUSED) || (defined(HAVE_DECL_BTRFS_QUOTA_CTL_RESCAN__NOTUSED) && HAVE_DECL_BTRFS_QUOTA_CTL_RESCAN__NOTUSED)
  XLAT_TYPE(uint64_t, BTRFS_QUOTA_CTL_RESCAN__NOTUSED),
#endif
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_qgroup_ctl_cmds[1] = { {
 .data = btrfs_qgroup_ctl_cmds_xdata,
 .size = ARRAY_SIZE(btrfs_qgroup_ctl_cmds_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
