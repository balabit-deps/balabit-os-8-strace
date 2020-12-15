/* Generated by ./xlat/gen.sh from ./xlat/perf_event_open_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PERF_FLAG_FD_NO_GROUP) || (defined(HAVE_DECL_PERF_FLAG_FD_NO_GROUP) && HAVE_DECL_PERF_FLAG_FD_NO_GROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_FLAG_FD_NO_GROUP) == (1), "PERF_FLAG_FD_NO_GROUP != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_FLAG_FD_NO_GROUP 1
#endif
#if defined(PERF_FLAG_FD_OUTPUT) || (defined(HAVE_DECL_PERF_FLAG_FD_OUTPUT) && HAVE_DECL_PERF_FLAG_FD_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_FLAG_FD_OUTPUT) == (2), "PERF_FLAG_FD_OUTPUT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_FLAG_FD_OUTPUT 2
#endif
#if defined(PERF_FLAG_PID_CGROUP) || (defined(HAVE_DECL_PERF_FLAG_PID_CGROUP) && HAVE_DECL_PERF_FLAG_PID_CGROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_FLAG_PID_CGROUP) == (4), "PERF_FLAG_PID_CGROUP != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_FLAG_PID_CGROUP 4
#endif
#if defined(PERF_FLAG_FD_CLOEXEC) || (defined(HAVE_DECL_PERF_FLAG_FD_CLOEXEC) && HAVE_DECL_PERF_FLAG_FD_CLOEXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_FLAG_FD_CLOEXEC) == (8), "PERF_FLAG_FD_CLOEXEC != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_FLAG_FD_CLOEXEC 8
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat perf_event_open_flags in mpers mode

# else

static const struct xlat_data perf_event_open_flags_xdata[] = {
 XLAT(PERF_FLAG_FD_NO_GROUP),
 XLAT(PERF_FLAG_FD_OUTPUT),
 XLAT(PERF_FLAG_PID_CGROUP),
 XLAT(PERF_FLAG_FD_CLOEXEC),
};
static
const struct xlat perf_event_open_flags[1] = { {
 .data = perf_event_open_flags_xdata,
 .size = ARRAY_SIZE(perf_event_open_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
