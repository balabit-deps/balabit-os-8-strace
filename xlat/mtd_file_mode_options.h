/* Generated by ./xlat/gen.sh from ./xlat/mtd_file_mode_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat mtd_file_mode_options[];

# else

static const struct xlat_data mtd_file_mode_options_xdata[] = {
 XLAT(MTD_FILE_MODE_NORMAL),
 XLAT(MTD_FILE_MODE_OTP_FACTORY),
 XLAT(MTD_FILE_MODE_OTP_USER),
 XLAT(MTD_FILE_MODE_RAW),
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat mtd_file_mode_options[1] = { {
 .data = mtd_file_mode_options_xdata,
 .size = ARRAY_SIZE(mtd_file_mode_options_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
