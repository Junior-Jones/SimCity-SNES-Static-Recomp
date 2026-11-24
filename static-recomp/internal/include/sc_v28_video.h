#ifndef SC_V28_VIDEO_H
#define SC_V28_VIDEO_H

#include "sc_v11_runtime.h"
#include "sc_v11_video.h"
#include "simcity_static_recomp.h"
#include <stddef.h>
#include <stdint.h>

#define SC_V28_FRAME_WIDTH SC_V11_VIDEO_WIDTH
#define SC_V28_MAX_FRAME_WIDTH SIMCITY_RECOMP_WIDESCREEN_WIDTH
#define SC_V28_FRAME_HEIGHT SC_V11_VIDEO_HEIGHT
#define SC_V28_FRAME_PIXELS SC_V11_VIDEO_PIXELS
#define SC_V28_MAX_FRAME_PIXELS \
    (SC_V28_MAX_FRAME_WIDTH * SC_V28_FRAME_HEIGHT)

typedef struct SCV28VideoReport {
    uint8_t passed;
    uint8_t mode;
    uint8_t brightness;
    uint8_t forced_blank;
    uint8_t main_screen_mask;
    uint8_t sub_screen_mask;
    uint8_t color_math;
    uint8_t reached_feature_set_supported;
    uint32_t nonblack_pixels;
    uint32_t unique_colors;
    char bgr555_sha256[65];
    char bgra_sha256[65];
    char error[192];
} SCV28VideoReport;

typedef struct SCV28CityMapView {
    const uint16_t *tiles;
    unsigned width, height;
    int origin_x, origin_y;
} SCV28CityMapView;

enum { SC_V28_STOCK_CITY_BYTES = 120 * 100 * 2 };
typedef struct SCV28VideoInput {
    const uint8_t *vram, *cgram, *oam, *registers, *city_bytes, *rom;
    const uint16_t *scroll;
    const SCV11PpuLineState *lines;
    size_t rom_size;
    uint32_t frame, completed_frame;
    int camera_x, camera_y, cursor_x, cursor_base, cursor_on_map;
    uint16_t fixed_color, oam_word_address;
    uint8_t brightness, forced_blank, oam_priority_rotation;
} SCV28VideoInput;

/* A playback job owns only the mutable inputs the PPU renderer reads.
   The ROM remains immutable and must outlive the job. */
typedef struct SCV28CapturedInput {
    SCV28VideoInput input;
    uint8_t vram[SC_VRAM_SIZE], cgram[SC_CGRAM_SIZE], oam[SC_OAM_SIZE];
    uint8_t registers[SC_V11_PPU_RENDER_REGISTER_COUNT];
    uint8_t city_bytes[SC_V28_STOCK_CITY_BYTES];
    uint16_t scroll[8];
    SCV11PpuLineState lines[SC_V11_PPU_VISIBLE_LINES];
} SCV28CapturedInput;

void sc_v28_capture_input(SCV28CapturedInput *capture, const SCV11Runtime *runtime);
int sc_v28_render_input(const SCV28VideoInput *input, unsigned output_width,
                        unsigned left_margin, int diagnostics,
                        uint16_t *bgr555, size_t bgr555_capacity,
                        uint32_t *bgra, size_t bgra_capacity,
                        SCV28VideoReport *report, const SCV28CityMapView *map);

int sc_v28_render_first_visible_frame(const SCV11Runtime *runtime,
                                      unsigned output_width,
                                      unsigned left_margin,
                                      int collect_diagnostics,
                                      uint16_t *bgr555,
                                      size_t bgr555_capacity,
                                      uint32_t *bgra,
                                      size_t bgra_capacity,
                                      SCV28VideoReport *report);
int sc_v28_render_stock_map_view(const SCV11Runtime *runtime,
                               unsigned output_width, unsigned left_margin,
                               int diagnostics,
                               uint16_t *bgr555, uint32_t *bgra,
                               SCV28VideoReport *report,
                               const SCV28CityMapView *map);

#endif
