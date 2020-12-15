/* Generated by ./xlat/gen.sh from ./xlat/uring_register_opcodes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IORING_REGISTER_BUFFERS) || (defined(HAVE_DECL_IORING_REGISTER_BUFFERS) && HAVE_DECL_IORING_REGISTER_BUFFERS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_BUFFERS) == (0U), "IORING_REGISTER_BUFFERS != 0U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_BUFFERS 0U
#endif
#if defined(IORING_UNREGISTER_BUFFERS) || (defined(HAVE_DECL_IORING_UNREGISTER_BUFFERS) && HAVE_DECL_IORING_UNREGISTER_BUFFERS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_UNREGISTER_BUFFERS) == (1U), "IORING_UNREGISTER_BUFFERS != 1U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_UNREGISTER_BUFFERS 1U
#endif
#if defined(IORING_REGISTER_FILES) || (defined(HAVE_DECL_IORING_REGISTER_FILES) && HAVE_DECL_IORING_REGISTER_FILES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_FILES) == (2U), "IORING_REGISTER_FILES != 2U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_FILES 2U
#endif
#if defined(IORING_UNREGISTER_FILES) || (defined(HAVE_DECL_IORING_UNREGISTER_FILES) && HAVE_DECL_IORING_UNREGISTER_FILES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_UNREGISTER_FILES) == (3U), "IORING_UNREGISTER_FILES != 3U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_UNREGISTER_FILES 3U
#endif
#if defined(IORING_REGISTER_EVENTFD) || (defined(HAVE_DECL_IORING_REGISTER_EVENTFD) && HAVE_DECL_IORING_REGISTER_EVENTFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_EVENTFD) == (4U), "IORING_REGISTER_EVENTFD != 4U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_EVENTFD 4U
#endif
#if defined(IORING_UNREGISTER_EVENTFD) || (defined(HAVE_DECL_IORING_UNREGISTER_EVENTFD) && HAVE_DECL_IORING_UNREGISTER_EVENTFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_UNREGISTER_EVENTFD) == (5U), "IORING_UNREGISTER_EVENTFD != 5U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_UNREGISTER_EVENTFD 5U
#endif
#if defined(IORING_REGISTER_FILES_UPDATE) || (defined(HAVE_DECL_IORING_REGISTER_FILES_UPDATE) && HAVE_DECL_IORING_REGISTER_FILES_UPDATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_FILES_UPDATE) == (6U), "IORING_REGISTER_FILES_UPDATE != 6U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_FILES_UPDATE 6U
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uring_register_opcodes in mpers mode

# else

static const struct xlat_data uring_register_opcodes_xdata[] = {
 [IORING_REGISTER_BUFFERS] = XLAT(IORING_REGISTER_BUFFERS),
 [IORING_UNREGISTER_BUFFERS] = XLAT(IORING_UNREGISTER_BUFFERS),
 [IORING_REGISTER_FILES] = XLAT(IORING_REGISTER_FILES),
 [IORING_UNREGISTER_FILES] = XLAT(IORING_UNREGISTER_FILES),
 [IORING_REGISTER_EVENTFD] = XLAT(IORING_REGISTER_EVENTFD),
 [IORING_UNREGISTER_EVENTFD] = XLAT(IORING_UNREGISTER_EVENTFD),
 [IORING_REGISTER_FILES_UPDATE] = XLAT(IORING_REGISTER_FILES_UPDATE),
};
static
const struct xlat uring_register_opcodes[1] = { {
 .data = uring_register_opcodes_xdata,
 .size = ARRAY_SIZE(uring_register_opcodes_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */