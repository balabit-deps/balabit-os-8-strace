/* Generated by ./xlat/gen.sh from ./xlat/crypto_nl_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(CRYPTOCFGA_UNSPEC) || (defined(HAVE_DECL_CRYPTOCFGA_UNSPEC) && HAVE_DECL_CRYPTOCFGA_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_UNSPEC) == (0), "CRYPTOCFGA_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_UNSPEC 0
#endif
#if defined(CRYPTOCFGA_PRIORITY_VAL) || (defined(HAVE_DECL_CRYPTOCFGA_PRIORITY_VAL) && HAVE_DECL_CRYPTOCFGA_PRIORITY_VAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_PRIORITY_VAL) == (1), "CRYPTOCFGA_PRIORITY_VAL != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_PRIORITY_VAL 1
#endif
#if defined(CRYPTOCFGA_REPORT_LARVAL) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_LARVAL) && HAVE_DECL_CRYPTOCFGA_REPORT_LARVAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_LARVAL) == (2), "CRYPTOCFGA_REPORT_LARVAL != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_LARVAL 2
#endif
#if defined(CRYPTOCFGA_REPORT_HASH) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_HASH) && HAVE_DECL_CRYPTOCFGA_REPORT_HASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_HASH) == (3), "CRYPTOCFGA_REPORT_HASH != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_HASH 3
#endif
#if defined(CRYPTOCFGA_REPORT_BLKCIPHER) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_BLKCIPHER) && HAVE_DECL_CRYPTOCFGA_REPORT_BLKCIPHER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_BLKCIPHER) == (4), "CRYPTOCFGA_REPORT_BLKCIPHER != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_BLKCIPHER 4
#endif
#if defined(CRYPTOCFGA_REPORT_AEAD) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_AEAD) && HAVE_DECL_CRYPTOCFGA_REPORT_AEAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_AEAD) == (5), "CRYPTOCFGA_REPORT_AEAD != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_AEAD 5
#endif
#if defined(CRYPTOCFGA_REPORT_COMPRESS) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_COMPRESS) && HAVE_DECL_CRYPTOCFGA_REPORT_COMPRESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_COMPRESS) == (6), "CRYPTOCFGA_REPORT_COMPRESS != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_COMPRESS 6
#endif
#if defined(CRYPTOCFGA_REPORT_RNG) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_RNG) && HAVE_DECL_CRYPTOCFGA_REPORT_RNG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_RNG) == (7), "CRYPTOCFGA_REPORT_RNG != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_RNG 7
#endif
#if defined(CRYPTOCFGA_REPORT_CIPHER) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_CIPHER) && HAVE_DECL_CRYPTOCFGA_REPORT_CIPHER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_CIPHER) == (8), "CRYPTOCFGA_REPORT_CIPHER != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_CIPHER 8
#endif
#if defined(CRYPTOCFGA_REPORT_AKCIPHER) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_AKCIPHER) && HAVE_DECL_CRYPTOCFGA_REPORT_AKCIPHER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_AKCIPHER) == (9), "CRYPTOCFGA_REPORT_AKCIPHER != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_AKCIPHER 9
#endif
#if defined(CRYPTOCFGA_REPORT_KPP) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_KPP) && HAVE_DECL_CRYPTOCFGA_REPORT_KPP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_KPP) == (10), "CRYPTOCFGA_REPORT_KPP != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_KPP 10
#endif
#if defined(CRYPTOCFGA_REPORT_ACOMP) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_ACOMP) && HAVE_DECL_CRYPTOCFGA_REPORT_ACOMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CRYPTOCFGA_REPORT_ACOMP) == (11), "CRYPTOCFGA_REPORT_ACOMP != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CRYPTOCFGA_REPORT_ACOMP 11
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat crypto_nl_attrs in mpers mode

# else

static const struct xlat_data crypto_nl_attrs_xdata[] = {
 [CRYPTOCFGA_UNSPEC] = XLAT(CRYPTOCFGA_UNSPEC),
 [CRYPTOCFGA_PRIORITY_VAL] = XLAT(CRYPTOCFGA_PRIORITY_VAL),
 [CRYPTOCFGA_REPORT_LARVAL] = XLAT(CRYPTOCFGA_REPORT_LARVAL),
 [CRYPTOCFGA_REPORT_HASH] = XLAT(CRYPTOCFGA_REPORT_HASH),
 [CRYPTOCFGA_REPORT_BLKCIPHER] = XLAT(CRYPTOCFGA_REPORT_BLKCIPHER),
 [CRYPTOCFGA_REPORT_AEAD] = XLAT(CRYPTOCFGA_REPORT_AEAD),
 [CRYPTOCFGA_REPORT_COMPRESS] = XLAT(CRYPTOCFGA_REPORT_COMPRESS),
 [CRYPTOCFGA_REPORT_RNG] = XLAT(CRYPTOCFGA_REPORT_RNG),
 [CRYPTOCFGA_REPORT_CIPHER] = XLAT(CRYPTOCFGA_REPORT_CIPHER),
 [CRYPTOCFGA_REPORT_AKCIPHER] = XLAT(CRYPTOCFGA_REPORT_AKCIPHER),
 [CRYPTOCFGA_REPORT_KPP] = XLAT(CRYPTOCFGA_REPORT_KPP),
 [CRYPTOCFGA_REPORT_ACOMP] = XLAT(CRYPTOCFGA_REPORT_ACOMP),
};
static
const struct xlat crypto_nl_attrs[1] = { {
 .data = crypto_nl_attrs_xdata,
 .size = ARRAY_SIZE(crypto_nl_attrs_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
