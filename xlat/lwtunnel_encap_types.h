/* Generated by ./xlat/gen.sh from ./xlat/lwtunnel_encap_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(LWTUNNEL_ENCAP_NONE) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_NONE) && HAVE_DECL_LWTUNNEL_ENCAP_NONE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_NONE) == (0), "LWTUNNEL_ENCAP_NONE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_NONE 0
#endif
#if defined(LWTUNNEL_ENCAP_MPLS) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_MPLS) && HAVE_DECL_LWTUNNEL_ENCAP_MPLS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_MPLS) == (1), "LWTUNNEL_ENCAP_MPLS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_MPLS 1
#endif
#if defined(LWTUNNEL_ENCAP_IP) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_IP) && HAVE_DECL_LWTUNNEL_ENCAP_IP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_IP) == (2), "LWTUNNEL_ENCAP_IP != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_IP 2
#endif
#if defined(LWTUNNEL_ENCAP_ILA) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_ILA) && HAVE_DECL_LWTUNNEL_ENCAP_ILA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_ILA) == (3), "LWTUNNEL_ENCAP_ILA != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_ILA 3
#endif
#if defined(LWTUNNEL_ENCAP_IP6) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_IP6) && HAVE_DECL_LWTUNNEL_ENCAP_IP6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_IP6) == (4), "LWTUNNEL_ENCAP_IP6 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_IP6 4
#endif
#if defined(LWTUNNEL_ENCAP_SEG6) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_SEG6) && HAVE_DECL_LWTUNNEL_ENCAP_SEG6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_SEG6) == (5), "LWTUNNEL_ENCAP_SEG6 != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_SEG6 5
#endif
#if defined(LWTUNNEL_ENCAP_BPF) || (defined(HAVE_DECL_LWTUNNEL_ENCAP_BPF) && HAVE_DECL_LWTUNNEL_ENCAP_BPF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LWTUNNEL_ENCAP_BPF) == (6), "LWTUNNEL_ENCAP_BPF != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LWTUNNEL_ENCAP_BPF 6
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat lwtunnel_encap_types in mpers mode

# else

static const struct xlat_data lwtunnel_encap_types_xdata[] = {
 [LWTUNNEL_ENCAP_NONE] = XLAT(LWTUNNEL_ENCAP_NONE),
 [LWTUNNEL_ENCAP_MPLS] = XLAT(LWTUNNEL_ENCAP_MPLS),
 [LWTUNNEL_ENCAP_IP] = XLAT(LWTUNNEL_ENCAP_IP),
 [LWTUNNEL_ENCAP_ILA] = XLAT(LWTUNNEL_ENCAP_ILA),
 [LWTUNNEL_ENCAP_IP6] = XLAT(LWTUNNEL_ENCAP_IP6),
 [LWTUNNEL_ENCAP_SEG6] = XLAT(LWTUNNEL_ENCAP_SEG6),
 [LWTUNNEL_ENCAP_BPF] = XLAT(LWTUNNEL_ENCAP_BPF),
};
static
const struct xlat lwtunnel_encap_types[1] = { {
 .data = lwtunnel_encap_types_xdata,
 .size = ARRAY_SIZE(lwtunnel_encap_types_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
