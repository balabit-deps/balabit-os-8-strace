/* Generated by ./xlat/gen.sh from ./xlat/fan_event_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FAN_ACCESS) || (defined(HAVE_DECL_FAN_ACCESS) && HAVE_DECL_FAN_ACCESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ACCESS) == (0x00000001), "FAN_ACCESS != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ACCESS 0x00000001
#endif
#if defined(FAN_MODIFY) || (defined(HAVE_DECL_FAN_MODIFY) && HAVE_DECL_FAN_MODIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MODIFY) == (0x00000002), "FAN_MODIFY != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MODIFY 0x00000002
#endif
#if defined(FAN_ATTRIB) || (defined(HAVE_DECL_FAN_ATTRIB) && HAVE_DECL_FAN_ATTRIB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ATTRIB) == (0x00000004), "FAN_ATTRIB != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ATTRIB 0x00000004
#endif
#if defined(FAN_CLOSE_WRITE) || (defined(HAVE_DECL_FAN_CLOSE_WRITE) && HAVE_DECL_FAN_CLOSE_WRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CLOSE_WRITE) == (0x00000008), "FAN_CLOSE_WRITE != 0x00000008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CLOSE_WRITE 0x00000008
#endif
#if defined(FAN_CLOSE_NOWRITE) || (defined(HAVE_DECL_FAN_CLOSE_NOWRITE) && HAVE_DECL_FAN_CLOSE_NOWRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CLOSE_NOWRITE) == (0x00000010), "FAN_CLOSE_NOWRITE != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CLOSE_NOWRITE 0x00000010
#endif
#if defined(FAN_OPEN) || (defined(HAVE_DECL_FAN_OPEN) && HAVE_DECL_FAN_OPEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_OPEN) == (0x00000020), "FAN_OPEN != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_OPEN 0x00000020
#endif
#if defined(FAN_MOVED_FROM) || (defined(HAVE_DECL_FAN_MOVED_FROM) && HAVE_DECL_FAN_MOVED_FROM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MOVED_FROM) == (0x00000040), "FAN_MOVED_FROM != 0x00000040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MOVED_FROM 0x00000040
#endif
#if defined(FAN_MOVED_TO) || (defined(HAVE_DECL_FAN_MOVED_TO) && HAVE_DECL_FAN_MOVED_TO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MOVED_TO) == (0x00000080), "FAN_MOVED_TO != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MOVED_TO 0x00000080
#endif
#if defined(FAN_CREATE) || (defined(HAVE_DECL_FAN_CREATE) && HAVE_DECL_FAN_CREATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CREATE) == (0x00000100), "FAN_CREATE != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CREATE 0x00000100
#endif
#if defined(FAN_DELETE) || (defined(HAVE_DECL_FAN_DELETE) && HAVE_DECL_FAN_DELETE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_DELETE) == (0x00000200), "FAN_DELETE != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_DELETE 0x00000200
#endif
#if defined(FAN_DELETE_SELF) || (defined(HAVE_DECL_FAN_DELETE_SELF) && HAVE_DECL_FAN_DELETE_SELF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_DELETE_SELF) == (0x00000400), "FAN_DELETE_SELF != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_DELETE_SELF 0x00000400
#endif
#if defined(FAN_MOVE_SELF) || (defined(HAVE_DECL_FAN_MOVE_SELF) && HAVE_DECL_FAN_MOVE_SELF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MOVE_SELF) == (0x00000800), "FAN_MOVE_SELF != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MOVE_SELF 0x00000800
#endif
#if defined(FAN_OPEN_EXEC) || (defined(HAVE_DECL_FAN_OPEN_EXEC) && HAVE_DECL_FAN_OPEN_EXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_OPEN_EXEC) == (0x00001000), "FAN_OPEN_EXEC != 0x00001000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_OPEN_EXEC 0x00001000
#endif
#if defined(FAN_Q_OVERFLOW) || (defined(HAVE_DECL_FAN_Q_OVERFLOW) && HAVE_DECL_FAN_Q_OVERFLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_Q_OVERFLOW) == (0x00004000), "FAN_Q_OVERFLOW != 0x00004000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_Q_OVERFLOW 0x00004000
#endif
#if defined(FAN_OPEN_PERM) || (defined(HAVE_DECL_FAN_OPEN_PERM) && HAVE_DECL_FAN_OPEN_PERM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_OPEN_PERM) == (0x00010000), "FAN_OPEN_PERM != 0x00010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_OPEN_PERM 0x00010000
#endif
#if defined(FAN_ACCESS_PERM) || (defined(HAVE_DECL_FAN_ACCESS_PERM) && HAVE_DECL_FAN_ACCESS_PERM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ACCESS_PERM) == (0x00020000), "FAN_ACCESS_PERM != 0x00020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ACCESS_PERM 0x00020000
#endif
#if defined(FAN_OPEN_EXEC_PERM) || (defined(HAVE_DECL_FAN_OPEN_EXEC_PERM) && HAVE_DECL_FAN_OPEN_EXEC_PERM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_OPEN_EXEC_PERM) == (0x00040000), "FAN_OPEN_EXEC_PERM != 0x00040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_OPEN_EXEC_PERM 0x00040000
#endif
#if defined(FAN_ONDIR) || (defined(HAVE_DECL_FAN_ONDIR) && HAVE_DECL_FAN_ONDIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_ONDIR) == (0x40000000), "FAN_ONDIR != 0x40000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_ONDIR 0x40000000
#endif
#if defined(FAN_EVENT_ON_CHILD) || (defined(HAVE_DECL_FAN_EVENT_ON_CHILD) && HAVE_DECL_FAN_EVENT_ON_CHILD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_EVENT_ON_CHILD) == (0x08000000), "FAN_EVENT_ON_CHILD != 0x08000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_EVENT_ON_CHILD 0x08000000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fan_event_flags in mpers mode

# else

static const struct xlat_data fan_event_flags_xdata[] = {
 XLAT(FAN_ACCESS),
 XLAT(FAN_MODIFY),
 XLAT(FAN_ATTRIB),
 XLAT(FAN_CLOSE_WRITE),
 XLAT(FAN_CLOSE_NOWRITE),
 XLAT(FAN_OPEN),
 XLAT(FAN_MOVED_FROM),
 XLAT(FAN_MOVED_TO),
 XLAT(FAN_CREATE),
 XLAT(FAN_DELETE),
 XLAT(FAN_DELETE_SELF),
 XLAT(FAN_MOVE_SELF),
 XLAT(FAN_OPEN_EXEC),
 XLAT(FAN_Q_OVERFLOW),
 XLAT(FAN_OPEN_PERM),
 XLAT(FAN_ACCESS_PERM),
 XLAT(FAN_OPEN_EXEC_PERM),
 XLAT(FAN_ONDIR),
 XLAT(FAN_EVENT_ON_CHILD),
};
static
const struct xlat fan_event_flags[1] = { {
 .data = fan_event_flags_xdata,
 .size = ARRAY_SIZE(fan_event_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
