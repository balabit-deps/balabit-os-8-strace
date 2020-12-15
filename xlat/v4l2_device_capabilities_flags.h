/* Generated by ./xlat/gen.sh from ./xlat/v4l2_device_capabilities_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(V4L2_CAP_VIDEO_CAPTURE) || (defined(HAVE_DECL_V4L2_CAP_VIDEO_CAPTURE) && HAVE_DECL_V4L2_CAP_VIDEO_CAPTURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VIDEO_CAPTURE) == (0x00000001), "V4L2_CAP_VIDEO_CAPTURE != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VIDEO_CAPTURE 0x00000001
#endif
#if defined(V4L2_CAP_VIDEO_OUTPUT) || (defined(HAVE_DECL_V4L2_CAP_VIDEO_OUTPUT) && HAVE_DECL_V4L2_CAP_VIDEO_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VIDEO_OUTPUT) == (0x00000002), "V4L2_CAP_VIDEO_OUTPUT != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VIDEO_OUTPUT 0x00000002
#endif
#if defined(V4L2_CAP_VIDEO_OVERLAY) || (defined(HAVE_DECL_V4L2_CAP_VIDEO_OVERLAY) && HAVE_DECL_V4L2_CAP_VIDEO_OVERLAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VIDEO_OVERLAY) == (0x00000004), "V4L2_CAP_VIDEO_OVERLAY != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VIDEO_OVERLAY 0x00000004
#endif
#if defined(V4L2_CAP_VBI_CAPTURE) || (defined(HAVE_DECL_V4L2_CAP_VBI_CAPTURE) && HAVE_DECL_V4L2_CAP_VBI_CAPTURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VBI_CAPTURE) == (0x00000010), "V4L2_CAP_VBI_CAPTURE != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VBI_CAPTURE 0x00000010
#endif
#if defined(V4L2_CAP_VBI_OUTPUT) || (defined(HAVE_DECL_V4L2_CAP_VBI_OUTPUT) && HAVE_DECL_V4L2_CAP_VBI_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VBI_OUTPUT) == (0x00000020), "V4L2_CAP_VBI_OUTPUT != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VBI_OUTPUT 0x00000020
#endif
#if defined(V4L2_CAP_SLICED_VBI_CAPTURE) || (defined(HAVE_DECL_V4L2_CAP_SLICED_VBI_CAPTURE) && HAVE_DECL_V4L2_CAP_SLICED_VBI_CAPTURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_SLICED_VBI_CAPTURE) == (0x00000040), "V4L2_CAP_SLICED_VBI_CAPTURE != 0x00000040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_SLICED_VBI_CAPTURE 0x00000040
#endif
#if defined(V4L2_CAP_SLICED_VBI_OUTPUT) || (defined(HAVE_DECL_V4L2_CAP_SLICED_VBI_OUTPUT) && HAVE_DECL_V4L2_CAP_SLICED_VBI_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_SLICED_VBI_OUTPUT) == (0x00000080), "V4L2_CAP_SLICED_VBI_OUTPUT != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_SLICED_VBI_OUTPUT 0x00000080
#endif
#if defined(V4L2_CAP_RDS_CAPTURE) || (defined(HAVE_DECL_V4L2_CAP_RDS_CAPTURE) && HAVE_DECL_V4L2_CAP_RDS_CAPTURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_RDS_CAPTURE) == (0x00000100), "V4L2_CAP_RDS_CAPTURE != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_RDS_CAPTURE 0x00000100
#endif
#if defined(V4L2_CAP_VIDEO_OUTPUT_OVERLAY) || (defined(HAVE_DECL_V4L2_CAP_VIDEO_OUTPUT_OVERLAY) && HAVE_DECL_V4L2_CAP_VIDEO_OUTPUT_OVERLAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VIDEO_OUTPUT_OVERLAY) == (0x00000200), "V4L2_CAP_VIDEO_OUTPUT_OVERLAY != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VIDEO_OUTPUT_OVERLAY 0x00000200
#endif
#if defined(V4L2_CAP_HW_FREQ_SEEK) || (defined(HAVE_DECL_V4L2_CAP_HW_FREQ_SEEK) && HAVE_DECL_V4L2_CAP_HW_FREQ_SEEK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_HW_FREQ_SEEK) == (0x00000400), "V4L2_CAP_HW_FREQ_SEEK != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_HW_FREQ_SEEK 0x00000400
#endif
#if defined(V4L2_CAP_RDS_OUTPUT) || (defined(HAVE_DECL_V4L2_CAP_RDS_OUTPUT) && HAVE_DECL_V4L2_CAP_RDS_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_RDS_OUTPUT) == (0x00000800), "V4L2_CAP_RDS_OUTPUT != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_RDS_OUTPUT 0x00000800
#endif
#if defined(V4L2_CAP_VIDEO_CAPTURE_MPLANE) || (defined(HAVE_DECL_V4L2_CAP_VIDEO_CAPTURE_MPLANE) && HAVE_DECL_V4L2_CAP_VIDEO_CAPTURE_MPLANE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VIDEO_CAPTURE_MPLANE) == (0x00001000), "V4L2_CAP_VIDEO_CAPTURE_MPLANE != 0x00001000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VIDEO_CAPTURE_MPLANE 0x00001000
#endif
#if defined(V4L2_CAP_VIDEO_OUTPUT_MPLANE) || (defined(HAVE_DECL_V4L2_CAP_VIDEO_OUTPUT_MPLANE) && HAVE_DECL_V4L2_CAP_VIDEO_OUTPUT_MPLANE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VIDEO_OUTPUT_MPLANE) == (0x00002000), "V4L2_CAP_VIDEO_OUTPUT_MPLANE != 0x00002000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VIDEO_OUTPUT_MPLANE 0x00002000
#endif
#if defined(V4L2_CAP_VIDEO_M2M_MPLANE) || (defined(HAVE_DECL_V4L2_CAP_VIDEO_M2M_MPLANE) && HAVE_DECL_V4L2_CAP_VIDEO_M2M_MPLANE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VIDEO_M2M_MPLANE) == (0x00004000), "V4L2_CAP_VIDEO_M2M_MPLANE != 0x00004000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VIDEO_M2M_MPLANE 0x00004000
#endif
#if defined(V4L2_CAP_VIDEO_M2M) || (defined(HAVE_DECL_V4L2_CAP_VIDEO_M2M) && HAVE_DECL_V4L2_CAP_VIDEO_M2M)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_VIDEO_M2M) == (0x00008000), "V4L2_CAP_VIDEO_M2M != 0x00008000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_VIDEO_M2M 0x00008000
#endif
#if defined(V4L2_CAP_TUNER) || (defined(HAVE_DECL_V4L2_CAP_TUNER) && HAVE_DECL_V4L2_CAP_TUNER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_TUNER) == (0x00010000), "V4L2_CAP_TUNER != 0x00010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_TUNER 0x00010000
#endif
#if defined(V4L2_CAP_AUDIO) || (defined(HAVE_DECL_V4L2_CAP_AUDIO) && HAVE_DECL_V4L2_CAP_AUDIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_AUDIO) == (0x00020000), "V4L2_CAP_AUDIO != 0x00020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_AUDIO 0x00020000
#endif
#if defined(V4L2_CAP_RADIO) || (defined(HAVE_DECL_V4L2_CAP_RADIO) && HAVE_DECL_V4L2_CAP_RADIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_RADIO) == (0x00040000), "V4L2_CAP_RADIO != 0x00040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_RADIO 0x00040000
#endif
#if defined(V4L2_CAP_MODULATOR) || (defined(HAVE_DECL_V4L2_CAP_MODULATOR) && HAVE_DECL_V4L2_CAP_MODULATOR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_MODULATOR) == (0x00080000), "V4L2_CAP_MODULATOR != 0x00080000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_MODULATOR 0x00080000
#endif
#if defined(V4L2_CAP_SDR_CAPTURE) || (defined(HAVE_DECL_V4L2_CAP_SDR_CAPTURE) && HAVE_DECL_V4L2_CAP_SDR_CAPTURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_SDR_CAPTURE) == (0x00100000), "V4L2_CAP_SDR_CAPTURE != 0x00100000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_SDR_CAPTURE 0x00100000
#endif
#if defined(V4L2_CAP_EXT_PIX_FORMAT) || (defined(HAVE_DECL_V4L2_CAP_EXT_PIX_FORMAT) && HAVE_DECL_V4L2_CAP_EXT_PIX_FORMAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_EXT_PIX_FORMAT) == (0x00200000), "V4L2_CAP_EXT_PIX_FORMAT != 0x00200000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_EXT_PIX_FORMAT 0x00200000
#endif
#if defined(V4L2_CAP_SDR_OUTPUT) || (defined(HAVE_DECL_V4L2_CAP_SDR_OUTPUT) && HAVE_DECL_V4L2_CAP_SDR_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_SDR_OUTPUT) == (0x00400000), "V4L2_CAP_SDR_OUTPUT != 0x00400000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_SDR_OUTPUT 0x00400000
#endif
#if defined(V4L2_CAP_META_CAPTURE) || (defined(HAVE_DECL_V4L2_CAP_META_CAPTURE) && HAVE_DECL_V4L2_CAP_META_CAPTURE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_META_CAPTURE) == (0x00800000), "V4L2_CAP_META_CAPTURE != 0x00800000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_META_CAPTURE 0x00800000
#endif
#if defined(V4L2_CAP_READWRITE) || (defined(HAVE_DECL_V4L2_CAP_READWRITE) && HAVE_DECL_V4L2_CAP_READWRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_READWRITE) == (0x01000000), "V4L2_CAP_READWRITE != 0x01000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_READWRITE 0x01000000
#endif
#if defined(V4L2_CAP_ASYNCIO) || (defined(HAVE_DECL_V4L2_CAP_ASYNCIO) && HAVE_DECL_V4L2_CAP_ASYNCIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_ASYNCIO) == (0x02000000), "V4L2_CAP_ASYNCIO != 0x02000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_ASYNCIO 0x02000000
#endif
#if defined(V4L2_CAP_STREAMING) || (defined(HAVE_DECL_V4L2_CAP_STREAMING) && HAVE_DECL_V4L2_CAP_STREAMING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_STREAMING) == (0x04000000), "V4L2_CAP_STREAMING != 0x04000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_STREAMING 0x04000000
#endif
#if defined(V4L2_CAP_META_OUTPUT) || (defined(HAVE_DECL_V4L2_CAP_META_OUTPUT) && HAVE_DECL_V4L2_CAP_META_OUTPUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_META_OUTPUT) == (0x08000000), "V4L2_CAP_META_OUTPUT != 0x08000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_META_OUTPUT 0x08000000
#endif
#if defined(V4L2_CAP_TOUCH) || (defined(HAVE_DECL_V4L2_CAP_TOUCH) && HAVE_DECL_V4L2_CAP_TOUCH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_TOUCH) == (0x10000000), "V4L2_CAP_TOUCH != 0x10000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_TOUCH 0x10000000
#endif
#if defined(V4L2_CAP_DEVICE_CAPS) || (defined(HAVE_DECL_V4L2_CAP_DEVICE_CAPS) && HAVE_DECL_V4L2_CAP_DEVICE_CAPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_CAP_DEVICE_CAPS) == (0x80000000), "V4L2_CAP_DEVICE_CAPS != 0x80000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_CAP_DEVICE_CAPS 0x80000000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_device_capabilities_flags[];

# else

static const struct xlat_data v4l2_device_capabilities_flags_xdata[] = {
 XLAT(V4L2_CAP_VIDEO_CAPTURE),
 XLAT(V4L2_CAP_VIDEO_OUTPUT),
 XLAT(V4L2_CAP_VIDEO_OVERLAY),
 XLAT(V4L2_CAP_VBI_CAPTURE),
 XLAT(V4L2_CAP_VBI_OUTPUT),
 XLAT(V4L2_CAP_SLICED_VBI_CAPTURE),
 XLAT(V4L2_CAP_SLICED_VBI_OUTPUT),
 XLAT(V4L2_CAP_RDS_CAPTURE),
 XLAT(V4L2_CAP_VIDEO_OUTPUT_OVERLAY),
 XLAT(V4L2_CAP_HW_FREQ_SEEK),
 XLAT(V4L2_CAP_RDS_OUTPUT),
 XLAT(V4L2_CAP_VIDEO_CAPTURE_MPLANE),
 XLAT(V4L2_CAP_VIDEO_OUTPUT_MPLANE),
 XLAT(V4L2_CAP_VIDEO_M2M_MPLANE),
 XLAT(V4L2_CAP_VIDEO_M2M),
 XLAT(V4L2_CAP_TUNER),
 XLAT(V4L2_CAP_AUDIO),
 XLAT(V4L2_CAP_RADIO),
 XLAT(V4L2_CAP_MODULATOR),
 XLAT(V4L2_CAP_SDR_CAPTURE),
 XLAT(V4L2_CAP_EXT_PIX_FORMAT),
 XLAT(V4L2_CAP_SDR_OUTPUT),
 XLAT(V4L2_CAP_META_CAPTURE),
 XLAT(V4L2_CAP_READWRITE),
 XLAT(V4L2_CAP_ASYNCIO),
 XLAT(V4L2_CAP_STREAMING),
 XLAT(V4L2_CAP_META_OUTPUT),
 XLAT(V4L2_CAP_TOUCH),
 XLAT(V4L2_CAP_DEVICE_CAPS),
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_device_capabilities_flags[1] = { {
 .data = v4l2_device_capabilities_flags_xdata,
 .size = ARRAY_SIZE(v4l2_device_capabilities_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */