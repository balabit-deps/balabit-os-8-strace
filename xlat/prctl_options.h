/* Generated by ./xlat/gen.sh from ./xlat/prctl_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PR_SET_PDEATHSIG) || (defined(HAVE_DECL_PR_SET_PDEATHSIG) && HAVE_DECL_PR_SET_PDEATHSIG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_PDEATHSIG) == (1), "PR_SET_PDEATHSIG != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_PDEATHSIG 1
#endif
#if defined(PR_GET_PDEATHSIG) || (defined(HAVE_DECL_PR_GET_PDEATHSIG) && HAVE_DECL_PR_GET_PDEATHSIG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_PDEATHSIG) == (2), "PR_GET_PDEATHSIG != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_PDEATHSIG 2
#endif
#if defined(PR_GET_DUMPABLE) || (defined(HAVE_DECL_PR_GET_DUMPABLE) && HAVE_DECL_PR_GET_DUMPABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_DUMPABLE) == (3), "PR_GET_DUMPABLE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_DUMPABLE 3
#endif
#if defined(PR_SET_DUMPABLE) || (defined(HAVE_DECL_PR_SET_DUMPABLE) && HAVE_DECL_PR_SET_DUMPABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_DUMPABLE) == (4), "PR_SET_DUMPABLE != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_DUMPABLE 4
#endif
#if defined(PR_GET_UNALIGN) || (defined(HAVE_DECL_PR_GET_UNALIGN) && HAVE_DECL_PR_GET_UNALIGN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_UNALIGN) == (5), "PR_GET_UNALIGN != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_UNALIGN 5
#endif
#if defined(PR_SET_UNALIGN) || (defined(HAVE_DECL_PR_SET_UNALIGN) && HAVE_DECL_PR_SET_UNALIGN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_UNALIGN) == (6), "PR_SET_UNALIGN != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_UNALIGN 6
#endif
#if defined(PR_GET_KEEPCAPS) || (defined(HAVE_DECL_PR_GET_KEEPCAPS) && HAVE_DECL_PR_GET_KEEPCAPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_KEEPCAPS) == (7), "PR_GET_KEEPCAPS != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_KEEPCAPS 7
#endif
#if defined(PR_SET_KEEPCAPS) || (defined(HAVE_DECL_PR_SET_KEEPCAPS) && HAVE_DECL_PR_SET_KEEPCAPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_KEEPCAPS) == (8), "PR_SET_KEEPCAPS != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_KEEPCAPS 8
#endif
#if defined(PR_GET_FPEMU) || (defined(HAVE_DECL_PR_GET_FPEMU) && HAVE_DECL_PR_GET_FPEMU)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_FPEMU) == (9), "PR_GET_FPEMU != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_FPEMU 9
#endif
#if defined(PR_SET_FPEMU) || (defined(HAVE_DECL_PR_SET_FPEMU) && HAVE_DECL_PR_SET_FPEMU)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_FPEMU) == (10), "PR_SET_FPEMU != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_FPEMU 10
#endif
#if defined(PR_GET_FPEXC) || (defined(HAVE_DECL_PR_GET_FPEXC) && HAVE_DECL_PR_GET_FPEXC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_FPEXC) == (11), "PR_GET_FPEXC != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_FPEXC 11
#endif
#if defined(PR_SET_FPEXC) || (defined(HAVE_DECL_PR_SET_FPEXC) && HAVE_DECL_PR_SET_FPEXC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_FPEXC) == (12), "PR_SET_FPEXC != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_FPEXC 12
#endif
#if defined(PR_GET_TIMING) || (defined(HAVE_DECL_PR_GET_TIMING) && HAVE_DECL_PR_GET_TIMING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_TIMING) == (13), "PR_GET_TIMING != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_TIMING 13
#endif
#if defined(PR_SET_TIMING) || (defined(HAVE_DECL_PR_SET_TIMING) && HAVE_DECL_PR_SET_TIMING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_TIMING) == (14), "PR_SET_TIMING != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_TIMING 14
#endif
#if defined(PR_SET_NAME) || (defined(HAVE_DECL_PR_SET_NAME) && HAVE_DECL_PR_SET_NAME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_NAME) == (15), "PR_SET_NAME != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_NAME 15
#endif
#if defined(PR_GET_NAME) || (defined(HAVE_DECL_PR_GET_NAME) && HAVE_DECL_PR_GET_NAME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_NAME) == (16), "PR_GET_NAME != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_NAME 16
#endif
#if defined(PR_GET_ENDIAN) || (defined(HAVE_DECL_PR_GET_ENDIAN) && HAVE_DECL_PR_GET_ENDIAN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_ENDIAN) == (19), "PR_GET_ENDIAN != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_ENDIAN 19
#endif
#if defined(PR_SET_ENDIAN) || (defined(HAVE_DECL_PR_SET_ENDIAN) && HAVE_DECL_PR_SET_ENDIAN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_ENDIAN) == (20), "PR_SET_ENDIAN != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_ENDIAN 20
#endif
#if defined(PR_GET_SECCOMP) || (defined(HAVE_DECL_PR_GET_SECCOMP) && HAVE_DECL_PR_GET_SECCOMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_SECCOMP) == (21), "PR_GET_SECCOMP != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_SECCOMP 21
#endif
#if defined(PR_SET_SECCOMP) || (defined(HAVE_DECL_PR_SET_SECCOMP) && HAVE_DECL_PR_SET_SECCOMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_SECCOMP) == (22), "PR_SET_SECCOMP != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_SECCOMP 22
#endif
#if defined(PR_CAPBSET_READ) || (defined(HAVE_DECL_PR_CAPBSET_READ) && HAVE_DECL_PR_CAPBSET_READ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_CAPBSET_READ) == (23), "PR_CAPBSET_READ != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_CAPBSET_READ 23
#endif
#if defined(PR_CAPBSET_DROP) || (defined(HAVE_DECL_PR_CAPBSET_DROP) && HAVE_DECL_PR_CAPBSET_DROP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_CAPBSET_DROP) == (24), "PR_CAPBSET_DROP != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_CAPBSET_DROP 24
#endif
#if defined(PR_GET_TSC) || (defined(HAVE_DECL_PR_GET_TSC) && HAVE_DECL_PR_GET_TSC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_TSC) == (25), "PR_GET_TSC != 25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_TSC 25
#endif
#if defined(PR_SET_TSC) || (defined(HAVE_DECL_PR_SET_TSC) && HAVE_DECL_PR_SET_TSC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_TSC) == (26), "PR_SET_TSC != 26");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_TSC 26
#endif
#if defined(PR_GET_SECUREBITS) || (defined(HAVE_DECL_PR_GET_SECUREBITS) && HAVE_DECL_PR_GET_SECUREBITS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_SECUREBITS) == (27), "PR_GET_SECUREBITS != 27");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_SECUREBITS 27
#endif
#if defined(PR_SET_SECUREBITS) || (defined(HAVE_DECL_PR_SET_SECUREBITS) && HAVE_DECL_PR_SET_SECUREBITS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_SECUREBITS) == (28), "PR_SET_SECUREBITS != 28");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_SECUREBITS 28
#endif
#if defined(PR_SET_TIMERSLACK) || (defined(HAVE_DECL_PR_SET_TIMERSLACK) && HAVE_DECL_PR_SET_TIMERSLACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_TIMERSLACK) == (29), "PR_SET_TIMERSLACK != 29");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_TIMERSLACK 29
#endif
#if defined(PR_GET_TIMERSLACK) || (defined(HAVE_DECL_PR_GET_TIMERSLACK) && HAVE_DECL_PR_GET_TIMERSLACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_TIMERSLACK) == (30), "PR_GET_TIMERSLACK != 30");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_TIMERSLACK 30
#endif
#if defined(PR_TASK_PERF_EVENTS_DISABLE) || (defined(HAVE_DECL_PR_TASK_PERF_EVENTS_DISABLE) && HAVE_DECL_PR_TASK_PERF_EVENTS_DISABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_TASK_PERF_EVENTS_DISABLE) == (31), "PR_TASK_PERF_EVENTS_DISABLE != 31");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_TASK_PERF_EVENTS_DISABLE 31
#endif
#if defined(PR_TASK_PERF_EVENTS_ENABLE) || (defined(HAVE_DECL_PR_TASK_PERF_EVENTS_ENABLE) && HAVE_DECL_PR_TASK_PERF_EVENTS_ENABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_TASK_PERF_EVENTS_ENABLE) == (32), "PR_TASK_PERF_EVENTS_ENABLE != 32");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_TASK_PERF_EVENTS_ENABLE 32
#endif
#if defined(PR_MCE_KILL) || (defined(HAVE_DECL_PR_MCE_KILL) && HAVE_DECL_PR_MCE_KILL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MCE_KILL) == (33), "PR_MCE_KILL != 33");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MCE_KILL 33
#endif
#if defined(PR_MCE_KILL_GET) || (defined(HAVE_DECL_PR_MCE_KILL_GET) && HAVE_DECL_PR_MCE_KILL_GET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MCE_KILL_GET) == (34), "PR_MCE_KILL_GET != 34");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MCE_KILL_GET 34
#endif
#if defined(PR_SET_MM) || (defined(HAVE_DECL_PR_SET_MM) && HAVE_DECL_PR_SET_MM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_MM) == (35), "PR_SET_MM != 35");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_MM 35
#endif
#if defined(PR_SET_PTRACER) || (defined(HAVE_DECL_PR_SET_PTRACER) && HAVE_DECL_PR_SET_PTRACER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_PTRACER) == (0x59616d61), "PR_SET_PTRACER != 0x59616d61");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_PTRACER 0x59616d61
#endif
#if defined(PR_SET_CHILD_SUBREAPER) || (defined(HAVE_DECL_PR_SET_CHILD_SUBREAPER) && HAVE_DECL_PR_SET_CHILD_SUBREAPER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_CHILD_SUBREAPER) == (36), "PR_SET_CHILD_SUBREAPER != 36");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_CHILD_SUBREAPER 36
#endif
#if defined(PR_GET_CHILD_SUBREAPER) || (defined(HAVE_DECL_PR_GET_CHILD_SUBREAPER) && HAVE_DECL_PR_GET_CHILD_SUBREAPER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_CHILD_SUBREAPER) == (37), "PR_GET_CHILD_SUBREAPER != 37");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_CHILD_SUBREAPER 37
#endif
#if defined(PR_SET_NO_NEW_PRIVS) || (defined(HAVE_DECL_PR_SET_NO_NEW_PRIVS) && HAVE_DECL_PR_SET_NO_NEW_PRIVS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_NO_NEW_PRIVS) == (38), "PR_SET_NO_NEW_PRIVS != 38");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_NO_NEW_PRIVS 38
#endif
#if defined(PR_GET_NO_NEW_PRIVS) || (defined(HAVE_DECL_PR_GET_NO_NEW_PRIVS) && HAVE_DECL_PR_GET_NO_NEW_PRIVS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_NO_NEW_PRIVS) == (39), "PR_GET_NO_NEW_PRIVS != 39");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_NO_NEW_PRIVS 39
#endif
#if defined(PR_GET_TID_ADDRESS) || (defined(HAVE_DECL_PR_GET_TID_ADDRESS) && HAVE_DECL_PR_GET_TID_ADDRESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_TID_ADDRESS) == (40), "PR_GET_TID_ADDRESS != 40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_TID_ADDRESS 40
#endif
#if defined(PR_SET_THP_DISABLE) || (defined(HAVE_DECL_PR_SET_THP_DISABLE) && HAVE_DECL_PR_SET_THP_DISABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_THP_DISABLE) == (41), "PR_SET_THP_DISABLE != 41");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_THP_DISABLE 41
#endif
#if defined(PR_GET_THP_DISABLE) || (defined(HAVE_DECL_PR_GET_THP_DISABLE) && HAVE_DECL_PR_GET_THP_DISABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_THP_DISABLE) == (42), "PR_GET_THP_DISABLE != 42");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_THP_DISABLE 42
#endif
#if defined(PR_MPX_ENABLE_MANAGEMENT) || (defined(HAVE_DECL_PR_MPX_ENABLE_MANAGEMENT) && HAVE_DECL_PR_MPX_ENABLE_MANAGEMENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MPX_ENABLE_MANAGEMENT) == (43), "PR_MPX_ENABLE_MANAGEMENT != 43");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MPX_ENABLE_MANAGEMENT 43
#endif
#if defined(PR_MPX_DISABLE_MANAGEMENT) || (defined(HAVE_DECL_PR_MPX_DISABLE_MANAGEMENT) && HAVE_DECL_PR_MPX_DISABLE_MANAGEMENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MPX_DISABLE_MANAGEMENT) == (44), "PR_MPX_DISABLE_MANAGEMENT != 44");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MPX_DISABLE_MANAGEMENT 44
#endif
#if defined(PR_SET_FP_MODE) || (defined(HAVE_DECL_PR_SET_FP_MODE) && HAVE_DECL_PR_SET_FP_MODE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_FP_MODE) == (45), "PR_SET_FP_MODE != 45");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_FP_MODE 45
#endif
#if defined(PR_GET_FP_MODE) || (defined(HAVE_DECL_PR_GET_FP_MODE) && HAVE_DECL_PR_GET_FP_MODE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_FP_MODE) == (46), "PR_GET_FP_MODE != 46");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_FP_MODE 46
#endif
#if defined(PR_CAP_AMBIENT) || (defined(HAVE_DECL_PR_CAP_AMBIENT) && HAVE_DECL_PR_CAP_AMBIENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_CAP_AMBIENT) == (47), "PR_CAP_AMBIENT != 47");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_CAP_AMBIENT 47
#endif
#if defined(PR_SVE_SET_VL) || (defined(HAVE_DECL_PR_SVE_SET_VL) && HAVE_DECL_PR_SVE_SET_VL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SVE_SET_VL) == (50), "PR_SVE_SET_VL != 50");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SVE_SET_VL 50
#endif
#if defined(PR_SVE_GET_VL) || (defined(HAVE_DECL_PR_SVE_GET_VL) && HAVE_DECL_PR_SVE_GET_VL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SVE_GET_VL) == (51), "PR_SVE_GET_VL != 51");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SVE_GET_VL 51
#endif
#if defined(PR_GET_SPECULATION_CTRL) || (defined(HAVE_DECL_PR_GET_SPECULATION_CTRL) && HAVE_DECL_PR_GET_SPECULATION_CTRL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_SPECULATION_CTRL) == (52), "PR_GET_SPECULATION_CTRL != 52");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_SPECULATION_CTRL 52
#endif
#if defined(PR_SET_SPECULATION_CTRL) || (defined(HAVE_DECL_PR_SET_SPECULATION_CTRL) && HAVE_DECL_PR_SET_SPECULATION_CTRL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_SPECULATION_CTRL) == (53), "PR_SET_SPECULATION_CTRL != 53");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_SPECULATION_CTRL 53
#endif
#if defined(PR_PAC_RESET_KEYS) || (defined(HAVE_DECL_PR_PAC_RESET_KEYS) && HAVE_DECL_PR_PAC_RESET_KEYS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_PAC_RESET_KEYS) == (54), "PR_PAC_RESET_KEYS != 54");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_PAC_RESET_KEYS 54
#endif
#if defined(PR_SET_TAGGED_ADDR_CTRL) || (defined(HAVE_DECL_PR_SET_TAGGED_ADDR_CTRL) && HAVE_DECL_PR_SET_TAGGED_ADDR_CTRL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_TAGGED_ADDR_CTRL) == (55), "PR_SET_TAGGED_ADDR_CTRL != 55");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_TAGGED_ADDR_CTRL 55
#endif
#if defined(PR_GET_TAGGED_ADDR_CTRL) || (defined(HAVE_DECL_PR_GET_TAGGED_ADDR_CTRL) && HAVE_DECL_PR_GET_TAGGED_ADDR_CTRL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_GET_TAGGED_ADDR_CTRL) == (56), "PR_GET_TAGGED_ADDR_CTRL != 56");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_GET_TAGGED_ADDR_CTRL 56
#endif
#if defined(PR_SET_VMA) || (defined(HAVE_DECL_PR_SET_VMA) && HAVE_DECL_PR_SET_VMA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SET_VMA) == (0x53564d41), "PR_SET_VMA != 0x53564d41");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SET_VMA 0x53564d41
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat prctl_options in mpers mode

# else

static const struct xlat_data prctl_options_xdata[] = {
 XLAT(PR_SET_PDEATHSIG),
 XLAT(PR_GET_PDEATHSIG),
 XLAT(PR_GET_DUMPABLE),
 XLAT(PR_SET_DUMPABLE),
 XLAT(PR_GET_UNALIGN),
 XLAT(PR_SET_UNALIGN),
 XLAT(PR_GET_KEEPCAPS),
 XLAT(PR_SET_KEEPCAPS),
 XLAT(PR_GET_FPEMU),
 XLAT(PR_SET_FPEMU),
 XLAT(PR_GET_FPEXC),
 XLAT(PR_SET_FPEXC),
 XLAT(PR_GET_TIMING),
 XLAT(PR_SET_TIMING),
 XLAT(PR_SET_NAME),
 XLAT(PR_GET_NAME),
 XLAT(PR_GET_ENDIAN),
 XLAT(PR_SET_ENDIAN),
 XLAT(PR_GET_SECCOMP),
 XLAT(PR_SET_SECCOMP),
 XLAT(PR_CAPBSET_READ),
 XLAT(PR_CAPBSET_DROP),
 XLAT(PR_GET_TSC),
 XLAT(PR_SET_TSC),
 XLAT(PR_GET_SECUREBITS),
 XLAT(PR_SET_SECUREBITS),
 XLAT(PR_SET_TIMERSLACK),
 XLAT(PR_GET_TIMERSLACK),
 XLAT(PR_TASK_PERF_EVENTS_DISABLE),
 XLAT(PR_TASK_PERF_EVENTS_ENABLE),
 XLAT(PR_MCE_KILL),
 XLAT(PR_MCE_KILL_GET),
 XLAT(PR_SET_MM),
 XLAT(PR_SET_PTRACER),
 XLAT(PR_SET_CHILD_SUBREAPER),
 XLAT(PR_GET_CHILD_SUBREAPER),
 XLAT(PR_SET_NO_NEW_PRIVS),
 XLAT(PR_GET_NO_NEW_PRIVS),
 XLAT(PR_GET_TID_ADDRESS),
 XLAT(PR_SET_THP_DISABLE),
 XLAT(PR_GET_THP_DISABLE),
 XLAT(PR_MPX_ENABLE_MANAGEMENT),
 XLAT(PR_MPX_DISABLE_MANAGEMENT),
 XLAT(PR_SET_FP_MODE),
 XLAT(PR_GET_FP_MODE),
 XLAT(PR_CAP_AMBIENT),
 XLAT(PR_SVE_SET_VL),
 XLAT(PR_SVE_GET_VL),
 XLAT(PR_GET_SPECULATION_CTRL),
 XLAT(PR_SET_SPECULATION_CTRL),
 XLAT(PR_PAC_RESET_KEYS),
 XLAT(PR_SET_TAGGED_ADDR_CTRL),
 XLAT(PR_GET_TAGGED_ADDR_CTRL),
 XLAT(PR_SET_VMA),
};
static
const struct xlat prctl_options[1] = { {
 .data = prctl_options_xdata,
 .size = ARRAY_SIZE(prctl_options_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
