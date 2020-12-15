/* Generated by ./xlat/gen.sh from ./xlat/atomic_ops.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat atomic_ops in mpers mode

# else

static const struct xlat_data atomic_ops_xdata[] = {
{ OR1K_ATOMIC_SWAP,		"SWAP"		},
{ OR1K_ATOMIC_CMPXCHG,		"CMPXCHG"	},
{ OR1K_ATOMIC_XCHG,		"XCHG"		},
{ OR1K_ATOMIC_ADD,		"ADD"		},
{ OR1K_ATOMIC_DECPOS,		"DECPOS"	},
{ OR1K_ATOMIC_AND,		"AND"		},
{ OR1K_ATOMIC_OR,		"OR"		},
{ OR1K_ATOMIC_UMAX,		"UMAX"		},
{ OR1K_ATOMIC_UMIN,		"UMIN"		},
};
static
const struct xlat atomic_ops[1] = { {
 .data = atomic_ops_xdata,
 .size = ARRAY_SIZE(atomic_ops_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
