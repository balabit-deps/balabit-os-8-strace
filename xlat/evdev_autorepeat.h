/* Generated by ./xlat/gen.sh from ./xlat/evdev_autorepeat.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(REP_DELAY) || (defined(HAVE_DECL_REP_DELAY) && HAVE_DECL_REP_DELAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REP_DELAY) == (0x00), "REP_DELAY != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REP_DELAY 0x00
#endif
#if defined(REP_PERIOD) || (defined(HAVE_DECL_REP_PERIOD) && HAVE_DECL_REP_PERIOD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REP_PERIOD) == (0x01), "REP_PERIOD != 0x01");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REP_PERIOD 0x01
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat evdev_autorepeat in mpers mode

# else

static const struct xlat_data evdev_autorepeat_xdata[] = {
 [REP_DELAY] = XLAT(REP_DELAY),
 [REP_PERIOD] = XLAT(REP_PERIOD),
};
static
const struct xlat evdev_autorepeat[1] = { {
 .data = evdev_autorepeat_xdata,
 .size = ARRAY_SIZE(evdev_autorepeat_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
