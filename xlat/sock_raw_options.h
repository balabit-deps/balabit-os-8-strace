/* Generated by ./xlat/gen.sh from ./xlat/sock_raw_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_raw_options in mpers mode

# else

static const struct xlat_data sock_raw_options_xdata[] = {
#if defined(ICMP_FILTER) || (defined(HAVE_DECL_ICMP_FILTER) && HAVE_DECL_ICMP_FILTER)
  XLAT(ICMP_FILTER),
#endif
};
static
const struct xlat sock_raw_options[1] = { {
 .data = sock_raw_options_xdata,
 .size = ARRAY_SIZE(sock_raw_options_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
