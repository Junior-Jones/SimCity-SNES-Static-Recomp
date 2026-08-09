#ifndef SC_V11_VIDEO_H
#define SC_V11_VIDEO_H

#include "sc_machine.h"
#include <stddef.h>
#include <stdint.h>

#define SC_V11_VIDEO_WIDTH 256u
#define SC_V11_VIDEO_HEIGHT 239u
#define SC_V11_VIDEO_PIXELS (SC_V11_VIDEO_WIDTH * SC_V11_VIDEO_HEIGHT)

int sc_v11_render_reached_frame(const SCMachine *machine,
                                uint32_t *bgra,
                                size_t pixel_capacity);

#endif
