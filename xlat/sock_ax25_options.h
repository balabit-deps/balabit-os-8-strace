/* Generated by ./xlat/gen.sh from ./xlat/sock_ax25_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(AX25_WINDOW) || (defined(HAVE_DECL_AX25_WINDOW) && HAVE_DECL_AX25_WINDOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_WINDOW) == (1), "AX25_WINDOW != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_WINDOW 1
#endif
#if defined(AX25_T1) || (defined(HAVE_DECL_AX25_T1) && HAVE_DECL_AX25_T1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_T1) == (2), "AX25_T1 != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_T1 2
#endif
#if defined(AX25_N2) || (defined(HAVE_DECL_AX25_N2) && HAVE_DECL_AX25_N2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_N2) == (3), "AX25_N2 != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_N2 3
#endif
#if defined(AX25_T3) || (defined(HAVE_DECL_AX25_T3) && HAVE_DECL_AX25_T3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_T3) == (4), "AX25_T3 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_T3 4
#endif
#if defined(AX25_T2) || (defined(HAVE_DECL_AX25_T2) && HAVE_DECL_AX25_T2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_T2) == (5), "AX25_T2 != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_T2 5
#endif
#if defined(AX25_BACKOFF) || (defined(HAVE_DECL_AX25_BACKOFF) && HAVE_DECL_AX25_BACKOFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_BACKOFF) == (6), "AX25_BACKOFF != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_BACKOFF 6
#endif
#if defined(AX25_EXTSEQ) || (defined(HAVE_DECL_AX25_EXTSEQ) && HAVE_DECL_AX25_EXTSEQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_EXTSEQ) == (7), "AX25_EXTSEQ != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_EXTSEQ 7
#endif
#if defined(AX25_PIDINCL) || (defined(HAVE_DECL_AX25_PIDINCL) && HAVE_DECL_AX25_PIDINCL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_PIDINCL) == (8), "AX25_PIDINCL != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_PIDINCL 8
#endif
#if defined(AX25_IDLE) || (defined(HAVE_DECL_AX25_IDLE) && HAVE_DECL_AX25_IDLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_IDLE) == (9), "AX25_IDLE != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_IDLE 9
#endif
#if defined(AX25_PACLEN) || (defined(HAVE_DECL_AX25_PACLEN) && HAVE_DECL_AX25_PACLEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_PACLEN) == (10), "AX25_PACLEN != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_PACLEN 10
#endif
#if defined(AX25_IAMDIGI) || (defined(HAVE_DECL_AX25_IAMDIGI) && HAVE_DECL_AX25_IAMDIGI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_IAMDIGI) == (12), "AX25_IAMDIGI != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_IAMDIGI 12
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_ax25_options in mpers mode

# else

static const struct xlat_data sock_ax25_options_xdata[] = {
 XLAT(AX25_WINDOW),
 XLAT(AX25_T1),
 XLAT(AX25_N2),
 XLAT(AX25_T3),
 XLAT(AX25_T2),
 XLAT(AX25_BACKOFF),
 XLAT(AX25_EXTSEQ),
 XLAT(AX25_PIDINCL),
 XLAT(AX25_IDLE),
 XLAT(AX25_PACLEN),
 XLAT(AX25_IAMDIGI),


#if defined(SO_BINDTODEVICE) || (defined(HAVE_DECL_SO_BINDTODEVICE) && HAVE_DECL_SO_BINDTODEVICE)
  XLAT(SO_BINDTODEVICE),
#endif
};
static
const struct xlat sock_ax25_options[1] = { {
 .data = sock_ax25_options_xdata,
 .size = ARRAY_SIZE(sock_ax25_options_xdata),
 .type = XT_SORTED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
