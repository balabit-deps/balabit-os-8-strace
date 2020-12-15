/* Generated by ./xlat/gen.sh from ./xlat/perf_ioctl_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PERF_EVENT_IOC_ENABLE) || (defined(HAVE_DECL_PERF_EVENT_IOC_ENABLE) && HAVE_DECL_PERF_EVENT_IOC_ENABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_ENABLE) == (_IO ('$', 0)), "PERF_EVENT_IOC_ENABLE != _IO ('$', 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_ENABLE _IO ('$', 0)
#endif
#if defined(PERF_EVENT_IOC_DISABLE) || (defined(HAVE_DECL_PERF_EVENT_IOC_DISABLE) && HAVE_DECL_PERF_EVENT_IOC_DISABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_DISABLE) == (_IO ('$', 1)), "PERF_EVENT_IOC_DISABLE != _IO ('$', 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_DISABLE _IO ('$', 1)
#endif
#if defined(PERF_EVENT_IOC_REFRESH) || (defined(HAVE_DECL_PERF_EVENT_IOC_REFRESH) && HAVE_DECL_PERF_EVENT_IOC_REFRESH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_REFRESH) == (_IO ('$', 2)), "PERF_EVENT_IOC_REFRESH != _IO ('$', 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_REFRESH _IO ('$', 2)
#endif
#if defined(PERF_EVENT_IOC_RESET) || (defined(HAVE_DECL_PERF_EVENT_IOC_RESET) && HAVE_DECL_PERF_EVENT_IOC_RESET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_RESET) == (_IO ('$', 3)), "PERF_EVENT_IOC_RESET != _IO ('$', 3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_RESET _IO ('$', 3)
#endif
#if defined(PERF_EVENT_IOC_PERIOD) || (defined(HAVE_DECL_PERF_EVENT_IOC_PERIOD) && HAVE_DECL_PERF_EVENT_IOC_PERIOD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_PERIOD) == (_IOW('$', 4, uint64_t)), "PERF_EVENT_IOC_PERIOD != _IOW('$', 4, uint64_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_PERIOD _IOW('$', 4, uint64_t)
#endif
#if defined(PERF_EVENT_IOC_SET_OUTPUT) || (defined(HAVE_DECL_PERF_EVENT_IOC_SET_OUTPUT) && HAVE_DECL_PERF_EVENT_IOC_SET_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_SET_OUTPUT) == (_IO ('$', 5)), "PERF_EVENT_IOC_SET_OUTPUT != _IO ('$', 5)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_SET_OUTPUT _IO ('$', 5)
#endif
#if defined(PERF_EVENT_IOC_SET_FILTER) || (defined(HAVE_DECL_PERF_EVENT_IOC_SET_FILTER) && HAVE_DECL_PERF_EVENT_IOC_SET_FILTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_SET_FILTER) == (_IOW('$', 6, char *)), "PERF_EVENT_IOC_SET_FILTER != _IOW('$', 6, char *)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_SET_FILTER _IOW('$', 6, char *)
#endif
#if defined(PERF_EVENT_IOC_ID) || (defined(HAVE_DECL_PERF_EVENT_IOC_ID) && HAVE_DECL_PERF_EVENT_IOC_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_ID) == (_IOR('$', 7, uint64_t *)), "PERF_EVENT_IOC_ID != _IOR('$', 7, uint64_t *)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_ID _IOR('$', 7, uint64_t *)
#endif
#if defined(PERF_EVENT_IOC_SET_BPF) || (defined(HAVE_DECL_PERF_EVENT_IOC_SET_BPF) && HAVE_DECL_PERF_EVENT_IOC_SET_BPF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_SET_BPF) == (_IOW('$', 8, uint32_t)), "PERF_EVENT_IOC_SET_BPF != _IOW('$', 8, uint32_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_SET_BPF _IOW('$', 8, uint32_t)
#endif
#if defined(PERF_EVENT_IOC_PAUSE_OUTPUT) || (defined(HAVE_DECL_PERF_EVENT_IOC_PAUSE_OUTPUT) && HAVE_DECL_PERF_EVENT_IOC_PAUSE_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_PAUSE_OUTPUT) == (_IOW('$', 9, uint32_t)), "PERF_EVENT_IOC_PAUSE_OUTPUT != _IOW('$', 9, uint32_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_PAUSE_OUTPUT _IOW('$', 9, uint32_t)
#endif
#if defined(PERF_EVENT_IOC_QUERY_BPF) || (defined(HAVE_DECL_PERF_EVENT_IOC_QUERY_BPF) && HAVE_DECL_PERF_EVENT_IOC_QUERY_BPF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_QUERY_BPF) == (_IOWR('$', 10, struct perf_event_query_bpf *)), "PERF_EVENT_IOC_QUERY_BPF != _IOWR('$', 10, struct perf_event_query_bpf *)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_QUERY_BPF _IOWR('$', 10, struct perf_event_query_bpf *)
#endif
#if defined(PERF_EVENT_IOC_MODIFY_ATTRIBUTES) || (defined(HAVE_DECL_PERF_EVENT_IOC_MODIFY_ATTRIBUTES) && HAVE_DECL_PERF_EVENT_IOC_MODIFY_ATTRIBUTES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_EVENT_IOC_MODIFY_ATTRIBUTES) == (_IOW('$', 11, struct perf_event_attr *)), "PERF_EVENT_IOC_MODIFY_ATTRIBUTES != _IOW('$', 11, struct perf_event_attr *)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_EVENT_IOC_MODIFY_ATTRIBUTES _IOW('$', 11, struct perf_event_attr *)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat perf_ioctl_cmds[];

# else

static const struct xlat_data perf_ioctl_cmds_xdata[] = {
 XLAT(PERF_EVENT_IOC_ENABLE),
 XLAT(PERF_EVENT_IOC_DISABLE),
 XLAT(PERF_EVENT_IOC_REFRESH),
 XLAT(PERF_EVENT_IOC_RESET),
 XLAT(PERF_EVENT_IOC_PERIOD),
 XLAT(PERF_EVENT_IOC_SET_OUTPUT),
 XLAT(PERF_EVENT_IOC_SET_FILTER),
 XLAT(PERF_EVENT_IOC_ID),
 XLAT(PERF_EVENT_IOC_SET_BPF),
 XLAT(PERF_EVENT_IOC_PAUSE_OUTPUT),
 XLAT(PERF_EVENT_IOC_QUERY_BPF),
 XLAT(PERF_EVENT_IOC_MODIFY_ATTRIBUTES),
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat perf_ioctl_cmds[1] = { {
 .data = perf_ioctl_cmds_xdata,
 .size = ARRAY_SIZE(perf_ioctl_cmds_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
