/* Generated by ./xlat/gen.sh from ./xlat/tcxonc_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat tcxonc_options in mpers mode

# else

static const struct xlat_data tcxonc_options_xdata[] = {
#if defined(TCOOFF) || (defined(HAVE_DECL_TCOOFF) && HAVE_DECL_TCOOFF)
  XLAT(TCOOFF),
#endif
#if defined(TCOON) || (defined(HAVE_DECL_TCOON) && HAVE_DECL_TCOON)
  XLAT(TCOON),
#endif
#if defined(TCIOFF) || (defined(HAVE_DECL_TCIOFF) && HAVE_DECL_TCIOFF)
  XLAT(TCIOFF),
#endif
#if defined(TCION) || (defined(HAVE_DECL_TCION) && HAVE_DECL_TCION)
  XLAT(TCION),
#endif
};
static
const struct xlat tcxonc_options[1] = { {
 .data = tcxonc_options_xdata,
 .size = ARRAY_SIZE(tcxonc_options_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
