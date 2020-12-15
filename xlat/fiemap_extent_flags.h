/* Generated by ./xlat/gen.sh from ./xlat/fiemap_extent_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FIEMAP_EXTENT_LAST) || (defined(HAVE_DECL_FIEMAP_EXTENT_LAST) && HAVE_DECL_FIEMAP_EXTENT_LAST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_LAST) == (0x00000001), "FIEMAP_EXTENT_LAST != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_LAST 0x00000001
#endif
#if defined(FIEMAP_EXTENT_UNKNOWN) || (defined(HAVE_DECL_FIEMAP_EXTENT_UNKNOWN) && HAVE_DECL_FIEMAP_EXTENT_UNKNOWN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_UNKNOWN) == (0x00000002), "FIEMAP_EXTENT_UNKNOWN != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_UNKNOWN 0x00000002
#endif
#if defined(FIEMAP_EXTENT_DELALLOC) || (defined(HAVE_DECL_FIEMAP_EXTENT_DELALLOC) && HAVE_DECL_FIEMAP_EXTENT_DELALLOC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_DELALLOC) == (0x00000004), "FIEMAP_EXTENT_DELALLOC != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_DELALLOC 0x00000004
#endif
#if defined(FIEMAP_EXTENT_ENCODED) || (defined(HAVE_DECL_FIEMAP_EXTENT_ENCODED) && HAVE_DECL_FIEMAP_EXTENT_ENCODED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_ENCODED) == (0x00000008), "FIEMAP_EXTENT_ENCODED != 0x00000008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_ENCODED 0x00000008
#endif
#if defined(FIEMAP_EXTENT_DATA_ENCRYPTED) || (defined(HAVE_DECL_FIEMAP_EXTENT_DATA_ENCRYPTED) && HAVE_DECL_FIEMAP_EXTENT_DATA_ENCRYPTED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_DATA_ENCRYPTED) == (0x00000080), "FIEMAP_EXTENT_DATA_ENCRYPTED != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_DATA_ENCRYPTED 0x00000080
#endif
#if defined(FIEMAP_EXTENT_NOT_ALIGNED) || (defined(HAVE_DECL_FIEMAP_EXTENT_NOT_ALIGNED) && HAVE_DECL_FIEMAP_EXTENT_NOT_ALIGNED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_NOT_ALIGNED) == (0x00000100), "FIEMAP_EXTENT_NOT_ALIGNED != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_NOT_ALIGNED 0x00000100
#endif
#if defined(FIEMAP_EXTENT_DATA_INLINE) || (defined(HAVE_DECL_FIEMAP_EXTENT_DATA_INLINE) && HAVE_DECL_FIEMAP_EXTENT_DATA_INLINE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_DATA_INLINE) == (0x00000200), "FIEMAP_EXTENT_DATA_INLINE != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_DATA_INLINE 0x00000200
#endif
#if defined(FIEMAP_EXTENT_DATA_TAIL) || (defined(HAVE_DECL_FIEMAP_EXTENT_DATA_TAIL) && HAVE_DECL_FIEMAP_EXTENT_DATA_TAIL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_DATA_TAIL) == (0x00000400), "FIEMAP_EXTENT_DATA_TAIL != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_DATA_TAIL 0x00000400
#endif
#if defined(FIEMAP_EXTENT_UNWRITTEN) || (defined(HAVE_DECL_FIEMAP_EXTENT_UNWRITTEN) && HAVE_DECL_FIEMAP_EXTENT_UNWRITTEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_UNWRITTEN) == (0x00000800), "FIEMAP_EXTENT_UNWRITTEN != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_UNWRITTEN 0x00000800
#endif
#if defined(FIEMAP_EXTENT_MERGED) || (defined(HAVE_DECL_FIEMAP_EXTENT_MERGED) && HAVE_DECL_FIEMAP_EXTENT_MERGED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_MERGED) == (0x00001000), "FIEMAP_EXTENT_MERGED != 0x00001000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_MERGED 0x00001000
#endif
#if defined(FIEMAP_EXTENT_SHARED) || (defined(HAVE_DECL_FIEMAP_EXTENT_SHARED) && HAVE_DECL_FIEMAP_EXTENT_SHARED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FIEMAP_EXTENT_SHARED) == (0x00002000), "FIEMAP_EXTENT_SHARED != 0x00002000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FIEMAP_EXTENT_SHARED 0x00002000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fiemap_extent_flags in mpers mode

# else

static const struct xlat_data fiemap_extent_flags_xdata[] = {
 XLAT(FIEMAP_EXTENT_LAST),
 XLAT(FIEMAP_EXTENT_UNKNOWN),
 XLAT(FIEMAP_EXTENT_DELALLOC),
 XLAT(FIEMAP_EXTENT_ENCODED),
 XLAT(FIEMAP_EXTENT_DATA_ENCRYPTED),
 XLAT(FIEMAP_EXTENT_NOT_ALIGNED),
 XLAT(FIEMAP_EXTENT_DATA_INLINE),
 XLAT(FIEMAP_EXTENT_DATA_TAIL),
 XLAT(FIEMAP_EXTENT_UNWRITTEN),
 XLAT(FIEMAP_EXTENT_MERGED),
 XLAT(FIEMAP_EXTENT_SHARED),
};
static
const struct xlat fiemap_extent_flags[1] = { {
 .data = fiemap_extent_flags_xdata,
 .size = ARRAY_SIZE(fiemap_extent_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
