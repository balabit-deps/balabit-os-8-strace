/* Generated by ./xlat/gen.sh from ./xlat/sigsegv_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SEGV_MAPERR) || (defined(HAVE_DECL_SEGV_MAPERR) && HAVE_DECL_SEGV_MAPERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEGV_MAPERR) == (1), "SEGV_MAPERR != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEGV_MAPERR 1
#endif
#if defined(SEGV_ACCERR) || (defined(HAVE_DECL_SEGV_ACCERR) && HAVE_DECL_SEGV_ACCERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEGV_ACCERR) == (2), "SEGV_ACCERR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEGV_ACCERR 2
#endif
#if defined(SEGV_BNDERR) || (defined(HAVE_DECL_SEGV_BNDERR) && HAVE_DECL_SEGV_BNDERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEGV_BNDERR) == (3), "SEGV_BNDERR != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEGV_BNDERR 3
#endif
#if defined(SEGV_PKUERR) || (defined(HAVE_DECL_SEGV_PKUERR) && HAVE_DECL_SEGV_PKUERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEGV_PKUERR) == (4), "SEGV_PKUERR != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEGV_PKUERR 4
#endif
#if defined(SEGV_ACCADI) || (defined(HAVE_DECL_SEGV_ACCADI) && HAVE_DECL_SEGV_ACCADI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEGV_ACCADI) == (5), "SEGV_ACCADI != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEGV_ACCADI 5
#endif
#if defined(SEGV_ADIDERR) || (defined(HAVE_DECL_SEGV_ADIDERR) && HAVE_DECL_SEGV_ADIDERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEGV_ADIDERR) == (6), "SEGV_ADIDERR != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEGV_ADIDERR 6
#endif
#if defined(SEGV_ADIPERR) || (defined(HAVE_DECL_SEGV_ADIPERR) && HAVE_DECL_SEGV_ADIPERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEGV_ADIPERR) == (7), "SEGV_ADIPERR != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEGV_ADIPERR 7
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigsegv_codes[];

# else

static const struct xlat_data sigsegv_codes_xdata[] = {
 XLAT(SEGV_MAPERR),
 XLAT(SEGV_ACCERR),
#if defined(SEGV_STACKFLOW) || (defined(HAVE_DECL_SEGV_STACKFLOW) && HAVE_DECL_SEGV_STACKFLOW)
  XLAT(SEGV_STACKFLOW),
#endif
 XLAT(SEGV_BNDERR),
#if defined(__SEGV_PSTKOVF) || (defined(HAVE_DECL___SEGV_PSTKOVF) && HAVE_DECL___SEGV_PSTKOVF)
  XLAT(__SEGV_PSTKOVF),
#endif
 XLAT(SEGV_PKUERR),
 XLAT(SEGV_ACCADI),
 XLAT(SEGV_ADIDERR),
 XLAT(SEGV_ADIPERR),
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigsegv_codes[1] = { {
 .data = sigsegv_codes_xdata,
 .size = ARRAY_SIZE(sigsegv_codes_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
