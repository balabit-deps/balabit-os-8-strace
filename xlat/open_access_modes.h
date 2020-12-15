/* Generated by ./xlat/gen.sh from ./xlat/open_access_modes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(O_RDONLY) || (defined(HAVE_DECL_O_RDONLY) && HAVE_DECL_O_RDONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((O_RDONLY) == (0), "O_RDONLY != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define O_RDONLY 0
#endif
#if defined(O_WRONLY) || (defined(HAVE_DECL_O_WRONLY) && HAVE_DECL_O_WRONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((O_WRONLY) == (1), "O_WRONLY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define O_WRONLY 1
#endif
#if defined(O_RDWR) || (defined(HAVE_DECL_O_RDWR) && HAVE_DECL_O_RDWR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((O_RDWR) == (2), "O_RDWR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define O_RDWR 2
#endif
#if defined(O_ACCMODE) || (defined(HAVE_DECL_O_ACCMODE) && HAVE_DECL_O_ACCMODE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((O_ACCMODE) == (3), "O_ACCMODE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define O_ACCMODE 3
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data open_access_modes_xdata[] = {
 [O_RDONLY] = XLAT(O_RDONLY),
 [O_WRONLY] = XLAT(O_WRONLY),
 [O_RDWR] = XLAT(O_RDWR),
 [O_ACCMODE] = XLAT(O_ACCMODE),
};
const struct xlat open_access_modes[1] = { {
 .data = open_access_modes_xdata,
 .size = ARRAY_SIZE(open_access_modes_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */