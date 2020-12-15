/* Generated by ./xlat/gen.sh from ./xlat/clone_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(CLONE_VM) || (defined(HAVE_DECL_CLONE_VM) && HAVE_DECL_CLONE_VM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_VM) == (0x00000100), "CLONE_VM != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_VM 0x00000100
#endif
#if defined(CLONE_FS) || (defined(HAVE_DECL_CLONE_FS) && HAVE_DECL_CLONE_FS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_FS) == (0x00000200), "CLONE_FS != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_FS 0x00000200
#endif
#if defined(CLONE_FILES) || (defined(HAVE_DECL_CLONE_FILES) && HAVE_DECL_CLONE_FILES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_FILES) == (0x00000400), "CLONE_FILES != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_FILES 0x00000400
#endif
#if defined(CLONE_SIGHAND) || (defined(HAVE_DECL_CLONE_SIGHAND) && HAVE_DECL_CLONE_SIGHAND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_SIGHAND) == (0x00000800), "CLONE_SIGHAND != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_SIGHAND 0x00000800
#endif
#if defined(CLONE_PIDFD) || (defined(HAVE_DECL_CLONE_PIDFD) && HAVE_DECL_CLONE_PIDFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_PIDFD) == (0x00001000), "CLONE_PIDFD != 0x00001000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_PIDFD 0x00001000
#endif
#if defined(CLONE_PTRACE) || (defined(HAVE_DECL_CLONE_PTRACE) && HAVE_DECL_CLONE_PTRACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_PTRACE) == (0x00002000), "CLONE_PTRACE != 0x00002000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_PTRACE 0x00002000
#endif
#if defined(CLONE_VFORK) || (defined(HAVE_DECL_CLONE_VFORK) && HAVE_DECL_CLONE_VFORK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_VFORK) == (0x00004000), "CLONE_VFORK != 0x00004000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_VFORK 0x00004000
#endif
#if defined(CLONE_PARENT) || (defined(HAVE_DECL_CLONE_PARENT) && HAVE_DECL_CLONE_PARENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_PARENT) == (0x00008000), "CLONE_PARENT != 0x00008000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_PARENT 0x00008000
#endif
#if defined(CLONE_THREAD) || (defined(HAVE_DECL_CLONE_THREAD) && HAVE_DECL_CLONE_THREAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_THREAD) == (0x00010000), "CLONE_THREAD != 0x00010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_THREAD 0x00010000
#endif
#if defined(CLONE_NEWNS) || (defined(HAVE_DECL_CLONE_NEWNS) && HAVE_DECL_CLONE_NEWNS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWNS) == (0x00020000), "CLONE_NEWNS != 0x00020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWNS 0x00020000
#endif
#if defined(CLONE_SYSVSEM) || (defined(HAVE_DECL_CLONE_SYSVSEM) && HAVE_DECL_CLONE_SYSVSEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_SYSVSEM) == (0x00040000), "CLONE_SYSVSEM != 0x00040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_SYSVSEM 0x00040000
#endif
#if defined(CLONE_SETTLS) || (defined(HAVE_DECL_CLONE_SETTLS) && HAVE_DECL_CLONE_SETTLS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_SETTLS) == (0x00080000), "CLONE_SETTLS != 0x00080000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_SETTLS 0x00080000
#endif
#if defined(CLONE_PARENT_SETTID) || (defined(HAVE_DECL_CLONE_PARENT_SETTID) && HAVE_DECL_CLONE_PARENT_SETTID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_PARENT_SETTID) == (0x00100000), "CLONE_PARENT_SETTID != 0x00100000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_PARENT_SETTID 0x00100000
#endif
#if defined(CLONE_CHILD_CLEARTID) || (defined(HAVE_DECL_CLONE_CHILD_CLEARTID) && HAVE_DECL_CLONE_CHILD_CLEARTID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_CHILD_CLEARTID) == (0x00200000), "CLONE_CHILD_CLEARTID != 0x00200000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_CHILD_CLEARTID 0x00200000
#endif
#if defined(CLONE_UNTRACED) || (defined(HAVE_DECL_CLONE_UNTRACED) && HAVE_DECL_CLONE_UNTRACED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_UNTRACED) == (0x00800000), "CLONE_UNTRACED != 0x00800000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_UNTRACED 0x00800000
#endif
#if defined(CLONE_CHILD_SETTID) || (defined(HAVE_DECL_CLONE_CHILD_SETTID) && HAVE_DECL_CLONE_CHILD_SETTID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_CHILD_SETTID) == (0x01000000), "CLONE_CHILD_SETTID != 0x01000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_CHILD_SETTID 0x01000000
#endif
#if defined(CLONE_NEWCGROUP) || (defined(HAVE_DECL_CLONE_NEWCGROUP) && HAVE_DECL_CLONE_NEWCGROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWCGROUP) == (0x02000000), "CLONE_NEWCGROUP != 0x02000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWCGROUP 0x02000000
#endif
#if defined(CLONE_NEWUTS) || (defined(HAVE_DECL_CLONE_NEWUTS) && HAVE_DECL_CLONE_NEWUTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWUTS) == (0x04000000), "CLONE_NEWUTS != 0x04000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWUTS 0x04000000
#endif
#if defined(CLONE_NEWIPC) || (defined(HAVE_DECL_CLONE_NEWIPC) && HAVE_DECL_CLONE_NEWIPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWIPC) == (0x08000000), "CLONE_NEWIPC != 0x08000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWIPC 0x08000000
#endif
#if defined(CLONE_NEWUSER) || (defined(HAVE_DECL_CLONE_NEWUSER) && HAVE_DECL_CLONE_NEWUSER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWUSER) == (0x10000000), "CLONE_NEWUSER != 0x10000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWUSER 0x10000000
#endif
#if defined(CLONE_NEWPID) || (defined(HAVE_DECL_CLONE_NEWPID) && HAVE_DECL_CLONE_NEWPID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWPID) == (0x20000000), "CLONE_NEWPID != 0x20000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWPID 0x20000000
#endif
#if defined(CLONE_NEWNET) || (defined(HAVE_DECL_CLONE_NEWNET) && HAVE_DECL_CLONE_NEWNET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWNET) == (0x40000000), "CLONE_NEWNET != 0x40000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWNET 0x40000000
#endif
#if defined(CLONE_IO) || (defined(HAVE_DECL_CLONE_IO) && HAVE_DECL_CLONE_IO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_IO) == (0x80000000), "CLONE_IO != 0x80000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_IO 0x80000000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat clone_flags in mpers mode

# else

static const struct xlat_data clone_flags_xdata[] = {
 XLAT(CLONE_VM),
 XLAT(CLONE_FS),
 XLAT(CLONE_FILES),
 XLAT(CLONE_SIGHAND),
 XLAT(CLONE_PIDFD),
 XLAT(CLONE_PTRACE),
 XLAT(CLONE_VFORK),
 XLAT(CLONE_PARENT),
 XLAT(CLONE_THREAD),
 XLAT(CLONE_NEWNS),
 XLAT(CLONE_SYSVSEM),
 XLAT(CLONE_SETTLS),
 XLAT(CLONE_PARENT_SETTID),
 XLAT(CLONE_CHILD_CLEARTID),

 XLAT(CLONE_UNTRACED),
 XLAT(CLONE_CHILD_SETTID),
 XLAT(CLONE_NEWCGROUP),
 XLAT(CLONE_NEWUTS),
 XLAT(CLONE_NEWIPC),
 XLAT(CLONE_NEWUSER),
 XLAT(CLONE_NEWPID),
 XLAT(CLONE_NEWNET),
 XLAT(CLONE_IO),
};
static
const struct xlat clone_flags[1] = { {
 .data = clone_flags_xdata,
 .size = ARRAY_SIZE(clone_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
