/* Generated by ./xlat/gen.sh from ./xlat/v4l2_memories.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(V4L2_MEMORY_MMAP) || (defined(HAVE_DECL_V4L2_MEMORY_MMAP) && HAVE_DECL_V4L2_MEMORY_MMAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_MEMORY_MMAP) == (1), "V4L2_MEMORY_MMAP != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_MEMORY_MMAP 1
#endif
#if defined(V4L2_MEMORY_USERPTR) || (defined(HAVE_DECL_V4L2_MEMORY_USERPTR) && HAVE_DECL_V4L2_MEMORY_USERPTR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_MEMORY_USERPTR) == (2), "V4L2_MEMORY_USERPTR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_MEMORY_USERPTR 2
#endif
#if defined(V4L2_MEMORY_OVERLAY) || (defined(HAVE_DECL_V4L2_MEMORY_OVERLAY) && HAVE_DECL_V4L2_MEMORY_OVERLAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_MEMORY_OVERLAY) == (3), "V4L2_MEMORY_OVERLAY != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_MEMORY_OVERLAY 3
#endif
#if defined(V4L2_MEMORY_DMABUF) || (defined(HAVE_DECL_V4L2_MEMORY_DMABUF) && HAVE_DECL_V4L2_MEMORY_DMABUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_MEMORY_DMABUF) == (4), "V4L2_MEMORY_DMABUF != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_MEMORY_DMABUF 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_memories[];

# else

static const struct xlat_data v4l2_memories_xdata[] = {
 [V4L2_MEMORY_MMAP] = XLAT(V4L2_MEMORY_MMAP),
 [V4L2_MEMORY_USERPTR] = XLAT(V4L2_MEMORY_USERPTR),
 [V4L2_MEMORY_OVERLAY] = XLAT(V4L2_MEMORY_OVERLAY),
 [V4L2_MEMORY_DMABUF] = XLAT(V4L2_MEMORY_DMABUF),
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_memories[1] = { {
 .data = v4l2_memories_xdata,
 .size = ARRAY_SIZE(v4l2_memories_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
