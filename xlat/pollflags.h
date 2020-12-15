/* Generated by ./xlat/gen.sh from ./xlat/pollflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(POLLIN) || (defined(HAVE_DECL_POLLIN) && HAVE_DECL_POLLIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLIN) == (0x0001), "POLLIN != 0x0001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLIN 0x0001
#endif
#if defined(POLLPRI) || (defined(HAVE_DECL_POLLPRI) && HAVE_DECL_POLLPRI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLPRI) == (0x0002), "POLLPRI != 0x0002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLPRI 0x0002
#endif
#if defined(POLLOUT) || (defined(HAVE_DECL_POLLOUT) && HAVE_DECL_POLLOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLOUT) == (0x0004), "POLLOUT != 0x0004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLOUT 0x0004
#endif
#if defined(POLLERR) || (defined(HAVE_DECL_POLLERR) && HAVE_DECL_POLLERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLERR) == (0x0008), "POLLERR != 0x0008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLERR 0x0008
#endif
#if defined(POLLHUP) || (defined(HAVE_DECL_POLLHUP) && HAVE_DECL_POLLHUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLHUP) == (0x0010), "POLLHUP != 0x0010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLHUP 0x0010
#endif
#if defined(POLLNVAL) || (defined(HAVE_DECL_POLLNVAL) && HAVE_DECL_POLLNVAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLNVAL) == (0x0020), "POLLNVAL != 0x0020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLNVAL 0x0020
#endif
#if defined(POLLRDNORM) || (defined(HAVE_DECL_POLLRDNORM) && HAVE_DECL_POLLRDNORM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLRDNORM) == (0x0040), "POLLRDNORM != 0x0040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLRDNORM 0x0040
#endif
#if defined(POLLRDBAND) || (defined(HAVE_DECL_POLLRDBAND) && HAVE_DECL_POLLRDBAND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLRDBAND) == (0x0080), "POLLRDBAND != 0x0080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLRDBAND 0x0080
#endif
#if defined(__m68k__) || defined(__mips__) || defined(__sparc__) || defined(__xtensa__)
#else
#if defined(POLLWRNORM) || (defined(HAVE_DECL_POLLWRNORM) && HAVE_DECL_POLLWRNORM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLWRNORM) == (0x0100), "POLLWRNORM != 0x0100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLWRNORM 0x0100
#endif
#endif
#if defined(__m68k__) || defined(__mips__) || defined(__sparc__) || defined(__xtensa__)
#if defined(POLLWRBAND) || (defined(HAVE_DECL_POLLWRBAND) && HAVE_DECL_POLLWRBAND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLWRBAND) == (0x0100), "POLLWRBAND != 0x0100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLWRBAND 0x0100
#endif
#else
#if defined(POLLWRBAND) || (defined(HAVE_DECL_POLLWRBAND) && HAVE_DECL_POLLWRBAND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLWRBAND) == (0x0200), "POLLWRBAND != 0x0200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLWRBAND 0x0200
#endif
#endif
#if defined(__sparc__)
#if defined(POLLMSG) || (defined(HAVE_DECL_POLLMSG) && HAVE_DECL_POLLMSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLMSG) == (0x0200), "POLLMSG != 0x0200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLMSG 0x0200
#endif
#else
#if defined(POLLMSG) || (defined(HAVE_DECL_POLLMSG) && HAVE_DECL_POLLMSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLMSG) == (0x0400), "POLLMSG != 0x0400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLMSG 0x0400
#endif
#endif
#if defined(__sparc__)
#if defined(POLLREMOVE) || (defined(HAVE_DECL_POLLREMOVE) && HAVE_DECL_POLLREMOVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLREMOVE) == (0x0400), "POLLREMOVE != 0x0400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLREMOVE 0x0400
#endif
#elif defined(__xtensa__)
#if defined(POLLREMOVE) || (defined(HAVE_DECL_POLLREMOVE) && HAVE_DECL_POLLREMOVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLREMOVE) == (0x0800), "POLLREMOVE != 0x0800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLREMOVE 0x0800
#endif
#else
#if defined(POLLREMOVE) || (defined(HAVE_DECL_POLLREMOVE) && HAVE_DECL_POLLREMOVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLREMOVE) == (0x1000), "POLLREMOVE != 0x1000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLREMOVE 0x1000
#endif
#endif
#if defined(__sparc__)
#if defined(POLLRDHUP) || (defined(HAVE_DECL_POLLRDHUP) && HAVE_DECL_POLLRDHUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLRDHUP) == (0x0800), "POLLRDHUP != 0x0800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLRDHUP 0x0800
#endif
#else
#if defined(POLLRDHUP) || (defined(HAVE_DECL_POLLRDHUP) && HAVE_DECL_POLLRDHUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLLRDHUP) == (0x2000), "POLLRDHUP != 0x2000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLLRDHUP 0x2000
#endif
#endif
#if defined(POLL_BUSY_LOOP) || (defined(HAVE_DECL_POLL_BUSY_LOOP) && HAVE_DECL_POLL_BUSY_LOOP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((POLL_BUSY_LOOP) == (0x8000), "POLL_BUSY_LOOP != 0x8000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define POLL_BUSY_LOOP 0x8000
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data pollflags_xdata[] = {
 XLAT(POLLIN),
 XLAT(POLLPRI),
 XLAT(POLLOUT),
 XLAT(POLLERR),
 XLAT(POLLHUP),
 XLAT(POLLNVAL),
 XLAT(POLLRDNORM),
 XLAT(POLLRDBAND),

#if defined(__m68k__) || defined(__mips__) || defined(__sparc__) || defined(__xtensa__)

#else
 XLAT(POLLWRNORM),
#endif

#if defined(__m68k__) || defined(__mips__) || defined(__sparc__) || defined(__xtensa__)
 XLAT(POLLWRBAND),
#else
 XLAT(POLLWRBAND),
#endif

#if defined(__sparc__)
 XLAT(POLLMSG),
#else
 XLAT(POLLMSG),
#endif

#if defined(__sparc__)
 XLAT(POLLREMOVE),
#elif defined(__xtensa__)
 XLAT(POLLREMOVE),
#else
 XLAT(POLLREMOVE),
#endif

#if defined(__sparc__)
 XLAT(POLLRDHUP),
#else
 XLAT(POLLRDHUP),
#endif

 XLAT(POLL_BUSY_LOOP),
};
const struct xlat pollflags[1] = { {
 .data = pollflags_xdata,
 .size = ARRAY_SIZE(pollflags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
