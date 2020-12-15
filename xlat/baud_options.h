/* Generated by ./xlat/gen.sh from ./xlat/baud_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat baud_options in mpers mode

# else

static const struct xlat_data baud_options_xdata[] = {
#if defined(B0) || (defined(HAVE_DECL_B0) && HAVE_DECL_B0)
  XLAT(B0),
#endif
#if defined(B50) || (defined(HAVE_DECL_B50) && HAVE_DECL_B50)
  XLAT(B50),
#endif
#if defined(B75) || (defined(HAVE_DECL_B75) && HAVE_DECL_B75)
  XLAT(B75),
#endif
#if defined(B110) || (defined(HAVE_DECL_B110) && HAVE_DECL_B110)
  XLAT(B110),
#endif
#if defined(B134) || (defined(HAVE_DECL_B134) && HAVE_DECL_B134)
  XLAT(B134),
#endif
#if defined(B150) || (defined(HAVE_DECL_B150) && HAVE_DECL_B150)
  XLAT(B150),
#endif
#if defined(B200) || (defined(HAVE_DECL_B200) && HAVE_DECL_B200)
  XLAT(B200),
#endif
#if defined(B300) || (defined(HAVE_DECL_B300) && HAVE_DECL_B300)
  XLAT(B300),
#endif
#if defined(B600) || (defined(HAVE_DECL_B600) && HAVE_DECL_B600)
  XLAT(B600),
#endif
#if defined(B1200) || (defined(HAVE_DECL_B1200) && HAVE_DECL_B1200)
  XLAT(B1200),
#endif
#if defined(B1800) || (defined(HAVE_DECL_B1800) && HAVE_DECL_B1800)
  XLAT(B1800),
#endif
#if defined(B2400) || (defined(HAVE_DECL_B2400) && HAVE_DECL_B2400)
  XLAT(B2400),
#endif
#if defined(B4800) || (defined(HAVE_DECL_B4800) && HAVE_DECL_B4800)
  XLAT(B4800),
#endif
#if defined(B9600) || (defined(HAVE_DECL_B9600) && HAVE_DECL_B9600)
  XLAT(B9600),
#endif
#if defined(B19200) || (defined(HAVE_DECL_B19200) && HAVE_DECL_B19200)
  XLAT(B19200),
#endif
#if defined(B38400) || (defined(HAVE_DECL_B38400) && HAVE_DECL_B38400)
  XLAT(B38400),
#endif
#if defined(B57600) || (defined(HAVE_DECL_B57600) && HAVE_DECL_B57600)
  XLAT(B57600),
#endif
#if defined(B115200) || (defined(HAVE_DECL_B115200) && HAVE_DECL_B115200)
  XLAT(B115200),
#endif
#if defined(B230400) || (defined(HAVE_DECL_B230400) && HAVE_DECL_B230400)
  XLAT(B230400),
#endif
#if defined(B460800) || (defined(HAVE_DECL_B460800) && HAVE_DECL_B460800)
  XLAT(B460800),
#endif
#if defined(B500000) || (defined(HAVE_DECL_B500000) && HAVE_DECL_B500000)
  XLAT(B500000),
#endif
#if defined(B576000) || (defined(HAVE_DECL_B576000) && HAVE_DECL_B576000)
  XLAT(B576000),
#endif
#if defined(B921600) || (defined(HAVE_DECL_B921600) && HAVE_DECL_B921600)
  XLAT(B921600),
#endif
#if defined(B1000000) || (defined(HAVE_DECL_B1000000) && HAVE_DECL_B1000000)
  XLAT(B1000000),
#endif
#if defined(B1152000) || (defined(HAVE_DECL_B1152000) && HAVE_DECL_B1152000)
  XLAT(B1152000),
#endif
#if defined(B1500000) || (defined(HAVE_DECL_B1500000) && HAVE_DECL_B1500000)
  XLAT(B1500000),
#endif
#if defined(B2000000) || (defined(HAVE_DECL_B2000000) && HAVE_DECL_B2000000)
  XLAT(B2000000),
#endif
#if defined(B2500000) || (defined(HAVE_DECL_B2500000) && HAVE_DECL_B2500000)
  XLAT(B2500000),
#endif
#if defined(B3000000) || (defined(HAVE_DECL_B3000000) && HAVE_DECL_B3000000)
  XLAT(B3000000),
#endif
#if defined(B3500000) || (defined(HAVE_DECL_B3500000) && HAVE_DECL_B3500000)
  XLAT(B3500000),
#endif
#if defined(B4000000) || (defined(HAVE_DECL_B4000000) && HAVE_DECL_B4000000)
  XLAT(B4000000),
#endif
#if defined(EXTA) || (defined(HAVE_DECL_EXTA) && HAVE_DECL_EXTA)
  XLAT(EXTA),
#endif
#if defined(EXTB) || (defined(HAVE_DECL_EXTB) && HAVE_DECL_EXTB)
  XLAT(EXTB),
#endif
};
static
const struct xlat baud_options[1] = { {
 .data = baud_options_xdata,
 .size = ARRAY_SIZE(baud_options_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
