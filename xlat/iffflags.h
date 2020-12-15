/* Generated by ./xlat/gen.sh from ./xlat/iffflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IFF_UP) || (defined(HAVE_DECL_IFF_UP) && HAVE_DECL_IFF_UP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_UP) == ((1 << 0)), "IFF_UP != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_UP (1 << 0)
#endif
#if defined(IFF_BROADCAST) || (defined(HAVE_DECL_IFF_BROADCAST) && HAVE_DECL_IFF_BROADCAST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_BROADCAST) == ((1 << 1)), "IFF_BROADCAST != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_BROADCAST (1 << 1)
#endif
#if defined(IFF_DEBUG) || (defined(HAVE_DECL_IFF_DEBUG) && HAVE_DECL_IFF_DEBUG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_DEBUG) == ((1 << 2)), "IFF_DEBUG != (1 << 2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_DEBUG (1 << 2)
#endif
#if defined(IFF_LOOPBACK) || (defined(HAVE_DECL_IFF_LOOPBACK) && HAVE_DECL_IFF_LOOPBACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_LOOPBACK) == ((1 << 3)), "IFF_LOOPBACK != (1 << 3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_LOOPBACK (1 << 3)
#endif
#if defined(IFF_POINTOPOINT) || (defined(HAVE_DECL_IFF_POINTOPOINT) && HAVE_DECL_IFF_POINTOPOINT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_POINTOPOINT) == ((1 << 4)), "IFF_POINTOPOINT != (1 << 4)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_POINTOPOINT (1 << 4)
#endif
#if defined(IFF_NOTRAILERS) || (defined(HAVE_DECL_IFF_NOTRAILERS) && HAVE_DECL_IFF_NOTRAILERS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_NOTRAILERS) == ((1 << 5)), "IFF_NOTRAILERS != (1 << 5)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_NOTRAILERS (1 << 5)
#endif
#if defined(IFF_RUNNING) || (defined(HAVE_DECL_IFF_RUNNING) && HAVE_DECL_IFF_RUNNING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_RUNNING) == ((1 << 6)), "IFF_RUNNING != (1 << 6)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_RUNNING (1 << 6)
#endif
#if defined(IFF_NOARP) || (defined(HAVE_DECL_IFF_NOARP) && HAVE_DECL_IFF_NOARP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_NOARP) == ((1 << 7)), "IFF_NOARP != (1 << 7)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_NOARP (1 << 7)
#endif
#if defined(IFF_PROMISC) || (defined(HAVE_DECL_IFF_PROMISC) && HAVE_DECL_IFF_PROMISC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_PROMISC) == ((1 << 8)), "IFF_PROMISC != (1 << 8)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_PROMISC (1 << 8)
#endif
#if defined(IFF_ALLMULTI) || (defined(HAVE_DECL_IFF_ALLMULTI) && HAVE_DECL_IFF_ALLMULTI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_ALLMULTI) == ((1 << 9)), "IFF_ALLMULTI != (1 << 9)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_ALLMULTI (1 << 9)
#endif
#if defined(IFF_MASTER) || (defined(HAVE_DECL_IFF_MASTER) && HAVE_DECL_IFF_MASTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_MASTER) == ((1 << 10)), "IFF_MASTER != (1 << 10)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_MASTER (1 << 10)
#endif
#if defined(IFF_SLAVE) || (defined(HAVE_DECL_IFF_SLAVE) && HAVE_DECL_IFF_SLAVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_SLAVE) == ((1 << 11)), "IFF_SLAVE != (1 << 11)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_SLAVE (1 << 11)
#endif
#if defined(IFF_MULTICAST) || (defined(HAVE_DECL_IFF_MULTICAST) && HAVE_DECL_IFF_MULTICAST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_MULTICAST) == ((1 << 12)), "IFF_MULTICAST != (1 << 12)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_MULTICAST (1 << 12)
#endif
#if defined(IFF_PORTSEL) || (defined(HAVE_DECL_IFF_PORTSEL) && HAVE_DECL_IFF_PORTSEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_PORTSEL) == ((1 << 13)), "IFF_PORTSEL != (1 << 13)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_PORTSEL (1 << 13)
#endif
#if defined(IFF_AUTOMEDIA) || (defined(HAVE_DECL_IFF_AUTOMEDIA) && HAVE_DECL_IFF_AUTOMEDIA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_AUTOMEDIA) == ((1 << 14)), "IFF_AUTOMEDIA != (1 << 14)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_AUTOMEDIA (1 << 14)
#endif
#if defined(IFF_DYNAMIC) || (defined(HAVE_DECL_IFF_DYNAMIC) && HAVE_DECL_IFF_DYNAMIC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_DYNAMIC) == ((1 << 15)), "IFF_DYNAMIC != (1 << 15)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_DYNAMIC (1 << 15)
#endif
#if defined(IFF_LOWER_UP) || (defined(HAVE_DECL_IFF_LOWER_UP) && HAVE_DECL_IFF_LOWER_UP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_LOWER_UP) == ((1 << 16)), "IFF_LOWER_UP != (1 << 16)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_LOWER_UP (1 << 16)
#endif
#if defined(IFF_DORMANT) || (defined(HAVE_DECL_IFF_DORMANT) && HAVE_DECL_IFF_DORMANT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_DORMANT) == ((1 << 17)), "IFF_DORMANT != (1 << 17)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_DORMANT (1 << 17)
#endif
#if defined(IFF_ECHO) || (defined(HAVE_DECL_IFF_ECHO) && HAVE_DECL_IFF_ECHO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFF_ECHO) == ((1 << 18)), "IFF_ECHO != (1 << 18)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFF_ECHO (1 << 18)
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data iffflags_xdata[] = {
 XLAT(IFF_UP),
 XLAT(IFF_BROADCAST),
 XLAT(IFF_DEBUG),
 XLAT(IFF_LOOPBACK),
 XLAT(IFF_POINTOPOINT),
 XLAT(IFF_NOTRAILERS),
 XLAT(IFF_RUNNING),
 XLAT(IFF_NOARP),
 XLAT(IFF_PROMISC),
 XLAT(IFF_ALLMULTI),
 XLAT(IFF_MASTER),
 XLAT(IFF_SLAVE),
 XLAT(IFF_MULTICAST),
 XLAT(IFF_PORTSEL),
 XLAT(IFF_AUTOMEDIA),
 XLAT(IFF_DYNAMIC),
 XLAT(IFF_LOWER_UP),
 XLAT(IFF_DORMANT),
 XLAT(IFF_ECHO),
};
const struct xlat iffflags[1] = { {
 .data = iffflags_xdata,
 .size = ARRAY_SIZE(iffflags_xdata),
 .type = XT_SORTED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */