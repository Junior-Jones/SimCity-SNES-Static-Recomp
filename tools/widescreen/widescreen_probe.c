#include "simcity_static_recomp.h"
#include "simcity_presentation_clock.h"
#include "stock_controller_tape.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#include <avrt.h>
#include "simcity_prepared_video.h"
#include "simcity_win32_frame_blit.h"
#if defined(_M_X64)
#include "win32_probe_sampling.h"
#endif
#else
#include <time.h>
#endif

static int read_file(const char *path, uint8_t **data, size_t *size) {
    FILE *file;
    long length;
    uint8_t *bytes;
    *data = NULL;
    *size = 0u;
    file = fopen(path, "rb");
    if (!file || fseek(file, 0, SEEK_END) != 0 ||
        (length = ftell(file)) < 0 || fseek(file, 0, SEEK_SET) != 0) {
        if (file) fclose(file);
        return 0;
    }
    bytes = (uint8_t *)malloc((size_t)length);
    const int read_ok = bytes && fread(bytes, 1u, (size_t)length, file) == (size_t)length;
    const int close_ok = fclose(file) == 0;
    if (!read_ok || !close_ok) {
        free(bytes);
        return 0;
    }
    *data = bytes;
    *size = (size_t)length;
    return 1;
}

static int write_new_file(const char *path, const uint8_t *bytes, size_t size) {
    FILE *file = fopen(path, "wbx");
    if (!file) return 0;
    const int written = fwrite(bytes, 1u, size, file) == size;
    const int closed = fclose(file) == 0;
    return written && closed;
}

static int put_u16(FILE *file, uint16_t value) {
    uint8_t bytes[2] = {(uint8_t)value, (uint8_t)(value >> 8)};
    return fwrite(bytes, 1u, 2u, file) == 2u;
}

static int put_u32(FILE *file, uint32_t value) {
    return put_u16(file, (uint16_t)value) &&
           put_u16(file, (uint16_t)(value >> 16));
}

static int write_bmp(const char *path, const uint32_t *pixels,
                     unsigned width, unsigned height) {
    FILE *file = fopen(path, "wb");
    unsigned y;
    uint32_t bytes = width * height * 4u;
    if (!file) return 0;
    if (fwrite("BM", 1u, 2u, file) != 2u ||
        !put_u32(file, 54u + bytes) || !put_u32(file, 0u) ||
        !put_u32(file, 54u) || !put_u32(file, 40u) ||
        !put_u32(file, width) || !put_u32(file, height) ||
        !put_u16(file, 1u) || !put_u16(file, 32u) ||
        !put_u32(file, 0u) || !put_u32(file, bytes) ||
        !put_u32(file, 2835u) || !put_u32(file, 2835u) ||
        !put_u32(file, 0u) || !put_u32(file, 0u)) {
        fclose(file);
        return 0;
    }
    for (y = height; y > 0u; --y) {
        if (fwrite(pixels + (size_t)(y - 1u) * width, 4u, width, file) != width) {
            fclose(file);
            return 0;
        }
    }
    return fclose(file) == 0;
}

static uint64_t fnv1a(const uint32_t *pixels, size_t count) {
    const uint8_t *bytes = (const uint8_t *)pixels;
    size_t index;
    uint64_t hash = UINT64_C(1469598103934665603);
    for (index = 0u; index < count * sizeof(*pixels); ++index) {
        hash ^= bytes[index];
        hash *= UINT64_C(1099511628211);
    }
    return hash;
}

static int drain_pcm(SimCityRecomp *game, uint64_t *hash,
                     uint64_t *frame_count) {
    int16_t samples[4096u * SIMCITY_RECOMP_AUDIO_CHANNELS];
    if (!game || !hash || !frame_count) return 0;
    while (simcity_recomp_audio_available(game) > 0u) {
        size_t available = simcity_recomp_audio_available(game);
        size_t request = available > 4096u ? 4096u : available;
        size_t frames = simcity_recomp_audio_read(game, samples, request);
        size_t byte;
        const uint8_t *bytes = (const uint8_t *)samples;
        if (frames == 0u) return 0;
        for (byte = 0u;
             byte < frames * SIMCITY_RECOMP_AUDIO_CHANNELS * sizeof(int16_t);
             ++byte) {
            *hash ^= bytes[byte];
            *hash *= UINT64_C(1099511628211);
        }
        *frame_count += frames;
    }
    if (simcity_recomp_audio_overflowed(game)) {
        simcity_recomp_audio_clear_overflow(game);
        return 0;
    }
    return 1;
}

static int pulse(uint32_t frame, uint32_t start) {
    return frame >= start && frame < start + 2u;
}

static int read_wram16(SimCityRecomp *game, uint32_t offset,
                       uint16_t *value) {
    uint8_t bytes[2];
    if (!simcity_recomp_read_wram(game, offset, bytes, sizeof(bytes)))
        return 0;
    *value = (uint16_t)(bytes[0] | ((uint16_t)bytes[1] << 8));
    return 1;
}

static int verify_power_site_at(SimCityRecomp *game, unsigned site_x,
                                unsigned site_y, int built) {
    unsigned x, y;
    for (y = 0u; y < 4u; ++y) {
        for (x = 0u; x < 4u; ++x) {
            uint16_t actual;
            uint16_t expected = built ?
                (uint16_t)(0x0287u + y * 4u + x) : 0u;
            uint32_t offset = 0x10200u +
                2u * ((site_y + y) * 120u + site_x + x);
            if (!read_wram16(game, offset, &actual)) {
                fprintf(stderr, "power-site WRAM read failed at (%u,%u)\n",
                        site_x + x, site_y + y);
                return 0;
            }
            if ((!built && actual != expected) ||
                (built && (actual & 0x3fffu) != expected)) {
                fprintf(stderr,
                        "power-site %s check failed at (%u,%u): expected %04X, got %04X\n",
                        built ? "built" : "clear-land", site_x + x,
                        site_y + y, expected, actual);
                return 0;
            }
        }
    }
    return 1;
}

static int verify_power_site(SimCityRecomp *game, int built) {
    return verify_power_site_at(game, 79u, 39u, built);
}

static int capture_checkpoint(SimCityRecomp *game, const char *directory,
                              const char *name, int reject_black_gutters,
                              int *world_cell_x, int *world_cell_y) {
    const uint32_t *pixels;
    uint16_t view_x_word, view_y_word, fine_x_word, fine_y_word;
    uint16_t cursor_x_word, cursor_y_word;
    uint16_t tool_cursor_x_word, tool_cursor_y_word, map_focus_word;
    int view_x_pixels, view_y_pixels;
    unsigned width;
    size_t left_nonblack = 0u, right_nonblack = 0u;
    size_t top_nonblack = 0u, bottom_nonblack = 0u;
    size_t gutter_pixels;
    size_t edge_band_pixels;
    unsigned x, y;
    char path[4096];
    char error[256] = {0};
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error))) {
        fprintf(stderr, "checkpoint %s render failed: %s\n", name, error);
        return 0;
    }
    width = simcity_recomp_frame_width(game);
    pixels = simcity_recomp_frame_bgra(game);
    if (!pixels || width != SIMCITY_RECOMP_WIDESCREEN_WIDTH ||
        !read_wram16(game, 0x01bdu, &view_x_word) ||
        !read_wram16(game, 0x01bfu, &view_y_word) ||
        !read_wram16(game, 0x0139u, &fine_x_word) ||
        !read_wram16(game, 0x0137u, &fine_y_word) ||
        !read_wram16(game, 0x025du, &cursor_x_word) ||
        !read_wram16(game, 0x025fu, &cursor_y_word) ||
        !read_wram16(game, 0x01ebu, &tool_cursor_x_word) ||
        !read_wram16(game, 0x01edu, &tool_cursor_y_word) ||
        !read_wram16(game, 0x0201u, &map_focus_word)) {
        fprintf(stderr, "checkpoint %s state read failed\n", name);
        return 0;
    }
    snprintf(path, sizeof(path), "%s\\%s.bmp", directory, name);
    if (!write_bmp(path, pixels, width, SIMCITY_RECOMP_FRAME_HEIGHT)) {
        fprintf(stderr, "checkpoint %s screenshot write failed\n", name);
        return 0;
    }
    gutter_pixels = (size_t)SIMCITY_RECOMP_WIDESCREEN_MARGIN *
                    SIMCITY_RECOMP_FRAME_HEIGHT;
    for (y = 0u; y < SIMCITY_RECOMP_FRAME_HEIGHT; ++y) {
        for (x = 0u; x < SIMCITY_RECOMP_WIDESCREEN_MARGIN; ++x) {
            if ((pixels[(size_t)y * width + x] & 0x00ffffffu) != 0u)
                ++left_nonblack;
            if ((pixels[(size_t)y * width +
                        (width - SIMCITY_RECOMP_WIDESCREEN_MARGIN + x)] &
                 0x00ffffffu) != 0u)
                ++right_nonblack;
        }
    }
    edge_band_pixels = (size_t)width *
                       SIMCITY_RECOMP_WIDESCREEN_MARGIN;
    for (y = 0u; y < SIMCITY_RECOMP_WIDESCREEN_MARGIN; ++y) {
        size_t top_row = (size_t)(7u + y) * width;
        size_t bottom_row = (size_t)(7u + 224u -
            SIMCITY_RECOMP_WIDESCREEN_MARGIN + y) * width;
        for (x = 0u; x < width; ++x) {
            if ((pixels[top_row + x] & 0x00ffffffu) != 0u)
                ++top_nonblack;
            if ((pixels[bottom_row + x] & 0x00ffffffu) != 0u)
                ++bottom_nonblack;
        }
    }
    if (reject_black_gutters &&
        (left_nonblack < gutter_pixels / 4u ||
         right_nonblack < gutter_pixels / 4u ||
         top_nonblack < edge_band_pixels / 4u ||
         bottom_nonblack < edge_band_pixels / 4u)) {
        fprintf(stderr,
                "checkpoint %s contains a black edge: left=%llu right=%llu of %llu top=%llu bottom=%llu of %llu\n",
                name, (unsigned long long)left_nonblack,
                (unsigned long long)right_nonblack,
                (unsigned long long)gutter_pixels,
                (unsigned long long)top_nonblack,
                (unsigned long long)bottom_nonblack,
                (unsigned long long)edge_band_pixels);
        return 0;
    }
    view_x_pixels = (int)(int16_t)view_x_word * 8 +
        (int)(fine_x_word & 7u);
    view_y_pixels = (int)(int16_t)view_y_word * 8 +
        (int)(fine_y_word & 7u);
    *world_cell_x = (view_x_pixels + (int)(int16_t)cursor_x_word) / 8;
    *world_cell_y = (view_y_pixels + (int)(int16_t)cursor_y_word) / 8;
    printf("checkpoint=%s view_pixel=(%d,%d) cursor_pixel=(%d,%d) tool_cursor=(%d,%d) map_focus=%04X world_cell=(%d,%d) nonblack_edges=(%llu,%llu,%llu,%llu)\n",
           name, view_x_pixels, view_y_pixels,
           (int)(int16_t)cursor_x_word, (int)(int16_t)cursor_y_word,
           (int)(int16_t)tool_cursor_x_word,
           (int)(int16_t)tool_cursor_y_word, map_focus_word,
           *world_cell_x, *world_cell_y,
           (unsigned long long)left_nonblack,
           (unsigned long long)right_nonblack,
           (unsigned long long)top_nonblack,
           (unsigned long long)bottom_nonblack);
    return 1;
}

static int verify_corner_cell_pixels(SimCityRecomp *game, const char *name,
                                     int cell_x, int cell_y) {
    uint16_t vx, vy, fx, fy, cx, cy;
    int actual_x, actual_y;
    if (!read_wram16(game, 0x01bdu, &vx) ||
        !read_wram16(game, 0x01bfu, &vy) ||
        !read_wram16(game, 0x0139u, &fx) ||
        !read_wram16(game, 0x0137u, &fy) ||
        !read_wram16(game, 0x025du, &cx) ||
        !read_wram16(game, 0x025fu, &cy))
        return 0;
    actual_x = (int)(int16_t)vx * 8 + (int)(fx & 7u) +
               (int)(int16_t)cx;
    actual_y = (int)(int16_t)vy * 8 + (int)(fy & 7u) +
               (int)(int16_t)cy;
    int min_x = cell_x == 0 ? -2 : 952;
    int max_x = cell_x == 0 ? 7 : 959;
    int min_y = cell_y == 0 ? -2 : 792;
    int max_y = cell_y == 0 ? 7 : 799;
    if (actual_x < min_x || actual_x > max_x ||
        actual_y < min_y || actual_y > max_y) {
        fprintf(stderr,
                "%s pixel position is outside corner cell (%d,%d): got (%d,%d)\n",
                name, cell_x, cell_y, actual_x, actual_y);
        return 0;
    }
    return 1;
}

static int capture_native_reference(SimCityRecomp *game,
                                    const char *directory,
                                    const char *name) {
    char error[256] = {0};
    char path[4096];
    const uint32_t *pixels;
    int result = 0;
    if (!simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        simcity_recomp_frame_width(game) != SIMCITY_RECOMP_FRAME_WIDTH)
        goto restore;
    pixels = simcity_recomp_frame_bgra(game);
    snprintf(path, sizeof(path), "%s\\%s.bmp", directory, name);
    result = pixels && write_bmp(path, pixels, SIMCITY_RECOMP_FRAME_WIDTH,
                                 SIMCITY_RECOMP_FRAME_HEIGHT);
restore:
    if (!simcity_recomp_set_widescreen(game, 1, error, sizeof(error)))
        result = 0;
    if (!result)
        fprintf(stderr, "native 4:3 reference capture failed: %s\n", error);
    return result;
}

static uint16_t new_city_input(uint32_t frame) {
    static const uint32_t down[] = {980u, 1920u, 1940u, 1960u};
    static const uint32_t b[] = {1020u, 1700u, 1900u, 2180u, 2300u, 2450u};
    uint16_t input = 0u;
    size_t index;
    if (pulse(frame, 840u)) input |= SIMCITY_INPUT_START;
    for (index = 0u; index < sizeof(down) / sizeof(down[0]); ++index)
        if (pulse(frame, down[index])) input |= SIMCITY_INPUT_DOWN;
    for (index = 0u; index < sizeof(b) / sizeof(b[0]); ++index)
        if (pulse(frame, b[index])) input |= SIMCITY_INPUT_B;
    for (index = 1980u; index <= 2140u; index += 20u)
        if (pulse(frame, (uint32_t)index)) input |= SIMCITY_INPUT_RIGHT;
    return input;
}

static uint16_t scenario_input(uint32_t frame) {
    uint16_t input = 0u;
    if (pulse(frame, 840u)) input |= SIMCITY_INPUT_START;
    if (pulse(frame, 980u) || pulse(frame, 1000u))
        input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 1040u) || pulse(frame, 1300u) || pulse(frame, 1700u))
        input |= SIMCITY_INPUT_B;
    if (frame >= 2650u && frame < 2720u) {
        input |= SIMCITY_INPUT_A;
        input |= SIMCITY_INPUT_RIGHT;
    }
    return input;
}

static uint16_t freeland_input(uint32_t frame) {
    uint16_t input = 0u;
    if (pulse(frame, 840u)) input |= SIMCITY_INPUT_START;
    if (pulse(frame, 980u) || pulse(frame, 1000u))
        input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 1040u) || pulse(frame, 1300u) || pulse(frame, 1700u))
        input |= SIMCITY_INPUT_B;
    /* The unlocked scenario grid is 3+1 columns by two rows.  Free City /
       Freeland is index 7: move from San Francisco (index 0) to the bonus
       column, then to its lower row before confirming. */
    if (pulse(frame, 1120u) || pulse(frame, 1160u) || pulse(frame, 1200u))
        input |= SIMCITY_INPUT_RIGHT;
    if (pulse(frame, 1240u)) input |= SIMCITY_INPUT_DOWN;
    return input;
}

static uint16_t freeland_initial_build_input(uint32_t frame) {
    uint16_t input = freeland_input(frame);
    uint32_t move_frame;
    if (pulse(frame, 2800u)) input |= SIMCITY_INPUT_SELECT;
    for (move_frame = 2820u; move_frame <= 3040u; move_frame += 20u)
        if (pulse(frame, move_frame)) input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 3080u)) input |= SIMCITY_INPUT_B;
    if (pulse(frame, 3120u)) input |= SIMCITY_INPUT_SELECT;
    /* Move the real placement cursor continuously into the added right-side
       area.  The assertion records the exact world site reached rather than
       assuming a repeat rate for held SNES input. */
    if (frame >= 3180u && frame < 3500u) input |= SIMCITY_INPUT_RIGHT;
    if (pulse(frame, 3560u)) input |= SIMCITY_INPUT_B;
    return input;
}

static int load_freeland_unlock_sram(SimCityRecomp *game,
                                     char *error, size_t error_capacity) {
    uint8_t image[32768];
    uint16_t checksum = 0u;
    size_t index;
    memset(image, 0, sizeof(image));
    image[0] = 'S';
    image[1] = 'I';
    image[2] = 'M';
    /* Bits 0..5 record the six standard scenario wins.  Bit 15 is the
       game's own bonus-scenario-unlocked marker. */
    image[7] = 0x3fu;
    image[8] = 0x80u;
    for (index = 0u; index < 14u; ++index)
        checksum = (uint16_t)(checksum + image[index]);
    image[14] = (uint8_t)checksum;
    image[15] = (uint8_t)(checksum >> 8);
    memcpy(image + sizeof(image) - 16u, image, 16u);
    return simcity_recomp_sram_load(game, image, sizeof(image),
                                    error, error_capacity);
}

static int inspect_freeland_initial_map(SimCityRecomp *game) {
    unsigned counts[0x4000] = {0};
    uint16_t scenario, year, funds;
    unsigned x, y, unique = 0u, water_or_shore = 0u;
    if (!read_wram16(game, 0x0040u, &scenario) ||
        !read_wram16(game, 0x0b53u, &year) ||
        !read_wram16(game, 0x0b9du, &funds))
        return 0;
    for (y = 0u; y < 100u; ++y) {
        for (x = 0u; x < 120u; ++x) {
            uint16_t tile;
            if (!read_wram16(game, 0x10200u +
                             2u * (y * 120u + x), &tile))
                return 0;
            ++counts[tile & 0x3fffu];
        }
    }
    for (x = 0u; x < 0x4000u; ++x)
        if (counts[x] != 0u) ++unique;
    /* Terrain IDs 0x0001..0x0013 are the game's water and shoreline set;
       Free City should contain only clear land (0) and forest (0x14+). */
    for (x = 1u; x <= 0x13u; ++x) water_or_shore += counts[x];
    printf("freeland_initial scenario=%u year=%u funds=%u map=120x100 unique_tiles=%u clear_land=%u water_or_shore=%u\n",
           scenario, year, funds, unique, counts[0], water_or_shore);
    printf("freeland_low_tile_histogram");
    for (x = 0u; x <= 0x20u; ++x)
        if (counts[x] != 0u) printf(" %04X:%u", x, counts[x]);
    putchar('\n');
    return scenario == 7u && year == 1991u && funds == 20000u &&
           water_or_shore == 0u;
}

static uint16_t corner_navigation_input(uint32_t frame) {
    uint16_t input = 0u;
    if (frame >= 2650u && frame < 2720u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT;
    if (frame >= 2800u && frame < 3100u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT;
    if (frame >= 3120u && frame < 3500u) input |= SIMCITY_INPUT_RIGHT;
    if (frame >= 3520u && frame < 3820u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_UP;
    if (frame >= 3840u && frame < 4220u) input |= SIMCITY_INPUT_UP;
    if (frame >= 4230u && frame < 4232u) input |= SIMCITY_INPUT_DOWN;

    if (frame >= 4400u && frame < 4700u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_DOWN;
    if (frame >= 4720u && frame < 5120u) input |= SIMCITY_INPUT_DOWN;

    if (frame >= 5300u && frame < 5600u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_LEFT;
    if (frame >= 5620u && frame < 6020u) input |= SIMCITY_INPUT_LEFT;
    if (frame >= 6030u && frame < 6047u) input |= SIMCITY_INPUT_DOWN;

    if (frame >= 6200u && frame < 6500u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_UP;
    if (frame == 6500u) input |= SIMCITY_INPUT_B;
    if (pulse(frame, 6520u)) input |= SIMCITY_INPUT_B;
    if (frame >= 6550u && frame < 6850u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_UP;
    if (frame >= 6870u && frame < 7350u) input |= SIMCITY_INPUT_UP;
    if (frame >= 7370u && frame < 7570u) input |= SIMCITY_INPUT_LEFT;
    return input;
}

static uint16_t scenario_corners_input(uint32_t frame) {
    return (uint16_t)(scenario_input(frame) |
                      corner_navigation_input(frame));
}

static uint16_t freeland_corners_input(uint32_t frame) {
    uint16_t input = (uint16_t)(freeland_input(frame) |
                                corner_navigation_input(frame));
    /* The standard scenario route dismisses result text here. Freeland has
       no objective dialog, so those B presses would enter the toolbar. */
    if (frame >= 6500u && frame < 6522u)
        input &= (uint16_t)~SIMCITY_INPUT_B;
    if (frame >= 7370u)
        input &= (uint16_t)~SIMCITY_INPUT_LEFT;
    if (frame >= 7350u && frame < 8350u &&
        ((frame - 7350u) % 4u) < 2u)
        input |= SIMCITY_INPUT_UP;
    return input;
}

static uint16_t practice_input(uint32_t frame) {
    uint16_t input = 0u;
    if (pulse(frame, 420u)) input |= SIMCITY_INPUT_START;
    if (pulse(frame, 540u) || pulse(frame, 960u) || pulse(frame, 1380u))
        input |= SIMCITY_INPUT_B;
    return input;
}

static uint16_t practice_traverse_input(uint32_t frame) {
    uint16_t input = practice_input(frame);
    /* Hide the bars so the cursor can reach the west edge without Select's
     * toolbar focus, pan west, restore the relocated bars, then cross east. */
    if (pulse(frame, 1800u) || pulse(frame, 2340u))
        input |= SIMCITY_INPUT_X;
    if (frame >= 1830u && frame < 2010u) {
        input |= SIMCITY_INPUT_A;
        input |= SIMCITY_INPUT_LEFT;
    }
    if (frame >= 2010u && frame < 2280u) input |= SIMCITY_INPUT_LEFT;
    if (frame >= 2400u && frame < 6660u) input |= SIMCITY_INPUT_RIGHT;
    return input;
}

static uint16_t practice_toolbar_input(uint32_t frame) {
    uint16_t input = practice_input(frame);
    if (pulse(frame, 1800u)) input |= SIMCITY_INPUT_SELECT;
    return input;
}

static uint16_t practice_hide_input(uint32_t frame, int show_again) {
    uint16_t input = practice_input(frame);
    if (pulse(frame, 1800u) || (show_again && pulse(frame, 1880u)))
        input |= SIMCITY_INPUT_X;
    return input;
}

static uint16_t practice_cursor_right_input(uint32_t frame) {
    uint16_t input = practice_input(frame);
    if (frame >= 1800u && frame < 2100u) input |= SIMCITY_INPUT_RIGHT;
    return input;
}

static uint16_t practice_hud_cycle_input(uint32_t frame) {
    uint16_t input = practice_input(frame);
    /* First put the map cursor into the widened-only right area.  Then enter
       and leave toolbar focus before exercising the game's X-button HUD
       hide/show path.  This reproduces the interaction that exposed wrapped
       HUD OAM in manual fullscreen captures. */
    if (frame >= 1800u && frame < 2100u) input |= SIMCITY_INPUT_RIGHT;
    if (pulse(frame, 2140u) || pulse(frame, 2260u))
        input |= SIMCITY_INPUT_SELECT;
    if (pulse(frame, 2180u) || pulse(frame, 2200u))
        input |= SIMCITY_INPUT_RIGHT;
    if (pulse(frame, 2320u) || pulse(frame, 2400u))
        input |= SIMCITY_INPUT_X;
    if (frame >= 2460u && frame < 2540u) input |= SIMCITY_INPUT_LEFT;
    return input;
}

static uint16_t practice_hud_native_cycle_input(uint32_t frame) {
    uint16_t input = practice_input(frame);
    /* Exercise toolbar focus and the animated X-button hide/show path while
       the map cursor is inside the native viewport. */
    if (pulse(frame, 1800u) || pulse(frame, 2300u))
        input |= SIMCITY_INPUT_SELECT;
    if (pulse(frame, 1840u) || pulse(frame, 1860u) || pulse(frame, 1900u))
        input |= SIMCITY_INPUT_RIGHT;
    if (pulse(frame, 1880u)) input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 1980u) || pulse(frame, 2400u)) input |= SIMCITY_INPUT_B;
    if (pulse(frame, 2100u) || pulse(frame, 2180u)) input |= SIMCITY_INPUT_X;
    return input;
}

static uint16_t practice_power_select_input(uint32_t frame) {
    uint16_t input = practice_input(frame);
    uint32_t down_frame;
    if (pulse(frame, 1800u)) input |= SIMCITY_INPUT_SELECT;
    for (down_frame = 1820u; down_frame <= 2040u; down_frame += 20u)
        if (pulse(frame, down_frame)) input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 2080u)) input |= SIMCITY_INPUT_B;
    /* B chooses the highlighted tool but intentionally leaves toolbar focus
       active.  Select returns to the map before cursor traversal begins. */
    if (pulse(frame, 2120u)) input |= SIMCITY_INPUT_SELECT;
    return input;
}

static uint16_t practice_power_build_input(uint32_t frame) {
    uint16_t input = practice_power_select_input(frame);
    /* Coal Power occupies 4x4 cells. Move from its initial map position to
       the verified-clear 4x4 site at (79,39). Its anchor begins beyond the
       centred native 4:3 map edge at output pixel 326, and
       the complete plant occupies widened-only right-side land. */
    /* Hide the HUD before the long path so its authentic pointer-overlap
       focus rule cannot consume map-movement input.  The frame loop below
       steers against live world coordinates, then the HUD is restored after
       construction for the subsequent transition checks. */
    if (pulse(frame, 2160u) || pulse(frame, 3820u))
        input |= SIMCITY_INPUT_X;
    if (pulse(frame, 3860u)) input |= SIMCITY_INPUT_SELECT;
    if (pulse(frame, 3700u)) input |= SIMCITY_INPUT_B;
    return input;
}

static uint16_t practice_widescreen_tour_input(uint32_t frame) {
    uint16_t input = practice_power_build_input(frame);
    /* Keep the HUD out of the cursor path while crossing to the west site,
       then exercise a complete show/hide cycle in the left added margin. */
    if (pulse(frame, 3900u) || pulse(frame, 6420u) || pulse(frame, 6500u))
        input |= SIMCITY_INPUT_X;
    if (pulse(frame, 6300u)) input |= SIMCITY_INPUT_B;
    return input;
}

typedef struct WorldProbe {
    uint64_t hash, frames, phase, queue, max_queue;
    unsigned ticks, modeled_underruns, modeled_overflows;
    int measure_all;
    StockControllerTape *input_tape;
} WorldProbe;

#ifdef _WIN32
static int live_construction_enabled;
static int live_construction_before(SimCityRecomp *game, WorldProbe *audio);
static int live_construction_advance(SimCityRecomp *game, uint16_t input,
                                     SimCityRecompFrameResult *result);
static int live_construction_after(SimCityRecomp *game, WorldProbe *audio);
static int live_construction_close(void);
#endif

static void world_probe_measure_pcm(WorldProbe *probe, uint64_t before) {
    probe->queue += probe->frames - before;
    if (probe->queue > probe->max_queue) probe->max_queue = probe->queue;
    if (probe->queue > 4096u) ++probe->modeled_overflows;
    if (probe->ticks++ >= 3u) {
        probe->phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE *
                        SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
        const uint64_t demand = probe->phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
        probe->phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
        if (demand > probe->queue) {
            ++probe->modeled_underruns;
            probe->queue = 0u;
        } else {
            probe->queue -= demand;
        }
    }
}

static int world_probe_record_input(SimCityRecomp *game, WorldProbe *probe, uint16_t input) {
    const uint32_t frame = simcity_recomp_current_frame(game);
    if (!probe->input_tape || stock_controller_tape_append(probe->input_tape, input, frame))
        return 1;
    fprintf(stderr, "Controller tape rejected frame=%u input=%04X\n", frame, (unsigned)input);
    return 0;
}

typedef struct NativeMenuFrameAudit {
    SimCityRecompVideoSnapshot *snapshot;
    uint32_t *prepared;
    const char *directory;
    unsigned frames;
    int widescreen;
} NativeMenuFrameAudit;

static NativeMenuFrameAudit *native_menu_frame_audit;

static int inspect_native_menu_frame(SimCityRecomp *game, const SimCityRecompFrameResult *result,
                                    NativeMenuFrameAudit *audit) {
    unsigned prepared_width = 0u;
    const unsigned width = simcity_recomp_frame_width(game);
    const uint32_t *pixels = simcity_recomp_frame_bgra(game);
    const enum SimCityWorldCatalogScreen screen = simcity_recomp_world_catalog_view(game, NULL);
    if (screen != SIMCITY_WORLD_CATALOG_HIDDEN || !result->frame_rendered ||
        width != (audit->widescreen ? SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH) ||
        !simcity_recomp_video_snapshot_capture(audit->snapshot, game) ||
        !simcity_recomp_video_snapshot_render(audit->snapshot, audit->prepared,
            SIMCITY_RECOMP_MAX_FRAME_PIXELS, &prepared_width) ||
        width != prepared_width ||
        memcmp(pixels, audit->prepared, (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*pixels))) {
        char path[4096];
        snprintf(path, sizeof(path), "%s/first-native-submenu-flicker.bmp", audit->directory);
        (void)write_bmp(path, pixels, width, SIMCITY_RECOMP_FRAME_HEIGHT);
        fprintf(stderr, "Native submenu frame mismatch frame=%u width=%u catalog=%d rendered=%u prepared_width=%u\n",
            simcity_recomp_current_frame(game), width, screen, result->frame_rendered, prepared_width);
        return 0;
    }
    ++audit->frames;
    return 1;
}

static int world_probe_step(SimCityRecomp *game, WorldProbe *probe,
                            uint16_t input, unsigned frames, int measure,
                            int render) {
    for (unsigned i = 0u; i < frames; ++i) {
        const uint64_t before = probe->frames;
        SimCityRecompFrameResult result;
#ifdef _WIN32
        if (live_construction_enabled && !live_construction_before(game, probe)) return 0;
#endif
        const int advanced = (render || native_menu_frame_audit) ?
            simcity_recomp_advance(game, input, 1u, &result) :
#ifdef _WIN32
            live_construction_enabled ? live_construction_advance(game, input, &result) :
#endif
            simcity_recomp_advance_headless(game, input, 1u, &result);
        if (!advanced || (render && !result.frame_rendered) ||
            !drain_pcm(game, &probe->hash, &probe->frames)) {
            fprintf(stderr, "World Map step failed at frame=%u input=%04X: %s\n",
                    simcity_recomp_current_frame(game), (unsigned)input,
                    simcity_recomp_last_error(game));
            return 0;
        }
        if (native_menu_frame_audit &&
            !inspect_native_menu_frame(game, &result, native_menu_frame_audit)) return 0;
        if (measure || probe->measure_all) world_probe_measure_pcm(probe, before);
        if (probe->input_tape && !world_probe_record_input(game, probe, input)) return 0;
#ifdef _WIN32
        if (live_construction_enabled && !live_construction_after(game, probe)) return 0;
#endif
    }
    return 1;
}

static double gameplay_clock(void);
static uint64_t gameplay_thread_cycles(void);

static int stock_verify_construction_tape(SimCityRecomp *game, const char *directory, int profile) {
    StockControllerTape tape = {0};
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char tape_path[4096], start[4096], expected[4096], replayed[4096], error[256] = {0};
    uint8_t *bytes = NULL, *saved = NULL, *actual = NULL;
    size_t size = 0u, saved_size = 0u, actual_size = 0u;
    int ok = 0;
    double step_total = 0.0, step_peak = 0.0;
    unsigned step_over_headroom = 0u, step_over_60hz = 0u;
    uint64_t cycle_total = 0u, cycle_peak = 0u;
    unsigned cycle_samples = 0u;
#if defined(_WIN32) && defined(_M_X64)
    ProbeSampling samples = {0};
#endif
    snprintf(tape_path, sizeof(tape_path), "%s/stock-world-construction-input.scinput", directory);
    snprintf(start, sizeof(start), "%s/stock-world-construction-input-start.scsnap", directory);
    snprintf(expected, sizeof(expected), "%s/stock-world-construction-input-end.scsnap", directory);
    snprintf(replayed, sizeof(replayed), "%s/stock-world-construction-input-replayed.scsnap", directory);
    if (!read_file(tape_path, &bytes, &size) || !stock_controller_tape_decode(&tape, bytes, size) ||
        !read_file(expected, &saved, &saved_size) ||
        !simcity_recomp_stock_world_open_snapshot(game, start, error, sizeof(error)) ||
        simcity_recomp_current_frame(game) != tape.start_frame) goto done;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
#if defined(_WIN32) && defined(_M_X64)
    if (profile && !probe_sample_begin(&samples)) goto done;
#endif
    /* No warm-up advance or input injection: the first recorded word is
       the first actual step from the segment's starting snapshot. */
    for (uint32_t i = 0u; i < tape.frames; ++i) {
        const double begin = profile ? 0.0 : gameplay_clock();
        const uint64_t cycle_start = profile ? UINT64_MAX : gameplay_thread_cycles();
        if (!world_probe_step(game, &audio, tape.input[i], 1u, 0, 0) ||
            simcity_recomp_current_frame(game) != tape.start_frame + i + 1u) goto done;
        if (profile) continue;
        const double elapsed_ms = (gameplay_clock() - begin) * 1000.0;
        const uint64_t cycle_end = gameplay_thread_cycles();
        if (cycle_start != UINT64_MAX && cycle_end != UINT64_MAX && cycle_end >= cycle_start) {
            const uint64_t cycles = cycle_end - cycle_start;
            cycle_total += cycles;
            if (cycles > cycle_peak) cycle_peak = cycles;
            ++cycle_samples;
        }
        step_total += elapsed_ms;
        if (elapsed_ms > step_peak) step_peak = elapsed_ms;
        step_over_headroom += elapsed_ms > 1000.0 / 120.0;
        step_over_60hz += elapsed_ms > 1000.0 / 60.0;
    }
#if defined(_WIN32) && defined(_M_X64)
    if (profile) {
        /* Keep file I/O and the final snapshot serializer out of the profile. */
        probe_sample_end(&samples, 1);
        const unsigned count = samples.count;
        memset(&samples, 0, sizeof(samples));
        if (count < 100u) goto done;
    }
#endif
    if (!simcity_recomp_audio_static_status(game, &status) ||
        !simcity_recomp_snapshot_save(game, replayed, error, sizeof(error)) ||
        !read_file(replayed, &actual, &actual_size)) goto done;
    const int snapshot_exact = actual_size == saved_size && memcmp(actual, saved, saved_size) == 0;
    printf("stock-construction-tape-verify start_frame=%u frames=%u pcm=%llu hash=%016llX snapshot_exact=%d underruns=%u overflows=%u core_overflows=%llu dropped=%llu\n",
        tape.start_frame, tape.frames, (unsigned long long)audio.frames, (unsigned long long)audio.hash,
        snapshot_exact, audio.modeled_underruns, audio.modeled_overflows,
        (unsigned long long)status.pcm_overflows,
        (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    if (!profile) {
        printf("stock-construction-tape-compute frames=%u mean_ms=%.2f peak_ms=%.2f over_8_33ms=%u over_16_67ms=%u presentation_drawing=0 paced_waits=0\n",
            tape.frames, step_total / tape.frames, step_peak, step_over_headroom, step_over_60hz);
        printf("stock-construction-tape-compute-cycles samples=%u mean_scheduled_cycles=%llu peak_scheduled_cycles=%llu\n",
            cycle_samples, (unsigned long long)(cycle_samples ? cycle_total / cycle_samples : 0u),
            (unsigned long long)cycle_peak);
    }
    fflush(stdout);
    ok = snapshot_exact && !audio.modeled_underruns && !audio.modeled_overflows &&
         !status.pcm_overflows && !simcity_recomp_audio_dropped_frames(game);
done:
#if defined(_WIN32) && defined(_M_X64)
    if (profile) probe_sample_end(&samples, 0);
#endif
    free(bytes);
    free(saved);
    free(actual);
    stock_controller_tape_clear(&tape);
    if (!ok) fprintf(stderr, "Controller construction tape could not be verified: %s %s\n",
                     error, simcity_recomp_last_error(game));
    return ok;
}

static int world_probe_checkpoint(SimCityRecomp *game, const char *directory,
                                  const char *name, unsigned x, unsigned y,
                                  unsigned edits, unsigned rejected) {
    SimCityWorldMapStatus status = {0};
    char path[1024], error[256];
    unsigned width = simcity_recomp_frame_width(game);
    int length = snprintf(path, sizeof(path), "%s/%s.bmp", directory, name);
    if (!simcity_recomp_world_map_status(game, &status) ||
        status.width != 240u || status.height != 200u ||
        status.cursor_x != x || status.cursor_y != y ||
        status.edits != edits || status.rejected != rejected) {
        fprintf(stderr, "World Map checkpoint %s failed: cursor=(%u,%u) edits=%u rejected=%u\n",
                name, status.cursor_x, status.cursor_y, status.edits, status.rejected);
        return 0;
    }
    if (length < 0 || (size_t)length >= sizeof(path) ||
        !simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), width, SIMCITY_RECOMP_FRAME_HEIGHT))
        return 0;
    printf("checkpoint=%s world=(%u,%u) edits=%u rejected=%u width=%u\n",
           name, x, y, edits, rejected, width);
    return 1;
}

typedef struct WorldBuildProbe {
    SimCityRecomp *game;
    WorldProbe *audio;
    int control;
    unsigned x, y, edits;
} WorldBuildProbe;

static int world_build_step(WorldBuildProbe *build, uint16_t input, unsigned frames) {
    return world_probe_step(build->game, build->audio,
                            build->control ? 0u : input, frames, 1, !build->control);
}

static int world_build_press(WorldBuildProbe *build, uint16_t input) {
    return world_build_step(build, input, 1u) && world_build_step(build, 0u, 1u);
}

static int world_build_move(WorldBuildProbe *build, unsigned x, unsigned y) {
    const int dx = (int)x - (int)build->x;
    const int dy = (int)y - (int)build->y;
    SimCityWorldMapStatus status;
    if ((dx && !world_build_step(build, dx > 0 ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT,
                                 (unsigned)abs(dx) * 4u)) ||
        (dy && !world_build_step(build, dy > 0 ? SIMCITY_INPUT_DOWN : SIMCITY_INPUT_UP,
                                 (unsigned)abs(dy) * 4u)) ||
        !world_build_step(build, 0u, 1u))
        return 0;
    if (!build->control &&
        (!simcity_recomp_world_map_status(build->game, &status) ||
         status.cursor_x != x || status.cursor_y != y)) {
        fprintf(stderr, "World construction movement did not reach (%u,%u)\n", x, y);
        return 0;
    }
    build->x = x;
    build->y = y;
    return 1;
}

static int world_build_place(WorldBuildProbe *build, unsigned x, unsigned y,
                             unsigned side, uint16_t expected) {
    if (!world_build_move(build, x, y) || !world_build_press(build, SIMCITY_INPUT_B))
        return 0;
    ++build->edits;
    if (build->control) return 1;
    for (unsigned dy = 0; dy < side; ++dy)
        for (unsigned dx = 0; dx < side; ++dx) {
            uint16_t tile;
            if (!simcity_recomp_world_map_tile(build->game, (int)(x + dx), (int)(y + dy), &tile) ||
                tile != expected) {
                fprintf(stderr, "World construction tile expected=%u at (%u,%u)\n",
                        (unsigned)expected, x + dx, y + dy);
                return 0;
            }
        }
    return 1;
}

static int world_build_capture(WorldBuildProbe *build, const char *directory, const char *name) {
    return build->control || world_probe_checkpoint(build->game, directory, name,
                                      build->x, build->y, build->edits, 1u);
}

static int world_build_benchmark(WorldBuildProbe *build, const char *name) {
    const double budget = 1000.0 / simcity_recomp_presentation_fps();
    double total = 0.0, worst = 0.0;
    unsigned misses = 0u;
    for (unsigned frame = 0; frame < 240u; ++frame) {
        const double before = gameplay_clock();
        double elapsed;
        if (!world_build_step(build, 0u, 1u)) return 0;
        elapsed = (gameplay_clock() - before) * 1000.0;
        total += elapsed;
        if (elapsed > worst) worst = elapsed;
        if (elapsed > budget) ++misses;
    }
    if (!build->control)
        printf("world_benchmark=%s frames=240 budget_ms=%.3f avg_ms=%.3f max_ms=%.3f over_budget=%u\n",
               name, budget, total / 240.0, worst, misses);
    return 1;
}

static int world_probe_construction(SimCityRecomp *game, WorldProbe *probe,
                                    const char *directory, int control) {
    static const unsigned plants[][2] = {{108,88}, {127,88}, {127,107}, {108,107}};
    static const unsigned zones[][2] = {{108,93}, {127,93}, {127,103}, {108,103}};
    WorldBuildProbe build = {game, probe, control, 0u, 0u, 2u};
    SimCityWorldMapStatus status;
    char capture[48];
    if (!world_build_benchmark(&build, "before-construction") ||
        !world_build_press(&build, SIMCITY_INPUT_R) ||
        !world_build_press(&build, SIMCITY_INPUT_R)) return 0;
    for (unsigned i = 0; i < 4u; ++i) {
        snprintf(capture, sizeof(capture), "world-plant-%u", i + 1u);
        if (!world_build_place(&build, plants[i][0], plants[i][1], 4u, SIMCITY_WORLD_PLANT) ||
            !world_build_capture(&build, directory, capture)) return 0;
    }
    if (!world_build_press(&build, SIMCITY_INPUT_L)) return 0;
    for (unsigned x = 108; x <= 130; ++x)
        if (!world_build_place(&build, x, 92u, 1u, SIMCITY_WORLD_ROAD)) return 0;
    if (!world_build_capture(&build, directory, "world-road-horizontal-join")) return 0;
    for (unsigned y = 93; y <= 105; ++y)
        if (!world_build_place(&build, 117u, y, 1u, SIMCITY_WORLD_ROAD)) return 0;
    if (!world_build_capture(&build, directory, "world-road-vertical-join")) return 0;
    for (unsigned x = 108; x <= 130; ++x)
        if (!world_build_place(&build, x, 106u, 1u, SIMCITY_WORLD_ROAD)) return 0;
    if (!world_build_press(&build, SIMCITY_INPUT_R) ||
        !world_build_press(&build, SIMCITY_INPUT_R)) return 0;
    for (unsigned i = 0; i < 4u; ++i) {
        snprintf(capture, sizeof(capture), "world-zone-%u", i + 1u);
        if (!world_build_place(&build, zones[i][0], zones[i][1], 3u, SIMCITY_WORLD_ZONE) ||
            !world_build_capture(&build, directory, capture)) return 0;
    }
    if (!world_build_benchmark(&build, "four-plants-roads-and-zones")) return 0;
    if (control) return 1;
    if (!simcity_recomp_world_map_status(game, &status)) return 0;
    printf("world_construction plants=%u roads=%u zones=%u powered_roads=%u served_zones=%u funds=%u tool=%u\n",
           status.plants, status.roads, status.zones, status.powered_roads,
           status.served_zones, status.funds, status.tool);
    return status.tool == SIMCITY_WORLD_TOOL_ZONE && status.funds == 2340u &&
           status.plants == 4u && status.roads == 59u && status.zones == 4u &&
           status.powered_roads == 59u && status.served_zones == 4u &&
           status.edits == build.edits && status.rejected == 1u;
}

static int world_probe(SimCityRecomp *game, const char *directory, int control) {
    typedef struct WorldRoute {
        uint16_t button;
        unsigned frames, x, y, edits, rejected;
        const char *capture;
    } WorldRoute;
    static const WorldRoute route[] = {
        {SIMCITY_INPUT_RIGHT, 12u, 0u, 0u, 0u, 0u, NULL},
        {SIMCITY_INPUT_DOWN, 12u, 119u, 99u, 0u, 0u, "01-center-before"},
        {SIMCITY_INPUT_B, 4u, 119u, 99u, 1u, 0u, "02-center-footprint"},
        {SIMCITY_INPUT_RIGHT | SIMCITY_INPUT_DOWN, 4u, 120u, 100u, 1u, 0u, "03-crossed-both-joins"},
        {SIMCITY_INPUT_RIGHT, 32u, 0u, 0u, 0u, 0u, NULL},
        {SIMCITY_INPUT_DOWN, 144u, 128u, 136u, 1u, 0u, "04-offset-65536"},
        {SIMCITY_INPUT_B, 1u, 128u, 136u, 2u, 0u, "05-offset-65536-edited"},
        {SIMCITY_INPUT_RIGHT | SIMCITY_INPUT_DOWN, 448u, 239u, 199u, 2u, 0u, "06-far-corner"},
        {SIMCITY_INPUT_B, 1u, 239u, 199u, 2u, 1u, "07-rejected-outer-footprint"},
        {SIMCITY_INPUT_LEFT | SIMCITY_INPUT_UP, 960u, 0u, 0u, 2u, 1u, "08-origin"}
    };
    WorldProbe probe = {0};
    SimCityRecompAudioStaticStatus audio = {0};
    uint32_t wram[32768];
    uint16_t tile, scenario;
    char error[256];
    unsigned frame;
    probe.hash = UINT64_C(1469598103934665603);
    if (!load_freeland_unlock_sram(game, error, sizeof(error))) return 0;
    for (frame = 0u; frame < 2750u; ++frame)
        if (!world_probe_step(game, &probe, freeland_input(frame), 1u, 0, 0)) return 0;
    if (!inspect_freeland_initial_map(game)) return 0;
    if (!control && !simcity_recomp_world_map_begin(game)) return 0;
    for (size_t i = 0u; i < sizeof(route) / sizeof(route[0]); ++i) {
        const WorldRoute *step = &route[i];
        if (!world_probe_step(game, &probe, control ? 0u : step->button,
                              step->frames, 1, !control))
            return 0;
        if (!control && i == 3u && !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)))
            return 0;
        if (!control && step->capture &&
            !world_probe_checkpoint(game, directory, step->capture, step->x, step->y,
                                    step->edits, step->rejected))
            return 0;
    }
    if (!world_probe_construction(game, &probe, directory, control)) return 0;
    if (!control) {
        for (int y = 99; y <= 100; ++y)
            for (int x = 119; x <= 120; ++x)
                if (!simcity_recomp_world_map_tile(game, x, y, &tile) || tile != 1u)
                    return 0;
        if (!simcity_recomp_world_map_tile(game, 128, 136, &tile) || tile != 1u ||
            !simcity_recomp_world_map_tile(game, 0, 0, &tile) || tile != 0u ||
            simcity_recomp_world_map_tile(game, 240, 199, &tile) ||
            simcity_recomp_world_map_tile(game, 239, 200, &tile))
            return 0;
        simcity_recomp_world_map_end(game);
        if (simcity_recomp_world_map_status(game, &(SimCityWorldMapStatus){0}))
            return 0;
    }
    if (!simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !simcity_recomp_render_current_frame(game, error, sizeof(error)))
        return 0;
    if (!simcity_recomp_read_wram(game, 0u, wram, sizeof(wram)) ||
        !read_wram16(game, 0x0040u, &scenario) || scenario != 7u ||
        !simcity_recomp_audio_static_status(game, &audio))
        return 0;
    printf("parity wram=%016llX pcm=%016llX frames=%llu clocks=%llu restored_frame=%016llX\n",
           (unsigned long long)fnv1a(wram, sizeof(wram) / sizeof(wram[0])),
           (unsigned long long)probe.hash, (unsigned long long)probe.frames,
           (unsigned long long)simcity_recomp_master_clock(game),
           (unsigned long long)fnv1a(simcity_recomp_frame_bgra(game),
                                     SIMCITY_RECOMP_FRAME_PIXELS));
    printf("audio route_failed=%u unknown=%llu core_overflow=%llu dropped=%llu modeled_underruns=%u modeled_overflows=%u modeled_peak=%llu\n",
           (unsigned)audio.route_failed, (unsigned long long)audio.pcm_unknown_frames,
           (unsigned long long)audio.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game),
           probe.modeled_underruns, probe.modeled_overflows, (unsigned long long)probe.max_queue);
    return !audio.route_failed && !audio.pcm_unknown_frames && !audio.pcm_overflows &&
           !simcity_recomp_audio_dropped_frames(game) && !probe.modeled_underruns &&
           !probe.modeled_overflows;
}

static double gameplay_clock(void) {
#ifdef _WIN32
    LARGE_INTEGER ticks, frequency;
    QueryPerformanceCounter(&ticks);
    QueryPerformanceFrequency(&frequency);
    return (double)ticks.QuadPart / (double)frequency.QuadPart;
#else
    struct timespec ticks;
#ifdef CLOCK_MONOTONIC
    if (clock_gettime(CLOCK_MONOTONIC, &ticks) == 0)
        return (double)ticks.tv_sec + (double)ticks.tv_nsec / 1e9;
#endif
    return timespec_get(&ticks, TIME_UTC) == TIME_UTC
        ? (double)ticks.tv_sec + (double)ticks.tv_nsec / 1e9 : 0.0;
#endif
}

/* Windows thread cycles count scheduled CPU work, not elapsed time. Their
 * scale can change with the processor; report them as cycles, not ms. */
static uint64_t gameplay_thread_cycles(void) {
#ifdef _WIN32
    ULONG64 cycles;
    if (QueryThreadCycleTime(GetCurrentThread(), &cycles)) return cycles;
#endif
    return UINT64_MAX;
}

static double gameplay_cpu_seconds(void) {
#ifdef _WIN32
    FILETIME created, exited, kernel, user;
    if (GetThreadTimes(GetCurrentThread(), &created, &exited, &kernel, &user)) {
        const uint64_t k = ((uint64_t)kernel.dwHighDateTime << 32) | kernel.dwLowDateTime;
        const uint64_t u = ((uint64_t)user.dwHighDateTime << 32) | user.dwLowDateTime;
        return (double)(k + u) / 1e7;
    }
#elif defined(CLOCK_THREAD_CPUTIME_ID)
    struct timespec ticks;
    if (clock_gettime(CLOCK_THREAD_CPUTIME_ID, &ticks) == 0)
        return (double)ticks.tv_sec + (double)ticks.tv_nsec / 1e9;
#endif
    return -1.0;
}

typedef struct StockRamPosition {
    int x, y;
    uint16_t view_x, view_y, fine_x, fine_y, screen_x, screen_y;
    uint16_t focus, tool_x, tool_y, anchor_x, anchor_y;
} StockRamPosition;

static int stock_read_position(SimCityRecomp *game, StockRamPosition *p, int details) {
    if (!read_wram16(game, 0x01bdu, &p->view_x) || !read_wram16(game, 0x01bfu, &p->view_y) ||
        !read_wram16(game, 0x0139u, &p->fine_x) || !read_wram16(game, 0x0137u, &p->fine_y) ||
        !read_wram16(game, 0x025du, &p->screen_x) || !read_wram16(game, 0x025fu, &p->screen_y))
        return 0;
    p->x = ((int)(int16_t)p->view_x * 8 + (p->fine_x & 7) + (int)(int16_t)p->screen_x) / 8;
    p->y = ((int)(int16_t)p->view_y * 8 + (p->fine_y & 7) + (int)(int16_t)p->screen_y) / 8;
    if (details &&
        (!read_wram16(game, 0x0201u, &p->focus) ||
         !read_wram16(game, 0x01ebu, &p->tool_x) || !read_wram16(game, 0x01edu, &p->tool_y) ||
         !read_wram16(game, 0x0205u, &p->anchor_x) || !read_wram16(game, 0x0207u, &p->anchor_y)))
        return 0;
    return 1;
}

static int stock_cell(SimCityRecomp *game, int *x, int *y) {
    StockRamPosition p;
    if (!stock_read_position(game, &p, 0)) return 0;
    *x = p.x;
    *y = p.y;
    return 1;
}

static int stock_infill_capture_checkpoint(SimCityRecomp *game, const char *directory) {
    char capture[4096], error[256] = {0};
    const int length = snprintf(capture, sizeof(capture), "%s/stock-infill-final-checkpoint.bmp", directory);
    const unsigned frame = simcity_recomp_current_frame(game);
    const int captured = length > 0 && (size_t)length < sizeof(capture) &&
        simcity_recomp_render_current_frame(game, error, sizeof(error)) &&
        simcity_recomp_current_frame(game) == frame &&
        write_bmp(capture, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT);
    printf("stock-infill-final-capture frame=%u width=%u complete=%d %s\n",
        frame, simcity_recomp_frame_width(game), captured, error);
    return captured;
}

static int stock_infill_preview_checkpoint(SimCityRecomp *game, const char *directory) {
    char path[4096], error[256] = {0};
    const int len = snprintf(path, sizeof(path), "%s/stock-world-construction-input-end.scsnap", directory);
    if (len <= 0 || (size_t)len >= sizeof(path) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 1, error, sizeof(error))) {
        fprintf(stderr, "Cannot preview construction checkpoint: %s\n", error);
        return 0;
    }
    return stock_infill_capture_checkpoint(game, directory);
}

static int stock_inspect_infill_partial(SimCityRecomp *game, const char *directory) {
    static const struct { const char *name; unsigned address; } fields[] = {
        {"notice", 0x0395u}, {"message", 0x0397u}, {"budget", 0x0dc3u},
        {"focus", 0x0201u}, {"hud", 0x01d7u}, {"tool", 0x020du},
        {"scroll", 0x01f5u}, {"motion", 0x01ffu}, {"event", 0x0387u},
        {"flags", 0x0197u}, {"speed", 0x0193u}, {"view_y", 0x01bfu},
        {"anchor_y", 0x0207u}, {"input", 0x011bu}
    };
    char path[4096], error[256] = {0};
    int x, y;
    snprintf(path, sizeof(path), "%s/stock-world-construction-infill-partial.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !stock_cell(game, &x, &y)) {
        fprintf(stderr, "Cannot inspect infill checkpoint: %s\n", error);
        return 0;
    }
    printf("stock-infill-input-state frame=%u cell=(%d,%d)", simcity_recomp_current_frame(game), x, y);
    for (unsigned i = 0; i < sizeof(fields) / sizeof(fields[0]); ++i) {
        uint16_t value;
        if (!read_wram16(game, fields[i].address, &value)) return 0;
        printf(" %s=%04X", fields[i].name, value);
    }
    puts("");
    snprintf(path, sizeof(path), "%s/stock-infill-stopped.bmp", directory);
    return simcity_recomp_render_current_frame(game, error, sizeof(error)) &&
        write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                  SIMCITY_RECOMP_FRAME_HEIGHT);
}

static int stock_probe_infill_notice_exit(SimCityRecomp *game, const char *directory) {
    static const struct { uint16_t button; unsigned release; } choices[] = {
        {SIMCITY_INPUT_B, 10u}, {SIMCITY_INPUT_B, 12u}, {SIMCITY_INPUT_A, 12u},
        {SIMCITY_INPUT_X, 12u}, {SIMCITY_INPUT_START, 12u}, {SIMCITY_INPUT_SELECT, 12u}
    };
    char path[4096], error[256] = {0};
    snprintf(path, sizeof(path), "%s/stock-world-construction-infill-partial.scsnap", directory);
    for (unsigned i = 0u; i < sizeof(choices) / sizeof(choices[0]); ++i) {
        WorldProbe audio = {0};
        uint16_t notice, message, focus;
        unsigned attempts = 0u;
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            !read_wram16(game, 0x0395u, &notice) || !notice ||
            !read_wram16(game, 0x0397u, &message)) return 0;
        for (; notice && attempts < 24u; ++attempts)
            if (!world_probe_step(game, &audio, choices[i].button, 2u, 0, 0) ||
                !world_probe_step(game, &audio, 0u, choices[i].release, 0, 0) ||
                !read_wram16(game, 0x0395u, &notice)) return 0;
        if (!read_wram16(game, 0x0201u, &focus)) return 0;
        printf("stock-infill-notice-probe message=%u button=%04X release_frames=%u attempts=%u final_notice=%04X focus=%04X\n",
               message, choices[i].button, choices[i].release, attempts, notice, focus);
    }
    return 1;
}

static int stock_move_axis(SimCityRecomp *game, WorldProbe *probe,
                           int target, int vertical) {
    int x, y;
    int last = -1000;
    unsigned i, still = 0;
    for (i = 0; i < 2000u; ++i) {
        int delta;
        uint16_t input;
        if (!stock_cell(game, &x, &y)) return 0;
        delta = target - (vertical ? y : x);
        if (delta == 0) {
            if (!world_probe_step(game, probe, 0, 3, 0, 0) || !stock_cell(game, &x, &y))
                return 0;
            if (target == (vertical ? y : x)) return 1;
            continue;
        }
        if (delta == last) ++still;
        else still = 0;
        last = delta;
#ifdef _WIN32
        if (live_construction_enabled && still == 120u &&
            simcity_recomp_stock_world_active(game)) {
            uint16_t notice = 0u, budget = 0u, focus = 0u, hud = 0u;
            if (!read_wram16(game, 0x0395u, &notice) ||
                !read_wram16(game, 0x0dc3u, &budget) ||
                !read_wram16(game, 0x0201u, &focus) ||
                !read_wram16(game, 0x01d7u, &hud)) return 0;
            if (notice || budget == UINT16_MAX || focus != 0xffu) {
                fprintf(stderr, "Native navigation intercepted target=%d axis=%d at=(%d,%d) notice=%04X budget=%04X focus=%04X hud=%04X\n",
                        target, vertical, x, y, notice, budget, focus, hud);
                return 0;
            }
        }
#endif
        input = vertical ? (delta < 0 ? SIMCITY_INPUT_UP : SIMCITY_INPUT_DOWN) :
                           (delta < 0 ? SIMCITY_INPUT_LEFT : SIMCITY_INPUT_RIGHT);
        if (simcity_recomp_stock_world_active(game) && still >= 24u) {
            /* A pans the camera. At a map edge it may be clamped while
               the visible cursor still has room. Release A and let the
               native D-pad move the cursor before trying fast pan again. */
            if ((still - 24u) % 96u >= 72u) input |= SIMCITY_INPUT_A;
        } else if (abs(delta) > 5 || still >= 45u) {
            input |= SIMCITY_INPUT_A;
        }
        if (!world_probe_step(game, probe, input, 1, 0, 0)) return 0;
    }
    fprintf(stderr, "Navigation stalled at (%d,%d), axis=%d target=%d\n", x, y, vertical, target);
    return 0;
}

static int stock_benchmark_mode(SimCityRecomp *game, WorldProbe *probe,
                                const char *name, int render) {
    unsigned misses = 0;
    double total = 0.0, max_ms = 0.0;
    double budget = 1000.0 / simcity_recomp_presentation_fps();
    for (unsigned i = 0; i < 240u; ++i) {
        const double start = gameplay_clock();
        if (!world_probe_step(game, probe, 0u, 1u, 0, render)) return 0;
        const double ms = (gameplay_clock() - start) * 1000.0;
        total += ms;
        if (ms > max_ms) max_ms = ms;
        if (ms > budget) ++misses;
    }
    printf("benchmark=%s frames=240 target_fps=%.6f budget_ms=%.3f avg_ms=%.3f max_ms=%.3f over_budget=%u\n",
           name, simcity_recomp_presentation_fps(), budget, total / 240.0, max_ms, misses);
    printf("benchmark_hash=%s pcm=%016llX samples=%llu image=%016llX\n", name,
           (unsigned long long)probe->hash, (unsigned long long)probe->frames,
           render ? (unsigned long long)fnv1a(simcity_recomp_frame_bgra(game),
                    (size_t)simcity_recomp_frame_width(game) * SIMCITY_RECOMP_FRAME_HEIGHT) : 0ull);
    return 1;
}

static int stock_benchmark(SimCityRecomp *game, WorldProbe *probe,
                           const char *name) {
    return stock_benchmark_mode(game, probe, name, 1);
}

static int stock_press(SimCityRecomp *game, WorldProbe *probe,
                       uint16_t button, unsigned settle) {
    return world_probe_step(game, probe, button, 2u, 0, 0) &&
           world_probe_step(game, probe, 0u, settle, 0, 0);
}

static int stock_acknowledge_build_notice(SimCityRecomp *game, WorldProbe *audio,
                                           const char *context) {
    uint16_t notice, message;
    if (!read_wram16(game, 0x0395u, &notice)) return 0;
    if (!notice) return 1;
    if (!read_wram16(game, 0x0397u, &message)) return 0;
    const uint32_t start = simcity_recomp_current_frame(game);
    for (unsigned attempt = 0u; notice &&
         simcity_recomp_current_frame(game) - start < 1800u; ++attempt) {
        if (!stock_press(game, audio, SIMCITY_INPUT_B, (attempt & 1u) ? 15u : 12u) ||
            !read_wram16(game, 0x0395u, &notice)) return 0;
    }
    printf("stock-construction-notice context=%s message=%u cleared=%d guest_frames=%u\n",
           context, message, !notice, simcity_recomp_current_frame(game) - start);
    fflush(stdout);
    return !notice;
}

static int stock_tile_at(SimCityRecomp *game, int x, int y, uint16_t *tile) {
    return x >= 0 && x < 120 && y >= 0 && y < 100 &&
           read_wram16(game, 0x10200u + 2u * (120u * (unsigned)y + (unsigned)x), tile);
}

static int stock_clear_site(SimCityRecomp *game, int x, int y, int size) {
    for (int dy = 0; dy < size; ++dy)
        for (int dx = 0; dx < size; ++dx) {
            uint16_t tile;
            if (!stock_tile_at(game, x + dx, y + dy, &tile) || (tile & 0x3fffu) != 0u)
                return 0;
        }
    return 1;
}

static int stock_funds(SimCityRecomp *game, unsigned *funds) {
    uint8_t treasury[3];
    if (!simcity_recomp_read_wram(game, 0x0b9du, treasury, sizeof(treasury))) return 0;
    *funds = (unsigned)treasury[0] | ((unsigned)treasury[1] << 8u) |
             ((unsigned)treasury[2] << 16u);
    return 1;
}

static int stock_build_at(SimCityRecomp *game, WorldProbe *probe,
                          int x, int y, uint16_t *old_tile, uint16_t *new_tile) {
    int actual_x, actual_y;
    return stock_move_axis(game, probe, x, 0) &&
           stock_move_axis(game, probe, y, 1) &&
           stock_cell(game, &actual_x, &actual_y) &&
           actual_x == x && actual_y == y &&
           stock_tile_at(game, x, y, old_tile) &&
           stock_press(game, probe, SIMCITY_INPUT_B, 8u) &&
           stock_tile_at(game, x, y, new_tile);
}

static int stock_lay_roads(SimCityRecomp *game, WorldProbe *probe,
                           const char *directory, const int *plant_x) {
    const int connector = 36;
    const int segments[][4] = {
        {plant_x[3], 69, plant_x[2], 69}, {connector, 68, connector, 19},
        {connector + 1, 19, plant_x[1], 19}, {connector - 1, 19, plant_x[0], 19}
    };
    unsigned built = 0;
    unsigned road_start_funds;
    char error[256], path[4096];
    int x, y;
    if (!stock_press(game, probe, SIMCITY_INPUT_X, 60u) ||
        !stock_press(game, probe, SIMCITY_INPUT_SELECT, 18u)) return 0;
    for (unsigned i = 0; i < 12u; ++i)
        if (!stock_press(game, probe, SIMCITY_INPUT_UP, 18u)) return 0;
    if (!stock_press(game, probe, SIMCITY_INPUT_RIGHT, 18u) ||
        !stock_press(game, probe, SIMCITY_INPUT_B, 18u) ||
        !capture_checkpoint(game, directory, "road-tool-selected", 0, &x, &y) ||
        !stock_press(game, probe, SIMCITY_INPUT_SELECT, 18u) ||
        !stock_press(game, probe, SIMCITY_INPUT_X, 60u) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !stock_funds(game, &road_start_funds)) return 0;
    for (size_t segment = 0; segment < sizeof(segments) / sizeof(segments[0]); ++segment) {
        const int *s = segments[segment];
        const int dx = (s[2] > s[0]) - (s[2] < s[0]);
        const int dy = (s[3] > s[1]) - (s[3] < s[1]);
        for (x = s[0], y = s[1]; ; x += dx, y += dy) {
            uint16_t before = 0, after = 0;
            if (!stock_build_at(game, probe, x, y, &before, &after) ||
                (before & 0x3ffu) == (after & 0x3ffu)) {
                int actual_x = -1, actual_y = -1;
                uint16_t focus = 0u;
                (void)stock_cell(game, &actual_x, &actual_y);
                (void)read_wram16(game, 0x0201u, &focus);
                fprintf(stderr, "Road failed after %u placements at (%d,%d) cursor=(%d,%d) focus=%04X before=%04X after=%04X\n",
                        built, x, y, actual_x, actual_y, (unsigned)focus, (unsigned)before, (unsigned)after);
                return 0;
            }
            if (built++ == 0u) {
                unsigned funds;
                if (!stock_funds(game, &funds) || funds != road_start_funds - 10u) {
                    fprintf(stderr, "First road did not cost ten dollars\n");
                    return 0;
                }
                printf("first_road=(%d,%d) tile_before=%04X tile_after=%04X\n",
                       x, y, (unsigned)before, (unsigned)after);
            }
            if (x == s[2] && y == s[3]) break;
        }
        {
            snprintf(path, sizeof(path), "%s/road-segment-%u.bmp", directory, (unsigned)segment + 1u);
            if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                           SIMCITY_RECOMP_FRAME_HEIGHT))
                return 0;
            printf("road_tiles_placed=%u\n", built);
        }
    }
    snprintf(path, sizeof(path), "%s/four-plants-roads.scsnap", directory);
    return simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) &&
           stock_benchmark(game, probe, "four-plants-plus-roads") &&
           simcity_recomp_snapshot_save(game, path, error, sizeof(error));
}

static int stock_select_residential(SimCityRecomp *game, WorldProbe *probe) {
    uint16_t x, y;
    for (unsigned attempt = 0; attempt < 16u; ++attempt) {
        uint16_t button;
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y))
            return 0;
        printf("residential_toolbar=(%u,%u)\n", (unsigned)x, (unsigned)y);
        if (x == 32u && y == 88u)
            return stock_press(game, probe, SIMCITY_INPUT_B, 18u);
        if (y < 88u) button = SIMCITY_INPUT_DOWN;
        else if (y > 88u) button = SIMCITY_INPUT_UP;
        else button = x < 32u ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
        if (!stock_press(game, probe, button, 18u)) return 0;
    }
    return 0;
}

static int stock_add_roadside_zones(SimCityRecomp *game, WorldProbe *probe,
                                     const char *directory) {
    static const int sites[][2] = {{25,20}, {65,20}, {78,70}, {25,70}};
    char error[256], path[4096];
    int x, y;
    if (!stock_press(game, probe, SIMCITY_INPUT_X, 60u) ||
        !stock_press(game, probe, SIMCITY_INPUT_SELECT, 18u) ||
        !stock_select_residential(game, probe) ||
        !capture_checkpoint(game, directory, "residential-tool-selected", 0, &x, &y) ||
        !stock_press(game, probe, SIMCITY_INPUT_SELECT, 18u) ||
        !stock_press(game, probe, SIMCITY_INPUT_X, 60u) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error))) return 0;
    for (size_t i = 0; i < sizeof(sites) / sizeof(sites[0]); ++i) {
        uint16_t before, after, nearby;
        unsigned funds_before, funds_after;
        int chosen = -1;
        y = sites[i][1];
        for (int offset = -7; offset <= 7; ++offset) {
            x = sites[i][0] + offset;
            if (stock_clear_site(game, x, y, 3) &&
                stock_tile_at(game, x, y - 1, &nearby) && (nearby & 0x3ffu) >= 0x30u &&
                (nearby & 0x3ffu) < 0x50u) {
                chosen = x;
                break;
            }
        }
        if (chosen < 0 || !stock_funds(game, &funds_before) ||
            !stock_build_at(game, probe, chosen, y, &before, &after) ||
            before == after || !stock_funds(game, &funds_after) ||
            funds_after != funds_before - 100u) {
            fprintf(stderr, "Residential test failed at (%d,%d)\n", chosen, y);
            return 0;
        }
        for (int dy = 0; dy < 3; ++dy)
            for (int dx = 0; dx < 3; ++dx) {
                uint16_t cell;
                if (!stock_tile_at(game, chosen + dx, y + dy, &cell) ||
                    (cell & 0x3ffu) == 0u)
                    return 0;
            }
        printf("roadside_residential_zone=%u world=(%d,%d) funds=%u\n",
               (unsigned)i + 1u, chosen, y, funds_after);
        snprintf(path, sizeof(path), "%s/residential-%u.bmp", directory, (unsigned)i + 1u);
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                       SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
    }
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    return simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) &&
           simcity_recomp_snapshot_save(game, path, error, sizeof(error)) &&
           stock_benchmark(game, probe, "four-plants-roads-and-zones");
}

static int stock_fps_compare(SimCityRecomp *game, const char *directory) {
    static const char *const saves[] = {"four-plants-roads", "four-plants-roads-zones"};
    static const char *const modes[] = {"headless", "native-256", "wide-398"};
    char path[4096], label[96], error[256];
    for (size_t i = 0; i < sizeof(saves) / sizeof(saves[0]); ++i) {
        snprintf(path, sizeof(path), "%s/%s.scsnap", directory, saves[i]);
        for (size_t j = 0; j < sizeof(modes) / sizeof(modes[0]); ++j) {
            WorldProbe probe = {0};
            probe.hash = UINT64_C(1469598103934665603);
            snprintf(label, sizeof(label), "%s-%s", saves[i], modes[j]);
            if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
                !simcity_recomp_set_widescreen(game, j == 2u, error, sizeof(error)) ||
                !stock_benchmark_mode(game, &probe, label, j != 0u)) {
                fprintf(stderr, "Comparison %s failed: %s\n", label, error);
                return 0;
            }
        }
    }
    return 1;
}

enum { STOCK_MAP_START = 0x0200, STOCK_MAP_END = 0x5fc0, MAP_TRACE_CAPACITY = 2048 };
static uint16_t stock_map_gameplay_input(unsigned frame) {
    return frame < 80u ? SIMCITY_INPUT_LEFT :
           frame == 100u ? SIMCITY_INPUT_B :
           frame >= 120u && frame < 200u ? SIMCITY_INPUT_RIGHT : 0u;
}
typedef struct StockMapAccess {
    uint32_t pc;
    unsigned min_offset, max_offset;
    unsigned tile_reads, tile_writes, other_reads, other_writes, dma;
    int used;
} StockMapAccess;
typedef struct StockMapTrace {
    StockMapAccess entries[MAP_TRACE_CAPACITY];
    unsigned overflow;
} StockMapTrace;

static void stock_map_access(void *opaque, uint32_t pc, uint16_t offset,
                             int write, int dma) {
    StockMapTrace *trace = (StockMapTrace *)opaque;
    unsigned slot = (pc * 2654435761u) >> 21;
    for (unsigned attempt = 0; attempt < MAP_TRACE_CAPACITY; ++attempt) {
        StockMapAccess *entry = trace->entries + slot;
        if (!entry->used || entry->pc == pc) {
            if (!entry->used) {
                entry->used = 1;
                entry->pc = pc;
                entry->min_offset = entry->max_offset = offset;
            }
            if (offset < entry->min_offset) entry->min_offset = offset;
            if (offset > entry->max_offset) entry->max_offset = offset;
            if (offset >= STOCK_MAP_START && offset < STOCK_MAP_END) {
                if (write) ++entry->tile_writes;
                else ++entry->tile_reads;
            } else {
                if (write) ++entry->other_writes;
                else ++entry->other_reads;
            }
            entry->dma += (unsigned)dma;
            return;
        }
        slot = (slot + 1u) % MAP_TRACE_CAPACITY;
    }
    ++trace->overflow;
}

static int stock_map_trace_probe(SimCityRecomp *game, const char *directory) {
    char path[4096], error[256];
    StockMapTrace trace = {0};
    uint64_t pcm_hash = UINT64_C(1469598103934665603), pcm_frames = 0u;
    uint64_t reads = 0u, writes = 0u, adjacent = 0u;
    unsigned sites = 0u, mixed = 0u;
    SimCityRecompAudioStaticStatus audio = {0};
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) {
        fprintf(stderr, "Stock snapshot load failed: %s\n", error);
        return 0;
    }
    for (unsigned frame = 0u; frame < 360u; ++frame) {
        const uint16_t input = stock_map_gameplay_input(frame);
        if (!simcity_recomp_advance_stock_map_trace(game, input, 1u,
                                                    stock_map_access, &trace) ||
            !drain_pcm(game, &pcm_hash, &pcm_frames)) return 0;
    }
    for (unsigned i = 0u; i < MAP_TRACE_CAPACITY; ++i) {
        const StockMapAccess *entry = &trace.entries[i];
        if (!entry->used) continue;
        ++sites;
        if ((entry->tile_reads || entry->tile_writes) &&
            (entry->other_reads || entry->other_writes)) ++mixed;
        reads += entry->tile_reads;
        writes += entry->tile_writes;
        adjacent += entry->other_writes;
        printf("stock-map pc=%06X offsets=%04X-%04X tile_r=%u tile_w=%u other_r=%u other_w=%u dma=%u\n",
               entry->pc, entry->min_offset, entry->max_offset,
               entry->tile_reads, entry->tile_writes, entry->other_reads, entry->other_writes,
               entry->dma);
    }
    if (!simcity_recomp_audio_static_status(game, &audio)) return 0;
    printf("stock-map-summary sites=%u mixed=%u reads=%llu writes=%llu other_writes=%llu trace_overflow=%u\n",
           sites, mixed, (unsigned long long)reads, (unsigned long long)writes,
           (unsigned long long)adjacent, trace.overflow);
    printf("stock-map-audio pcm_frames=%llu pcm_hash=%016llX core_overflows=%llu fifo_dropped=%llu\n",
           (unsigned long long)pcm_frames, (unsigned long long)pcm_hash,
           (unsigned long long)audio.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    return reads && writes && adjacent && !trace.overflow &&
           !audio.pcm_overflows && !simcity_recomp_audio_dropped_frames(game);
}

static int stock_world_preview_probe(SimCityRecomp *game, const char *directory) {
    enum { STOCK_W = 120, STOCK_H = 100, WORLD_W = 240, WORLD_H = 200 };
    uint8_t *base = malloc(STOCK_W * STOCK_H * 2u);
    uint16_t *world = calloc(WORLD_W * WORLD_H, sizeof(*world));
    char path[4096], error[256] = {0};
    const size_t count = (size_t)SIMCITY_RECOMP_WIDESCREEN_WIDTH * SIMCITY_RECOMP_FRAME_HEIGHT;
    uint64_t stock, northwest, southeast, empty;
    int ok = 0;
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!base || !world || !simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
        !simcity_recomp_read_wram(game, 0x10200u, base, STOCK_W * STOCK_H * 2u))
        goto finish;
    stock = fnv1a(simcity_recomp_frame_bgra(game), count);
    for (unsigned y = 0; y < STOCK_H; ++y) {
        for (unsigned x = 0; x < STOCK_W; ++x) {
            const size_t src = (y * STOCK_W + x) * 2u;
            const uint16_t cell = (uint16_t)((unsigned)base[src] | ((unsigned)base[src + 1u] << 8u));
            world[y * WORLD_W + x] = cell;
            world[(y + STOCK_H) * WORLD_W + x + STOCK_W] = cell;
        }
    }
    const uint64_t clock = simcity_recomp_master_clock(game);
    if (!simcity_recomp_render_stock_world_preview(game, world, WORLD_W * WORLD_H, 0, 0))
        goto finish;
    northwest = fnv1a(simcity_recomp_frame_bgra(game), count);
    if (!simcity_recomp_render_stock_world_preview(game, world, WORLD_W * WORLD_H,
                                                   STOCK_W * 8, STOCK_H * 8))
        goto finish;
    southeast = fnv1a(simcity_recomp_frame_bgra(game), count);
    snprintf(path, sizeof(path), "%s/stock-world-preview-southeast.bmp", directory);
    if (!write_bmp(path, simcity_recomp_frame_bgra(game),
                   SIMCITY_RECOMP_WIDESCREEN_WIDTH, SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    for (unsigned y = STOCK_H; y < WORLD_H; ++y)
        memset(world + y * WORLD_W + STOCK_W, 0, STOCK_W * sizeof(*world));
    if (!simcity_recomp_render_stock_world_preview(game, world, WORLD_W * WORLD_H,
                                                   STOCK_W * 8, STOCK_H * 8))
        goto finish;
    empty = fnv1a(simcity_recomp_frame_bgra(game), count);
    ok = stock == northwest && southeast != empty &&
         simcity_recomp_master_clock(game) == clock;
    printf("stock-world-preview stock=%016llX northwest=%016llX southeast=%016llX empty=%016llX unchanged_clock=%d verified=%d\n",
           (unsigned long long)stock, (unsigned long long)northwest,
           (unsigned long long)southeast, (unsigned long long)empty,
           simcity_recomp_master_clock(game) == clock, ok);
finish:
    free(world);
    free(base);
    if (!ok) fprintf(stderr, "Stock world renderer validation failed: %s\n", error);
    return ok;
}

static int stock_world_window_probe(SimCityRecomp *game, const char *directory) {
    enum { SW = 120, SH = 100, WW = 240, WH = 200, FRAMES = 360,
           MAP_BASE = 0x10200, MAP_END = MAP_BASE + SW * SH * 2, WRAM_SIZE = 0x20000 };
    uint8_t *reference = malloc(WRAM_SIZE);
    uint8_t *actual = malloc(WRAM_SIZE);
    uint8_t *original_tiles = malloc(MAP_END - MAP_BASE);
    uint16_t *world = calloc(WW * WH, sizeof(*world));
    uint64_t hash[2] = {UINT64_C(1469598103934665603), UINT64_C(1469598103934665603)};
    uint64_t pcm[2] = {0}, clocks[2] = {0};
    unsigned changed = 0u, mismatches = 0u, stray = 0u, missed = 0u;
    unsigned treasury_before = 0u, treasury_after[2] = {0};
    uint64_t queue = 0u, phase = 0u;
    SimCityRecompAudioStaticStatus audio[2] = {{0}};
    uint64_t drops[2] = {0};
    char path[4096], error[256] = {0};
    int ok = 0;
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!reference || !actual || !original_tiles || !world ||
        !simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_read_wram(game, MAP_BASE, original_tiles, MAP_END - MAP_BASE) ||
        !stock_funds(game, &treasury_before))
        goto finish;
    for (unsigned y = 0u; y < SH; ++y)
        for (unsigned x = 0u; x < SW; ++x) {
            const size_t i = (y * SW + x) * 2u;
            world[(y + SH) * WW + x + SW] =
                (uint16_t)(original_tiles[i] | ((unsigned)original_tiles[i + 1u] << 8));
        }
    for (unsigned run = 0u; run < 2u; ++run) {
        if (run && !simcity_recomp_snapshot_load(game, path, error, sizeof(error))) goto finish;
        for (unsigned f = 0u; f < FRAMES; ++f) {
            const uint16_t input = stock_map_gameplay_input(f);
            const uint64_t before = pcm[run];
            int advanced = run ? simcity_recomp_advance_stock_world_window(
                         game, input, 1u, world, WW * WH, SW, SH) :
                         simcity_recomp_advance_headless(game, input, 1u, NULL);
            if (!advanced || !drain_pcm(game, &hash[run], &pcm[run])) goto finish;
            if (run) {
                queue += pcm[run] - before;
                if (f >= 3u) {
                    uint64_t demand;
                    phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE *
                             SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
                    demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
                    phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
                    if (demand > queue) { ++missed; queue = 0u; }
                    else queue -= demand;
                }
            }
        }
        if (!simcity_recomp_read_wram(game, 0u, run ? actual : reference, WRAM_SIZE) ||
            !simcity_recomp_audio_static_status(game, &audio[run]) ||
            !stock_funds(game, &treasury_after[run])) goto finish;
        clocks[run] = simcity_recomp_master_clock(game);
        drops[run] = simcity_recomp_audio_dropped_frames(game);
    }
    for (unsigned y = 0u; y < WH; ++y)
        for (unsigned x = 0u; x < WW; ++x) {
            const uint16_t word = world[y * WW + x];
            if (x >= SW && y >= SH) {
                const size_t j = ((y - SH) * SW + x - SW) * 2u;
                const uint16_t after = (uint16_t)(reference[MAP_BASE + j] | ((unsigned)reference[MAP_BASE + j + 1u] << 8));
                const uint16_t before = (uint16_t)(original_tiles[j] | ((unsigned)original_tiles[j + 1u] << 8));
                if (after != word) ++mismatches;
                if (before != word) ++changed;
            } else if (word) ++stray;
        }
    ok = changed && !mismatches && !stray && !missed &&
         treasury_after[1] < treasury_before && treasury_after[0] == treasury_after[1] &&
         memcmp(reference, actual, MAP_BASE) == 0 &&
         memcmp(reference + MAP_END, actual + MAP_END, WRAM_SIZE - MAP_END) == 0 &&
         memcmp(original_tiles, actual + MAP_BASE, MAP_END - MAP_BASE) == 0 &&
         hash[0] == hash[1] && pcm[0] == pcm[1] && clocks[0] == clocks[1] &&
         !audio[1].pcm_overflows && !drops[1];
    printf("stock-world-window changed_tiles=%u mismatches=%u stray=%u funds_before=%u stock_funds_after=%u world_funds_after=%u stock_clock_equal=%d audio_equal=%d pcm=%llu overflows=%llu dropped=%llu modeled_underruns=%u verified=%d\n",
           changed, mismatches, stray, treasury_before, treasury_after[0], treasury_after[1], clocks[0] == clocks[1],
           hash[0] == hash[1] && pcm[0] == pcm[1], (unsigned long long)pcm[1],
           (unsigned long long)audio[1].pcm_overflows, (unsigned long long)drops[1], missed, ok);
    if (ok) {
        snprintf(path, sizeof(path), "%s/stock-engine-world-window.bmp", directory);
        ok = simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) &&
             simcity_recomp_render_stock_world_preview(game, world, WW * WH, SW * 8, SH * 8) &&
             write_bmp(path, simcity_recomp_frame_bgra(game),
                       SIMCITY_RECOMP_WIDESCREEN_WIDTH, SIMCITY_RECOMP_FRAME_HEIGHT);
    }
finish:
    free(world);
    free(original_tiles);
    free(actual);
    free(reference);
    if (!ok) fprintf(stderr, "Stock world window validation failed: %s\n", error);
    return ok;
}

static int stock_world_camera_probe(SimCityRecomp *game, const char *directory, int road) {
    enum { SW = 120, SH = 100, WW = 240, WH = 200, TARGET_Y = 141 };
    const int target_x = road ? 119 : 141;
    uint8_t *stock = malloc(SW * SH * 2u);
    uint16_t *world = malloc(WW * WH * sizeof(*world));
    uint16_t *before_build = malloc(WW * WH * sizeof(*world));
    uint32_t *before_pixels = malloc(SIMCITY_RECOMP_FRAME_PIXELS * sizeof(*before_pixels));
    uint64_t reads = 0u, frames = 0u, pcm = 0u, hash = UINT64_C(1469598103934665603);
    uint64_t phase = 0u, queue = 0u;
    unsigned underruns = 0u;
    unsigned funds_before = 0u, funds_after = 0u, build_tiles = 0u, outside_build = 0u;
    uint16_t anchor_x = 0u, anchor_y = 0u;
    uint16_t cursor_px = 0u, cursor_py = 0u;
    unsigned local_pixel_changes = 0u;
    int x = 0, y = 0, ok = 0;
    char path[4096], error[256] = {0};
    SimCityRecompAudioStaticStatus audio = {0};
    snprintf(path, sizeof(path), "%s/%s.scsnap", directory,
             road ? "four-plants-roads" : "four-plants-roads-zones");
    if (!world || !stock || !before_build || !before_pixels ||
        !simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !simcity_recomp_read_wram(game, 0x10200u, stock, SW * SH * 2u) ||
        !stock_cell(game, &x, &y)) goto finish;
    for (unsigned row = 0u; row < WH; ++row)
        for (unsigned col = 0u; col < WW; ++col) {
            const unsigned i = 2u * ((row % SH) * SW + col % SW);
            world[row * WW + col] = (uint16_t)(stock[i] | ((unsigned)stock[i + 1u] << 8u));
        }
    if (road) {
        /* Clear ground for an isolated edge-to-edge connection; no roads
           are injected. Both road words must come from the stock B action. */
        for (unsigned row = TARGET_Y - 3; row <= TARGET_Y + 3; ++row)
            memset(world + row * WW + 116u, 0, 8u * sizeof(*world));
    }
    printf("stock-camera-start x=%d y=%d target=(%d,%u)\n", x, y, target_x, TARGET_Y);
    fflush(stdout);
    for (unsigned f = 0u; f < 2200u; ++f) {
        uint32_t rendered_tiles = 0u;
        const uint64_t before = pcm;
        const uint16_t input = x < target_x ? SIMCITY_INPUT_RIGHT :
                               y < TARGET_Y ? SIMCITY_INPUT_DOWN : 0u;
        if (!input) break;
        if (!simcity_recomp_advance_stock_world_camera(game, input, world, WW * WH,
                                                       &rendered_tiles) ||
            !stock_cell(game, &x, &y) || !drain_pcm(game, &hash, &pcm)) goto finish;
        reads += rendered_tiles;
        queue += pcm - before;
        if (++frames > 3u) {
            phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE *
                     SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
            const uint64_t demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            if (demand > queue) { ++underruns; queue = 0u; }
            else queue -= demand;
        }
        if (f % 350u == 349u) {
            printf("stock-camera-progress frames=%u x=%d y=%d extended_tiles=%llu\n",
                   f + 1u, x, y, (unsigned long long)reads);
            fflush(stdout);
        }
    }
    if (!simcity_recomp_audio_static_status(game, &audio)) goto finish;
    ok = x >= target_x && y >= TARGET_Y && reads && !underruns &&
         !audio.pcm_overflows && !simcity_recomp_audio_dropped_frames(game);
    printf("stock-camera x=%d y=%d frames=%llu extended_tiles=%llu pcm=%llu overflows=%llu modeled_underruns=%u verified=%d\n",
           x, y, (unsigned long long)frames, (unsigned long long)reads,
           (unsigned long long)pcm, (unsigned long long)audio.pcm_overflows, underruns, ok);
    if (ok) {
        ok = 0;
        if (road) {
            uint16_t first, west, east;
            if (!stock_funds(game, &funds_before)) goto finish;
            for (unsigned i = 0u; i < 29u; ++i)
                if (!simcity_recomp_advance_stock_world_camera(game, i == 12u ? SIMCITY_INPUT_B : 0u,
                                                               world, WW * WH, NULL) ||
                    !drain_pcm(game, &hash, &pcm)) goto finish;
            first = world[TARGET_Y * WW + 119u] & 0x03ffu;
            for (unsigned i = 0u; x < 120 && i < 20u; ++i)
                if (!simcity_recomp_advance_stock_world_camera(game, SIMCITY_INPUT_RIGHT,
                                                               world, WW * WH, NULL) ||
                    !stock_cell(game, &x, &y) || !drain_pcm(game, &hash, &pcm)) goto finish;
            for (unsigned i = 0u; i < 35u; ++i)
                if (!simcity_recomp_advance_stock_world_camera(game, i == 12u ? SIMCITY_INPUT_B : 0u,
                                                               world, WW * WH, NULL) ||
                    !drain_pcm(game, &hash, &pcm)) goto finish;
            west = world[TARGET_Y * WW + 119u] & 0x03ffu;
            east = world[TARGET_Y * WW + 120u] & 0x03ffu;
            if (!stock_funds(game, &funds_after)) goto finish;
            printf("stock-world-road-seam anchor=(%d,%d) first=%04X west=%04X east=%04X cost=%u\n",
                   x, y, first, west, east, funds_before - funds_after);
            snprintf(path, sizeof(path), "%s/stock-engine-world-road-seam.bmp", directory);
            ok = x == 120 && y == TARGET_Y && first >= 0x30u && first < 0x70u &&
                 west >= 0x30u && west < 0x70u && east >= 0x30u && east < 0x70u &&
                 funds_before >= 20u && funds_after == funds_before - 20u &&
                 simcity_recomp_render_stock_world_preview(game, world, WW * WH, 0, 0) &&
                 write_bmp(path, simcity_recomp_frame_bgra(game),
                           SIMCITY_RECOMP_FRAME_WIDTH, SIMCITY_RECOMP_FRAME_HEIGHT);
            goto finish;
        }
        memcpy(before_build, world, WW * WH * sizeof(*world));
        if (!stock_funds(game, &funds_before)) goto finish;
        for (unsigned f = 0u; f < 35u; ++f) {
            const uint64_t before = pcm;
            if (f == 12u) {
                if (!read_wram16(game, 0x01ebu, &cursor_px) ||
                    !read_wram16(game, 0x01edu, &cursor_py) ||
                    !simcity_recomp_render_stock_world_preview(game, world, WW * WH, 0, 0)) goto finish;
                memcpy(before_pixels, simcity_recomp_frame_bgra(game),
                       SIMCITY_RECOMP_FRAME_PIXELS * sizeof(*before_pixels));
                snprintf(path, sizeof(path), "%s/stock-engine-world-camera-before-build.bmp", directory);
                if (!write_bmp(path, before_pixels, SIMCITY_RECOMP_FRAME_WIDTH,
                               SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
            }
            if (!simcity_recomp_advance_stock_world_camera(game, f == 12u ? SIMCITY_INPUT_B : 0u,
                                                           world, WW * WH, NULL) ||
                !drain_pcm(game, &hash, &pcm)) goto finish;
            queue += pcm - before;
            phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
            const uint64_t demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            if (demand > queue) { ++underruns; queue = 0u; }
            else queue -= demand;
        }
        if (!stock_funds(game, &funds_after) ||
            !read_wram16(game, 0x0205u, &anchor_x) || !read_wram16(game, 0x0207u, &anchor_y))
            goto finish;
        for (unsigned row = SH; row < WH; ++row) {
            for (unsigned col = SW; col < WW; ++col) {
                const unsigned i = row * WW + col;
                if (before_build[i] == world[i]) continue;
                ++build_tiles;
                if (abs((int)row - (int)anchor_y) > 2 || abs((int)col - (int)anchor_x) > 2)
                    ++outside_build;
            }
        }
        printf("stock-world-build anchor=(%u,%u) changed=%u outside_footprint=%u funds_before=%u funds_after=%u\n",
               anchor_x, anchor_y, build_tiles, outside_build, funds_before, funds_after);
        if (!simcity_recomp_render_stock_world_preview(game, world, WW * WH, 0, 0) ||
            !simcity_recomp_audio_static_status(game, &audio)) goto finish;
        const uint32_t *after_pixels = simcity_recomp_frame_bgra(game);
        for (unsigned py = cursor_py + 7u; py < cursor_py + 31u && py < SIMCITY_RECOMP_FRAME_HEIGHT; ++py)
            for (unsigned px = cursor_px; px < cursor_px + 24u && px < SIMCITY_RECOMP_FRAME_WIDTH; ++px) {
                const size_t i = (size_t)py * SIMCITY_RECOMP_FRAME_WIDTH + px;
                local_pixel_changes += (unsigned)(before_pixels[i] != after_pixels[i]);
            }
        printf("stock-world-redraw cursor_px=(%u,%u) changed_pixels=%u modeled_underruns=%u core_overflows=%llu dropped=%llu\n",
               cursor_px, cursor_py, local_pixel_changes, underruns,
               (unsigned long long)audio.pcm_overflows,
               (unsigned long long)simcity_recomp_audio_dropped_frames(game));
        snprintf(path, sizeof(path), "%s/stock-engine-world-camera.bmp", directory);
        ok = anchor_x >= target_x && anchor_y >= TARGET_Y && build_tiles == 9u &&
             outside_build == 0u && local_pixel_changes >= 40u &&
             funds_before >= 100u && funds_after == funds_before - 100u &&
             !underruns && !audio.pcm_overflows && !simcity_recomp_audio_dropped_frames(game) &&
             write_bmp(path, simcity_recomp_frame_bgra(game),
                       simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT);
    }
finish:
    if (!ok) fprintf(stderr, "Stock camera validation failed at (%d,%d) after %llu frames: %s %s\n",
                     x, y, (unsigned long long)frames, error, simcity_recomp_last_error(game));
    free(world);
    free(stock);
    free(before_build);
    free(before_pixels);
    return ok;
}

static int stock_world_census_probe(SimCityRecomp *game, const char *directory, int power_mode) {
    enum { SW = 120, SH = 100, WW = 240, WH = 200 };
    const unsigned dx[] = {power_mode ? 136u : 137u, power_mode ? 110u : 143u};
    const unsigned dy[] = {power_mode ? 145u : 153u, power_mode ? 145u : 164u};
    const int growth_mode = power_mode == 3;
    const unsigned found_mask = 3u;
    uint8_t *stock = malloc(SW * SH * 2u);
    uint16_t *world = calloc(WW * WH, sizeof(*world));
    unsigned found = 0u, underruns = 0u, frames = 0u;
    uint16_t zones = 0u, plants = 0u, speed = 0u;
    uint16_t population_units = 0u, town_population = 0u, res_demand = 0u;
    unsigned houses = 0u;
    uint64_t pcm = 0u, hash = UINT64_C(1469598103934665603), phase = 0u, queue = 0u;
    SimCityRecompStockWorldPower power = {0};
    SimCityRecompStockWorldCensus *census = &power.census;
    SimCityRecompAudioStaticStatus audio = {0};
    char path[4096], error[256] = {0};
    int ok = 0;
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!stock || !world || !simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !simcity_recomp_read_wram(game, 0x10200u, stock, SW * SH * 2u) ||
        !read_wram16(game, 0x0193u, &speed)) goto finish;
    for (unsigned y = 1u; y + 2u < SH && found != found_mask; ++y)
        for (unsigned x = 1u; x + 2u < SW && found != found_mask; ++x) {
            const size_t i = ((size_t)y * SW + x) * 2u;
            const unsigned code = (stock[i] | ((unsigned)stock[i + 1u] << 8u)) & 0x03ffu;
            const unsigned kind = code == 0x84u ? 0u : code == 0x28cu ? 1u : 2u;
            if (kind == 2u || (found & (1u << kind))) continue;
            found |= 1u << kind;
            for (int row = -1; row <= (kind ? 2 : 1); ++row)
                for (int col = -1; col <= (kind ? 2 : 1); ++col) {
                    const unsigned j = 2u * ((unsigned)((int)y + row) * SW +
                                             (unsigned)((int)x + col));
                    const unsigned target = (unsigned)((int)dy[kind] + row) * WW +
                                            (unsigned)((int)dx[kind] + col);
                    world[target] = (uint16_t)(stock[j] | ((unsigned)stock[j + 1u] << 8u));
                }
        }
    if (power_mode) {
        /* A real stock power line, not the nonconductive road tile. The
           disconnected control also starts with a stale zone power bit. */
        for (unsigned x = 113u; x <= 134u; ++x)
            world[dy[0] * WW + x] = (power_mode == 2 && x == 120u) ? 0u : 0x0060u;
        if (power_mode == 2) world[dy[0] * WW + dx[0]] |= 0x8000u;
    }
    if (growth_mode) {
        /* Explicit environmental inputs for the growth test. The residential
           tiles start vacant; only the original growth routine may place a
           house. Other environmental producer passes are not asserted here. */
        for (int ry = -1; ry <= 1; ++ry)
            for (int rx = -1; rx <= 1; ++rx) {
                const unsigned row = (unsigned)((int)dy[0] + ry);
                const unsigned col = (unsigned)((int)dx[0] + rx);
                world[row * WW + col] |= 0x8000u;
                power.land_value[(row / 2u) * (WW / 2u) + col / 2u] = 250u;
            }
        snprintf(path, sizeof(path), "%s/stock-world-growth-core.log", directory);
        if (!simcity_recomp_log_open(path, error, sizeof(error))) goto finish;
    }
    printf("stock-world-census-start fixture=%u speed=%04X zone=(%u,%u) coal=(%u,%u) power_mode=%d\n",
           found, speed, dx[0], dy[0], dx[1], dy[1], power_mode);
    fflush(stdout);
    if (found != found_mask) goto finish;
    while (!(growth_mode ? (houses && population_units && census->complete &&
                            power.completed_cycles && town_population) :
             power_mode ? power.complete : census->complete) &&
           frames < (growth_mode ? 7500u : 1800u)) {
        const uint64_t before = pcm;
        if (growth_mode) {
            /* Keep the environmental input controlled during this isolated
               growth regression; the native environment has its own test. */
            const unsigned i = (dy[0] / 2u) * (WW / 2u) + dx[0] / 2u;
            power.land_value[i] = 250u;
            power.pollution[i] = 0u;
        }
        const int advanced = growth_mode ?
            simcity_recomp_advance_stock_world_session(game, 0u, world, WW * WH, &power) :
            power_mode ?
            simcity_recomp_advance_stock_world_power(game, world, WW * WH, &power) :
            simcity_recomp_advance_stock_world_census(game, world, WW * WH, census);
        if (!advanced ||
            !drain_pcm(game, &hash, &pcm)) goto finish;
        if (growth_mode && census->complete) {
            houses = 0u;
            for (int ry = -1; ry <= 1; ++ry)
                for (int rx = -1; rx <= 1; ++rx) {
                    const unsigned row = (unsigned)((int)dy[0] + ry);
                    const unsigned col = (unsigned)((int)dx[0] + rx);
                    const unsigned tile = world[row * WW + col] & 0x03ffu;
                    if (tile >= 0x0089u && tile < 0x0095u) ++houses;
                }
            if (!read_wram16(game, 0x0b8bu, &population_units) ||
                !read_wram16(game, 0x0ba5u, &town_population) ||
                !read_wram16(game, 0x0badu, &res_demand)) goto finish;
        }
        queue += pcm - before;
        if (++frames > 3u) {
            phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
            const uint64_t demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            if (demand > queue) { ++underruns; queue = 0u; }
            else queue -= demand;
        }
        if (frames % (growth_mode ? 1200u : 300u) == 0u) {
            printf("stock-world-census-progress frame=%u visits=%u active=%u\n",
                   frames, census->visited, census->active);
            fflush(stdout);
        }
    }
    if (!read_wram16(game, 0x0c73u, &zones) || !read_wram16(game, 0x0c85u, &plants) ||
        !simcity_recomp_audio_static_status(game, &audio)) goto finish;
    ok = census->complete && census->visited == WW * WH && !census->order_errors &&
         census->extended_centers == 2u && zones == 1u && plants == 1u &&
         !underruns && !audio.pcm_overflows && !simcity_recomp_audio_dropped_frames(game);
    printf("stock-world-census visits=%u bad_order=%u outer_centers=%u res_zones=%u plants=%u frames=%u modeled_underruns=%u core_overflows=%llu dropped=%llu verified=%d\n",
           census->visited, census->order_errors, census->extended_centers, zones, plants, frames,
           underruns, (unsigned long long)audio.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game), ok);
    if (growth_mode) {
        const uint16_t rate = power.growth_rate[(dy[0] / 8u) * (WW / 8u) + dx[0] / 8u];
        const uint16_t zone = world[dy[0] * WW + dx[0]];
        unsigned actual_plants = 0u;
        for (unsigned i = 0u; i < WW * WH; ++i)
            if ((world[i] & 0x03ffu) == 0x028cu || (world[i] & 0x03ffu) == 0x027cu) {
                ++actual_plants;
                printf("stock-world-growth plant_tile=%04X x=%u y=%u\n", world[i], i % WW, i / WW);
            }
        ok = ok && houses && population_units && town_population &&
             houses >= population_units && town_population <= (unsigned)population_units * 20u &&
             actual_plants == 1u && (world[17u * WW + 102u] & 0x03ffu) == 0u &&
             power.completed_cycles && (zone & 0x83ffu) == 0x8084u &&
             rate > 0u && rate < 0x8000u;
        printf("stock-world-growth houses=%u residential_units=%u town_population=%u power_cycles=%u zone=%04X growth_rate=%d demand=%d verified=%d\n",
               houses, population_units, town_population, power.completed_cycles, zone,
               (int)(int16_t)rate, (int)(int16_t)res_demand, ok);
        if (ok) {
            uint16_t vx, vy, fx, fy;
            snprintf(path, sizeof(path), "%s/stock-world-growth.bmp", directory);
            ok = read_wram16(game, 0x01bdu, &vx) && read_wram16(game, 0x01bfu, &vy) &&
                 read_wram16(game, 0x0139u, &fx) && read_wram16(game, 0x0137u, &fy) &&
                 simcity_recomp_render_stock_world_preview(game, world, WW * WH,
                     ((int)dx[0] - (int16_t)vx) * 8 - (fx & 7) - 128,
                     ((int)dy[0] - (int16_t)vy) * 8 - (fy & 7) - 96) &&
                 write_bmp(path, simcity_recomp_frame_bgra(game),
                           SIMCITY_RECOMP_FRAME_WIDTH, SIMCITY_RECOMP_FRAME_HEIGHT);
        }
    } else if (power_mode) {
        const uint16_t zone = world[dy[0] * WW + dx[0]];
        const uint16_t coal = world[dy[1] * WW + dx[1]];
        const uint16_t before_seam = world[dy[0] * WW + 119u];
        const uint16_t after_seam = world[dy[0] * WW + 121u];
        const int connected = power_mode == 1;
        ok = ok && power.complete && power.written_cells == WW * WH && !power.order_errors &&
             (zone & 0x03ffu) == 0x0084u && (coal & 0x83ffu) == 0x828cu &&
             (before_seam & 0x83ffu) == 0x8060u &&
             (after_seam & 0x83ffu) == (connected ? 0x8060u : 0x0060u) &&
             ((zone & 0x8000u) != 0u) == connected;
        printf("stock-world-power complete=%u written=%u order_errors=%u powered=%u coal=%04X west=%04X east=%04X zone=%04X gap=%d verified=%d\n",
               power.complete, power.written_cells, power.order_errors, power.powered_cells,
               coal, before_seam, after_seam, zone, !connected, ok);
    }
finish:
    if (growth_mode) simcity_recomp_log_close();
    if (!ok) fprintf(stderr, "Stock census failed at frame %u, visits %u: %s %s\n",
                     frames, census->visited, error, simcity_recomp_last_error(game));
    free(world);
    free(stock);
    return ok;
}

static int stock_world_boot_template(SimCityRecomp *game, WorldProbe *audio,
                                      uint32_t *menu_frame, uint32_t *city_frame, unsigned id) {
    if (simcity_recomp_stock_world_request_template(game, id)) return 0;
    *menu_frame = *city_frame = 0u;
    for (uint32_t f = 0u; f < 3900u; ++f) {
        if (!*menu_frame && simcity_recomp_world_menu_ready(game)) {
            *menu_frame = simcity_recomp_current_frame(game);
            if (!simcity_recomp_stock_world_request_template(game, id) ||
                !simcity_recomp_stock_world_new_city_pending(game)) return 0;
        }
        if (!world_probe_step(game, audio, new_city_input(f), 1u, 1, 0)) return 0;
        if (simcity_recomp_stock_world_active(game)) {
            *city_frame = simcity_recomp_current_frame(game);
            break;
        }
    }
    return *menu_frame && *city_frame && !simcity_recomp_stock_world_new_city_pending(game);
}

static int stock_world_boot_new_city(SimCityRecomp *game, WorldProbe *audio,
                                      uint32_t *menu_frame, uint32_t *city_frame) {
    return stock_world_boot_template(game, audio, menu_frame, city_frame, 0u);
}

static int stock_template_water_tile(uint16_t value) {
    const unsigned tile = value & 0x03ffu;
    return tile >= 1u && tile <= 0x13u;
}

static int stock_world_template_catalog_probe(SimCityRecomp *game) {
    enum { W = 240, H = 200, CELLS = W * H };
    uint16_t *a = malloc(CELLS * sizeof(*a)), *b = malloc(CELLS * sizeof(*b));
    uint64_t hashes[SIMCITY_WORLD_MAP_TEMPLATE_COUNT] = {0};
    unsigned last_land = CELLS + 1u;
    int ok = a && b && !simcity_recomp_world_map_template_info(0u) &&
        !simcity_recomp_world_map_template_info(SIMCITY_WORLD_MAP_TEMPLATE_COUNT + 1u);
    for (unsigned id = 1u; ok && id <= SIMCITY_WORLD_MAP_TEMPLATE_COUNT; ++id) {
        const SimCityWorldMapTemplateInfo *map = simcity_recomp_world_map_template_info(id);
        unsigned land = 0u, differences = 0u;
        uint64_t hash = UINT64_C(1469598103934665603);
        ok = map && simcity_recomp_world_map_template_tiles(id, a, CELLS) &&
             simcity_recomp_world_map_template_tiles(id, b, CELLS) && !memcmp(a, b, CELLS * sizeof(*a));
        if (!ok) break;
        for (unsigned y = 0u; y < H; ++y) for (unsigned x = 0u; x < W; ++x) {
            const unsigned index = y * W + x, tile = a[index];
            ok &= tile == 0u || stock_template_water_tile((uint16_t)tile) || tile == 0x14u;
            if (id == 1u) ok &= tile == 0u;
            if (x < 48u && y < 48u) ok &= tile == 0u;
            land += !stock_template_water_tile((uint16_t)tile);
            differences += tile != a[(y + H / 2u) % H * W + (x + W / 2u) % W];
            hash = (hash ^ tile) * UINT64_C(1099511628211);
        }
        for (unsigned prev = 0u; prev + 1u < id; ++prev) ok &= hash != hashes[prev];
        hashes[id - 1u] = hash;
        ok &= land == CELLS * map->land_percent / 100u && land < last_land &&
            (id == 1u ? land == CELLS : differences != 0u);
        last_land = land;
        printf("stock-world-template id=%u name=\"%s\" land=%u sea=%u hash=%016llX pass=%d\n",
            id, map->name, land, CELLS - land, (unsigned long long)hash, ok);
    }
    if (ok) {
        WorldProbe audio = {0};
        uint32_t menu = 0u, city = 0u;
        unsigned funds = 0u;
        audio.hash = UINT64_C(1469598103934665603);
        ok = stock_world_boot_template(game, &audio, &menu, &city, SIMCITY_WORLD_MAP_TEMPLATE_COUNT) &&
             stock_funds(game, &funds) && funds == 20000u;
        for (unsigned i = 0u; ok && i < CELLS; ++i) {
            uint16_t tile = 0u;
            ok = simcity_recomp_stock_world_tile(game, i % W, i / W, &tile) && tile == a[i];
        }
        ok &= !audio.modeled_underruns && !audio.modeled_overflows;
        printf("stock-world-template-new-city id=%u frame=%u funds=%u underruns=%u overflows=%u pass=%d\n",
            SIMCITY_WORLD_MAP_TEMPLATE_COUNT, city, funds, audio.modeled_underruns, audio.modeled_overflows, ok);
    }
    free(b);
    free(a);
    return ok;
}

enum { GEO_W = 240, GEO_H = 200, GEO_CELLS = GEO_W * GEO_H };

static int terrain_in_map(int x, int y) { return x >= 0 && x < GEO_W && y >= 0 && y < GEO_H; }

static int stock_water_tile_reference(SimCityRecomp *game, const char *directory) {
    enum { SW = 120, SH = 100 };
    static const int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
    uint16_t *tiles = malloc(GEO_CELLS * sizeof(*tiles));
    unsigned count[16][20] = {{0}};
    char path[4096], error[256] = {0};
    snprintf(path, sizeof(path), "%s/stock-world-new-city.scsnap", directory);
    const int ok = tiles && simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) &&
        simcity_recomp_stock_world_copy_tiles(game, tiles, GEO_CELLS);
    if (ok) {
        for (int y = 1; y < SH - 1; ++y) for (int x = 1; x < SW - 1; ++x) {
            const unsigned tile = tiles[y * GEO_W + x] & 0x03ffu;
            if (!tile || tile > 0x13u) continue;
            unsigned mask = 0u;
            for (unsigned d = 0u; d < 4u; ++d) {
                const unsigned neighbor = tiles[(y + dy[d]) * GEO_W + x + dx[d]] & 0x03ffu;
                if (!neighbor || neighbor > 0x13u) mask |= 1u << d;
            }
            ++count[mask][tile];
        }
        for (unsigned mask = 0u; mask < 16u; ++mask) {
            printf("stock-water-reference mask_nesw=%X", mask);
            for (unsigned tile = 1u; tile <= 0x13u; ++tile)
                if (count[mask][tile]) printf(" tile_%02X=%u", tile, count[mask][tile]);
            printf("\n");
        }
    }
    free(tiles);
    return ok;
}

static unsigned stock_template_reach(const uint16_t *tiles, uint8_t *seen, uint16_t *queue,
                                     unsigned bridge_limit) {
    static const int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
    const unsigned spawn = 15u * GEO_W + 15u;
    unsigned head = 0u, tail = 0u;
    memset(seen, 0, GEO_CELLS);
    if (tiles[spawn] != 0u) return 0u;
    queue[tail++] = (uint16_t)spawn;
    seen[spawn] = 1u;
    while (head < tail) {
        const unsigned p = queue[head++];
        const int x = (int)(p % GEO_W), y = (int)(p / GEO_W);
        for (unsigned d = 0u; d < 4u; ++d) {
            int next_x = x + dx[d], next_y = y + dy[d];
            unsigned water = 0u;
            while (terrain_in_map(next_x, next_y) && stock_template_water_tile(tiles[next_y * GEO_W + next_x]) && water < bridge_limit) {
                ++water;
                next_x += dx[d];
                next_y += dy[d];
            }
            if (!terrain_in_map(next_x, next_y)) continue;
            const int next = next_y * GEO_W + next_x;
            if (stock_template_water_tile(tiles[next]) || seen[next]) continue;
            if (water) {
                const int a = x - dx[d], b = y - dy[d];
                const int c = next_x + dx[d], e = next_y + dy[d];
                if (tiles[p] || tiles[next] || !terrain_in_map(a, b) || !terrain_in_map(c, e) ||
                    tiles[b * GEO_W + a] || tiles[e * GEO_W + c]) continue;
            }
            queue[tail++] = (uint16_t)next;
            seen[next] = 1u;
        }
    }
    return tail;
}

static unsigned stock_template_coast_lots(const uint16_t *tiles, const uint8_t *seen) {
    unsigned count = 0u;
    for (unsigned y = 1u; y + 4u < GEO_H; ++y) for (unsigned x = 1u; x + 4u < GEO_W; ++x) {
        const unsigned at = y * GEO_W + x;
        if (!seen[at]) continue;
        int clear = 1;
        unsigned exact_edges = 15u;
        for (unsigned j = 0u; j < 4u; ++j) {
            for (unsigned i = 0u; i < 4u; ++i) clear &= tiles[at + j * GEO_W + i] == 0u;
            if (!stock_template_water_tile(tiles[at - 1u + j * GEO_W])) exact_edges &= ~1u;
            if (!stock_template_water_tile(tiles[at + 4u + j * GEO_W])) exact_edges &= ~2u;
            if (!stock_template_water_tile(tiles[at - GEO_W + j])) exact_edges &= ~4u;
            if (!stock_template_water_tile(tiles[at + 4u * GEO_W + j])) exact_edges &= ~8u;
        }
        count += clear && exact_edges;
    }
    return count;
}

static int stock_world_template_topology(void) {
    uint16_t *tiles = malloc(GEO_CELLS * sizeof(*tiles)), *queue = malloc(GEO_CELLS * sizeof(*queue));
    uint8_t *seen = malloc(GEO_CELLS);
    int ok = tiles && queue && seen;
    for (unsigned id = 1u; ok && id <= SIMCITY_WORLD_MAP_TEMPLATE_COUNT; ++id) {
        if (!simcity_recomp_world_map_template_tiles(id, tiles, GEO_CELLS)) { ok = 0; break; }
        const unsigned dry = stock_template_reach(tiles, seen, queue, 0u);
        const unsigned coast = stock_template_coast_lots(tiles, seen);
        const unsigned bridge = stock_template_reach(tiles, seen, queue, 12u);
        const SimCityWorldMapTemplateInfo *info = simcity_recomp_world_map_template_info(id);
        const unsigned land = GEO_CELLS * info->land_percent / 100u;
        unsigned actual_land = 0u, deep_water = 0u, deep_edge = 0u;
        int deep_next_to_land = 0;
        for (unsigned y = 0u; y < GEO_H; ++y) for (unsigned x = 0u; x < GEO_W; ++x) {
            const unsigned cell = y * GEO_W + x;
            actual_land += !stock_template_water_tile(tiles[cell]);
            if (tiles[cell] != 2u) continue;
            ++deep_water;
            deep_edge += x == 0u || y == 0u || x + 1u == GEO_W || y + 1u == GEO_H;
            deep_next_to_land |= (x && !stock_template_water_tile(tiles[cell - 1u])) ||
                (y && !stock_template_water_tile(tiles[cell - GEO_W])) ||
                (x + 1u < GEO_W && !stock_template_water_tile(tiles[cell + 1u])) ||
                (y + 1u < GEO_H && !stock_template_water_tile(tiles[cell + GEO_W]));
        }
        ok = actual_land == land && dry >= 48u * 48u && !deep_next_to_land &&
             (id == 1u ? land == GEO_CELLS && !coast && !deep_water && !deep_edge :
                         coast && deep_water && (id < 5u || deep_edge));
        if (id == 3u || id == 6u) ok &= bridge > dry && bridge * 100u >= land * 99u;
        else if (id >= 8u) ok &= bridge >= dry + 500u;
        else ok &= dry == land;
        printf("stock-template-topology id=%u name=\"%s\" dry_reachable=%u with_short_bridges=%u land=%u coastal_lots=%u deep_water=%u deep_edge=%u pass=%d\n",
            id, info->name, dry, bridge, actual_land, coast, deep_water, deep_edge, ok);
    }
    free(seen);
    free(queue);
    free(tiles);
    return ok;
}

static int stock_catalog_capture(SimCityRecomp *game, const char *directory, const char *label) {
    SimCityRecompVideoSnapshot *snapshot = simcity_recomp_video_snapshot_create();
    uint32_t *worker = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*worker));
    const int was_wide = simcity_recomp_frame_width(game) == SIMCITY_RECOMP_WIDESCREEN_WIDTH;
    char path[4096], error[256] = {0};
    int ok = snapshot && worker;
    for (int mode = 0; ok && mode <= 1; ++mode) {
        unsigned width = 0u;
        ok = simcity_recomp_set_widescreen(game, mode, error, sizeof(error)) &&
            simcity_recomp_render_presentation_frame(game, error, sizeof(error)) &&
            simcity_recomp_video_snapshot_capture(snapshot, game) &&
            simcity_recomp_video_snapshot_render(snapshot, worker, SIMCITY_RECOMP_MAX_FRAME_PIXELS, &width);
        if (!ok) break;
        const uint32_t *direct = simcity_recomp_frame_bgra(game);
        const size_t count = (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT;
        const unsigned margin = mode ? SIMCITY_RECOMP_WIDESCREEN_MARGIN : 0u;
        const int list = simcity_recomp_world_catalog_view(game, NULL) == SIMCITY_WORLD_CATALOG_LIST;
        /* The main-menu entry now lives inside the stock sign. Sample
           the first W pixel, not the retired independent border. */
        const uint32_t marker = worker[(list ? 77u : 191u) * width + margin + (list ? 27u : 74u)];
        snprintf(path, sizeof(path), "%s/stock-world-catalog-%s-%u.bmp", directory, label, width);
        ok = width == simcity_recomp_frame_width(game) && marker != 0u &&
            memcmp(worker, direct, count * sizeof(*worker)) == 0 &&
            write_bmp(path, direct, width, SIMCITY_RECOMP_FRAME_HEIGHT);
        printf("stock-world-catalog-pixels state=%s width=%u match=%d\n", label, width, ok);
    }
    const int restored = simcity_recomp_set_widescreen(game, was_wide, error, sizeof(error));
    free(worker);
    simcity_recomp_video_snapshot_destroy(snapshot);
    return ok && restored;
}

static int stock_world_catalog_input_probe(SimCityRecomp *game, const char *directory) {
    enum { CELLS = 240 * 200 };
    WorldProbe audio = {0};
    unsigned selected = 0u, setup = 0u, verified = 0u, transition_frames = 0u;
    uint16_t *expected = malloc(CELLS * sizeof(*expected));
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    if (!expected || !simcity_recomp_world_map_template_tiles(9u, expected, CELLS)) goto finish;
    simcity_recomp_world_catalog_enable(game, 1);
    for (unsigned f = 0u; f < 3500u; ++f) {
        const enum SimCityWorldCatalogScreen screen = simcity_recomp_world_catalog_view(game, &selected);
        uint16_t state = 0u, input = 0u;
        if (!read_wram16(game, 0x14u, &state)) goto finish;
        const char *capture = f == 1010u ? "main" : f == 1050u ? "focus" : f == 1070u ? "list-first" :
            f == 1210u ? "list-last" : NULL;
        if (capture && !stock_catalog_capture(game, directory, capture)) goto finish;
        if (!setup && state == 4u) setup = f;
        if (f > 1220u && !setup) {
            if (screen != SIMCITY_WORLD_CATALOG_LIST || selected != 9u ||
                !simcity_recomp_stock_world_new_city_pending(game)) goto finish;
            ++transition_frames;
        }
        /* Release the first confirmation and press it again during the
           handoff. Hold Down with it across the first native setup frames. */
        if (f >= 1224u && f < 1232u) input = SIMCITY_INPUT_B | SIMCITY_INPUT_DOWN;
        else if (setup) input = new_city_input(f - setup + 1022u);
        else if (f < 1020u) input = pulse(f, 1000u) ? SIMCITY_INPUT_DOWN : new_city_input(f);
        else if (pulse(f, 1040u) || (f >= 1080u && f < 1089u) || pulse(f, 1140u)) input = SIMCITY_INPUT_DOWN;
        else if (pulse(f, 1092u)) input = SIMCITY_INPUT_UP | SIMCITY_INPUT_DOWN;
        else if (pulse(f, 1060u) || pulse(f, 1160u) || pulse(f, 1220u)) input = SIMCITY_INPUT_B;
        else if (pulse(f, 1100u)) input = SIMCITY_INPUT_X;
        else if (pulse(f, 1120u) || pulse(f, 1180u) || pulse(f, 1200u)) input = SIMCITY_INPUT_UP;
        if ((f == 1050u && screen == SIMCITY_WORLD_CATALOG_FOCUSED) ||
            (f == 1070u && screen == SIMCITY_WORLD_CATALOG_LIST && selected == 1u) ||
            (f == 1090u && screen == SIMCITY_WORLD_CATALOG_LIST && selected == 2u) ||
            (f == 1098u && screen == SIMCITY_WORLD_CATALOG_LIST && selected == 2u) ||
            (f == 1110u && screen == SIMCITY_WORLD_CATALOG_FOCUSED && !simcity_recomp_stock_world_new_city_pending(game)) ||
            (f == 1130u && screen == SIMCITY_WORLD_CATALOG_MAIN) ||
            (f == 1210u && screen == SIMCITY_WORLD_CATALOG_LIST && selected == 9u) ||
            (f == 1232u && setup && state == 4u && screen == SIMCITY_WORLD_CATALOG_HIDDEN &&
                simcity_recomp_stock_world_new_city_pending(game))) ++verified;
        if (f >= 1050u && f <= 1250u && f % 20u == 10u)
            printf("stock-world-catalog-step frame=%u screen=%d selected=%u native=%u\n", f, screen, selected, state);
        if (!world_probe_step(game, &audio, input, 1u, 1, 0)) goto finish;
        if (simcity_recomp_stock_world_active(game)) {
            unsigned funds = 0u;
            ok = verified == 8u && transition_frames && stock_funds(game, &funds) && funds == 20000u &&
                !simcity_recomp_stock_world_new_city_pending(game) && !audio.modeled_underruns && !audio.modeled_overflows;
            for (unsigned at = 0u; ok && at < CELLS; ++at) {
                uint16_t tile;
                ok = simcity_recomp_stock_world_tile(game, at % 240u, at / 240u, &tile) && tile == expected[at];
            }
            break;
        }
    }
finish:
    printf("stock-world-catalog-input checks=%u/8 selected=%u transition_frames=%u native_setup=%u city_frame=%u underruns=%u overflows=%u pass=%d\n",
        verified, selected, transition_frames, setup, simcity_recomp_current_frame(game),
        audio.modeled_underruns, audio.modeled_overflows, ok);
    free(expected);
    return ok;
}

typedef struct CatalogFlicker {
    SimCityRecompVideoSnapshot *snapshot;
    uint32_t *prepared;
    uint64_t roots[2], pages[SIMCITY_WORLD_MAP_TEMPLATE_COUNT + 1u];
    unsigned frames, setups;
    const char *directory;
} CatalogFlicker;

static uint64_t stock_catalog_pixels(const uint32_t *pixels, unsigned width, int list) {
    uint64_t hash = UINT64_C(14695981039346656037);
    const unsigned inset = (width - SIMCITY_RECOMP_FRAME_WIDTH) / 2u;
    for (unsigned y = list ? 77u : 93u; y < (list ? 230u : 206u); ++y)
        for (unsigned x = list ? 5u : 54u; x < (list ? 251u : 218u); ++x) {
            /* The guest's animated cursor is not the World Maps row. */
            if (!list && x < 71u && y < 191u) continue;
            hash = (hash ^ pixels[y * width + inset + x]) * UINT64_C(1099511628211);
        }
    return hash;
}

static int stock_catalog_inspect_frame(SimCityRecomp *game, CatalogFlicker *test,
    enum SimCityWorldCatalogScreen screen, unsigned id, uint64_t *golden, int learn) {
    unsigned selected = 0u, width = 0u;
    const unsigned direct_width = simcity_recomp_frame_width(game);
    const uint32_t *direct = simcity_recomp_frame_bgra(game);
    const enum SimCityWorldCatalogScreen actual = simcity_recomp_world_catalog_view(game, &selected);
    const uint64_t hash = stock_catalog_pixels(direct, direct_width, screen == SIMCITY_WORLD_CATALOG_LIST);
    if (actual != screen || (screen == SIMCITY_WORLD_CATALOG_LIST && selected != id) ||
        (!learn && hash != *golden) ||
        !simcity_recomp_video_snapshot_capture(test->snapshot, game) ||
        !simcity_recomp_video_snapshot_render(test->snapshot, test->prepared,
            SIMCITY_RECOMP_MAX_FRAME_PIXELS, &width) || width != direct_width ||
        memcmp(direct, test->prepared, (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*direct))) {
        char path[4096];
        snprintf(path, sizeof(path), "%s/catalog-first-flicker-%u.bmp", test->directory, direct_width);
        (void)write_bmp(path, direct, direct_width, SIMCITY_RECOMP_FRAME_HEIGHT);
        fprintf(stderr, "Catalog flicker mismatch frame=%u width=%u screen=%d/%d selection=%u/%u hash=%016llx/%016llx\n",
            simcity_recomp_current_frame(game), direct_width, actual, screen, selected, id,
            (unsigned long long)hash, (unsigned long long)*golden);
        return 0;
    }
    if (learn) *golden = hash;
    else ++test->frames;
    return 1;
}

static int stock_catalog_flicker_step(SimCityRecomp *game, WorldProbe *audio, CatalogFlicker *test,
    enum SimCityWorldCatalogScreen screen, unsigned id, uint16_t input, unsigned held) {
    uint64_t *golden = screen == SIMCITY_WORLD_CATALOG_LIST ? &test->pages[id] :
        &test->roots[screen == SIMCITY_WORLD_CATALOG_FOCUSED];
    for (unsigned f = 0u; f < held + 8u; ++f)
        if (!world_probe_step(game, audio, f < held ? input : 0u, 1u, 1, 1) ||
            !stock_catalog_inspect_frame(game, test, screen, id, golden, 0)) return 0;
    return 1;
}

static int stock_catalog_flicker_probe(SimCityRecomp *game, const char *directory) {
    CatalogFlicker test = {0};
    char error[256] = {0};
    int ok = 0;
    test.directory = directory;
    test.snapshot = simcity_recomp_video_snapshot_create();
    test.prepared = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*test.prepared));
    if (!test.snapshot || !test.prepared) goto finish;
    for (int wide = 0; wide <= 1; ++wide) {
        WorldProbe audio = {0};
        unsigned id = 1u;
        if (!simcity_recomp_reset(game, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, wide, error, sizeof(error))) goto finish;
        simcity_recomp_world_catalog_enable(game, 1);
        for (unsigned f = 0u; f < 1010u; ++f)
            if (!world_probe_step(game, &audio, pulse(f, 1000u) ? SIMCITY_INPUT_DOWN : new_city_input(f),
                                  1u, 1, 0)) goto finish;
        if (!simcity_recomp_render_presentation_frame(game, error, sizeof(error)) ||
            !stock_catalog_inspect_frame(game, &test, SIMCITY_WORLD_CATALOG_MAIN, 0u, &test.roots[0], 1) ||
            !stock_press(game, &audio, SIMCITY_INPUT_DOWN, 8u) ||
            !simcity_recomp_render_presentation_frame(game, error, sizeof(error)) ||
            !stock_catalog_inspect_frame(game, &test, SIMCITY_WORLD_CATALOG_FOCUSED, 0u, &test.roots[1], 1) ||
            test.roots[0] == test.roots[1] || !stock_press(game, &audio, SIMCITY_INPUT_B, 8u)) goto finish;
        /* Reconstruct settled reference images; then drive independently
           scripted transitions and inspect every completed frame, as in
           Top Gear's menu regression. The catalog itself is synchronous. */
        for (id = 1u; id <= SIMCITY_WORLD_MAP_TEMPLATE_COUNT; ++id) {
            if (!simcity_recomp_render_presentation_frame(game, error, sizeof(error)) ||
                !stock_catalog_inspect_frame(game, &test, SIMCITY_WORLD_CATALOG_LIST, id, &test.pages[id], 1)) goto finish;
            for (unsigned before = 1u; before < id; ++before)
                if (test.pages[before] == test.pages[id]) goto finish;
            if (!stock_press(game, &audio, SIMCITY_INPUT_DOWN, 8u)) goto finish;
        }
        id = 1u;
        for (unsigned repeat = 0u; repeat < 5u; ++repeat) {
            for (unsigned direction = 0u; direction < 2u; ++direction)
                for (unsigned n = 0u; n < SIMCITY_WORLD_MAP_TEMPLATE_COUNT; ++n) {
                    id = direction ? (id == 1u ? SIMCITY_WORLD_MAP_TEMPLATE_COUNT : id - 1u) :
                         (id == SIMCITY_WORLD_MAP_TEMPLATE_COUNT ? 1u : id + 1u);
                    if (!stock_catalog_flicker_step(game, &audio, &test, SIMCITY_WORLD_CATALOG_LIST, id,
                        direction ? SIMCITY_INPUT_UP : SIMCITY_INPUT_DOWN, n & 1u ? 1u : 5u)) goto finish;
                }
            if (!stock_catalog_flicker_step(game, &audio, &test, SIMCITY_WORLD_CATALOG_LIST, id,
                    SIMCITY_INPUT_UP | SIMCITY_INPUT_DOWN, 6u) ||
                !stock_catalog_flicker_step(game, &audio, &test, SIMCITY_WORLD_CATALOG_LIST, id,
                    SIMCITY_INPUT_LEFT, 6u) ||
                !stock_catalog_flicker_step(game, &audio, &test, SIMCITY_WORLD_CATALOG_LIST, id,
                    SIMCITY_INPUT_RIGHT, 6u) ||
                !stock_catalog_flicker_step(game, &audio, &test, SIMCITY_WORLD_CATALOG_FOCUSED, id, SIMCITY_INPUT_X, 4u) ||
                !stock_catalog_flicker_step(game, &audio, &test, SIMCITY_WORLD_CATALOG_MAIN, id, SIMCITY_INPUT_UP, 4u) ||
                !stock_catalog_flicker_step(game, &audio, &test, SIMCITY_WORLD_CATALOG_FOCUSED, id, SIMCITY_INPUT_DOWN, 4u) ||
                !stock_catalog_flicker_step(game, &audio, &test, SIMCITY_WORLD_CATALOG_LIST, id, SIMCITY_INPUT_B, 4u)) goto finish;
        }
        unsigned arrived = 0u;
        for (unsigned f = 0u; f < 40u; ++f) {
            uint16_t state = 0u;
            if (!world_probe_step(game, &audio, f == 0u || f == 4u ? SIMCITY_INPUT_B : 0u, 1u, 1, 1) ||
                !read_wram16(game, 0x14u, &state)) goto finish;
            if (state == 4u) arrived = 1u; /* Native New City setup. */
            if (arrived) {
                if (state != 4u || simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_HIDDEN ||
                    !simcity_recomp_stock_world_new_city_pending(game)) goto finish;
                ++test.setups;
            } else if (!stock_catalog_inspect_frame(game, &test, SIMCITY_WORLD_CATALOG_LIST, id, &test.pages[id], 0))
                goto finish;
        }
        if (!arrived || audio.modeled_underruns || audio.modeled_overflows) goto finish;
    }
    ok = 1;
finish:
    printf("%s catalog flicker: checked_menu_frames=%u native_setup_frames=%u widths=256,398 %s\n",
        ok ? "PASS" : "FAIL", test.frames, test.setups, error);
    free(test.prepared);
    simcity_recomp_video_snapshot_destroy(test.snapshot);
    return ok;
}

static uint16_t stock_catalog_cancel_new_city_input(uint32_t frame) {
    return frame < 1100u ? new_city_input(frame) : pulse(frame, 1700u) ? SIMCITY_INPUT_X : 0u;
}

static int stock_catalog_original_menu_flicker(SimCityRecomp *game, const char *directory, int wide) {
    const struct { const char *name; uint16_t (*input)(uint32_t); unsigned frames; } routes[] = {
        {"practice", practice_input, 1750u}, {"new-city", new_city_input, 2600u},
        {"scenario", scenario_input, 2750u}, {"cancel-new-city", stock_catalog_cancel_new_city_input, 1980u}
    };
    typedef struct { uint64_t pixels; uint16_t state; uint8_t main_menu, rendered; } Receipt;
    Receipt *baseline = calloc(2750u, sizeof(*baseline));
    SimCityRecompVideoSnapshot *snapshot = simcity_recomp_video_snapshot_create();
    uint32_t *prepared = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*prepared));
    char path[4096], error[256] = {0};
    unsigned checked = 0, intentional_blanks = 0;
    uint16_t state = 0u;
    int ok = 0;
    snprintf(path, sizeof(path), "%s/native-title-start-%d.scsnap", directory, wide);
    if (!baseline || !snapshot || !prepared ||
        !simcity_recomp_set_widescreen(game, wide, error, sizeof(error)) ||
        !simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
    for (unsigned i = 0u; i < sizeof(routes) / sizeof(*routes); ++i) {
        const unsigned first = i == 0u ? 410u : 830u;
        uint64_t states_seen = 0u;
        unsigned route_visible = 0u;
        for (int enabled = 0; enabled <= 1; ++enabled) {
            unsigned ever_main = 0u;
            if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) goto finish;
            simcity_recomp_world_catalog_enable(game, enabled);
            for (unsigned f = 0u; f < routes[i].frames; ++f) {
                SimCityRecompFrameResult result = {0};
                const uint16_t input = routes[i].input(f);
                const int advanced = f < first ?
                    simcity_recomp_advance_headless(game, input, 1u, &result) :
                    simcity_recomp_advance(game, input, 1u, &result);
                if (!advanced) goto finish;
                (void)simcity_recomp_audio_discard(game);
                if (f < first) continue;
                if (!read_wram16(game, 0x14u, &state)) goto finish;
                const int main_menu = simcity_recomp_world_menu_ready(game);
                ever_main |= main_menu != 0;
                if (enabled) {
                    const enum SimCityWorldCatalogScreen screen = simcity_recomp_world_catalog_view(game, NULL);
                    if (screen != (main_menu ? SIMCITY_WORLD_CATALOG_MAIN : SIMCITY_WORLD_CATALOG_HIDDEN) ||
                        simcity_recomp_stock_world_new_city_pending(game) || simcity_recomp_stock_world_active(game))
                        goto finish;
                }
                const uint32_t *direct = simcity_recomp_frame_bgra(game);
                const unsigned width = simcity_recomp_frame_width(game);
                const unsigned inset = (width - SIMCITY_RECOMP_FRAME_WIDTH) / 2u;
                uint64_t pixels = UINT64_C(14695981039346656037);
                if (result.frame_rendered) {
                    for (unsigned y = 0; y < SIMCITY_RECOMP_FRAME_HEIGHT; ++y) {
                        /* Only the bottom row of the unsaved main sign can
                           differ from the exact same unmodified guest frame. */
                        if (main_menu && y >= 191u && y < 205u) {
                            for (unsigned x = 0; x < width; ++x)
                                if (x < inset + 74u || x >= inset + 151u)
                                    pixels = (pixels ^ direct[y * width + x]) * UINT64_C(1099511628211);
                        } else for (unsigned x = 0; x < width; ++x)
                            pixels = (pixels ^ direct[y * width + x]) * UINT64_C(1099511628211);
                    }
                }
                if (!enabled) {
                    baseline[f] = (Receipt){pixels, state, (uint8_t)main_menu, result.frame_rendered};
                    continue;
                }
                unsigned prepared_width = 0;
                if (pixels != baseline[f].pixels || state != baseline[f].state ||
                    main_menu != baseline[f].main_menu || result.frame_rendered != baseline[f].rendered ||
                    (result.frame_rendered &&
                    (!simcity_recomp_video_snapshot_capture(snapshot, game) ||
                     !simcity_recomp_video_snapshot_render(snapshot, prepared, SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                                          &prepared_width) || width != prepared_width ||
                     memcmp(direct, prepared, (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*direct))))) {
                    snprintf(path, sizeof(path), "%s/native-menu-first-mismatch-%d.bmp", directory, wide);
                    (void)write_bmp(path, direct, width, SIMCITY_RECOMP_FRAME_HEIGHT);
                    fprintf(stderr, "Original menu mismatch route=%s frame=%u state=%04x baseline=%04x direct=%016llx expected=%016llx rendered=%u/%u\n",
                        routes[i].name, f, state, baseline[f].state, (unsigned long long)pixels,
                        (unsigned long long)baseline[f].pixels, result.frame_rendered, baseline[f].rendered);
                    goto finish;
                }
                if (state < 64u) states_seen |= UINT64_C(1) << state;
                if (result.frame_rendered) { ++checked; ++route_visible; }
                else ++intentional_blanks;
            }
            if (!ever_main) goto finish;
        }
        if (!route_visible || (states_seen & (UINT64_C(1) << 3u)) == 0u ||
            (states_seen & ~(UINT64_C(1) << 3u)) == 0u) goto finish;
        printf("original-menu-flicker route=%s wide=%d frames=%u state_mask=%016llx\n",
               routes[i].name, wide, route_visible, (unsigned long long)states_seen);
        fflush(stdout);
    }
    ok = 1;
finish:
    printf("%s original-menu flicker width=%u rendered_frames=%u matched_nonrenderable=%u last_state=%04x %s\n",
        ok ? "PASS" : "FAIL", wide ? 398u : 256u, checked, intentional_blanks, state, error);
    free(prepared);
    free(baseline);
    simcity_recomp_video_snapshot_destroy(snapshot);
    return ok;
}

static int stock_world_catalog_boot_matrix(SimCityRecomp *game, const char *directory, int all_land_only) {
    enum { CELLS = 240 * 200, MENU_FRAME = 1010 };
    uint16_t *expected = malloc(CELLS * sizeof(*expected));
    char menu_path[4096], archive[4096], error[256] = {0};
    WorldProbe boot = {0};
    int ok = 0;
    boot.hash = UINT64_C(1469598103934665603);
    if (!expected) goto finish;
    simcity_recomp_world_catalog_enable(game, 1);
    for (unsigned f = 0u; f < MENU_FRAME; ++f)
        if (!world_probe_step(game, &boot, pulse(f, 1000u) ? SIMCITY_INPUT_DOWN : new_city_input(f), 1u, 1, 0)) goto finish;
    snprintf(menu_path, sizeof(menu_path), "%s/stock-world-catalog-matrix-menu.scsnap", directory);
    if (simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_MAIN ||
        boot.modeled_underruns || boot.modeled_overflows ||
        !simcity_recomp_snapshot_save(game, menu_path, error, sizeof(error))) goto finish;
    const unsigned last_id = all_land_only ? 1u : SIMCITY_WORLD_MAP_TEMPLATE_COUNT;
    for (unsigned id = 1u; id <= last_id; ++id) {
        WorldProbe audio = {0};
        unsigned selected = 0u, funds = 0u, setup = 0u;
        uint64_t digest = UINT64_C(1469598103934665603);
        audio.hash = UINT64_C(1469598103934665603);
        if (!simcity_recomp_reset(game, error, sizeof(error)) ||
            !simcity_recomp_snapshot_load(game, menu_path, error, sizeof(error)) ||
            !world_probe_step(game, &audio, 0u, 16u, 1, 0) ||
            simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_MAIN ||
            !stock_press(game, &audio, SIMCITY_INPUT_DOWN, 12u) ||
            simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_FOCUSED ||
            !stock_press(game, &audio, SIMCITY_INPUT_B, 12u)) goto finish;
        const unsigned down = id - 1u, up = SIMCITY_WORLD_MAP_TEMPLATE_COUNT + 1u - id;
        for (unsigned step = 0u; step < (down <= up ? down : up); ++step)
            if (!stock_press(game, &audio, down <= up ? SIMCITY_INPUT_DOWN : SIMCITY_INPUT_UP, 8u)) goto finish;
        if (simcity_recomp_world_catalog_view(game, &selected) != SIMCITY_WORLD_CATALOG_LIST || selected != id) goto finish;
        if (all_land_only && !stock_catalog_capture(game, directory, "inland-plain-menu")) goto finish;
        if (!world_probe_step(game, &audio, SIMCITY_INPUT_B, 1u, 1, 0)) goto finish;
        for (unsigned f = 1u; f <= 1800u && !simcity_recomp_stock_world_active(game); ++f) {
            uint16_t state;
            if (!read_wram16(game, 0x14u, &state)) goto finish;
            if (!setup && state == 4u) setup = f;
            if (!world_probe_step(game, &audio, setup ? new_city_input(f - setup + 1022u) : 0u, 1u, 1, 0)) goto finish;
        }
        if (!setup || !simcity_recomp_stock_world_active(game) || !stock_funds(game, &funds) || funds != 20000u ||
            !simcity_recomp_world_map_template_tiles(id, expected, CELLS) ||
            audio.modeled_underruns || audio.modeled_overflows || simcity_recomp_audio_dropped_frames(game)) goto finish;
        snprintf(archive, sizeof(archive), "%s/stock-world-catalog-map-%u.scsnap", directory, id);
        const uint32_t city_frame = simcity_recomp_current_frame(game);
        if (!simcity_recomp_snapshot_save(game, archive, error, sizeof(error)) ||
            !simcity_recomp_reset(game, error, sizeof(error)) ||
            !simcity_recomp_stock_world_open_snapshot(game, archive, error, sizeof(error)) ||
            simcity_recomp_current_frame(game) != city_frame ||
            simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_HIDDEN) goto finish;
        for (unsigned at = 0u; at < CELLS; ++at) {
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, at % 240u, at / 240u, &tile) ||
                tile != expected[at] || (id == 1u && tile != 0u)) goto finish;
            digest = (digest ^ tile) * UINT64_C(1099511628211);
        }
        printf("stock-world-catalog-boot id=%u city_frame=%u tiles=%u hash=%016llX funds=%u reopened=1 underruns=0 overflows=0\n",
            id, city_frame, (unsigned)CELLS, (unsigned long long)digest, funds);
        fflush(stdout);
    }
    ok = 1;
finish:
    if (!ok) fprintf(stderr, "World Maps boot matrix stopped at frame %u: %s %s\n",
        simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    free(expected);
    return ok;
}

/* The stock guest sees the same controller stream, with only the added
   original cursor sound commands during catalog navigation. */
static int stock_catalog_menu_cue_probe(SimCityRecomp *game, const char *directory) {
    static const struct {
        const char *name;
        unsigned mode, held;
        uint16_t input;
        enum SimCityWorldCatalogScreen screen;
        unsigned selected;
    } cases[] = {
        {"root-idle", 0u, 0u, 0u, SIMCITY_WORLD_CATALOG_MAIN, 1u},
        {"native-up", 3u, 2u, SIMCITY_INPUT_UP, SIMCITY_WORLD_CATALOG_HIDDEN, 1u},
        {"highlight-world-maps", 0u, 2u, SIMCITY_INPUT_DOWN, SIMCITY_WORLD_CATALOG_FOCUSED, 1u},
        {"focused-idle", 1u, 0u, 0u, SIMCITY_WORLD_CATALOG_FOCUSED, 1u},
        {"return-to-scenario", 1u, 2u, SIMCITY_INPUT_UP, SIMCITY_WORLD_CATALOG_MAIN, 1u},
        {"picker-idle", 2u, 0u, 0u, SIMCITY_WORLD_CATALOG_LIST, 1u},
        {"picker-down", 2u, 2u, SIMCITY_INPUT_DOWN, SIMCITY_WORLD_CATALOG_LIST, 2u},
        {"picker-down-held", 2u, 12u, SIMCITY_INPUT_DOWN, SIMCITY_WORLD_CATALOG_LIST, 2u},
        {"picker-up-wrap", 2u, 2u, SIMCITY_INPUT_UP, SIMCITY_WORLD_CATALOG_LIST, 9u},
        {"picker-opposed", 2u, 2u, SIMCITY_INPUT_UP | SIMCITY_INPUT_DOWN, SIMCITY_WORLD_CATALOG_LIST, 1u},
    };
    uint64_t pcm[sizeof(cases) / sizeof(*cases)] = {0};
    char path[4096], error[256] = {0};
    snprintf(path, sizeof(path), "%s/stock-world-catalog-matrix-menu.scsnap", directory);
    for (unsigned i = 0u; i < sizeof(cases) / sizeof(*cases); ++i) {
        WorldProbe audio = {0};
        unsigned selected = 0u;
        if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) return 0;
        simcity_recomp_world_catalog_enable(game, cases[i].mode != 3u);
        if (!world_probe_step(game, &audio, 0u, 16u, 1, 0) ||
            !simcity_recomp_world_menu_ready(game)) return 0;
        if ((cases[i].mode == 1u || cases[i].mode == 2u) &&
            !stock_press(game, &audio, SIMCITY_INPUT_DOWN, 48u)) return 0;
        if (cases[i].mode == 2u && !stock_press(game, &audio, SIMCITY_INPUT_B, 16u)) return 0;
        audio = (WorldProbe){0};
        audio.hash = UINT64_C(1469598103934665603);
        char trace[4096], line[512];
        snprintf(trace, sizeof(trace), "%s/menu-cue-%s.log", directory, cases[i].name);
        if (!simcity_recomp_log_open(trace, error, sizeof(error))) return 0;
        const int advanced = world_probe_step(game, &audio, cases[i].input, cases[i].held, 1, 0) &&
            world_probe_step(game, &audio, 0u, 60u - cases[i].held, 1, 0);
        simcity_recomp_log_close();
        if (!advanced ||
            simcity_recomp_world_catalog_view(game, &selected) != cases[i].screen ||
            selected != cases[i].selected ||
            audio.modeled_underruns || audio.modeled_overflows || simcity_recomp_audio_dropped_frames(game))
            return 0;
        FILE *log = fopen(trace, "rb");
        unsigned commands = 0u;
        if (!log) return 0;
        while (fgets(line, sizeof(line), log))
            commands += strstr(line, "event=menu-cursor-sound") != NULL &&
                        strstr(line, "port=2143 command=07") != NULL;
        const int read_error = ferror(log);
        if (fclose(log) != 0 || read_error) return 0;
        pcm[i] = audio.hash;
        printf("catalog-menu-cue %s commands=%u frames=%llu pcm=%016llX\n", cases[i].name, commands,
            (unsigned long long)audio.frames, (unsigned long long)pcm[i]);
        const int expects_tick = i != 0u && i != 3u && i != 5u && i != 9u;
        if (commands != (unsigned)expects_tick) return 0;
    }
    const int ok = pcm[1] != pcm[0] && pcm[2] != pcm[0] &&
        pcm[4] != pcm[3] && pcm[6] != pcm[5] && pcm[8] == pcm[6] &&
        pcm[7] == pcm[6] && pcm[9] == pcm[5];
    printf("catalog-menu-cue same_native_command=1 entered=%d returned=%d picker_both=%d no_hold_repeat=%d opposed_silent=%d pass=%d\n",
        pcm[2] != pcm[0], pcm[4] != pcm[3], pcm[6] != pcm[5] && pcm[8] == pcm[6],
        pcm[7] == pcm[6], pcm[9] == pcm[5], ok);
    return ok;
}

static int stock_world_catalog_native_passthrough(SimCityRecomp *game, const char *directory) {
    enum { WRAM = 128 * 1024 };
    uint8_t *reference = malloc(WRAM), *actual = malloc(WRAM);
    char path[4096], error[256] = {0};
    uint64_t ref_pcm = 0u, ref_pcm_frames = 0u, ref_clocks = 0u, ref_work = 0u;
    int pass = 0;
    if (!reference || !actual) goto finish;
    snprintf(path, sizeof(path), "%s/stock-world-catalog-matrix-menu.scsnap", directory);
    for (int catalog = 0; catalog <= 1; ++catalog) {
        WorldProbe audio = {0};
        unsigned setup = 0u, funds = 0u, canceled = 0u;
        uint16_t focus = 0u;
        audio.hash = UINT64_C(1469598103934665603);
        simcity_recomp_world_catalog_enable(game, catalog);
        if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) goto finish;
        for (unsigned f = 0u; f < 1880u; ++f) {
            uint16_t input = 0u, state = 0u;
            if (!read_wram16(game, 0x14u, &state)) goto finish;
            if (!setup && state == 4u) setup = f;
            if (setup) input = new_city_input(f - setup + 1022u);
            else if (pulse(f, 125u)) input = SIMCITY_INPUT_UP;
            else if (pulse(f, 145u)) input = SIMCITY_INPUT_B;
            else if (catalog) {
                if (pulse(f, 20u) || pulse(f, 60u)) input = SIMCITY_INPUT_DOWN;
                else if (pulse(f, 40u)) input = SIMCITY_INPUT_B;
                else if (pulse(f, 80u)) input = SIMCITY_INPUT_X;
                else if (pulse(f, 100u)) input = SIMCITY_INPUT_UP;
                if (f == 70u) {
                    unsigned selected = 0u;
                    if (simcity_recomp_world_catalog_view(game, &selected) != SIMCITY_WORLD_CATALOG_LIST ||
                        selected != 2u) goto finish;
                }
                if (f == 110u) canceled = simcity_recomp_world_catalog_view(game, NULL) == SIMCITY_WORLD_CATALOG_MAIN;
            }
            if (!world_probe_step(game, &audio, input, 1u, 1, 0)) goto finish;
        }
        if (!setup || (catalog && !canceled) || !read_wram16(game, 0x0201u, &focus) || focus != 0xffu ||
            !stock_funds(game, &funds) || funds != 20000u || simcity_recomp_stock_world_active(game) ||
            simcity_recomp_stock_world_new_city_pending(game) || audio.modeled_underruns || audio.modeled_overflows ||
            !simcity_recomp_read_wram(game, 0u, catalog ? actual : reference, WRAM)) goto finish;
        if (!catalog) {
            ref_pcm = audio.hash;
            ref_pcm_frames = audio.frames;
            ref_clocks = simcity_recomp_master_clock(game);
            ref_work = simcity_recomp_instruction_count(game);
        } else {
            pass = audio.hash != ref_pcm && audio.frames == ref_pcm_frames &&
                simcity_recomp_master_clock(game) == ref_clocks &&
                simcity_recomp_instruction_count(game) == ref_work && memcmp(reference, actual, WRAM) == 0;
        }
        printf("stock-world-catalog-native catalog=%d canceled=%u setup=%u funds=%u pcm_hash=%016llX expanded=0\n",
            catalog, canceled, setup, funds, (unsigned long long)audio.hash);
    }
finish:
    printf("stock-world-catalog-native-parity pass=%d cues_with_same_wram_and_clocks=%d %s\n", pass, pass, error);
    free(actual);
    free(reference);
    return pass;
}

static int stock_world_new_city_probe(SimCityRecomp *game, const char *directory) {
    enum { SW = 120, SH = 100, TARGET_X = 128, TARGET_Y = 108 };
    uint32_t menu_frame, city_frame;
    unsigned clear = 0u, scenery = 0u, funds = 0u;
    int x = 0, y = 0;
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    if (!stock_world_boot_new_city(game, &audio, &menu_frame, &city_frame) ||
        !stock_funds(game, &funds) || !funds ||
        !stock_cell(game, &x, &y)) goto finish;
    for (unsigned row = 0u; row < SH; ++row)
        for (unsigned col = 0u; col < SW; ++col) {
            uint16_t stock, a, b, c, d;
            if (!read_wram16(game, 0x10200u + (row * SW + col) * 2u, &stock) ||
                !simcity_recomp_stock_world_tile(game, col, row, &a) ||
                !simcity_recomp_stock_world_tile(game, col + SW, row, &b) ||
                !simcity_recomp_stock_world_tile(game, col, row + SH, &c) ||
                !simcity_recomp_stock_world_tile(game, col + SW, row + SH, &d) ||
                a != b || a != c || a != d || a >= 0x28u ||
                (stock & 0x03ffu) != a) goto finish;
            if (a == 0u) ++clear;
            else ++scenery;
        }
    printf("stock-world-new-city menu_frame=%u city_frame=%u funds=%u clear=%u scenery=%u start=(%d,%d)\n",
           menu_frame, city_frame, funds, clear, scenery, x, y);
    fflush(stdout);
    if (!clear || !scenery) goto finish;
    for (unsigned f = 0u; f < 2100u && (x < TARGET_X || y < TARGET_Y); ++f) {
        const uint16_t input = x < TARGET_X ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_DOWN;
        if (!world_probe_step(game, &audio, input, 1u, 1, 0) ||
            !stock_cell(game, &x, &y)) goto finish;
    }
    if (x < TARGET_X || y < TARGET_Y ||
        !simcity_recomp_audio_static_status(game, &status) ||
        status.pcm_overflows || simcity_recomp_audio_dropped_frames(game) ||
        audio.modeled_underruns || audio.modeled_overflows) goto finish;
    snprintf(path, sizeof(path), "%s/stock-world-new-city.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                   SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-world-new-city.scsnap", directory);
    const uint64_t saved_clock = simcity_recomp_master_clock(game);
    const uint32_t saved_frame = simcity_recomp_current_frame(game);
    uint16_t saved_tile = 0u, restored_tile = 0u;
    if (!simcity_recomp_stock_world_tile(game, (unsigned)x, (unsigned)y, &saved_tile))
        goto finish;
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error)) ||
        !world_probe_step(game, &audio, SIMCITY_INPUT_LEFT, 35u, 1, 0) ||
        !simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_active(game) ||
        simcity_recomp_master_clock(game) != saved_clock ||
        simcity_recomp_current_frame(game) != saved_frame) goto finish;
    if (!simcity_recomp_reset(game, error, sizeof(error)) ||
        simcity_recomp_stock_world_active(game) ||
        simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        simcity_recomp_stock_world_active(game) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_active(game) ||
        simcity_recomp_master_clock(game) != saved_clock ||
        simcity_recomp_current_frame(game) != saved_frame ||
        !simcity_recomp_stock_world_tile(game, (unsigned)x, (unsigned)y, &restored_tile) ||
        restored_tile != saved_tile) goto finish;
    printf("stock-world-new-city-ready pos=(%d,%d) snapshot_restored=1 cold_open=1 pcm=%llu modeled_underruns=%u overflows=%llu\n",
           x, y, (unsigned long long)audio.frames, audio.modeled_underruns,
           (unsigned long long)status.pcm_overflows);
    ok = 1;
finish:
    if (!ok) fprintf(stderr, "Stock World Map clean startup failed: menu=%u city=%u frame=%u pos=(%d,%d) %s %s\n",
                     menu_frame, city_frame, simcity_recomp_current_frame(game), x, y,
                     error, simcity_recomp_last_error(game));
    return ok;
}

/* Compare existing title-route isolation before exposing the new selector.
   Deliberately arms the current F9 mechanism and chooses another stock
   item. Report what happens without modifying the original inputs. */
static int stock_world_menu_branch_audit(SimCityRecomp *game) {
    const struct { const char *name; uint16_t (*input)(uint32_t); unsigned frames; } routes[] = {
        {"practice", practice_input, 1750u}, {"scenario", scenario_input, 2750u}
    };
    char error[256] = {0};
    for (unsigned route = 0; route < sizeof(routes) / sizeof(routes[0]); ++route) {
        WorldProbe audio = {0};
        unsigned armed = 0u;
        uint16_t focus = 0u, year = 0u;
        audio.hash = UINT64_C(1469598103934665603);
        if (!simcity_recomp_reset(game, error, sizeof(error))) return 0;
        for (unsigned f = 0u; f < routes[route].frames; ++f) {
            if (!armed && simcity_recomp_world_menu_ready(game)) {
                if (!simcity_recomp_stock_world_request_new_city(game)) return 0;
                armed = simcity_recomp_current_frame(game);
            }
            if (!world_probe_step(game, &audio, routes[route].input(f), 1u, 1, 0)) return 0;
        }
        if (!read_wram16(game, 0x0201u, &focus) || !read_wram16(game, 0x0b53u, &year)) return 0;
        const int active = simcity_recomp_stock_world_active(game);
        const int pending = simcity_recomp_stock_world_new_city_pending(game);
        printf("stock-world-menu-branch route=%s armed_frame=%u focus=%04X year=%u expanded=%d pending=%d underruns=%u overflows=%u\n",
            routes[route].name, armed, focus, year, active, pending, audio.modeled_underruns, audio.modeled_overflows);
        if (!armed || focus != 0xffu || active || pending || audio.modeled_underruns || audio.modeled_overflows) return 0;
    }
    WorldProbe audio = {0};
    unsigned armed = 0u, left_menu = 0u, returned = 0u;
    uint16_t previous_state = UINT16_MAX;
    audio.hash = UINT64_C(1469598103934665603);
    if (!simcity_recomp_reset(game, error, sizeof(error))) return 0;
    for (unsigned f = 0u; f < 2050u; ++f) {
        uint16_t state = 0u;
        if (!read_wram16(game, 0x14u, &state)) return 0;
        const int ready = simcity_recomp_world_menu_ready(game);
        if (ready && !armed) {
            if (!simcity_recomp_stock_world_request_new_city(game)) return 0;
            armed = simcity_recomp_current_frame(game);
        }
        if (armed && !ready && simcity_recomp_stock_world_new_city_pending(game)) left_menu = 1u;
        if (state != previous_state) {
            printf("stock-world-setup-state frame=%u state=%04X ready=%d pending=%d\n", f, state, ready,
                simcity_recomp_stock_world_new_city_pending(game));
            previous_state = state;
        }
        if (left_menu && ready) { returned = simcity_recomp_current_frame(game); break; }
        const uint16_t input = f < 1100u ? new_city_input(f) : pulse(f, 1700u) ? SIMCITY_INPUT_X : 0u;
        if (!world_probe_step(game, &audio, input, 1u, 1, 0)) return 0;
    }
    const int pending = simcity_recomp_stock_world_new_city_pending(game);
    const int active = simcity_recomp_stock_world_active(game);
    printf("stock-world-menu-branch route=cancel-new-city armed_frame=%u returned_frame=%u expanded=%d pending=%d underruns=%u overflows=%u\n",
        armed, returned, active, pending, audio.modeled_underruns, audio.modeled_overflows);
    return armed && returned && !pending && !active && !audio.modeled_underruns && !audio.modeled_overflows;
}

static int stock_world_plant_lot(SimCityRecomp *game, unsigned x, unsigned y, int built) {
    for (unsigned dy = 0u; dy < 4u; ++dy)
        for (unsigned dx = 0u; dx < 4u; ++dx) {
            uint16_t tile;
            const unsigned expected = built ? 0x287u + dy * 4u + dx : 0u;
            if (!simcity_recomp_stock_world_tile(game, x + dx, y + dy, &tile) ||
                (tile & 0x03ffu) != expected) return 0;
        }
    return 1;
}

static int stock_world_find_plant_lot(SimCityRecomp *game, int left, int top,
                                    int *x, int *y) {
    int best = 1000;
    for (int dy = 8; dy < 88; ++dy)
        for (int dx = 8; dx < 108; ++dx) {
            const int distance = abs(dx - 60) + abs(dy - 50);
            if (distance >= best) continue;
            if (stock_world_plant_lot(game, (unsigned)(left + dx), (unsigned)(top + dy), 0)) {
                best = distance;
                *x = left + dx;
                *y = top + dy;
            }
        }
    return best < 1000;
}

enum { TOUR_WIDTH = 240, TOUR_HEIGHT = 200, TOUR_CELLS = TOUR_WIDTH * TOUR_HEIGHT };
typedef struct TourRoadWork {
    uint16_t previous[TOUR_CELLS], queue[TOUR_CELLS], path[TOUR_CELLS];
    uint8_t target[TOUR_CELLS], passable[TOUR_CELLS];
} TourRoadWork;

static int tour_road_tile(uint16_t tile) {
    tile &= 0x03ffu;
    return (tile >= 0x30u && tile <= 0x5eu && tile != 0x3fu && tile != 0x4fu) ||
           tile == 0x7du || tile == 0x7eu;
}

static int tour_rail_tile(uint16_t tile) {
    tile &= 0x03ffu;
    return (tile >= 0x70u && tile <= 0x7eu) ||
           tile == 0x6du || tile == 0x6eu || (tile >= 0x34bu && tile <= 0x353u);
}

static int tour_power_tile(uint16_t tile) {
    tile &= 0x03ffu;
    return (tile >= 0x60u && tile <= 0x6eu) ||
           tile == 0x3du || tile == 0x3eu || tile == 0x4du || tile == 0x4eu ||
           tile == 0x5du || tile == 0x5eu;
}

/* The stock crossover tables accept only straight segments. A crossing
   must be traversed perpendicular to the existing road, or to the track
   when wiring over rail. */
static unsigned tour_crossing(uint16_t tile, unsigned tool) {
    const unsigned code = tile & 0x03ffu;
    if (tool == 1u) {
        if (code == 0x62u || code == 0x72u) return 4u;
        if (code == 0x63u || code == 0x73u) return 3u;
    }
    if (tool == 2u || tool == 3u) {
        if (code == 0x32u || code == 0x42u || code == 0x52u) return 4u;
        if (code == 0x33u || code == 0x43u || code == 0x53u) return 3u;
        if (tool == 3u && code == 0x72u) return 4u;
        if (tool == 3u && code == 0x73u) return 3u;
    }
    return 0u;
}

/* Search clear ground or existing road tiles. Start/end on the edge of
   either plant footprint, never inside a building or outside the world. */
static unsigned stock_world_road_route(SimCityRecomp *game, TourRoadWork *work,
                                      const int from[2], const int to[2],
                                      int attach_to_existing_road,
                                      int (*matches)(uint16_t), unsigned tool) {
    unsigned head = 0u, tail = 0u, count = 0u;
    for (unsigned i = 0u; i < TOUR_CELLS; ++i) {
        uint16_t tile;
        if (!simcity_recomp_stock_world_tile(game, i % TOUR_WIDTH, i / TOUR_WIDTH, &tile))
            return 0u;
        work->passable[i] = matches(tile) ? 2u : (tile & 0x03ffu) == 0u ? 1u :
                            (uint8_t)tour_crossing(tile, tool);
        work->previous[i] = UINT16_MAX;
        work->target[i] = 0u;
    }
    for (unsigned n = 0; n < 2u; ++n) {
        const int *site = n ? to : from;
        for (int offset = 0; offset < 4; ++offset) {
            const int columns[] = {site[0] + offset, site[0] + offset, site[0] - 1, site[0] + 4};
            const int rows[] = {site[1] - 1, site[1] + 4, site[1] + offset, site[1] + offset};
            for (unsigned side = 0u; side < 4u; ++side) {
                const unsigned x = (unsigned)columns[side], y = (unsigned)rows[side];
                if (x >= TOUR_WIDTH || y >= TOUR_HEIGHT) continue;
                const unsigned id = y * TOUR_WIDTH + x;
                if (!work->passable[id] || work->passable[id] > 2u) continue;
                if (n) work->target[id] = 1u;
                else if (!attach_to_existing_road || work->passable[id] == 2u) {
                    work->previous[id] = (uint16_t)id;
                    work->queue[tail++] = (uint16_t)id;
                }
            }
        }
    }
    while (head < tail) {
        const unsigned id = work->queue[head++];
        const unsigned x = id % TOUR_WIDTH, y = id / TOUR_WIDTH;
        if (work->target[id]) {
            unsigned walk = id;
            do {
                work->path[count++] = (uint16_t)walk;
                const unsigned next = work->previous[walk];
                if (next == walk) break;
                walk = next;
            } while (count < TOUR_CELLS);
            return count;
        }
        const unsigned neighbors[] = {x > 0 ? id - 1u : id, x + 1u < TOUR_WIDTH ? id + 1u : id,
            y > 0 ? id - TOUR_WIDTH : id, y + 1u < TOUR_HEIGHT ? id + TOUR_WIDTH : id};
        for (unsigned n = 0; n < 4u; ++n) {
            const unsigned next = neighbors[n];
            const unsigned direction = n < 2u ? 3u : 4u;
            if (!work->passable[next] || work->previous[next] != UINT16_MAX) continue;
            if ((work->passable[id] > 2u && work->passable[id] != direction) ||
                (work->passable[next] > 2u && work->passable[next] != direction))
                continue;
            work->previous[next] = (uint16_t)id;
            work->queue[tail++] = (uint16_t)next;
        }
    }
    return 0u;
}

static int stock_world_select_tool(SimCityRecomp *game, WorldProbe *audio, unsigned wanted) {
    uint16_t x, y, tool, focus, hud;
    /* One directional tap moves the stock cursor eight pixels. When focus
       returns from the map, the cursor can start at the far screen edge,
       so allow a full diagonal's worth of Manhattan moves plus settling. */
    enum { TOOL_NAV_LIMIT = (SIMCITY_RECOMP_WIDESCREEN_WIDTH + SIMCITY_RECOMP_FRAME_HEIGHT + 7u) / 8u + 8u };
    uint16_t trace[TOOL_NAV_LIMIT][2];
    /* The original toolbar puts Coal before Nuclear and Airport. Its
       icon order differs from the construction tool IDs for Coal/Airport. */
    const unsigned slot = wanted == 12u ? 14u : wanted == 14u ? 12u : wanted;
    const unsigned tx = slot & 1u ? 32u : 24u;
    const unsigned ty = 56u + (slot & ~1u) * 8u;
    if (!read_wram16(game, 0x01d7u, &hud) ||
        (!hud && !stock_press(game, audio, SIMCITY_INPUT_X, 60u)) ||
        !read_wram16(game, 0x0201u, &focus) ||
        (focus == 0xffu && !stock_press(game, audio, SIMCITY_INPUT_SELECT, 18u))) return 0;
    for (unsigned attempts = 0u; attempts < TOOL_NAV_LIMIT; ++attempts) {
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
        trace[attempts][0] = x;
        trace[attempts][1] = y;
        const unsigned toolbar = x >= 15u && x < 47u && y >= 43u ?
            ((x - 15u) >> 4u) | (((y - 43u) >> 3u) & ~1u) : 255u;
        if (toolbar == slot && y >= ty && y < ty + 8u) {
            if (!stock_press(game, audio, SIMCITY_INPUT_B, 18u) ||
                !read_wram16(game, 0x0201u, &focus) ||
                (focus != 0xffu && !stock_press(game, audio, SIMCITY_INPUT_SELECT, 18u)) ||
                !read_wram16(game, 0x01d7u, &hud) ||
                (hud && !stock_press(game, audio, SIMCITY_INPUT_X, 60u)) ||
                !read_wram16(game, 0x0201u, &focus) || focus != 0xffu ||
                !read_wram16(game, 0x020du, &tool)) {
                printf("stock-tool-confirm-failed requested=%u toolbar=(%u,%u) focus=%04X hud=%04X\n",
                       wanted, x, y, focus, hud);
                return 0;
            }
            printf("stock-world-tour tool=%u requested=%u toolbar=(%u,%u)\n",
                   tool, wanted, x, y);
            return tool == wanted;
        }
        const uint16_t dir = y < ty ? SIMCITY_INPUT_DOWN : y >= ty + 8u ? SIMCITY_INPUT_UP :
                             x < tx ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
        if (!stock_press(game, audio, dir, 18u)) return 0;
    }
    printf("stock-tool-navigation-exhausted requested=%u slot=%u target=(%u,%u) path=",
           wanted, slot, tx, ty);
    for (unsigned i = 0u; i < TOOL_NAV_LIMIT; ++i)
        printf("%s%u,%u", i ? ";" : "", trace[i][0], trace[i][1]);
    puts("");
    return 0;
}

typedef struct RoadTapTrace {
    SimCityRecomp *game;
    unsigned step, reads, writes;
    uint32_t last_pc;
} RoadTapTrace;

static void stock_road_tap_trace(void *opaque, uint32_t pc,
                                 uint16_t offset, int write, int dma) {
    RoadTapTrace *trace = opaque;
    if (dma || pc < 0x01b400u || pc >= 0x01be90u) return;
    if (write) ++trace->writes;
    else ++trace->reads;
    if (pc != trace->last_pc && (pc == 0x01ba78u || write) && offset % 2u == 0u) {
        uint16_t x = 0, y = 0;
        (void)read_wram16(trace->game, 0x0205u, &x);
        (void)read_wram16(trace->game, 0x0207u, &y);
        printf("road-retry step=%u pc=%06X %s raw_offset=%04X anchor=(%u,%u)\n",
               trace->step, pc, write ? "write" : "read", offset, x, y);
        trace->last_pc = pc;
    }
}

static void stock_road_audit(SimCityRecomp *game, const uint8_t *prior,
                             const char *stage, unsigned target_x, unsigned target_y) {
    unsigned away = 0u;
    if (!prior) return;
    for (unsigned i = 0u; i < TOUR_CELLS; ++i) {
        uint16_t tile = 0u;
        if (i == target_y * TOUR_WIDTH + target_x || prior[i]) continue;
        if (simcity_recomp_stock_world_tile(game, i % TOUR_WIDTH, i / TOUR_WIDTH, &tile) &&
            tour_road_tile(tile))
            ++away;
    }
    printf("road-repro audit=%s frame=%u new_roads_away=%u\n", stage,
           simcity_recomp_current_frame(game), away);
}

static void stock_trace_ghost_address(void *opaque, uint32_t pc,
                                      uint16_t offset, int write, int dma) {
    const SimCityRecomp *game = opaque;
    if (write && (offset & 0xfffeu) == 0x0278u)
        printf("road-repro guest-write frame=%u pc=%06X raw_offset=%04X dma=%d\n",
               simcity_recomp_current_frame(game), pc, offset, dma);
}

static int stock_road_trace_hud(SimCityRecomp *game, WorldProbe *audio, int toggle) {
    uint16_t baseline, tile;
    if (!simcity_recomp_stock_world_tile(game, 60u, 0u, &baseline)) return 0;
    for (unsigned i = 0u; i < 62u; ++i) {
        const uint16_t input = toggle && i < 2u ? SIMCITY_INPUT_X : 0u;
        if (!simcity_recomp_advance_stock_map_trace(game, input, 1u,
                 stock_trace_ghost_address, game) ||
            !drain_pcm(game, &audio->hash, &audio->frames) ||
            !simcity_recomp_stock_world_tile(game, 60u, 0u, &tile)) return 0;
        if (tile != baseline) {
            printf("road-repro phase=%s step=%u frame=%u watched=(60,0) before=%04X after=%04X\n",
                   toggle ? "HUD" : "idle", i, simcity_recomp_current_frame(game),
                   baseline, tile);
            baseline = tile;
        }
    }
    return 1;
}

static int stock_road_retry(SimCityRecomp *game, WorldProbe *audio,
                           unsigned x, unsigned y, uint16_t *tile, const uint8_t *audit,
                           int (*matches)(uint16_t)) {
    RoadTapTrace trace = {0};
    uint16_t notice = 0u, hud = 0u;
    trace.game = game;
    if (!read_wram16(game, 0x0395u, &notice)) return 0;
    if (notice && !stock_acknowledge_build_notice(game, audio, "feeder-retry")) return 0;
    stock_road_audit(game, audit, "after-notice", x, y);
    /* Wright restores the stock toolbar when the notice closes. When it
       overlaps the cursor, B goes to the toolbar rather than the map. */
    if (!read_wram16(game, 0x01d7u, &hud)) return 0;
    if (hud) {
        if (!(audit ? stock_road_trace_hud(game, audio, 1)
                    : stock_press(game, audio, SIMCITY_INPUT_X, 60u)) ||
            !read_wram16(game, 0x01d7u, &hud) || hud) return 0;
    }
    stock_road_audit(game, audit, "after-hud", x, y);
    if (!stock_move_axis(game, audio, (int)x, 0) ||
        !stock_move_axis(game, audio, (int)y, 1)) return 0;
    stock_road_audit(game, audit, "after-navigation", x, y);
    if (!world_probe_step(game, audio, 0u, 24u, 0, 0)) return 0;
    stock_road_audit(game, audit, "before-build", x, y);
    for (unsigned i = 0u; i < 16u; ++i) {
        uint16_t live_x = 0, live_y = 0, view_x = 0, view_y = 0, focus = 0;
        trace.step = i;
        const uint64_t before = audio->frames;
        const uint16_t button = i < 2u ? SIMCITY_INPUT_B : 0u;
#ifdef _WIN32
        if (live_construction_enabled && !live_construction_before(game, audio)) return 0;
#endif
        if (!simcity_recomp_advance_stock_map_trace(game, button,
                1u, stock_road_tap_trace, &trace) || !drain_pcm(game, &audio->hash, &audio->frames) ||
            (audio->input_tape && !world_probe_record_input(game, audio, button)) ||
            !simcity_recomp_stock_world_tile(game, x, y, tile))
            return 0;
        if (audio->measure_all) world_probe_measure_pcm(audio, before);
#ifdef _WIN32
        if (live_construction_enabled && !live_construction_after(game, audio)) return 0;
#endif
        if (i < 3u || matches(*tile)) {
            uint16_t buttons = 0, action = 0, edges = 0, modal = 0;
            uint16_t scrolling = 0, cursor_moving = 0, disaster = 0;
            (void)read_wram16(game, 0x01ebu, &live_x);
            (void)read_wram16(game, 0x01edu, &live_y);
            (void)read_wram16(game, 0x01bdu, &view_x);
            (void)read_wram16(game, 0x01bfu, &view_y);
            (void)read_wram16(game, 0x0201u, &focus);
            (void)read_wram16(game, 0x011bu, &buttons);
            (void)read_wram16(game, 0x00c5u, &action);
            (void)read_wram16(game, 0x00c9u, &edges);
            (void)read_wram16(game, 0x0395u, &notice);
            (void)read_wram16(game, 0x0383u, &modal);
            (void)read_wram16(game, 0x01f5u, &scrolling);
            (void)read_wram16(game, 0x01ffu, &cursor_moving);
            (void)read_wram16(game, 0x0387u, &disaster);
            printf("road-retry step=%u cursor_px=(%u,%u) view=(%d,%d) focus=%04X tile=%04X buttons=%04X edges=%04X action=%u notice=%u modal=%u disaster=%u scroll=%u moving=%u\n",
                   i, live_x, live_y, (int)(int16_t)view_x, (int)(int16_t)view_y, focus, *tile,
                   buttons, edges, action, notice, modal, disaster, scrolling, cursor_moving);
        }
        if (matches(*tile)) return 1;
    }
    printf("road-retry reads=%u writes=%u result=unchanged\n", trace.reads, trace.writes);
    return 0;
}

static int stock_world_road_repro_probe(SimCityRecomp *game, const char *directory) {
    char path[4096], error[256] = {0};
    WorldProbe audio = {0};
    uint16_t tile = 0u;
    int x = 0, y = 0;
    snprintf(path, sizeof(path), "%s/stock-world-road-repro.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !stock_cell(game, &x, &y) || x < 0 || y < 0) {
        fprintf(stderr, "Unable to reopen the road reproducer: %s\n", error);
        return 0;
    }
    uint8_t *prior = malloc(TOUR_CELLS);
    if (!prior) return 0;
    int ok = 0;
    unsigned new_roads = 0u, away = 0u;
    for (unsigned i = 0u; i < TOUR_CELLS; ++i) {
        if (!simcity_recomp_stock_world_tile(game, i % TOUR_WIDTH, i / TOUR_WIDTH, &tile))
            goto done;
        prior[i] = (uint8_t)tour_road_tile(tile);
    }
    if (!stock_road_trace_hud(game, &audio, 0)) goto done;
    stock_road_audit(game, prior, "idle-control", (unsigned)x, (unsigned)y);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) goto done;
    if (!stock_road_retry(game, &audio, (unsigned)x, (unsigned)y, &tile, prior, tour_road_tile)) goto done;
    for (unsigned i = 0u; i < TOUR_CELLS; ++i) {
        if (!simcity_recomp_stock_world_tile(game, i % TOUR_WIDTH, i / TOUR_WIDTH, &tile))
            goto done;
        if (!prior[i] && tour_road_tile(tile)) {
            ++new_roads;
            if (i != (unsigned)y * TOUR_WIDTH + (unsigned)x) {
                ++away;
                if (away <= 8u)
                    printf("road-repro new road outside target (%u,%u) tile=%04X\n",
                           i % TOUR_WIDTH, i / TOUR_WIDTH, tile);
            }
        }
    }
    printf("road-repro target=(%d,%d) new_roads=%u unexpected=%u\n", x, y, new_roads, away);
    ok = new_roads == 1u && away == 0u;
done:
    free(prior);
    return ok;
}

static int stock_world_tour_links(SimCityRecomp *game, WorldProbe *audio,
    const int (*sites)[2], const char *directory, unsigned tool,
    const char *label, int (*matches)(uint16_t)) {
    TourRoadWork *work = malloc(sizeof(*work));
    char error[256] = {0}, path[4096];
    unsigned built = 0u, seam_x = 0u, seam_y = 0u;
    int ok = 0;
    if (!work || !stock_world_select_tool(game, audio, tool)) goto finish;
    for (unsigned pair = 1u; pair < 4u; ++pair) {
        const unsigned count = stock_world_road_route(game, work, sites[pair - 1u],
                                                      sites[pair], pair > 1u, matches, tool);
        if (!count) {
            fprintf(stderr, "No permitted %s route between plant %u and %u\n", label, pair, pair + 1u);
            goto finish;
        }
        for (unsigned i = count; i > 0u; --i) {
            const unsigned id = work->path[i - 1u], x = id % TOUR_WIDTH, y = id / TOUR_WIDTH;
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto finish;
            if (!matches(tile)) {
                if (!stock_move_axis(game, audio, (int)x, 0) ||
                    !stock_move_axis(game, audio, (int)y, 1) ||
                    !stock_press(game, audio, SIMCITY_INPUT_B, 9u) ||
                    !simcity_recomp_stock_world_tile(game, x, y, &tile) || !matches(tile)) {
                    int cursor_x = 0, cursor_y = 0;
                    uint16_t anchor_x = 0, anchor_y = 0, selected = 0, underlying = 0;
                    (void)stock_cell(game, &cursor_x, &cursor_y);
                    (void)read_wram16(game, 0x0205u, &anchor_x);
                    (void)read_wram16(game, 0x0207u, &anchor_y);
                    (void)read_wram16(game, 0x020du, &selected);
                    (void)read_wram16(game, 0x024du, &underlying);
                    fprintf(stderr, "%s placement failed at (%u,%u): cursor=(%d,%d) anchor=(%u,%u) tool=%u tile=%04X examined=%04X\n",
                            label, x, y, cursor_x, cursor_y, anchor_x, anchor_y, selected, tile, underlying);
                    snprintf(path, sizeof(path), "%s/stock-world-%s-repro.scsnap", directory, label);
                    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error)))
                        goto finish;
                    if (!stock_road_retry(game, audio, x, y, &tile, NULL, matches)) goto finish;
                }
                ++built;
            }
            if (i > 1u) {
                const unsigned next = work->path[i - 2u];
                seam_x += (x < 120u) != (next % TOUR_WIDTH < 120u);
                seam_y += (y < 100u) != (next / TOUR_WIDTH < 100u);
            }
        }
        /* Check all tiles again after native neighbor retile operations. */
        for (unsigned i = 0u; i < count; ++i) {
            const unsigned id = work->path[i];
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, id % TOUR_WIDTH, id / TOUR_WIDTH, &tile) ||
                !matches(tile)) goto finish;
        }
        snprintf(path, sizeof(path), "%s/stock-world-tour-%s-%u.bmp", directory, label, pair);
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game),
                       simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
        printf("stock-world-tour %s_link=%u tiles=%u built_total=%u\n", label, pair, count, built);
        fflush(stdout);
    }
    printf("stock-world-tour %s_tiles=%u horizontal_boundary=%u vertical_boundary=%u\n",
           label, built, seam_y, seam_x);
    ok = seam_x && seam_y;
finish:
    if (!ok && error[0]) fprintf(stderr, "Road capture: %s\n", error);
    free(work);
    return ok;
}

/* Native controller-driven tour. Every edit is performed by the stock game;
   the script reads the map to choose clear sites and to check its actions. */
static int stock_world_tour_probe(SimCityRecomp *game, const char *directory, int roads) {
    static const int origins[4][2] = {{0,0}, {120,0}, {120,100}, {0,100}};
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    uint32_t menu, city;
    unsigned plants = 0u;
    uint16_t focus = 0u, tool_x = 0u, tool_y = 0u;
    int sites[4][2] = {{0}};
    char path[4096], error[256] = {0};
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!stock_world_boot_new_city(game, &audio, &menu, &city)) goto fail;
    if (!stock_press(game, &audio, SIMCITY_INPUT_SELECT, 18u) ||
        !read_wram16(game, 0x0201u, &focus) || focus != 0u) goto fail;
    for (unsigned i = 0u; i < 12u; ++i)
        if (!stock_press(game, &audio, SIMCITY_INPUT_DOWN, 18u)) goto fail;
    if (!read_wram16(game, 0x01ebu, &tool_x) ||
        !read_wram16(game, 0x01edu, &tool_y) ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 18u) ||
        !stock_press(game, &audio, SIMCITY_INPUT_SELECT, 18u) ||
        !stock_press(game, &audio, SIMCITY_INPUT_X, 60u)) goto fail;
    printf("stock-world-tour menu=%u city=%u coal_toolbar=(%u,%u)\n", menu, city, tool_x, tool_y);
    for (unsigned i = 0u; i < 4u; ++i) {
        int *site = sites[i];
        unsigned before, after;
        if (!stock_world_find_plant_lot(game, origins[i][0], origins[i][1], &site[0], &site[1]) ||
            !stock_move_axis(game, &audio, site[0], 0) ||
            !stock_move_axis(game, &audio, site[1], 1) ||
            !stock_funds(game, &before) ||
            !stock_press(game, &audio, SIMCITY_INPUT_B, 60u) ||
            !stock_funds(game, &after)) goto fail;
        if (after >= before ||
            !stock_world_plant_lot(game, (unsigned)site[0], (unsigned)site[1], 1)) {
            uint16_t tile = 0u, ax = 0u, ay = 0u;
            (void)simcity_recomp_stock_world_tile(game, (unsigned)site[0], (unsigned)site[1], &tile);
            (void)read_wram16(game, 0x0205u, &ax);
            (void)read_wram16(game, 0x0207u, &ay);
            fprintf(stderr, "Native plant %u failed: planned=(%d,%d) anchor=(%u,%u) tile=%04X budget=%u to %u\n",
                    i + 1u, site[0], site[1], ax, ay, tile, before, after);
            goto fail;
        }
        ++plants;
        snprintf(path, sizeof(path), "%s/stock-world-tour-plant-%u.bmp", directory, plants);
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                       SIMCITY_RECOMP_FRAME_HEIGHT)) goto fail;
        printf("stock-world-tour plant=%u site=(%d,%d) frame=%u cost=%u funds=%u\n",
               plants, site[0], site[1], simcity_recomp_current_frame(game), before - after, after);
        fflush(stdout);
    }
    if (roads && !stock_world_tour_links(game, &audio, sites, directory, 1u, "road", tour_road_tile)) goto fail;
    if (!world_probe_step(game, &audio, 0u, 720u, 0, 0) ||
        !simcity_recomp_audio_static_status(game, &status) ||
        status.pcm_unknown_frames || status.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto fail;
    snprintf(path, sizeof(path), "%s/stock-world-%s.scsnap", directory, roads ? "network" : "tour");
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto fail;
    printf("stock-world-tour plants=%u pcm=%llu audio=%016llX core_overflows=%llu dropped=%llu modeled_underruns=%u modeled_overflows=%u\n",
           plants, (unsigned long long)audio.frames, (unsigned long long)audio.hash,
           (unsigned long long)status.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game),
           audio.modeled_underruns, audio.modeled_overflows);
    return !audio.modeled_underruns && !audio.modeled_overflows;
fail:
    fprintf(stderr, "Stock World Map tour stopped with %u plants at frame %u: %s %s\n",
            plants, simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    return 0;
}

static int stock_world_ram_navigation(SimCityRecomp *game, const char *directory) {
    static const struct { const char *name; int x, y; } waypoints[] = {
        {"northwest", 15, 15}, {"east-seam", 120, 15}, {"northeast", 223, 17},
        {"south-seam", 223, 100}, {"southeast", 223, 181}, {"wide-offset", 128, 136},
        {"southwest", 17, 181}, {"return", 15, 15}
    };
    uint32_t menu = 0u, city = 0u;
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    FILE *report = NULL;
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!stock_world_boot_new_city(game, &audio, &menu, &city)) goto finish;
    uint16_t hud = 0u;
    if (!read_wram16(game, 0x01d7u, &hud) ||
        (hud && !stock_press(game, &audio, SIMCITY_INPUT_X, 60u))) goto finish;
    snprintf(path, sizeof(path), "%s/stock-world-ram-navigation.txt", directory);
    report = fopen(path, "wb");
    if (!report) goto finish;
    fprintf(report, "Stock World Map read-only RAM navigation; city frame=%u, menu frame=%u\n", city, menu);
    for (unsigned i = 0u; i < sizeof(waypoints) / sizeof(waypoints[0]); ++i) {
        StockRamPosition p = {0};
        uint16_t tile = 0u;
        const int x = waypoints[i].x, y = waypoints[i].y;
        if (!stock_move_axis(game, &audio, x, 0) || !stock_move_axis(game, &audio, y, 1) ||
            !stock_read_position(game, &p, 1) || p.focus != 0xffu || p.x != x || p.y != y ||
            !simcity_recomp_stock_world_tile(game, (unsigned)x, (unsigned)y, &tile)) {
            fprintf(stderr, "RAM waypoint %s failed: expected=(%d,%d) actual=(%d,%d) focus=%04X\n",
                    waypoints[i].name, x, y, p.x, p.y, p.focus);
            goto finish;
        }
        snprintf(path, sizeof(path), "%s/stock-world-ram-%s.bmp", directory, waypoints[i].name);
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                       SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
        fprintf(report,
            "%s frame=%u world=(%d,%d) camera=(%d,%d) fine=(%u,%u) screen=(%d,%d) tool_px=(%u,%u) last_build=(%u,%u) focus=%04X tile=%04X world_byte_offset=%u\n",
            waypoints[i].name, simcity_recomp_current_frame(game), p.x, p.y,
            (int)(int16_t)p.view_x, (int)(int16_t)p.view_y, p.fine_x & 7u, p.fine_y & 7u,
            (int)(int16_t)p.screen_x, (int)(int16_t)p.screen_y, p.tool_x, p.tool_y,
            p.anchor_x, p.anchor_y, p.focus, tile, 2u * ((unsigned)y * TOUR_WIDTH + (unsigned)x));
        printf("stock-world-ram waypoint=%s position=(%d,%d) focus=%04X tile=%04X\n",
               waypoints[i].name, p.x, p.y, p.focus, tile);
    }
    if (!simcity_recomp_audio_static_status(game, &status)) goto finish;
    fprintf(report, "PCM=%llu audio_hash=%016llX modeled_underruns=%u modeled_overflows=%u core_overflows=%llu dropped=%llu\n",
            (unsigned long long)audio.frames, (unsigned long long)audio.hash,
            audio.modeled_underruns, audio.modeled_overflows,
            (unsigned long long)status.pcm_overflows,
            (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    ok = !audio.modeled_underruns && !audio.modeled_overflows && !status.pcm_overflows &&
         !simcity_recomp_audio_dropped_frames(game);
finish:
    if (report && fclose(report) != 0) ok = 0;
    if (!ok) fprintf(stderr, "World Map RAM navigation stopped: %s %s\n",
                     error, simcity_recomp_last_error(game));
    return ok;
}

static int stock_world_utilities_probe(SimCityRecomp *game, const char *directory) {
    static const unsigned order[4] = {0u, 1u, 3u, 2u};
    int sites[4][2] = {{0}};
    unsigned found = 0u, rail = 0u, wires = 0u, powered = 0u, roads = 0u, funds = 0u;
    char path[4096], error[256] = {0};
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-world-network.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_probe_world_funds(game) || !stock_funds(game, &funds) || funds != 999999u)
        goto fail;
    for (unsigned y = 0u; y < TOUR_HEIGHT; ++y)
        for (unsigned x = 0u; x < TOUR_WIDTH; ++x) {
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto fail;
            if ((tile & 0x03ffu) != 0x287u) continue;
            const unsigned q = order[(x >= 120u) + 2u * (y >= 100u)];
            if (found & (1u << q)) goto fail;
            sites[q][0] = (int)x;
            sites[q][1] = (int)y;
            found |= 1u << q;
        }
    if (found != 15u ||
        !stock_world_tour_links(game, &audio, sites, directory, 2u, "rail", tour_rail_tile))
        goto fail;
    snprintf(path, sizeof(path), "%s/stock-world-rail.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto fail;
    if (!stock_world_tour_links(game, &audio, sites, directory, 3u, "power", tour_power_tile) ||
        !world_probe_step(game, &audio, 0u, 1440u, 0, 0) ||
        !simcity_recomp_audio_static_status(game, &status)) goto fail;
    for (unsigned y = 0u; y < TOUR_HEIGHT; ++y)
        for (unsigned x = 0u; x < TOUR_WIDTH; ++x) {
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto fail;
            roads += tour_road_tile(tile);
            rail += tour_rail_tile(tile);
            if (tour_power_tile(tile)) {
                ++wires;
                powered += (tile & 0x8000u) != 0u;
            }
        }
    printf("stock-world-utilities roads=%u rail=%u lines=%u powered=%u modeled_underruns=%u modeled_overflows=%u core_overflows=%llu dropped=%llu\n",
           roads, rail, wires, powered, audio.modeled_underruns, audio.modeled_overflows,
           (unsigned long long)status.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    if (!roads || !rail || !wires || powered != wires || audio.modeled_underruns ||
        audio.modeled_overflows || status.pcm_overflows || simcity_recomp_audio_dropped_frames(game))
        goto fail;
    snprintf(path, sizeof(path), "%s/stock-world-utilities.scsnap", directory);
    return simcity_recomp_snapshot_save(game, path, error, sizeof(error));
fail:
    fprintf(stderr, "World Map utilities stopped at frame %u: %s %s\n",
            simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    return 0;
}

typedef struct TourBuilding {
    const char *name;
    unsigned tool, size, first, alternate;
} TourBuilding;

enum { TOUR_BRANCH_LIMIT = 80, TOUR_BRANCH_SURVEY_LIMIT = 240, TOUR_LOT_TRIAL_LIMIT = 160 };
typedef struct TourDistrict {
    uint16_t tiles[TOUR_CELLS], distance[3][TOUR_CELLS];
    uint16_t queue[TOUR_CELLS], parent[TOUR_CELLS];
    uint8_t reserved[TOUR_CELLS];
    uint32_t ranked[TOUR_CELLS];
    uint16_t branches[3][TOUR_BRANCH_SURVEY_LIMIT];
    unsigned lengths[3], branch_limit;
    unsigned clear_lots, reachable_lots[3], joint_lots, tried_lots;
    const uint8_t *protected_cells;
    int clear_only;
} TourDistrict;

static int (*const tour_services[])(uint16_t) = {
    tour_road_tile, tour_rail_tile, tour_power_tile
};

static void tour_cell_neighbors(unsigned id, unsigned neighbors[4]) {
    const unsigned x = id % TOUR_WIDTH, y = id / TOUR_WIDTH;
    neighbors[0] = x ? id - 1u : id;
    neighbors[1] = x + 1u < TOUR_WIDTH ? id + 1u : id;
    neighbors[2] = y ? id - TOUR_WIDTH : id;
    neighbors[3] = y + 1u < TOUR_HEIGHT ? id + TOUR_WIDTH : id;
}

/* Footprints are padded away from the boundary. All accesses in its
   perimeter are therefore inside the map. */
static unsigned tour_perimeter(unsigned lot, unsigned size, unsigned step) {
    const unsigned i = step % size;
    switch (step / size) {
        case 0u: return lot - TOUR_WIDTH + i;
        case 1u: return lot + size * TOUR_WIDTH + i;
        case 2u: return lot + i * TOUR_WIDTH - 1u;
        default: return lot + i * TOUR_WIDTH + size;
    }
}

/* Zero means any heading on clear ground, 3/4 means an axis-aligned
   crossing, and 1 blocks this cell for new infrastructure. */
static unsigned tour_branch_axis(const TourDistrict *work, unsigned cell, unsigned type) {
    const uint16_t tile = work->tiles[cell];
    if (work->protected_cells && work->protected_cells[cell]) return 1u;
    if (!(tile & 0x03ffu)) return 0u;
    if (work->clear_only) return 1u;
    const unsigned crossing = tour_crossing(tile, type + 1u);
    return crossing ? crossing : 1u;
}

static int tour_attachable(uint16_t tile, unsigned type) {
    unsigned networks = 0u;
    if (!tour_services[type](tile)) return 0;
    for (unsigned i = 0u; i < 3u; ++i) networks += tour_services[i](tile) != 0;
    return networks == 1u;
}

static int tour_unstable_lot_crossing(uint16_t tile, unsigned type, unsigned axis) {
    /* Native building placement retopologizes adjoining power lines. */
    return type == 0u && axis > 1u && tour_power_tile(tile);
}

static void tour_distances(TourDistrict *work, unsigned type) {
    unsigned head = 0u, tail = 0u;
    uint16_t *distance = work->distance[type];
    for (unsigned i = 0u; i < TOUR_CELLS; ++i) {
        distance[i] = UINT16_MAX;
        if (tour_attachable(work->tiles[i], type)) {
            distance[i] = 0u;
            work->queue[tail++] = (uint16_t)i;
        }
    }
    while (head < tail) {
        const unsigned id = work->queue[head++];
        unsigned neighbors[4];
        if (distance[id] >= work->branch_limit) continue;
        tour_cell_neighbors(id, neighbors);
        const unsigned current = distance[id] ? tour_branch_axis(work, id, type) : 0u;
        for (unsigned i = 0u; i < 4u; ++i) {
            const unsigned next = neighbors[i];
            const unsigned dir = i < 2u ? 3u : 4u;
            if (distance[next] != UINT16_MAX || (current && current != dir)) continue;
            const unsigned axis = tour_branch_axis(work, next, type);
            if (axis && axis != dir) continue;
            distance[next] = (uint16_t)(distance[id] + 1u);
            work->queue[tail++] = (uint16_t)next;
        }
    }
}

/* Search from each lot edge through clear cells to the existing network.
   Branches cannot run through the proposed building or the other branches. */
static int tour_plan_branch(TourDistrict *work, unsigned lot, unsigned size, unsigned type) {
    unsigned head = 0u, tail = 0u;
    work->lengths[type] = 0u;
    memset(work->parent, 0xff, sizeof(work->parent));
    for (unsigned i = 0u; i < size * 4u; ++i) {
        const unsigned id = tour_perimeter(lot, size, i);
        if (tour_attachable(work->tiles[id], type)) return 1;
        const unsigned axis = tour_branch_axis(work, id, type);
        const unsigned outward = i / size < 2u ? 4u : 3u;
        /* Building placement retopologizes adjoining power lines before
           we place the feeders. A straight wire can become a junction,
           which the stock controller will refuse to cross with a road. */
        if (tour_unstable_lot_crossing(work->tiles[id], type, axis)) continue;
        if (work->reserved[id] || (axis && axis != outward) ||
            work->distance[type][id] > work->branch_limit) continue;
        work->parent[id] = (uint16_t)id;
        work->queue[tail++] = (uint16_t)id;
    }
    while (head < tail) {
        const unsigned id = work->queue[head++];
        const unsigned current = tour_branch_axis(work, id, type);
        unsigned neighbors[4];
        tour_cell_neighbors(id, neighbors);
        for (unsigned i = 0u; i < 4u; ++i) {
            const unsigned next = neighbors[i];
            const unsigned dir = i < 2u ? 3u : 4u;
            if (current && current != dir) continue;
            if (tour_attachable(work->tiles[next], type)) {
                unsigned used = 0u, at = id;
                while (1) {
                    if (used == work->branch_limit) return 0;
                    work->branches[type][used++] = (uint16_t)at;
                    if (work->parent[at] == at) break;
                    at = work->parent[at];
                }
                work->lengths[type] = used;
                for (unsigned j = 0u; j < used; ++j)
                    work->reserved[work->branches[type][j]] = 1u;
                return 1;
            }
            const unsigned axis = tour_branch_axis(work, next, type);
            if (work->reserved[next] || (axis && axis != dir) ||
                work->parent[next] != UINT16_MAX ||
                work->distance[type][next] > work->branch_limit) continue;
            work->parent[next] = (uint16_t)id;
            work->queue[tail++] = (uint16_t)next;
        }
    }
    return 0;
}

static int tour_compare_rank(const void *left, const void *right) {
    const uint32_t a = *(const uint32_t *)left, b = *(const uint32_t *)right;
    return (a > b) - (a < b);
}

static int tour_plan_lot_bounds(TourDistrict *work, const TourBuilding *building,
                               unsigned left, unsigned top, unsigned width, unsigned height,
                               unsigned padding, unsigned anchor, unsigned radius, unsigned branch_limit,
                               unsigned trial_limit, int clear_only,
                               const uint8_t *protected_cells, unsigned *lot) {
    static const unsigned orders[6][3] = {
        {0,1,2}, {0,2,1}, {1,0,2}, {1,2,0}, {2,0,1}, {2,1,0}
    };
    const unsigned size = building->size;
    if (!branch_limit || branch_limit > TOUR_BRANCH_SURVEY_LIMIT) return 0;
    work->branch_limit = branch_limit;
    work->clear_only = clear_only;
    work->protected_cells = protected_cells;
    for (unsigned type = 0u; type < 3u; ++type) tour_distances(work, type);
    unsigned candidates = 0u;
    work->clear_lots = work->tried_lots = 0u;
    memset(work->reachable_lots, 0, sizeof(work->reachable_lots));
    /* A failed branch search changes only temporary reservations. Score
       each parcel once, keeping the old row-major tie break in its key. */
    for (unsigned y = top + padding; y + size + padding < top + height; ++y)
        for (unsigned x = left + padding; x + size + padding < left + width; ++x) {
            const unsigned id = y * TOUR_WIDTH + x;
            unsigned score = 0u;
            if (radius) {
                const unsigned distance = (unsigned)abs((int)x - (int)(anchor % TOUR_WIDTH)) +
                                          (unsigned)abs((int)y - (int)(anchor / TOUR_WIDTH));
                if (distance > radius) continue;
                score = distance;
            }
            for (unsigned a = 0u; a < size * size; ++a) {
                const unsigned cell = id + a / size * TOUR_WIDTH + a % size;
                if ((work->tiles[cell] & 0x03ffu) ||
                    (protected_cells && protected_cells[cell])) {
                    score = UINT16_MAX;
                    break;
                }
            }
            if (score == UINT16_MAX) continue;
            ++work->clear_lots;
            for (unsigned type = 0u; type < 3u; ++type) {
                unsigned nearest = branch_limit + 1u;
                for (unsigned k = 0u; k < size * 4u; ++k) {
                    const unsigned edge = tour_perimeter(id, size, k);
                    const unsigned axis = tour_branch_axis(work, edge, type);
                    const unsigned outward = k / size < 2u ? 4u : 3u;
                    const unsigned dist = work->distance[type][edge];
                    if (tour_unstable_lot_crossing(work->tiles[edge], type, axis)) continue;
                    if (dist && axis && axis != outward) continue;
                    if (dist < nearest) nearest = dist;
                }
                if (nearest > branch_limit) score = UINT16_MAX;
                else {
                    ++work->reachable_lots[type];
                    if (score != UINT16_MAX) score += nearest;
                }
            }
            if (score < UINT16_MAX)
                work->ranked[candidates++] = ((uint32_t)score << 16u) | (uint32_t)id;
        }
    work->joint_lots = candidates;
    qsort(work->ranked, candidates, sizeof(work->ranked[0]), tour_compare_rank);
    for (unsigned trial = 0u; trial < candidates && trial < trial_limit; ++trial) {
        ++work->tried_lots;
        *lot = work->ranked[trial] & UINT16_MAX;
        for (unsigned attempt = 0u; attempt < 6u; ++attempt) {
            memset(work->reserved, 0, sizeof(work->reserved));
            for (unsigned a = 0u; a < size * size; ++a)
                work->reserved[*lot + a / size * TOUR_WIDTH + a % size] = 1u;
            if (tour_plan_branch(work, *lot, size, orders[attempt][0]) &&
                tour_plan_branch(work, *lot, size, orders[attempt][1]) &&
                tour_plan_branch(work, *lot, size, orders[attempt][2])) return 1;
        }
    }
    return 0;
}

static int tour_plan_lot(TourDistrict *work, const TourBuilding *building,
                         unsigned district, unsigned anchor, unsigned radius,
                         int clear_only, unsigned *lot) {
    return tour_plan_lot_bounds(work, building, (district & 1u) ? 120u : 0u,
                               (district & 2u) ? 100u : 0u, 120u, 100u, 4u,
                               anchor, radius, TOUR_BRANCH_LIMIT, TOUR_LOT_TRIAL_LIMIT,
                               clear_only, NULL, lot);
}

static int tour_read_world(SimCityRecomp *game, TourDistrict *work) {
    return simcity_recomp_stock_world_copy_tiles(game, work->tiles, sizeof(work->tiles) / sizeof(*work->tiles));
}

static int tour_tap_cell(SimCityRecomp *game, WorldProbe *audio, unsigned cell, uint16_t *tile) {
    const int x = (int)(cell % TOUR_WIDTH), y = (int)(cell / TOUR_WIDTH);
    return stock_move_axis(game, audio, x, 0) &&
           stock_move_axis(game, audio, y, 1) &&
           stock_press(game, audio, SIMCITY_INPUT_B, 9u) &&
           simcity_recomp_stock_world_tile(game, (unsigned)x, (unsigned)y, tile);
}

static int stock_inland_plain_district(SimCityRecomp *game, const char *directory) {
    enum { PLANT_X = 198, ZONE_X = 205, LOT_Y = 160, CELLS = TOUR_WIDTH * TOUR_HEIGHT };
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    uint16_t *before = malloc(CELLS * sizeof(*before));
    uint16_t *after = malloc(CELLS * sizeof(*after));
    char path[4096], error[256] = {0};
    const char *phase = "load all-land catalog city";
    unsigned powered = 0u, funds = 0u, advanced = 0u;
    uint16_t tile = 0u;
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-world-catalog-map-1.scsnap", directory);
    if (!before || !after || !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_copy_tiles(game, before, CELLS)) goto done;
    for (unsigned i = 0u; i < CELLS; ++i) if (before[i] != 0u) goto done;
    phase = "coal plant and residential zone";
    if (!stock_world_select_tool(game, &audio, 14u) ||
        !tour_tap_cell(game, &audio, LOT_Y * TOUR_WIDTH + PLANT_X, &tile) ||
        (tile & 0x03ffu) != 0x287u || !stock_world_plant_lot(game, PLANT_X, LOT_Y, 1) ||
        !stock_world_select_tool(game, &audio, 5u) ||
        !tour_tap_cell(game, &audio, LOT_Y * TOUR_WIDTH + ZONE_X, &tile) ||
        (tile & 0x03ffu) != 0x080u) goto done;
    phase = "power connection";
    if (!stock_world_select_tool(game, &audio, 3u)) goto done;
    for (unsigned x = PLANT_X + 4u; x < ZONE_X; ++x)
        if (!tour_tap_cell(game, &audio, (LOT_Y + 1u) * TOUR_WIDTH + x, &tile) ||
            !tour_power_tile(tile)) goto done;
    phase = "road and rail edges";
    for (unsigned service = 1u; service <= 2u; ++service) {
        const unsigned y = service == 1u ? LOT_Y + 3u : LOT_Y - 1u;
        if (!stock_world_select_tool(game, &audio, service)) goto done;
        for (unsigned x = ZONE_X; x <= ZONE_X + 2u; ++x)
            if (!tour_tap_cell(game, &audio, y * TOUR_WIDTH + x, &tile) ||
                !(service == 1u ? tour_road_tile(tile) : tour_rail_tile(tile))) goto done;
    }
    phase = "native power propagation";
    for (advanced = 0u; advanced <= 9000u; advanced += 120u) {
        powered = 0u;
        for (unsigned dy = 0u; dy < 3u; ++dy) for (unsigned dx = 0u; dx < 3u; ++dx) {
            if (!simcity_recomp_stock_world_tile(game, ZONE_X + dx, LOT_Y + dy, &tile) ||
                (tile & 0x03ffu) < 0x080u || (tile & 0x03ffu) >= 0x137u) goto done;
            powered += (tile & 0x8000u) != 0u;
        }
        if (powered == 9u) break;
        if (!world_probe_step(game, &audio, 0u, 120u, 1, 0)) goto done;
    }
    if (powered != 9u || !stock_funds(game, &funds) || !funds || funds >= 20000u ||
        !simcity_recomp_audio_static_status(game, &pcm) || pcm.pcm_overflows ||
        audio.modeled_underruns || audio.modeled_overflows || simcity_recomp_audio_dropped_frames(game)) goto done;
    phase = "screenshot and round-trip snapshot";
    const uint32_t frame = simcity_recomp_current_frame(game);
    snprintf(path, sizeof(path), "%s/stock-inland-plain-southeast.bmp", directory);
    if (!simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
        !simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !simcity_recomp_stock_world_copy_tiles(game, before, CELLS)) goto done;
    snprintf(path, sizeof(path), "%s/stock-inland-plain-southeast.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error)) ||
        !simcity_recomp_reset(game, error, sizeof(error)) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        simcity_recomp_current_frame(game) != frame ||
        !simcity_recomp_stock_world_copy_tiles(game, after, CELLS) ||
        memcmp(before, after, CELLS * sizeof(*before))) goto done;
    printf("stock-inland-district plant=(%u,%u) residential=(%u,%u) road=3 rail=3 wires=3 powered=%u/9 funds=%u settled_frames=%u frame=%u restored_tiles=%u underruns=0 overflows=0\n",
        PLANT_X, LOT_Y, ZONE_X, LOT_Y, powered, funds, advanced, frame, (unsigned)CELLS);
    ok = 1;
done:
    if (!ok) fprintf(stderr, "Inland Plain district stopped at %s: tile=%04X powered=%u %s\n",
                    phase, tile, powered, error);
    free(after);
    free(before);
    return ok;
}

static int stock_catalog_district_probe(SimCityRecomp *game, const char *directory, unsigned id,
                                        StockControllerTape *tape) {
    enum { PLANT_X = 16, LOT_Y = 16 };
    static const unsigned lot_x[] = {23u, 27u, 31u, 35u};
    static const unsigned wire_x[] = {20u, 21u, 22u, 26u, 30u, 34u};
    static const unsigned zone_codes[] = {0x080u, 0x137u, 0x1f4u, 0x245u, 0x24eu};
    const unsigned lots = tape ? 4u : 3u;
    WorldProbe audio = {0};
    SimCityRecompStockWorldSample work = {0};
    char path[4096], error[256] = {0};
    const char *phase = "open catalog-started city";
    unsigned powered = 0u, funds = 0u, settled = 0u;
    uint16_t tile = 0u;
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (tape) {
        unsigned setup = 0u, selected = 0u;
        phase = "cold boot through World Maps";
        if (id != 1u || simcity_recomp_current_frame(game) ||
            !simcity_recomp_set_widescreen(game, 1, error, sizeof(error))) goto finish;
        audio.input_tape = tape;
        simcity_recomp_world_catalog_enable(game, 1);
        for (unsigned f = 0u; f < 1010u; ++f)
            if (!world_probe_step(game, &audio, pulse(f, 1000u) ? SIMCITY_INPUT_DOWN : new_city_input(f),
                                  1u, 1, 0)) goto finish;
        if (!stock_press(game, &audio, SIMCITY_INPUT_DOWN, 12u) ||
            simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_FOCUSED ||
            !stock_press(game, &audio, SIMCITY_INPUT_B, 12u) ||
            simcity_recomp_world_catalog_view(game, &selected) != SIMCITY_WORLD_CATALOG_LIST ||
            selected != id || !world_probe_step(game, &audio, SIMCITY_INPUT_B, 1u, 1, 0)) goto finish;
        for (unsigned f = 1u; f <= 1800u && !simcity_recomp_stock_world_active(game); ++f) {
            uint16_t state = 0u;
            if (!read_wram16(game, 0x14u, &state)) goto finish;
            if (!setup && state == 4u) setup = f;
            if (!world_probe_step(game, &audio, setup ? new_city_input(f - setup + 1022u) : 0u,
                                  1u, 1, 0)) goto finish;
        }
        if (!setup || !simcity_recomp_stock_world_active(game)) goto finish;
    } else {
        snprintf(path, sizeof(path), "%s/stock-world-catalog-map-%u.scsnap", directory, id);
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) goto finish;
    }
    if (!stock_funds(game, &funds) || funds != 20000u) goto finish;
    phase = "coal plant";
    if (!stock_world_select_tool(game, &audio, 14u) ||
        !tour_tap_cell(game, &audio, LOT_Y * TOUR_WIDTH + PLANT_X, &tile) ||
        (tile & 0x03ffu) != 0x287u || !stock_world_plant_lot(game, PLANT_X, LOT_Y, 1)) goto finish;
    phase = "residential, commercial, industrial and optional police lots";
    for (unsigned i = 0u; i < lots; ++i)
        if (!stock_world_select_tool(game, &audio, 5u + i) ||
            !tour_tap_cell(game, &audio, LOT_Y * TOUR_WIDTH + lot_x[i], &tile) ||
            (tile & 0x03ffu) != zone_codes[i]) goto finish;
    phase = "wires";
    if (!stock_world_select_tool(game, &audio, 3u)) goto finish;
    for (unsigned i = 0u; i < (tape ? 6u : 5u); ++i)
        if (!tour_tap_cell(game, &audio, (LOT_Y + 1u) * TOUR_WIDTH + wire_x[i], &tile) ||
            !tour_power_tile(tile)) goto finish;
    phase = "road and rail";
    for (unsigned service = 1u; service <= 2u; ++service) {
        const unsigned y = service == 1u ? LOT_Y + 3u : LOT_Y - 1u;
        if (!stock_world_select_tool(game, &audio, service)) goto finish;
        for (unsigned x = 20u; x <= (tape ? 37u : 33u); ++x)
            if (!tour_tap_cell(game, &audio, y * TOUR_WIDTH + x, &tile) ||
                !(service == 1u ? tour_road_tile(tile) : tour_rail_tile(tile))) goto finish;
    }
    phase = "native simulation";
    for (; settled <= 9000u; settled += 120u) {
        powered = 0u;
        for (unsigned i = 0u; i < lots; ++i) for (unsigned y = 0u; y < 3u; ++y)
            for (unsigned x = 0u; x < 3u; ++x) {
                if (!simcity_recomp_stock_world_tile(game, lot_x[i] + x, LOT_Y + y, &tile) ||
                    (tile & 0x03ffu) < zone_codes[i] || (tile & 0x03ffu) >= zone_codes[i + 1u]) goto finish;
                powered += (tile & 0x8000u) != 0u;
            }
        if (!simcity_recomp_stock_world_sample(game, 24u, 17u, &work) ||
            work.census_order_errors || work.power_order_errors) goto finish;
        if (powered == lots * 9u && work.census_visits >= TOUR_CELLS && work.power_cycles &&
            work.density_cycles && work.environment_cycles && work.crime_cycles && work.fire_cycles &&
            (!tape || work.police)) {
            ok = stock_funds(game, &funds) && funds && funds < 20000u &&
                 !audio.modeled_underruns && !audio.modeled_overflows && !simcity_recomp_audio_dropped_frames(game);
            break;
        }
        if (!world_probe_step(game, &audio, 0u, 120u, 1, 0)) goto finish;
    }
finish:
    printf("catalog-district id=%u powered=%u/%u census_visits=%u passes=%u/%u/%u/%u/%u settled=%u funds=%u police_coverage=%u pass=%d\n",
        id, powered, lots * 9u, work.census_visits, work.power_cycles, work.density_cycles,
        work.environment_cycles, work.crime_cycles, work.fire_cycles, settled, funds, (unsigned)work.police, ok);
    if (!ok) fprintf(stderr, "Catalog district %u failed at %s: tile=%04X %s\n", id, phase, tile, error);
    return ok;
}

static int stock_archipelago_starting_district(SimCityRecomp *game, const char *directory) {
    enum { PLANT_X = 16, AIRPORT_X = 23, LOT_Y = 16, ROAD_Y = 22, WIRE_Y = 17 };
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    uint32_t menu = 0u, city = 0u;
    unsigned funds = 0u, advanced = 0u, powered = 0u;
    uint16_t tile = 0u;
    char path[4096], error[256] = {0};
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!stock_world_boot_template(game, &audio, &menu, &city, SIMCITY_WORLD_MAP_TEMPLATE_COUNT) ||
        !stock_world_select_tool(game, &audio, 14u) ||
        !tour_tap_cell(game, &audio, LOT_Y * TOUR_WIDTH + PLANT_X, &tile) ||
        (tile & 0x03ffu) != 0x287u || !stock_world_plant_lot(game, PLANT_X, LOT_Y, 1)) goto finish;
    if (!stock_world_select_tool(game, &audio, 12u) ||
        !tour_tap_cell(game, &audio, LOT_Y * TOUR_WIDTH + AIRPORT_X, &tile) || (tile & 0x03ffu) != 0x297u) goto finish;
    for (unsigned dy = 0u; dy < 6u; ++dy) for (unsigned dx = 0u; dx < 6u; ++dx)
        if (!simcity_recomp_stock_world_tile(game, AIRPORT_X + dx, LOT_Y + dy, &tile) ||
            (tile & 0x03ffu) != 0x297u + dy * 6u + dx) goto finish;
    if (!stock_world_select_tool(game, &audio, 3u)) goto finish;
    for (unsigned x = PLANT_X + 4u; x < AIRPORT_X; ++x)
        if (!tour_tap_cell(game, &audio, WIRE_Y * TOUR_WIDTH + x, &tile) || !tour_power_tile(tile)) goto finish;
    if (!stock_world_select_tool(game, &audio, 1u)) goto finish;
    for (unsigned x = PLANT_X + 1u; x <= AIRPORT_X + 3u; ++x)
        if (!tour_tap_cell(game, &audio, ROAD_Y * TOUR_WIDTH + x, &tile) || !tour_road_tile(tile)) goto finish;
    for (unsigned y = LOT_Y + 4u; y < ROAD_Y; ++y)
        if (!tour_tap_cell(game, &audio, y * TOUR_WIDTH + PLANT_X + 1u, &tile) || !tour_road_tile(tile)) goto finish;
    for (advanced = 0u; advanced <= 9000u; advanced += 120u) {
        powered = 0u;
        for (unsigned dy = 0u; dy < 6u; ++dy) for (unsigned dx = 0u; dx < 6u; ++dx) {
            if (!simcity_recomp_stock_world_tile(game, AIRPORT_X + dx, LOT_Y + dy, &tile)) goto finish;
            powered += (tile & 0x8000u) != 0u;
        }
        if (powered == 36u) break;
        if (!world_probe_step(game, &audio, 0u, 120u, 1, 0)) goto finish;
    }
    if (!stock_funds(game, &funds) || !simcity_recomp_audio_static_status(game, &pcm)) goto finish;
    printf("stock-archipelago-start plant=16,16 airport=23,16 roads=12 wires=3 powered_airport_tiles=%u/36 settled_frames=%u funds=%u underruns=%u overflows=%u\n",
        powered, advanced, funds, audio.modeled_underruns, audio.modeled_overflows);
    if (powered != 36u || audio.modeled_underruns || audio.modeled_overflows || pcm.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-archipelago-starting-district.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-archipelago-starting-district.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
    return 1;
finish:
    fprintf(stderr, "Outer Archipelago district did not complete: frame=%u tile=%04X powered=%u %s %s\n",
        simcity_recomp_current_frame(game), tile, powered, error, simcity_recomp_last_error(game));
    return 0;
}

static int stock_archipelago_bridge(SimCityRecomp *game, const char *directory) {
    enum { ROOT_X = 26, ROOT_Y = 22, BRIDGE_Y = 49 };
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    char path[4096], error[256] = {0};
    unsigned bank = 0u, far_bank = 0u, position = 0u, funds = 0u;
    uint16_t tile = 0u;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-archipelago-starting-district.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_tile(game, ROOT_X, ROOT_Y, &tile) || !tour_road_tile(tile)) goto finish;
    for (unsigned x = ROOT_X; x < 120u; ++x) {
        if (!simcity_recomp_stock_world_tile(game, x, BRIDGE_Y, &tile)) goto finish;
        if (stock_template_water_tile(tile)) { if (!bank) bank = x; }
        else if (bank) { far_bank = x; break; }
    }
    if (!bank || far_bank <= bank || far_bank - bank > 12u) goto finish;
    printf("stock-archipelago-bridge-plan row=%u first_water=%u far_bank=%u water_tiles=%u\n",
        (unsigned)BRIDGE_Y, bank, far_bank, far_bank - bank);
    if (!stock_world_select_tool(game, &audio, 1u)) goto finish;
    for (position = ROOT_Y + 1u; position <= BRIDGE_Y; ++position)
        if (!tour_tap_cell(game, &audio, position * TOUR_WIDTH + ROOT_X, &tile) || !tour_road_tile(tile)) goto finish;
    for (position = ROOT_X + 1u; position <= far_bank + 1u; ++position) {
        if (!simcity_recomp_stock_world_tile(game, position, BRIDGE_Y, &tile)) goto finish;
        if (tour_road_tile(tile)) continue; /* The stock tool may lay a span in one action. */
        if (!tour_tap_cell(game, &audio, BRIDGE_Y * TOUR_WIDTH + position, &tile) || !tour_road_tile(tile)) goto finish;
    }
    for (unsigned y = ROOT_Y; y <= BRIDGE_Y; ++y)
        if (!simcity_recomp_stock_world_tile(game, ROOT_X, y, &tile) || !tour_road_tile(tile)) goto finish;
    for (unsigned x = ROOT_X; x <= far_bank + 1u; ++x)
        if (!simcity_recomp_stock_world_tile(game, x, BRIDGE_Y, &tile) || !tour_road_tile(tile)) goto finish;
    if (!stock_funds(game, &funds) || !simcity_recomp_audio_static_status(game, &pcm) ||
        audio.modeled_underruns || audio.modeled_overflows || pcm.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-archipelago-bridge.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-archipelago-bridge.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
    printf("stock-archipelago-bridge connected=1 water_tiles=%u funds=%u underruns=0 overflows=0\n",
        far_bank - bank, funds);
    return 1;
finish:
    fprintf(stderr, "Outer Archipelago crossing stopped at %u (water=%u far_bank=%u tile=%04X): %s\n",
        position, bank, far_bank, tile, error);
    return 0;
}

static int stock_twin_shores_bridge(SimCityRecomp *game, const char *directory) {
    enum { MAP_ID = 6, ROW = 74, STRAIT = 118 };
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    uint32_t menu = 0u, city = 0u;
    char path[4096], error[256] = {0};
    unsigned east = STRAIT, west = STRAIT, funds = 0u, x = 0u;
    uint16_t tile = 0u;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!stock_world_boot_template(game, &audio, &menu, &city, MAP_ID) ||
        !simcity_recomp_stock_world_tile(game, STRAIT, ROW, &tile) || !stock_template_water_tile(tile)) goto fail;
    for (; west > STRAIT - 12u; --west) {
        if (!simcity_recomp_stock_world_tile(game, west, ROW, &tile)) goto fail;
        if (tile == 0u) break;
        if (!stock_template_water_tile(tile)) goto fail;
    }
    for (; east < STRAIT + 12u; ++east) {
        if (!simcity_recomp_stock_world_tile(game, east, ROW, &tile)) goto fail;
        if (tile == 0u) break;
        if (!stock_template_water_tile(tile)) goto fail;
    }
    if (east - west - 1u == 0u || east - west - 1u > 12u || east < 120u ||
        !stock_world_select_tool(game, &audio, 1u)) goto fail;
    for (x = west - 2u; x <= east + 2u; ++x) {
        if (!simcity_recomp_stock_world_tile(game, x, ROW, &tile)) goto fail;
        if (tour_road_tile(tile)) continue;
        if ((x > west && x < east ? !stock_template_water_tile(tile) : tile != 0u) ||
            !tour_tap_cell(game, &audio, ROW * TOUR_WIDTH + x, &tile) || !tour_road_tile(tile)) goto fail;
    }
    for (x = west - 2u; x <= east + 2u; ++x)
        if (!simcity_recomp_stock_world_tile(game, x, ROW, &tile) || !tour_road_tile(tile)) goto fail;
    if (!stock_funds(game, &funds) || !simcity_recomp_audio_static_status(game, &pcm) ||
        audio.modeled_underruns || audio.modeled_overflows || pcm.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto fail;
    snprintf(path, sizeof(path), "%s/stock-twin-shores-bridge.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto fail;
    snprintf(path, sizeof(path), "%s/stock-twin-shores-bridge.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto fail;
    printf("stock-twin-shores-bridge connected=1 row=%u west=%u east=%u water_tiles=%u funds=%u underruns=0 overflows=0\n",
        (unsigned)ROW, west, east, east - west - 1u, funds);
    return 1;
fail:
    fprintf(stderr, "Twin Shores crossing stopped: west=%u east=%u x=%u tile=%04X %s\n", west, east, x, tile, error);
    return 0;
}

static int stock_archipelago_wire_tap(SimCityRecomp *game, WorldProbe *audio,
                                      unsigned cell, uint16_t *tile) {
    const int target_x = (int)(cell % TOUR_WIDTH), target_y = (int)(cell / TOUR_WIDTH);
    for (unsigned attempt = 0u; attempt < 3u; ++attempt) {
        int x, y;
        if (!stock_move_axis(game, audio, target_y, 1) ||
            !stock_move_axis(game, audio, target_x, 0) || !stock_cell(game, &x, &y)) return 0;
        if (x != target_x || y != target_y) continue;
        if (!stock_press(game, audio, SIMCITY_INPUT_B, 9u) ||
            !simcity_recomp_stock_world_tile(game, (unsigned)x, (unsigned)y, tile)) return 0;
        if (tour_power_tile(*tile)) return 1;
        uint16_t notice;
        if (!read_wram16(game, 0x0395u, &notice)) return 0;
        if (notice && (!stock_acknowledge_build_notice(game, audio, "archipelago-wire") ||
            !stock_world_select_tool(game, audio, 3u))) return 0;
        /* Leave a bounded release interval before retrying. Do not write
           to the map or assume why the original tool declined a tap. */
        if (!notice && !world_probe_step(game, audio, 0u, 12u, 1, 0)) return 0;
    }
    return 0;
}

static int stock_archipelago_rail_and_port(SimCityRecomp *game, const char *directory) {
    enum { PORT_X = 74, PORT_Y = 43, RAIL_Y = 48, ROAD_Y = 49,
           RAIL_FROM = 74, RAIL_TO = 88, ROAD_TO = 87, WIRE_FROM = 22 };
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    char path[4096], error[256] = {0};
    unsigned px = 0u, py = 0u, water = 0u, powered = 0u, funds = 0u;
    const char *phase = "load";
    uint16_t tile = 0u;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-archipelago-bridge.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) goto fail;
    phase = "port shoreline";
    for (py = PORT_Y; py < PORT_Y + 4u; ++py) {
        for (px = PORT_X; px < PORT_X + 4u; ++px)
            if (!simcity_recomp_stock_world_tile(game, px, py, &tile) || (tile & 0x03ffu)) goto fail;
        if (!simcity_recomp_stock_world_tile(game, PORT_X + 4u, py, &tile) || !stock_template_water_tile(tile)) goto fail;
    }
    phase = "place port";
    px = PORT_X; py = PORT_Y;
    if (!stock_world_select_tool(game, &audio, 11u) ||
        !tour_tap_cell(game, &audio, py * TOUR_WIDTH + px, &tile) || (tile & 0x03ffu) != 0x267u) goto fail;
    phase = "parallel rail bridge";
    if (!stock_world_select_tool(game, &audio, 2u)) goto fail;
    py = RAIL_Y;
    for (px = RAIL_FROM; px <= RAIL_TO; ++px) {
        if (!simcity_recomp_stock_world_tile(game, px, py, &tile)) goto fail;
        water += stock_template_water_tile(tile);
        if (!tour_rail_tile(tile) && (!tour_tap_cell(game, &audio, py * TOUR_WIDTH + px, &tile) ||
            !tour_rail_tile(tile))) goto fail;
    }
    if (!water) goto fail;
    px = PORT_X; py = RAIL_Y - 1u;
    if (!tour_tap_cell(game, &audio, py * TOUR_WIDTH + px, &tile) || !tour_rail_tile(tile)) goto fail;
    phase = "road spur";
    if (!stock_world_select_tool(game, &audio, 1u)) goto fail;
    px = PORT_X - 1u;
    if (!simcity_recomp_stock_world_tile(game, px, ROAD_Y, &tile) || !tour_road_tile(tile)) goto fail;
    for (py = ROAD_Y - 1u; py >= PORT_Y + 3u; --py)
        if (!tour_tap_cell(game, &audio, py * TOUR_WIDTH + px, &tile) || !tour_road_tile(tile)) goto fail;
    phase = "wire from starting district";
    if (!stock_world_select_tool(game, &audio, 3u)) goto fail;
    px = WIRE_FROM;
    if (!simcity_recomp_stock_world_tile(game, px, 17u, &tile) || !tour_power_tile(tile)) goto fail;
    for (py = 18u; py <= PORT_Y; ++py)
        if (!stock_archipelago_wire_tap(game, &audio, py * TOUR_WIDTH + px, &tile)) goto fail;
    py = PORT_Y;
    for (px = WIRE_FROM + 1u; px < PORT_X; ++px)
        if (!stock_archipelago_wire_tap(game, &audio, py * TOUR_WIDTH + px, &tile)) goto fail;
    phase = "native power and tile verification";
    for (unsigned settled = 0u; settled <= 8400u; settled += 120u) {
        powered = 0u;
        for (py = PORT_Y; py < PORT_Y + 4u; ++py) for (px = PORT_X; px < PORT_X + 4u; ++px) {
            if (!simcity_recomp_stock_world_tile(game, px, py, &tile) ||
                (tile & 0x03ffu) != 0x267u + (py - PORT_Y) * 4u + px - PORT_X) goto fail;
            powered += (tile & 0x8000u) != 0u;
        }
        if (powered == 16u) break;
        if (!world_probe_step(game, &audio, 0u, 120u, 1, 0)) goto fail;
    }
    for (px = RAIL_FROM; px <= RAIL_TO; ++px)
        if (!simcity_recomp_stock_world_tile(game, px, RAIL_Y, &tile) || !tour_rail_tile(tile)) goto fail;
    for (px = RAIL_FROM; px <= ROAD_TO; ++px)
        if (!simcity_recomp_stock_world_tile(game, px, ROAD_Y, &tile) || !tour_road_tile(tile)) goto fail;
    if (powered != 16u || !stock_funds(game, &funds) || !simcity_recomp_audio_static_status(game, &pcm) ||
        audio.modeled_underruns || audio.modeled_overflows || pcm.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto fail;
    snprintf(path, sizeof(path), "%s/stock-archipelago-rail-and-port.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto fail;
    snprintf(path, sizeof(path), "%s/stock-archipelago-rail-and-port.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto fail;
    printf("stock-archipelago-rail-port rail_water=%u powered_port_tiles=%u/16 funds=%u underruns=0 overflows=0\n",
        water, powered, funds);
    return 1;
fail: {
    uint16_t focus = 0u, notice = 0u, message = 0u;
    (void)stock_funds(game, &funds);
    (void)read_wram16(game, 0x0201u, &focus);
    (void)read_wram16(game, 0x0395u, &notice);
    (void)read_wram16(game, 0x0397u, &message);
    fprintf(stderr, "Outer Archipelago rail/port stopped at %s (%u,%u) tile=%04X powered=%u funds=%u focus=%04X notice=%u message=%u: %s\n",
        phase, px, py, tile, powered, funds, focus, notice, message, error);
    return 0;
}
}

/* The powered port center (0x026c) calls $03:AC5B; its edge-water
 * search initializes the ship position and flag at $03:AD24-AD34. */
static int stock_archipelago_ship_trace(SimCityRecomp *game, const char *directory, int east_only) {
    enum { LIMIT = 7200, STEP = 8, SHIP = 0x0a95, SHIP_X = 0x0a65, SHIP_Y = 0x0a63 };
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    char path[4096], error[256] = {0};
    uint16_t ship = 0u, x = 0u, y = 0u, prior_x = 0u, prior_y = 0u, port = 0u, tile = 0u;
    unsigned elapsed = 0u, first_seen = 0u, moves = 0u, deep_moves = 0u, extended_moves = 0u;
    unsigned arrivals = 0u, extended_arrivals = 0u;
    int was_active = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-archipelago-rail-and-port.scsnap", directory);
    if (east_only) {
        /* A detached copy of the controller-built harbor. Disable ship
         * entry at the other three edges without touching WRAM or RNG. */
        uint16_t *tiles = malloc(TOUR_WIDTH * TOUR_HEIGHT * sizeof(*tiles));
        SimCityRecompStockWorldPower *power = malloc(sizeof(*power));
        char test_path[4096];
        int ready = tiles && power && simcity_recomp_stock_world_snapshot_load(game, path,
            tiles, TOUR_WIDTH * TOUR_HEIGHT, power, error, sizeof(error));
        if (ready) {
            for (unsigned row = 0u; row < TOUR_HEIGHT; ++row) for (unsigned col = 0u; col < TOUR_WIDTH; ++col) {
                uint16_t *t = &tiles[row * TOUR_WIDTH + col];
                if ((!col || !row || row + 1u == TOUR_HEIGHT) && (*t & 0x03ffu) == 2u)
                    *t = (uint16_t)((*t & 0xfc00u) | 1u);
            }
            snprintf(test_path, sizeof(test_path), "%s/stock-archipelago-east-entry.scsnap", directory);
            ready = simcity_recomp_stock_world_snapshot_save(game, test_path, tiles,
                TOUR_WIDTH * TOUR_HEIGHT, power, error, sizeof(error));
            if (ready) snprintf(path, sizeof(path), "%s", test_path);
        }
        free(power);
        free(tiles);
        if (!ready || !read_wram16(game, SHIP, &ship) || ship) goto fail;
    }
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_tile(game, 75u, 44u, &port) || (port & 0x83ffu) != 0x826cu) goto fail;
    for (elapsed = 0u; elapsed <= LIMIT; elapsed += STEP) {
        if (!read_wram16(game, SHIP, &ship) || !read_wram16(game, SHIP_X, &x) ||
            !read_wram16(game, SHIP_Y, &y)) goto fail;
        if (ship) {
            x &= 255u; y &= 255u;
            const int deep = x < TOUR_WIDTH && y < TOUR_HEIGHT &&
                simcity_recomp_stock_world_tile(game, x, y, &tile) && (tile & 0x03ffu) == 2u;
            const int extended = x >= 120u || y >= 100u;
            if (!was_active) {
                const unsigned frame = simcity_recomp_current_frame(game);
                if (!first_seen) first_seen = frame;
                ++arrivals;
                extended_arrivals += deep && (east_only ? x + 2u >= TOUR_WIDTH : extended);
                printf("stock-archipelago-ship-arrival frame=%u at=(%u,%u) flags=%04X tile=%04X extended=%d\n",
                    frame, x, y, ship, tile, extended);
            } else if (x != prior_x || y != prior_y) {
                ++moves;
                deep_moves += deep;
                extended_moves += extended && deep;
            }
            prior_x = x; prior_y = y;
            if (east_only ? extended_arrivals && extended_moves >= 4u : deep_moves >= 4u) break;
        }
        was_active = ship != 0u;
        uint16_t notice;
        if (!read_wram16(game, 0x0395u, &notice) ||
            (notice && !stock_acknowledge_build_notice(game, &audio, "archipelago-ship")) ||
            !world_probe_step(game, &audio, 0u, STEP, 1, 0)) goto fail;
    }
    printf("stock-archipelago-ship arrivals=%u extended_arrivals=%u moves=%u deep_water_moves=%u extended_deep_moves=%u elapsed=%u last=(%u,%u) last_sampled_tile=%04X underruns=%u overflows=%u\n",
        arrivals, extended_arrivals, moves, deep_moves, extended_moves, elapsed, x, y, tile,
        audio.modeled_underruns, audio.modeled_overflows);
    if ((east_only ? !extended_arrivals || extended_moves < 4u : deep_moves < 4u) ||
        !simcity_recomp_audio_static_status(game, &pcm) ||
        pcm.pcm_overflows || audio.modeled_underruns || audio.modeled_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto fail;
    snprintf(path, sizeof(path), "%s/stock-archipelago-native-ship-checkpoint.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto fail;
    return 1;
fail:
    fprintf(stderr, "Outer Archipelago ship trace failed: first_seen=%u moves=%u deep_water_moves=%u port=%04X %s\n",
        first_seen, moves, deep_moves, port, error);
    return 0;
}

/* Accept the original annual budget with controller input. Never dismiss
   the native screen by editing its state or changing its tax settings. */
static int tour_accept_annual_budget(SimCityRecomp *game, WorldProbe *audio) {
    uint16_t modal;
    if (!read_wram16(game, 0x0dc3u, &modal)) return 0;
    if (modal != UINT16_MAX) return 1;
    if (!world_probe_step(game, audio, 0u, 60u, 0, 0)) return 0;
    for (unsigned moves = 0u; moves < 28u; ++moves) {
        uint16_t x, y;
        if (!read_wram16(game, 0x0dc3u, &modal)) return 0;
        if (modal != UINT16_MAX) return 1;
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
        if (y >= 200u && x >= 72u && x <= 187u) {
            printf("stock-construction-budget confirm=(%u,%u) frame=%u\n",
                   x, y, simcity_recomp_current_frame(game));
            if (!stock_press(game, audio, SIMCITY_INPUT_B, 90u)) return 0;
            for (unsigned settle = 0; settle < 600u; settle += 60u) {
                if (!read_wram16(game, 0x0dc3u, &modal)) return 0;
                if (modal != UINT16_MAX) return 1;
                if (!world_probe_step(game, audio, 0u, 60u, 0, 0)) return 0;
            }
            return read_wram16(game, 0x0dc3u, &modal) && modal != UINT16_MAX;
        }
        if (!stock_press(game, audio, y < 200u ? SIMCITY_INPUT_DOWN :
                         x < 72u ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT, 18u)) return 0;
    }
    return 0;
}

/* Return true only if an annual budget interrupted the attempted action. */
static int tour_recover_annual_budget(SimCityRecomp *game, WorldProbe *audio) {
    uint16_t modal;
    return read_wram16(game, 0x0dc3u, &modal) && modal == UINT16_MAX &&
           tour_accept_annual_budget(game, audio);
}

static int tour_finish_tool_focus(SimCityRecomp *game, WorldProbe *audio, unsigned wanted) {
    uint16_t tool, hud, focus, notice;
    if (!read_wram16(game, 0x020du, &tool) || tool != wanted) return 0;
    /* Keep an already selected tool if focus is late to return to the map.
       Let each real button finish before deciding the next one. */
    for (unsigned attempt = 0u; attempt < 5u; ++attempt) {
        if (!tour_accept_annual_budget(game, audio) ||
            !read_wram16(game, 0x0395u, &notice) ||
            !read_wram16(game, 0x0201u, &focus) ||
            !read_wram16(game, 0x01d7u, &hud)) return 0;
        if (notice) {
            if (!stock_acknowledge_build_notice(game, audio, "tool-focus")) return 0;
            continue;
        }
        if (focus == 0xffu && !hud) {
            printf("stock-construction restored map focus tool=%u attempts=%u\n", wanted, attempt);
            return read_wram16(game, 0x020du, &tool) && tool == wanted;
        }
        if (!stock_press(game, audio, focus == 0xffu || !hud ?
                         SIMCITY_INPUT_X : SIMCITY_INPUT_SELECT, 80u)) return 0;
    }
    fprintf(stderr, "Tool focus did not stabilize: tool=%u focus=%04X hud=%04X\n",
            wanted, focus, hud);
    return 0;
}

static int tour_construction_select(SimCityRecomp *game, WorldProbe *audio,
                                    unsigned tool, int long_run) {
    if (!long_run) return stock_world_select_tool(game, audio, tool);
    for (unsigned attempt = 0u; attempt < 3u; ++attempt) {
        if (!tour_accept_annual_budget(game, audio) ||
            !stock_acknowledge_build_notice(game, audio, "before-tool-select")) return 0;
        if (stock_world_select_tool(game, audio, tool)) return 1;
        uint16_t notice, budget, actual;
        if (!read_wram16(game, 0x0395u, &notice) ||
            !read_wram16(game, 0x0dc3u, &budget) ||
            !read_wram16(game, 0x020du, &actual)) return 0;
        printf("stock-construction-tool-interrupted requested=%u actual=%u notice=%04X budget=%04X\n",
               tool, actual, notice, budget);
        if (notice || budget == UINT16_MAX) continue;
        if (actual == tool && tour_finish_tool_focus(game, audio, tool)) return 1;
        return 0;
    }
    return 0;
}

static int tour_construction_tap(SimCityRecomp *game, WorldProbe *audio,
                                 unsigned cell, uint16_t *tile, unsigned tool, int long_run) {
    if (long_run && !tour_accept_annual_budget(game, audio)) return 0;
    if (tour_tap_cell(game, audio, cell, tile)) return 1;
    if (!long_run) return 0;
    if (tour_recover_annual_budget(game, audio))
        return stock_world_select_tool(game, audio, tool) && tour_tap_cell(game, audio, cell, tile);
#ifdef _WIN32
    if (live_construction_enabled && !simcity_recomp_failed(game)) {
        uint16_t notice = 0u, focus = 0u;
        if (!read_wram16(game, 0x0395u, &notice) ||
            !read_wram16(game, 0x0201u, &focus) || (!notice && focus == 0xffu)) return 0;
        if (stock_acknowledge_build_notice(game, audio, "navigation") &&
            tour_construction_select(game, audio, tool, 1)) {
            printf("stock-infill-recovered-navigation cell=(%u,%u) tool=%u\n",
                   cell % TOUR_WIDTH, cell / TOUR_WIDTH, tool);
            return tour_tap_cell(game, audio, cell, tile);
        }
    }
#endif
    return 0;
}

static unsigned tour_lot_service(const TourDistrict *work, unsigned lot, unsigned size,
                                  unsigned *powered) {
    unsigned served = 0u;
    *powered = 0u;
    for (unsigned p = 0u; p < size * 4u; ++p) {
        const uint16_t tile = work->tiles[tour_perimeter(lot, size, p)];
        if (tour_road_tile(tile)) served |= 1u;
        if (tour_rail_tile(tile)) served |= 2u;
        if (tour_power_tile(tile) && (tile & 0x8000u)) served |= 4u;
    }
    for (unsigned p = 0u; p < size * size; ++p)
        *powered += (work->tiles[lot + p / size * TOUR_WIDTH + p % size] & 0x8000u) != 0u;
    return served;
}

static int stock_repro_infill_north_feeder(SimCityRecomp *game, const char *directory) {
    char path[4096], error[256] = {0};
    WorldProbe audio = {0};
    uint16_t before, after, selected;
    snprintf(path, sizeof(path), "%s/stock-world-construction-infill-partial.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !read_wram16(game, 0x020du, &selected) || selected != 3u ||
        !simcity_recomp_stock_world_tile(game, 55u, 3u, &before) || tour_power_tile(before) ||
        !tour_tap_cell(game, &audio, 3u * TOUR_WIDTH + 55u, &after) || !tour_power_tile(after)) {
        fprintf(stderr, "North-edge controller feeder regression failed: %s\n", error);
        return 0;
    }
    printf("stock-north-feeder-recovered cell=(55,3) before=%04X after=%04X pcm=%llu\n",
           before, after, (unsigned long long)audio.frames);
    return 1;
}

static int stock_world_buildings_probe(SimCityRecomp *game, const char *directory, int all_quadrants) {
    static const unsigned districts[] = {2u, 1u, 3u, 0u};
    static const TourBuilding buildings[] = {
        {"airport", 12u, 6u, 0x297u, 0u}, {"seaport", 11u, 4u, 0x267u, 0u},
        {"stadium", 10u, 4u, 0x257u, 0x366u}, {"nuclear", 13u, 4u, 0x277u, 0u},
        {"residential", 5u, 3u, 0x080u, 0u}, {"commercial", 6u, 3u, 0x137u, 0u},
        {"industrial", 7u, 3u, 0x1f4u, 0u}, {"police", 8u, 3u, 0x245u, 0u},
        {"fire", 9u, 3u, 0x24eu, 0u}, {"park", 4u, 1u, 0x026u, 0x027u}
    };
    enum { BUILDING_TYPES = sizeof(buildings) / sizeof(buildings[0]) };
    const unsigned types = BUILDING_TYPES;
    const unsigned target = types * (all_quadrants ? 4u : 1u);
    const char *out = all_quadrants ? "construction-quadrants" : "buildings";
    TourDistrict *work = malloc(sizeof(*work));
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    unsigned lot[4u * BUILDING_TYPES], coal_lot[4], built = 0u, funds = 0u;
    int ok = 0;
    if (!work) return 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-world-utilities.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) goto finish;
    if (all_quadrants && (!simcity_recomp_probe_world_funds(game) ||
                          !stock_funds(game, &funds) || funds != 999999u)) goto finish;
    if (all_quadrants) {
        unsigned found = 0u;
        /* These four coal plants were placed by the menu/controller route
           that produced the utility snapshot, not injected as test tiles. */
        if (!tour_read_world(game, work)) goto finish;
        for (unsigned cell = 0u; cell < TOUR_CELLS; ++cell) {
            if ((work->tiles[cell] & 0x03ffu) != 0x287u) continue;
            const unsigned x = cell % TOUR_WIDTH, y = cell / TOUR_WIDTH;
            const unsigned q = (x >= 120u) | ((y >= 100u) << 1u);
            unsigned powered;
            if (x < 1u || y < 1u || x + 4u >= TOUR_WIDTH || y + 4u >= TOUR_HEIGHT ||
                (found & (1u << q)) || !stock_world_plant_lot(game, x, y, 1) ||
                tour_lot_service(work, cell, 4u, &powered) != 7u || powered != 16u)
                goto finish;
            coal_lot[q] = cell;
            found |= 1u << q;
        }
        if (found != 15u) goto finish;
        printf("stock-construction-start source=controller-utilities planned_sites=%u seeded_coal=4 treasury=%u\n",
               target, funds);
        fflush(stdout);
    }
    for (unsigned i = 0u; i < target; ++i) {
        const TourBuilding *b = &buildings[i % types];
        uint16_t tile = 0u, ax = 0u, ay = 0u;
        if (!tour_read_world(game, work)) goto finish;
        int planned = 0;
        if (all_quadrants) {
            const unsigned district = districts[i / types];
            planned = tour_plan_lot(work, b, district, 0u, 0u, 1, &lot[i]) ||
                      tour_plan_lot(work, b, district, 0u, 0u, 0, &lot[i]);
        } else {
            for (unsigned j = 0u; j < 4u && !planned; ++j)
                planned = tour_plan_lot(work, b, districts[(i + j) % 4u], 0u, 0u, 0, &lot[i]);
        }
        if (!planned) {
            fprintf(stderr, "No served district parcel found for %s\n", b->name);
            goto finish;
        }
        const unsigned x = lot[i] % TOUR_WIDTH, y = lot[i] / TOUR_WIDTH;
        printf("stock-building plan=%s lot=(%u,%u) road_branch=%u rail_branch=%u power_branch=%u\n",
               b->name, x, y, work->lengths[0], work->lengths[1], work->lengths[2]);
        fflush(stdout);
        if (!tour_construction_select(game, &audio, b->tool, all_quadrants) ||
            !tour_construction_tap(game, &audio, lot[i], &tile, b->tool, all_quadrants) ||
            ((tile & 0x03ffu) != b->first &&
             (!b->alternate || (tile & 0x03ffu) != b->alternate))) {
            (void)read_wram16(game, 0x0205u, &ax);
            (void)read_wram16(game, 0x0207u, &ay);
            fprintf(stderr, "Building placement failed: %s target=(%u,%u) anchor=(%u,%u) tile=%04X\n",
                    b->name, x, y, ax, ay, tile);
            goto finish;
        }
        const unsigned base = tile & 0x03ffu;
        uint64_t footprint = 0u;
        for (unsigned k = 0u; k < b->size * b->size; ++k) {
            if (!simcity_recomp_stock_world_tile(game, x + k % b->size, y + k / b->size, &tile) ||
                (tile & 0x03ffu) < base || (tile & 0x03ffu) >= base + b->size * b->size) {
                fprintf(stderr, "Unexpected %s footprint tile (%u,%u) code=%04X\n",
                        b->name, x + k % b->size, y + k / b->size, tile);
                goto finish;
            }
            footprint |= UINT64_C(1) << ((tile & 0x03ffu) - base);
        }
        if (footprint != (UINT64_C(1) << (b->size * b->size)) - 1u) goto finish;
        for (unsigned type = 0u; type < 3u; ++type) {
            if (!work->lengths[type]) continue;
            if (!tour_construction_select(game, &audio, type + 1u, all_quadrants)) goto finish;
            for (unsigned k = 0u; k < work->lengths[type]; ++k) {
                const unsigned at = all_quadrants ? work->lengths[type] - 1u - k : k;
                const unsigned cell = work->branches[type][at];
                if ((!tour_construction_tap(game, &audio, cell, &tile, type + 1u, all_quadrants) ||
                      !tour_services[type](tile)) &&
                    !stock_road_retry(game, &audio, cell % TOUR_WIDTH, cell / TOUR_WIDTH,
                                      &tile, NULL, tour_services[type])) {
                    fprintf(stderr, "Building feeder failed: %s type=%u cell=(%u,%u) tile=%04X\n",
                            b->name, type + 1u, cell % TOUR_WIDTH, cell / TOUR_WIDTH, tile);
                    goto finish;
                }
            }
        }
        ++built;
        if (all_quadrants)
            snprintf(path, sizeof(path), "%s/stock-construction-q%u-%s.bmp", directory,
                     districts[i / types], b->name);
        else snprintf(path, sizeof(path), "%s/stock-world-building-%s.bmp", directory, b->name);
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game),
                       simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT))
            goto finish;
        printf("stock-building built=%s frame=%u\n", b->name, simcity_recomp_current_frame(game));
        if (all_quadrants && built % types == 0u) {
            snprintf(path, sizeof(path), "%s/stock-world-%s-q%u.scsnap", directory,
                     out, districts[i / types]);
            if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
            printf("stock-construction-checkpoint quadrant=%u built=%u/%u pcm=%llu underruns=%u overflows=%u\n",
                   districts[i / types], built, target, (unsigned long long)audio.frames,
                   audio.modeled_underruns, audio.modeled_overflows);
        }
        fflush(stdout);
    }
    if (all_quadrants) {
        unsigned age = 0u, verified = 0u;
        do {
            verified = 0u;
            if (!tour_read_world(game, work)) goto finish;
            for (unsigned i = 0u; i < built; ++i) {
                const TourBuilding *b = &buildings[i % types];
                unsigned powered;
                const unsigned served = tour_lot_service(work, lot[i], b->size, &powered);
                verified += served == 7u && (b->tool == 4u || powered == b->size * b->size);
            }
            printf("stock-construction-settle guest_frames=%u served=%u/%u\n", age, verified, built);
            fflush(stdout);
            if (verified == built || age == 18000u) break;
            for (unsigned step = 0u; step < 600u; step += 120u)
                if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                    !tour_accept_annual_budget(game, &audio)) goto finish;
            age += 600u;
        } while (1);
    } else if (!world_probe_step(game, &audio, 0u, 1500u, 0, 0) ||
               !tour_read_world(game, work)) goto finish;
    if (!simcity_recomp_audio_static_status(game, &status)) goto finish;
    for (unsigned i = 0u; i < built; ++i) {
        const TourBuilding *b = &buildings[i % types];
        const unsigned size = b->size;
        unsigned powered;
        const unsigned served = tour_lot_service(work, lot[i], size, &powered);
        if (all_quadrants) printf("stock-construction-service quadrant=%u lot=(%u,%u) ",
                                  districts[i / types], lot[i] % TOUR_WIDTH, lot[i] / TOUR_WIDTH);
        printf("stock-building verified=%s road=%u rail=%u energized_line=%u powered_footprint=%u/%u\n",
               b->name, served & 1u, (served >> 1u) & 1u, (served >> 2u) & 1u,
               powered, size * size);
        /* A park doesn't conduct power, but the lot still has a powered
           line along its edge, like the other building sites. */
        if (served != 7u || (b->tool != 4u && powered != size * size)) goto finish;
    }
    if (all_quadrants) {
        for (unsigned q = 0u; q < 4u; ++q) {
            const unsigned x = coal_lot[q] % TOUR_WIDTH, y = coal_lot[q] / TOUR_WIDTH;
            unsigned powered;
            const unsigned served = tour_lot_service(work, coal_lot[q], 4u, &powered);
            printf("stock-construction-service quadrant=%u lot=(%u,%u) stock-building verified=coal road=%u rail=%u energized_line=%u powered_footprint=%u/16\n",
                   q, x, y, served & 1u, (served >> 1u) & 1u, (served >> 2u) & 1u, powered);
            if (served != 7u || powered != 16u || !stock_world_plant_lot(game, x, y, 1)) goto finish;
        }
        printf("stock-construction-summary built=%u/%u frame=%u pcm=%llu audio=%016llX unknown=%llu underruns=%u overflows=%u core_overflows=%llu dropped=%llu new_sites=%u seeded_coal=4\n",
               built + 4u, target + 4u, simcity_recomp_current_frame(game),
               (unsigned long long)audio.frames, (unsigned long long)audio.hash,
               (unsigned long long)status.pcm_unknown_frames, audio.modeled_underruns,
               audio.modeled_overflows, (unsigned long long)status.pcm_overflows,
               (unsigned long long)simcity_recomp_audio_dropped_frames(game), built);
        if (status.pcm_unknown_frames) goto finish;
    }
    snprintf(path, sizeof(path), "%s/stock-world-%s.scsnap", directory, out);
    ok = !audio.modeled_underruns && !audio.modeled_overflows && !status.pcm_overflows &&
         !simcity_recomp_audio_dropped_frames(game) &&
         simcity_recomp_snapshot_save(game, path, error, sizeof(error));
finish:
    if (!ok) {
        fprintf(stderr, "Stock building stress stopped after %u buildings at frame %u: %s %s\n",
                built, simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
        if (built && !simcity_recomp_failed(game)) {
            snprintf(path, sizeof(path), "%s/stock-world-%s-partial.scsnap", directory, out);
            (void)simcity_recomp_snapshot_save(game, path, NULL, 0u);
        }
    }
    free(work);
    return ok;
}

enum { INFILL_RESIDENTIAL, INFILL_COMMERCIAL, INFILL_INDUSTRIAL, INFILL_AIRPORT,
       INFILL_SEAPORT, INFILL_STADIUM, INFILL_NUCLEAR, INFILL_POLICE, INFILL_FIRE,
       INFILL_PARK, INFILL_COAL, INFILL_KINDS };
enum { INFILL_SECTORS = 16, INFILL_ZONE_KINDS = 3, INFILL_ROUNDS = 3,
       INFILL_STAGES = INFILL_SECTORS * INFILL_ROUNDS,
       INFILL_PER_SECTOR = INFILL_ROUNDS * INFILL_ZONE_KINDS + 4,
       INFILL_LOTS = INFILL_SECTORS * INFILL_PER_SECTOR, INFILL_BASE = 44,
       INFILL_DENSE_ROUNDS = 14, INFILL_DENSE_STAGES = INFILL_SECTORS * INFILL_DENSE_ROUNDS,
       INFILL_DENSE_PER_SECTOR = INFILL_PER_SECTOR + (INFILL_DENSE_ROUNDS - INFILL_ROUNDS) * 4 +
                                 (INFILL_DENSE_ROUNDS - INFILL_ROUNDS + 3) / 4,
       INFILL_DENSE_LOTS = INFILL_SECTORS * INFILL_DENSE_PER_SECTOR };

static const TourBuilding infill_buildings[] = {
    {"residential", 5u, 3u, 0x080u, 0u}, {"commercial", 6u, 3u, 0x137u, 0u},
    {"industrial", 7u, 3u, 0x1f4u, 0u}, {"airport", 12u, 6u, 0x297u, 0u},
    {"seaport", 11u, 4u, 0x267u, 0u}, {"stadium", 10u, 4u, 0x257u, 0x366u},
    {"nuclear", 13u, 4u, 0x277u, 0u}, {"police", 8u, 3u, 0x245u, 0u},
    {"fire", 9u, 3u, 0x24eu, 0u}, {"park", 4u, 1u, 0x026u, 0x027u},
    {"coal", 14u, 4u, 0x287u, 0u}
};

typedef struct InfillLot {
    unsigned cell, kind;
} InfillLot;

typedef struct InfillProgress {
    InfillLot base[INFILL_BASE], added[INFILL_DENSE_LOTS];
    uint8_t protected_cells[TOUR_CELLS];
    unsigned feeders[INFILL_SECTORS][3];
    unsigned count, stage, base_frame;
} InfillProgress;

static unsigned infill_sector(unsigned cell) {
    return (cell % TOUR_WIDTH) / 60u + 4u * ((cell / TOUR_WIDTH) / 50u);
}

static unsigned infill_stage_sector(unsigned stage) {
    const unsigned stripe = stage % INFILL_SECTORS, row = stripe / 4u;
    return row * 4u + ((row & 1u) ? 3u - stripe % 4u : stripe % 4u);
}

static unsigned infill_stage_mask(unsigned sector, unsigned round) {
    static const unsigned civic[] = {INFILL_POLICE, INFILL_FIRE, INFILL_PARK};
    if (round >= INFILL_ROUNDS) {
        static const unsigned majors[] = {INFILL_AIRPORT, INFILL_SEAPORT, INFILL_STADIUM, INFILL_NUCLEAR, INFILL_COAL};
        const unsigned extra = round - INFILL_ROUNDS;
        const unsigned major = majors[(sector / 4u + sector % 4u + extra / 4u) % 5u];
        return ((1u << INFILL_ZONE_KINDS) - 1u) | (1u << civic[(extra + sector) % 3u]) |
               (extra % 4u == 0u ? (1u << major) : 0u);
    }
    /* Every row and column gets each major building exactly once across
       its four sectors. Spread the expensive builds over two sweeps. */
    const unsigned major = INFILL_AIRPORT + ((sector / 4u + sector % 4u) & 3u);
    return ((1u << INFILL_ZONE_KINDS) - 1u) | (1u << civic[round]) |
           (round == (sector & 1u) ? (1u << major) : 0u);
}

static void infill_quotas(unsigned completed, unsigned quotas[INFILL_SECTORS][INFILL_KINDS]) {
    memset(quotas, 0, INFILL_SECTORS * INFILL_KINDS * sizeof(unsigned));
    for (unsigned stage = 0u; stage < completed; ++stage) {
        const unsigned sector = infill_stage_sector(stage);
        const unsigned mask = infill_stage_mask(sector, stage / INFILL_SECTORS);
        for (unsigned kind = 0u; kind < INFILL_KINDS; ++kind)
            quotas[sector][kind] += (mask >> kind) & 1u;
    }
}

static int infill_lot_fits(unsigned x, unsigned y, unsigned size) {
    return x > 0u && y > 0u && x < TOUR_WIDTH - size && y < TOUR_HEIGHT - size;
}

/* The prerequisite is the R3 construction result, not a hand-authored
   tile fixture. The log carries the exact addresses and original menu
   identities needed to preserve all 44 existing sites during infill. */
static int infill_read_baseline(const char *directory, InfillProgress *progress) {
    char path[4096], line[1024], name[32];
    unsigned seen[4] = {0}, entries = 0u;
    int verified = 0;
    snprintf(path, sizeof(path), "%s/construction.log", directory);
    FILE *input = fopen(path, "rb");
    if (!input) return 0;
    while (fgets(line, sizeof(line), input)) {
        unsigned q, x, y, powered, size, built, target, frame;
        if (sscanf(line, "stock-construction-service quadrant=%u lot=(%u,%u) stock-building verified=%31[a-z] road=1 rail=1 energized_line=1 powered_footprint=%u/%u",
                   &q, &x, &y, name, &powered, &size) == 6) {
            unsigned kind = 0u;
            while (kind < sizeof(infill_buildings) / sizeof(infill_buildings[0]) &&
                   strcmp(name, infill_buildings[kind].name)) ++kind;
            if (kind == sizeof(infill_buildings) / sizeof(infill_buildings[0]) ||
                entries == INFILL_BASE || q > 3u ||
                q != ((x >= 120u ? 1u : 0u) | (y >= 100u ? 2u : 0u)) ||
                (seen[q] & (1u << kind)) || !infill_lot_fits(x, y, infill_buildings[kind].size) ||
                size != infill_buildings[kind].size * infill_buildings[kind].size ||
                (infill_buildings[kind].tool != 4u && powered != size)) break;
            seen[q] |= 1u << kind;
            progress->base[entries++] = (InfillLot){y * TOUR_WIDTH + x, kind};
        } else if (sscanf(line, "stock-construction-summary built=%u/%u frame=%u",
                          &built, &target, &frame) == 3) {
            if (built != INFILL_BASE || target != INFILL_BASE || entries != INFILL_BASE ||
                !strstr(line, "unknown=0 underruns=0 overflows=0 core_overflows=0 dropped=0")) break;
            progress->base_frame = frame;
            verified = 1;
            break;
        }
    }
    if (ferror(input)) verified = 0;
    fclose(input);
    return verified;
}

static void infill_stage_path(char *path, size_t capacity, const char *directory,
                              unsigned stage, const char *extension) {
    snprintf(path, capacity, "%s/stock-world-infill-%02u.%s", directory, stage, extension);
}

static void infill_save_path(char *path, size_t capacity, const char *directory,
                             unsigned index, const char *extension, int per_lot) {
    if (per_lot)
        snprintf(path, capacity, "%s/stock-world-infill-lot-%03u.%s", directory, index, extension);
    else
        infill_stage_path(path, capacity, directory, index, extension);
}

static int infill_write_manifest(const char *path, const InfillProgress *progress,
    unsigned frame, uint64_t clock, int exclusive) {
    FILE *output = fopen(path, exclusive ? "wbx" : "wb");
    if (!output) return 0;
    int ok = fprintf(output, "SCWORLD-INFILL 2 %u %u %u %u %llu\n", progress->stage,
        progress->count, progress->base_frame, frame, (unsigned long long)clock) > 0;
    for (unsigned i = 0u; ok && i < progress->count; ++i)
        ok = fprintf(output, "%u %u\n", progress->added[i].kind, progress->added[i].cell) > 0;
    for (unsigned sector = 0u; ok && sector < INFILL_SECTORS; ++sector)
        ok = fprintf(output, "feeders %u %u %u %u\n", sector, progress->feeders[sector][0],
            progress->feeders[sector][1], progress->feeders[sector][2]) > 0;
    if (ok) ok = fputs("END\n", output) >= 0;
    if (fclose(output) != 0) ok = 0;
    return ok;
}

#ifdef _WIN32
typedef struct InfillSavePayload {
    volatile LONG references;
    INIT_ONCE seal;
    void *snapshot;
    size_t bytes;
} InfillSavePayload;

typedef struct InfillSaveJob {
    char snapshot_path[4096], manifest_path[4096];
    InfillProgress progress;
    InfillSavePayload *payload;
    unsigned frame;
    uint64_t clock;
    int per_lot;
} InfillSaveJob;

static HANDLE infill_save_threads[4];
static int infill_save_error;
static InfillSavePayload *infill_recent_lot_capture;
static const SimCityRecomp *infill_recent_lot_game;
static unsigned infill_recent_lot_frame, infill_recent_lot_count, infill_recent_lot_stage;
static uint64_t infill_recent_lot_clock;

static void infill_payload_release(InfillSavePayload *payload) {
    if (payload && InterlockedDecrement(&payload->references) == 0) {
        simcity_recomp_snapshot_release(payload->snapshot);
        free(payload);
    }
}

static void infill_forget_lot_capture(void) {
    infill_payload_release(infill_recent_lot_capture);
    infill_recent_lot_capture = NULL;
    infill_recent_lot_game = NULL;
}

static BOOL CALLBACK infill_seal_payload(PINIT_ONCE once, PVOID opaque, PVOID *context) {
    InfillSavePayload *payload = opaque;
    (void)once;
    (void)context;
    return simcity_recomp_snapshot_seal(payload->snapshot, payload->bytes) != 0;
}

static DWORD WINAPI infill_write_saved_pair(void *opaque) {
    InfillSaveJob *job = opaque;
    const double begin = gameplay_clock();
    /* A lot and sector pair can share these bytes. Seal exactly once and
       publish the header before either writer reads the buffer. */
    const int sealed = InitOnceExecuteOnce(&job->payload->seal, infill_seal_payload, job->payload, NULL);
    const double seal_finished = gameplay_clock();
    const int ok = sealed && write_new_file(job->snapshot_path, job->payload->snapshot, job->payload->bytes) &&
        infill_write_manifest(job->manifest_path, &job->progress, job->frame, job->clock, 1);
    printf("stock-infill-save-finished stage=%u lots=%u per_lot=%d frame=%u committed=%d disk_ms=%.2f seal_ms=%.2f\n",
           job->progress.stage, job->progress.count, job->per_lot, job->frame, ok,
           (gameplay_clock() - seal_finished) * 1000.0, (seal_finished - begin) * 1000.0);
    fflush(stdout);
    infill_payload_release(job->payload);
    free(job);
    return ok ? 0u : 1u;
}

static int infill_collect_saves(int finish) {
    int ok = 1;
    if (finish) infill_forget_lot_capture();
    for (unsigned i = 0u; i < sizeof(infill_save_threads) / sizeof(infill_save_threads[0]); ++i) {
        const HANDLE thread = infill_save_threads[i];
        if (!thread) continue;
        const DWORD wait = WaitForSingleObject(thread, finish ? INFINITE : 0u);
        if (wait == WAIT_TIMEOUT) continue;
        DWORD status = 1u;
        if (wait != WAIT_OBJECT_0 || !GetExitCodeThread(thread, &status) || status != 0u) {
            ok = 0;
            infill_save_error = 1;
        }
        CloseHandle(thread);
        infill_save_threads[i] = NULL;
    }
    return ok;
}

static int infill_queue_checkpoint(SimCityRecomp *game, const char *directory,
    const InfillProgress *progress, char *error, size_t error_capacity, int per_lot) {
    if (!infill_collect_saves(0)) return 0;
    unsigned slot = 0u;
    while (slot < sizeof(infill_save_threads) / sizeof(infill_save_threads[0]) &&
           infill_save_threads[slot]) ++slot;
    if (slot == sizeof(infill_save_threads) / sizeof(infill_save_threads[0])) {
        /* Don't block the audio path on pathological disk backlog. The
           existing committed checkpoint remains loadable. */
        fprintf(stderr, "Infill checkpoint queue saturated.\n");
        return 0;
    }
    InfillSaveJob *job = calloc(1u, sizeof(*job));
    if (!job) return 0;
    job->progress = *progress;
    job->frame = simcity_recomp_current_frame(game);
    job->clock = simcity_recomp_master_clock(game);
    job->per_lot = per_lot;
    const unsigned index = per_lot ? progress->count : progress->stage;
    infill_save_path(job->snapshot_path, sizeof(job->snapshot_path), directory, index, "scsnap", per_lot);
    infill_save_path(job->manifest_path, sizeof(job->manifest_path), directory, index, "txt", per_lot);
    const double begin = gameplay_clock();
    /* The live infill loop can publish a sector boundary immediately
       after saving its final lot, without advancing the guest. The two
       manifests have distinct stages, but the detached city bytes match.
       No reuse across a guest step, a different lot, or another game. */
    const int shared = !per_lot && infill_recent_lot_capture && infill_recent_lot_game == game &&
        infill_recent_lot_count == progress->count && infill_recent_lot_frame == job->frame &&
        infill_recent_lot_clock == job->clock && progress->stage == infill_recent_lot_stage + 1u;
    if (shared) {
        job->payload = infill_recent_lot_capture;
        InterlockedIncrement(&job->payload->references);
    }
    infill_forget_lot_capture();
    if (!shared) {
        job->payload = calloc(1u, sizeof(*job->payload));
        if (!job->payload) { free(job); return 0; }
        job->payload->references = 1;
        InitOnceInitialize(&job->payload->seal);
        if (!simcity_recomp_snapshot_capture_deferred(game, &job->payload->snapshot,
                &job->payload->bytes, error, error_capacity)) {
            infill_payload_release(job->payload);
            free(job);
            return 0;
        }
    }
    if (per_lot) {
        InterlockedIncrement(&job->payload->references);
        infill_recent_lot_capture = job->payload;
        infill_recent_lot_game = game;
        infill_recent_lot_frame = job->frame;
        infill_recent_lot_count = progress->count;
        infill_recent_lot_stage = progress->stage;
        infill_recent_lot_clock = job->clock;
    }
    const double captured_ms = (gameplay_clock() - begin) * 1000.0;
    infill_save_threads[slot] = CreateThread(NULL, 0u, infill_write_saved_pair, job, 0u, NULL);
    if (!infill_save_threads[slot]) {
        infill_forget_lot_capture();
        infill_payload_release(job->payload);
        free(job);
        return 0;
    }
    printf("stock-infill-save-queued stage=%u lots=%u per_lot=%d frame=%u capture_ms=%.2f shared_capture=%d\n",
           progress->stage, progress->count, per_lot, simcity_recomp_current_frame(game), captured_ms, shared);
    return 1;
}
#endif

/* Each committed sector or lot has its own files. A crash writing a
   newer checkpoint leaves previously completed work intact. */
static int infill_checkpoint(SimCityRecomp *game, const char *directory,
                             const InfillProgress *progress, char *error, size_t error_capacity, int per_lot) {
#ifdef _WIN32
    if (live_construction_enabled)
        return infill_queue_checkpoint(game, directory, progress, error, error_capacity, per_lot);
#endif
    char path[4096];
    const unsigned index = per_lot ? progress->count : progress->stage;
    infill_save_path(path, sizeof(path), directory, index, "scsnap", per_lot);
    const double start = gameplay_clock();
    if (!simcity_recomp_snapshot_save(game, path, error, error_capacity)) return 0;
    const double snapshot_complete = gameplay_clock();
    infill_save_path(path, sizeof(path), directory, index, "txt", per_lot);
    const int ok = infill_write_manifest(path, progress, simcity_recomp_current_frame(game),
                                         simcity_recomp_master_clock(game), 0);
    if (ok) printf("stock-infill-save-work stage=%u lots=%u per_lot=%d snapshot_ms=%.2f manifest_ms=%.2f\n",
        progress->stage, progress->count, per_lot, (snapshot_complete - start) * 1000.0,
        (gameplay_clock() - snapshot_complete) * 1000.0);
    return ok;
}

typedef struct InfillCandidate {
    unsigned index, stage, frame;
    int per_lot;
} InfillCandidate;

static int newer_infill_candidate(const void *ptr_a, const void *ptr_b) {
    const InfillCandidate *a = ptr_a, *b = ptr_b;
    if (a->frame != b->frame) return a->frame > b->frame ? -1 : 1;
    return (b->stage > a->stage) - (b->stage < a->stage);
}

static int infill_resume(SimCityRecomp *game, const char *directory,
                         InfillProgress *progress, char *error, size_t error_capacity) {
    char path[4096], end[5];
    InfillCandidate candidates[INFILL_DENSE_STAGES + INFILL_DENSE_LOTS];
    unsigned candidate_count = 0u;
    for (int per_lot = 0; per_lot <= 1; ++per_lot) {
        const unsigned limit = per_lot ? INFILL_DENSE_LOTS : INFILL_DENSE_STAGES;
        for (unsigned index = 1u; index <= limit; ++index) {
            infill_save_path(path, sizeof(path), directory, index, "txt", per_lot);
            FILE *header = fopen(path, "rb");
            if (!header) continue;
            unsigned stage, count, base, frame;
            const int valid = fscanf(header, "SCWORLD-INFILL 2 %u %u %u %u",
                &stage, &count, &base, &frame) == 4 &&
                stage <= INFILL_DENSE_STAGES && count <= INFILL_DENSE_LOTS &&
                (per_lot ? (count == index && stage < INFILL_DENSE_STAGES) : stage == index) &&
                base == progress->base_frame && frame >= base;
            fclose(header);
            if (valid) candidates[candidate_count++] = (InfillCandidate){index, stage, frame, per_lot};
        }
    }
    qsort(candidates, candidate_count, sizeof(candidates[0]), newer_infill_candidate);
    for (unsigned n = 0u; n < candidate_count; ++n) {
        const InfillCandidate c = candidates[n];
        const unsigned stage = c.stage;
        infill_save_path(path, sizeof(path), directory, c.index, "txt", c.per_lot);
        FILE *input = fopen(path, "rb");
        if (!input) continue;
        unsigned stored_stage, count, base_frame, frame;
        unsigned quota[INFILL_SECTORS][INFILL_KINDS];
        unsigned seen[INFILL_SECTORS][INFILL_KINDS] = {{0}};
        unsigned long long clock;
        infill_quotas(stage + (unsigned)c.per_lot, quota);
        int ok = fscanf(input, "SCWORLD-INFILL 2 %u %u %u %u %llu",
                        &stored_stage, &count, &base_frame, &frame, &clock) == 5 &&
                 stage == stored_stage && count <= INFILL_DENSE_LOTS && frame == c.frame &&
                 (!c.per_lot || count == c.index) &&
                 base_frame == progress->base_frame && frame >= base_frame;
        for (unsigned i = 0u; ok && i < count; ++i) {
            InfillLot *lot = &progress->added[i];
            ok = fscanf(input, "%u %u", &lot->kind, &lot->cell) == 2 &&
                 lot->kind < INFILL_KINDS && lot->cell < TOUR_CELLS &&
                 infill_lot_fits(lot->cell % TOUR_WIDTH, lot->cell / TOUR_WIDTH,
                                 infill_buildings[lot->kind].size);
            if (ok) {
                const unsigned sector = infill_sector(lot->cell);
                ok = ++seen[sector][lot->kind] <= quota[sector][lot->kind];
            }
        }
        for (unsigned sector = 0u; ok && sector < INFILL_SECTORS; ++sector) {
            unsigned stored_sector;
            ok = fscanf(input, " feeders %u %u %u %u", &stored_sector,
                &progress->feeders[sector][0], &progress->feeders[sector][1],
                &progress->feeders[sector][2]) == 4 && stored_sector == sector;
        }
        ok = ok && fscanf(input, "%4s", end) == 1 && !strcmp(end, "END");
        if (ok) {
            int trailing;
            do { trailing = fgetc(input); }
            while (trailing == ' ' || trailing == '\t' || trailing == '\r' || trailing == '\n');
            ok = trailing == EOF && !ferror(input);
        }
        if (fclose(input) != 0) ok = 0;
        if (!ok) {
            /* A partial manifest isn't a committed stage. */
            fprintf(stderr, "Ignoring incomplete World Map infill manifest stage=%u\n", stage);
            continue;
        }
        infill_save_path(path, sizeof(path), directory, c.index, "scsnap", c.per_lot);
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, error_capacity) ||
            simcity_recomp_current_frame(game) != frame || simcity_recomp_master_clock(game) != clock) {
            fprintf(stderr, "Ignoring unmatched World Map infill snapshot stage=%u: %s\n",
                    stage, error && error_capacity ? error : "");
            continue;
        }
        if (error && error_capacity) error[0] = '\0';
        progress->stage = stage;
        progress->count = count;
        printf("stock-infill-resume stage=%u built=%u frame=%u per_lot=%d\n", stage, count, frame, c.per_lot);
        return 1;
    }
    return 0;
}

#ifdef _WIN32
static int stock_verify_async_infill_save(SimCityRecomp *game, const char *directory, int verify_shared) {
    InfillProgress *p = calloc(1u, sizeof(*p));
    WorldProbe audio = {0};
    char path[4096], shared_directory[4096], error[256] = {0};
    unsigned frame = 0u;
    uint64_t clock = 0u;
    uint8_t *before = NULL, *after = NULL;
    size_t before_bytes = 0u, after_bytes = 0u;
    int ok = 0;
    const char *output = directory;
    if (verify_shared) {
        const int length = snprintf(shared_directory, sizeof(shared_directory), "%s/shared", directory);
        if (length < 0 || (size_t)length >= sizeof(shared_directory)) goto done;
        output = shared_directory;
    }
    if (!p || !infill_read_baseline(directory, p) ||
        !infill_resume(game, directory, p, error, sizeof(error)) ||
        !p->count) goto done;
    frame = simcity_recomp_current_frame(game);
    clock = simcity_recomp_master_clock(game);
    snprintf(path, sizeof(path), "%s/stock-infill-async-reference.scsnap", output);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error)) ||
        !read_file(path, &before, &before_bytes) ||
        !infill_queue_checkpoint(game, output, p, error, sizeof(error), 1)) goto done;
    if (verify_shared) {
        ++p->stage;
        if (!infill_queue_checkpoint(game, output, p, error, sizeof(error), 0)) goto done;
    }
    /* The worker must own a detached snapshot: advance the underlying
       city before awaiting the disk job, then reload its exact frame. */
    if (!world_probe_step(game, &audio, SIMCITY_INPUT_RIGHT, 1u, 0, 0) ||
        simcity_recomp_current_frame(game) != frame + 1u ||
        !infill_collect_saves(1)) goto done;
    if (verify_shared) {
        infill_save_path(path, sizeof(path), output, p->stage, "scsnap", 0);
        if (!read_file(path, &after, &after_bytes) || before_bytes != after_bytes ||
            memcmp(before, after, before_bytes)) goto done;
        free(after);
        after = NULL;
    }
    infill_save_path(path, sizeof(path), output, p->count, "scsnap", 1);
    if (!read_file(path, &after, &after_bytes) || before_bytes != after_bytes ||
        memcmp(before, after, before_bytes) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        simcity_recomp_current_frame(game) != frame || simcity_recomp_master_clock(game) != clock) goto done;
    ok = 1;
done:
    if (!infill_collect_saves(1)) ok = 0;
    printf("stock-infill-async-verify snapshot_exact=%d original_frame=%u shared_pair_checked=%d %s\n",
        ok, frame, verify_shared && ok, error);
    free(before);
    free(after);
    free(p);
    return ok;
}
#endif

static int infill_service_dialogs(SimCityRecomp *game, WorldProbe *audio) {
    return tour_accept_annual_budget(game, audio) &&
           stock_acknowledge_build_notice(game, audio, "infill") &&
           tour_accept_annual_budget(game, audio);
}

static int stock_repro_infill_notice_recovery(SimCityRecomp *game, const char *directory) {
    char path[4096], error[256] = {0};
    WorldProbe audio = {0};
    uint16_t notice, focus, selected;
    snprintf(path, sizeof(path), "%s/stock-world-construction-infill-partial.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !read_wram16(game, 0x0395u, &notice) || !notice ||
        !infill_service_dialogs(game, &audio) ||
        !tour_construction_select(game, &audio, 2u, 1) ||
        !read_wram16(game, 0x0201u, &focus) || focus != 0xffu ||
        !read_wram16(game, 0x020du, &selected) || selected != 2u) {
        fprintf(stderr, "Native infill notice/rail recovery failed: %s\n", error);
        return 0;
    }
    printf("stock-infill-notice-recovery focus=%04X tool=%u pcm=%llu\n",
           focus, selected, (unsigned long long)audio.frames);
    return 1;
}

static int infill_protect(InfillProgress *progress, const TourDistrict *work, InfillLot lot) {
    const unsigned size = infill_buildings[lot.kind].size;
    for (unsigned i = 0u; i < size * size; ++i) {
        const unsigned cell = lot.cell + i / size * TOUR_WIDTH + i % size;
        if (progress->protected_cells[cell]) return 0;
        progress->protected_cells[cell] = 1u;
    }
    /* Preserve existing infrastructure against a cross-type retile but
       allow a feeder of the same type to attach without changing it. */
    for (unsigned i = 0u; i < size * 4u; ++i) {
        const unsigned cell = tour_perimeter(lot.cell, size, i);
        const uint16_t tile = work->tiles[cell];
        if (tour_road_tile(tile) || tour_rail_tile(tile) || tour_power_tile(tile))
            progress->protected_cells[cell] = 1u;
    }
    return 1;
}

static int infill_verified_lot(const TourDistrict *work, InfillLot lot, int *developed) {
    static const unsigned zone_end[] = {0x137u, 0x1f4u, 0x245u};
    const TourBuilding *b = &infill_buildings[lot.kind];
    unsigned powered;
    const unsigned served = tour_lot_service(work, lot.cell, b->size, &powered);
    *developed = 0;
    if (served != 7u || (b->tool != 4u && powered != b->size * b->size)) return 0;
    if (lot.kind < INFILL_ZONE_KINDS) {
        /* R/C/I patterns change as the real game develops them. Judge
           class and service, not a frozen choice of development sprites. */
        for (unsigned i = 0u; i < 9u; ++i) {
            const unsigned tile = work->tiles[lot.cell + i / 3u * TOUR_WIDTH + i % 3u] & 0x03ffu;
            if (tile < b->first || tile >= zone_end[lot.kind]) return 0;
            if (tile > b->first + 8u) *developed = 1;
        }
        return 1;
    }
    const unsigned tile = work->tiles[lot.cell] & 0x03ffu;
    return tile == b->first || (b->alternate && tile == b->alternate);
}

static int infill_plan_lot_with_trials(TourDistrict *work, const InfillProgress *progress,
                                     unsigned sector, unsigned round, unsigned kind, unsigned radius,
                                     unsigned branch_limit, unsigned trial_limit, unsigned *cell) {
    static const unsigned preferred_x[] = {18, 41, 29};
    static const unsigned preferred_y[] = {16, 36, 25};
    const unsigned left = (sector % 4u) * 60u, top = (sector / 4u) * 50u;
    const unsigned x = round < INFILL_ROUNDS ? preferred_x[round] : 6u + (round * 19u) % 48u;
    const unsigned y = round < INFILL_ROUNDS ? preferred_y[round] : 7u + (round * 13u) % 36u;
    const unsigned anchor = (top + y) * TOUR_WIDTH + left + x;
    const TourBuilding *b = &infill_buildings[kind];
    return tour_plan_lot_bounds(work, b, left, top, 60u, 50u, 2u, anchor,
        radius, branch_limit, trial_limit, 1, progress->protected_cells, cell) ||
        tour_plan_lot_bounds(work, b, left, top, 60u, 50u, 2u, anchor,
        radius, branch_limit, trial_limit, 0, progress->protected_cells, cell);
}

static int infill_plan_lot(TourDistrict *work, const InfillProgress *progress, unsigned sector,
                           unsigned round, unsigned kind, unsigned radius,
                           unsigned branch_limit, unsigned *cell) {
    return infill_plan_lot_with_trials(work, progress, sector, round, kind,
                                      radius, branch_limit, TOUR_LOT_TRIAL_LIMIT, cell);
}

#ifdef _WIN32
typedef struct InfillPlanJob {
    TourDistrict *work;
    const InfillProgress *progress;
    unsigned sector, round, kind, cell;
    int found, allow_extended;
} InfillPlanJob;
static int infill_extended_feeders, infill_dense_feeders;

static DWORD WINAPI infill_plan_thread(LPVOID opaque) {
    InfillPlanJob *job = opaque;
    job->found = infill_plan_lot(job->work, job->progress, job->sector, job->round, job->kind,
                                TOUR_BRANCH_LIMIT, TOUR_BRANCH_LIMIT, &job->cell);
    if (!job->found && job->allow_extended)
        job->found = infill_plan_lot(job->work, job->progress, job->sector, job->round, job->kind,
                                   TOUR_BRANCH_LIMIT, TOUR_BRANCH_SURVEY_LIMIT, &job->cell);
    return 0;
}

/* The worker sees only the copied tile map and a read-only lot ledger. The
   owning thread continues native guest frames and is the only one to touch
   runtime, input, video or audio. Recheck any proposed cells before use. */
static int infill_live_plan(SimCityRecomp *game, WorldProbe *audio, InfillPlanJob *job,
                           unsigned *cell) {
    for (unsigned attempt = 0u; attempt < 3u; ++attempt) {
        HANDLE worker = CreateThread(NULL, 0u, infill_plan_thread, job, 0u, NULL);
        if (!worker) return -1;
        DWORD wait;
        int failed = 0;
        while ((wait = WaitForSingleObject(worker, 0u)) == WAIT_TIMEOUT) {
            if (!world_probe_step(game, audio, 0u, 1u, 0, 0)) {
                failed = 1;
                break;
            }
        }
        /* On core failure, do not release the worker's inputs early. */
        if (failed) (void)WaitForSingleObject(worker, INFINITE);
        CloseHandle(worker);
        if (failed || wait != WAIT_OBJECT_0) return -1;
        if (!job->found) return 0;
        const unsigned size = infill_buildings[job->kind].size;
        const unsigned origin = job->cell;
        int stale = 0;
        for (unsigned i = 0u; i < size * size + 4u * size; ++i) {
            const unsigned at = i < size * size ? origin + i / size * TOUR_WIDTH + i % size
                : tour_perimeter(origin, size, i - size * size);
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, at % TOUR_WIDTH, at / TOUR_WIDTH, &tile)) return -1;
            if ((tile & 0x03ffu) != (job->work->tiles[at] & 0x03ffu)) stale = 1;
        }
        for (unsigned type = 0u; type < 3u; ++type) {
            for (unsigned i = 0u; i < job->work->lengths[type]; ++i) {
                const unsigned at = job->work->branches[type][i];
                uint16_t tile;
                if (!simcity_recomp_stock_world_tile(game, at % TOUR_WIDTH, at / TOUR_WIDTH, &tile)) return -1;
                if ((tile & 0x03ffu) != (job->work->tiles[at] & 0x03ffu)) stale = 1;
            }
            if (job->work->lengths[type]) {
                unsigned neighbors[4];
                int attachment = 0;
                tour_cell_neighbors(job->work->branches[type][0], neighbors);
                for (unsigned i = 0u; i < 4u; ++i) {
                    const unsigned at = neighbors[i];
                    if (!tour_attachable(job->work->tiles[at], type)) continue;
                    uint16_t tile;
                    if (!simcity_recomp_stock_world_tile(game, at % TOUR_WIDTH, at / TOUR_WIDTH, &tile)) return -1;
                    if (tour_attachable(tile, type)) attachment = 1;
                }
                if (!attachment) stale = 1;
            }
        }
        if (!stale) { *cell = origin; return 1; }
        printf("stock-infill-plan-refresh sector=%u type=%s attempt=%u\n",
               job->sector, infill_buildings[job->kind].name, attempt + 1u);
        if (!tour_read_world(game, job->work)) return -1;
    }
    return -1;
}
#endif

/* Compare the normal limit and a longer route on the same committed city,
   without advancing the guest or writing any files. */
static int stock_infill_survey(SimCityRecomp *game, const char *directory, int all_parcels) {
    TourDistrict *work = malloc(sizeof(*work));
    InfillProgress *progress = calloc(1u, sizeof(*progress));
    unsigned quotas[INFILL_SECTORS][INFILL_KINDS];
    unsigned seen[INFILL_SECTORS][INFILL_KINDS] = {{0}};
    char error[256] = {0};
    int ok = 0;
    if (!work || !progress || !infill_read_baseline(directory, progress) ||
        !infill_resume(game, directory, progress, error, sizeof(error)) || !tour_read_world(game, work)) goto done;
    for (unsigned i = 0u; i < INFILL_BASE; ++i)
        if (!infill_protect(progress, work, progress->base[i])) goto done;
    for (unsigned i = 0u; i < progress->count; ++i) {
        const InfillLot lot = progress->added[i];
        if (!infill_protect(progress, work, lot)) goto done;
        ++seen[infill_sector(lot.cell)][lot.kind];
    }
    const unsigned rounds = progress->stage >= INFILL_STAGES ? INFILL_DENSE_ROUNDS : INFILL_ROUNDS;
    infill_quotas(rounds * INFILL_SECTORS, quotas);
    for (unsigned s = 0u; s < INFILL_SECTORS; ++s)
        for (unsigned k = 0u; k < INFILL_KINDS; ++k) {
            if (all_parcels && s != 7u && s != 15u) continue;
            unsigned pending = seen[s][k];
            if (pending >= quotas[s][k]) continue;
            unsigned round = 0u, cell = 0u;
            while (round + 1u < rounds) {
                if (infill_stage_mask(s, round) & (1u << k)) {
                    if (!pending) break;
                    --pending;
                }
                ++round;
            }
            if (infill_plan_lot(work, progress, s, round, k, TOUR_BRANCH_LIMIT, TOUR_BRANCH_LIMIT, &cell)) continue;
            printf("stock-infill-survey-blocked sector=%u type=%s clear=%u road=%u rail=%u power=%u joint=%u\n",
                s, infill_buildings[k].name, work->clear_lots, work->reachable_lots[0], work->reachable_lots[1],
                work->reachable_lots[2], work->joint_lots);
            const int extended = infill_plan_lot(work, progress, s, round, k, TOUR_BRANCH_LIMIT,
                                                 TOUR_BRANCH_SURVEY_LIMIT, &cell);
            printf("stock-infill-survey-extended sector=%u type=%s feasible=%d lot=(%u,%u) road=%u rail=%u power=%u joint=%u\n",
                s, infill_buildings[k].name, extended, extended ? cell % TOUR_WIDTH : 0u,
                extended ? cell / TOUR_WIDTH : 0u, extended ? work->lengths[0] : 0u,
                extended ? work->lengths[1] : 0u, extended ? work->lengths[2] : 0u, work->joint_lots);
            if (all_parcels && !extended && work->joint_lots > TOUR_LOT_TRIAL_LIMIT) {
                const int found = infill_plan_lot_with_trials(work, progress, s, round, k,
                    TOUR_BRANCH_LIMIT, TOUR_BRANCH_SURVEY_LIMIT, TOUR_CELLS, &cell);
                printf("stock-infill-survey-all-parcels sector=%u type=%s feasible=%d tried=%u joint=%u lot=(%u,%u)\n",
                       s, infill_buildings[k].name, found, work->tried_lots, work->joint_lots,
                       found ? cell % TOUR_WIDTH : 0u, found ? cell / TOUR_WIDTH : 0u);
            }
        }
    ok = 1;
done:
    if (!ok) fprintf(stderr, "Cannot survey committed infill city: %s\n", error);
    free(progress);
    free(work);
    return ok;
}

static int infill_build_north_seaport(SimCityRecomp *game, WorldProbe *audio,
                                    TourDistrict *work, const InfillProgress *progress);

static int infill_record_lot(SimCityRecomp *game, TourDistrict *work, InfillProgress *progress,
                            unsigned sector, unsigned cell, unsigned kind, const unsigned feeders[3]) {
    const TourBuilding *b = &infill_buildings[kind];
    if (progress->count >= INFILL_DENSE_LOTS || !tour_read_world(game, work) ||
        !infill_protect(progress, work, (InfillLot){cell, kind})) return -1;
    progress->added[progress->count++] = (InfillLot){cell, kind};
    printf("stock-infill-built sector=%u type=%s lot=(%u,%u) cumulative=%u road_added=%u rail_added=%u power_added=%u frame=%u\n",
           sector, b->name, cell % TOUR_WIDTH, cell / TOUR_WIDTH, progress->count,
           feeders[0], feeders[1], feeders[2], simcity_recomp_current_frame(game));
    unsigned powered = 0u;
    const unsigned service = tour_lot_service(work, cell, b->size, &powered);
    printf("stock-infill-service-now sector=%u type=%s road_edge=%u rail_edge=%u energized_wire_edge=%u powered_footprint=%u/%u\n",
           sector, b->name, service & 1u, (service >> 1u) & 1u, (service >> 2u) & 1u, powered, b->size * b->size);
#ifdef _WIN32
    if (!live_construction_enabled)
#endif
        fflush(stdout);
    return 1;
}

#ifdef _WIN32
/* Only infrastructure can take this early exit. After an ordinary B
   press, wait for release and read back the requested native tile; skip
   unused post-press settling only when the game already applied it. */
static int infill_confirm_feeder(SimCityRecomp *game, WorldProbe *audio, unsigned cell,
                                unsigned type, uint16_t *tile, unsigned *saved_settle) {
    const int x = (int)(cell % TOUR_WIDTH), y = (int)(cell / TOUR_WIDTH);
    int at_x, at_y;
    uint16_t focus, tool;
    if (!tour_accept_annual_budget(game, audio) || !stock_move_axis(game, audio, x, 0) ||
        !stock_move_axis(game, audio, y, 1) || !stock_cell(game, &at_x, &at_y) ||
        at_x != x || at_y != y || !read_wram16(game, 0x0201u, &focus) || focus != 0xffu ||
        !read_wram16(game, 0x020du, &tool) || tool != type + 1u ||
        !world_probe_step(game, audio, SIMCITY_INPUT_B, 2u, 0, 0)) return 0;
    for (unsigned released = 1u; released <= 9u; ++released) {
        if (!world_probe_step(game, audio, 0u, 1u, 0, 0) ||
            !simcity_recomp_stock_world_tile(game, (unsigned)x, (unsigned)y, tile)) return 0;
        if (tour_services[type](*tile)) {
            *saved_settle += 9u - released;
            return 1;
        }
    }
    return 0;
}
#endif

/* The planner reads the live city, and every placement is a stock menu
   selection plus D-pad/B. */
static int infill_build_lot(SimCityRecomp *game, WorldProbe *audio, TourDistrict *work,
                           InfillProgress *progress, unsigned sector, unsigned round, unsigned kind) {
    const TourBuilding *b = &infill_buildings[kind];
    unsigned cell;
    uint16_t tile;
    if (!infill_service_dialogs(game, audio) || !tour_read_world(game, work)) return -1;
    const double plan_start = gameplay_clock();
    int planned;
#ifdef _WIN32
    if (live_construction_enabled) {
        InfillPlanJob job = {work, progress, sector, round, kind, 0u, 0, infill_extended_feeders};
        planned = infill_live_plan(game, audio, &job, &cell);
    } else
#endif
        planned = infill_plan_lot(work, progress, sector, round, kind,
                                  TOUR_BRANCH_LIMIT, TOUR_BRANCH_LIMIT, &cell);
    const double plan_ms = (gameplay_clock() - plan_start) * 1000.0;
    if (planned < 0) {
        fprintf(stderr, "Live infill planner failed sector=%u type=%s\n", sector, b->name);
        return -1;
    }
    if (!planned) {
#ifdef _WIN32
        if (infill_extended_feeders && sector == 1u && kind == INFILL_SEAPORT) {
            const int built = infill_build_north_seaport(game, audio, work, progress);
            if (built < 0) return -1;
            if (built) {
                static const unsigned feeders[3] = {0u, 9u, 4u};
                progress->feeders[0][1] += 7u;
                progress->feeders[1][1] += 2u;
                progress->feeders[1][2] += 4u;
                return infill_record_lot(game, work, progress, sector, 14u * TOUR_WIDTH + 62u, kind, feeders);
            }
        }
#endif
        printf("stock-infill-plan-search sector=%u type=%s feasible=0 plan_ms=%.2f clear_lots=%u road_reachable=%u rail_reachable=%u power_reachable=%u joint_lots=%u branch_limit=%u\n",
               sector, b->name, plan_ms, work->clear_lots, work->reachable_lots[0],
               work->reachable_lots[1], work->reachable_lots[2], work->joint_lots, work->branch_limit);
        return 0;
    }
    printf("stock-infill-plan sector=%u round=%u type=%s lot=(%u,%u) road=%u rail=%u power=%u plan_ms=%.2f branch_limit=%u\n",
           sector, round + 1u, b->name, cell % TOUR_WIDTH, cell / TOUR_WIDTH,
           work->lengths[0], work->lengths[1], work->lengths[2], plan_ms, work->branch_limit);
#ifdef _WIN32
    if (!live_construction_enabled)
#endif
        fflush(stdout);
    if (!tour_construction_select(game, audio, b->tool, 1) ||
        !tour_construction_tap(game, audio, cell, &tile, b->tool, 1) ||
        ((tile & 0x03ffu) != b->first &&
         (!b->alternate || (tile & 0x03ffu) != b->alternate))) {
        fprintf(stderr, "Native infill placement failed sector=%u tool=%u type=%s lot=(%u,%u)\n",
                sector, b->tool, b->name, cell % TOUR_WIDTH, cell / TOUR_WIDTH);
        return -1;
    }
    /* Every cell must match the authored footprint, not just its origin. */
    const unsigned first = tile & 0x03ffu, size = b->size, cells = size * size;
    uint64_t footprint = 0u;
    for (unsigned i = 0u; i < cells; ++i) {
        if (!simcity_recomp_stock_world_tile(game, cell % TOUR_WIDTH + i % size,
                cell / TOUR_WIDTH + i / size, &tile) ||
            (tile & 0x03ffu) < first || (tile & 0x03ffu) >= first + cells) return -1;
        footprint |= UINT64_C(1) << ((tile & 0x03ffu) - first);
    }
    if (footprint != (UINT64_C(1) << cells) - 1u) return -1;
    printf("stock-infill-placed sector=%u type=%s lot=(%u,%u) verified_tiles=%u frame=%u\n",
           sector, b->name, cell % TOUR_WIDTH, cell / TOUR_WIDTH, cells,
           simcity_recomp_current_frame(game));
    /* A synchronous console flush can block between guest actions.
       Paced runs still flush periodic progress and durable saves. */
#ifdef _WIN32
    if (!live_construction_enabled)
#endif
        fflush(stdout);
    unsigned feeders[3] = {0}, saved_settle = 0u;
    for (unsigned type = 0u; type < 3u; ++type) {
        if (work->lengths[type] && (!infill_service_dialogs(game, audio) ||
                                   !tour_construction_select(game, audio, type + 1u, 1))) return -1;
        for (unsigned i = work->lengths[type]; i > 0u; --i) {
            const unsigned site = work->branches[type][i - 1u];
            if (!simcity_recomp_stock_world_tile(game, site % TOUR_WIDTH, site / TOUR_WIDTH, &tile))
                return -1;
            if (tour_services[type](tile)) continue;
            int applied = 0;
#ifdef _WIN32
            if (infill_dense_feeders) applied = infill_confirm_feeder(game, audio, site, type, &tile, &saved_settle);
#endif
            if (((!applied && !tour_construction_tap(game, audio, site, &tile, type + 1u, 1)) ||
                 !tour_services[type](tile)) &&
                !stock_road_retry(game, audio, site % TOUR_WIDTH, site / TOUR_WIDTH,
                                  &tile, NULL, tour_services[type])) {
                fprintf(stderr, "Native infill feeder failed sector=%u type=%u tile=(%u,%u) lot=%s\n",
                        sector, type + 1u, site % TOUR_WIDTH, site / TOUR_WIDTH, b->name);
                return -1;
            }
            ++feeders[type];
            ++progress->feeders[infill_sector(site)][type];
            if ((feeders[type] % 16u) == 0u) {
                printf("stock-infill-feeder-progress sector=%u lot=%s service=%u verified_added=%u planned=%u frame=%u\n",
                       sector, b->name, type + 1u, feeders[type], work->lengths[type],
                       simcity_recomp_current_frame(game));
                fflush(stdout);
            }
        }
    }
    if (saved_settle) printf("stock-infill-verified-input-settle sector=%u type=%s frames_saved=%u\n",
                             sector, b->name, saved_settle);
    return infill_record_lot(game, work, progress, sector, cell, kind, feeders);
}

static unsigned infill_verified_count(const TourDistrict *work, const InfillLot *lots,
                                      unsigned count, unsigned *developed) {
    unsigned verified = 0u;
    *developed = 0u;
    for (unsigned i = 0u; i < count; ++i) {
        int grew;
        if (infill_verified_lot(work, lots[i], &grew)) {
            ++verified;
            *developed += grew != 0;
        }
    }
    return verified;
}

static int stock_repro_infill_notice_feeder(SimCityRecomp *game, const char *directory) {
    TourDistrict *work = malloc(sizeof(*work));
    InfillProgress *progress = calloc(1u, sizeof(*progress));
    WorldProbe audio = {0};
    char error[256] = {0};
    int ok = 0;
    if (!work || !progress || !infill_read_baseline(directory, progress) ||
        !infill_resume(game, directory, progress, error, sizeof(error)) ||
        progress->stage != 3u || progress->count != 14u || !tour_read_world(game, work)) goto done;
    for (unsigned i = 0u; i < INFILL_BASE; ++i)
        if (!infill_protect(progress, work, progress->base[i])) goto done;
    for (unsigned i = 0u; i < progress->count; ++i)
        if (!infill_protect(progress, work, progress->added[i])) goto done;
    ok = infill_build_lot(game, &audio, work, progress, 3u, 0u, 1u) == 1 &&
         progress->count == 15u;
done:
    printf("stock-infill-notice-feeder-regression result=%d frame=%u %s\n", ok,
           simcity_recomp_current_frame(game), error);
    free(progress);
    free(work);
    return ok;
}

static void infill_sector_report(const TourDistrict *work, const InfillProgress *progress, unsigned stages) {
    unsigned quotas[INFILL_SECTORS][INFILL_KINDS];
    infill_quotas(stages, quotas);
    for (unsigned sector = 0u; sector < INFILL_SECTORS; ++sector) {
        unsigned native[INFILL_KINDS] = {0}, served[INFILL_KINDS] = {0};
        unsigned roads = 0u, rail = 0u, wire = 0u, live_wire = 0u, developed = 0u;
        const unsigned left = (sector % 4u) * 60u, top = (sector / 4u) * 50u;
        for (unsigned i = 0u; i < progress->count; ++i) {
            const InfillLot site = progress->added[i];
            if (infill_sector(site.cell) != sector) continue;
            ++native[site.kind];
            int grew;
            if (infill_verified_lot(work, site, &grew)) {
                ++served[site.kind];
                developed += grew != 0;
            }
        }
        for (unsigned y = top; y < top + 50u; ++y)
            for (unsigned x = left; x < left + 60u; ++x) {
                const uint16_t tile = work->tiles[y * TOUR_WIDTH + x];
                roads += tour_road_tile(tile) != 0;
                rail += tour_rail_tile(tile) != 0;
                wire += tour_power_tile(tile) != 0;
                live_wire += tour_power_tile(tile) && (tile & 0x8000u);
            }
        printf("stock-infill-sector sector=%u area=(%u,%u)..(%u,%u) placed=%u/%u/%u served=%u/%u/%u developed=%u roads=%u rail=%u energized_wires=%u/%u\n",
               sector, left, top, left + 59u, top + 49u,
               native[0], native[1], native[2], served[0], served[1], served[2],
               developed, roads, rail, live_wire, wire);
        for (unsigned kind = 0u; kind < INFILL_KINDS; ++kind) {
            if (native[kind] || quotas[sector][kind])
                printf("stock-infill-sector-type sector=%u type=%s placed=%u target=%u served=%u\n",
                       sector, infill_buildings[kind].name, native[kind],
                       quotas[sector][kind], served[kind]);
        }
        printf("stock-infill-sector-feeders sector=%u new_road=%u new_rail=%u new_wire=%u\n",
               sector, progress->feeders[sector][0], progress->feeders[sector][1],
               progress->feeders[sector][2]);
    }
}

static int infill_has_all_sector_quotas(const InfillProgress *progress, unsigned stages) {
    unsigned counts[INFILL_SECTORS][INFILL_KINDS] = {{0}};
    unsigned quotas[INFILL_SECTORS][INFILL_KINDS];
    infill_quotas(stages, quotas);
    for (unsigned i = 0u; i < progress->count; ++i) {
        const InfillLot lot = progress->added[i];
        if (lot.kind >= INFILL_KINDS || lot.cell >= TOUR_CELLS) return 0;
        ++counts[infill_sector(lot.cell)][lot.kind];
    }
    for (unsigned sector = 0u; sector < INFILL_SECTORS; ++sector)
        for (unsigned kind = 0u; kind < INFILL_KINDS; ++kind)
            if (counts[sector][kind] != quotas[sector][kind]) return 0;
    return 1;
}

static int infill_export_tape(const char *directory, const char *settled_snapshot,
    const StockControllerTape *tape, unsigned checkpoint_stage, int fully_built, int per_lot) {
    uint8_t *snapshot_bytes = NULL;
    size_t tape_size = 0u, snapshot_size = 0u;
    char end_path[4096], tape_path[4096];
    uint8_t *bytes = stock_controller_tape_encode(tape, &tape_size);
    snprintf(end_path, sizeof(end_path), "%s/stock-world-construction-input-end.scsnap", directory);
    snprintf(tape_path, sizeof(tape_path), "%s/stock-world-construction-input.scinput", directory);
    /* Write the input last. A lone start or end file is never a verified
       segment, and an interrupted export cannot replace existing evidence. */
    const int saved = bytes && read_file(settled_snapshot, &snapshot_bytes, &snapshot_size) &&
        write_new_file(end_path, snapshot_bytes, snapshot_size) &&
        write_new_file(tape_path, bytes, tape_size);
    free(bytes);
    free(snapshot_bytes);
    printf("stock-infill-tape written=%d frames=%u checkpoint_stage=%u full_infill=%d per_lot=%d verified_replay=0\n",
           saved, tape->frames, checkpoint_stage, fully_built, per_lot);
    return saved;
}

/* Scoped native-input reproduction of the northern bottleneck found in
   the committed city. A changed tile or protected site is a hard refusal,
   not permission to bulldoze a different cell. */
static int infill_build_north_seaport(SimCityRecomp *game, WorldProbe *audio,
                                    TourDistrict *work, const InfillProgress *progress) {
    static const unsigned trees[][3] = {{54u,18u,0x1au}, {55u,18u,0x1cu}, {55u,17u,0x19u}};
    static const unsigned rails[][2] = {
        {54u,18u}, {55u,18u}, {55u,17u}, {56u,17u}, {57u,17u},
        {58u,17u}, {59u,17u}, {60u,17u}, {61u,17u}
    };
    enum { X = 62, Y = 14, SIZE = 4 };
    const unsigned lot = Y * TOUR_WIDTH + X;
    uint16_t tile;
    if (!tour_read_world(game, work)) return -1;
    if (!tour_rail_tile(work->tiles[18u * TOUR_WIDTH + 53u]) ||
        (work->tiles[22u * TOUR_WIDTH + 62u] & 0x83ffu) != 0x8062u ||
        !tour_road_tile(work->tiles[18u * TOUR_WIDTH + 63u])) return 0;
    for (unsigned i = 0u; i < SIZE * SIZE; ++i) {
        const unsigned at = lot + i / SIZE * TOUR_WIDTH + i % SIZE;
        if ((work->tiles[at] & 0x03ffu) || progress->protected_cells[at]) return 0;
    }
    for (unsigned i = 0u; i < sizeof(rails) / sizeof(rails[0]); ++i) {
        const unsigned at = rails[i][1] * TOUR_WIDTH + rails[i][0];
        const unsigned expected = i < 3u ? trees[i][2] : rails[i][0] == 60u ? 0x33u : 0u;
        if ((work->tiles[at] & 0x03ffu) != expected || progress->protected_cells[at]) return 0;
    }
    for (unsigned y = 18u; y <= 21u; ++y) {
        const unsigned at = y * TOUR_WIDTH + 62u;
        if (progress->protected_cells[at] || (work->tiles[at] & 0x03ffu) != (y == 18u ? 0x32u : 0u)) return 0;
    }
    printf("stock-infill-north-route sector=1 lot=(%u,%u) planned_clears=3 rail=9 power=4\n", X, Y);
    if (!tour_construction_select(game, audio, 0u, 1)) goto failed;
    for (unsigned i = 0u; i < sizeof(trees) / sizeof(trees[0]); ++i) {
        const unsigned at = trees[i][1] * TOUR_WIDTH + trees[i][0];
        if (!simcity_recomp_stock_world_tile(game, trees[i][0], trees[i][1], &tile) ||
            (tile & 0x03ffu) != trees[i][2] ||
            !tour_construction_tap(game, audio, at, &tile, 0u, 1) || (tile & 0x03ffu)) goto failed;
        printf("stock-infill-north-cleared tile=(%u,%u)\n", trees[i][0], trees[i][1]);
    }
    if (!tour_construction_select(game, audio, 2u, 1)) goto failed;
    for (unsigned i = 0u; i < sizeof(rails) / sizeof(rails[0]); ++i) {
        if (!tour_construction_tap(game, audio, rails[i][1] * TOUR_WIDTH + rails[i][0], &tile, 2u, 1) ||
            !tour_rail_tile(tile) || (rails[i][0] == 60u && !tour_road_tile(tile))) goto failed;
        printf("stock-infill-north-rail tile=(%u,%u) code=%04X\n", rails[i][0], rails[i][1], tile);
    }
    if (!tour_construction_select(game, audio, 3u, 1)) goto failed;
    for (unsigned y = 21u; y >= 18u; --y) {
        if (!tour_construction_tap(game, audio, y * TOUR_WIDTH + 62u, &tile, 3u, 1) ||
            !tour_power_tile(tile) || (y == 18u && !tour_road_tile(tile))) goto failed;
    }
    const TourBuilding *port = &infill_buildings[INFILL_SEAPORT];
    if (!tour_construction_select(game, audio, port->tool, 1) ||
        !tour_construction_tap(game, audio, lot, &tile, port->tool, 1) ||
        (tile & 0x03ffu) != port->first) goto failed;
    unsigned footprint = 0u;
    for (unsigned i = 0u; i < SIZE * SIZE; ++i) {
        if (!simcity_recomp_stock_world_tile(game, X + i % SIZE, Y + i / SIZE, &tile) ||
            (tile & 0x03ffu) < port->first || (tile & 0x03ffu) >= port->first + SIZE * SIZE) goto failed;
        footprint |= 1u << ((tile & 0x03ffu) - port->first);
    }
    if (footprint == 0xffffu) return 1;
failed:
    fprintf(stderr, "Northern seaport controller route stopped after preflight at frame %u\n",
            simcity_recomp_current_frame(game));
    return -1;
}

static int stock_infill_north_seaport_pilot(SimCityRecomp *game, const char *directory) {
    TourDistrict *work = malloc(sizeof(*work));
    InfillProgress *progress = calloc(1u, sizeof(*progress));
    WorldProbe audio = {0};
    char path[4096], error[256] = {0};
    int ok = 0;
    snprintf(path, sizeof(path), "%s/stock-world-north-seaport-pilot.scsnap", directory);
    FILE *previous = fopen(path, "rb");
    if (previous) { fclose(previous); goto done; }
    if (!work || !progress || !infill_read_baseline(directory, progress) ||
        !infill_resume(game, directory, progress, error, sizeof(error)) || !tour_read_world(game, work)) goto done;
    for (unsigned i = 0u; i < INFILL_BASE; ++i)
        if (!infill_protect(progress, work, progress->base[i])) goto done;
    for (unsigned i = 0u; i < progress->count; ++i)
        if (!infill_protect(progress, work, progress->added[i])) goto done;
    if (infill_build_north_seaport(game, &audio, work, progress) != 1) goto done;
    ok = simcity_recomp_snapshot_save(game, path, error, sizeof(error));
    printf("stock-infill-north-seaport saved=%d lot=(62,14) cleared=3 rail=9 wire=4 frame=%u\n",
           ok, simcity_recomp_current_frame(game));
done:
    if (!ok) fprintf(stderr, "Northern seaport pilot stopped at frame %u: %s\n",
                     simcity_recomp_current_frame(game), error);
    free(progress);
    free(work);
    return ok;
}

/* Saved sector 7 approach, checked against the unmodified lot-245 tape.
   This is a read/verify-and-controller pilot on its own snapshot copy. */
static int stock_infill_east_road_pilot(SimCityRecomp *game, const char *directory) {
    static const uint16_t route[][3] = {
        {213,97,0x32}, {213,96,0}, {213,95,0x1c}, {213,94,0x1f}, {213,93,0},
        {214,93,0}, {215,93,0}, {216,93,0}, {217,93,0}, {218,93,0},
        {219,93,0}, {220,93,0}, {221,93,0}, {222,93,0}, {222,92,0},
        {222,91,0}, {222,90,0}, {223,90,0}, {224,90,0}, {225,90,0},
        {226,90,0}, {227,90,0}, {228,90,0}, {229,90,0}, {230,90,0},
        {230,89,0}, {230,88,0}, {230,87,0}, {230,86,0}, {230,85,0x23},
        {230,84,0x1d}, {230,83,0}, {230,82,0}, {230,81,0}, {230,80,0},
        {230,79,0}, {230,78,0}, {230,77,0}, {230,76,0}, {230,75,0}, {230,74,0}
    };
    const unsigned count = sizeof(route) / sizeof(route[0]);
    WorldProbe audio = {0};
    char source[4096], output[4096], error[256] = {0};
    unsigned cleared = 0u, built = 0u;
    uint16_t tile;
    const int source_size = snprintf(source, sizeof(source), "%s/east-road-input.scsnap", directory);
    const int output_size = snprintf(output, sizeof(output), "%s/east-road-verified.scsnap", directory);
    if (source_size < 0 || (size_t)source_size >= sizeof(source) ||
        output_size < 0 || (size_t)output_size >= sizeof(output)) goto failed;
    FILE *exists = fopen(output, "rb");
    if (exists) { fclose(exists); goto failed; }
    if (!simcity_recomp_stock_world_open_snapshot(game, source, error, sizeof(error))) goto failed;
    for (unsigned i = 0u; i < count; ++i) {
        const unsigned x = route[i][0], y = route[i][1];
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto failed;
        const unsigned code = tile & 0x03ffu;
        /* Traffic may recolor the same native straight road while the
           other district is under construction; its topology is stable. */
        const int same_tile = code == route[i][2] || (!i && (code == 0x42u || code == 0x52u));
        if (!same_tile ||
            (i && abs((int)x - (int)route[i - 1u][0]) + abs((int)y - (int)route[i - 1u][1]) != 1)) {
            fprintf(stderr, "East road preflight refused a changed or disconnected route at (%u,%u).\n", x, y);
            goto failed;
        }
    }
    audio.hash = UINT64_C(1469598103934665603);
    if (!tour_construction_select(game, &audio, 0u, 1)) goto failed;
    for (unsigned i = 1u; i < count; ++i) {
        if (!route[i][2]) continue;
        const unsigned x = route[i][0], y = route[i][1];
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto failed;
        /* The earlier clearance may retile the edge of the same trees. */
        const unsigned code = tile & 0x03ffu;
        if (code && (code < 0x14u || code > 0x27u ||
            !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, 0u, 1) ||
            (tile & 0x03ffu))) goto failed;
        ++cleared;
        printf("stock-infill-east-road-clear x=%u y=%u initial=%04X\n", x, y, route[i][2]);
    }
    if (!tour_construction_select(game, &audio, 1u, 1)) goto failed;
    for (unsigned i = 1u; i < count; ++i) {
        const unsigned x = route[i][0], y = route[i][1];
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile) || (tile & 0x03ffu) ||
            !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, 1u, 1) ||
            !tour_road_tile(tile)) goto failed;
        ++built;
    }
    for (unsigned i = 0u; i < count; ++i)
        if (!simcity_recomp_stock_world_tile(game, route[i][0], route[i][1], &tile) ||
            !tour_road_tile(tile)) goto failed;
    if (!simcity_recomp_snapshot_save(game, output, error, sizeof(error))) goto failed;
    printf("stock-infill-east-road-pilot saved=1 cleared=%u road_added=%u frame=%u pcm=%llu hash=%016llX\n",
           cleared, built, simcity_recomp_current_frame(game),
           (unsigned long long)audio.frames, (unsigned long long)audio.hash);
    return 1;
failed:
    fprintf(stderr, "East road pilot stopped after %u clears and %u road tiles: %s %s\n",
            cleared, built, error, simcity_recomp_last_error(game));
    return 0;
}

/* Do not clear or replace any water tile directly: the stock road tool
   decides whether to accept the crossing and how to orient the bridge. */
static int stock_infill_southeast_bridge_pilot(SimCityRecomp *game, const char *directory) {
    enum { Y = 178, ROOT = 152, BANK = 183, FAR_BANK = 193, EXIT = 194 };
    static const uint16_t water[FAR_BANK - BANK - 1] = {0x0f,1,1,1,2,1,1,1,8};
    WorldProbe audio = {0};
    char source[4096], output[4096], error[256] = {0};
    uint16_t tile = 0u;
    unsigned position = ROOT;
    unsigned route_y = Y, first_land = ROOT + 1u;
    const int source_size = snprintf(source, sizeof(source), "%s/southeast-bridge-input.scsnap", directory);
    const int output_size = snprintf(output, sizeof(output), "%s/southeast-bridge-verified.scsnap", directory);
    if (source_size < 0 || (size_t)source_size >= sizeof(source) ||
        output_size < 0 || (size_t)output_size >= sizeof(output)) goto failed;
    FILE *exists = fopen(output, "rb");
    if (exists) { fclose(exists); goto failed; }
    if (!simcity_recomp_stock_world_open_snapshot(game, source, error, sizeof(error))) goto failed;
    if (!simcity_recomp_stock_world_tile(game, ROOT, Y, &tile)) goto failed;
    const int newer_approach = (tile & 0x03ffu) != 0x33u;
    if (newer_approach) {
        /* Later construction occupied the old root. Join the new road
           one row north, crossing a verified straight rail at right angles. */
        static const uint16_t north_codes[] = {0x32u, 0x73u, 0u};
        route_y = Y - 1u;
        for (position = 155u; position <= 157u; ++position)
            if (!simcity_recomp_stock_world_tile(game, position, route_y, &tile) ||
                (tile & 0x03ffu) != north_codes[position - 155u]) goto failed;
        first_land = 157u;
    }
    route_y = Y;
    for (position = newer_approach ? first_land : ROOT; position <= EXIT; ++position) {
        const unsigned expected = position == ROOT ? 0x33u :
            position > BANK && position < FAR_BANK ? water[position - BANK - 1u] : 0u;
        if (!simcity_recomp_stock_world_tile(game, position, Y, &tile) || (tile & 0x03ffu) != expected)
            goto failed;
    }
    audio.hash = UINT64_C(1469598103934665603);
    if (!tour_construction_select(game, &audio, 1u, 1)) goto failed;
    if (newer_approach) {
        route_y = Y - 1u;
        for (position = 156u; position <= 157u; ++position) {
            if (!simcity_recomp_stock_world_tile(game, position, route_y, &tile) ||
                (tile & 0x03ffu) != (position == 156u ? 0x73u : 0u) ||
                !tour_construction_tap(game, &audio, route_y * TOUR_WIDTH + position, &tile, 1u, 1) ||
                !tour_road_tile(tile) || (position == 156u && !tour_rail_tile(tile))) goto failed;
        }
    }
    route_y = Y;
    for (position = first_land; position <= EXIT; ++position) {
        if (!simcity_recomp_stock_world_tile(game, position, Y, &tile)) goto failed;
        if (tour_road_tile(tile)) continue; /* Native construction may place a span. */
        const unsigned expected = position > BANK && position < FAR_BANK ? water[position - BANK - 1u] : 0u;
        if ((tile & 0x03ffu) != expected ||
            !tour_construction_tap(game, &audio, Y * TOUR_WIDTH + position, &tile, 1u, 1) ||
            !tour_road_tile(tile)) goto failed;
    }
    for (position = newer_approach ? first_land : ROOT; position <= EXIT; ++position) {
        if (!simcity_recomp_stock_world_tile(game, position, Y, &tile) || !tour_road_tile(tile)) goto failed;
    }
    if (newer_approach) {
        route_y = Y - 1u;
        for (position = 155u; position <= 157u; ++position)
            if (!simcity_recomp_stock_world_tile(game, position, route_y, &tile) ||
                !tour_road_tile(tile) || (position == 156u && !tour_rail_tile(tile))) goto failed;
    }
    if (!simcity_recomp_snapshot_save(game, output, error, sizeof(error))) goto failed;
    printf("stock-southeast-bridge saved=1 road_from=(%u,%u) road_to=(%u,%u) water_tiles=%u frame=%u\n",
           newer_approach ? 155u : ROOT, newer_approach ? Y - 1u : Y, EXIT, Y,
           FAR_BANK - BANK - 1u, simcity_recomp_current_frame(game));
    return 1;
failed:
    fprintf(stderr, "Southeast bridge pilot stopped at (%u,%u) tile=%04X frame=%u: %s %s\n",
            position, route_y, tile, simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    return 0;
}

static int stock_infill_southeast_services_pilot(SimCityRecomp *game, const char *directory) {
    static const uint16_t rail_water[] = {0x0f,1,1,1,2,1,1,1,1,0x0e};
    static const uint16_t wire_water[] = {7,1,1,1,2,1,1,1,1,0x0b};
    static const uint16_t wire_turn[][2] = {{157,173},{158,173},{158,174},{158,175},{158,176}};
    WorldProbe audio = {0};
    char path[4096], error[256] = {0};
    unsigned x = 156u, y = 179u, tool = 2u;
    uint16_t tile = 0u;
    snprintf(path, sizeof(path), "%s/southeast-services-input.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_tile(game, 155u, 179u, &tile) || (tile & 0x03ffu) != 0x77u ||
        !simcity_recomp_stock_world_tile(game, 156u, 173u, &tile) || (tile & 0x83ffu) != 0x8063u) goto failed;
    for (x = 156u; x <= 195u; ++x) {
        const unsigned expected = x >= 184u && x <= 193u ? rail_water[x - 184u] : 0u;
        if (!simcity_recomp_stock_world_tile(game, x, 179u, &tile) || (tile & 0x03ffu) != expected) goto failed;
    }
    for (unsigned i = 0u; i < sizeof(wire_turn) / sizeof(wire_turn[0]); ++i) {
        x = wire_turn[i][0]; y = wire_turn[i][1];
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile) || (tile & 0x03ffu) != (i == 1u ? 0x23u : 0u)) goto failed;
    }
    y = 177u;
    for (x = 158u; x <= 195u; ++x) {
        const unsigned expected = x >= 184u && x <= 193u ? wire_water[x - 184u] : 0u;
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile) || (tile & 0x03ffu) != expected) goto failed;
    }
    audio.hash = UINT64_C(1469598103934665603);
    if (!tour_construction_select(game, &audio, 2u, 1)) goto failed;
    y = 179u;
    for (x = 156u; x <= 195u; ++x) {
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto failed;
        if (tour_rail_tile(tile)) continue;
        if ((tile & 0x03ffu) != (x >= 184u && x <= 193u ? rail_water[x - 184u] : 0u) ||
            !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, 2u, 1) || !tour_rail_tile(tile)) goto failed;
    }
    snprintf(path, sizeof(path), "%s/southeast-rail-verified.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto failed;
    printf("stock-southeast-services rail_to=(195,179) frame=%u\n", simcity_recomp_current_frame(game));
    x = 158u; y = 173u; tool = 0u;
    if (!simcity_recomp_stock_world_tile(game, x, y, &tile) || (tile & 0x03ffu) != 0x23u ||
        !tour_construction_select(game, &audio, 0u, 1) ||
        !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, 0u, 1) || (tile & 0x03ffu)) goto failed;
    tool = 3u;
    if (!tour_construction_select(game, &audio, 3u, 1)) goto failed;
    for (unsigned i = 0u; i < sizeof(wire_turn) / sizeof(wire_turn[0]); ++i) {
        x = wire_turn[i][0]; y = wire_turn[i][1];
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile) || (tile & 0x03ffu) ||
            !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, 3u, 1) || !tour_power_tile(tile)) goto failed;
    }
    y = 177u;
    for (x = 158u; x <= 195u; ++x) {
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto failed;
        if (tour_power_tile(tile)) continue;
        if ((tile & 0x03ffu) != (x >= 184u && x <= 193u ? wire_water[x - 184u] : 0u) ||
            !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, 3u, 1) || !tour_power_tile(tile)) goto failed;
    }
    x = 195u;
    for (unsigned pass = 0u; pass < 24u; ++pass) {
        if (!infill_service_dialogs(game, &audio) || !world_probe_step(game, &audio, 0u, 300u, 0, 0) ||
            !simcity_recomp_stock_world_tile(game, x, y, &tile)) goto failed;
        if (tour_power_tile(tile) && (tile & 0x8000u)) {
            snprintf(path, sizeof(path), "%s/southeast-services-verified.scsnap", directory);
            if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto failed;
            printf("stock-southeast-services wire_to=(195,177) energized=1 frame=%u\n", simcity_recomp_current_frame(game));
            return 1;
        }
    }
failed:
    fprintf(stderr, "Southeast services stopped tool=%u cell=(%u,%u) tile=%04X frame=%u: %s %s\n",
            tool, x, y, tile, simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    return 0;
}

static int stock_infill_southeast_residential_pilot(SimCityRecomp *game, const char *directory) {
    enum { X = 196, Y = 177, SIZE = 3, WEST = X - 1 };
    static const uint16_t ground[9] = {0u,0x17u,0x19u,0u,0x23u,0x22u,0u,0u,0x20u};
    const InfillLot lot = {Y * TOUR_WIDTH + X, INFILL_RESIDENTIAL};
    TourDistrict *work = malloc(sizeof(*work));
    WorldProbe audio = {0};
    char path[4096], error[256] = {0};
    uint16_t tile, population = 0u;
    unsigned cleared = 0u, footprint = 0u;
    int serviced = 0, developed = 0, ok = 0;
    snprintf(path, sizeof(path), "%s/southeast-residential-input.scsnap", directory);
    if (!work || !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_tile(game, WEST, Y, &tile) || !tour_power_tile(tile) || !(tile & 0x8000u) ||
        !simcity_recomp_stock_world_tile(game, WEST, Y + 2u, &tile) || !tour_rail_tile(tile) ||
        !simcity_recomp_stock_world_tile(game, WEST - 1u, Y + 1u, &tile) || !tour_road_tile(tile) ||
        !simcity_recomp_stock_world_tile(game, WEST, Y + 1u, &tile) || (tile & 0x03ffu)) goto done;
    for (unsigned i = 0u; i < SIZE * SIZE; ++i) {
        if (!simcity_recomp_stock_world_tile(game, X + i % SIZE, Y + i / SIZE, &tile) ||
            (tile & 0x03ffu) != ground[i]) goto done;
    }
    audio.hash = UINT64_C(1469598103934665603);
    if (!tour_construction_select(game, &audio, 0u, 1)) goto done;
    for (unsigned i = 0u; i < SIZE * SIZE; ++i) {
        if (!ground[i]) continue;
        const unsigned x = X + i % SIZE, y = Y + i / SIZE;
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto done;
        const unsigned code = tile & 0x03ffu;
        if (code && (code < 0x14u || code > 0x25u ||
            !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, 0u, 1) || (tile & 0x03ffu))) goto done;
        ++cleared;
    }
    if (!tour_construction_select(game, &audio, 1u, 1) ||
        !tour_construction_tap(game, &audio, (Y + 1u) * TOUR_WIDTH + WEST, &tile, 1u, 1) || !tour_road_tile(tile) ||
        !tour_construction_select(game, &audio, 5u, 1) ||
        !tour_construction_tap(game, &audio, lot.cell, &tile, 5u, 1)) goto done;
    for (unsigned i = 0u; i < SIZE * SIZE; ++i) {
        if (!simcity_recomp_stock_world_tile(game, X + i % SIZE, Y + i / SIZE, &tile)) goto done;
        const unsigned code = tile & 0x03ffu;
        if (code < 0x80u || code > 0x88u) goto done;
        footprint |= 1u << (code - 0x80u);
    }
    if (footprint != 0x1ffu) goto done;
    for (unsigned step = 0u; step <= 48u; ++step) {
        if (!tour_read_world(game, work)) goto done;
        developed = 0;
        if (infill_verified_lot(work, lot, &developed) && !serviced) {
            const unsigned state = tour_lot_service(work, lot.cell, SIZE, &footprint);
            if (state != 7u || footprint != SIZE * SIZE || !read_wram16(game, 0x0ba5u, &population)) goto done;
            snprintf(path, sizeof(path), "%s/southeast-residential-verified.scsnap", directory);
            if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto done;
            printf("stock-southeast-residential lot=(196,177) clears=%u road=1 rail=1 wire=1 powered=9/9 frame=%u city_population=%u\n",
                   cleared, simcity_recomp_current_frame(game), population);
            fflush(stdout);
            serviced = 1;
        }
        if (serviced && developed) {
            snprintf(path, sizeof(path), "%s/southeast-residential-developed.scsnap", directory);
            if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto done;
            printf("stock-southeast-residential-growth developed=1 frame=%u\n", simcity_recomp_current_frame(game));
            break;
        }
        if (step < 48u && (!infill_service_dialogs(game, &audio) || !world_probe_step(game, &audio, 0u, 300u, 0, 0))) goto done;
    }
    if (serviced && !developed) printf("stock-southeast-residential-growth developed=0 within_guest_steps=14400\n");
    ok = serviced;
done:
    if (!ok) fprintf(stderr, "Far-bank residential stopped after %u clears at frame %u: %s %s\n",
                     cleared, simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    free(work);
    return ok;
}

typedef struct EastRouteCell {
    uint16_t x, y, before;
} EastRouteCell;

/* Extend the sparse district on a copy of the city. Rail uses two native
   road crossings, not a crossing over existing live wire (unsupported by
   the stock track tool). Check each affected cell before any input. */
static int stock_infill_east_services_pilot(SimCityRecomp *game, const char *directory) {
    enum { X = 231, Y = 75, SIZE = 3 };
    static const EastRouteCell rail[] = {
        {212,98,0x72},{212,97,0x32},{212,96,0},{212,95,0x24},{212,94,0x21},
        {212,93,0x16},{212,92,0},{213,92,0},{214,92,0},{215,92,0},
        {216,92,0},{217,92,0},{218,92,0},{219,92,0},{220,92,0},{221,92,0},
        {221,91,0},{221,90,0},{221,89,0},{222,89,0},{223,89,0},{224,89,0},
        {225,89,0},{226,89,0},{227,89,0},{228,89,0},{229,89,0},{230,89,0x33},
        {231,89,0},{232,89,0},{233,89,0x14},{234,89,0x18},{234,88,0x20},
        {234,87,0x21},{234,86,0x21},{234,85,0x15},{234,84,0},{234,83,0},
        {234,82,0},{234,81,0},{234,80,0},{234,79,0},{234,78,0},{234,77,0},{234,76,0}
    };
    static const EastRouteCell wire[] = {
        {234,97,0x8063},{235,97,0},{235,96,0},{235,95,0},{235,94,0},{235,93,0},
        {235,92,0x24},{235,91,0x21},{235,90,0x18},{235,89,0x21},{235,88,0x21},
        {235,87,0x21},{235,86,0x21},{235,85,0x22},{235,84,0x17},{235,83,0x20},
        {235,82,0x20},{235,81,0x15},{235,80,0},{235,79,0},{235,78,0},{235,77,0},
        {235,76,0},{235,75,0},{235,74,0},{234,74,0},{233,74,0}
    };
    const EastRouteCell *const route[] = {rail, wire};
    const unsigned count[] = {sizeof(rail) / sizeof(*rail), sizeof(wire) / sizeof(*wire)};
    const InfillLot lot = {Y * TOUR_WIDTH + X, INFILL_RESIDENTIAL};
    TourDistrict *work = malloc(sizeof(*work));
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    unsigned x = X, y = Y, tool = 0u, cleared = 0u, powered = 0u;
    uint16_t tile = 0u, population = 0u;
    int ok = 0, developed = 0, serviced = 0, fully_connected = 0;
    static const char *const outputs[] = {
        "east-service-residential-verified.scsnap", "east-service-residential-developed.scsnap",
        "east-service-native256.bmp", "east-service-wide398.bmp"
    };
    if (!work) goto done;
    for (unsigned i = 0u; i < sizeof(outputs) / sizeof(*outputs); ++i) {
        const int size = snprintf(path, sizeof(path), "%s/%s", directory, outputs[i]);
        if (size < 0 || (size_t)size >= sizeof(path)) goto done;
        FILE *exists = fopen(path, "rb");
        if (exists) { fclose(exists); goto done; }
    }
    const int source_size = snprintf(path, sizeof(path), "%s/east-service-input.scsnap", directory);
    if (source_size < 0 || (size_t)source_size >= sizeof(path) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        simcity_recomp_current_frame(game) != 542987u) goto done;
    for (unsigned r = 0u; r < 2u; ++r) for (unsigned i = 0u; i < count[r]; ++i) {
        const EastRouteCell c = route[r][i];
        x = c.x; y = c.y;
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile) || tile != c.before ||
            (x >= X && x < X + SIZE && y >= Y && y < Y + SIZE) ||
            (i && abs((int)x - route[r][i - 1u].x) + abs((int)y - route[r][i - 1u].y) != 1))
            goto done;
    }
    for (y = Y; y < Y + SIZE; ++y) {
        x = X - 1u;
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile) || !tour_road_tile(tile)) goto done;
        for (x = X; x < X + SIZE; ++x)
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile) || (tile & 0x03ffu)) goto done;
    }
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!tour_construction_select(game, &audio, 0u, 1)) goto done;
    for (unsigned r = 0u; r < 2u; ++r) for (unsigned i = 1u; i < count[r]; ++i) {
        const EastRouteCell c = route[r][i];
        if (c.before < 0x14u || c.before > 0x27u) continue;
        x = c.x; y = c.y;
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto done;
        const unsigned code = tile & 0x03ffu;
        if (code && (code < 0x14u || code > 0x27u ||
            !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, 0u, 1) ||
            (tile & 0x03ffu))) goto done;
        cleared += code != 0u;
    }
    for (unsigned r = 0u; r < 2u; ++r) {
        tool = r + 2u;
        if (!tour_construction_select(game, &audio, tool, 1)) goto done;
        for (unsigned i = 1u; i < count[r]; ++i) {
            const EastRouteCell c = route[r][i];
            const int crossing = !r && (c.before == 0x32u || c.before == 0x33u);
            x = c.x; y = c.y;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile) ||
                (crossing ? !tour_crossing(tile, tool) : (tile & 0x03ffu) != 0u) ||
                !tour_construction_tap(game, &audio, y * TOUR_WIDTH + x, &tile, tool, 1) ||
                (!r ? !tour_rail_tile(tile) : !tour_power_tile(tile)) ||
                (crossing && !tour_road_tile(tile))) goto done;
        }
        printf("stock-east-service-route tool=%u new_tiles=%u frame=%u\n",
            tool, count[r] - 1u, simcity_recomp_current_frame(game));
        fflush(stdout);
    }
    tool = 5u; x = X; y = Y;
    if (!tour_construction_select(game, &audio, tool, 1) ||
        !tour_construction_tap(game, &audio, lot.cell, &tile, tool, 1)) goto done;
    for (unsigned step = 0u; step <= 48u; ++step) {
        if (!tour_read_world(game, work)) goto done;
        developed = 0;
        fully_connected = infill_verified_lot(work, lot, &developed) &&
            tour_lot_service(work, lot.cell, SIZE, &powered) == 7u && powered == SIZE * SIZE;
        if (fully_connected) {
            if (!serviced) {
                /* Confirm the full paths still lead to the existing city
                   and that electricity crossed the entire new wire. */
                for (unsigned r = 0u; r < 2u; ++r) for (unsigned i = 0u; i < count[r]; ++i) {
                    const EastRouteCell c = route[r][i];
                    x = c.x; y = c.y;
                    tile = work->tiles[y * TOUR_WIDTH + x];
                    if (r ? (!tour_power_tile(tile) || !(tile & 0x8000u)) :
                        (!tour_rail_tile(tile) || ((c.before == 0x32u || c.before == 0x33u) &&
                         !tour_road_tile(tile)))) goto done;
                }
                x = X; y = Y;
                snprintf(path, sizeof(path), "%s/%s", directory, outputs[0]);
                if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto done;
                serviced = 1;
            }
            if (developed) break;
        }
        if (step < 48u && (!infill_service_dialogs(game, &audio) ||
            !world_probe_step(game, &audio, 0u, 300u, 1, 0))) goto done;
    }
    if (!serviced || !fully_connected || !read_wram16(game, 0x0ba5u, &population) ||
        !simcity_recomp_audio_static_status(game, &status) || audio.modeled_underruns ||
        audio.modeled_overflows || status.pcm_overflows || simcity_recomp_audio_dropped_frames(game))
        goto done;
    if (developed) {
        snprintf(path, sizeof(path), "%s/%s", directory, outputs[1]);
        if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto done;
    }
    for (unsigned wide = 0u; wide < 2u; ++wide) {
        snprintf(path, sizeof(path), "%s/%s", directory, outputs[2u + wide]);
        if (!simcity_recomp_set_widescreen(game, wide != 0u, error, sizeof(error)) ||
            !simcity_recomp_render_presentation_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                       SIMCITY_RECOMP_FRAME_HEIGHT)) goto done;
    }
    printf("stock-east-service-residential lot=(%u,%u) cleared=%u crossings=2 road=1 rail=1 wire=1 powered=%u/9 developed=%d frame=%u population=%u pcm=%llu hash=%016llX\n",
        x, y, cleared, powered, developed, simcity_recomp_current_frame(game), population,
        (unsigned long long)audio.frames, (unsigned long long)audio.hash);
    ok = 1;
done:
    if (!ok) fprintf(stderr, "East services stopped tool=%u cell=(%u,%u) tile=%04X frame=%u: %s %s\n",
        tool, x, y, tile, simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    free(work);
    return ok;
}

/* Resume the measured city from a controller-built extension.
   The original checkpoint stays in the staged directory as a fallback. */
static int stock_infill_adopt_extension(SimCityRecomp *game, const char *directory, int east) {
    enum { SNAP_HEADER = 36 };
    const unsigned old_lots = east ? 307u : 297u, old_stage = east ? 83u : 80u;
    const InfillLot lot = {east ? 75u * TOUR_WIDTH + 231u : 177u * TOUR_WIDTH + 196u, INFILL_RESIDENTIAL};
    const unsigned sector = infill_sector(lot.cell);
    const char *label = east ? "east" : "southeast";
    InfillProgress *progress = calloc(1u, sizeof(*progress));
    TourDistrict *work = malloc(sizeof(*work));
    uint8_t *before = NULL, *after = NULL;
    size_t before_size = 0u, after_size = 0u;
    char original[4096], branch[4096], path[4096], error[256] = {0};
    unsigned quotas[INFILL_SECTORS][INFILL_KINDS], already = 0u;
    int developed = 0, ok = 0;
    if (!progress || !work || !infill_read_baseline(directory, progress) ||
        !infill_resume(game, directory, progress, error, sizeof(error)) ||
        progress->count != old_lots || progress->stage != old_stage) goto done;
    const uint32_t original_frame = simcity_recomp_current_frame(game);
    if (east && original_frame != 542987u) goto done;
    infill_save_path(original, sizeof(original), directory, old_lots, "scsnap", 1);
    const int branch_size = snprintf(branch, sizeof(branch), "%s/%s", directory,
        east ? "east-service-residential-verified.scsnap" : "southeast-residential-developed.scsnap");
    if (branch_size < 0 || (size_t)branch_size >= sizeof(branch)) goto done;
    if (!read_file(original, &before, &before_size) || !read_file(branch, &after, &after_size) ||
        before_size < SNAP_HEADER + 2u * TOUR_CELLS || after_size <= before_size ||
        (size_t)original_frame > (before_size - SNAP_HEADER) / 2u ||
        memcmp(before, "SCWORLD6", 8u) || memcmp(after, "SCWORLD6", 8u) ||
        memcmp(before + SNAP_HEADER, after + SNAP_HEADER, 2u * (size_t)original_frame) ||
        !simcity_recomp_stock_world_open_snapshot(game, branch, error, sizeof(error)) ||
        simcity_recomp_current_frame(game) <= original_frame || !tour_read_world(game, work)) goto done;
    for (unsigned i = 0u; i < INFILL_BASE; ++i)
        if (!infill_protect(progress, work, progress->base[i])) goto done;
    for (unsigned i = 0u; i < progress->count; ++i) {
        if (!infill_protect(progress, work, progress->added[i])) goto done;
        already += progress->added[i].kind == lot.kind && infill_sector(progress->added[i].cell) == sector;
    }
    infill_quotas(progress->stage + 1u, quotas);
    if (already >= quotas[sector][lot.kind] || !infill_verified_lot(work, lot, &developed) ||
        (!east && !developed) || !infill_protect(progress, work, lot)) goto done;
    infill_save_path(path, sizeof(path), directory, old_lots + 1u, "scsnap", 1);
    FILE *exists = fopen(path, "rb");
    if (exists) { fclose(exists); goto done; }
    infill_save_path(path, sizeof(path), directory, old_lots + 1u, "txt", 1);
    exists = fopen(path, "rb");
    if (exists) { fclose(exists); goto done; }
    progress->added[progress->count++] = lot;
    const uint8_t *original_tiles = before + before_size - 2u * TOUR_CELLS;
    for (unsigned cell = 0u; cell < TOUR_CELLS; ++cell) {
        const uint16_t old = (uint16_t)(original_tiles[2u * cell] |
            ((unsigned)original_tiles[2u * cell + 1u] << 8u));
        for (unsigned type = 0u; type < 3u; ++type) {
            if (east && tour_services[type](old) && !tour_services[type](work->tiles[cell])) {
                fprintf(stderr, "East branch lost service type=%u cell=(%u,%u) before=%04X after=%04X\n",
                    type, cell % TOUR_WIDTH, cell / TOUR_WIDTH, old, work->tiles[cell]);
                goto done;
            }
            if (tour_services[type](work->tiles[cell]) && !tour_services[type](old))
                ++progress->feeders[infill_sector(cell)][type];
        }
    }
    ok = infill_checkpoint(game, directory, progress, error, sizeof(error), 1);
    if (ok) printf("stock-infill-adopt-%s history_prefix=%u stage=%u lots=%u frame=%u developed=%d\n",
                   label, original_frame, progress->stage, progress->count, simcity_recomp_current_frame(game),
                   developed);
done:
    if (!ok) fprintf(stderr, "Cannot adopt the guarded %s checkpoint: %s %s\n",
                     label, error, simcity_recomp_last_error(game));
    free(after);
    free(before);
    free(work);
    free(progress);
    return ok;
}

/* Repair the isolated wire neck using the same stock tool as normal play.
   Keep the old checkpoint and ledger untouched in the input directory. */
static int stock_infill_reconnect_north(SimCityRecomp *game, const char *directory) {
    enum { X = 213, Y = 11, SIZE = 3 };
    static const InfillLot targets[] = {
        {7u * TOUR_WIDTH + 213u, INFILL_COMMERCIAL},
        {6u * TOUR_WIDTH + 216u, INFILL_INDUSTRIAL}
    };
    InfillProgress *progress = calloc(1u, sizeof(*progress));
    TourDistrict *work = malloc(sizeof(*work));
    WorldProbe audio = {0};
    SimCityRecompStockWorldSample before = {0}, now = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char output[4096], path[4096], error[256] = {0};
    const int length = snprintf(output, sizeof(output), "%s/repaired", directory);
    uint16_t tile = 0u;
    int ok = 0, connected = 0;
    if (!work || !progress || length < 0 || (size_t)length >= sizeof(output) ||
        !infill_read_baseline(directory, progress) ||
        !infill_resume(game, directory, progress, error, sizeof(error)) ||
        progress->stage != 83u || (progress->count != 307u && progress->count != 308u)) goto done;
    const uint32_t first = simcity_recomp_current_frame(game);
    for (unsigned i = 0u; i < 2u; ++i) {
        infill_save_path(path, sizeof(path), output, progress->count, i ? "txt" : "scsnap", 1);
        FILE *existing = fopen(path, "rb");
        if (existing) { fclose(existing); goto done; }
        int found = 0;
        for (unsigned j = 0u; j < progress->count; ++j)
            if (progress->added[j].cell == targets[i].cell && progress->added[j].kind == targets[i].kind)
                found = 1;
        if (!found) goto done;
    }
    if (!simcity_recomp_stock_world_tile(game, X, Y, &tile) || tile != 0u ||
        !simcity_recomp_stock_world_tile(game, X - 1u, Y, &tile) ||
        !tour_power_tile(tile) || !(tile & 0x8000u) ||
        !simcity_recomp_stock_world_tile(game, X, Y - 1u, &tile) ||
        !tour_power_tile(tile) || (tile & 0x8000u) ||
        !simcity_recomp_stock_world_sample(game, X, Y, &before)) goto done;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!tour_construction_select(game, &audio, 3u, 1) ||
        !tour_construction_tap(game, &audio, Y * TOUR_WIDTH + X, &tile, 3u, 1) ||
        !tour_power_tile(tile)) goto done;
    for (unsigned attempt = 0u; attempt <= 24u; ++attempt) {
        if (!simcity_recomp_stock_world_sample(game, X, Y, &now) ||
            !tour_read_world(game, work)) goto done;
        const uint16_t link = work->tiles[Y * TOUR_WIDTH + X];
        const uint16_t north = work->tiles[(Y - 1u) * TOUR_WIDTH + X];
        int state = now.power_cycles > before.power_cycles && !now.census_order_errors &&
            !now.power_order_errors && tour_power_tile(link) && (link & 0x8000u) &&
            tour_power_tile(north) && (north & 0x8000u);
        for (unsigned i = 0u; i < 2u; ++i) {
            int developed;
            state &= infill_verified_lot(work, targets[i], &developed);
        }
        if (state) { connected = 1; break; }
        if (attempt < 24u && (!infill_service_dialogs(game, &audio) ||
            !world_probe_step(game, &audio, 0u, 300u, 1, 0))) goto done;
    }
    if (!connected || !simcity_recomp_audio_static_status(game, &status) ||
        audio.modeled_underruns || audio.modeled_overflows || status.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto done;
    ++progress->feeders[infill_sector(Y * TOUR_WIDTH + X)][2u];
    if (!infill_checkpoint(game, output, progress, error, sizeof(error), 1)) goto done;
    printf("stock-infill-north-reconnect saved=1 lot_count=%u prior_frame=%u frame=%u commercial_powered=9/9 industrial_powered=9/9 power_cycles=%u->%u pcm=%llu hash=%016llX\n",
        progress->count, first, simcity_recomp_current_frame(game), before.power_cycles, now.power_cycles,
        (unsigned long long)audio.frames, (unsigned long long)audio.hash);
    ok = 1;
done:
    if (!ok) fprintf(stderr, "North wire reconnect did not pass: tile=%04X frame=%u %s %s\n",
        tile, simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    free(work);
    free(progress);
    return ok;
}

typedef struct InfillPowerTrace {
    SimCityRecomp *game;
    unsigned writes, cells, retries, mismatches, low_offset;
} InfillPowerTrace;

static void infill_power_write_trace(void *opaque, uint32_t pc, uint16_t offset, int write, int dma) {
    InfillPowerTrace *trace = opaque;
    if (!write || dma || pc != 0x03b18eu) return;
    if ((trace->writes++ & 1u) == 0u) { trace->low_offset = offset; return; }
    const unsigned expected = 0x0200u + trace->cells;
    if (offset == trace->low_offset + 1u) {
        if (trace->low_offset == expected) { ++trace->cells; return; }
        if (trace->cells && trace->low_offset == expected - 1u) { ++trace->retries; return; }
    }
    if (++trace->mismatches <= 8u)
        printf("stock-power-order-trace frame=%u transfer=%u low=%04X high=%04X expected=%04X\n",
               simcity_recomp_current_frame(trace->game), trace->writes, trace->low_offset, offset, expected);
}

/* The ending save embeds the actual controller history. Replay only the
   interval between two untouched checkpoints, including the same build. */
static int stock_infill_power_order_repro(SimCityRecomp *game, const char *directory) {
    char start[4096], end[4096], error[256] = {0};
    uint8_t *bytes = NULL;
    size_t size = 0u;
    int ok = 0;
    WorldProbe pcm = {0};
    SimCityRecompStockWorldSample before = {0}, after = {0};
    InfillPowerTrace trace = {0};
    trace.game = game;
    snprintf(start, sizeof(start), "%s/power-order-start.scsnap", directory);
    snprintf(end, sizeof(end), "%s/power-order-end.scsnap", directory);
    if (!read_file(end, &bytes, &size) || size < 36u || memcmp(bytes, "SCWORLD6", 8u) ||
        stock_tape_get32(bytes + 8u) != 6u || !simcity_recomp_stock_world_open_snapshot(game, start, error, sizeof(error))) goto done;
    const uint32_t first = simcity_recomp_current_frame(game), last = stock_tape_get32(bytes + 12u);
    if (last <= first || (uint64_t)last * 2u > size - 36u || last - first > 10000u ||
        !simcity_recomp_stock_world_sample(game, 121u, 101u, &before)) goto done;
    pcm.hash = UINT64_C(1469598103934665603);
    for (uint32_t i = first; i < last; ++i) {
        const size_t at = 36u + (size_t)i * 2u;
        const uint16_t input = (uint16_t)(bytes[at] | ((uint16_t)bytes[at + 1u] << 8u));
        if (!simcity_recomp_advance_stock_map_trace(game, input, 1u, infill_power_write_trace, &trace) ||
            simcity_recomp_current_frame(game) != i + 1u || !drain_pcm(game, &pcm.hash, &pcm.frames)) goto done;
    }
    if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &after)) goto done;
    printf("stock-power-order-replay frames=%u..%u power_cycles=%u->%u power_errors=%u->%u traced_transfers=%u unique_cells=%u stock_retries=%u trace_mismatches=%u pcm=%llu hash=%016llX\n",
           first, last, before.power_cycles, after.power_cycles, before.power_order_errors,
           after.power_order_errors, trace.writes, trace.cells, trace.retries, trace.mismatches,
           (unsigned long long)pcm.frames, (unsigned long long)pcm.hash);
    ok = trace.cells == TOUR_CELLS && trace.retries != 0u && !trace.mismatches &&
         !(trace.writes & 1u) && !after.power_order_errors && after.power_cycles == before.power_cycles + 1u;
done:
    if (!ok) fprintf(stderr, "Power-order replay could not verify the checkpoint interval: %s\n", error);
    free(bytes);
    return ok;
}

static int stock_world_infill_probe(SimCityRecomp *game, const char *directory, int resume,
                                    int record_segment, int one_lot, int dense) {
    static const unsigned build_order[] = {
        INFILL_POLICE, INFILL_AIRPORT, INFILL_SEAPORT, INFILL_STADIUM, INFILL_NUCLEAR,
        INFILL_COAL, INFILL_RESIDENTIAL, INFILL_FIRE, INFILL_COMMERCIAL, INFILL_PARK, INFILL_INDUSTRIAL
    };
    const unsigned stages = dense ? INFILL_DENSE_STAGES : INFILL_STAGES;
    const unsigned per_sector = dense ? INFILL_DENSE_PER_SECTOR : INFILL_PER_SECTOR;
    const unsigned target_lots = dense ? INFILL_DENSE_LOTS : INFILL_LOTS;
    TourDistrict *work = malloc(sizeof(*work));
    InfillProgress *progress = calloc(1u, sizeof(*progress));
    WorldProbe audio = {0};
    StockControllerTape tape = {0};
    SimCityRecompAudioStaticStatus status = {0};
    SimCityRecompStockWorldSample city = {0};
    char path[4096], error[256] = {0};
    int ok = 0, source_loaded = 0, segment_done = 0, stop_requested = 0;
    uint32_t checkpoint_tape_frames = 0u;
    unsigned taped_stage = 0u, taped_index = 0u;
    int taped_per_lot = 0;
    unsigned base_ok = 0u, added_ok = 0u, base_developed = 0u, developed = 0u, funds;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!work || !progress || !infill_read_baseline(directory, progress)) goto finish;
    unsigned final_quotas[INFILL_SECTORS][INFILL_KINDS];
    infill_quotas(stages, final_quotas);
    for (unsigned s = 0u; s < INFILL_SECTORS; ++s) {
        unsigned total = 0u;
        for (unsigned k = 0u; k < INFILL_KINDS; ++k) total += final_quotas[s][k];
        if (total != per_sector) {
            snprintf(error, sizeof(error), "Inconsistent construction quotas for sector %u.", s);
            goto finish;
        }
    }
    if (resume) {
        if (!infill_resume(game, directory, progress, error, sizeof(error))) goto finish;
        if (progress->stage > stages || progress->count > target_lots) {
            snprintf(error, sizeof(error), "Checkpoint needs the dense construction mode.");
            goto finish;
        }
    } else {
        infill_stage_path(path, sizeof(path), directory, 1u, "txt");
        FILE *prior = fopen(path, "rb");
        if (prior) {
            fclose(prior);
            fprintf(stderr, "An infill run already exists here; use the resume mode or a fresh evidence directory.\n");
            goto finish;
        }
        snprintf(path, sizeof(path), "%s/stock-world-construction-quadrants.scsnap", directory);
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            simcity_recomp_current_frame(game) != progress->base_frame) goto finish;
    }
    if (!tour_read_world(game, work)) goto finish;
    for (unsigned i = 0u; i < INFILL_BASE; ++i)
        if (!infill_protect(progress, work, progress->base[i])) goto finish;
    for (unsigned i = 0u; i < progress->count; ++i)
        if (!infill_protect(progress, work, progress->added[i])) goto finish;
    if (!resume && (infill_verified_count(work, progress->base, INFILL_BASE, &base_developed) != INFILL_BASE ||
        !simcity_recomp_probe_world_funds(game) ||
        !stock_funds(game, &funds) || funds != 999999u)) goto finish;
    if (!resume || record_segment) {
        snprintf(path, sizeof(path), "%s/stock-world-construction-input-start.scsnap", directory);
        FILE *prior = fopen(path, "rb");
        if (prior) {
            fclose(prior);
            fprintf(stderr, "An input tape start already exists; use a new evidence directory.\n");
            goto finish;
        }
        if (record_segment) {
            /* Reserve before starting the timed segment so tape growth does
               not realloc/copy an old route between paced guest frames. */
            tape.input = malloc((size_t)STOCK_TAPE_MAX_FRAMES * sizeof(*tape.input));
            if (!tape.input) goto finish;
            tape.capacity = STOCK_TAPE_MAX_FRAMES;
        }
        if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
        tape.start_frame = simcity_recomp_current_frame(game);
        audio.input_tape = &tape;
    }
    source_loaded = 1;
    printf("stock-infill-start original_sites=%u sectors=%u per_sector=%u already_built=%u resume=%d active_mixed_construction=1\n",
           INFILL_BASE, INFILL_SECTORS, per_sector, progress->count, resume);
    fflush(stdout);
    while (progress->stage < stages) {
        const unsigned round = progress->stage / INFILL_SECTORS;
        const unsigned sector = infill_stage_sector(progress->stage);
        unsigned quotas[INFILL_SECTORS][INFILL_KINDS];
        infill_quotas(progress->stage + 1u, quotas);
        for (unsigned step = 0u; step < sizeof(build_order) / sizeof(build_order[0]); ++step) {
            const unsigned kind = build_order[step];
            if (!quotas[sector][kind]) continue;
            unsigned already = 0u;
            for (unsigned i = 0u; i < progress->count; ++i)
                already += progress->added[i].kind == kind && infill_sector(progress->added[i].cell) == sector;
            while (already < quotas[sector][kind]) {
                int result = infill_build_lot(game, &audio, work, progress, sector, round, kind);
                if (result < 0) goto finish;
                if (!result) {
                    printf("stock-infill-blocked sector=%u round=%u type=%s reason=no_clear_served_parcel\n",
                           sector, round + 1u, infill_buildings[kind].name);
                    break;
                }
                ++already;
                if (!infill_checkpoint(game, directory, progress, error, sizeof(error), 1)) goto finish;
                if (audio.input_tape) {
                    checkpoint_tape_frames = tape.frames;
                    taped_stage = progress->stage;
                    taped_index = progress->count;
                    taped_per_lot = 1;
                }
#ifdef _WIN32
                if (live_construction_enabled && !one_lot) {
                    snprintf(path, sizeof(path), "%s/stop-after-checkpoint.request", directory);
                    const DWORD request = GetFileAttributesA(path);
                    stop_requested = request != INVALID_FILE_ATTRIBUTES && !(request & FILE_ATTRIBUTE_DIRECTORY);
                }
#endif
                if (one_lot || stop_requested) { segment_done = 1; goto finish; }
            }
        }
        if (progress->stage + INFILL_SECTORS >= stages) {
            unsigned index = progress->count;
            while (index && infill_sector(progress->added[index - 1u].cell) != sector) --index;
            if (index) {
                const unsigned cell = progress->added[index - 1u].cell;
                const int x = (int)(cell % TOUR_WIDTH), y = (int)(cell / TOUR_WIDTH);
                int view_x, view_y;
                if (!infill_service_dialogs(game, &audio) ||
                    !stock_move_axis(game, &audio, x, 0) || !stock_move_axis(game, &audio, y, 1) ||
                    !stock_cell(game, &view_x, &view_y) || view_x != x || view_y != y) goto finish;
                snprintf(path, sizeof(path), "%s/stock-world-infill-sector-%02u.bmp", directory, sector);
                if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                    !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                               SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
                printf("stock-infill-capture sector=%u lot=(%d,%d) frame=%u\n",
                       sector, x, y, simcity_recomp_current_frame(game));
            }
        }
        ++progress->stage;
        if (!infill_checkpoint(game, directory, progress, error, sizeof(error), 0)) goto finish;
        if (audio.input_tape) {
            checkpoint_tape_frames = tape.frames;
            taped_stage = progress->stage;
            taped_index = progress->stage;
            taped_per_lot = 0;
        }
        if (!tour_read_world(game, work)) goto finish;
        unsigned development = 0u;
        const unsigned served = infill_verified_count(work, progress->added,
                                                      progress->count, &development);
        uint16_t population, year, month;
        if (!read_wram16(game, 0x0ba5u, &population) ||
            !read_wram16(game, 0x0b53u, &year) || !read_wram16(game, 0x0b55u, &month) ||
            !simcity_recomp_stock_world_sample(game, 121u, 101u, &city)) goto finish;
        printf("stock-infill-checkpoint-service stage=%u served=%u/%u developed=%u\n",
               progress->stage, served, progress->count, development);
        printf("stock-infill-city stage=%u date=%u/%u population=%u census_tiles=%u census_errors=%u power=%u power_errors=%u density=%u environment=%u crime=%u fire=%u traffic=%u west=%u east=%u\n",
               progress->stage, year, month, population, city.census_visits, city.census_order_errors,
               city.power_cycles, city.power_order_errors, city.density_cycles, city.environment_cycles,
               city.crime_cycles, city.fire_cycles, city.traffic_writes, city.traffic_west, city.traffic_east);
        const char *checkpoint_tag = "stock-infill-checkpoint";
#ifdef _WIN32
        if (live_construction_enabled) checkpoint_tag = "stock-infill-checkpoint-pending";
#endif
        printf("%s stage=%u/%u sector=%u built=%u/%u frame=%u pcm=%llu underruns=%u overflows=%u\n",
               checkpoint_tag, progress->stage, stages, sector, progress->count, target_lots,
               simcity_recomp_current_frame(game), (unsigned long long)audio.frames,
               audio.modeled_underruns, audio.modeled_overflows);
        fflush(stdout);
    }
    /* Evaluate propagation as it actually happened during construction.
       Don't pad the active run by sitting after the last project. */
#ifdef _WIN32
    if (live_construction_enabled && !infill_collect_saves(1)) goto finish;
#endif
    if (!tour_read_world(game, work)) goto finish;
    base_ok = infill_verified_count(work, progress->base, INFILL_BASE, &base_developed);
    added_ok = infill_verified_count(work, progress->added, progress->count, &developed);
    printf("stock-infill-construction-end base_served=%u/%u new_served=%u/%u new_developed=%u\n",
           base_ok, INFILL_BASE, added_ok, progress->count, developed);
    infill_sector_report(work, progress, stages);
    if (!simcity_recomp_audio_static_status(game, &status) ||
        !simcity_recomp_stock_world_sample(game, 121u, 101u, &city)) goto finish;
    const int coverage = infill_has_all_sector_quotas(progress, stages);
    ok = coverage && progress->count == target_lots && base_ok == INFILL_BASE && added_ok == target_lots &&
         !status.pcm_unknown_frames && !status.pcm_overflows && !audio.modeled_underruns &&
         !audio.modeled_overflows && !simcity_recomp_audio_dropped_frames(game) &&
         !city.census_order_errors && !city.power_order_errors;
    if (ok) {
        snprintf(path, sizeof(path), "%s/stock-world-construction-infill.scsnap", directory);
        ok = simcity_recomp_snapshot_save(game, path, error, sizeof(error));
    }
    printf("stock-infill-result complete=%d sector_quotas=%d built=%u/%u served=%u baseline_served=%u/%u developed=%u traffic=%u census=%u power=%u pcm=%llu unknown=%llu underruns=%u overflows=%u core_overflows=%llu dropped=%llu\n",
           ok, coverage, progress->count, target_lots, added_ok, base_ok, INFILL_BASE, developed,
           city.traffic_writes, city.census_visits, city.power_cycles, (unsigned long long)audio.frames,
           (unsigned long long)status.pcm_unknown_frames, audio.modeled_underruns, audio.modeled_overflows,
           (unsigned long long)status.pcm_overflows, (unsigned long long)simcity_recomp_audio_dropped_frames(game));
finish:
#ifdef _WIN32
    if (live_construction_enabled && (!infill_collect_saves(1) || infill_save_error)) {
        audio.input_tape = NULL;
        ok = 0;
        segment_done = 0;
    }
#endif
    if (audio.input_tape && (ok || checkpoint_tape_frames)) {
        StockControllerTape exported = tape;
        if (ok)
            snprintf(path, sizeof(path), "%s/stock-world-construction-infill.scsnap", directory);
        else {
            exported.frames = checkpoint_tape_frames;
            infill_save_path(path, sizeof(path), directory, taped_index, "scsnap", taped_per_lot);
        }
        if (!infill_export_tape(directory, path, &exported, taped_stage, ok, !ok && taped_per_lot)) {
            fprintf(stderr, "Infill could not export a replayable controller segment.\n");
            segment_done = 0;
        }
    }
    if (source_loaded && !ok && !segment_done && !simcity_recomp_failed(game)) {
        snprintf(path, sizeof(path), "%s/stock-world-construction-infill-partial.scsnap", directory);
        (void)simcity_recomp_snapshot_save(game, path, NULL, 0u);
    }
    if (segment_done)
        printf("%s committed=1 stage=%u built=%u frame=%u\n",
               stop_requested ? "stock-infill-requested-stop" : "stock-infill-regression-segment",
               progress->stage, progress->count, simcity_recomp_current_frame(game));
    if (!ok && !segment_done)
        fprintf(stderr, "Stock World Map infill stopped stage=%u/%u built=%u/%u frame=%u: %s %s\n",
                progress ? progress->stage : 0u, stages, progress ? progress->count : 0u,
                target_lots, simcity_recomp_current_frame(game), error, simcity_recomp_last_error(game));
    free(progress);
    free(work);
    stock_controller_tape_clear(&tape);
    return ok || segment_done;
}

static int stock_world_age_built_probe(SimCityRecomp *game, const char *directory) {
    enum { FRAMES = 14400, REPORT_INTERVAL = 1200, WIDTH = 240, HEIGHT = 200 };
    WorldProbe audio = {0};
    SimCityRecompStockWorldSample state = {0}, initial = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    unsigned home_x = 0u, home_y = 0u, peak_population = 0u;
    unsigned traffic_seen = 0u, houses_seen = 0u, initial_month, initial_year;
    unsigned initial_population = 0u, initial_houses = 0u;
    uint16_t month = 0u, year = 0u;
    unsigned frames = 0u;
    audio.hash = UINT64_C(1469598103934665603);
    snprintf(path, sizeof(path), "%s/stock-world-buildings.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
        !read_wram16(game, 0x0b55u, &month) || !read_wram16(game, 0x0b53u, &year))
        goto fail;
    initial_month = month;
    initial_year = year;
    for (unsigned y = 1u; y + 1u < HEIGHT && !home_x; ++y) {
        for (unsigned x = 1u; x + 1u < WIDTH; ++x) {
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto fail;
            if ((tile & 0x03ffu) == 0x84u) {
                home_x = x;
                home_y = y;
                break;
            }
        }
    }
    if (!home_x || !simcity_recomp_stock_world_sample(game, home_x, home_y, &initial)) goto fail;
    for (;;) {
        uint16_t population, demand, zone, speed;
        unsigned houses = 0u, powered = 0u;
        if (!simcity_recomp_stock_world_sample(game, home_x, home_y, &state) ||
            !simcity_recomp_stock_world_tile(game, home_x, home_y, &zone) ||
            !read_wram16(game, 0x0ba5u, &population) ||
            !read_wram16(game, 0x0badu, &demand) || !read_wram16(game, 0x0193u, &speed) ||
            !read_wram16(game, 0x0b55u, &month) || !read_wram16(game, 0x0b53u, &year)) goto fail;
        for (unsigned y = home_y - 1u; y <= home_y + 1u; ++y)
            for (unsigned x = home_x - 1u; x <= home_x + 1u; ++x) {
                uint16_t tile;
                if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto fail;
                powered += (tile & 0x8000u) != 0u;
                tile &= 0x03ffu;
                houses += tile >= 0x89u && tile < 0x95u;
            }
        if (!frames) {
            initial_population = population;
            initial_houses = houses;
        }
        if (population > peak_population) peak_population = population;
        if (houses > houses_seen) houses_seen = houses;
        traffic_seen |= state.traffic_writes > initial.traffic_writes;
        printf("built-city age=%u date=%u/%u speed=%04X pop=%u demand=%d home=(%u,%u) zone=%04X houses=%u powered=%u land=%u pollution=%u density=%u police=%u fire=%u growth=%d traffic_writes=%u traffic_near_home=%u power_pass=%u density_pass=%u environment_pass=%u crime_pass=%u fire_pass=%u\n",
            frames, year, month, speed, population, (int)(int16_t)demand, home_x, home_y,
            zone, houses, powered, state.land_value, state.pollution, state.density,
            state.police, state.fire, (int)state.growth, state.traffic_writes, state.traffic,
            state.power_cycles, state.density_cycles, state.environment_cycles,
            state.crime_cycles, state.fire_cycles);
        fflush(stdout);
        if (frames == FRAMES) break;
        if (!world_probe_step(game, &audio, 0u, REPORT_INTERVAL, 1, 0)) goto fail;
        frames += REPORT_INTERVAL;
    }
    if (!simcity_recomp_audio_static_status(game, &status)) goto fail;
    printf("built-city-aged peak_population=%u houses_seen=%u traffic_seen=%u guest_frames=%u pcm=%llu underruns=%u overflows=%u core_overflows=%llu dropped=%llu\n",
        peak_population, houses_seen, traffic_seen, frames, (unsigned long long)audio.frames,
        audio.modeled_underruns, audio.modeled_overflows, (unsigned long long)status.pcm_overflows,
        (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    if ((year == initial_year && month == initial_month) ||
        peak_population <= initial_population || houses_seen <= initial_houses || !traffic_seen ||
        state.power_cycles <= initial.power_cycles || state.density_cycles <= initial.density_cycles ||
        state.environment_cycles <= initial.environment_cycles ||
        state.crime_cycles <= initial.crime_cycles || state.fire_cycles <= initial.fire_cycles ||
        state.census_order_errors || state.power_order_errors || audio.modeled_underruns ||
        audio.modeled_overflows || status.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto fail;
    snprintf(path, sizeof(path), "%s/stock-world-aged.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto fail;
    {
        SimCityRecompStockWorldSample restored;
        uint16_t saved_home, restored_home;
        const uint64_t clock = simcity_recomp_master_clock(game);
        if (!simcity_recomp_stock_world_tile(game, home_x, home_y, &saved_home) ||
            !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            !simcity_recomp_stock_world_sample(game, home_x, home_y, &restored) ||
            !simcity_recomp_stock_world_tile(game, home_x, home_y, &restored_home) ||
            restored_home != saved_home || simcity_recomp_master_clock(game) != clock ||
            state.power_cycles != restored.power_cycles ||
            state.environment_cycles != restored.environment_cycles ||
            state.traffic_writes != restored.traffic_writes ||
            state.growth != restored.growth || state.density != restored.density)
            goto fail;
        puts("built-city-aged snapshot_roundtrip=verified");
    }
    if (stock_move_axis(game, &audio, (int)home_x, 0) &&
        stock_move_axis(game, &audio, (int)home_y, 1) &&
        simcity_recomp_render_current_frame(game, error, sizeof(error))) {
        snprintf(path, sizeof(path), "%s/stock-world-aged-residential.bmp", directory);
        if (write_bmp(path, simcity_recomp_frame_bgra(game),
                      simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT)) return 1;
    }
fail:
    fprintf(stderr, "Built city aging test stopped at %u guest frames: %s %s\n",
        frames, error, simcity_recomp_last_error(game));
    return 0;
}

static int stock_world_mixed_district_probe(SimCityRecomp *game, const char *directory,
                                            int expansion) {
    static const TourBuilding buildings[] = {
        {"commercial", 6u, 3u, 0x137u, 0u}, {"industrial", 7u, 3u, 0x1f4u, 0u},
        {"residential", 5u, 3u, 0x080u, 0u}
    };
    static const TourBuilding housing_shops[] = {
        {"housing-1", 5u, 3u, 0x080u, 0u}, {"shops", 6u, 3u, 0x137u, 0u},
        {"housing-2", 5u, 3u, 0x080u, 0u}, {"housing-3", 5u, 3u, 0x080u, 0u}
    };
    const unsigned radius = expansion ? 24u : 16u;
    const unsigned sample_radius = expansion ? 40u : radius;
    const unsigned limit = expansion ? 24000u : 18000u;
    const char *out = expansion ? "housing-shops" : "mixed";
    TourDistrict *work = malloc(sizeof(*work));
    if (!work) return 0;
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    SimCityRecompStockWorldSample sample = {0};
    char path[4096], error[256] = {0};
    unsigned anchor = 0u, built = 0u, occupied_traffic = 0u, peak_population = 0u;
    unsigned lots[sizeof(housing_shops) / sizeof(housing_shops[0])];
    const unsigned lot_count = expansion ? (unsigned)(sizeof(housing_shops) / sizeof(housing_shops[0])) :
                                           (unsigned)(sizeof(buildings) / sizeof(buildings[0]));
    uint16_t original_population = 0u;
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-world-%s.scsnap", directory,
             expansion ? "milestone" : "aged");
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !tour_read_world(game, work) ||
        !read_wram16(game, 0x0ba5u, &original_population)) goto finish;
    for (unsigned i = 0u; i < TOUR_CELLS; ++i)
        if ((work->tiles[i] & 0x83ffu) == 0x8084u) { anchor = i; break; }
    if (!anchor) goto finish;
    const unsigned ax = anchor % TOUR_WIDTH, ay = anchor / TOUR_WIDTH;
    const unsigned quadrant = (ax >= 120u) | ((ay >= 100u) << 1u);
    /* Sample the map's actual half-resolution traffic grid once per cell. */
    const unsigned left = ax > sample_radius ? (ax - sample_radius) & ~1u : 0u;
    const unsigned top = ay > sample_radius ? (ay - sample_radius) & ~1u : 0u;
    const unsigned right = ax + sample_radius < TOUR_WIDTH ? ax + sample_radius : TOUR_WIDTH - 1u;
    const unsigned bottom = ay + sample_radius < TOUR_HEIGHT ? ay + sample_radius : TOUR_HEIGHT - 1u;
    unsigned baseline_traffic = 0u;
    for (unsigned y = top; y <= bottom; y += 2u)
        for (unsigned x = left; x <= right; x += 2u) {
            if (!simcity_recomp_stock_world_sample(game, x, y, &sample)) goto finish;
            baseline_traffic += sample.traffic != 0u;
        }
    for (unsigned i = 0u; i < lot_count; ++i) {
        const TourBuilding *b = expansion ? &housing_shops[i] : &buildings[i];
        uint16_t tile = 0u;
        if (!tour_read_world(game, work) ||
            (!tour_plan_lot(work, b, quadrant, anchor, radius, 1, &lots[i]) &&
             !tour_plan_lot(work, b, quadrant, anchor, radius, 0, &lots[i]) &&
             (!expansion ||
              (!tour_plan_lot(work, b, quadrant, anchor, sample_radius, 1, &lots[i]) &&
               !tour_plan_lot(work, b, quadrant, anchor, sample_radius, 0, &lots[i]))))) {
            fprintf(stderr, "No served parcel near (%u,%u) for %s\n", ax, ay, b->name);
            goto finish;
        }
        printf("mixed-district plan=%s lot=(%u,%u) road=%u rail=%u power=%u\n", b->name,
            lots[i] % TOUR_WIDTH, lots[i] / TOUR_WIDTH,
            work->lengths[0], work->lengths[1], work->lengths[2]);
        fflush(stdout);
        if (!stock_world_select_tool(game, &audio, b->tool) ||
            !tour_tap_cell(game, &audio, lots[i], &tile) || (tile & 0x03ffu) != b->first) goto finish;
        for (unsigned type = 0u; type < 3u; ++type) {
            if (work->lengths[type] && !stock_world_select_tool(game, &audio, type + 1u)) goto finish;
            /* Extend from the existing network toward the new lot. */
            for (unsigned k = work->lengths[type]; k > 0u; --k) {
                const unsigned cell = work->branches[type][k - 1u];
                if ((!tour_tap_cell(game, &audio, cell, &tile) || !tour_services[type](tile)) &&
                    !stock_road_retry(game, &audio, cell % TOUR_WIDTH, cell / TOUR_WIDTH,
                                      &tile, NULL, tour_services[type])) {
                    fprintf(stderr, "Mixed district feeder failed type=%u tile=(%u,%u) value=%04X\n",
                            type, cell % TOUR_WIDTH, cell / TOUR_WIDTH, tile);
                    goto finish;
                }
            }
        }
        ++built;
    }
    for (unsigned age = 0u; age <= limit; age += 1000u) {
        uint16_t population;
        unsigned traffic = 0u, peak_traffic = 0u;
        if (!read_wram16(game, 0x0ba5u, &population)) goto finish;
        for (unsigned y = top; y <= bottom; y += 2u)
            for (unsigned x = left; x <= right; x += 2u) {
                if (!simcity_recomp_stock_world_sample(game, x, y, &sample)) goto finish;
                traffic += sample.traffic != 0u;
                if (sample.traffic > peak_traffic) peak_traffic = sample.traffic;
            }
        if (traffic > occupied_traffic) occupied_traffic = traffic;
        if (population > peak_population) peak_population = population;
        unsigned served = 0u;
        for (unsigned i = 0u; i < built; ++i) {
            unsigned edges = 0u;
            uint16_t tile;
            for (unsigned p = 0u; p < 12u; ++p) {
                const unsigned edge = tour_perimeter(lots[i], 3u, p);
                if (!simcity_recomp_stock_world_tile(game, edge % TOUR_WIDTH, edge / TOUR_WIDTH, &tile))
                    goto finish;
                edges |= (unsigned)tour_road_tile(tile);
                if (tour_rail_tile(tile)) edges |= 2u;
                if (tour_power_tile(tile) && (tile & 0x8000u)) edges |= 4u;
            }
            if (edges == 7u) ++served;
        }
        printf("mixed-district age=%u population=%u baseline=%u traffic_cells=%u baseline_traffic=%u peak_cell=%u served=%u/%u writes=%u\n",
            age, population, original_population, traffic, baseline_traffic, peak_traffic,
            served, built, sample.traffic_writes);
        fflush(stdout);
        if (served == built && occupied_traffic > baseline_traffic &&
            (expansion ? population >= 2000u : peak_population > original_population)) {
            ok = 1;
            break;
        }
        if (age < limit && !world_probe_step(game, &audio, 0u, 1000u, 0, 0)) goto finish;
    }
    if (!simcity_recomp_audio_static_status(game, &status)) goto finish;
    printf("mixed-district result lots=%u peak_population=%u peak_traffic_cells=%u growth_target_met=%d\n",
        built, peak_population, occupied_traffic, ok);
    printf("mixed-district audio_pcm=%llu underruns=%u overflows=%u core_overflows=%llu dropped=%llu\n",
        (unsigned long long)audio.frames, audio.modeled_underruns, audio.modeled_overflows,
        (unsigned long long)status.pcm_overflows,
        (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    ok = ok && !audio.modeled_underruns && !audio.modeled_overflows && !status.pcm_overflows &&
         !simcity_recomp_audio_dropped_frames(game);
    snprintf(path, sizeof(path), "%s/stock-world-%s%s.scsnap", directory, out, ok ? "" : "-partial");
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) { ok = 0; goto finish; }
    if (ok) {
        snprintf(path, sizeof(path), "%s/stock-world-%s.bmp", directory, out);
        if (expansion && !simcity_recomp_set_widescreen(game, 1, error, sizeof(error))) {
            ok = 0;
            goto finish;
        }
        ok = stock_move_axis(game, &audio, (int)ax, 0) && stock_move_axis(game, &audio, (int)ay, 1) &&
             simcity_recomp_render_current_frame(game, error, sizeof(error)) &&
             write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                       SIMCITY_RECOMP_FRAME_HEIGHT);
    }
finish:
    if (!ok) {
        StockRamPosition position = {0};
        uint16_t notice = 0u, message = 0u, hud = 0u;
        (void)stock_read_position(game, &position, 1);
        (void)read_wram16(game, 0x0395u, &notice);
        (void)read_wram16(game, 0x0397u, &message);
        (void)read_wram16(game, 0x01d7u, &hud);
        fprintf(stderr, "Mixed district failed built=%u frame=%u focus=%04X notice=%u message=%u hud=%u: %s %s\n",
            built, simcity_recomp_current_frame(game), position.focus, notice, message, hud,
            error, simcity_recomp_last_error(game));
        snprintf(path, sizeof(path), "%s/stock-world-%s-failure.bmp", directory, out);
        if (simcity_recomp_render_current_frame(game, NULL, 0u))
            (void)write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                            SIMCITY_RECOMP_FRAME_HEIGHT);
    }
    free(work);
    return ok;
}

static int stock_world_mixed_develop_probe(SimCityRecomp *game, const char *directory,
                                          int report_partial, int resume) {
    static const unsigned vacant[] = {0x084u, 0x13bu, 0x1f8u};
    static const unsigned zone_end[] = {0x137u, 0x1f4u, 0x245u};
    enum { MAX_AGE = 48000, RESUME_AGE = 24000, STEP = 1200, ALL = 7 };
    uint16_t *prior = malloc(TOUR_CELLS * sizeof(*prior));
    unsigned sites[3] = {0}, age = 0u, observed = 0u, current = 0u, peak_traffic = 0u;
    char path[4096], error[256] = {0};
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    uint16_t population = 0u, initial_population = 0u;
    int ok = 0;
    if (!prior) return 0;
    audio.hash = UINT64_C(1469598103934665603);
    snprintf(path, sizeof(path), "%s/stock-world-aged.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) goto finish;
    for (unsigned i = 0u; i < TOUR_CELLS; ++i)
        if (!simcity_recomp_stock_world_tile(game, i % TOUR_WIDTH, i / TOUR_WIDTH, &prior[i]))
            goto finish;
    snprintf(path, sizeof(path), "%s/stock-world-mixed.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
        !read_wram16(game, 0x0ba5u, &initial_population)) goto finish;
    /* Identify the actual lots added by the D-pad build, excluding any
       zones already present in the original aged save. */
    for (unsigned i = TOUR_WIDTH * 2u + 2u; i + TOUR_WIDTH * 2u < TOUR_CELLS; ++i) {
        uint16_t tile;
        if ((prior[i] & 0x03ffu) || i % TOUR_WIDTH < 2u ||
            i % TOUR_WIDTH >= TOUR_WIDTH - 2u)
            continue;
        if (!simcity_recomp_stock_world_tile(game, i % TOUR_WIDTH, i / TOUR_WIDTH, &tile))
            goto finish;
        for (unsigned kind = 0u; kind < 3u; ++kind)
            if ((tile & 0x03ffu) == vacant[kind]) {
                if (sites[kind]) goto finish;
                sites[kind] = i;
            }
    }
    if (!sites[0] || !sites[1] || !sites[2]) goto finish;
    for (unsigned kind = 0u; kind < 3u; ++kind)
        printf("mixed-lot kind=%u center=(%u,%u) vacant_code=%03X\n",
            kind, sites[kind] % TOUR_WIDTH, sites[kind] / TOUR_WIDTH, vacant[kind]);
    if (report_partial || resume) {
        snprintf(path, sizeof(path), "%s/stock-world-mixed-development-partial.scsnap", directory);
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)))
            goto finish;
    }
    if (!report_partial) {
        snprintf(path, sizeof(path), "%s/stock-world-mixed-growth%s.log", directory,
                 resume == 2 ? "-branch" : resume ? "-resume" : "");
        if (!simcity_recomp_log_open(path, error, sizeof(error))) goto finish;
    }
    audio.measure_all = 1;
    for (;; age += STEP) {
        uint16_t month, year, notice, demand[3];
        unsigned houses = 0u, traffic = 0u, powered = 0u;
        current = 0u;
        if (!read_wram16(game, 0x0ba5u, &population) ||
            !read_wram16(game, 0x0b55u, &month) || !read_wram16(game, 0x0b53u, &year) ||
            !read_wram16(game, 0x0395u, &notice)) goto finish;
        for (unsigned kind = 0u; kind < 3u; ++kind)
            if (!read_wram16(game, 0x0badu + kind * 2u, &demand[kind])) goto finish;
        for (unsigned kind = 0u; kind < 3u; ++kind) {
            uint16_t center;
            SimCityRecompStockWorldSample sample;
            const unsigned x = sites[kind] % TOUR_WIDTH, y = sites[kind] / TOUR_WIDTH;
            if (!simcity_recomp_stock_world_tile(game, x, y, &center) ||
                !simcity_recomp_stock_world_sample(game, x, y, &sample)) goto finish;
            const unsigned code = center & 0x03ffu;
            if (center & 0x8000u) powered |= 1u << kind;
            if (code > vacant[kind] && code < zone_end[kind]) current |= 1u << kind;
            if (kind == 0u && code == vacant[0]) {
                for (unsigned yy = y - 1u; yy <= y + 1u; ++yy)
                    for (unsigned xx = x - 1u; xx <= x + 1u; ++xx) {
                        uint16_t tile;
                        if (!simcity_recomp_stock_world_tile(game, xx, yy, &tile)) goto finish;
                        tile &= 0x03ffu;
                        houses += tile >= 0x089u && tile < 0x095u;
                    }
                if (houses) current |= 1u;
            }
            /* Record nearby traffic-grid activity, including cells adjacent
               to the lot rather than only the zone center. */
            unsigned local_traffic = 0u;
            for (unsigned edge = 0u; edge < 12u; ++edge) {
                const unsigned adjacent = tour_perimeter(sites[kind] - TOUR_WIDTH - 1u, 3u, edge);
                SimCityRecompStockWorldSample road;
                uint16_t tile;
                if (!simcity_recomp_stock_world_tile(game, adjacent % TOUR_WIDTH, adjacent / TOUR_WIDTH, &tile) ||
                    !simcity_recomp_stock_world_sample(game, adjacent % TOUR_WIDTH, adjacent / TOUR_WIDTH, &road))
                    goto finish;
                if (tour_road_tile(tile) && road.traffic > local_traffic) local_traffic = road.traffic;
            }
            if (local_traffic > traffic) traffic = local_traffic;
            printf("mixed-lot age=%u kind=%u center=%04X growth=%d land=%u pollution=%u density=%u road_traffic=%u\n",
                 age, kind, center, (int)sample.growth, sample.land_value,
                 sample.pollution, sample.density, local_traffic);
        }
        observed |= current;
        if (traffic > peak_traffic) peak_traffic = traffic;
        printf("mixed-development age=%u date=%u/%u population=%u houses=%u developed=%u ever=%u powered=%u road_peak=%u notice=%u demand=%d/%d/%d\n",
            age, year, month, population, houses, current, observed, powered, traffic, notice,
            (int)(int16_t)demand[0], (int)(int16_t)demand[1], (int)(int16_t)demand[2]);
        fflush(stdout);
        if (report_partial) { ok = 1; goto finish; }
        if (current == ALL && powered == ALL && peak_traffic) { ok = 1; break; }
        if (resume == 2 && age == 3600u) {
            ok = 1; /* A bounded branch trace, not the strict growth test. */
            goto finish;
        }
        if (age == (unsigned)(resume ? RESUME_AGE : MAX_AGE)) break;
        {
            for (unsigned part = 0; part < STEP; part += 120u) {
                uint16_t modal = 0;
                if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                    !read_wram16(game, 0x0dc3u, &modal)) goto finish;
                if (modal == UINT16_MAX) {
                    if (!simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
                        !world_probe_step(game, &audio, 0u, 60u, 0, 0)) goto finish;
                    snprintf(path, sizeof(path), "%s/stock-mixed-resume-fiscal.bmp", directory);
                    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                                   SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
                    for (unsigned n = 0; n < 28u; ++n) {
                        uint16_t bx = 0, by = 0;
                        if (!read_wram16(game, 0x01ebu, &bx) || !read_wram16(game, 0x01edu, &by)) goto finish;
                        if (by >= 200u && bx >= 72u && bx <= 187u) {
                            printf("mixed-development budget cursor=(%u,%u) moves=%u\n", bx, by, n);
                            if (!stock_press(game, &audio, SIMCITY_INPUT_B, 90u)) goto finish;
                            break;
                        }
                        if (!stock_press(game, &audio, by < 200u ? SIMCITY_INPUT_DOWN :
                            bx < 72u ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT, 18u)) goto finish;
                    }
                    /* A larger city may still be in the original fade and
                       year-end bookkeeping when the button has succeeded. */
                    for (unsigned settle = 0u; settle < 600u; settle += 60u) {
                        if (!read_wram16(game, 0x0dc3u, &modal)) goto finish;
                        if (modal != UINT16_MAX) break;
                        if (!world_probe_step(game, &audio, 0u, 60u, 0, 0)) goto finish;
                    }
                    snprintf(path, sizeof(path), "%s/stock-mixed-resume-fiscal-result.bmp", directory);
                    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                                   SIMCITY_RECOMP_FRAME_HEIGHT) ||
                        !read_wram16(game, 0x0dc3u, &modal)) goto finish;
                    if (modal == UINT16_MAX) {
                        fprintf(stderr, "Native annual budget did not close at age=%u+%u.\n", age, part);
                        goto finish;
                    }
                    if (!simcity_recomp_set_widescreen(game, 1, error, sizeof(error))) goto finish;
                }
            }
        }
    }
    if (!simcity_recomp_audio_static_status(game, &pcm)) goto finish;
    const int healthy = !(audio.modeled_underruns || audio.modeled_overflows ||
                          pcm.pcm_overflows || simcity_recomp_audio_dropped_frames(game));
    printf("mixed-development-result population=%u->%u developed=%u ever=%u peak_traffic=%u audio_ok=%d\n",
        initial_population, population, current, observed, peak_traffic, healthy);
    ok = ok && healthy;
    snprintf(path, sizeof(path), "%s/stock-world-mixed-development%s%s.scsnap", directory,
             resume ? "-resume" : "", ok ? "" : "-partial");
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) { ok = 0; goto finish; }
    snprintf(path, sizeof(path), "%s/stock-world-mixed-development%s.bmp", directory, resume ? "-resume" : "");
    const unsigned x = sites[0] % TOUR_WIDTH, y = sites[0] / TOUR_WIDTH;
    if (!stock_move_axis(game, &audio, (int)x, 0) || !stock_move_axis(game, &audio, (int)y, 1) ||
        !simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                   SIMCITY_RECOMP_FRAME_HEIGHT)) ok = 0;
finish:
    if (!ok) fprintf(stderr, "Mixed development criterion not met at age=%u mask=%u: %s %s\n",
        age, current, error, simcity_recomp_last_error(game));
    free(prior);
    if (!report_partial) simcity_recomp_log_close();
    return ok;
}

static int stock_commercial_compare_probe(SimCityRecomp *game, const char *directory) {
    enum { SW = 120, SH = 100, SHIFT_Y = 96 };
    uint16_t *expanded = calloc(TOUR_CELLS, sizeof(*expanded));
    SimCityRecompStockWorldPower *work = calloc(1u, sizeof(*work));
    WorldProbe build = {0};
    char path[4096], error[256] = {0};
    unsigned bx = 0, by = 0, px = 0, py = 0;
    int ok = 0;
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!expanded || !work || !simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error))) goto finish;
    /* Find the same vacant, road-adjacent, electrically served 3x3 site
       for both runs; originate it with native controller construction. */
    for (unsigned y = 4u; y < SH - 7u && !by; ++y)
        for (unsigned x = 4u; x < SW - 7u; ++x) {
            unsigned served = 0u;
            if (!stock_clear_site(game, (int)x, (int)y, 3)) continue;
            for (unsigned edge = 0u; edge < 12u; ++edge) {
                uint16_t tile;
                const unsigned c = tour_perimeter(y * TOUR_WIDTH + x, 3u, edge);
                if (!stock_tile_at(game, c % TOUR_WIDTH, c / TOUR_WIDTH, &tile)) goto finish;
                if (tour_road_tile(tile)) served |= 1u;
                if ((tile & 0x8000u) && (tour_power_tile(tile) ||
                    ((tile & 0x03ffu) >= 0x0080u && (tile & 0x03ffu) <= 0x0245u))) served |= 2u;
            }
            if (!(served & 1u)) continue;
            if (served == 3u) { bx = x; by = y; break; }
            const int adjacent[][2] = {{3,0}, {-4,0}, {0,3}, {0,-4}};
            for (unsigned p = 0; p < 4u; ++p) {
                const int tx = (int)x + adjacent[p][0], ty = (int)y + adjacent[p][1];
                if (stock_clear_site(game, tx, ty, 4)) {
                    bx = x; by = y; px = (unsigned)tx; py = (unsigned)ty;
                    break;
                }
            }
            if (by) break;
        }
    uint16_t before = 0, placed = 0;
    if (px && (!stock_world_select_tool(game, &build, 14u) ||
        !stock_build_at(game, &build, (int)px, (int)py, &before, &placed) ||
        (placed & 0x03ffu) != 0x0287u)) goto finish;
    if (!by || !stock_world_select_tool(game, &build, 6u) ||
        !stock_build_at(game, &build, (int)bx, (int)by, &before, &placed) ||
        (placed & 0x03ffu) != 0x0137u) goto finish;
    snprintf(path, sizeof(path), "%s/stock-commercial-matched-original.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
    /* Translate by whole coarse-grid cells without changing buildings or
       demand. The second lot lies beyond both original edges. The first
       pass is free to rebuild the shifted path, services and location grids. */
    for (unsigned y = 0; y < SH; ++y)
        for (unsigned x = 0; x < SW; ++x)
            if (!stock_tile_at(game, (int)x, (int)y,
                    &expanded[(y + SHIFT_Y) * TOUR_WIDTH + x + SW])) goto finish;
    snprintf(path, sizeof(path), "%s/stock-commercial-matched-expanded.scsnap", directory);
    if (!simcity_recomp_stock_world_snapshot_save(game, path, expanded, TOUR_CELLS, work,
            error, sizeof(error))) goto finish;
    for (unsigned variant = 0; variant < 2u; ++variant) {
        const char *name = variant ? "expanded" : "original";
        const unsigned x = bx + 1u + variant * SW, y = by + 1u + variant * SHIFT_Y;
        uint16_t tile = 0u, demand = 0u, notice = 0u;
        WorldProbe audio = {0};
        SimCityRecompAudioStaticStatus pcm = {0};
        audio.measure_all = 1;
        snprintf(path, sizeof(path), "%s/stock-commercial-matched-%s.scsnap", directory, name);
        if (!(variant ? simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) :
                         simcity_recomp_snapshot_load(game, path, error, sizeof(error)))) goto finish;
        snprintf(path, sizeof(path), "%s/stock-commercial-matched-%s.log", directory, name);
        if (!simcity_recomp_log_open(path, error, sizeof(error))) goto finish;
        for (unsigned elapsed = 0u; elapsed <= 8400u; elapsed += 120u) {
            if (!(variant ? simcity_recomp_stock_world_tile(game, x, y, &tile) :
                             stock_tile_at(game, (int)x, (int)y, &tile)) ||
                !read_wram16(game, 0x0bafu, &demand) || !read_wram16(game, 0x0395u, &notice)) goto finish;
            if (elapsed % 1200u == 0u || (tile & 0x3ffu) != 0x013bu) {
                printf("commercial-matched %s frames=%u lot=(%u,%u) tile=%04X demand=%d notice=%u\n",
                    name, elapsed, x, y, tile, (int)(int16_t)demand, notice);
                fflush(stdout);
            }
            if ((tile & 0x03ffu) != 0x013bu || elapsed == 8400u) break;
            if (notice && !stock_press(game, &audio, SIMCITY_INPUT_B, 18u)) goto finish;
            if (!world_probe_step(game, &audio, 0, 120u, 0, 0)) goto finish;
        }
        /* Both branches must produce the original first developed shop
           and all nine contiguous tiles, not just change the center. */
        if ((tile & 0x83ffu) != 0x8144u) goto finish;
        for (unsigned dy = 0; dy < 3u; ++dy)
            for (unsigned dx = 0; dx < 3u; ++dx) {
                uint16_t footprint = 0u;
                const unsigned xx = x + dx - 1u, yy = y + dy - 1u;
                if (!(variant ? simcity_recomp_stock_world_tile(game, xx, yy, &footprint) :
                                 stock_tile_at(game, (int)xx, (int)yy, &footprint)) ||
                    (footprint & 0x03ffu) != 0x0140u + dy * 3u + dx) goto finish;
            }
        if (!simcity_recomp_audio_static_status(game, &pcm) || pcm.pcm_overflows ||
            simcity_recomp_audio_dropped_frames(game) || audio.modeled_overflows || audio.modeled_underruns)
            goto finish;
        printf("commercial-matched %s verified=9/9 pcm=%llu underruns=%u overflows=%u\n",
            name, (unsigned long long)audio.frames, audio.modeled_underruns, audio.modeled_overflows);
        simcity_recomp_log_close();
    }
    ok = 1;
finish:
    if (!ok) fprintf(stderr, "Commercial matched probe failed candidate=(%u,%u): %s %s\n",
        bx, by, error, simcity_recomp_last_error(game));
    simcity_recomp_log_close();
    free(work);
    free(expanded);
    return ok;
}

static int stock_world_milestone_probe(SimCityRecomp *game, const char *directory, int resume) {
    enum { FRAME_LIMIT = 18000, REPORT_INTERVAL = 1200 };
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    char path[4096], error[256] = {0};
    uint16_t population = 0u, peak = 0u, start = 0u, notice = 0u;
    unsigned elapsed = 0u, notices = 0u;
    int ok = 0;
    const unsigned target = resume ? 2000u : 1000u;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-world-%s.scsnap", directory,
             resume ? "milestone" : "mixed-development");
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
        !read_wram16(game, 0x0ba5u, &start)) goto finish;
    for (; elapsed < FRAME_LIMIT; ++elapsed) {
        uint16_t year, month;
        if (!read_wram16(game, 0x0ba5u, &population) ||
            !read_wram16(game, 0x0395u, &notice) ||
            !read_wram16(game, 0x0b53u, &year) ||
            !read_wram16(game, 0x0b55u, &month)) goto finish;
        if (population > peak) {
            printf("world-milestone age=%u date=%u/%u population=%u\n", elapsed, year, month, population);
            peak = population;
        }
        if (notice) {
            uint16_t message;
            if (!read_wram16(game, 0x0397u, &message)) goto finish;
            printf("world-milestone notice=%u message=%u age=%u population=%u\n",
                notice, message, elapsed, population);
            fflush(stdout);
            if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                !simcity_recomp_render_current_frame(game, error, sizeof(error))) goto finish;
            snprintf(path, sizeof(path), "%s/stock-world-milestone-%snotice-%u.bmp", directory,
                     resume ? "next-" : "", notices + 1u);
            if (!write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                    SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
            for (unsigned attempt = 0u; notice && attempt < 80u; ++attempt)
                if (!stock_press(game, &audio, SIMCITY_INPUT_B, 10u) ||
                    !read_wram16(game, 0x0395u, &notice)) goto finish;
            if (notice) goto finish;
            ++notices;
            if (peak >= target) break;
        }
        if (elapsed && elapsed % REPORT_INTERVAL == 0u) {
            printf("world-milestone progress age=%u date=%u/%u residents=%u\n",
                elapsed, year, month, population);
            fflush(stdout);
        }
        if (!world_probe_step(game, &audio, 0u, 1u, 0, 0)) goto finish;
    }
    if (!simcity_recomp_audio_static_status(game, &pcm)) goto finish;
    printf("world-milestone result residents=%u->%u notices=%u guest_pcm=%llu underruns=%u overflows=%u core_overflows=%llu dropped=%llu\n",
        start, peak, notices, (unsigned long long)audio.frames,
        audio.modeled_underruns, audio.modeled_overflows, (unsigned long long)pcm.pcm_overflows,
        (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    ok = peak >= target && !audio.modeled_underruns && !audio.modeled_overflows && !pcm.pcm_overflows &&
        !simcity_recomp_audio_dropped_frames(game);
    snprintf(path, sizeof(path), "%s/stock-world-milestone%s%s.scsnap", directory,
             resume ? "-next" : "", ok ? "" : "-partial");
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) ok = 0;
    if (ok) {
        snprintf(path, sizeof(path), "%s/stock-world-milestone%s.bmp", directory, resume ? "-next" : "");
        ok = simcity_recomp_render_current_frame(game, error, sizeof(error)) &&
             write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                       SIMCITY_RECOMP_FRAME_HEIGHT);
    }
finish:
    if (!ok) fprintf(stderr, "World milestone not verified at age=%u population=%u: %s %s\n",
        elapsed, population, error, simcity_recomp_last_error(game));
    return ok;
}

static int stock_construction_capture_end(SimCityRecomp *game, const char *directory) {
    char path[4096], error[256] = {0}, report[1200];
    uint16_t population, year, month;
    SimCityRecompStockWorldSample city;
    int x = -1, y = -1;
    uint64_t pixel_hash[2];
    const int length = snprintf(path, sizeof(path), "%s/stock-world-construction-input-end.scsnap", directory);
    if (length < 0 || (size_t)length >= sizeof(path) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_active(game) || !read_wram16(game, 0x0ba5u, &population) ||
        !read_wram16(game, 0x0b53u, &year) || !read_wram16(game, 0x0b55u, &month) ||
        !simcity_recomp_stock_world_sample(game, 121u, 101u, &city)) goto fail;
    (void)stock_cell(game, &x, &y);
    const uint32_t frame = simcity_recomp_current_frame(game);
    const uint64_t clocks = simcity_recomp_master_clock(game);
    const size_t pcm = simcity_recomp_audio_available(game);
    for (unsigned wide = 0u; wide < 2u; ++wide) {
        const unsigned width = wide ? SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH;
        const int n = snprintf(path, sizeof(path), "%s/stock-world-final-%u.bmp", directory, width);
        if (n < 0 || (size_t)n >= sizeof(path) ||
            !simcity_recomp_set_widescreen(game, (int)wide, error, sizeof(error)) ||
            !simcity_recomp_render_presentation_frame(game, error, sizeof(error)) ||
            simcity_recomp_frame_width(game) != width || simcity_recomp_current_frame(game) != frame ||
            simcity_recomp_master_clock(game) != clocks || simcity_recomp_audio_available(game) != pcm) goto fail;
        const uint32_t *pixels = simcity_recomp_frame_bgra(game);
        if (!pixels || !write_bmp(path, pixels, width, SIMCITY_RECOMP_FRAME_HEIGHT)) goto fail;
        pixel_hash[wide] = fnv1a(pixels, (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT);
    }
    const int report_size = snprintf(report, sizeof(report),
        "World Map saved construction frame %u\nMap: 240x200 tiles; guest clock: %llu; queued PCM: %zu\n"
        "Date: %u/%u; population: %u; map cursor: (%d,%d)\n"
        "Power cycles: %u; power scan errors: %u; census tiles: %u; census errors: %u\n"
        "Density cycles: %u; environment: %u; crime: %u; fire: %u\n"
        "Traffic writes: %u (west %u, east %u)\nNative256 pixels hash: %016llX\nWide398 pixels hash: %016llX\n"
        "Both images use the same saved state. No guest time or audio was advanced.\n",
        frame, (unsigned long long)clocks, pcm, year, month, population, x, y, city.power_cycles,
        city.power_order_errors, city.census_visits, city.census_order_errors, city.density_cycles,
        city.environment_cycles, city.crime_cycles, city.fire_cycles, city.traffic_writes,
        city.traffic_west, city.traffic_east, (unsigned long long)pixel_hash[0], (unsigned long long)pixel_hash[1]);
    const int report_path_size = snprintf(path, sizeof(path), "%s/stock-world-final-state.txt", directory);
    if (report_size < 0 || (size_t)report_size >= sizeof(report) ||
        report_path_size < 0 || (size_t)report_path_size >= sizeof(path) ||
        !write_new_file(path, (const uint8_t *)report, (size_t)report_size)) goto fail;
    return 1;
fail:
    fprintf(stderr, "Saved construction capture failed: %s %s\n", error, simcity_recomp_last_error(game));
    return 0;
}

static int stock_world_milestone_inspect(SimCityRecomp *game, const char *directory) {
    static const char *const stages[] = {"milestone", "milestone-next-partial"};
    char path[4096], error[256] = {0};
    for (unsigned i = 0u; i < sizeof(stages) / sizeof(stages[0]); ++i) {
        uint16_t year, month, population, demand[3];
        unsigned funds;
        SimCityRecompStockWorldSample state;
        snprintf(path, sizeof(path), "%s/stock-world-%s.scsnap", directory, stages[i]);
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
            !read_wram16(game, 0x0b53u, &year) || !read_wram16(game, 0x0b55u, &month) ||
            !read_wram16(game, 0x0ba5u, &population) || !stock_funds(game, &funds) ||
            !simcity_recomp_stock_world_sample(game, 0u, 0u, &state))
            goto fail;
        for (unsigned n = 0u; n < 3u; ++n)
            if (!read_wram16(game, 0x0badu + n * 2u, &demand[n])) goto fail;
        printf("world-milestone-inspect stage=%s date=%u/%u population=%u funds=%u demand=%d/%d/%d power_cycles=%u traffic_writes=%u density_cycles=%u\n",
            stages[i], year, month, population, funds, (int)(int16_t)demand[0],
            (int)(int16_t)demand[1], (int)(int16_t)demand[2], state.power_cycles,
            state.traffic_writes, state.density_cycles);
        snprintf(path, sizeof(path), "%s/stock-world-%s.bmp", directory, stages[i]);
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                       SIMCITY_RECOMP_FRAME_HEIGHT)) goto fail;
    }
    return 1;
fail:
    fprintf(stderr, "Could not inspect progression fixture: %s\n", error);
    return 0;
}

typedef struct OverviewTrace {
    uint8_t seen[120u * 100u];
    uint32_t pc[64], reads[64];
    unsigned cells;
    unsigned metric_reads[8], metric_last_offset[8];
} OverviewTrace;

static void stock_overview_access(void *opaque, uint32_t pc, uint16_t offset, int write, int dma) {
    OverviewTrace *trace = opaque;
    static const uint32_t metric_pc[] = {0x0291b0u, 0x0291b7u, 0x0291beu, 0x0291c5u,
        0x0291ccu, 0x02920eu, 0x029215u, 0x02921cu};
    static const unsigned base[] = {0x8e28u, 0x99e0u, 0x8270u, 0x76b8u,
        0x6b00u, 0xae62u, 0xb0abu, 0xafe8u};
    if (!write && !dma && pc >= 0x0291b0u && pc <= 0x02921cu)
        for (unsigned m = 0u; m < sizeof(metric_pc) / sizeof(metric_pc[0]); ++m)
            if (metric_pc[m] == pc && offset >= base[m]) {
                const unsigned index = offset - base[m];
                if (index > trace->metric_last_offset[m]) trace->metric_last_offset[m] = index;
                ++trace->metric_reads[m];
            }
    if (write || dma || (offset & 1u) || offset < 0x0200u || offset >= 0x5fc0u)
        return;
    const unsigned cell = (offset - 0x0200u) / 2u;
    if (!trace->seen[cell]) {
        trace->seen[cell] = 1u;
        ++trace->cells;
    }
    for (unsigned n = 0u; n < sizeof(trace->reads) / sizeof(trace->reads[0]); ++n)
        if (!trace->reads[n] || trace->pc[n] == pc) {
            trace->pc[n] = pc;
            ++trace->reads[n];
            break;
        }
}

static int stock_open_overview(SimCityRecomp *game, WorldProbe *audio, const char *name) {
    OverviewTrace trace = {0};
    for (unsigned f = 0u; f < 722u; ++f) {
        const uint64_t before = audio->frames;
        if (!simcity_recomp_advance_stock_map_trace(game,
                f < 2u ? SIMCITY_INPUT_B : 0u, 1u, stock_overview_access, &trace) ||
            !drain_pcm(game, &audio->hash, &audio->frames)) return 0;
        world_probe_measure_pcm(audio, before);
    }
    printf("stock-overview-source mode=%s raw_stock_tile_cells=%u\n", name, trace.cells);
    for (unsigned i = 0u; i < sizeof(trace.reads) / sizeof(trace.reads[0]); ++i)
        if (trace.reads[i] >= 100u)
            printf("stock-overview-reader mode=%s pc=%06X reads=%u\n", name, trace.pc[i], trace.reads[i]);
    unsigned metric_count = 0u;
    for (unsigned m = 0u; m < sizeof(trace.metric_reads) / sizeof(trace.metric_reads[0]); ++m)
        if (trace.metric_reads[m]) {
            metric_count += trace.metric_reads[m];
            printf("stock-metric-read mode=%s source=%u reads=%u last_index=%u\n",
                name, m, trace.metric_reads[m], trace.metric_last_offset[m]);
        }
    return trace.cells != 0u || metric_count != 0u;
}

static unsigned stock_disaster_tile_count(SimCityRecomp *game, int world, unsigned code, unsigned *outer,
                                          unsigned *first_x, unsigned *first_y) {
    unsigned count = 0u;
    *outer = 0u;
    for (unsigned y = 0; y < (world ? 200u : 100u); ++y) {
        for (unsigned x = 0; x < (world ? 240u : 120u); ++x) {
            uint16_t tile;
            if (!(world ? simcity_recomp_stock_world_tile(game, x, y, &tile) :
                          stock_tile_at(game, (int)x, (int)y, &tile))) return UINT_MAX;
            if ((tile & 0x3fffu) != code) continue;
            if (!count) { *first_x = x; *first_y = y; }
            ++count;
            *outer += x >= 120u || y >= 100u;
        }
    }
    return count;
}

typedef struct StockFireWrites { unsigned single, diagonal, footprint; } StockFireWrites;

static void stock_fire_write_trace(void *opaque, uint32_t pc, uint16_t address, int write, int dma) {
    StockFireWrites *trace = opaque;
    if (!write || dma || (address & 1u)) return;
    if (pc == 0x03a848u) ++trace->single;
    if (pc == 0x03a8b7u) ++trace->diagonal;
    if (pc == 0x03a9bcu) ++trace->footprint;
}

static int stock_world_fire_spread_probe(SimCityRecomp *game, const char *directory, unsigned building) {
    enum { WW = 240, WH = 200, X = 162, Y = 145, R = 5 };
    const unsigned base = building == 6u ? 0x297u : building == 4u ? 0x287u : 0x245u;
    const unsigned lot_x = X - (building == 6u ? 2u : 1u);
    const unsigned lot_y = Y - (building == 6u ? 3u : 2u);
    /* The native 6x6 table's third row is displaced left of the lot.
       With bare terrain there, stock behavior leaves six lot tiles intact. */
    const unsigned expected = building * building - (building == 6u ? 6u : 0u);
    const char *name = building == 6u ? "building6" : building == 4u ? "building4" : building ? "building" : "spread";
    uint16_t *tiles = calloc(WW * WH, sizeof(*tiles));
    SimCityRecompStockWorldPower *power = calloc(1u, sizeof(*power));
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    StockFireWrites trace = {0};
    char path[4096], scratch[4096], error[256] = {0};
    int ok = 0, spread = 0, extinguished = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!tiles || !power) goto finish;
    snprintf(path, sizeof(path), "%s/stock-60hz-city.scsnap", directory);
    snprintf(scratch, sizeof(scratch), "%s/stock-fire-%s-fixture.scsnap", directory,
        name);
    if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) goto finish;
    /* Controlled fixture: a square of stock trees, with a bare perimeter
       so the real simulation can spread and then exhaust the fire. */
    for (unsigned y = Y - R; y <= Y + R; ++y)
        for (unsigned x = X - R; x <= X + R; ++x) tiles[y * WW + x] = 0x0014u;
    if (!simcity_recomp_stock_world_snapshot_save(game, scratch, tiles, WW * WH,
            power, error, sizeof(error)) ||
        !simcity_recomp_stock_world_open_snapshot(game, scratch, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !stock_move_axis(game, &audio, X, 0) || !stock_move_axis(game, &audio, Y, 1)) goto finish;
    if (building) {
        /* Put the fire immediately south of a civic/utility lot center.
           Unlike a residential lot it cannot redevelop during the test. */
        for (unsigned dy = 0; dy < building; ++dy)
            for (unsigned dx = 0; dx < building; ++dx)
                tiles[(lot_y + dy) * WW + lot_x + dx] = (uint16_t)(base + building * dy + dx);
    }
    tiles[Y * WW + X] = 0x007fu;
    if (!simcity_recomp_stock_world_snapshot_save(game, scratch, tiles, WW * WH,
            power, error, sizeof(error)) ||
        !simcity_recomp_stock_world_open_snapshot(game, scratch, error, sizeof(error))) goto finish;
    memset(&audio, 0, sizeof(audio));
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    for (unsigned batch = 0; batch < 90u; ++batch) {
        unsigned outer = 0u, x = 0u, y = 0u, adjacent = 0u;
        uint16_t center = 0u;
        static const int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
        if (building) {
            for (unsigned i = 0; i < 60u; ++i) {
                const uint64_t before = audio.frames;
                if (!simcity_recomp_advance_stock_map_trace(game, 0u, 1u, stock_fire_write_trace, &trace) ||
                    !drain_pcm(game, &audio.hash, &audio.frames)) goto finish;
                world_probe_measure_pcm(&audio, before);
            }
        } else if (!world_probe_step(game, &audio, 0u, 60u, 0, 0)) goto finish;
        if (!simcity_recomp_stock_world_tile(game, X, Y, &center)) goto finish;
        const unsigned fires = stock_disaster_tile_count(game, 1, 0x7fu, &outer, &x, &y);
        if (fires == UINT_MAX || fires != outer) goto finish;
        for (unsigned i = 0; i < 4u; ++i) {
            uint16_t neighbor = 0u;
            if (!simcity_recomp_stock_world_tile(game, X + dx[i], Y + dy[i], &neighbor)) goto finish;
            adjacent += (neighbor & 0x3fffu) == 0x7fu;
        }
        unsigned footprint = 0u, lot_fires = 0u;
        if (building) {
            for (unsigned row = 0; row < building; ++row)
                for (unsigned col = 0; col < building; ++col) {
                    uint16_t tile = 0u;
                    if (!simcity_recomp_stock_world_tile(game, lot_x + col, lot_y + row, &tile)) goto finish;
                    tile &= 0x3fffu;
                    lot_fires += tile == 0x7fu;
                    footprint += tile == 0x7fu || tile == 0x28u;
                }
        }
        const int reached = building ? footprint == expected : adjacent != 0u;
        if (batch % 10u == 0u || (!spread && reached) || (!extinguished && center == 0x28u)) {
            printf("stock-fire-spread frame=%u center=(%u,%u):%04X fires=%u adjacent=%u first=(%u,%u)\n",
                (batch + 1u) * 60u, X, Y, center, fires, adjacent, x, y);
            if (building) {
                uint16_t lot_center = 0u;
                if (!simcity_recomp_stock_world_tile(game, X, Y - 1u, &lot_center)) goto finish;
                printf("stock-fire-building size=%u lot_center=%04X footprint_burned=%u/%u single=%u diagonal=%u footprint_writes=%u\n",
                    building, lot_center, footprint, expected, trace.single, trace.diagonal, trace.footprint);
            }
            fflush(stdout);
        }
        if (!spread && reached) {
            if (building && (!trace.diagonal || trace.footprint < expected - 1u)) goto finish;
            if (building && lot_fires != fires) {
                /* In the same census pass a newly burning tile can spread
                   to the next tree. Allow that, but fail on a distant alias. */
                if (fires - lot_fires > trace.single) goto finish;
                for (unsigned row = 0; row < WH; ++row)
                    for (unsigned col = 0; col < WW; ++col) {
                        uint16_t tile = 0u;
                        if (row >= lot_y && row < lot_y + building &&
                            col >= lot_x && col < lot_x + building) continue;
                        if (!simcity_recomp_stock_world_tile(game, col, row, &tile)) goto finish;
                        if ((tile & 0x3fffu) != 0x7fu) continue;
                        printf("stock-fire-building size=%u outside_lot=(%u,%u)\n", building, col, row);
                        if (row + 1u < lot_y || row > lot_y + building ||
                            col + 1u < lot_x || col > lot_x + building ||
                            tiles[row * WW + col] != 0x0014u) goto finish;
                    }
            }
            snprintf(path, sizeof(path), "%s/stock-fire-%s-world.bmp", directory,
                name);
            if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                    SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
            spread = 1;
        }
        if ((center & 0x3fffu) == 0x28u) extinguished = 1;
        if (spread && extinguished) break;
    }
    ok = spread && extinguished && simcity_recomp_audio_static_status(game, &status) &&
         !status.pcm_unknown_frames && !status.pcm_overflows &&
         !simcity_recomp_audio_dropped_frames(game) && !audio.modeled_underruns && !audio.modeled_overflows;
finish:
    printf("stock-fire-spread verified=%d spread=%d extinguished=%d pcm=%llu underruns=%u overflows=%u\n",
        ok, spread, extinguished, (unsigned long long)audio.frames, audio.modeled_underruns,
        audio.modeled_overflows);
    if (!ok) fprintf(stderr, "Fire spread probe failed: %s %s\n", error, simcity_recomp_last_error(game));
    free(power);
    free(tiles);
    return ok;
}

static int stock_world_disaster_fixture(SimCityRecomp *game, const char *directory, char *path, int lots,
                                     size_t path_capacity, char *error, size_t error_capacity) {
    enum { WW = 240, WH = 200 };
    uint16_t *tiles = calloc(WW * WH, sizeof(*tiles));
    SimCityRecompStockWorldPower *power = calloc(1u, sizeof(*power));
    char source[4096];
    snprintf(source, sizeof(source), "%s/stock-60hz-city.scsnap", directory);
    snprintf(path, path_capacity, "%s/stock-%s-fixture.scsnap", directory,
        lots == 3 ? "powered-airport" : lots == 2 ? "tornado-lots" : lots ? "quake-lots" : "flood-coast");
    /* A treed coast entirely south of the former map boundary makes the
       native RNG/terrain test fail if it still picks only stock-map cells. */
    if (tiles && lots == 3) {
        /* Give the crash a stock burnable tile rather than empty grass. */
        for (unsigned y = 130; y < 168; ++y)
            for (unsigned x = 130; x < 170; ++x) tiles[y * WW + x] = 0x0014u;
        for (unsigned y = 148; y < 154; ++y)
            for (unsigned x = 148; x < 154; ++x)
                tiles[y * WW + x] = (uint16_t)(0x297u + (y - 148u) * 6u + x - 148u);
        for (unsigned y = 149; y < 153; ++y)
            for (unsigned x = 136; x < 140; ++x)
                tiles[y * WW + x] = (uint16_t)(0x287u + (y - 149u) * 4u + x - 136u);
        for (unsigned x = 140; x < 148; ++x) tiles[150u * WW + x] = 0x0060u;
    } else if (tiles && lots) {
        /* Complete civic lots only beyond the old limits. The tornado
           also needs buildings along its easterly flight path. */
        for (unsigned y = lots == 2 ? 0u : 102u; y + 2u < WH; y += 3u)
            for (unsigned x = y < 102u ? 120u : 0u; x + 2u < WW; x += 3u)
                for (unsigned dy = 0; dy < 3u; ++dy)
                    for (unsigned dx = 0; dx < 3u; ++dx)
                        tiles[(y + dy) * WW + x + dx] = (uint16_t)(0x245u + 3u * dy + dx);
    } else if (tiles) {
        for (unsigned y = 112; y < WH; ++y)
            for (unsigned x = 0; x < WW; ++x)
                tiles[y * WW + x] = x % 8u < 4u ? 0x0004u : 0x0014u;
    }
    const int ok = tiles && power && simcity_recomp_snapshot_load(game, source, error, error_capacity) &&
        simcity_recomp_stock_world_snapshot_save(game, path, tiles, WW * WH, power, error, error_capacity);
    free(power);
    free(tiles);
    return ok;
}

static int stock_disaster_camera_verify(SimCityRecomp *game, int world, const char *name,
                                        unsigned target_x, unsigned target_y) {
    uint16_t cx = 0, cy = 0;
    if (!read_wram16(game, 0x01bdu, &cx) || !read_wram16(game, 0x01bfu, &cy)) return 0;
    const int max_x = world ? 210 : 90, max_y = world ? 172 : 72;
    int expected_x = (int)target_x - 15, expected_y = (int)target_y - 15;
    if (expected_x < -2) expected_x = -2;
    if (expected_y < -2) expected_y = -2;
    if (expected_x > max_x) expected_x = max_x;
    if (expected_y > max_y) expected_y = max_y;
    /* The stock redraw can advance the viewport by one tile; the sampled
       frame may fall on either side of that redraw. */
    printf("stock-disaster-camera map=%s target=(%u,%u) camera=(%d,%d) centered_origin=(%d,%d)\n",
        name, target_x, target_y, (int)(int16_t)cx, (int)(int16_t)cy, expected_x, expected_y);
    return (int16_t)cx >= expected_x && (int16_t)cx <= expected_x + 1 &&
           (int16_t)cy >= expected_y && (int16_t)cy <= expected_y + 1;
}

static int stock_world_house_award_probe(SimCityRecomp *game, const char *directory) {
    enum { WW = 240, WH = 200 };
    uint16_t *tiles = calloc(WW * WH, sizeof(*tiles));
    SimCityRecompStockWorldPower *power = calloc(1u, sizeof(*power));
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    uint16_t population = 0, notice = 0, message = 0, hud = 0, focus = 0;
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!tiles || !power) goto finish;
    snprintf(path, sizeof(path), "%s/stock-60hz-city.scsnap", directory);
    if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) goto finish;
    /* A small already developed town-planning fixture. Only the tiles are
       seeded; the original census, power grid and award rules run normally. */
    for (unsigned dy = 0; dy < 4u; ++dy)
        for (unsigned dx = 0; dx < 4u; ++dx)
            tiles[(142u + dy) * WW + 130u + dx] = (uint16_t)(0x287u + 4u * dy + dx);
    for (unsigned row = 0; row < 3u; ++row) {
        const unsigned y = 139u + 6u * row;
        for (unsigned col = 0; col < 9u; ++col) {
            const unsigned x = 137u + 5u * col;
            const unsigned base = col < 6u ? 0x0b9u : col < 8u ? 0x14du : 0x20du;
            for (unsigned dy = 0; dy < 3u; ++dy)
                for (unsigned dx = 0; dx < 3u; ++dx)
                    tiles[(y + dy) * WW + x + dx] = (uint16_t)(base + 3u * dy + dx);
        }
        for (unsigned x = 135u; x < 181u; ++x) {
            tiles[(y + 3u) * WW + x] = 0x0032u;
            tiles[(y + 4u) * WW + x] = 0x0060u;
        }
        for (unsigned col = 0; col < 9u; ++col)
            tiles[(y - 1u) * WW + 137u + 5u * col] = 0x0060u;
        for (unsigned x = 135u; x < 181u; ++x) tiles[(y - 1u) * WW + x] = 0x0060u;
    }
    for (unsigned y = 138u; y <= 155u; ++y) tiles[y * WW + 134u] = 0x0060u;
    snprintf(path, sizeof(path), "%s/stock-house-award-fixture.scsnap", directory);
    if (!simcity_recomp_stock_world_snapshot_save(game, path, tiles, WW * WH, power, error, sizeof(error)) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error))) goto finish;
    for (unsigned batch = 0; batch < 85u; ++batch) {
        if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
            !read_wram16(game, 0x0ba5u, &population) || !read_wram16(game, 0x0395u, &notice) ||
            !read_wram16(game, 0x0397u, &message)) goto finish;
        if (batch % 10u == 0u || notice) {
            printf("stock-house-award batch=%u population=%u notice=%u message=%u\n", batch, population, notice, message);
            fflush(stdout);
        }
        if (!notice) continue;
        if (!world_probe_step(game, &audio, 0u, 90u, 0, 0)) goto finish;
        snprintf(path, sizeof(path), "%s/stock-house-award-notice-%u.bmp", directory, message);
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
        for (unsigned attempt = 0; notice && attempt < 25u; ++attempt)
            if (!stock_press(game, &audio, SIMCITY_INPUT_B, 10u) ||
                !read_wram16(game, 0x0395u, &notice)) goto finish;
        if (notice) goto finish;
        if (population >= 2000u && message == 44u) break;
    }
    if (population < 2000u || message != 44u || !read_wram16(game, 0x01d7u, &hud) ||
        (!hud && !stock_press(game, &audio, SIMCITY_INPUT_X, 30u)) ||
        !read_wram16(game, 0x0201u, &focus) ||
        (focus == 0xffu && !stock_press(game, &audio, SIMCITY_INPUT_SELECT, 18u))) goto finish;
    for (unsigned step = 0; step < 48u; ++step) {
        uint16_t x = 0, y = 0;
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) goto finish;
        if (y >= 168u && y < 176u && x >= 31u && x < 47u) break;
        const uint16_t dir = y < 168u ? SIMCITY_INPUT_DOWN : y >= 176u ? SIMCITY_INPUT_UP :
                             x < 31u ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
        if (!stock_press(game, &audio, dir, 18u) || step == 47u) goto finish;
    }
    if (!stock_press(game, &audio, SIMCITY_INPUT_B, 120u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-house-award-picker.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    /* The gift picker maintains its own selection, separate from the
       sidebar's hand cursor. B confirms the only offered gift. */
    uint16_t tool = 0;
    if (!stock_press(game, &audio, SIMCITY_INPUT_B, 60u) ||
        !read_wram16(game, 0x020du, &tool) || !read_wram16(game, 0x0201u, &focus)) goto finish;
    printf("stock-house-picker selected_tool=%u focus=%04X\n", tool, focus);
    if (tool != 15u || (focus != 0xffu && !stock_press(game, &audio, SIMCITY_INPUT_SELECT, 18u)) ||
        !read_wram16(game, 0x01d7u, &hud) || (hud && !stock_press(game, &audio, SIMCITY_INPUT_X, 30u)) ||
        !stock_move_axis(game, &audio, 145, 0) || !stock_move_axis(game, &audio, 125, 1) ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 90u)) goto finish;
    unsigned placed = 0;
    uint16_t expected[9];
    for (unsigned y = 121u; y <= 129u; ++y)
        for (unsigned x = 141u; x <= 149u; ++x) {
            uint16_t tile = 0;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto finish;
            if (x >= 145u && x <= 147u && y >= 125u && y <= 127u) {
                const unsigned i = (y - 125u) * 3u + x - 145u;
                if ((tile & 0x03ffu) != 0x02bbu + i) goto finish;
                expected[i] = tile;
                ++placed;
                printf("stock-house-placed tile=(%u,%u):%04X\n", x, y, tile);
            } else if (tile) goto finish;
        }
    snprintf(path, sizeof(path), "%s/stock-house-award-placed.bmp", directory);
    if (placed != 9u || !simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !simcity_recomp_audio_static_status(game, &status) || status.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game) || audio.modeled_underruns || audio.modeled_overflows) goto finish;
    snprintf(path, sizeof(path), "%s/stock-house-award-placed.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) goto finish;
    for (unsigned i = 0; i < 9u; ++i) {
        uint16_t tile = 0;
        if (!simcity_recomp_stock_world_tile(game, 145u + i % 3u, 125u + i / 3u, &tile) || tile != expected[i]) goto finish;
    }
    printf("stock-house-placed snapshot_restored=1 footprint=9/9\n");
    ok = 1;
finish:
    printf("stock-house-award population=%u last_message=%u placed=%d underruns=%u overflows=%u\n",
        population, message, ok, audio.modeled_underruns, audio.modeled_overflows);
    if (!ok) fprintf(stderr, "House award probe failed: %s %s\n", error, simcity_recomp_last_error(game));
    free(power);
    free(tiles);
    return ok;
}

static int stock_world_storage_menu(SimCityRecomp *game, WorldProbe *audio, unsigned target_x) {
    uint16_t hud = 0, focus = 0, x = 0, y = 0;
    if (!read_wram16(game, 0x01d7u, &hud) ||
        (!hud && !stock_press(game, audio, SIMCITY_INPUT_X, 60u)) ||
        !read_wram16(game, 0x0201u, &focus) ||
        (focus == 0xffu && !stock_press(game, audio, SIMCITY_INPUT_SELECT, 30u))) return 0;
    for (unsigned i = 0; i < 24u; ++i) {
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
        if (y < 40u && x < 31u) break;
        if (!stock_press(game, audio, y >= 40u ? SIMCITY_INPUT_UP : SIMCITY_INPUT_LEFT, 18u)) return 0;
    }
    if (y >= 40u || x >= 31u) return 0;
    for (unsigned i = 0; i < 8u; ++i)
        if (!stock_press(game, audio, SIMCITY_INPUT_RIGHT, 18u)) return 0;
    if (!stock_press(game, audio, SIMCITY_INPUT_B, 120u)) return 0;
    for (unsigned i = 0; i < 24u; ++i) {
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
        if (x >= target_x - 8u && x <= target_x + 8u && y >= 76u && y <= 91u)
            return stock_press(game, audio, SIMCITY_INPUT_B, 120u);
        const uint16_t dir = y < 76u ? SIMCITY_INPUT_DOWN : y > 91u ? SIMCITY_INPUT_UP :
                            x < target_x ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
        if (!stock_press(game, audio, dir, 18u)) return 0;
    }
    return 0;
}

static int stock_world_map_digest(SimCityRecomp *game, uint64_t *digest) {
    *digest = UINT64_C(14695981039346656037);
    for (unsigned y = 0u; y < TOUR_HEIGHT; ++y)
        for (unsigned x = 0u; x < TOUR_WIDTH; ++x) {
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) return 0;
            *digest = (*digest ^ (tile & 0x03ffu)) * UINT64_C(1099511628211);
        }
    return 1;
}

static int stock_world_battery_file(SimCityRecomp *game, const char *directory, int write) {
    char path[4096];
    const size_t size = simcity_recomp_world_battery_size();
    uint8_t *bytes = malloc(size);
    int ok = 0;
    if (!bytes) return 0;
    snprintf(path, sizeof(path), "%s/stock-cold-test.scwb", directory);
    if (write && !simcity_recomp_world_battery_export(game, bytes, size)) goto finish;
    FILE *file = fopen(path, write ? "wb" : "rb");
    if (!file) goto finish;
    ok = write ? fwrite(bytes, 1u, size, file) == size :
        fread(bytes, 1u, size, file) == size && fgetc(file) == EOF && !ferror(file);
    if (fclose(file) != 0) ok = 0;
    if (!write && ok) {
        bytes[size - 10u] ^= 1u;
        ok = !simcity_recomp_world_battery_import(game, bytes, size) &&
             !simcity_recomp_world_battery_import(game, bytes, size - 1u);
        bytes[size - 10u] ^= 1u;
        ok = ok && simcity_recomp_world_battery_import(game, bytes, size) &&
            !simcity_recomp_world_battery_dirty(game);
    }
finish:
    free(bytes);
    return ok;
}

static int stock_catalog_saved_menu_probe(SimCityRecomp *game, const char *directory) {
    WorldProbe audio = {0};
    NativeMenuFrameAudit audit = {0};
    uint16_t has_resume = 0u, state = 0u;
    uint32_t *native = malloc(SIMCITY_RECOMP_FRAME_PIXELS * sizeof(*native));
    char path[4096], error[256] = {0};
    unsigned funds = 0u;
    uint64_t digest = 0u;
    int ok = 0;
    if (!native || !stock_world_battery_file(game, directory, 0) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !world_probe_step(game, &audio, 0u, 840u, 0, 0) ||
        !stock_press(game, &audio, SIMCITY_INPUT_START, 150u) ||
        !simcity_recomp_world_menu_ready(game) ||
        !read_wram16(game, 0x44u, &has_resume) || !has_resume ||
        !simcity_recomp_render_presentation_frame(game, error, sizeof(error))) goto finish;
    memcpy(native, simcity_recomp_frame_bgra(game), SIMCITY_RECOMP_FRAME_PIXELS * sizeof(*native));
    simcity_recomp_world_catalog_enable(game, 1);
    if (!simcity_recomp_render_presentation_frame(game, error, sizeof(error))) goto finish;
    const uint32_t *extended = simcity_recomp_frame_bgra(game);
    for (unsigned y = 105u; y < 195u; ++y)
        if (memcmp(native + y * 256u + 48u, extended + (y - 12u) * 256u + 48u,
                   170u * sizeof(*native)) != 0) goto finish;
    if (!extended[191u * 256u + 74u] ||
        !stock_catalog_capture(game, directory, "saved-main")) goto finish;
    for (unsigned i = 0u; i < 5u &&
         simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_FOCUSED; ++i)
        if (!stock_press(game, &audio, SIMCITY_INPUT_DOWN, 8u)) goto finish;
    if (simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_FOCUSED ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 8u) ||
        simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_LIST ||
        !stock_press(game, &audio, SIMCITY_INPUT_X, 8u) ||
        simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_FOCUSED ||
        !stock_press(game, &audio, SIMCITY_INPUT_UP, 8u) ||
        simcity_recomp_world_catalog_view(game, NULL) != SIMCITY_WORLD_CATALOG_MAIN) goto finish;
    for (unsigned i = 0u; i < 3u; ++i)
        if (!stock_press(game, &audio, SIMCITY_INPUT_UP, 8u)) goto finish;
    if (!read_wram16(game, 0x3eu, &state) || (state & 0xffu) != 0u) goto finish;
    if (!world_probe_step(game, &audio, SIMCITY_INPUT_B, 2u, 0, 0)) goto finish;
    for (unsigned i = 0u; i < 40u; ++i) {
        if (!read_wram16(game, 0x14u, &state)) goto finish;
        if (state == 0x10u) {
            ok = !simcity_recomp_stock_world_new_city_pending(game) &&
                 simcity_recomp_world_catalog_view(game, NULL) == SIMCITY_WORLD_CATALOG_HIDDEN;
            break;
        }
        if (!world_probe_step(game, &audio, 0u, 1u, 0, 0)) goto finish;
    }
    if (ok) {
        ok = 0;
        audit.directory = directory;
        audit.snapshot = simcity_recomp_video_snapshot_create();
        audit.prepared = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*audit.prepared));
        if (!audit.snapshot || !audit.prepared) goto finish;
        native_menu_frame_audit = &audit;
        if (!world_probe_step(game, &audio, 0u, 150u, 0, 0) ||
            !simcity_recomp_render_presentation_frame(game, error, sizeof(error))) goto finish;
        snprintf(path, sizeof(path), "%s/stock-catalog-title-resume-picker.bmp", directory);
        if (!write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                       SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
        /* The original title picker opens with slot 1 selected. */
        unsigned expected_funds = 0u;
        unsigned long long expected_digest = 0u;
        snprintf(path, sizeof(path), "%s/inland-battery-expected.txt", directory);
        FILE *expected = fopen(path, "rb");
        if (!expected) goto finish;
        const int fields = fscanf(expected, "%u %llx", &expected_funds, &expected_digest);
        if (fclose(expected) != 0 || fields != 2) goto finish;
        if (!stock_press(game, &audio, SIMCITY_INPUT_B, 450u)) goto finish;
        ok = simcity_recomp_stock_world_active(game) && stock_funds(game, &funds) &&
             funds == expected_funds && stock_world_map_digest(game, &digest) &&
             digest == (uint64_t)expected_digest && !simcity_recomp_world_battery_dirty(game) &&
             !audio.modeled_underruns && !audio.modeled_overflows;
    }
finish:
    native_menu_frame_audit = NULL;
    printf("stock-catalog-saved-menu resume_flag=%04x picker_state=%04x expanded=%d funds=%u digest=%016llx checked_frames=%u pass=%d\n",
        has_resume, state, simcity_recomp_stock_world_active(game), funds,
        (unsigned long long)digest, audit.frames, ok);
    free(audit.prepared);
    simcity_recomp_video_snapshot_destroy(audit.snapshot);
    free(native);
    return ok;
}

static int stock_world_native_save_probe(SimCityRecomp *game, const char *directory, unsigned slot, int battery, int inland) {
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    char path[4096], error[256] = {0};
    uint16_t old_tile = 0, new_tile = 0, restored = 0;
    unsigned before = 0, spent = 0, after = 0;
    uint64_t saved_map = 0, loaded_map = 0;
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-native-city-storage.log", directory);
    if (!simcity_recomp_log_open(path, error, sizeof(error))) goto finish;
    if (battery && (slot == 2u ? !stock_world_battery_file(game, directory, 0) :
        !simcity_recomp_world_battery_enable(game))) goto finish;
    snprintf(path, sizeof(path), "%s/%s", directory,
        inland ? "stock-inland-plain-southeast.scsnap" : "stock-bank-placed.scsnap");
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, native_menu_frame_audit && native_menu_frame_audit->widescreen,
                                       error, sizeof(error))) goto finish;
    if (battery && slot == 2u) {
        uint16_t distinct = 0;
        if (!stock_world_select_tool(game, &audio, 1u) ||
            !tour_tap_cell(game, &audio, 118u * TOUR_WIDTH + 149u, &distinct) ||
            !tour_road_tile(distinct)) goto finish;
    }
    if (!stock_world_storage_menu(game, &audio, 67u) || !stock_funds(game, &before)) goto finish;
    const uint64_t previous_revision = simcity_recomp_world_battery_revision(game);
    snprintf(path, sizeof(path), "%s/stock-native-save-dialog.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    /* This modal has its own cursor. It opens on Cancel (the third item). */
    for (unsigned i = slot; i < 3u; ++i)
        if (!stock_press(game, &audio, SIMCITY_INPUT_LEFT, 18u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-native-save-slot-%u-selected.bmp", directory, slot);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 180u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-native-save-slot-%u-result.bmp", directory, slot);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    printf("stock-native-save sram_dirty=%d pcm=%llu underruns=%u overflows=%u\n",
        simcity_recomp_sram_dirty(game), (unsigned long long)audio.frames,
        audio.modeled_underruns, audio.modeled_overflows);
    if (battery) {
        const uint64_t revision = simcity_recomp_world_battery_revision(game);
        /* A worker completing an older write must not acknowledge this save. */
        simcity_recomp_world_battery_acknowledge(game, previous_revision);
        if (revision == previous_revision || !simcity_recomp_world_battery_dirty(game) ||
            !stock_world_battery_file(game, directory, 1)) goto finish;
        simcity_recomp_world_battery_acknowledge(game, revision);
        if (simcity_recomp_world_battery_dirty(game)) goto finish;
        printf("stock-native-battery-revision slot=%u old=%llu current=%llu stale_ack_preserved=1 current_ack_cleared=1\n",
            slot, (unsigned long long)previous_revision, (unsigned long long)revision);
    }
    if (!simcity_recomp_sram_dirty(game) || !stock_world_map_digest(game, &saved_map) ||
        !stock_press(game, &audio, SIMCITY_INPUT_X, 60u) ||
        !stock_world_select_tool(game, &audio, 1u) ||
        !simcity_recomp_stock_world_tile(game, 148u, 118u, &old_tile) ||
        !tour_tap_cell(game, &audio, 118u * TOUR_WIDTH + 148u, &new_tile) ||
        old_tile == new_tile || !stock_funds(game, &spent) || spent >= before ||
        !stock_world_storage_menu(game, &audio, 43u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-native-load-slot-%u-dialog.bmp", directory, slot);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    for (unsigned i = slot; i < 3u; ++i)
        if (!stock_press(game, &audio, SIMCITY_INPUT_LEFT, 18u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-native-load-slot-%u-selected.bmp", directory, slot);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 300u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-native-load-slot-%u-result.bmp", directory, slot);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    if (!simcity_recomp_stock_world_tile(game, 148u, 118u, &restored) || !stock_funds(game, &after) ||
        !stock_world_map_digest(game, &loaded_map) ||
        !simcity_recomp_audio_static_status(game, &pcm)) goto finish;
    printf("stock-native-roundtrip slot=%u tile=%04X->%04X->%04X funds=%u->%u->%u maps=%016llX/%016llX pcm=%llu underruns=%u overflows=%u\n",
        slot, old_tile, new_tile, restored, before, spent, after,
        (unsigned long long)saved_map, (unsigned long long)loaded_map,
        (unsigned long long)audio.frames,
        audio.modeled_underruns, audio.modeled_overflows);
    ok = (restored & 0x03ffu) == (old_tile & 0x03ffu) && after == before && saved_map == loaded_map &&
        !pcm.pcm_overflows && !simcity_recomp_audio_dropped_frames(game) &&
        !audio.modeled_underruns && !audio.modeled_overflows;
    if (ok && inland) {
        snprintf(path, sizeof(path), "%s/inland-battery-expected.txt", directory);
        FILE *expected = fopen(path, "wb");
        if (!expected) { ok = 0; goto finish; }
        ok = fprintf(expected, "%u %016llX\n", before, (unsigned long long)saved_map) > 0;
        if (fclose(expected) != 0) ok = 0;
    }
finish:
    if (!ok) fprintf(stderr, "Native save menu trace failed: %s %s\n", error, simcity_recomp_last_error(game));
    simcity_recomp_log_close();
    return ok;
}

static int stock_world_battery_cold_probe(SimCityRecomp *game, const char *directory, unsigned slot, int inland) {
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    char path[4096], error[256] = {0};
    unsigned funds = 0;
    uint64_t digest = 0;
    unsigned expected_funds = slot == 1u ? 1785u : 1775u;
    unsigned long long expected_digest = slot == 1u ?
        UINT64_C(0x18E672068B8BD721) : UINT64_C(0xEFBC915C8B3C0A64);
    uint16_t road = 0;
    int ok = 0;
    audio.measure_all = 1;
    if (inland) {
        snprintf(path, sizeof(path), "%s/inland-battery-expected.txt", directory);
        FILE *expected = fopen(path, "rb");
        if (!expected) goto finish;
        const int matched = fscanf(expected, "%u %llx", &expected_funds, &expected_digest);
        const int closed = fclose(expected) == 0;
        if (matched != 2 || !closed) goto finish;
    }
    snprintf(path, sizeof(path), "%s/stock-native-cold-%u.log", directory, slot);
    if (!simcity_recomp_log_open(path, error, sizeof(error)) ||
        !stock_world_battery_file(game, directory, 0) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !world_probe_step(game, &audio, 0u, 840u, 0, 0) ||
        !stock_press(game, &audio, SIMCITY_INPUT_START, 150u) ||
        !simcity_recomp_world_menu_ready(game)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-native-cold-menu.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    /* The original boot menu offers Practice, New City and Scenario only.
       Enter an ordinary city, then use the original city toolbar's Load. */
    if (!stock_press(game, &audio, SIMCITY_INPUT_DOWN, 18u) ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 90u)) goto finish;
    for (uint32_t f = simcity_recomp_current_frame(game); f < 3400u; ++f)
        if (!world_probe_step(game, &audio, new_city_input(f), 1u, 0, 0)) goto finish;
    if (simcity_recomp_stock_world_active(game) ||
        !stock_world_storage_menu(game, &audio, 43u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-native-cold-picker.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    for (unsigned i = slot; i < 3u; ++i)
        if (!stock_press(game, &audio, SIMCITY_INPUT_LEFT, 18u)) goto finish;
    if (!stock_press(game, &audio, SIMCITY_INPUT_B, 450u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-native-cold-result-%u.bmp", directory, slot);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !stock_world_map_digest(game, &digest) || !stock_funds(game, &funds) ||
        !simcity_recomp_stock_world_tile(game, 149u, 118u, &road) ||
        !simcity_recomp_audio_static_status(game, &pcm)) goto finish;
    printf("stock-native-cold slot=%u treasury=%u digest=%016llX road=%04X pcm=%llu underruns=%u overflows=%u\n",
        slot, funds, (unsigned long long)digest, road, (unsigned long long)audio.frames,
        audio.modeled_underruns, audio.modeled_overflows);
    if (funds != expected_funds || digest != expected_digest ||
        (slot == 1u ? road != 0u : !tour_road_tile(road))) goto finish;
    if (!stock_press(game, &audio, SIMCITY_INPUT_X, 60u)) goto finish;
    SimCityRecompStockWorldSample sample = {0};
    uint16_t lot = 0;
    const unsigned lot_x = inland ? 206u : 146u, lot_y = inland ? 161u : 117u;
    for (unsigned elapsed = 0; elapsed < 7200u; elapsed += 120u) {
        if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
            !simcity_recomp_stock_world_sample(game, lot_x, lot_y, &sample) ||
            !simcity_recomp_stock_world_tile(game, lot_x, lot_y, &lot)) goto finish;
        if (sample.power_cycles && (lot & 0x8000u)) break;
    }
    printf("stock-native-cold resumed slot=%u power_cycles=%u census_visits=%u lot=%04X pcm=%llu underruns=%u overflows=%u\n",
        slot, sample.power_cycles, sample.census_visits, lot, (unsigned long long)audio.frames,
        audio.modeled_underruns, audio.modeled_overflows);
    ok = (inland ? (lot & 0x8000u) && (lot & 0x03ffu) >= 0x080u && (lot & 0x03ffu) < 0x137u :
         (lot & 0x83ffu) == 0x82e3u) && sample.power_cycles &&
        !sample.power_order_errors && !sample.census_order_errors &&
        simcity_recomp_audio_static_status(game, &pcm) && !pcm.pcm_overflows &&
        !simcity_recomp_audio_dropped_frames(game) && !audio.modeled_underruns && !audio.modeled_overflows;
finish:
    if (!ok) fprintf(stderr, "Cold battery slot %u failed: %s %s\n", slot, error, simcity_recomp_last_error(game));
    simcity_recomp_log_close();
    return ok;
}

static int stock_world_bank_loan_probe(SimCityRecomp *game, const char *directory) {
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    uint16_t hud = 0, focus = 0, x = 0, y = 0;
    unsigned before = 0, after = 0, hit = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-bank-placed.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !read_wram16(game, 0x01d7u, &hud) || (!hud && !stock_press(game, &audio, SIMCITY_INPUT_X, 60u)) ||
        !read_wram16(game, 0x0201u, &focus) || (focus == 0xffu && !stock_press(game, &audio, SIMCITY_INPUT_SELECT, 30u))) return 0;
    for (unsigned i = 0; i < 24u; ++i) {
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
        if (y < 40u && x < 31u) break;
        if (!stock_press(game, &audio, y >= 40u ? SIMCITY_INPUT_UP : SIMCITY_INPUT_LEFT, 18u)) return 0;
    }
    if (y >= 40u || x >= 31u) return 0;
    for (unsigned i = 0; i < 6u; ++i)
        if (!stock_press(game, &audio, SIMCITY_INPUT_RIGHT, 18u)) return 0;
    if (!stock_press(game, &audio, SIMCITY_INPUT_B, 120u)) return 0;
    snprintf(path, sizeof(path), "%s/stock-bank-information.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
    for (unsigned i = 0; i < 32u; ++i) {
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
        if (x >= 60u && x <= 74u && y >= 124u && y <= 135u) { hit = 1u; break; }
        const uint16_t dir = y < 124u ? SIMCITY_INPUT_DOWN : y > 135u ? SIMCITY_INPUT_UP :
                             x < 60u ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
        if (!stock_press(game, &audio, dir, 18u)) return 0;
    }
    printf("stock-bank-menu pointer=(%u,%u) hit=%u\n", x, y, hit);
    uint16_t term = 0;
    if (!hit || !stock_funds(game, &before) || !read_wram16(game, 0x0b1du, &term) ||
        (term & 255u) || !stock_press(game, &audio, SIMCITY_INPUT_B, 120u)) return 0;
    snprintf(path, sizeof(path), "%s/stock-bank-loan-dialog.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 90u) || !stock_funds(game, &after) ||
        !read_wram16(game, 0x0b1du, &term)) return 0;
    printf("stock-bank-loan funds_before=%u after=%u repayment_years=%u\n", before, after, term & 255u);
    if (after != before + 10000u || (term & 255u) != 21u || !simcity_recomp_audio_static_status(game, &status) ||
        status.pcm_overflows || audio.modeled_underruns || audio.modeled_overflows ||
        simcity_recomp_audio_dropped_frames(game)) return 0;
    snprintf(path, sizeof(path), "%s/stock-bank-loan-accepted.scsnap", directory);
    return simcity_recomp_snapshot_save(game, path, error, sizeof(error));
}

static int stock_world_bank_repayment_probe(SimCityRecomp *game, const char *directory) {
    enum { FRAME_LIMIT = 60000, STEP = 30 };
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    uint16_t term = 0, year = 0, month = 0, notice = 0, budget_wait = 0;
    unsigned funds = 0, elapsed = 0, last_month = 0xffffu;
    unsigned previous_funds = 0;
    int ok = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-bank-loan-accepted.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !stock_funds(game, &previous_funds) ||
        !read_wram16(game, 0x0b1du, &term) || term != 21u) goto finish;
    /* Wait for the Information toolbar to return, then close it with X.
       Time is stopped while the original Information submenu is open. */
    if (!world_probe_step(game, &audio, 0u, 150u, 0, 0) ||
        !stock_press(game, &audio, SIMCITY_INPUT_X, 60u)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-bank-before-fiscal.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
            SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
    for (; elapsed < FRAME_LIMIT; elapsed += STEP) {
        if (!world_probe_step(game, &audio, 0u, STEP, 0, 0) ||
            !read_wram16(game, 0x0b1du, &term) ||
            !read_wram16(game, 0x0b53u, &year) || !read_wram16(game, 0x0b55u, &month) ||
            !read_wram16(game, 0x0395u, &notice) || !read_wram16(game, 0x0dc3u, &budget_wait) ||
            !stock_funds(game, &funds)) goto finish;
        if (month != last_month || (elapsed && elapsed % 3000u == 0u) || term != 21u) {
            printf("stock-bank-fiscal age=%u date=%u/%u term=%u funds=%u notice=%u budget_wait=%04X\n",
                elapsed + STEP, year, month, term, funds, notice, budget_wait);
            fflush(stdout);
            last_month = month;
        }
        if (term != 21u) break;
        previous_funds = funds;
        if (notice) {
            if (!stock_press(game, &audio, SIMCITY_INPUT_B, 10u)) goto finish;
        } else if (budget_wait == UINT16_MAX) {
            snprintf(path, sizeof(path), "%s/stock-bank-annual-budget.bmp", directory);
            if (!world_probe_step(game, &audio, 0u, 60u, 0, 0) ||
                !simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                    SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
            snprintf(path, sizeof(path), "%s/stock-bank-budget-pending.scsnap", directory);
            if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
            /* Navigate to the native "Go With Figures" button without
               editing tax or service funding along the way. */
            uint16_t bx = 0, by = 0;
            unsigned i;
            for (i = 0; i < 28u; ++i) {
                if (!read_wram16(game, 0x01ebu, &bx) || !read_wram16(game, 0x01edu, &by)) goto finish;
                if (by >= 200u && bx >= 72u && bx <= 187u) break;
                if (!stock_press(game, &audio, by < 200u ? SIMCITY_INPUT_DOWN :
                    bx < 72u ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT, 18u)) goto finish;
            }
            printf("stock-bank-fiscal confirm cursor=(%u,%u) steps=%u\n", bx, by, i);
            if (i == 28u || !stock_press(game, &audio, SIMCITY_INPUT_B, 90u) ||
                !read_wram16(game, 0x0dc3u, &budget_wait) || budget_wait == UINT16_MAX) goto finish;
        }
    }
    if (term != 20u) goto finish;
    /* The original annual routine stores net revenue at $0BC1. Recompute
       revenue and services independently from the guest budget fields. */
    uint16_t net, tax, other_income, road, police, fire;
    if (!read_wram16(game, 0x0bc1u, &net) || !read_wram16(game, 0x0dc9u, &tax) ||
        !read_wram16(game, 0x0dd9u, &other_income) || !read_wram16(game, 0x0dcdu, &road) ||
        !read_wram16(game, 0x0dcfu, &police) || !read_wram16(game, 0x0dd1u, &fire) ||
        !simcity_recomp_audio_static_status(game, &status)) goto finish;
    const int before_repayment = (int)tax + (int)other_income - (int)road - (int)police - (int)fire;
    printf("stock-bank-fiscal net_before_installment=%d net=%d installment=%d treasury=%u->%u pcm=%llu underruns=%u overflows=%u\n",
        before_repayment, (int)(int16_t)net, before_repayment - (int)(int16_t)net,
        previous_funds, funds, (unsigned long long)audio.frames, audio.modeled_underruns, audio.modeled_overflows);
    if (before_repayment - (int)(int16_t)net != 500 ||
        (int)funds - (int)previous_funds != (int)(int16_t)net ||
        status.pcm_overflows || audio.modeled_underruns || audio.modeled_overflows ||
        simcity_recomp_audio_dropped_frames(game)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-bank-first-repayment.scsnap", directory);
    ok = simcity_recomp_snapshot_save(game, path, error, sizeof(error));
finish:
    if (!ok) fprintf(stderr, "Bank repayment not verified after %u frames: %s %s\n",
        elapsed, error, simcity_recomp_last_error(game));
    return ok;
}

static int stock_world_bank_place_probe(SimCityRecomp *game, const char *directory) {
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    uint16_t hud = 0, focus = 0, tool = 0;
    unsigned placed = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    snprintf(path, sizeof(path), "%s/stock-bank-award-ready.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !read_wram16(game, 0x01d7u, &hud) || (!hud && !stock_press(game, &audio, SIMCITY_INPUT_X, 30u)) ||
        !read_wram16(game, 0x0201u, &focus) || (focus == 0xffu && !stock_press(game, &audio, SIMCITY_INPUT_SELECT, 18u))) return 0;
    unsigned hit = 0;
    for (unsigned i = 0; i < 48u; ++i) {
        uint16_t x = 0, y = 0;
        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
        if (y >= 168u && y < 176u && x >= 31u && x < 47u) { hit = 1u; break; }
        const uint16_t dir = y < 168u ? SIMCITY_INPUT_DOWN : y >= 176u ? SIMCITY_INPUT_UP :
                             x < 31u ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
        if (!stock_press(game, &audio, dir, 18u)) return 0;
    }
    if (!hit || !stock_press(game, &audio, SIMCITY_INPUT_B, 120u)) return 0;
    snprintf(path, sizeof(path), "%s/stock-bank-award-picker.bmp", directory);
    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
        !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 60u) || !read_wram16(game, 0x020du, &tool) || tool != 15u ||
        !read_wram16(game, 0x0201u, &focus) || (focus != 0xffu && !stock_press(game, &audio, SIMCITY_INPUT_SELECT, 18u)) ||
        !read_wram16(game, 0x01d7u, &hud) || (hud && !stock_press(game, &audio, SIMCITY_INPUT_X, 30u)) ||
        !stock_move_axis(game, &audio, 145, 0) || !stock_move_axis(game, &audio, 116, 1) ||
        !stock_press(game, &audio, SIMCITY_INPUT_B, 90u)) return 0;
    for (unsigned y = 116u; y <= 118u; ++y)
        for (unsigned x = 145u; x <= 147u; ++x) {
            uint16_t tile = 0;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) return 0;
            if ((tile & 0x03ffu) == 0x02dfu + (y - 116u) * 3u + x - 145u) ++placed;
            printf("stock-bank-place tile=(%u,%u):%04X\n", x, y, tile);
        }
    if (placed != 9u || !stock_world_select_tool(game, &audio, 3u)) return 0;
    for (unsigned y = 113u; y <= 115u; ++y) {
        uint16_t tile = 0;
        if (!tour_tap_cell(game, &audio, y * TOUR_WIDTH + 146u, &tile) || !tour_power_tile(tile)) return 0;
    }
    uint16_t center = 0;
    for (unsigned i = 0; i < 80u; ++i) {
        uint16_t notice = 0;
        if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
            !simcity_recomp_stock_world_tile(game, 146u, 117u, &center) || !read_wram16(game, 0x0395u, &notice)) return 0;
        for (unsigned attempt = 0; notice && attempt < 20u; ++attempt)
            if (!stock_press(game, &audio, SIMCITY_INPUT_B, 30u) || !read_wram16(game, 0x0395u, &notice)) return 0;
        if (notice) return 0;
        if ((center & 0x83ffu) == 0x82e3u) break;
    }
    if ((center & 0x83ffu) != 0x82e3u ||
        !simcity_recomp_audio_static_status(game, &status) || status.pcm_overflows ||
        audio.modeled_underruns || audio.modeled_overflows || simcity_recomp_audio_dropped_frames(game)) return 0;
    snprintf(path, sizeof(path), "%s/stock-bank-placed.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) return 0;
    printf("stock-bank-place verified=1 footprint=%u powered_center=%04X underruns=0 overflows=0 dropped=0\n", placed, center);
    return 1;
}

static int stock_bank_city_fixture(SimCityRecomp *game, const char *directory, char *path,
                                   size_t capacity, char *error, size_t error_capacity) {
    enum { WW = 240, WH = 200 };
    uint16_t *tiles = calloc(WW * WH, sizeof(*tiles));
    SimCityRecompStockWorldPower *power = calloc(1u, sizeof(*power));
    char source[4096];
    int ok = 0;
    snprintf(source, sizeof(source), "%s/stock-house-award-placed.scsnap", directory);
    if (!tiles || !power || !simcity_recomp_stock_world_snapshot_load(game, source, tiles, WW * WH,
            power, error, error_capacity)) goto finish;
    /* Bank eligibility also requires the stock City rank. Expand the
       same fixture with developed zones; don't alter population or cash. */
    for (unsigned y = 156u; y <= 172u; ++y) tiles[y * WW + 134u] = 0x0060u;
    for (unsigned row = 0; row < 2u; ++row) {
        const unsigned y = 163u + 7u * row;
        for (unsigned col = 0; col < 9u; ++col) {
            const unsigned x = 137u + 5u * col;
            const unsigned base = col < 5u ? 0x0b9u : col < 7u ? 0x14du : 0x20du;
            for (unsigned dy = 0; dy < 3u; ++dy)
                for (unsigned dx = 0; dx < 3u; ++dx)
                    tiles[(y + dy) * WW + x + dx] = (uint16_t)(base + 3u * dy + dx);
        }
        for (unsigned x = 135u; x < 181u; ++x) {
            tiles[(y - 1u) * WW + x] = 0x0060u;
            tiles[(y + 3u) * WW + x] = 0x0032u;
        }
    }
    snprintf(path, capacity, "%s/stock-bank-city-fixture.scsnap", directory);
    ok = simcity_recomp_stock_world_snapshot_save(game, path, tiles, WW * WH, power, error, error_capacity);
finish:
    free(power);
    free(tiles);
    return ok;
}

static int stock_world_bank_probe(SimCityRecomp *game, const char *directory) {
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    char path[4096], error[256] = {0};
    uint16_t notice = 0, message = 0, hud = 0, category = 0;
    unsigned funds = 0, initial = 0;
    int award = 0;
    audio.hash = UINT64_C(1469598103934665603);
    audio.measure_all = 1;
    if (!stock_bank_city_fixture(game, directory, path, sizeof(path), error, sizeof(error)) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error))) goto finish;
    for (unsigned step = 0; step < 85u && category < 2u; ++step) {
        uint16_t population = 0;
        if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
            !read_wram16(game, 0x0debu, &category) || !read_wram16(game, 0x0ba5u, &population) ||
            !read_wram16(game, 0x0395u, &notice)) goto finish;
        if (step % 10u == 0u || category >= 2u) {
            printf("stock-bank-city step=%u rank=%u population=%u\n", step, category, population);
            fflush(stdout);
        }
        for (unsigned attempt = 0u; notice && attempt < 40u; ++attempt)
            if (!stock_press(game, &audio, SIMCITY_INPUT_B, 30u) ||
                !read_wram16(game, 0x0395u, &notice)) goto finish;
        if (notice) goto finish;
    }
    if (category < 2u || !stock_funds(game, &initial) || !stock_world_select_tool(game, &audio, 14u)) goto finish;
    funds = initial;
    for (unsigned i = 0u; i < 6u; ++i) {
        const unsigned x = 132u + 7u * i, y = 109u;
        unsigned after = 0;
        if (!stock_world_plant_lot(game, x, y, 0) ||
            !stock_move_axis(game, &audio, (int)x, 0) || !stock_move_axis(game, &audio, (int)y, 1) ||
            !stock_press(game, &audio, SIMCITY_INPUT_B, 60u) ||
            !stock_world_plant_lot(game, x, y, 1) || !stock_funds(game, &after) || after + 3000u != funds)
            goto finish;
        funds = after;
        printf("stock-bank-purchase plant=%u site=(%u,%u) funds=%u\n", i + 1u, x, y, funds);
        fflush(stdout);
    }
    if (funds >= 2000u) {
        uint16_t park = 0;
        if (!stock_world_select_tool(game, &audio, 4u) ||
            !tour_tap_cell(game, &audio, 115u * TOUR_WIDTH + 167u, &park) ||
            (park & 0x03ffu) < 0x26u || (park & 0x03ffu) > 0x27u || !stock_funds(game, &funds)) goto finish;
    }
    if (funds >= 2000u) goto finish;
    for (unsigned step = 0u; step < 120u && !award; ++step) {
        if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
            !read_wram16(game, 0x0395u, &notice) || !read_wram16(game, 0x0397u, &message)) goto finish;
        if (step % 10u == 0u || notice) {
            printf("stock-bank-award step=%u notice=%u message=%u funds=%u rank=%u\n", step, notice, message, funds, category);
            fflush(stdout);
        }
        if (!notice) continue;
        if (!world_probe_step(game, &audio, 0u, 90u, 0, 0)) goto finish;
        snprintf(path, sizeof(path), "%s/stock-bank-notice-%u.bmp", directory, message);
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
            !write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
        for (unsigned attempt = 0u; notice && attempt < 40u; ++attempt)
            if (!stock_press(game, &audio, SIMCITY_INPUT_B, 10u) ||
                !read_wram16(game, 0x0395u, &notice)) goto finish;
        if (notice) goto finish;
        award = message == 11u;
    }
    if (!award || !read_wram16(game, 0x01d7u, &hud) ||
        !simcity_recomp_audio_static_status(game, &status) || status.pcm_overflows || audio.modeled_underruns ||
        audio.modeled_overflows || simcity_recomp_audio_dropped_frames(game)) goto finish;
    snprintf(path, sizeof(path), "%s/stock-bank-award-ready.scsnap", directory);
    if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
    printf("stock-bank-award verified=1 funds=%u hud=%u\n", funds, hud);
    return 1;
finish:
    fprintf(stderr, "Bank award probe failed funds=%u (initial=%u) message=%u: %s %s\n",
        funds, initial, message, error, simcity_recomp_last_error(game));
    return 0;
}

static int stock_world_house_power_probe(SimCityRecomp *game, const char *directory, int district) {
    enum { WW = 240, WH = 200, X = 145, Y = 125, FOOT = 24 };
    uint16_t *tiles = calloc(WW * WH, sizeof(*tiles));
    SimCityRecompStockWorldPower *power = calloc(1u, sizeof(*power));
    uint32_t pixels[2][FOOT * FOOT];
    unsigned land[2][3] = {{0}};
    unsigned final_houses[2] = {0};
    unsigned final_neighbor_land[2] = {0};
    uint32_t final_guest_frames[2] = {0};
    unsigned observed_development[2] = {0};
    char source[4096], path[4096], error[256] = {0};
    int ok = 0;
    if (!tiles || !power) goto finish;
    snprintf(source, sizeof(source), "%s/stock-house-award-placed.scsnap", directory);
    for (unsigned house = 0; house < 2u; ++house) {
        WorldProbe audio = {0};
        SimCityRecompAudioStaticStatus status = {0};
        SimCityRecompStockWorldSample before = {0}, after = {0};
        uint16_t center = 0, neighbor = 0;
        audio.hash = UINT64_C(1469598103934665603);
        audio.measure_all = 1;
        if (!simcity_recomp_stock_world_snapshot_load(game, source, tiles, WW * WH, power, error, sizeof(error))) goto finish;
        if (!house)
            for (unsigned row = Y; row < Y + 3u; ++row)
                for (unsigned col = X; col < X + 3u; ++col) tiles[row * WW + col] = 0u;
        /* The original town fixture has a powered line on row 138. */
        for (unsigned row = Y + 1u; row < 138u; ++row) tiles[row * WW + X + 3u] = 0x0060u;
        static const unsigned lots[] = {136u, 141u, 150u, 155u, 160u, 165u};
        if (district) {
            for (unsigned x = 135u; x < 170u; ++x) {
                tiles[(Y - 1u) * WW + x] = 0x0032u;
                tiles[(Y + 3u) * WW + x] = 0x0060u;
            }
            for (unsigned lot = 0; lot < sizeof(lots) / sizeof(*lots); ++lot) {
                const unsigned base = lot < 4u ? 0x80u : lot == 4u ? 0x137u : 0x1f4u;
                for (unsigned row = 0; row < 3u; ++row)
                    for (unsigned col = 0; col < 3u; ++col)
                        tiles[(Y + row) * WW + lots[lot] + col] = (uint16_t)(base + 3u * row + col);
            }
        }
        snprintf(path, sizeof(path), "%s/stock-house-%s-fixture-%u.scsnap", directory, district ? "district" : "power", house);
        if (!simcity_recomp_stock_world_snapshot_save(game, path, tiles, WW * WH, power, error, sizeof(error)) ||
            !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
            !simcity_recomp_stock_world_sample(game, X + 1u, Y + 1u, &before) ||
            !stock_move_axis(game, &audio, X + 10, 0) || !stock_move_axis(game, &audio, Y + 8, 1)) goto finish;
        for (unsigned batch = 0; batch < 90u; ++batch) {
            uint16_t notice = 0;
            if (!simcity_recomp_stock_world_sample(game, X + 1u, Y + 1u, &after) ||
                !simcity_recomp_stock_world_tile(game, X + 1u, Y + 1u, &center) ||
                !simcity_recomp_stock_world_tile(game, X + 3u, Y + 1u, &neighbor)) goto finish;
            if (after.environment_cycles > before.environment_cycles && (neighbor & 0x8000u) &&
                (!house || (center & 0x8000u))) break;
            if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                !read_wram16(game, 0x0395u, &notice)) goto finish;
            if (notice && !stock_press(game, &audio, SIMCITY_INPUT_B, 30u)) goto finish;
        }
        printf("stock-house-power sample=%u center=%04X wire=%04X land_value=%u growth=%d environment_cycles=%u->%u\n",
            house, center, neighbor, after.land_value, after.growth, before.environment_cycles, after.environment_cycles);
        static const unsigned sample_x[] = {146u, 148u, 150u}, sample_y[] = {126u, 126u, 126u};
        for (unsigned i = 0; i < 3u; ++i) {
            SimCityRecompStockWorldSample parcel;
            if (!simcity_recomp_stock_world_sample(game, sample_x[i], sample_y[i], &parcel)) goto finish;
            land[house][i] = parcel.land_value;
            printf("stock-house-power land sample=%u point=(%u,%u) value=%u\n",
                house, sample_x[i], sample_y[i], parcel.land_value);
        }
        fflush(stdout);
        if (after.environment_cycles <= before.environment_cycles || !(neighbor & 0x8000u) ||
            (house ? (center & 0x83ffu) != 0x82bfu : center != 0u)) goto finish;
        if (district) {
            const unsigned interval = 1200u;
            for (unsigned epoch = 0; epoch <= 4u; ++epoch) {
                unsigned built = 0u, occupied = 0u, powered = 0u;
                unsigned surrounding_land = 0u;
                for (unsigned lot = 0; lot < 4u; ++lot) {
                    SimCityRecompStockWorldSample local;
                    uint16_t area = 0;
                    if (!simcity_recomp_stock_world_tile(game, lots[lot] + 1u, Y + 1u, &area) ||
                        !simcity_recomp_stock_world_sample(game, lots[lot] + 1u, Y + 1u, &local)) goto finish;
                    powered += (area & 0x8000u) != 0u;
                    surrounding_land += local.land_value;
                    printf("stock-house-district parcel gift=%u age=%u center=(%u,%u) land=%u tile=%04X\n",
                        house, epoch * interval, lots[lot] + 1u, Y + 1u, local.land_value, area);
                    built += (area & 0x03ffu) > 0x84u;
                    for (unsigned row = 0; row < 3u; ++row)
                        for (unsigned col = 0; col < 3u; ++col) {
                            if (!simcity_recomp_stock_world_tile(game, lots[lot] + col, Y + row, &area)) goto finish;
                            area &= 0x03ffu;
                            occupied += area >= 0x89u && area < 0x95u;
                        }
                }
                uint16_t population = 0, demand = 0;
                if (!read_wram16(game, 0x0ba5u, &population) || !read_wram16(game, 0x0badu, &demand) || powered != 4u) goto finish;
                printf("stock-house-district gift=%u age=%u residential_centers=%u small_houses=%u powered=%u neighbor_land_total=%u population=%u residential_demand=%d\n",
                    house, epoch * interval, built, occupied, powered, surrounding_land, population, (int)(int16_t)demand);
                fflush(stdout);
                observed_development[house] |= built != 0u || occupied != 0u;
                final_houses[house] = occupied;
                final_neighbor_land[house] = surrounding_land;
                final_guest_frames[house] = simcity_recomp_current_frame(game);
                if (epoch == 4u) break;
                for (unsigned i = 0; i < interval; i += 120u) {
                    uint16_t notice = 0;
                    if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                        !read_wram16(game, 0x0395u, &notice)) goto finish;
                    for (unsigned attempt = 0; notice && attempt < 12u; ++attempt)
                        if (!stock_press(game, &audio, SIMCITY_INPUT_B, 30u) ||
                            !read_wram16(game, 0x0395u, &notice)) goto finish;
                    if (notice) goto finish;
                }
            }
        }
        StockRamPosition camera = {0};
        if (!stock_read_position(game, &camera, 0) ||
            !simcity_recomp_render_current_frame(game, error, sizeof(error))) goto finish;
        const unsigned width = simcity_recomp_frame_width(game);
        const int left = 8 * (X - (int)(int16_t)camera.view_x) - (camera.fine_x & 7u);
        const int top = 8 * (Y - (int)(int16_t)camera.view_y) - (camera.fine_y & 7u);
        if (left < 0 || top < 8 || left + FOOT > (int)width ||
            top + FOOT > (int)SIMCITY_RECOMP_FRAME_HEIGHT) goto finish;
        const uint32_t *frame = simcity_recomp_frame_bgra(game);
        for (unsigned row = 0; row < FOOT; ++row)
            memcpy(&pixels[house][row * FOOT], &frame[(size_t)(top + (int)row) * width + (unsigned)left],
                FOOT * sizeof(*frame));
        snprintf(path, sizeof(path), "%s/stock-house-%s-%u.bmp", directory, district ? "district" : "power", house);
        if (!write_bmp(path, frame, width, SIMCITY_RECOMP_FRAME_HEIGHT) ||
            !simcity_recomp_audio_static_status(game, &status) || status.pcm_overflows ||
            simcity_recomp_audio_dropped_frames(game) || audio.modeled_underruns || audio.modeled_overflows) goto finish;
    }
    unsigned changed = 0u;
    for (unsigned i = 0; i < FOOT * FOOT; ++i) changed += pixels[0][i] != pixels[1][i];
    printf("stock-house-power rendered_footprint_changed_pixels=%u/%u\n", changed, FOOT * FOOT);
    ok = changed >= 40u && land[1][0] > land[0][0];
    if (district) {
        printf("stock-house-district land_without=%u land_with=%u small_houses_without=%u with=%u same_frame=%d growth_observed=%d\n",
            final_neighbor_land[0], final_neighbor_land[1], final_houses[0], final_houses[1],
            final_guest_frames[0] == final_guest_frames[1], observed_development[0] || observed_development[1]);
        ok &= final_guest_frames[0] == final_guest_frames[1] && final_neighbor_land[1] > final_neighbor_land[0];
    }
finish:
    if (!ok) fprintf(stderr, "House power probe failed: %s %s\n", error, simcity_recomp_last_error(game));
    free(power);
    free(tiles);
    return ok;
}

static int stock_world_top_toolbar_probe(SimCityRecomp *game, const char *directory, int info_only,
                                         int navigation) {
    char path[4096], out[4096], error[256] = {0};
    const int flood = navigation == 6 || navigation == 7;
    const int quake = navigation == 8;
    const int tornado = navigation == 9;
    const int monster = navigation == 10;
    const int plane = navigation == 11;
    const int reports = navigation == 12;
    const int disasters = navigation >= 4 && navigation <= 11;
    const int moving = tornado || monster;
    unsigned usable = 0u, maps = 0u;
    uint64_t world_overview = 0u, east_overview = 0u;
    for (unsigned world = plane ? 1u : 0u; world < 2u; ++world) {
        snprintf(path, sizeof(path), "%s/%s", directory,
            world ? "stock-world-mixed-development.scsnap" : "stock-60hz-city.scsnap");
        if (world && (flood || quake || moving || plane) && !stock_world_disaster_fixture(game, directory, path, plane ? 3 : moving ? 2 : quake,
                sizeof(path), error, sizeof(error))) return 0;
        for (unsigned run = 0u; run < (world && info_only && navigation < 2 ? 9u : 8u); ++run) {
            const int east = run == 8u || (disasters && world);
            const unsigned option = run == 8u ? 3u : run;
            const char *name = east ? "world-east" : world ? "world" : "normal";
            if (info_only && option != (disasters ? 2u : 3u)) continue;
            WorldProbe audio = {0};
            uint16_t x = 0u, y = 0u, hud = 0u, focus = 0u;
            audio.hash = UINT64_C(1469598103934665603);
            audio.measure_all = 1;
            int (*load)(SimCityRecomp *, const char *, char *, size_t) = world ?
                simcity_recomp_stock_world_open_snapshot : simcity_recomp_snapshot_load;
            if (!load(game, path, error, sizeof(error)) ||
                !simcity_recomp_set_widescreen(game, native_menu_frame_audit && native_menu_frame_audit->widescreen,
                                               error, sizeof(error)) ||
                (east && !plane && (!stock_move_axis(game, &audio, 190, 0) ||
                          !stock_move_axis(game, &audio, 125, 1))) ||
                !read_wram16(game, 0x01d7u, &hud) ||
                (!hud && !stock_press(game, &audio, SIMCITY_INPUT_X, 60u)) ||
                !read_wram16(game, 0x0201u, &focus) ||
                (focus == 0xffu && !stock_press(game, &audio, SIMCITY_INPUT_SELECT, 30u))) {
                fprintf(stderr, "Toolbar fixture could not load: %s\n", error);
                return 0;
            }
            if (plane) {
                uint16_t active = 0, x0 = 0, y0 = 0, tile = 0;
                for (unsigned i = 0; i < 90u && !active; ++i) {
                    uint16_t notice = 0;
                    if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                        !read_wram16(game, 0x0a8du, &active) ||
                        !read_wram16(game, 0x0395u, &notice) ||
                        !simcity_recomp_stock_world_tile(game, 150u, 150u, &tile)) return 0;
                    if (notice && !stock_press(game, &audio, SIMCITY_INPUT_B, 30u)) return 0;
                    if (i % 10u == 0u || active) {
                        printf("stock-plane-launch wait=%u airport=%04X actor=%04X\n", i, tile, active);
                        fflush(stdout);
                    }
                }
                if (!active || !(tile & 0x8000u) || !read_wram16(game, 0x0a61u, &x0) ||
                    !read_wram16(game, 0x0a5fu, &y0) || x0 < 120u || y0 < 100u) return 0;
                printf("stock-plane-launch origin=(%u,%u) airport=%04X\n", x0, y0, tile);
                snprintf(out, sizeof(out), "%s/stock-flight-plane-world.scsnap", directory);
                if (!simcity_recomp_snapshot_save(game, out, error, sizeof(error))) return 0;
                uint16_t previous_x = x0, previous_y = y0;
                unsigned moves = 0u, outer_frames = 0u;
                for (unsigned f = 0u; f < 360u && active; ++f) {
                    uint16_t current_x, current_y;
                    if (!world_probe_step(game, &audio, 0u, 1u, 0, 0) ||
                        !read_wram16(game, 0x0a8du, &active) ||
                        !read_wram16(game, 0x0a61u, &current_x) ||
                        !read_wram16(game, 0x0a5fu, &current_y)) return 0;
                    if (active) {
                        moves += current_x != previous_x || current_y != previous_y;
                        outer_frames += current_x >= 120u && current_x < 240u &&
                            current_y >= 100u && current_y < 200u;
                    }
                    previous_x = current_x;
                    previous_y = current_y;
                }
                printf("stock-plane-flight moves=%u outer_frames=%u final=(%u,%u)\n",
                    moves, outer_frames, previous_x, previous_y);
                if (!moves || !outer_frames || audio.modeled_underruns || audio.modeled_overflows ||
                    !load(game, out, error, sizeof(error))) return 0;
                /* Start the original crash route at its original launch
                   point, not at the end of this separate flight check. */
                memset(&audio, 0, sizeof(audio));
                audio.hash = UINT64_C(1469598103934665603);
                audio.measure_all = 1;
            }
            for (unsigned step = 0u; step < 24u; ++step) {
                if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y) ||
                    !read_wram16(game, 0x0201u, &focus)) return 0;
                if (!option)
                    printf("stock-toolbar-trace map=%u stage=%u x=%u y=%u focus=%04X\n",
                        world, step, x, y, focus);
                if (y < 40u) break;
                if (!stock_press(game, &audio, SIMCITY_INPUT_UP, 18u)) return 0;
            }
            if (y >= 40u || !read_wram16(game, 0x01ebu, &x)) continue;
            /* From the construction column, move to the first top icon. */
            for (unsigned step = 0u; x >= 31u && step < 12u; ++step)
                if (!stock_press(game, &audio, SIMCITY_INPUT_LEFT, 18u) ||
                    !read_wram16(game, 0x01ebu, &x)) return 0;
            for (unsigned step = 0u; step < 2u * option; ++step)
                if (!stock_press(game, &audio, SIMCITY_INPUT_RIGHT, 18u)) return 0;
            if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y) ||
                !read_wram16(game, 0x0201u, &focus)) return 0;
            printf("stock-toolbar map=%s option=%u cursor=(%u,%u) focus=%04X\n",
                name, option, x, y, focus);
            fflush(stdout);
            if (!stock_press(game, &audio, SIMCITY_INPUT_B, 120u) ||
                !read_wram16(game, 0x0201u, &focus)) continue;
            printf("stock-toolbar-screen map=%s option=%u focus=%04X pcm=%llu underruns=%u\n",
                name, option, focus, (unsigned long long)audio.frames,
                audio.modeled_underruns);
            snprintf(out, sizeof(out), "%s/stock-toolbar-%s-%u.bmp", directory,
                name, option);
            if (simcity_recomp_render_current_frame(game, error, sizeof(error)) &&
                write_bmp(out, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                    SIMCITY_RECOMP_FRAME_HEIGHT)) ++usable;
            if (disasters) {
                uint16_t camera_x = 0, camera_y = 0;
                if (!read_wram16(game, 0x01bdu, &camera_x) ||
                    !read_wram16(game, 0x01bfu, &camera_y) ||
                    (world && !plane && ((int16_t)camera_x < 120 || (int16_t)camera_y < 100))) return 0;
                const unsigned first = monster ? 5u : plane ? 2u : tornado ? 3u : quake ? 4u : flood ? 1u : 0u;
                /* The all-icons route reaches the last icon through the
                   stock cursor's menu snap points. Undo each earlier toggle. */
                for (unsigned icon = monster || plane ? 0u : first; icon < (navigation >= 5 ? first + 1u : 6u); ++icon) {
                    const unsigned target_x = 56u + 24u * (icon % 3u);
                    const unsigned target_y = 80u + 24u * (icon / 3u);
                    const unsigned tolerance = quake || tornado ? 4u : 0u;
                    const unsigned mask = 1u << icon;
                    uint16_t before = 0, toggled = 0, restored = 0;
                    for (unsigned step = 0; step < 24u; ++step) {
                        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
                        const int within_y = y + tolerance >= target_y && y <= target_y + tolerance;
                        if (within_y && x + tolerance >= target_x && x <= target_x + tolerance) break;
                        const uint16_t direction = !within_y ? (y < target_y ? SIMCITY_INPUT_DOWN : SIMCITY_INPUT_UP) :
                            x < target_x ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
                        if (!stock_press(game, &audio, direction, 18u)) return 0;
                    }
                    if (quake || monster) printf("stock-disaster menu map=%s icon=%u pointer=(%u,%u) target=(%u,%u)\n",
                        name, icon, x, y, target_x, target_y);
                    if (x + tolerance < target_x || x > target_x + tolerance ||
                        y + tolerance < target_y || y > target_y + tolerance ||
                        !read_wram16(game, 0x0197u, &before) ||
                        !stock_press(game, &audio, SIMCITY_INPUT_B, 8u) ||
                        !read_wram16(game, 0x0197u, &toggled)) return 0;
                    snprintf(out, sizeof(out), "%s/stock-disaster-toggle-%s-%u.bmp", directory, name, icon);
                    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                        !write_bmp(out, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                            SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
                    if ((unsigned)(before ^ toggled) != mask) {
                        fprintf(stderr, "Disaster icon %u at (%u,%u) changed flags %04X to %04X; expected mask %04X\n",
                            icon, x, y, before, toggled, mask);
                        return 0;
                    }
                    if (plane && icon == first) {
                        uint16_t active = 0;
                        if (!read_wram16(game, 0x0a8du, &active) || !active ||
                            !stock_press(game, &audio, SIMCITY_INPUT_X, 0u)) return 0;
                        snprintf(out, sizeof(out), "%s/stock-running-plane-world.scsnap", directory);
                        if (!read_wram16(game, 0x0a8du, &active) || !active ||
                            !simcity_recomp_snapshot_save(game, out, error, sizeof(error))) return 0;
                        int verified = 0;
                        for (unsigned step = 0; step < 60u; ++step) {
                            uint16_t notice = 0, message = 0, flag = 0, x0 = 0, y0 = 0;
                            if (!world_probe_step(game, &audio, 0u, 24u, 0, 0) ||
                                !read_wram16(game, 0x0a8du, &active) || !read_wram16(game, 0x0197u, &flag) ||
                                !read_wram16(game, 0x0395u, &notice) || !read_wram16(game, 0x0397u, &message)) return 0;
                            printf("stock-plane-crash wait=%u actor=%04X flags=%04X notice=%u message=%u\n",
                                step, active, flag, notice, message);
                            if (message != 34u || !notice) continue;
                            if (active || (flag & mask) || !read_wram16(game, 0x0400u, &x0) ||
                                !read_wram16(game, 0x0402u, &y0)) return 0;
                            x0 &= 255u; y0 &= 255u;
                            uint16_t landed = 0;
                            if (x0 < 120u || y0 < 100u || !simcity_recomp_stock_world_tile(game, x0, y0, &landed)) return 0;
                            printf("stock-plane-crash site=(%u,%u) tile=%04X\n", x0, y0, landed);
                            if ((landed & 0x3fffu) != 0x7fu && (landed & 0x3fffu) != 0x28u) return 0;
                            for (unsigned attempt = 0; notice && attempt < 12u; ++attempt)
                                if (!stock_press(game, &audio, SIMCITY_INPUT_B, 30u) ||
                                    !read_wram16(game, 0x0395u, &notice)) return 0;
                            if (notice || !stock_disaster_camera_verify(game, world, name, x0, y0)) return 0;
                            snprintf(out, sizeof(out), "%s/stock-disaster-plane-%s.bmp", directory, name);
                            if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                                !write_bmp(out, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                                    SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
                            verified = 1;
                            break;
                        }
                        if (!verified) return 0;
                        break;
                    }
                    if (moving && icon == first) {
                        const char *event = monster ? "monster" : "tornado";
                        const unsigned event_notice = monster ? 9u : 35u;
                        const unsigned actor_flag = monster ? 0x0a91u : 0x0a8bu;
                        const unsigned actor_x = monster ? 0x0a51u : 0x0a59u;
                        const unsigned actor_y = monster ? 0x0a4fu : 0x0a57u;
                        const unsigned destination_x = monster ? 0x0abdu : 0x0aa5u;
                        const unsigned destination_y = monster ? 0x0abbu : 0x0aa3u;
                        uint16_t start_x = 0, start_y = 0, target_world_x = 0, target_world_y = 0;
                        if (!stock_press(game, &audio, SIMCITY_INPUT_X, 0u)) return 0;
                        unsigned started = 0u, moved = 0u, outer_hit = 0u, outer_move = 0u, camera_verified = 0u;
                        for (unsigned batch = 0; batch < 100u; ++batch) {
                            uint16_t notice = 0, message = 0, actor = 0, sx = 0, sy = 0;
                            if (!world_probe_step(game, &audio, 0u, started ? 24u : 120u, 0, 0) ||
                                !read_wram16(game, 0x0395u, &notice) || !read_wram16(game, 0x0397u, &message) ||
                                !read_wram16(game, actor_flag, &actor) || !read_wram16(game, actor_x, &sx) ||
                                !read_wram16(game, actor_y, &sy)) return 0;
                            if (!started && (batch % 8u == 0u || notice)) {
                                printf("stock-disaster-%s waiting map=%s batch=%u notice=%u message=%u actor=%04X\n",
                                    event, name, batch, notice, message, actor);
                                fflush(stdout);
                            }
                            if (!started && actor && message == event_notice && notice) {
                                if (!read_wram16(game, destination_x, &target_world_x) ||
                                    !read_wram16(game, destination_y, &target_world_y)) return 0;
                                start_x = sx; start_y = sy; started = 1u;
                                printf("stock-disaster-%s map=%s start=(%u,%u) destination=(%u,%u)\n",
                                    event, name, sx, sy, target_world_x, target_world_y);
                            }
                            if (notice) {
                                if (!stock_press(game, &audio, SIMCITY_INPUT_B, 10u)) return 0;
                                continue;
                            }
                            if (!started) continue;
                            if (actor) {
                                if (sx >= (world ? 240u : 120u) || sy >= (world ? 200u : 100u)) return 0;
                                if (!camera_verified) {
                                    if (!stock_disaster_camera_verify(game, world, name, start_x, start_y)) return 0;
                                    camera_verified = 1u;
                                    /* Persist the active actor after the stock
                                       notice has been dismissed. Timing this
                                       fixture cannot sit in a paused modal. */
                                    snprintf(out, sizeof(out), "%s/stock-running-%s-%s.scsnap", directory,
                                        event, world ? "world" : "ordinary");
                                    if (!simcity_recomp_snapshot_save(game, out, error, sizeof(error))) return 0;
                                }
                                if (sx != start_x || sy != start_y) {
                                    moved = 1u;
                                    outer_move |= sx >= 120u || sy >= 100u;
                                }
                            }
                            if (world) {
                                unsigned ox = 0, oy = 0, fire_outer = 0, fx = 0, fy = 0;
                                if (stock_disaster_tile_count(game, 1, 0x28u, &outer_hit, &ox, &oy) == UINT_MAX) return 0;
                                if (stock_disaster_tile_count(game, 1, 0x7fu, &fire_outer, &fx, &fy) == UINT_MAX) return 0;
                                if (outer_hit) printf("stock-disaster-%s outer_rubble=%u first=(%u,%u) actor=(%u,%u)\n",
                                    event, outer_hit, ox, oy, sx, sy);
                                if (fire_outer) printf("stock-disaster-%s outer_fire=%u first=(%u,%u) actor=(%u,%u)\n",
                                    event, fire_outer, fx, fy, sx, sy);
                                outer_hit += fire_outer;
                            }
                            if (moved && (!world || (outer_move && outer_hit))) break;
                        }
                        printf("stock-disaster-%s map=%s started=%u moved=%u outer_move=%u outer_damage=%u\n",
                            event, name, started, moved, outer_move, outer_hit);
                        if (!started || !moved || !camera_verified || (world && (!outer_move || !outer_hit))) return 0;
                        snprintf(out, sizeof(out), "%s/stock-disaster-%s-%s.bmp", directory, event, name);
                        if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                            !write_bmp(out, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                                SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
                        break;
                    }
                    if (quake) {
                        if (!stock_press(game, &audio, SIMCITY_INPUT_X, 0u)) return 0;
                        unsigned verified = 0u;
                        for (unsigned batch = 0; batch < 70u && !verified; ++batch) {
                            uint16_t notice = 0, message = 0, flag = 0, timer = 0;
                            if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                                !read_wram16(game, 0x0197u, &flag) || !read_wram16(game, 0x0395u, &notice) ||
                                !read_wram16(game, 0x0397u, &message) || !read_wram16(game, 0x0c0fu, &timer)) return 0;
                            if (batch % 4u == 0u || notice) printf("stock-disaster-quake map=%s batch=%u flag=%04X notice=%u message=%u timer=%u\n",
                                name, batch, flag, notice, message, timer);
                            if (batch % 4u == 0u || notice) fflush(stdout);
                            if (notice && message != 10u) {
                                if (!stock_press(game, &audio, SIMCITY_INPUT_B, 30u)) return 0;
                                continue;
                            }
                            if (!notice || message != 10u || (flag & mask) || !timer) continue;
                            unsigned rubble_outer = 0, fire_outer = 0, rx = 0, ry = 0, fx = 0, fy = 0;
                            const unsigned rubble = stock_disaster_tile_count(game, world, 0x28u, &rubble_outer, &rx, &ry);
                            const unsigned fire = stock_disaster_tile_count(game, world, 0x7fu, &fire_outer, &fx, &fy);
                            printf("stock-disaster-quake map=%s timer=%u rubble=%u outer_rubble=%u first_rubble=(%u,%u) fire=%u outer_fire=%u first_fire=(%u,%u)\n",
                                name, timer, rubble, rubble_outer, rx, ry, fire, fire_outer, fx, fy);
                            if (rubble == UINT_MAX || fire == UINT_MAX ||
                                (world && (!rubble_outer && !fire_outer)) ||
                                (world && (rubble != rubble_outer || fire != fire_outer))) return 0;
                            snprintf(out, sizeof(out), "%s/stock-disaster-quake-%s.bmp", directory, name);
                            if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                                !write_bmp(out, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                                    SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
                            snprintf(out, sizeof(out), "%s/stock-active-quake-%s.scsnap", directory,
                                     world ? "world" : "ordinary");
                            if (!simcity_recomp_snapshot_save(game, out, error, sizeof(error))) return 0;
                            verified = 1u;
                        }
                        if (!verified) return 0;
                        break;
                    }
                    if (navigation >= 5 && icon == first) {
                        const char *event = flood ? "flood" : "fire";
                        const unsigned code = flood ? 0x365u : 0x7fu;
                        unsigned outer = 0u, fire_x = 0u, fire_y = 0u;
                        const unsigned initial = stock_disaster_tile_count(game, world, code, &outer, &fire_x, &fire_y);
                        if (initial != 0u || !stock_press(game, &audio, SIMCITY_INPUT_X, 0u)) return 0;
                        int verified = 0;
                        for (unsigned batch = 0; batch < 32u; ++batch) {
                            uint16_t flag = 0, state = 0, notice = 0, msg = 0;
                            if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                                !read_wram16(game, 0x0197u, &flag) || !read_wram16(game, 0x0387u, &state) ||
                                !read_wram16(game, 0x0395u, &notice) || !read_wram16(game, 0x0397u, &msg)) return 0;
                            unsigned damage = stock_disaster_tile_count(game, world, code, &outer, &fire_x, &fire_y);
                            if (damage == UINT_MAX) return 0;
                            printf("stock-disaster-%s map=%s batch=%u flag=%04X state=%04X notice=%u message=%u tiles=%u outer=%u first=(%u,%u)\n",
                                event, name, batch, flag, state, notice, msg, damage, outer, fire_x, fire_y);
                            fflush(stdout);
                            if (damage && (!world || outer)) {
                                uint16_t reported_x = 0, reported_y = 0, reported_tile = 0;
                                if (msg != 32u + icon || !notice || (flag & mask) ||
                                    !read_wram16(game, 0x0400u, &reported_x) ||
                                    !read_wram16(game, 0x0402u, &reported_y)) return 0;
                                reported_x &= 255u;
                                reported_y &= 255u;
                                if (!(world ? simcity_recomp_stock_world_tile(game, reported_x, reported_y, &reported_tile) :
                                              stock_tile_at(game, reported_x, reported_y, &reported_tile)) ||
                                    (reported_tile & 0x3fffu) != code ||
                                    (world && reported_x < 120u && reported_y < 100u)) return 0;
                                printf("stock-disaster-%s map=%s notice_tile=(%u,%u) tile=%04X\n",
                                    event, name, reported_x, reported_y, reported_tile);
                                snprintf(out, sizeof(out), "%s/stock-disaster-%s-%s.bmp", directory, event, name);
                                if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                                    !write_bmp(out, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                                        SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
                                if (!flood) {
                                    /* Preserve the controller-triggered fire and its actual
                                       notice before later gameplay can put it out. */
                                    snprintf(out, sizeof(out), "%s/stock-active-fire-%s.scsnap", directory,
                                             world ? "world" : "ordinary");
                                    if (!simcity_recomp_snapshot_save(game, out, error, sizeof(error))) return 0;
                                }
                                if (flood) {
                                    uint16_t timer = 0;
                                    if (!read_wram16(game, 0x0c11u, &timer) || !timer ||
                                        (world && damage != 1u)) return 0;
                                    for (unsigned attempt = 0; notice && attempt < 12u; ++attempt)
                                        if (!stock_press(game, &audio, SIMCITY_INPUT_B, 30u) ||
                                            !read_wram16(game, 0x0395u, &notice)) return 0;
                                    if (notice || !read_wram16(game, 0x0c11u, &timer) || !timer) return 0;
                                    snprintf(out, sizeof(out), "%s/stock-running-flood-%s.scsnap", directory,
                                        world ? "world" : "ordinary");
                                    if (!simcity_recomp_snapshot_save(game, out, error, sizeof(error))) return 0;
                                }
                                if (flood && world) {
                                    uint16_t timer = 0;
                                    if (!stock_disaster_camera_verify(game, world, name, reported_x, reported_y)) return 0;
                                    for (unsigned step = 0; step < 50u; ++step) {
                                        if (!world_probe_step(game, &audio, 0u, 120u, 0, 0) ||
                                            !read_wram16(game, 0x0c11u, &timer)) return 0;
                                        damage = stock_disaster_tile_count(game, world, code, &outer, &fire_x, &fire_y);
                                        if (damage == UINT_MAX || damage != outer) return 0;
                                        if (step % 10u == 0u || damage > 1u) {
                                            printf("stock-disaster-flood spread_step=%u timer=%u tiles=%u outer=%u first=(%u,%u)\n",
                                                step, timer, damage, outer, fire_x, fire_y);
                                            fflush(stdout);
                                        }
                                        if (damage > 1u) break;
                                    }
                                    if (damage < 2u) return 0;
                                    snprintf(out, sizeof(out), "%s/stock-disaster-flood-centered-%s.bmp", directory, name);
                                    if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                                        !write_bmp(out, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                                            SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
                                    if (navigation == 7) {
                                        const unsigned spread_x = fire_x, spread_y = fire_y;
                                        unsigned peak = damage;
                                        for (unsigned step = 0; step < 150u && damage; ++step) {
                                            if (!world_probe_step(game, &audio, 0u, 240u, 0, 0) ||
                                                !read_wram16(game, 0x0c11u, &timer)) return 0;
                                            damage = stock_disaster_tile_count(game, world, code, &outer, &fire_x, &fire_y);
                                            if (damage == UINT_MAX) return 0;
                                            if (damage > peak) peak = damage;
                                            if (step % 8u == 0u || !damage) {
                                                printf("stock-flood-recession elapsed=%u timer=%u tiles=%u peak=%u\n",
                                                    (step + 1u) * 240u, timer, damage, peak);
                                                fflush(stdout);
                                            }
                                        }
                                        uint16_t seed_after = 0, spread_after = 0;
                                        if (timer || damage ||
                                            !simcity_recomp_stock_world_tile(game, reported_x, reported_y, &seed_after) ||
                                            !simcity_recomp_stock_world_tile(game, spread_x, spread_y, &spread_after) ||
                                            seed_after || spread_after) return 0;
                                        printf("stock-flood-recession verified=1 seed=(%u,%u):%04X spread=(%u,%u):%04X peak=%u\n",
                                            reported_x, reported_y, seed_after, spread_x, spread_y, spread_after, peak);
                                    }
                                }
                                verified = 1;
                                break;
                            }
                            if (notice && !stock_press(game, &audio, SIMCITY_INPUT_B, 30u)) return 0;
                        }
                        if (!verified) return 0;
                        break;
                    }
                    if (!stock_press(game, &audio, SIMCITY_INPUT_B, 8u) ||
                        !read_wram16(game, 0x0197u, &restored)) return 0;
                    printf("stock-disaster-toggle map=%s icon=%u camera_tile=(%d,%d) flags=%04X->%04X->%04X expected=%04X underruns=%u\n",
                        name, icon, (int)(int16_t)camera_x, (int)(int16_t)camera_y,
                        before, toggled, restored, mask, audio.modeled_underruns);
                    if (before != restored) return 0;
                }
                SimCityRecompAudioStaticStatus status = {0};
                if (simcity_recomp_audio_static_status(game, &status) &&
                    !audio.modeled_underruns && !audio.modeled_overflows &&
                    !status.pcm_unknown_frames && !status.pcm_overflows &&
                    !simcity_recomp_audio_dropped_frames(game)) {
                    printf("stock-disaster-audio map=%s pcm=%llu underruns=0 overflows=0 dropped=0\n",
                        name, (unsigned long long)audio.frames);
                    ++maps;
                }
            } else if (reports) {
                static const struct { const char *label; unsigned x, y; } report[] = {
                    {"graph", 80u, 76u}, {"tax", 104u, 76u}, {"voice", 56u, 100u},
                    {"total", 80u, 100u}, {"history", 104u, 100u}
                };
                char start[4096];
                uint64_t captures[sizeof(report) / sizeof(*report)] = {0};
                unsigned report_count = 0u;
                snprintf(start, sizeof(start), "%s/stock-city-reports-%s.scsnap", directory, name);
                if (!simcity_recomp_snapshot_save(game, start, error, sizeof(error))) return 0;
                for (unsigned i = 0u; i < sizeof(report) / sizeof(*report); ++i) {
                    WorldProbe dialog_audio = {0};
                    dialog_audio.hash = UINT64_C(1469598103934665603);
                    dialog_audio.measure_all = 1;
                    if (!load(game, start, error, sizeof(error))) return 0;
                    unsigned hit = 0u;
                    /* Approach History from the Tax icon above it; the
                       pointer's horizontal range is narrower lower down. */
                    const int history = i == 4u;
                    for (unsigned step = 0u, stage = history ? 0u : 1u; step < 36u; ++step) {
                        if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
                        const unsigned target_y = stage ? report[i].y : 76u;
                        const int y_ok = y + 3u >= target_y && y <= target_y + 4u;
                        if (y_ok && x + 4u >= report[i].x && x <= report[i].x + 4u) {
                            if (stage) { hit = 1u; break; }
                            stage = 1u;
                            continue;
                        }
                        const uint16_t direction = !y_ok ? (y < target_y ? SIMCITY_INPUT_DOWN : SIMCITY_INPUT_UP) :
                                                  x < report[i].x ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
                        if (!stock_press(game, &dialog_audio, direction, 18u)) return 0;
                    }
                    printf("stock-city-report map=%s name=%s pointer=(%u,%u) hit=%u\n", name, report[i].label, x, y, hit);
                    fflush(stdout);
                    if (!hit) continue;
                    if (!simcity_recomp_render_current_frame(game, error, sizeof(error))) return 0;
                    const unsigned width = simcity_recomp_frame_width(game);
                    const size_t count = (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT;
                    const uint64_t before = fnv1a(simcity_recomp_frame_bgra(game), count);
                    if (!stock_press(game, &dialog_audio, SIMCITY_INPUT_B, 150u) ||
                        !simcity_recomp_render_current_frame(game, error, sizeof(error))) return 0;
                    const uint32_t *pixels = simcity_recomp_frame_bgra(game);
                    captures[i] = fnv1a(pixels, count);
                    snprintf(out, sizeof(out), "%s/stock-city-report-%s-%s.bmp", directory, name, report[i].label);
                    printf("stock-city-report map=%s name=%s pixels=%016llX pcm=%llu underruns=%u\n",
                        name, report[i].label, (unsigned long long)captures[i],
                        (unsigned long long)dialog_audio.frames, dialog_audio.modeled_underruns);
                    if (!write_bmp(out, pixels, width, SIMCITY_RECOMP_FRAME_HEIGHT) || captures[i] == before ||
                        dialog_audio.modeled_underruns || dialog_audio.modeled_overflows) return 0;
                    for (unsigned past = 0u; past < i; ++past)
                        if (captures[past] == captures[i]) return 0;
                    ++report_count;
                }
                if (report_count == sizeof(report) / sizeof(*report)) ++maps;
            } else if (option == 3u) {
                /* Information -> Map, using the first icon in the upper
                   information row. Verify the pointer before confirming. */
                for (unsigned step = 0u; step < 18u; ++step) {
                    if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y)) return 0;
                    if (info_only) printf("stock-information-pointer step=%u cursor=(%u,%u)\n", step, x, y);
                    if (y >= 72u && y < 80u && x >= 48u && x <= 56u) break;
                    const uint16_t direction = y < 72u ? SIMCITY_INPUT_DOWN :
                        y >= 80u ? SIMCITY_INPUT_UP : x > 56u ? SIMCITY_INPUT_LEFT : SIMCITY_INPUT_RIGHT;
                    if (!stock_press(game, &audio, direction, 18u)) return 0;
                }
                printf("stock-information-map mode=%s cursor=(%u,%u)\n", name, x, y);
                snprintf(out, sizeof(out), "%s/stock-information-pointer-%s.bmp", directory, name);
                if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                    !write_bmp(out, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                            SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
                uint16_t camera_x, camera_y, marker_x, marker_y;
                if (!read_wram16(game, 0x01bdu, &camera_x) || !read_wram16(game, 0x01bfu, &camera_y))
                    return 0;
                if (y >= 72u && y < 80u && x >= 48u && x <= 56u &&
                    stock_open_overview(game, &audio, name) &&
                    simcity_recomp_render_current_frame(game, error, sizeof(error))) {
                    if (!read_wram16(game, 0x0d33u, &marker_x) || !read_wram16(game, 0x0d35u, &marker_y))
                        return 0;
                    const int expected_x = (int)(int16_t)camera_x / (world ? 2 : 1) + 0x46;
                    const int expected_y = (int)(int16_t)camera_y / (world ? 2 : 1) + 0x32;
                    printf("stock-overview-marker mode=%s camera=(%d,%d) marker=(%u,%u) expected=(%d,%d)\n",
                        name, (int)(int16_t)camera_x, (int)(int16_t)camera_y,
                        marker_x, marker_y, expected_x, expected_y);
                    const unsigned width = simcity_recomp_frame_width(game);
                    const uint32_t *pixels = simcity_recomp_frame_bgra(game);
                    uint64_t hash = UINT64_C(1469598103934665603);
                    for (unsigned row = 57u; row < 154u; ++row)
                        for (unsigned col = 68u; col < 186u; ++col) {
                            hash ^= pixels[(size_t)row * width + col];
                            hash *= UINT64_C(1099511628211);
                        }
                    if (world) {
                        if (east) east_overview = hash;
                        else world_overview = hash;
                    }
                    printf("stock-overview pixels=%016llX mode=%s underruns=%u\n",
                        (unsigned long long)hash, name, audio.modeled_underruns);
                    snprintf(out, sizeof(out), "%s/stock-information-map-%s.bmp", directory, name);
                    if (write_bmp(out, pixels, width, SIMCITY_RECOMP_FRAME_HEIGHT) &&
                        (int)marker_x == expected_x && (int)marker_y == expected_y &&
                        !audio.modeled_underruns && !audio.modeled_overflows) ++maps;
                    if (navigation >= 2) {
                        char overview_start[4096];
                        static const struct { const char *name; unsigned x, nested_x, layer; } overlays[] = {
                            {"traffic", 130u, 0u, 8u},
                            {"pollution", 146u, 0u, 9u}, {"crime", 162u, 0u, 10u},
                            {"land-value", 178u, 0u, 11u},
                            {"density", 114u, 106u, 6u}, {"growth", 114u, 122u, 7u},
                            {"police", 194u, 186u, 12u}, {"fire", 194u, 202u, 13u},
                            {"power", 82u, 0u, 4u},
                            {"residential", 66u, 56u, 1u}, {"commercial", 66u, 72u, 2u},
                            {"industrial", 66u, 88u, 3u}
                        };
                        snprintf(overview_start, sizeof(overview_start),
                            "%s/stock-overlay-%s-start.scsnap", directory, name);
                        if (!simcity_recomp_snapshot_save(game, overview_start, error, sizeof(error)))
                            return 0;
                        for (unsigned i = 0u; i < sizeof(overlays) / sizeof(overlays[0]); ++i) {
                            if ((overlays[i].layer < 6u) != (navigation == 3)) continue;
                            uint16_t px = 0u, py = 0u, layer = 0u;
                            const unsigned target = overlays[i].x;
                            if (!load(game, overview_start, error, sizeof(error))) return 0;
                            memset(&audio, 0, sizeof(audio));
                            audio.hash = UINT64_C(1469598103934665603);
                            audio.measure_all = 1;
                            for (unsigned step = 0u; step < 50u; ++step) {
                                if (!read_wram16(game, 0x01ebu, &px) ||
                                    !read_wram16(game, 0x01edu, &py)) return 0;
                                if (px >= target - 2u && px <= target + 2u) break;
                                if (!stock_press(game, &audio, px < target ?
                                        SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT, 8u)) return 0;
                            }
                            printf("stock-overlay-pointer map=%s overlay=%s xy=(%u,%u)\n",
                                name, overlays[i].name, px, py);
                            if (px < target - 2u || px > target + 2u) return 0;
                            if (overlays[i].nested_x) {
                                if (!stock_press(game, &audio, SIMCITY_INPUT_B, 20u)) return 0;
                                for (unsigned step = 0u; step < 12u; ++step) {
                                    if (!read_wram16(game, 0x01ebu, &px) ||
                                        !read_wram16(game, 0x01edu, &py)) return 0;
                                    if (px >= overlays[i].nested_x - 2u && px <= overlays[i].nested_x + 2u)
                                        break;
                                    if (!stock_press(game, &audio, px < overlays[i].nested_x ?
                                               SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT, 8u)) return 0;
                                }
                                printf("stock-overlay-submenu map=%s overlay=%s xy=(%u,%u)\n",
                                    name, overlays[i].name, px, py);
                            }
                            if (!stock_open_overview(game, &audio, overlays[i].name) ||
                                !read_wram16(game, 0x0d49u, &layer) ||
                                !simcity_recomp_render_current_frame(game, error, sizeof(error))) {
                                fprintf(stderr, "Overlay could not render map=%s overlay=%s: %s\n",
                                    name, overlays[i].name, simcity_recomp_last_error(game));
                                return 0;
                            }
                            printf("stock-overlay map=%s name=%s layer=%u expected=%u underruns=%u\n",
                                name, overlays[i].name, layer & 255u, overlays[i].layer,
                                audio.modeled_underruns);
                            snprintf(out, sizeof(out), "%s/stock-overlay-%s-%s.bmp",
                                directory, name, overlays[i].name);
                            if (!write_bmp(out, simcity_recomp_frame_bgra(game), width,
                                    SIMCITY_RECOMP_FRAME_HEIGHT) || (layer & 255u) != overlays[i].layer ||
                                audio.modeled_underruns || audio.modeled_overflows) return 0;
                        }
                    }
                    if (navigation == 1) {
                        uint16_t after_x, after_y, after_focus, layer, pointer_x = 0u, pointer_y = 0u;
                        for (unsigned step = 0u; step < 24u; ++step) {
                            if (!read_wram16(game, 0x01ebu, &pointer_x) ||
                                !read_wram16(game, 0x01edu, &pointer_y)) return 0;
                            if (pointer_x >= 96u && pointer_x <= 106u) break;
                            if (!stock_press(game, &audio, pointer_x < 96u ?
                                           SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT, 8u)) return 0;
                        }
                        printf("stock-overview-road-pointer mode=%s pointer=(%u,%u)\n", name, pointer_x, pointer_y);
                        if (pointer_x < 96u || pointer_x > 106u ||
                            !read_wram16(game, 0x0d33u, &marker_x) ||
                            !read_wram16(game, 0x0d35u, &marker_y) ||
                            !stock_open_overview(game, &audio, "road-selection") ||
                            !read_wram16(game, 0x01bdu, &after_x) ||
                            !read_wram16(game, 0x01bfu, &after_y) ||
                            !read_wram16(game, 0x0201u, &after_focus) ||
                            !read_wram16(game, 0x0d49u, &layer) ||
                            !simcity_recomp_render_current_frame(game, error, sizeof(error))) return 0;
                        printf("stock-overview-navigation mode=%s layer=%u marker=(%u,%u) camera=(%d,%d)->(%d,%d) focus=%04X underruns=%u\n",
                            name, layer & 0xffu, marker_x, marker_y, (int)(int16_t)camera_x,
                            (int)(int16_t)camera_y, (int)(int16_t)after_x, (int)(int16_t)after_y,
                            after_focus, audio.modeled_underruns);
                        snprintf(out, sizeof(out), "%s/stock-overview-navigation-%s.bmp", directory, name);
                        if ((layer & 0xffu) != 5u || !write_bmp(out, simcity_recomp_frame_bgra(game), width,
                                SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
                    }
                }
            }
        }
    }
    if (info_only && navigation < 2)
        printf("stock-world-overview camera_shift_changed_map_pixels=%d\n", world_overview != east_overview);
    const unsigned expected_maps = info_only && navigation < 2 ? 3u : 2u;
    const unsigned expected_screens = info_only ? expected_maps : 16u;
    if (reports) {
        printf("stock-city-reports/menus=%u/2 maps_verified=%u/2\n", usable, maps);
        return usable == 2u && maps == 2u;
    }
    if (disasters) {
        if (plane) {
            printf("stock-disaster-plane/screens=%u/1 maps_verified=%u/1\n", usable, maps);
            return usable == 1u && maps == 1u;
        }
        printf("stock-disaster-%s/screens=%u/2 maps_verified=%u/2\n", monster ? "monster" : tornado ? "tornado" : quake ? "quake" : flood ? "flood" : navigation == 5 ? "fire" : "menu", usable, maps);
        return usable == 2u && maps == 2u;
    }
    printf("stock-toolbar/screens=%u/%u information_maps=%u/%u\n",
        usable, expected_screens, maps, expected_maps);
    return usable == expected_screens && maps == expected_maps;
}

static int stock_world_services_probe(SimCityRecomp *game, const char *directory) {
    enum { WW = 240, WH = 200, HW = WW / 2, CW = WW / 8, ROW = 145, TARGET = 122 };
    const unsigned sample = (ROW / 2u) * HW + TARGET / 2u;
    const unsigned police_cell = (ROW / 8u) * CW + TARGET / 8u;
    const unsigned fire_cell = (139u / 8u) * CW + TARGET / 8u;
    uint16_t *world = calloc(WW * WH, sizeof(*world));
    char path[4096], error[256] = {0};
    unsigned observed_crime[2] = {0};
    int ok = 0;
    if (!world) return 0;
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    for (unsigned with_police = 0u; with_police < 2u; ++with_police) {
        SimCityRecompStockWorldPower state = {0};
        SimCityRecompAudioStaticStatus audio = {0};
        uint64_t pcm = 0u, hash = UINT64_C(1469598103934665603), phase = 0u, queue = 0u;
        unsigned frames = 0u, underruns = 0u;
        uint16_t budget = 0u, stations = 0u;
        memset(world, 0, WW * WH * sizeof(*world));
        for (int dy = -1; dy <= 2; ++dy)
            for (int dx = -1; dx <= 2; ++dx)
                world[(unsigned)(ROW + dy) * WW + (unsigned)(108 + dx)] =
                    (uint16_t)(0x028c + dy * 4 + dx);
        for (int dy = -1; dy <= 1; ++dy)
            for (int dx = -1; dx <= 1; ++dx) {
                const unsigned x = (unsigned)(117 + dx);
                if (with_police) world[(unsigned)(ROW + dy) * WW + x] =
                    (uint16_t)(0x0249 + dy * 3 + dx);
                world[(unsigned)(139 + dy) * WW + x] =
                    (uint16_t)(0x0252 + dy * 3 + dx);
            }
        for (unsigned x = 111u; x <= 115u; ++x) world[ROW * WW + x] = 0x0060u;
        for (unsigned y = 139u; y < ROW; ++y) world[y * WW + 115u] = 0x0060u;
        for (unsigned x = 119u; x <= TARGET; ++x) {
            world[ROW * WW + x] = 0x0032u;
            world[139u * WW + x] = 0x0032u;
        }
        if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, 0, error, sizeof(error))) goto finish;
        while ((!state.crime_cycles || !state.fire_cycles) && frames < 6300u) {
            const uint64_t before = pcm;
            /* Equal, nonzero environment isolates the station's effect.
               A different test exercises the native environment producer. */
            state.land_value[sample] = 96u;
            state.population_density[sample] = 100u;
            if (!simcity_recomp_advance_stock_world_session(game, 0u, world, WW * WH, &state) ||
                !drain_pcm(game, &hash, &pcm)) goto finish;
            queue += pcm - before;
            if (++frames > 3u) {
                phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
                const uint64_t demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
                phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
                if (demand > queue) { ++underruns; queue = 0u; }
                else queue -= demand;
            }
            if (frames % 1200u == 0u) {
                printf("stock-world-service-progress station=%u frames=%u crime_passes=%u fire_passes=%u\n",
                       with_police, frames, state.crime_cycles, state.fire_cycles);
                fflush(stdout);
            }
        }
        if (!simcity_recomp_audio_static_status(game, &audio) ||
            !read_wram16(game, 0x0bc7u, &budget) ||
            !read_wram16(game, 0x0c8bu, &stations)) goto finish;
        observed_crime[with_police] = state.crime[sample];
        printf("stock-world-services station=%u frames=%u stations=%u funds_effect=%u crime_written=%u crime_value=%u police_coverage=%u fire_coverage=%u underruns=%u overflows=%llu dropped=%llu\n",
               with_police, frames, stations, budget, state.crime_written,
               observed_crime[with_police], state.service_coverage[1][police_cell],
               state.service_coverage[0][fire_cell], underruns,
               (unsigned long long)audio.pcm_overflows,
               (unsigned long long)simcity_recomp_audio_dropped_frames(game));
        if (!state.crime_cycles || !state.fire_cycles || state.crime_written != WW * WH / 4u ||
            stations != with_police || !state.service_coverage[0][fire_cell] ||
            (with_police ? !state.service_coverage[1][police_cell] :
                           state.service_coverage[1][police_cell] != 0u) ||
            underruns || audio.pcm_overflows || simcity_recomp_audio_dropped_frames(game))
            goto finish;
        if (with_police) {
            char save_path[4096];
            const uint8_t police = state.service_coverage[1][police_cell];
            const uint8_t fire = state.service_coverage[0][fire_cell];
            snprintf(save_path, sizeof(save_path), "%s/stock-world-coverage.scsnap", directory);
            if (!simcity_recomp_stock_world_snapshot_save(game, save_path, world, WW * WH,
                                                          &state, error, sizeof(error))) goto finish;
            memset(&state, 0, sizeof(state));
            if (!simcity_recomp_stock_world_snapshot_load(game, save_path, world, WW * WH,
                                                          &state, error, sizeof(error)) ||
                state.service_coverage[1][police_cell] != police ||
                state.service_coverage[0][fire_cell] != fire ||
                state.crime[sample] != observed_crime[1]) goto finish;
            printf("stock-world-services-snapshot police=%u fire=%u crime=%u restored=1\n",
                   police, fire, state.crime[sample]);
        }
    }
    ok = observed_crime[1] < observed_crime[0];
finish:
    if (!ok) fprintf(stderr, "Stock services test failed: %s %s\n", error, simcity_recomp_last_error(game));
    free(world);
    return ok;
}

static int stock_world_environment_probe(SimCityRecomp *game, const char *directory) {
    enum { WW = 240, WH = 200, HALF = WW / 2, CX = 119, CY = 99,
           REF_X = 59, REF_Y = 49, REF_W = 60, REF_H = 50 };
    const unsigned center = (CY / 2u) * HALF + CX / 2u;
    const unsigned reference = (REF_Y / 2u) * REF_W + REF_X / 2u;
    uint16_t *world = calloc(WW * WH, sizeof(*world));
    SimCityRecompStockWorldPower state = {0};
    SimCityRecompAudioStaticStatus audio = {0};
    uint64_t pcm = 0u, hash = UINT64_C(1469598103934665603), queue = 0u, phase = 0u;
    unsigned frame = 0u, underruns = 0u, matched = 0u;
    char path[4096], error[256] = {0};
    int ok = 0;
    if (!world) return 0;
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error))) goto finish;
    /* Native coal-plant tile group, centered one tile inside both old seams. */
    for (int dy = -1; dy <= 2; ++dy)
        for (int dx = -1; dx <= 2; ++dx)
            world[(unsigned)(CY + dy) * WW + (unsigned)(CX + dx)] =
                (uint16_t)(0x028c + dy * 4 + dx);
    while (!state.environment_cycles && frame < 4000u) {
        const uint64_t before = pcm;
        if (!simcity_recomp_advance_stock_world_session(game, 0u, world, WW * WH, &state) ||
            !drain_pcm(game, &hash, &pcm)) goto finish;
        queue += pcm - before;
        if (++frame > 3u) {
            phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
            const uint64_t demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            if (demand > queue) { ++underruns; queue = 0u; }
            else queue -= demand;
        }
    }
    if (!simcity_recomp_audio_static_status(game, &audio)) goto finish;
    printf("stock-world-environment frames=%u cycles=%u pollution_written=%u center=%u east=%u south=%u land_center=%u underruns=%u overflows=%llu dropped=%llu\n",
           frame, state.environment_cycles, state.pollution_written, state.pollution[center],
           state.pollution[center + 1u], state.pollution[center + HALF], state.land_value[center],
           underruns, (unsigned long long)audio.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    if (state.environment_cycles != 1u || state.pollution_written != WW * WH / 4u ||
        !state.pollution[center] || !state.pollution[center + 1u] || !state.pollution[center + HALF] ||
        state.pollution[0] || state.pollution[WW * WH / 4u - 1u] || !state.land_value[center] ||
        underruns || audio.pcm_overflows || simcity_recomp_audio_dropped_frames(game)) goto finish;

    if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) goto finish;
    memset(world, 0, WW * WH * sizeof(*world));
    for (int dy = -1; dy <= 2; ++dy)
        for (int dx = -1; dx <= 2; ++dx)
            world[(unsigned)(REF_Y + dy) * WW + (unsigned)(REF_X + dx)] =
                (uint16_t)(0x028c + dy * 4 + dx);
    for (unsigned f = 1u; f <= 4000u; ++f) {
        uint8_t original[REF_W * REF_H];
        if (!simcity_recomp_advance_stock_world_window(game, 0u, 1u, world, WW * WH, 0u, 0u) ||
            !drain_pcm(game, &hash, &pcm) ||
            !simcity_recomp_read_wram(game, 0x18270u + reference, original, 1u)) goto finish;
        if (original[0] != state.pollution[center]) continue;
        if (!simcity_recomp_read_wram(game, 0x18270u, original, sizeof(original))) goto finish;
        matched = 0u;
        for (int dy = -4; dy <= 4; ++dy)
            for (int dx = -4; dx <= 4; ++dx)
                if (original[(int)reference + dy * REF_W + dx] ==
                    state.pollution[(int)center + dy * HALF + dx]) ++matched;
        if (matched == 81u) {
            printf("stock-world-environment-reference pollution_cells_equal=%u stock_frame=%u\n",
                   matched, f);
            ok = 1;
            break;
        }
    }
finish:
    if (!ok) fprintf(stderr, "Stock environment test failed after %u matching cells: %s %s\n",
                     matched, error, simcity_recomp_last_error(game));
    free(world);
    return ok;
}

static int stock_world_density_probe(SimCityRecomp *game, const char *directory) {
    enum { WW = 240, WH = 200, CX = 119, CY = 99, HW = WW / 2,
           REF_X = 59, REF_Y = 49, REF_W = 60, REF_H = 50 };
    const unsigned center = (CY / 2u) * HW + CX / 2u;
    uint16_t *world = calloc(WW * WH, sizeof(*world));
    SimCityRecompStockWorldPower state = {0};
    SimCityRecompAudioStaticStatus audio = {0};
    char path[4096], error[256] = {0};
    uint64_t pcm = 0u, hash = UINT64_C(1469598103934665603), queue = 0u, phase = 0u;
    unsigned frames = 0u, underruns = 0u;
    int ok = 0;
    if (!world) return 0;
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error))) goto finish;
    for (int dy = -1; dy <= 1; ++dy)
        for (int dx = -1; dx <= 1; ++dx)
            world[(unsigned)(CY + dy) * WW + (unsigned)(CX + dx)] =
                (uint16_t)(0x00b4 + dy * 3 + dx);
    while (!state.density_cycles && frames < 4500u) {
        const uint64_t before = pcm;
        if (!simcity_recomp_advance_stock_world_session(game, 0u, world, WW * WH, &state) ||
            !drain_pcm(game, &hash, &pcm)) goto finish;
        queue += pcm - before;
        if (++frames > 3u) {
            phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
            const uint64_t demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            if (demand > queue) { ++underruns; queue = 0u; }
            else queue -= demand;
        }
    }
    if (!simcity_recomp_audio_static_status(game, &audio)) goto finish;
    const uint8_t *density = state.population_density;
    printf("stock-world-density frames=%u cycles=%u visited=%u written=%u center=%u north=%u south=%u west=%u east=%u underruns=%u overflows=%llu dropped=%llu\n",
           frames, state.density_cycles, state.density_visits, state.density_written,
           density[center], density[center - HW], density[center + HW],
           density[center - 1u], density[center + 1u], underruns,
           (unsigned long long)audio.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    ok = state.density_cycles == 1u && state.density_visits == WW * WH &&
         state.density_written == WW * WH / 4u && density[center] > 0u &&
         density[center - HW] == density[center + HW] &&
         density[center - 1u] == density[center + 1u] &&
         density[center + HW] > 0u && density[center + 1u] > 0u &&
         density[0] == 0u && density[WW * WH / 4u - 1u] == 0u &&
         !underruns && !audio.pcm_overflows && !simcity_recomp_audio_dropped_frames(game);
    if (ok) {
        uint8_t original[REF_W * REF_H];
        const unsigned reference = (REF_Y / 2u) * REF_W + REF_X / 2u;
        unsigned matching = 0u;
        ok = 0;
        if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) goto finish;
        memset(world, 0, WW * WH * sizeof(*world));
        for (int dy = -1; dy <= 1; ++dy)
            for (int dx = -1; dx <= 1; ++dx)
                world[(unsigned)(REF_Y + dy) * WW + (unsigned)(REF_X + dx)] =
                    (uint16_t)(0x00b4 + dy * 3 + dx);
        for (unsigned f = 0u; f < 4500u; ++f) {
            uint8_t tail;
            if (!simcity_recomp_advance_stock_world_window(game, 0u, 1u, world, WW * WH, 0u, 0u) ||
                !drain_pcm(game, &hash, &pcm) ||
                !simcity_recomp_read_wram(game, 0x18e28u + reference, &tail, 1u))
                goto finish;
            if (tail != density[center]) continue;
            if (!simcity_recomp_read_wram(game, 0x18e28u, original, sizeof(original))) goto finish;
            matching = 0u;
            for (int dy = -3; dy <= 3; ++dy)
                for (int dx = -3; dx <= 3; ++dx)
                    if (original[(int)reference + dy * REF_W + dx] ==
                        density[(int)center + dy * HW + dx]) ++matching;
            if (matching == 49u) {
                printf("stock-world-density-reference matching_cells=%u stock_frame=%u center=%u\n",
                       matching, f + 1u, tail);
                ok = 1;
                break;
            }
        }
        if (!ok) printf("stock-world-density-reference matching_cells=%u verified=0\n", matching);
    }
finish:
    if (!ok) fprintf(stderr, "Stock density test failed: %s %s\n", error, simcity_recomp_last_error(game));
    free(world);
    return ok;
}

static int stock_world_traffic_probe(SimCityRecomp *game, const char *directory) {
    enum { WW = 240, WH = 200, Y = 145, HOME = 114, WORK = 133, FIRST_ROAD = 116, LAST_ROAD = 131 };
    uint16_t *world = calloc(WW * WH, sizeof(*world));
    char snapshot[4096], error[256] = {0};
    int ok = 0;
    if (!world) return 0;
    snprintf(snapshot, sizeof(snapshot), "%s/four-plants-roads-zones.scsnap", directory);
    for (unsigned gap = 0u; gap <= 1u; ++gap) {
        SimCityRecompStockWorldPower state = {0};
        SimCityRecompAudioStaticStatus audio = {0};
        uint64_t pcm = 0u, hash = UINT64_C(1469598103934665603), phase = 0u, queue = 0u;
        unsigned frame = 0u, underruns = 0u, west_samples = 0u, east_samples = 0u;
        /* Authentic populated residential and commercial 3x3 tile groups.
           The residential population is large enough for the original trip
           decision; a vacant $0084 zone never makes this trip. */
        memset(world, 0, WW * WH * sizeof(*world));
        for (int dy = -1; dy <= 1; ++dy)
            for (int dx = -1; dx <= 1; ++dx) {
                const int delta = dy * 3 + dx;
                const size_t row = (size_t)(Y + dy) * WW;
                world[row + (unsigned)(HOME + dx)] = (uint16_t)(0x00b4 + delta);
                world[row + (unsigned)(WORK + dx)] = (uint16_t)(0x0144 + delta);
            }
        for (unsigned col = FIRST_ROAD; col <= LAST_ROAD; ++col)
            world[Y * WW + col] = col == 120u && gap ? 0u : 0x0032u;
        if (!simcity_recomp_snapshot_load(game, snapshot, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, 0, error, sizeof(error))) goto finish;
        while (!state.census.complete && frame < 2000u) {
            const uint64_t before = pcm;
            if (!simcity_recomp_advance_stock_world_session(game, 0u, world, WW * WH, &state) ||
                !drain_pcm(game, &hash, &pcm)) goto finish;
            queue += pcm - before;
            if (++frame > 3u) {
                phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
                const uint64_t demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
                phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
                if (demand > queue) { ++underruns; queue = 0u; }
                else queue -= demand;
            }
        }
        for (unsigned col = FIRST_ROAD / 2u; col <= LAST_ROAD / 2u; ++col)
            if (state.traffic[(Y / 2u) * (WW / 2u) + col]) {
                if (col < 60u) ++west_samples;
                else ++east_samples;
            }
        if (!simcity_recomp_audio_static_status(game, &audio)) goto finish;
        printf("stock-world-traffic gap=%u frames=%u visits=%u writes=%u west=%u east=%u west_cells=%u east_cells=%u underruns=%u overflows=%llu dropped=%llu\n",
               gap, frame, state.census.visited, state.traffic_writes, state.traffic_west,
               state.traffic_east, west_samples, east_samples, underruns,
               (unsigned long long)audio.pcm_overflows,
               (unsigned long long)simcity_recomp_audio_dropped_frames(game));
        if (!state.census.complete || state.census.visited != WW * WH ||
            state.census.order_errors || underruns || audio.pcm_overflows ||
            simcity_recomp_audio_dropped_frames(game) ||
            (!gap && (west_samples < 1u || east_samples < 2u ||
                      !state.traffic_west || !state.traffic_east)) ||
            (gap && (east_samples || state.traffic_east))) goto finish;
        if (!gap) {
            char path[4096];
            uint8_t expected[sizeof(state.traffic)];
            const uint32_t writes = state.traffic_writes, east = state.traffic_east;
            memcpy(expected, state.traffic, sizeof(expected));
            snprintf(path, sizeof(path), "%s/stock-world-traffic.scsnap", directory);
            if (!simcity_recomp_stock_world_snapshot_save(game, path, world, WW * WH,
                                                          &state, error, sizeof(error))) goto finish;
            memset(state.traffic, 0, sizeof(state.traffic));
            state.traffic_writes = state.traffic_west = state.traffic_east = 0u;
            if (!simcity_recomp_stock_world_snapshot_load(game, path, world, WW * WH,
                                                          &state, error, sizeof(error)) ||
                memcmp(expected, state.traffic, sizeof(expected)) != 0 ||
                state.traffic_writes != writes || state.traffic_east != east ||
                state.traffic_west != writes - east) goto finish;
            printf("stock-world-traffic-snapshot density_restored=1 writes=%u\n", writes);
        }
    }
    ok = 1;
finish:
    if (!ok) fprintf(stderr, "Stock traffic test failed: %s %s\n", error, simcity_recomp_last_error(game));
    free(world);
    return ok;
}

static int stock_world_resume_sample(SimCityRecomp *game, const char *directory,
                                     uint16_t *world, size_t count,
                                     SimCityRecompStockWorldPower *power) {
    char saved[4096], corrupt[4096], error[256] = {0};
    uint16_t *expected = malloc(count * sizeof(*world));
    SimCityRecompStockWorldPower expected_power;
    uint64_t pcm[2] = {0}, hash[2] = {UINT64_C(1469598103934665603), UINT64_C(1469598103934665603)};
    uint64_t clocks[2] = {0}, instructions[2] = {0};
    const uint64_t saved_clock = simcity_recomp_master_clock(game);
    const unsigned saved_commit = power->written_cells;
    int corrupt_rejected = 0, ok = 0;
    snprintf(saved, sizeof(saved), "%s/stock-world-inflight.scsnap", directory);
    snprintf(corrupt, sizeof(corrupt), "%s/stock-world-corrupt-test.scsnap", directory);
    if (!expected || !simcity_recomp_stock_world_snapshot_save(game, saved, world, count,
                                                              power, error, sizeof(error)) ||
        !simcity_recomp_stock_world_snapshot_save(game, corrupt, world, count,
                                                 power, error, sizeof(error))) goto finish;
    {
        FILE *file = fopen(corrupt, "rb+");
        if (!file) goto finish;
        int byte = EOF;
        int wrote = 0;
        if (fseek(file, -1L, SEEK_END) == 0 && (byte = fgetc(file)) != EOF &&
            fseek(file, -1L, SEEK_END) == 0) wrote = fputc(byte ^ 1, file) != EOF;
        if (fclose(file) != 0 || !wrote) goto finish;
    }
    const uint16_t last_tile = world[count - 1u];
    corrupt_rejected = !simcity_recomp_stock_world_snapshot_load(game, corrupt, world, count,
                                                                power, error, sizeof(error));
    if (!corrupt_rejected || power->written_cells != saved_commit || world[count - 1u] != last_tile ||
        simcity_recomp_master_clock(game) != saved_clock ||
        simcity_recomp_snapshot_load(game, saved, error, sizeof(error))) goto finish;
    for (unsigned pass = 0u; pass < 2u; ++pass) {
        if (pass) {
            memset(world, 0xa5, count * sizeof(*world));
            memset(power, 0xa5, sizeof(*power));
            if (!simcity_recomp_stock_world_snapshot_load(game, saved, world, count,
                                                        power, error, sizeof(error)) ||
                power->written_cells != saved_commit || world[count - 1u] != last_tile ||
                simcity_recomp_master_clock(game) != saved_clock) goto finish;
        }
        for (unsigned f = 0u; f < 100u; ++f) {
            const uint16_t input = f > 15u && f < 24u ? SIMCITY_INPUT_LEFT : 0u;
            if (!simcity_recomp_advance_stock_world_session(game, input, world, count, power) ||
                !drain_pcm(game, &hash[pass], &pcm[pass])) goto finish;
        }
        clocks[pass] = simcity_recomp_master_clock(game);
        instructions[pass] = simcity_recomp_instruction_count(game);
        if (!pass) {
            memcpy(expected, world, count * sizeof(*world));
            memcpy(&expected_power, power, sizeof(*power));
        }
    }
    ok = clocks[0] == clocks[1] && instructions[0] == instructions[1] &&
         pcm[0] && pcm[0] == pcm[1] && hash[0] == hash[1] &&
         !memcmp(expected, world, count * sizeof(*world)) &&
         !memcmp(&expected_power, power, sizeof(*power)) &&
         simcity_recomp_stock_world_snapshot_load(game, saved, world, count, power,
                                                 error, sizeof(error));
    printf("stock-world-snapshot partial_cells=%u restored_clock=%d pcm=%llu matching_audio=%d rejected_corruption=%d verified=%d\n",
           saved_commit, simcity_recomp_master_clock(game) == saved_clock,
           (unsigned long long)pcm[1], pcm[0] == pcm[1] && hash[0] == hash[1],
           corrupt_rejected, ok);
finish:
    if (!ok) fprintf(stderr, "Stock world snapshot failed: %s %s\n", error, simcity_recomp_last_error(game));
    free(expected);
    return ok;
}

static int timing_compare(const void *left, const void *right) {
    const double a = *(const double *)left, b = *(const double *)right;
    return (a > b) - (a < b);
}

static int stock_world_make_dense_fixture(SimCityRecomp *game, const char *directory,
                                          const char *path, char *error, size_t capacity) {
    enum { WW = 240, WH = 200 };
    uint16_t *tiles = calloc(WW * WH, sizeof(*tiles));
    SimCityRecompStockWorldPower world = {0};
    char source[4096];
    if (!tiles) return 0;
    snprintf(source, sizeof(source), "%s/four-plants-roads-zones.scsnap", directory);
    if (!simcity_recomp_snapshot_load(game, source, error, capacity)) {
        free(tiles);
        return 0;
    }
    /* Repeat stock road and 3x3 residential tile groups as a dense
       workload. This is a benchmark fixture, not generated World Map terrain. */
    for (unsigned y = 0u; y < WH; ++y)
        for (unsigned x = 0u; x < WW; ++x)
            if (x % 8u == 0u || y % 8u == 0u) tiles[y * WW + x] = 0x0032u;
    for (unsigned y = 2u; y + 2u < WH; y += 8u)
        for (unsigned x = 2u; x + 2u < WW; x += 8u) {
            for (unsigned dy = 0u; dy < 3u; ++dy)
                for (unsigned dx = 0u; dx < 3u; ++dx)
                    tiles[(y + dy) * WW + x + dx] = (uint16_t)(0x0095u + dy * 3u + dx);
        }
    const int ok = simcity_recomp_stock_world_snapshot_save(game, path, tiles, WW * WH, &world,
                                                            error, capacity);
    free(tiles);
    return ok;
}

static int stock_world_make_full_fixture(SimCityRecomp *game, const char *directory,
    const char *path, char *error, size_t capacity) {
    enum { WW = 240, WH = 200 };
    static const uint16_t developed[] = {0x0b9u, 0x14du, 0x20du};
    uint16_t *tiles = calloc(WW * WH, sizeof(*tiles));
    SimCityRecompStockWorldPower *work = calloc(1u, sizeof(*work));
    unsigned zones[3] = {0}, plants = 0, developed_tiles = 0;
    char source[4096];
    int ok = 0;
    snprintf(source, sizeof(source), "%s/stock-world-mixed-development.scsnap", directory);
    if (!tiles || !work || !simcity_recomp_stock_world_snapshot_load(game, source,
            tiles, WW * WH, work, error, capacity)) goto finish;
    /* A reproducible stress fixture, not the terrain shipped to players.
       Every tile is developed or infrastructure. Use the stock tile groups
       and run the original guest's city passes; no clock multiplier. */
    memset(work, 0, sizeof(*work));
    for (unsigned y = 0; y < WH; y += 4u) {
        for (unsigned x = 0; x < WW; ++x)
            tiles[y * WW + x] = y % 8u == 0u ? 0x32u : 0x62u;
        for (unsigned x = 0; x < WW; x += 3u) {
            const unsigned kind = (x / 3u + y / 4u) % 3u;
            ++zones[kind];
            for (unsigned dy = 0; dy < 3u; ++dy)
                for (unsigned dx = 0; dx < 3u; ++dx)
                    tiles[(y + dy + 1u) * WW + x + dx] =
                        (uint16_t)(developed[kind] + 3u * dy + dx);
        }
        if (y % 8u == 4u) {
            for (unsigned x = 0; x < WW; x += 48u) {
                ++plants;
                /* Use a width divisible by both four plant columns and
                   three zone columns; do not leave partial zone footprints. */
                for (unsigned dy = 0; dy < 4u; ++dy)
                    for (unsigned dx = 0; dx < 4u; ++dx)
                        tiles[(y + dy) * WW + x + dx] = (uint16_t)(0x287u + 4u * dy + dx);
                for (unsigned dx = 4; dx < 6; ++dx)
                    for (unsigned dy = 1; dy < 4; ++dy)
                        tiles[(y + dy) * WW + x + dx] = 0x62u;
                --zones[(x / 3u + y / 4u) % 3u];
                --zones[(x / 3u + 1u + y / 4u) % 3u];
            }
        }
    }
    developed_tiles = 9u * (zones[0] + zones[1] + zones[2]);
    printf("stock-full-fixture occupied=%u developed_tiles=%u zones_rci=%u/%u/%u coal=%u\n",
        WW * WH, developed_tiles, zones[0], zones[1], zones[2], plants);
    ok = simcity_recomp_stock_world_snapshot_save(game, path, tiles, WW * WH, work, error, capacity);
finish:
    free(work);
    free(tiles);
    return ok;
}

static int stock_full_native_pass_profile(SimCityRecomp *game, const char *directory) {
    enum { LIMIT = 30000, SAMPLE_PERIOD = 60 };
    SimCityRecompStockWorldSample sample = {0}, previous = {0};
    SimCityRecompAudioStaticStatus status = {0};
    WorldProbe audio = {0};
    double peak = 0.0, block_peak = 0.0;
    unsigned slow = 0u, peak_frame = 0u, frame = 0u;
    int checkpointed = 0, ok = 0;
    char path[4096], error[256] = {0};
    snprintf(path, sizeof(path), "%s/stock-world-full-stress.scsnap", directory);
    if (!stock_world_make_full_fixture(game, directory, path, error, sizeof(error)) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) goto finish;
    audio.hash = UINT64_C(1469598103934665603);
    for (frame = 1u; frame <= LIMIT; ++frame) {
        const double start = gameplay_clock();
        if (!world_probe_step(game, &audio, 0u, 1u, 1, 0)) goto finish;
        const double elapsed = (gameplay_clock() - start) * 1000.0;
        slow += elapsed > 1000.0 / 120.0;
        if (elapsed > peak) { peak = elapsed; peak_frame = frame; }
        if (elapsed > block_peak) block_peak = elapsed;
        if (frame % SAMPLE_PERIOD != 0u) continue;
        if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &sample)) goto finish;
        if (!checkpointed && sample.census_visits >= 42000u && !sample.power_cycles) {
            snprintf(path, sizeof(path), "%s/stock-world-full-before-power.scsnap", directory);
            if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) goto finish;
            checkpointed = 1;
            printf("stock-full-pass-checkpoint frame=%u census_visits=%u\n", frame, sample.census_visits);
        }
        if (frame % 600u == 0u || sample.power_cycles != previous.power_cycles ||
            sample.density_cycles != previous.density_cycles ||
            sample.environment_cycles != previous.environment_cycles ||
            sample.crime_cycles != previous.crime_cycles || sample.fire_cycles != previous.fire_cycles) {
            printf("stock-full-pass frame=%u census=%u power=%u density=%u environment=%u crime=%u fire=%u traffic=%u/%u peak_60frames_ms=%.2f\n",
                frame, sample.census_visits, sample.power_cycles, sample.density_cycles,
                sample.environment_cycles, sample.crime_cycles, sample.fire_cycles,
                sample.traffic_west, sample.traffic_east, block_peak);
            fflush(stdout);
        }
        previous = sample;
        block_peak = 0.0;
        if (checkpointed && sample.power_cycles && sample.density_cycles && sample.environment_cycles &&
            sample.crime_cycles && sample.fire_cycles && sample.traffic_west && sample.traffic_east) break;
    }
    if (!simcity_recomp_audio_static_status(game, &status)) goto finish;
    printf("stock-full-pass-result frames=%u peak_ms=%.2f peak_frame=%u over_8_33ms=%u underruns=%u overflows=%u core_overflows=%llu dropped=%llu\n",
        frame > LIMIT ? LIMIT : frame, peak, peak_frame, slow, audio.modeled_underruns,
        audio.modeled_overflows, (unsigned long long)status.pcm_overflows,
        (unsigned long long)simcity_recomp_audio_dropped_frames(game));
    if (frame > LIMIT || audio.modeled_underruns || audio.modeled_overflows || status.pcm_overflows ||
        simcity_recomp_audio_dropped_frames(game) || sample.census_order_errors || sample.power_order_errors)
        goto finish;
    snprintf(path, sizeof(path), "%s/stock-world-full-native-passes.bmp", directory);
    ok = simcity_recomp_render_current_frame(game, error, sizeof(error)) &&
        write_bmp(path, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT);
finish:
    if (!ok) fprintf(stderr, "Full-city native pass profile did not complete: %s %s\n",
        error, simcity_recomp_last_error(game));
    return ok;
}

/* Prepare short timing windows from the identified neutral-input pass
   trace. Only advance the guest; never set native pass or clock state. */
static int stage_stock_full_overlay_windows(SimCityRecomp *game, const char *directory) {
    static const struct { unsigned advance; const char *name; } windows[] = {
        {11080u, "environment"}, {18040u, "crime"}, {25300u, "density"}
    };
    char path[4096], error[256] = {0};
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus pcm = {0};
    unsigned progress = 0u;
    audio.hash = UINT64_C(1469598103934665603);
    snprintf(path, sizeof(path), "%s/stock-world-full-before-power.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) return 0;
    for (unsigned i = 0u; i < sizeof(windows) / sizeof(windows[0]); ++i) {
        SimCityRecompStockWorldSample sample;
        if (!world_probe_step(game, &audio, 0u, windows[i].advance - progress, 1, 0) ||
            !simcity_recomp_stock_world_sample(game, 121u, 101u, &sample) ||
            sample.power_order_errors || sample.census_order_errors || audio.modeled_underruns ||
            audio.modeled_overflows || !simcity_recomp_audio_static_status(game, &pcm) || pcm.pcm_overflows ||
            simcity_recomp_audio_dropped_frames(game)) return 0;
        progress = windows[i].advance;
        const uint32_t counts[] = {sample.environment_cycles, sample.crime_cycles, sample.density_cycles};
        if (counts[i] != 0u || (i && !counts[i - 1u])) return 0;
        snprintf(path, sizeof(path), "%s/stock-world-full-before-%s.scsnap", directory, windows[i].name);
        if (!simcity_recomp_snapshot_save(game, path, error, sizeof(error))) return 0;
        printf("stock-overlay-stage pass=%s advanced=%u game_frame=%u environment=%u crime=%u density=%u pcm=%llu\n",
            windows[i].name, progress, simcity_recomp_current_frame(game), counts[0], counts[1], counts[2],
            (unsigned long long)audio.frames);
        fflush(stdout);
    }
    return 1;
}

static int stock_dense_overlay_write_audit(SimCityRecomp *game, const char *directory) {
    static const char *const names[] = {"environment", "crime", "density"};
    char path[4096], error[256] = {0};
    for (unsigned i = 0u; i < 3u; ++i) {
        WorldProbe audio = {0};
        SimCityRecompStockWorldSample before, after;
        audio.hash = UINT64_C(1469598103934665603);
        snprintf(path, sizeof(path), "%s/stock-world-full-before-%s.scsnap", directory, names[i]);
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            !simcity_recomp_stock_world_sample(game, 121u, 101u, &before) ||
            !world_probe_step(game, &audio, 0u, 728u, 1, 0) ||
            !simcity_recomp_stock_world_sample(game, 121u, 101u, &after)) return 0;
        const uint32_t start[] = {before.environment_cycles, before.crime_cycles, before.density_cycles};
        const uint32_t end[] = {after.environment_cycles, after.crime_cycles, after.density_cycles};
        const uint32_t writes[] = {after.pollution_written, after.crime_written, after.density_written};
        const int pass = start[i] == 0u && end[i] == 1u && writes[i] == 12000u &&
            (i != 2u || after.density_visits == 48000u) && !after.census_order_errors &&
            !after.power_order_errors && !audio.modeled_underruns && !audio.modeled_overflows;
        printf("stock-dense-overlay-write-audit pass=%s cycles=%u->%u writes=%u density_visits=%u pcm_hash=%016llX complete=%d\n",
            names[i], start[i], end[i], writes[i], after.density_visits,
            (unsigned long long)audio.hash, pass);
        if (!pass) return 0;
    }
    return 1;
}

static int stock_world_performance_probe(SimCityRecomp *game, const char *directory, int full_city) {
    enum { BLOCKS = 750, STANDARD_FRAMES = 720, FULL_CITY_FRAMES = 4500, TAIL = 3 };
    const unsigned count = full_city ? FULL_CITY_FRAMES : STANDARD_FRAMES;
    double times[FULL_CITY_FRAMES];
    uint64_t reference_hash = 0u, reference_pcm = 0u, reference_clock = 0u;
    uint64_t reference_work[FULL_CITY_FRAMES];
    char path[4096], error[256] = {0};
    int ok = 0;
    snprintf(path, sizeof(path), "%s/%s", directory,
        full_city ? "stock-world-full-before-power.scsnap" : "stock-world-performance.scsnap");
    if (!full_city && !stock_world_make_dense_fixture(game, directory, path, error, sizeof(error))) goto finish;
    for (unsigned mode = 0u; mode < 3u; ++mode) {
        WorldProbe audio = {0};
        SimCityRecompAudioStaticStatus status = {0};
        double core_ms = 0.0, draw_ms = 0.0, peak_core = 0.0, peak_draw = 0.0;
        uint64_t video_hash = UINT64_C(1469598103934665603);
        struct {
            double total_ms, core_ms, draw_ms;
            uint64_t instructions, core_cycles, draw_cycles;
            unsigned step;
        } slow[TAIL] = {0};
        uint64_t group_cycles[2] = {0, 0};
        unsigned group_samples[2] = {0, 0};
        unsigned late = 0u, over_budget = 0u;
        audio.hash = UINT64_C(1469598103934665603);
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, mode == 2u, error, sizeof(error))) goto finish;
        const double cpu_start = gameplay_cpu_seconds();
        const double run_start = gameplay_clock();
        for (unsigned f = 0u; f < count; ++f) {
            const uint16_t input = full_city ? 0u : f < 280u ? SIMCITY_INPUT_RIGHT :
                                   f < 500u ? SIMCITY_INPUT_DOWN : 0u;
            const uint64_t before_instructions = simcity_recomp_instruction_count(game);
            const uint64_t cycles_start = gameplay_thread_cycles();
            const double start = gameplay_clock();
            if (!world_probe_step(game, &audio, input, 1u, 1, 0)) goto finish;
            const double core_done = gameplay_clock();
            const uint64_t cycles_core_done = gameplay_thread_cycles();
            if (mode && !simcity_recomp_render_presentation_frame(game, error, sizeof(error))) goto finish;
            const double done = gameplay_clock();
            const uint64_t cycles_done = mode ? gameplay_thread_cycles() : cycles_core_done;
            const double c = (core_done - start) * 1000.0;
            const double d = mode ? (done - core_done) * 1000.0 : 0.0;
            const uint64_t work = simcity_recomp_instruction_count(game) - before_instructions;
            const int have_cycles = cycles_done != UINT64_MAX && cycles_done >= cycles_core_done &&
                                    cycles_core_done >= cycles_start;
            const unsigned missed = c + d > 1000.0 / 60.0;
            if (have_cycles) {
                group_cycles[missed] += cycles_done - cycles_start;
                ++group_samples[missed];
            }
            if (mode == 0u) reference_work[f] = work;
            else if (work != reference_work[f]) {
                fprintf(stderr, "Guest instruction count diverged at step %u: %llu vs %llu\n",
                    f, (unsigned long long)work, (unsigned long long)reference_work[f]);
                goto finish;
            }
            for (unsigned rank = 0u; rank < TAIL; ++rank) {
                if (c + d <= slow[rank].total_ms) continue;
                for (unsigned j = TAIL - 1u; j > rank; --j) slow[j] = slow[j - 1u];
                slow[rank].total_ms = c + d;
                slow[rank].core_ms = c;
                slow[rank].draw_ms = d;
                slow[rank].core_cycles = have_cycles ? cycles_core_done - cycles_start : 0u;
                slow[rank].draw_cycles = have_cycles ? cycles_done - cycles_core_done : 0u;
                slow[rank].instructions = work;
                slow[rank].step = f;
                break;
            }
            times[f] = c + d;
            core_ms += c;
            draw_ms += d;
            late += missed;
            over_budget += c + d > 1000.0 / 120.0;
            if (c > peak_core) peak_core = c;
            if (d > peak_draw) peak_draw = d;
            if (mode && f % 12u == 0u) {
                video_hash ^= fnv1a(simcity_recomp_frame_bgra(game),
                    (size_t)simcity_recomp_frame_width(game) * SIMCITY_RECOMP_FRAME_HEIGHT);
                video_hash *= UINT64_C(1099511628211);
            }
        }
        const double run_end = gameplay_clock();
        const double cpu_end = gameplay_cpu_seconds();
        if (!simcity_recomp_audio_static_status(game, &status)) goto finish;
        qsort(times, count, sizeof(times[0]), timing_compare);
        printf("stock-world-performance mode=%s blocks=%u frames=%u core_ms=%.2f core_peak=%.2f draw_ms=%.2f draw_peak=%.2f p95_ms=%.2f p99_ms=%.2f max_ms=%.2f late=%u pcm=%llu audio_hash=%016llX video_hash=%016llX underruns=%u overflows=%llu dropped=%llu\n",
               mode == 0u ? "core" : mode == 1u ? "native256" : "wide398",
               full_city ? 3750u : BLOCKS, count, core_ms / count, peak_core, draw_ms / count, peak_draw,
               times[count * 95u / 100u - 1u], times[count * 99u / 100u - 1u],
               times[count - 1u], late, (unsigned long long)audio.frames,
               (unsigned long long)audio.hash, (unsigned long long)(mode ? video_hash : 0u),
               audio.modeled_underruns,
               (unsigned long long)status.pcm_overflows,
               (unsigned long long)simcity_recomp_audio_dropped_frames(game));
        if (full_city) {
            SimCityRecompStockWorldSample sample;
            if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &sample) ||
                !sample.power_cycles || !sample.fire_cycles) goto finish;
            printf("stock-full-compute-budget mode=%u frames=%u over_8_33ms=%u power=%u fire=%u excludes_gdi=1\n",
                mode, count, over_budget, sample.power_cycles, sample.fire_cycles);
        }
        if (cpu_start >= 0.0 && cpu_end >= cpu_start)
            printf("stock-world-thread mode=%u run_ms=%.2f thread_cpu_ms=%.2f\n",
                   mode, (run_end - run_start) * 1000.0, (cpu_end - cpu_start) * 1000.0);
        if (group_samples[0] || group_samples[1])
            printf("stock-world-thread-cycles mode=%u on_time_samples=%u on_time_avg=%llu late_samples=%u late_avg=%llu\n",
                   mode, group_samples[0], (unsigned long long)(group_samples[0] ?
                       group_cycles[0] / group_samples[0] : 0u),
                   group_samples[1], (unsigned long long)(group_samples[1] ?
                       group_cycles[1] / group_samples[1] : 0u));
        for (unsigned i = 0u; i < TAIL; ++i)
            printf("stock-world-frame-tail mode=%u rank=%u step=%u core_ms=%.2f draw_ms=%.2f instructions=%llu core_cycles=%llu draw_cycles=%llu pcm_queue_peak=%llu\n",
                   mode, i + 1u, slow[i].step, slow[i].core_ms, slow[i].draw_ms,
                   (unsigned long long)slow[i].instructions,
                   (unsigned long long)slow[i].core_cycles,
                   (unsigned long long)slow[i].draw_cycles,
                   (unsigned long long)audio.max_queue);
        fflush(stdout);
        if (audio.modeled_underruns || audio.modeled_overflows || status.pcm_overflows ||
            simcity_recomp_audio_dropped_frames(game)) goto finish;
        if (!mode) {
            reference_hash = audio.hash;
            reference_pcm = audio.frames;
            reference_clock = simcity_recomp_master_clock(game);
        } else if (audio.hash != reference_hash || audio.frames != reference_pcm ||
                   simcity_recomp_master_clock(game) != reference_clock) goto finish;
    }
    ok = 1;
finish:
    if (!ok) fprintf(stderr, "Stock World Map performance run failed: %s %s\n",
                     error, simcity_recomp_last_error(game));
    return ok;
}

#ifdef _WIN32
#if defined(_M_X64)
static int stock_world_core_sample_probe(SimCityRecomp *game, const char *directory) {
    enum { FRAMES = 4500 };
    ProbeSampling samples = {0};
    char path[4096], error[256] = {0};
    WorldProbe audio = {0};
    SimCityRecompStockWorldSample world = {0};
    SimCityRecompAudioStaticStatus status = {0};
    audio.hash = UINT64_C(1469598103934665603);
    int ok = 0;
    snprintf(path, sizeof(path), "%s/stock-world-full-before-power.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !probe_sample_begin(&samples)) goto done;
    const uint64_t start = simcity_recomp_master_clock(game);
    for (unsigned f = 0; f < FRAMES; ++f)
        if (!world_probe_step(game, &audio, 0u, 1u, 1, 0)) goto done;
    ok = simcity_recomp_stock_world_sample(game, 121u, 101u, &world) &&
        world.power_cycles && world.fire_cycles &&
        simcity_recomp_audio_static_status(game, &status) && !status.pcm_overflows &&
        !audio.modeled_underruns && !audio.modeled_overflows &&
        !simcity_recomp_audio_dropped_frames(game);
    printf("stock-core-profile frames=%u master_delta=%llu pcm=%llu audio_hash=%016llX power=%u fire=%u\n",
        FRAMES, (unsigned long long)(simcity_recomp_master_clock(game) - start),
        (unsigned long long)audio.frames, (unsigned long long)audio.hash, world.power_cycles, world.fire_cycles);
done:
    probe_sample_end(&samples, ok);
    if (!ok || samples.count < 100u)
        fprintf(stderr, "Full-city CPU sample run did not complete: %s %s\n",
            error, simcity_recomp_last_error(game));
    return ok && samples.count >= 100u;
}
#endif

/* Count real equality hits before using them in a render worker. The oracle
   deliberately renders *every* frame, including ones we could have reused. */
static int stock_world_image_input_reuse_probe(SimCityRecomp *game, const char *directory) {
    enum { PHASE_FRAMES = 360 };
    char path[4096], error[256] = {0};
    SimCityRecompVideoSnapshot *previous = simcity_recomp_video_snapshot_create();
    SimCityRecompVideoSnapshot *current = simcity_recomp_video_snapshot_create();
    uint32_t *first = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*first));
    uint32_t *second = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*second));
    uint64_t reference_audio = 0u, reference_frames = 0u, reference_clock = 0u;
    int ok = 0;
    snprintf(path, sizeof(path), "%s/stock-world-full-before-power.scsnap", directory);
    if (!previous || !current || !first || !second) goto done;
    for (unsigned mode = 0u; mode < 2u; ++mode) {
        WorldProbe audio = {0};
        uint32_t *last_pixels = first, *pixels = second;
        unsigned last_width = 0u, hits[2] = {0u, 0u}, same_images[2] = {0u, 0u};
        unsigned camera_changes[2] = {0u, 0u};
        uint16_t previous_camera[4] = {0u};
        uint16_t camera_start[2] = {0u}, move = 0u;
        static const unsigned camera_word[] = {0x01bdu, 0x01bfu, 0x0139u, 0x0137u};
        audio.hash = UINT64_C(1469598103934665603);
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, mode != 0u, error, sizeof(error))) goto done;
        for (unsigned f = 0u; f < PHASE_FRAMES * 2u; ++f) {
            const unsigned phase = f / PHASE_FRAMES;
            if (f == PHASE_FRAMES) {
                camera_start[0] = previous_camera[0];
                camera_start[1] = previous_camera[1];
                move = (int16_t)previous_camera[0] < 104 ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
            } else if (f == PHASE_FRAMES + 180u) {
                move = (int16_t)previous_camera[1] < 86 ? SIMCITY_INPUT_DOWN : SIMCITY_INPUT_UP;
            }
            unsigned width = 0u;
            uint16_t camera[4];
            if (!world_probe_step(game, &audio, move, 1u, 0, 0) ||
                !simcity_recomp_video_snapshot_capture(current, game) ||
                !simcity_recomp_video_snapshot_render(current, pixels,
                    SIMCITY_RECOMP_MAX_FRAME_PIXELS, &width)) goto done;
            for (unsigned i = 0u; i < sizeof(camera_word) / sizeof(camera_word[0]); ++i)
                if (!read_wram16(game, camera_word[i], &camera[i])) goto done;
            camera[2] &= 7u;
            camera[3] &= 7u;
            if (f) {
                const int hit = simcity_recomp_video_snapshot_same_world_image_inputs(previous, current);
                const int equal_pixels = last_width == width &&
                    memcmp(last_pixels, pixels,
                           (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*pixels)) == 0;
                if (hit && !equal_pixels) {
                    fprintf(stderr, "Unsafe World Map image reuse at width %u frame %u.\n", width, f);
                    goto done;
                }
                hits[phase] += hit;
                same_images[phase] += equal_pixels;
                camera_changes[phase] += memcmp(camera, previous_camera, sizeof(camera)) != 0;
            }
            memcpy(previous_camera, camera, sizeof(camera));
            SimCityRecompVideoSnapshot *vacant = previous;
            previous = current;
            current = vacant;
            uint32_t *recycled = last_pixels;
            last_pixels = pixels;
            pixels = recycled;
            last_width = width;
        }
        printf("stock-world-image-input-reuse mode=%s idle_pairs=%u idle_hits=%u idle_equal=%u idle_cam_changes=%u moving_pairs=%u moving_hits=%u moving_equal=%u moving_cam_changes=%u camera_start=%d,%d camera_end=%d,%d pcm=%llu audio_hash=%016llX\n",
            mode ? "wide398" : "native256", PHASE_FRAMES - 1u, hits[0], same_images[0], camera_changes[0],
            PHASE_FRAMES, hits[1], same_images[1], camera_changes[1],
            (int16_t)camera_start[0], (int16_t)camera_start[1],
            (int16_t)previous_camera[0], (int16_t)previous_camera[1],
            (unsigned long long)audio.frames, (unsigned long long)audio.hash);
        if (!camera_changes[1] || audio.modeled_underruns || audio.modeled_overflows ||
            simcity_recomp_audio_dropped_frames(game)) goto done;
        if (!mode) {
            reference_audio = audio.hash;
            reference_frames = audio.frames;
            reference_clock = simcity_recomp_master_clock(game);
        } else if (audio.hash != reference_audio || audio.frames != reference_frames ||
                   simcity_recomp_master_clock(game) != reference_clock) goto done;
    }
    ok = 1;
done:
    free(first);
    free(second);
    simcity_recomp_video_snapshot_destroy(previous);
    simcity_recomp_video_snapshot_destroy(current);
    if (!ok) fprintf(stderr, "World Map image-reuse oracle failed: %s %s\n",
                     error, simcity_recomp_last_error(game));
    return ok;
}

static uint64_t paced_ticks(void) {
    LARGE_INTEGER now;
    QueryPerformanceCounter(&now);
    return (uint64_t)now.QuadPart;
}

static int paced_wait(HANDLE timer, uint64_t deadline, uint64_t frequency) {
    const uint64_t now = paced_ticks();
    LARGE_INTEGER relative;
    if (now >= deadline) return 1;
    relative.QuadPart = -(LONGLONG)(((deadline - now) * UINT64_C(10000000) +
                                   frequency - 1u) / frequency);
    return SetWaitableTimer(timer, &relative, 0, NULL, NULL, FALSE) &&
           WaitForSingleObject(timer, INFINITE) == WAIT_OBJECT_0;
}

typedef struct PacedAudio {
    uint64_t queue, consumed, min_queue, max_queue, missing_frames;
    unsigned underruns, overflows;
} PacedAudio;

enum { PACED_AUDIO_CAPACITY = 4096 };

/* Model a continuously consuming device in source-PCM units. The probe
   delivers each frame's batch at core completion; the launcher can deliver
   PCM during a frame and uses a different configurable prefill. */
static void paced_audio_consume(PacedAudio *a, uint64_t elapsed, uint64_t frequency) {
    const uint64_t cursor = elapsed * SIMCITY_RECOMP_AUDIO_SAMPLE_RATE / frequency;
    const uint64_t demand = cursor - a->consumed;
    a->consumed = cursor;
    if (demand > a->queue) {
        ++a->underruns;
        a->missing_frames += demand - a->queue;
        a->queue = 0u;
    } else {
        a->queue -= demand;
    }
    if (a->queue < a->min_queue) a->min_queue = a->queue;
}

static void paced_audio_feed(PacedAudio *a, uint64_t elapsed, uint64_t frequency, uint64_t frames) {
    paced_audio_consume(a, elapsed, frequency);
    a->queue += frames;
    if (a->queue > a->max_queue) a->max_queue = a->queue;
    if (a->queue > PACED_AUDIO_CAPACITY) {
        ++a->overflows;
        a->queue = PACED_AUDIO_CAPACITY;
    }
}

static int stock_video_pixel_parity(SimCityRecomp *game, const char *directory) {
    static const uint16_t directions[] = {
        SIMCITY_INPUT_RIGHT, SIMCITY_INPUT_DOWN, SIMCITY_INPUT_LEFT, SIMCITY_INPUT_UP
    };
    uint32_t *reference = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*reference));
    uint32_t *detached = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*detached));
    SimCityRecompVideoSnapshot *snapshot = simcity_recomp_video_snapshot_create();
    char path[4096], error[256] = {0};
    unsigned checked = 0u;
    if (!reference || !detached || !snapshot) goto finish;
    for (unsigned scene = 0u; scene < 3u; ++scene) {
        for (unsigned wide = 0u; wide < 2u; ++wide) {
            if (scene == 2u) {
                snprintf(path, sizeof(path), "%s/stock-world-buildings.scsnap", directory);
                if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)))
                    goto finish;
            } else {
                if (!simcity_recomp_reset(game, error, sizeof(error))) goto finish;
                if (scene == 1u) {
                    uint16_t focus;
                    unsigned funds;
                    for (unsigned f = 0u; f < 2700u; ++f)
                        if (!simcity_recomp_advance_headless(game, new_city_input(f), 1u, NULL))
                            goto finish;
                    if (!read_wram16(game, 0x0201u, &focus) || focus != 0xffu ||
                        !stock_funds(game, &funds) || funds != 20000u) goto finish;
                }
            }
            if (!simcity_recomp_set_widescreen(game, wide != 0u, error, sizeof(error)))
                goto finish;
            const unsigned width = simcity_recomp_frame_width(game);
            const size_t pixels = (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT;
            for (unsigned sample = 0u; sample < 16u; ++sample) {
                if (!simcity_recomp_advance_headless(game,
                        scene ? directions[sample / 4u] : 0u, scene ? 17u : 50u, NULL) ||
                    !simcity_recomp_render_current_frame(game, error, sizeof(error)))
                    goto finish;
                memcpy(reference, simcity_recomp_frame_bgra(game), pixels * sizeof(*reference));
                if (!simcity_recomp_render_presentation_frame(game, error, sizeof(error)))
                    goto finish;
                const uint32_t *actual = simcity_recomp_frame_bgra(game);
                if (memcmp(reference, actual, pixels * sizeof(*reference))) {
                    size_t first = 0u;
                    while (reference[first] == actual[first]) ++first;
                    fprintf(stderr, "video parity scene=%u wide=%u sample=%u pixel=(%u,%u) expected=%06x actual=%06x\n",
                        scene, wide, sample, (unsigned)(first % width),
                        (unsigned)(first / width), reference[first], actual[first]);
                    goto finish;
                }
                unsigned detached_width = 0u;
                if (!simcity_recomp_video_snapshot_capture(snapshot, game) ||
                    !simcity_recomp_video_snapshot_render(snapshot, detached,
                        SIMCITY_RECOMP_MAX_FRAME_PIXELS, &detached_width) ||
                    detached_width != width ||
                    memcmp(reference, detached, pixels * sizeof(*reference))) {
                    fprintf(stderr, "detached video mismatch scene=%u wide=%u sample=%u\n",
                            scene, wide, sample);
                    goto finish;
                }
                ++checked;
            }
        }
    }
finish:
    printf("stock-video-pixel-parity frames=%u/96 %s\n", checked, error);
    free(reference);
    free(detached);
    simcity_recomp_video_snapshot_destroy(snapshot);
    return checked == 96u;
}

static int prepared_video_preflight(SimCityRecomp *game, uint64_t frequency) {
    SimCityPreparedVideo *video = simcity_prepared_video_open();
    unsigned width = 0u;
    uint32_t frame = 0u;
    uint64_t ready = 0u;
    int result = 0;
    if (!video) return 0;
    /* Wrap both rings, checking that the displayed buffer survives another
       submission and that render output still matches the captured guest. */
    for (uint32_t target = 1u; target <= 12u; ++target) {
        const uint32_t *held = simcity_prepared_video_pixels(video, &width);
        const size_t held_count = held ? (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT : 0u;
        const uint64_t held_hash = held ? fnv1a(held, held_count) : 0u;
        const uint64_t before_submit = paced_ticks();
        if (simcity_prepared_video_status(video, target).stage != SIMCITY_RENDER_NOT_OBSERVED)
            goto finish;
        if (!simcity_recomp_render_presentation_frame(game, NULL, 0u) ||
            simcity_prepared_video_submit(video, game, target) != 1 ||
            !simcity_recomp_advance_headless(game, SIMCITY_INPUT_RIGHT, 1u, NULL))
            goto finish;
        const uint64_t stop = paced_ticks() + frequency;
        SimCityRenderStatus progress;
        do {
            progress = simcity_prepared_video_status(video, target);
            if (progress.stage == SIMCITY_RENDER_PUBLISHED) break;
            if (progress.stage != SIMCITY_RENDER_WAITING && progress.stage != SIMCITY_RENDER_RUNNING)
                goto finish;
            Sleep(1u);
        } while (paced_ticks() < stop);
        if (progress.stage != SIMCITY_RENDER_PUBLISHED || progress.started < before_submit ||
            progress.finished < progress.started) goto finish;
        if (simcity_prepared_video_present(video, target - 1u, UINT64_MAX, &frame, NULL) != 1 ||
            simcity_prepared_video_present(video, target, before_submit, &frame, NULL) != 1 ||
            simcity_prepared_video_status(video, target).stage != SIMCITY_RENDER_COLLECTED ||
            simcity_prepared_video_pixels(video, NULL) != held ||
            (held && fnv1a(held, held_count) != held_hash))
            goto finish;
        const uint64_t dispatch = paced_ticks();
        const int shown = simcity_prepared_video_present(video, target, dispatch, &frame, &ready);
        const uint32_t *pixels = simcity_prepared_video_pixels(video, &width);
        if (shown != 2 || frame != target || ready != progress.finished || ready > dispatch || !pixels ||
            simcity_prepared_video_status(video, target).stage != SIMCITY_RENDER_ALREADY_SHOWN ||
            width != simcity_recomp_frame_width(game) ||
            memcmp(pixels, simcity_recomp_frame_bgra(game),
                   (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*pixels)) != 0)
            goto finish;
    }
    result = 1;
finish:
    simcity_prepared_video_close(video);
    return result;
}

/* Fixed-input CPU cost for detached rendering, excluding city simulation,
   worker waits and blit. Used to compare changes to the renderer itself. */
static int prepared_video_compute_cost(SimCityRecomp *game, int profile) {
    const unsigned passes = profile ? 1400u : 96u;
    SimCityRecompVideoSnapshot *image = simcity_recomp_video_snapshot_create();
    uint32_t *pixels = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*pixels));
    ULONG64 before = 0u, after = 0u;
    unsigned width = 0u;
    int ok = image && pixels && simcity_recomp_video_snapshot_capture(image, game) &&
        simcity_recomp_video_snapshot_render(image, pixels, SIMCITY_RECOMP_MAX_FRAME_PIXELS, &width) &&
        QueryThreadCycleTime(GetCurrentThread(), &before);
#if defined(_M_X64)
    ProbeSampling samples = {0};
    if (ok && profile) ok = probe_sample_begin(&samples);
#else
    if (profile) ok = 0;
#endif
    for (unsigned run = 0u; ok && run < passes; ++run)
        ok = simcity_recomp_video_snapshot_render(image, pixels, SIMCITY_RECOMP_MAX_FRAME_PIXELS, &width);
#if defined(_M_X64)
    if (profile) {
        probe_sample_end(&samples, ok);
        ok = ok && samples.count >= 100u;
    }
#endif
    if (!profile && ok && QueryThreadCycleTime(GetCurrentThread(), &after) && after >= before) {
        printf("stock-detached-render-cost width=%u renders=%u mean_cycles=%llu pixels_hash=%016llX\n", width,
            passes, (unsigned long long)((after - before) / passes),
            (unsigned long long)fnv1a(pixels, (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT));
    } else if (!profile) ok = 0;
    free(pixels);
    simcity_recomp_video_snapshot_destroy(image);
    return ok;
}

/* Pixel oracle over a real construction segment, not a refresh-rate test.
   A transition in both renders belongs to the guest; a difference only in
   the prepared render indicates a host graphics artifact. */
static int stock_construction_flicker(SimCityRecomp *game, const char *directory, int full_tape) {
    StockControllerTape tape = {0};
    uint8_t *bytes = NULL;
    size_t length = 0u;
    char path[4096], start[4096], error[256] = {0};
    LARGE_INTEGER qpc;
    int ok = 0;
    snprintf(path, sizeof(path), "%s/stock-world-construction-input.scinput", directory);
    snprintf(start, sizeof(start), "%s/stock-world-construction-input-start.scsnap", directory);
    if (!read_file(path, &bytes, &length) || !stock_controller_tape_decode(&tape, bytes, length) ||
        !QueryPerformanceFrequency(&qpc)) goto done;
    const unsigned limit = full_tape || tape.frames < 960u ? tape.frames : 960u;
    uint64_t pcm_reference = 0u, clock_reference = 0u, pcm_frames_reference = 0u;
    for (unsigned wide = 0u; wide < 2u; ++wide) {
        WorldProbe audio = {0};
        SimCityRecompAudioStaticStatus audio_status = {0};
        uint64_t previous = 0u, two_back = 0u;
        uint64_t image_sequence = UINT64_C(1469598103934665603);
        uint64_t submit_ticks = 0u, submit_peak = 0u;
        unsigned checked = 0u, changed = 0u, returned = 0u, black = 0u;
        audio.hash = UINT64_C(1469598103934665603);
        audio.measure_all = 1;
        if (!simcity_recomp_stock_world_open_snapshot(game, start, error, sizeof(error)) ||
            simcity_recomp_current_frame(game) != tape.start_frame ||
            !simcity_recomp_set_widescreen(game, (int)wide, error, sizeof(error))) goto done;
        const uint64_t clock_start = simcity_recomp_master_clock(game);
        SimCityPreparedVideo *video = simcity_prepared_video_open();
        if (!video) goto done;
        for (unsigned frame = 1u; frame <= limit; ++frame) {
            if (!world_probe_step(game, &audio, tape.input[frame - 1u], 1u, 0, 0) ||
                simcity_recomp_current_frame(game) != tape.start_frame + frame ||
                !simcity_recomp_render_presentation_frame(game, error, sizeof(error))) break;
            const uint64_t submit_start = paced_ticks();
            if (simcity_prepared_video_submit(video, game, frame) != 1) break;
            const uint64_t submit_elapsed = paced_ticks() - submit_start;
            submit_ticks += submit_elapsed;
            if (submit_elapsed > submit_peak) submit_peak = submit_elapsed;
            uint32_t shown_frame = 0u;
            unsigned width = 0u;
            int shown;
            const uint64_t end = paced_ticks() + (uint64_t)qpc.QuadPart;
            do {
                shown = simcity_prepared_video_present(video, frame, paced_ticks(), &shown_frame, NULL);
                if (shown != 1) break;
                Sleep(1u);
            } while (paced_ticks() < end);
            const uint32_t *actual = simcity_prepared_video_pixels(video, &width);
            const uint32_t *reference = simcity_recomp_frame_bgra(game);
            const size_t pixels = (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT;
            if (shown != 2 || shown_frame != frame || !actual || !reference ||
                width != simcity_recomp_frame_width(game) ||
                memcmp(actual, reference, pixels * sizeof(*actual)) != 0) {
                fprintf(stderr, "Prepared frame differs from reference: mode=%s input_frame=%u guest_frame=%u shown_frame=%u\n",
                    wide ? "wide398" : "native256", frame, tape.start_frame + frame, shown_frame);
                if (actual && width) {
                    snprintf(path, sizeof(path), "%s/flicker-%u-prepared.bmp", directory, wide);
                    (void)write_bmp(path, actual, width, SIMCITY_RECOMP_FRAME_HEIGHT);
                }
                if (reference) {
                    snprintf(path, sizeof(path), "%s/flicker-%u-reference.bmp", directory, wide);
                    (void)write_bmp(path, reference, simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT);
                }
                break;
            }
            int nonblack = 0;
            for (size_t i = 0u; i < pixels; ++i)
                if (actual[i] & 0x00ffffffu) { nonblack = 1; break; }
            black += !nonblack;
            const uint64_t hash = fnv1a(actual, pixels);
            image_sequence = (image_sequence ^ hash) * UINT64_C(1099511628211);
            if (frame > 1u && hash != previous) ++changed;
            if (frame > 2u && hash == two_back && hash != previous) ++returned;
            two_back = previous;
            previous = hash;
            ++checked;
            if (full_tape && checked % 2048u == 0u) {
                printf("stock-flicker-progress mode=%s exact=%u/%u black=%u guest_one_frame_returns=%u\n",
                    wide ? "wide398" : "native256", checked, limit, black, returned);
                fflush(stdout);
            }
        }
        const unsigned reused_images = simcity_prepared_video_reused_images(video);
        simcity_prepared_video_close(video);
        const uint64_t clocks = simcity_recomp_master_clock(game) - clock_start;
        if (!simcity_recomp_audio_static_status(game, &audio_status)) goto done;
        printf("stock-flicker width=%u exact=%u/%u black=%u image_changes=%u guest_one_frame_returns=%u pcm=%llu hash=%016llX guest_master_ticks=%llu image_sequence=%016llX\n",
            wide ? SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH, checked, limit,
            black, changed, returned, (unsigned long long)audio.frames, (unsigned long long)audio.hash,
            (unsigned long long)clocks, (unsigned long long)image_sequence);
        if (checked == limit && checked && qpc.QuadPart > 0)
            printf("stock-flicker-submit width=%u samples=%u mean_us=%.2f peak_us=%.2f unpaced=1\n",
                   wide ? SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH, checked,
                   1000000.0 * (double)submit_ticks / ((double)qpc.QuadPart * checked),
                   1000000.0 * (double)submit_peak / (double)qpc.QuadPart);
        printf("stock-flicker-reuse width=%u reused_images=%u checked=%u\n",
               wide ? SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH,
               reused_images, checked);
        /* A black frame in both paths can be an intentional guest
           transition in a long tape; the short city fixture expects none. */
        if (checked != limit || !changed || (!full_tape && black) ||
            audio.modeled_underruns || audio.modeled_overflows || audio_status.pcm_overflows ||
            simcity_recomp_audio_dropped_frames(game)) goto done;
        if (!wide) { pcm_reference = audio.hash; clock_reference = clocks; pcm_frames_reference = audio.frames; }
        else if (audio.hash != pcm_reference || clocks != clock_reference || audio.frames != pcm_frames_reference) goto done;
    }
    ok = 1;
done:
    printf("stock-flicker-comparison pass=%d unpaced=1 visible_launcher=0 %s\n", ok, error);
    fflush(stdout);
    stock_controller_tape_clear(&tape);
    free(bytes);
    return ok;
}

/* An experimental split guest-step checkpoint may publish an already
   rendered frame without reading the in-progress guest. The ordinary
   timer path and the experimental checkpoint share one presentation clock. */
typedef struct PacedOffscreen {
    HDC dc;
    HBITMAP bitmap;
    HGDIOBJ old;
    void *pixels;
    uint64_t peak_ticks, total_ticks, last_blit_start, last_blit_end;
    unsigned frames, width, height;
    int cached_scale;
    SimCityScaledDib scale;
} PacedOffscreen;

static void paced_offscreen_close(PacedOffscreen *p) {
    simcity_scaled_dib_close(&p->scale);
    if (p->old) SelectObject(p->dc, p->old);
    if (p->bitmap) DeleteObject(p->bitmap);
    if (p->dc) DeleteDC(p->dc);
    memset(p, 0, sizeof(*p));
}

static int paced_offscreen_open(PacedOffscreen *p, unsigned width, unsigned height) {
    BITMAPINFO info = {0};
    info.bmiHeader.biSize = sizeof(info.bmiHeader);
    info.bmiHeader.biWidth = (LONG)width;
    info.bmiHeader.biHeight = -(LONG)height;
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    p->dc = CreateCompatibleDC(NULL);
    if (!p->dc) return 0;
    p->bitmap = CreateDIBSection(p->dc, &info, DIB_RGB_COLORS, &p->pixels, NULL, 0);
    if (!p->bitmap || !p->pixels) return 0;
    p->old = SelectObject(p->dc, p->bitmap);
    p->width = width;
    p->height = height;
    return p->old != NULL;
}

static int paced_offscreen_draw(PacedOffscreen *p, SimCityPreparedVideo *video) {
    if (!p) return 1;
    RECT area = {0, 0, (LONG)p->width, (LONG)p->height};
    unsigned width = 0u;
    const uint32_t *pixels = simcity_prepared_video_pixels(video, &width);
    const uint64_t start = paced_ticks();
    if (!simcity_win32_frame_blit_with_cache(p->dc, &area, pixels, width,
            width == SIMCITY_RECOMP_WIDESCREEN_WIDTH, 0, p->cached_scale ? &p->scale : NULL) ||
        !GdiFlush()) return 0;
    p->last_blit_start = start;
    p->last_blit_end = paced_ticks();
    const uint64_t elapsed = p->last_blit_end - start;
    if (elapsed > p->peak_ticks) p->peak_ticks = elapsed;
    p->total_ticks += elapsed;
    ++p->frames;
    return 1;
}

typedef struct PacedAudioFault {
    uint32_t frame;
    const char *phase;
    uint64_t slot, queue, demand, delivered, missing;
    unsigned overflow;
} PacedAudioFault;

typedef struct PacedGuestTiming {
    uint32_t frame;
    uint64_t completed, submitted;
    int submit_result;
} PacedGuestTiming;

typedef struct PacedVideoFault {
    uint64_t slot, merged, nominal, cutoff, observed, ready, paint_done, action_gap;
    uint64_t blit_start, blit_end, next_deadline;
    uint32_t target, shown, guest, target_bias, previous;
    PacedGuestTiming timing;
    int guest_active, late_paint;
    const char *source;
    SimCityRenderStatus worker;
} PacedVideoFault;

typedef struct PacedPreparedCheckpoint {
    SimCityPreparedVideo *video;
    SimCityPresentationClock *clock;
    uint64_t stop, origin, frequency;
    uint64_t *slot_count, *merged, *peak_dispatch_lag;
    unsigned *drawn, *repeated, *exact, *late_ready, *late_dispatch, *late_draws;
    uint32_t *last_drawn;
    unsigned polls, serviced, target_misses;
    int failed;
    PacedOffscreen *offscreen;
    PacedAudio *streamed;
    WorldProbe *pcm;
    uint64_t audio_start, audio_produced;
    uint32_t target_bias;
    uint64_t last_bad_slot;
    uint64_t audio_submit_ticks;
    unsigned log_audio_faults, audio_fault_rows, emitted_audio_fault_rows;
    PacedAudioFault audio_fault[24];
    PacedAudio shadow_audio[2];
    uint64_t shadow_audio_start[2];
    unsigned log_video_faults, video_fault_count, video_fault_rows;
    uint32_t guest_finished;
    int guest_active;
    uint64_t action_gap;
    PacedGuestTiming guest_timing[16];
    PacedVideoFault video_fault[48];
} PacedPreparedCheckpoint;

static void paced_checkpoint_video_fault(PacedPreparedCheckpoint *p, uint64_t index,
    uint64_t skipped, uint64_t nominal, uint64_t cutoff, uint64_t ready,
    uint64_t paint_done, uint32_t target, uint32_t shown, uint32_t previous, uint32_t bias, int late_paint,
    const char *source) {
    ++p->video_fault_count;
    if (p->video_fault_rows >= sizeof(p->video_fault) / sizeof(p->video_fault[0])) return;
    const PacedGuestTiming timing = p->guest_timing[target % 16u];
    p->video_fault[p->video_fault_rows++] = (PacedVideoFault){index, skipped, nominal,
        cutoff, paced_ticks(), ready, paint_done, p->action_gap,
        paint_done && p->offscreen ? p->offscreen->last_blit_start : 0u,
        paint_done && p->offscreen ? p->offscreen->last_blit_end : 0u,
        p->clock->deadline, target, shown,
        p->guest_finished, bias, previous, timing.frame == target ? timing : (PacedGuestTiming){0},
        p->guest_active, late_paint, source, simcity_prepared_video_status(p->video, target)};
}

static long long paced_offset_us(uint64_t tick, uint64_t origin, uint64_t frequency) {
    return tick >= origin ? (long long)(1000000.0 * (double)(tick - origin) / frequency) :
        -(long long)(1000000.0 * (double)(origin - tick) / frequency);
}

static void paced_checkpoint_print_video_faults(const PacedPreparedCheckpoint *p) {
    for (unsigned i = 0u; i < p->video_fault_rows; ++i) {
        const PacedVideoFault *f = &p->video_fault[i];
        printf("stock-live-video-fault slot=%llu merged=%llu target=%u shown=%u guest_finished=%u guest_active=%d bias=%u previous=%u already_presented=%d action_gap_us=%lld cutoff_us=%lld observed_us=%lld core_known=%d core_us=%lld submit_result=%d submit_us=%lld ready_known=%d ready_us=%lld paint_known=%d paint_us=%lld late_paint=%d source=%s blit_known=%d blit_start_us=%lld blit_end_us=%lld next_deadline_us=%lld worker_stage=%s worker_start_known=%d worker_start_us=%lld worker_finish_known=%d worker_finish_us=%lld\n",
            (unsigned long long)f->slot, (unsigned long long)f->merged, f->target, f->shown,
            f->guest, f->guest_active, f->target_bias, f->previous, f->target <= f->previous,
            paced_offset_us(f->action_gap, 0u, p->frequency),
            paced_offset_us(f->cutoff, f->nominal, p->frequency),
            paced_offset_us(f->observed, f->nominal, p->frequency), f->timing.frame != 0u,
            f->timing.completed ? paced_offset_us(f->timing.completed, f->nominal, p->frequency) : 0,
            f->timing.submit_result,
            f->timing.submitted ? paced_offset_us(f->timing.submitted, f->nominal, p->frequency) : 0,
            f->ready != 0u, f->ready ? paced_offset_us(f->ready, f->nominal, p->frequency) : 0,
            f->paint_done != 0u, f->paint_done ? paced_offset_us(f->paint_done, f->nominal, p->frequency) : 0,
            f->late_paint, f->source, f->blit_start != 0u,
            f->blit_start ? paced_offset_us(f->blit_start, f->nominal, p->frequency) : 0,
            f->blit_end ? paced_offset_us(f->blit_end, f->nominal, p->frequency) : 0,
            paced_offset_us(f->next_deadline, f->nominal, p->frequency),
            simcity_prepared_video_stage_name(f->worker.stage), f->worker.started != 0u,
            f->worker.started ? paced_offset_us(f->worker.started, f->nominal, p->frequency) : 0,
            f->worker.finished != 0u,
            f->worker.finished ? paced_offset_us(f->worker.finished, f->nominal, p->frequency) : 0);
    }
    printf("stock-live-video-fault-summary observed=%u logged=%u\n", p->video_fault_count, p->video_fault_rows);
}

static void paced_checkpoint_audio_feed(PacedPreparedCheckpoint *p, SimCityRecomp *game,
                                        uint64_t tick, uint64_t frames, const char *phase) {
    PacedAudio *audio = p->streamed;
    const uint64_t elapsed = tick > p->audio_start ? tick - p->audio_start : 0u;
    if (p->shadow_audio_start[0]) {
        for (unsigned i = 0u; i < 2u; ++i) {
            const uint64_t start = p->shadow_audio_start[i];
            paced_audio_feed(&p->shadow_audio[i], tick > start ? tick - start : 0u, p->frequency, frames);
        }
    }
    if (!p->log_audio_faults || p->audio_fault_rows >= sizeof(p->audio_fault) / sizeof(p->audio_fault[0])) {
        paced_audio_feed(audio, elapsed, p->frequency, frames);
        return;
    }
    const uint64_t before_queue = audio->queue, before_cursor = audio->consumed;
    const uint64_t before_missing = audio->missing_frames;
    const unsigned before_overflows = audio->overflows;
    paced_audio_feed(audio, elapsed, p->frequency, frames);
    if (audio->missing_frames != before_missing || audio->overflows != before_overflows)
        p->audio_fault[p->audio_fault_rows++] = (PacedAudioFault){
            simcity_recomp_current_frame(game), phase, *p->slot_count, before_queue,
            audio->consumed - before_cursor, frames, audio->missing_frames - before_missing,
            audio->overflows != before_overflows};
}

static void paced_checkpoint_print_audio_faults(PacedPreparedCheckpoint *p) {
    while (p->emitted_audio_fault_rows < p->audio_fault_rows) {
        const PacedAudioFault *fault = &p->audio_fault[p->emitted_audio_fault_rows++];
        printf("stock-live-audio-fault frame=%u phase=%s slot=%llu queued_before=%llu demand_pcm=%llu delivered_pcm=%llu missing_pcm=%llu overflow=%u\n",
            fault->frame, fault->phase, (unsigned long long)fault->slot,
            (unsigned long long)fault->queue, (unsigned long long)fault->demand,
            (unsigned long long)fault->delivered, (unsigned long long)fault->missing, fault->overflow);
    }
}

static void paced_prepared_checkpoint(SimCityRecomp *game, void *opaque) {
    PacedPreparedCheckpoint *p = opaque;
    if (p->failed) return;
    /* The guest callback can run several dozen times per frame. No
       allocator, no presentation render, and no device API at this point. */
    ++p->polls;
    uint64_t now = paced_ticks();
    /* Match the launcher's ordering: make the samples produced so far
       available to the model before drawing an immutable guest image. */
    if (p->streamed && simcity_recomp_audio_available(game)) {
        const uint64_t submit_start = now;
        if (!drain_pcm(game, &p->pcm->hash, &p->pcm->frames)) { p->failed = 1; return; }
        now = paced_ticks();
        /* Deliver the PCM at the end of the drain, not retroactively at
           its start. Then use a fresh cutoff for image selection, just
           as the launcher checks QPC after pumping the device. */
        const uint64_t tick = now < p->stop ? now : p->stop;
        paced_checkpoint_audio_feed(p, game, tick, p->pcm->frames - p->audio_produced, "checkpoint");
        p->audio_produced = p->pcm->frames;
        now = paced_ticks();
        p->audio_submit_ticks += now - submit_start;
    }
    if (now < p->clock->deadline || now >= p->stop) return;
    const uint64_t slots = simcity_presentation_consume(p->clock, now);
    if (!slots) return;
    *p->merged += slots - 1u;
    *p->slot_count += slots;
    const uint64_t index = *p->slot_count - 1u;
    const uint64_t nominal = p->origin + simcity_prepared_deadline(index, p->frequency);
    const uint64_t lag = now > nominal ? now - nominal : 0u;
    if (lag > *p->peak_dispatch_lag) *p->peak_dispatch_lag = lag;
    *p->late_dispatch += lag > p->frequency / (4u * SIMCITY_HOST_PRESENT_HZ);
    const uint32_t target = simcity_prepared_biased_target(index, p->target_bias);
    uint32_t shown_frame = 0u;
    uint64_t ready = 0u;
    const uint32_t previous = p->log_video_faults ? simcity_prepared_video_last_presented(p->video) : 0u;
    const int shown = simcity_prepared_video_present(p->video, target, now, &shown_frame, &ready);
    if (!shown) { p->failed = 1; return; }
    ++p->serviced;
    p->target_misses += shown != 2 || shown_frame != target;
    if (slots > 1u || shown != 2 || shown_frame != target) p->last_bad_slot = index + 1u;
    if (shown == 1 || shown_frame == *p->last_drawn) {
        ++*p->repeated;
        if (p->log_video_faults)
            paced_checkpoint_video_fault(p, index, slots - 1u, nominal, now,
                simcity_prepared_video_queued_ready_tick(p->video, target), 0u, target, 0u,
                previous, p->target_bias, 0, "checkpoint");
        return;
    }
    *p->exact += shown_frame == target;
    *p->late_ready += shown_frame == target && ready > nominal;
    if (!paced_offscreen_draw(p->offscreen, p->video)) { p->failed = 1; return; }
    const uint64_t paint_done = paced_ticks();
    const int late_paint = simcity_presentation_paint_late(paint_done, p->clock->deadline);
    if (late_paint) {
        ++*p->late_draws;
        p->last_bad_slot = index + 1u;
    }
    if (p->log_video_faults && (slots > 1u || shown_frame != target || late_paint))
        paced_checkpoint_video_fault(p, index, slots - 1u, nominal, now, shown_frame == target ? ready :
            simcity_prepared_video_queued_ready_tick(p->video, target), paint_done, target, shown_frame,
            previous, p->target_bias, late_paint, "checkpoint");
    *p->last_drawn = shown_frame;
    ++*p->drawn;
}

typedef struct LiveGuestRebase {
    uint32_t frame;
    unsigned guest;
    uint64_t slots, overdue_ticks, skipped, queued, missing;
} LiveGuestRebase;

typedef struct LiveActionGap {
    uint32_t frame;
    unsigned completed_guest, underruns, cycles_valid;
    uint64_t ticks, slots, thread_cycles;
} LiveActionGap;

typedef struct LiveConstruction {
    HANDLE timer;
    SimCityPreparedVideo *video;
    PacedOffscreen screen;
    SimCityPresentationClock clock;
    PacedPreparedCheckpoint checkpoint;
    PacedAudio sound;
    uint64_t frequency, base, fraction, next_guest, begin, blit_before;
    uint64_t stream_before, thread_cycles_before;
    uint64_t start_qpc, start_master, last_master, last_step_return, max_between_actions;
    uint64_t last_return_cycles;
    uint32_t remainder, last_drawn;
    uint64_t slots, merged, peak_dispatch, peak_no_blit;
    uint64_t peak_no_blit_no_stream, sampled_cycles, peak_wall_thread_cycles;
    uint64_t submit_ticks, peak_submit_ticks;
    unsigned guest, exact, drawn, repeated, late_ready, late_dispatch, late_draws;
    unsigned rebases, queue_full, no_blit_over, no_blit_over_present, action_gaps_over_two_frames;
    unsigned cycle_samples, no_blit_no_stream_over, submit_samples, core_and_submit_over;
    unsigned rebase_rows, emitted_rebase_rows;
    LiveGuestRebase rebase_log[24];
    unsigned action_gap_rows, action_gaps_over_one_frame;
    LiveActionGap action_gaps[32];
} LiveConstruction;
static LiveConstruction live_construction;
static int live_construction_shadow_audio;

static void live_construction_print_rebases(LiveConstruction *l) {
    while (l->emitted_rebase_rows < l->rebase_rows) {
        const LiveGuestRebase *r = &l->rebase_log[l->emitted_rebase_rows++];
        printf("stock-live-guest-rebase frame=%u guest=%u slots=%llu overdue_us=%llu skipped_deadlines=%llu queued_pcm=%llu total_missing_pcm=%llu\n",
               r->frame, r->guest, (unsigned long long)r->slots,
               (unsigned long long)(1000000.0 * (double)r->overdue_ticks / (double)l->frequency),
               (unsigned long long)r->skipped, (unsigned long long)r->queued,
               (unsigned long long)r->missing);
    }
}

static void live_construction_print_audio_margin(const LiveConstruction *l) {
    static const unsigned delays[] = {45u, 90u};
    if (!live_construction_shadow_audio) return;
    for (unsigned i = 0u; i < 2u; ++i) {
        const PacedAudio *a = &l->checkpoint.shadow_audio[i];
        printf("stock-live-audio-margin source=modeled startup_delay_ms=%u guest=%u underruns=%u missing_pcm=%llu overflows=%u queued_now=%llu\n",
               delays[i], l->guest, a->underruns, (unsigned long long)a->missing_frames,
               a->overflows, (unsigned long long)a->queue);
    }
}

static int live_construction_before(SimCityRecomp *game, WorldProbe *audio) {
    LiveConstruction *l = &live_construction;
    if (l->last_step_return) {
        const uint64_t gap = paced_ticks() - l->last_step_return;
        l->checkpoint.action_gap = gap;
        if (gap > l->max_between_actions) l->max_between_actions = gap;
        if (gap > 2u * l->base) ++l->action_gaps_over_two_frames;
        if (gap > l->base) {
            ++l->action_gaps_over_one_frame;
            if (l->action_gap_rows < sizeof(l->action_gaps) / sizeof(l->action_gaps[0])) {
                const uint64_t end_cycles = gameplay_thread_cycles();
                const unsigned valid = end_cycles != UINT64_MAX && l->last_return_cycles != UINT64_MAX &&
                                       end_cycles >= l->last_return_cycles;
                l->action_gaps[l->action_gap_rows++] = (LiveActionGap){
                    simcity_recomp_current_frame(game), l->guest, l->sound.underruns, valid, gap, l->slots,
                    valid ? end_cycles - l->last_return_cycles : 0u};
            }
        }
    }
    if (!l->timer) {
        LARGE_INTEGER qpc;
        char error[256] = {0};
        if (!simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
            simcity_recomp_frame_width(game) != SIMCITY_RECOMP_WIDESCREEN_WIDTH) {
            fprintf(stderr, "Live construction widescreen setup failed: %s\n", error);
            return 0;
        }
        if (!QueryPerformanceFrequency(&qpc) || qpc.QuadPart <= 0) return 0;
        l->frequency = (uint64_t)qpc.QuadPart;
        const uint64_t scaled = l->frequency * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
        l->base = scaled / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
        l->fraction = scaled % SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
        l->timer = CreateWaitableTimerExW(NULL, NULL, CREATE_WAITABLE_TIMER_HIGH_RESOLUTION,
                                         TIMER_ALL_ACCESS);
        if (!l->timer) l->timer = CreateWaitableTimerW(NULL, FALSE, NULL);
        l->video = simcity_prepared_video_open();
        if (!l->timer || !l->video || !paced_offscreen_open(&l->screen, 1920u, 1080u)) return 0;
        const uint64_t start = paced_ticks();
        l->start_qpc = start;
        l->start_master = simcity_recomp_master_clock(game);
        l->last_master = l->start_master;
        const uint64_t first_present = start + 3u * l->base;
        l->next_guest = start;
        l->last_drawn = UINT32_MAX;
        simcity_presentation_reset(&l->clock, first_present, l->frequency);
        l->checkpoint = (PacedPreparedCheckpoint){l->video, &l->clock, UINT64_MAX, first_present,
            l->frequency, &l->slots, &l->merged, &l->peak_dispatch, &l->drawn, &l->repeated,
            &l->exact, &l->late_ready, &l->late_dispatch, &l->late_draws, &l->last_drawn,
            0u, 0u, 0u, 0, &l->screen, &l->sound, audio, first_present, audio->frames, 0u, 0u, 0u};
        l->checkpoint.log_audio_faults = 1u;
        l->checkpoint.log_video_faults = 1u;
        if (live_construction_shadow_audio) {
            l->checkpoint.shadow_audio_start[0] = start + 45u * l->frequency / 1000u;
            l->checkpoint.shadow_audio_start[1] = start + 90u * l->frequency / 1000u;
        }
        printf("stock-live-construction start native_clock=1 presentation_hz=60 visible_launcher=0 width=%u\n",
               simcity_recomp_frame_width(game));
        fflush(stdout);
    }
    for (;;) {
        paced_prepared_checkpoint(game, &l->checkpoint);
        if (l->checkpoint.failed) return 0;
        const uint64_t now = paced_ticks();
        if (now >= l->next_guest) {
            l->checkpoint.guest_active = 1;
            l->begin = now;
            l->blit_before = l->screen.total_ticks;
            l->stream_before = l->checkpoint.audio_submit_ticks;
            l->thread_cycles_before = gameplay_thread_cycles();
            return 1;
        }
        const uint64_t wake = l->clock.deadline < l->next_guest ? l->clock.deadline : l->next_guest;
        if (!paced_wait(l->timer, wake, l->frequency)) return 0;
    }
}

static int live_construction_advance(SimCityRecomp *game, uint16_t input,
                                     SimCityRecompFrameResult *result) {
    return simcity_recomp_advance_streamed_headless(game, input, 1u, paced_prepared_checkpoint,
               &live_construction.checkpoint, result) && !live_construction.checkpoint.failed;
}

static int live_construction_after(SimCityRecomp *game, WorldProbe *audio) {
    LiveConstruction *l = &live_construction;
    const uint64_t now = paced_ticks(), draw = l->screen.total_ticks - l->blit_before;
    l->checkpoint.guest_active = 0;
    const uint64_t cycles = gameplay_thread_cycles();
    const int sampled = cycles != UINT64_MAX && l->thread_cycles_before != UINT64_MAX &&
                        cycles >= l->thread_cycles_before;
    const uint64_t cycle_delta = sampled ? cycles - l->thread_cycles_before : 0u;
    const uint64_t elapsed = now - l->begin;
    const uint64_t no_blit = elapsed >= draw ? elapsed - draw : 0u;
    const uint64_t streaming = l->checkpoint.audio_submit_ticks - l->stream_before;
    const uint64_t no_blit_no_stream = no_blit >= streaming ? no_blit - streaming : 0u;
    if (sampled) {
        l->sampled_cycles += cycle_delta;
        ++l->cycle_samples;
    }
    if (no_blit > l->peak_no_blit) {
        l->peak_no_blit = no_blit;
        l->peak_wall_thread_cycles = cycle_delta;
    }
    if (no_blit_no_stream > l->peak_no_blit_no_stream) l->peak_no_blit_no_stream = no_blit_no_stream;
    l->no_blit_over += no_blit > l->frequency / (2u * SIMCITY_HOST_PRESENT_HZ);
    l->no_blit_over_present += no_blit > l->frequency / SIMCITY_HOST_PRESENT_HZ;
    l->no_blit_no_stream_over += no_blit_no_stream > l->frequency / (2u * SIMCITY_HOST_PRESENT_HZ);
    paced_checkpoint_audio_feed(&l->checkpoint, game, now,
                                 audio->frames - l->checkpoint.audio_produced, "frame_end");
    l->checkpoint.audio_produced = audio->frames;
    l->last_master = simcity_recomp_master_clock(game);
    const uint64_t submit_begin = paced_ticks();
    const int submitted = simcity_prepared_video_submit(l->video, game, ++l->guest);
    const uint64_t submit_end = paced_ticks();
    const uint64_t submit_elapsed = submit_end - submit_begin;
    l->checkpoint.guest_finished = l->guest;
    l->checkpoint.guest_timing[l->guest % 16u] = (PacedGuestTiming){l->guest, now, submit_end, submitted};
    if (!submitted) return 0;
    l->queue_full += submitted == 2;
    if (submitted == 1) {
        ++l->submit_samples;
        l->submit_ticks += submit_elapsed;
        if (submit_elapsed > l->peak_submit_ticks) l->peak_submit_ticks = submit_elapsed;
        l->core_and_submit_over += no_blit_no_stream + submit_elapsed >
            l->frequency / (2u * SIMCITY_HOST_PRESENT_HZ);
    }
    l->next_guest += l->base;
    l->remainder += (uint32_t)l->fraction;
    if (l->remainder >= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR) {
        ++l->next_guest;
        l->remainder -= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
    }
    const uint64_t old_deadline = l->next_guest;
    const uint64_t skipped = simcity_guest_limit_debt(now, l->base, &l->next_guest, &l->remainder);
    if (skipped) {
        ++l->rebases;
        if (l->rebase_rows < sizeof(l->rebase_log) / sizeof(l->rebase_log[0])) {
            l->rebase_log[l->rebase_rows++] = (LiveGuestRebase){simcity_recomp_current_frame(game),
                l->guest, l->slots, now - old_deadline, skipped, l->sound.queue, l->sound.missing_frames};
        }
        l->checkpoint.target_bias = simcity_prepared_recovery_bias(l->slots, l->guest,
                                         3u, l->checkpoint.target_bias);
    }
    if (l->guest % 1800u == 0u) {
        paced_checkpoint_print_audio_faults(&l->checkpoint);
        live_construction_print_rebases(l);
        live_construction_print_audio_margin(l);
        printf("stock-live-construction-progress guest=%u slots=%llu exact=%u repeated=%u merged=%llu rebases=%u no_blit_over_8_33ms=%u underruns=%u overflows=%u guest_master_ticks=%llu missing_pcm=%llu no_blit_over_16_67ms=%u peak_no_blit_us=%llu late_draws=%u queue_full=%u checkpoint_failed=%d late_ready=%u late_dispatch=%u\n",
            l->guest, (unsigned long long)l->slots, l->exact, l->repeated,
            (unsigned long long)l->merged, l->rebases, l->no_blit_over,
            l->sound.underruns, l->sound.overflows, (unsigned long long)(l->last_master - l->start_master),
            (unsigned long long)l->sound.missing_frames, l->no_blit_over_present,
            (unsigned long long)(1000000.0 * (double)l->peak_no_blit / (double)l->frequency),
            l->late_draws, l->queue_full, l->checkpoint.failed, l->late_ready, l->late_dispatch);
        printf("stock-live-guest-work guest=%u cycles_samples=%u mean_scheduled_cycles=%llu peak_no_blit_frame_scheduled_cycles=%llu no_blit_no_stream_over_8_33ms=%u peak_no_blit_no_stream_us=%llu submit_samples=%u submit_mean_us=%llu submit_peak_us=%llu core_and_submit_over_8_33ms=%u\n",
            l->guest, l->cycle_samples,
            (unsigned long long)(l->cycle_samples ? l->sampled_cycles / l->cycle_samples : 0u),
            (unsigned long long)l->peak_wall_thread_cycles, l->no_blit_no_stream_over,
            (unsigned long long)(1000000.0 * (double)l->peak_no_blit_no_stream / (double)l->frequency),
            l->submit_samples,
            (unsigned long long)(l->submit_samples ? 1000000.0 * (double)l->submit_ticks /
                ((double)l->frequency * l->submit_samples) : 0.0),
            (unsigned long long)(1000000.0 * (double)l->peak_submit_ticks / (double)l->frequency),
            l->core_and_submit_over);
        fflush(stdout);
    }
    l->last_return_cycles = gameplay_thread_cycles();
    l->last_step_return = paced_ticks();
    return !l->checkpoint.failed;
}

static int live_construction_close(void) {
    LiveConstruction *l = &live_construction;
    const uint64_t actual = l->last_master - l->start_master;
    const uint64_t expected = (uint64_t)l->guest * SIMCITY_RECOMP_NTSC_AVERAGE_MASTER_CLOCKS_PER_FRAME;
    const uint64_t clock_error = actual > expected ? actual - expected : expected - actual;
    const double ms_per_tick = l->frequency ? 1000.0 / (double)l->frequency : 0.0;
    const double active_seconds = l->last_step_return
        ? (double)(l->last_step_return - l->start_qpc) * ms_per_tick / 1000.0 : 0.0;
    const int pass = l->guest && l->slots && l->exact == l->slots && clock_error <= 128u &&
        !l->repeated && !l->merged && !l->late_draws && !l->rebases && !l->queue_full &&
        !l->sound.underruns && !l->sound.overflows && !l->checkpoint.failed;
    paced_checkpoint_print_audio_faults(&l->checkpoint);
    live_construction_print_rebases(l);
    live_construction_print_audio_margin(l);
    if (l->checkpoint.log_video_faults && l->frequency) paced_checkpoint_print_video_faults(&l->checkpoint);
    for (unsigned i = 0u; i < l->action_gap_rows; ++i) {
        const LiveActionGap *gap = &l->action_gaps[i];
        printf("stock-live-action-gap completed_guest=%u frame=%u gap_ms=%.2f display_slots=%llu audio_underruns_before=%u cycles_valid=%u thread_cycles=%llu\n",
            gap->completed_guest, gap->frame, gap->ticks * ms_per_tick,
            (unsigned long long)gap->slots, gap->underruns, gap->cycles_valid,
            (unsigned long long)gap->thread_cycles);
    }
    printf("stock-live-action-gap-summary observed=%u logged=%u\n",
        l->action_gaps_over_one_frame, l->action_gap_rows);
    printf("stock-live-construction-end timing_pass=%d guest=%u slots=%llu exact=%u repeated=%u merged=%llu rebases=%u underruns=%u overflows=%u no_blit_over_8_33ms=%u missing_pcm=%llu no_blit_over_16_67ms=%u peak_no_blit_us=%llu late_draws=%u queue_full=%u checkpoint_failed=%d late_ready=%u late_dispatch=%u\n",
        pass, l->guest, (unsigned long long)l->slots, l->exact, l->repeated,
        (unsigned long long)l->merged, l->rebases, l->sound.underruns, l->sound.overflows, l->no_blit_over,
        (unsigned long long)l->sound.missing_frames, l->no_blit_over_present,
        (unsigned long long)((double)l->peak_no_blit * ms_per_tick * 1000.0),
        l->late_draws, l->queue_full, l->checkpoint.failed, l->late_ready, l->late_dispatch);
    printf("stock-live-construction-attribution measured_seconds=%.3f guest_master_ticks=%llu clock_error_ticks=%llu peak_no_blit_ms=%.2f max_between_actions_ms=%.2f action_gaps_over_two_frames=%u\n",
        active_seconds, (unsigned long long)actual, (unsigned long long)clock_error,
        (double)l->peak_no_blit * ms_per_tick, (double)l->max_between_actions * ms_per_tick,
        l->action_gaps_over_two_frames);
    simcity_prepared_video_close(l->video);
    paced_offscreen_close(&l->screen);
    if (l->timer) CloseHandle(l->timer);
    memset(l, 0, sizeof(*l));
    live_construction_enabled = 0;
    return pass;
}

enum { STOCK_FULL_TOUR_NEUTRAL_FRAMES = 5400, STOCK_FULL_TOUR_SECONDS = 140 };

static uint16_t stock_paced_input(SimCityRecomp *game, int map_choice, unsigned frame) {
    static const uint16_t directions[] = {
        SIMCITY_INPUT_RIGHT, SIMCITY_INPUT_DOWN, SIMCITY_INPUT_LEFT, SIMCITY_INPUT_UP
    };
    if (map_choice == 11 || (map_choice >= 26 && map_choice <= 28)) return 0u;
    if (map_choice == 21) {
        uint16_t notice = 0u, budget = 0u, focus = 0u, x = 0u, y = 0u;
        if (!read_wram16(game, 0x0395u, &notice) ||
            !read_wram16(game, 0x0dc3u, &budget) ||
            !read_wram16(game, 0x0201u, &focus)) return 0u;
        /* Real controller taps with release intervals: dismiss notices and
           accept the native budget figures without changing any rates. */
        if (notice) return frame % 36u < 8u ? SIMCITY_INPUT_B : 0u;
        if (budget == UINT16_MAX) {
            if (!read_wram16(game, 0x01ebu, &x) || !read_wram16(game, 0x01edu, &y) ||
                frame % 36u >= 8u) return 0u;
            return y < 200u ? SIMCITY_INPUT_DOWN : x < 72u ? SIMCITY_INPUT_RIGHT :
                   x > 187u ? SIMCITY_INPUT_LEFT : SIMCITY_INPUT_B;
        }
        if (focus != 0xffu) return 0u;
        /* Alternate sustained travel to the east and south with a shorter
           return leg; each loop also leaves time for normal city growth. */
        const unsigned leg = frame % 6300u;
        return leg < 1800u ? directions[0] : leg < 3600u ? directions[1] :
               leg < 4500u ? directions[2] : leg < 5400u ? directions[3] : 0u;
    }
    if (map_choice == 20) {
        /* Give native census, power and fire work the same input as
           the neutral power test before visiting the outer map. */
        if (frame < STOCK_FULL_TOUR_NEUTRAL_FRAMES) return 0u;
        uint16_t x, y;
        if (!read_wram16(game, 0x01bdu, &x) || !read_wram16(game, 0x01bfu, &y)) return 0u;
        /* A native notice takes focus; don't dismiss it in this
           fixture. Keep holding the same direction through expiry.
           A blocked input never advances the route to its next leg. */
        return (int16_t)x < 132 ? SIMCITY_INPUT_RIGHT :
               (int16_t)y < 112 ? SIMCITY_INPUT_DOWN : 0u;
    }
    if ((map_choice >= 14 && map_choice <= 19) || map_choice == 25) return 0u;
    if (map_choice == 23 || map_choice == 24) {
        uint16_t notice;
        return read_wram16(game, 0x0395u, &notice) && notice && frame % 36u < 8u ? SIMCITY_INPUT_B : 0u;
    }
    if (map_choice == 12 || map_choice == 13) return frame ? 0u : SIMCITY_INPUT_B;
    const unsigned step = frame % 1440u;
    return step % 360u < 300u ? directions[step / 360u] : 0u;
}

/* Diagnose the exact full-tour controller route without measuring FPS. */
static int stock_world_full_tour_route_audit(SimCityRecomp *game, const char *directory) {
    enum { PREFILL = 3, ROUTE_FRAMES = STOCK_FULL_TOUR_SECONDS * 60 };
    WorldProbe audio = {0};
    uint16_t old_focus = UINT16_MAX, old_notice = UINT16_MAX, old_budget = UINT16_MAX;
    int max_x = 0, max_y = 0;
    unsigned both = 0u;
    unsigned frames_executed = 0u, verified_outer = 0u;
    char path[4096], error[256] = {0};
    const int size = snprintf(path, sizeof(path), "%s/stock-world-full-before-power.scsnap", directory);
    if (size < 0 || (size_t)size >= sizeof(path) ||
        !simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
        !world_probe_step(game, &audio, 0u, PREFILL, 1, 0)) return 0;
    audio.hash = UINT64_C(1469598103934665603);
    for (unsigned i = 0u; i < ROUTE_FRAMES; ++i) {
        const uint16_t input = stock_paced_input(game, 20, i);
        uint16_t focus, notice, budget, speed, cx, cy, fx, fy, cursor_x, cursor_y;
        if (!world_probe_step(game, &audio, input, 1u, 1, 0) ||
            !read_wram16(game, 0x0201u, &focus) || !read_wram16(game, 0x0395u, &notice) ||
            !read_wram16(game, 0x0dc3u, &budget) || !read_wram16(game, 0x0193u, &speed) ||
            !read_wram16(game, 0x01bdu, &cx) || !read_wram16(game, 0x01bfu, &cy) ||
            !read_wram16(game, 0x0139u, &fx) || !read_wram16(game, 0x0137u, &fy) ||
            !read_wram16(game, 0x0205u, &cursor_x) || !read_wram16(game, 0x0207u, &cursor_y)) return 0;
        const int x = (int)(int16_t)cx * 8 + (int)(fx & 7u);
        const int y = (int)(int16_t)cy * 8 + (int)(fy & 7u);
        if (x > max_x) max_x = x;
        if (y > max_y) max_y = y;
        both += x >= 120 * 8 && y >= 100 * 8;
        frames_executed = i + 1u;
        if (i + 1u == STOCK_FULL_TOUR_NEUTRAL_FRAMES || i % 300u == 0u ||
            focus != old_focus || notice != old_notice || budget != old_budget) {
            SimCityRecompStockWorldSample s;
            if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &s)) return 0;
            printf("stock-full-tour-input frame=%u input=%04X camera=%d,%d cursor=%u,%u focus=%04X notice=%04X budget=%04X speed=%04X power=%u fire=%u\n",
                i + 1u, input, x, y, cursor_x, cursor_y, focus, notice, budget, speed, s.power_cycles, s.fire_cycles);
        }
        old_focus = focus; old_notice = notice; old_budget = budget;
        if (x >= 132 * 8 && y >= 112 * 8 && focus == 0xffu && !notice && !budget &&
            i >= STOCK_FULL_TOUR_NEUTRAL_FRAMES) {
            SimCityRecompStockWorldSample s;
            if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &s)) return 0;
            verified_outer = s.power_cycles && s.fire_cycles;
            if (verified_outer) break;
        }
    }
    printf("stock-full-tour-route-audit frames=%u max_camera=%d,%d beyond_both=%u complete=%u paced=0\n",
        frames_executed, max_x, max_y, both, verified_outer);
    return verified_outer && !audio.modeled_underruns && !audio.modeled_overflows &&
        !simcity_recomp_audio_dropped_frames(game);
}

static int stock_paced_fire_mask(SimCityRecomp *game, int world, unsigned x, unsigned y, uint64_t *mask) {
    *mask = 0u;
    for (int dy = -3; dy <= 3; ++dy)
        for (int dx = -3; dx <= 3; ++dx) {
            const int px = (int)x + dx, py = (int)y + dy;
            if (px < 0 || py < 0 || px >= (world ? 240 : 120) || py >= (world ? 200 : 100)) continue;
            uint16_t word;
            if (!(world ? simcity_recomp_stock_world_tile(game, (unsigned)px, (unsigned)py, &word) :
                          stock_tile_at(game, px, py, &word))) return 0;
            if ((word & 0x3fffu) == 0x7fu) *mask |= UINT64_C(1) << ((dy + 3) * 7 + dx + 3);
        }
    return 1;
}

/* Establish that this exact fire changes under native inputs even without
   any host throttling, drawing or audio queue model. No map edits or rate
   changes are made; a fire that doesn't move is reported as incomplete. */
static int stock_fire_native_reference(SimCityRecomp *game, const char *directory) {
    enum { LIMIT = 7200 };
    unsigned passed = 0u;
    for (int world = 0; world <= 1; ++world) {
        char path[4096], error[256] = {0};
        WorldProbe pcm = {0};
        SimCityRecompStockWorldSample begin = {0}, end = {0};
        uint16_t x, y, notice, speed_begin, speed_end, msg;
        unsigned first_change = 0u, frames = 0u;
        uint64_t previous, initial_clock;
        const char *tag = world ? "world" : "ordinary";
        snprintf(path, sizeof(path), "%s/stock-active-fire-%s.scsnap", directory, tag);
        int (*load)(SimCityRecomp *, const char *, char *, size_t) = world ?
            simcity_recomp_stock_world_open_snapshot : simcity_recomp_snapshot_load;
        if (!load(game, path, error, sizeof(error)) || !read_wram16(game, 0x0395u, &notice) || !notice ||
            !read_wram16(game, 0x0397u, &msg) || msg != 32u ||
            !read_wram16(game, 0x0400u, &x) || !read_wram16(game, 0x0402u, &y) ||
            !read_wram16(game, 0x0193u, &speed_begin)) return 0;
        x &= 255u;
        y &= 255u;
        if (!stock_paced_fire_mask(game, world, x, y, &previous) || !(previous & (UINT64_C(1) << 24)) ||
            (world && !simcity_recomp_stock_world_sample(game, x, y, &begin))) return 0;
        initial_clock = simcity_recomp_master_clock(game);
        pcm.hash = UINT64_C(1469598103934665603);
        for (frames = 0u; frames < LIMIT; ++frames) {
            const uint16_t input = frames < 3u ? 0u : stock_paced_input(game, world ? 23 : 24, frames - 3u);
            if (!world_probe_step(game, &pcm, input, 1u, 0, 0)) return 0;
            if ((frames + 1u) % 30u) continue;
            uint64_t burning;
            if (!stock_paced_fire_mask(game, world, x, y, &burning)) return 0;
            if (burning != previous) { first_change = ++frames; break; }
        }
        if (!read_wram16(game, 0x0395u, &notice) || !read_wram16(game, 0x0193u, &speed_end) ||
            (world && !simcity_recomp_stock_world_sample(game, x, y, &end))) return 0;
        printf("stock-fire-native-reference map=%s origin=(%u,%u) frames=%u first_change=%u notice_cleared=%u speed=%04X->%04X fire_cycles=%u->%u guest_master_ticks=%llu pcm=%llu hash=%016llX\n",
               tag, x, y, frames, first_change, !notice, speed_begin, speed_end, begin.fire_cycles,
               end.fire_cycles, (unsigned long long)(simcity_recomp_master_clock(game) - initial_clock),
               (unsigned long long)pcm.frames, (unsigned long long)pcm.hash);
        passed += first_change != 0u && !notice && speed_begin == speed_end;
    }
    return passed == 2u;
}

static int stock_moving_disaster_preflight(SimCityRecomp *game, int map_choice, unsigned prefill,
    unsigned flag_address, unsigned x_address, unsigned y_address) {
    WorldProbe audio = {0};
    uint16_t actor = 0u, x = 0u, y = 0u, before_x = 0u, before_y = 0u, notice = 0u;
    if (!world_probe_step(game, &audio, 0u, prefill, 0, 0) ||
        !read_wram16(game, flag_address, &actor) || !actor ||
        !read_wram16(game, x_address, &before_x) || !read_wram16(game, y_address, &before_y)) return 0;
    for (unsigned frame = 0u; frame < 300u; ++frame) {
        if (!world_probe_step(game, &audio, stock_paced_input(game, map_choice, frame), 1u, 0, 0) ||
            !read_wram16(game, flag_address, &actor) || !read_wram16(game, x_address, &x) ||
            !read_wram16(game, y_address, &y) || !read_wram16(game, 0x0395u, &notice)) return 0;
        if (!notice && actor && (x != before_x || y != before_y)) {
            printf("stock-disaster-movement-preflight case=%d frame=%u from=(%u,%u) to=(%u,%u)\n",
                map_choice, frame + 1u, before_x, before_y, x, y);
            return 1;
        }
    }
    fprintf(stderr, "Disaster preflight: notice=%u flag=%04X actor=(%u,%u), started at (%u,%u)\n",
        notice, actor, x, y, before_x, before_y);
    return 0;
}

static int stock_flood_preflight(SimCityRecomp *game, unsigned prefill) {
    WorldProbe audio = {0};
    uint16_t initial = 0u, timer = 0u, notice = 0u;
    if (!world_probe_step(game, &audio, 0u, prefill, 0, 0) ||
        !read_wram16(game, 0x0395u, &notice) || notice ||
        !read_wram16(game, 0x0c11u, &initial) || !initial) return 0;
    for (unsigned step = 1u; step <= 15u; ++step) {
        if (!world_probe_step(game, &audio, 0u, 60u, 0, 0) ||
            !read_wram16(game, 0x0c11u, &timer)) return 0;
        if (timer < initial) {
            printf("stock-flood-preflight frame=%u timer=%u->%u\n", step * 60u, initial, timer);
            return 1;
        }
    }
    fprintf(stderr, "Flood preflight: timer did not advance from %u\n", initial);
    return 0;
}

typedef struct StockPacedFingerprint {
    uint64_t clocks, instructions, wram, tiles, world_work, pcm_frames, pcm_hash;
} StockPacedFingerprint;

static int stock_paced_fingerprint(SimCityRecomp *game, const WorldProbe *pcm,
    StockPacedFingerprint *out) {
    enum { WRAM_BYTES = 128u * 1024u };
    uint8_t *wram = malloc(WRAM_BYTES);
    if (!wram) return 0;
    const int read = simcity_recomp_read_wram(game, 0u, wram, WRAM_BYTES);
    *out = (StockPacedFingerprint){simcity_recomp_master_clock(game),
        simcity_recomp_instruction_count(game), UINT64_C(1469598103934665603),
        0u, 0u, pcm->frames, pcm->hash};
    if (read) for (unsigned i = 0u; i < WRAM_BYTES; ++i)
        out->wram = (out->wram ^ wram[i]) * UINT64_C(1099511628211);
    free(wram);
    if (!read) return 0;
    if (simcity_recomp_stock_world_active(game)) {
        out->tiles = UINT64_C(1469598103934665603);
        out->world_work = UINT64_C(1469598103934665603);
        for (unsigned y = 0u; y < 200u; ++y) for (unsigned x = 0u; x < 240u; ++x) {
            uint16_t tile;
            if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) return 0;
            out->tiles = (out->tiles ^ tile) * UINT64_C(1099511628211);
        }
        /* All half-resolution overlay cells, plus the coarser planes and
           pass counters they expose. This runs after timing has stopped. */
        for (unsigned y = 0u; y < 200u; y += 2u) for (unsigned x = 0u; x < 240u; x += 2u) {
            SimCityRecompStockWorldSample work;
            if (!simcity_recomp_stock_world_sample(game, x, y, &work)) return 0;
            const uint32_t fields[] = {work.power_cycles, work.density_cycles, work.environment_cycles,
                work.crime_cycles, work.fire_cycles, work.census_visits, work.census_order_errors,
                work.power_order_errors, work.traffic_writes, work.traffic_west, work.traffic_east,
                (uint16_t)work.growth, work.traffic, work.land_value, work.pollution, work.density,
                work.crime, work.police, work.fire};
            for (unsigned f = 0u; f < sizeof(fields) / sizeof(fields[0]); ++f)
                out->world_work = (out->world_work ^ fields[f]) * UINT64_C(1099511628211);
        }
    }
    return 1;
}

static int stock_soak_infrastructure(SimCityRecomp *game, const char *phase, unsigned mode) {
    unsigned roads[4] = {0u}, rails[4] = {0u}, wires[4] = {0u}, energized[4] = {0u};
    for (unsigned y = 0u; y < TOUR_HEIGHT; ++y) for (unsigned x = 0u; x < TOUR_WIDTH; ++x) {
        uint16_t tile;
        if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) return 0;
        const unsigned district = (x >= TOUR_WIDTH / 2u ? 1u : 0u) |
                                  (y >= TOUR_HEIGHT / 2u ? 2u : 0u);
        roads[district] += tour_road_tile(tile) != 0;
        rails[district] += tour_rail_tile(tile) != 0;
        if (tour_power_tile(tile)) {
            ++wires[district];
            energized[district] += (tile & 0x8000u) != 0u;
        }
    }
    for (unsigned d = 0u; d < 4u; ++d)
        printf("stock-construction-soak-infrastructure mode=%s phase=%s quadrant=%u road_tiles=%u rail_tiles=%u wire_tiles=%u energized_wire_tiles=%u\n",
               mode ? "wide398" : "native256", phase, d, roads[d], rails[d], wires[d], energized[d]);
    return 1;
}

static int stock_world_paced_probe_widths(SimCityRecomp *game, const char *directory, int policy,
                                          int map_choice, unsigned duration, unsigned width_mask) {
    enum { AUDIO_PREFILL = 3, SUBMIT_HISTORY = 16 };
    LARGE_INTEGER counter_frequency;
    char path[4096], capture[4096], error[256] = {0};
    HANDLE timer, dispatch_task = NULL;
    SimCityPreparedVideo *video = NULL;
    PacedOffscreen screen = {0};
    StockControllerTape construction_tape = {0};
    int ok = 0, completed = 0, strict_pass = 1;
    const int legacy = policy == 1;
    const int original_lead = policy == 4;
    const int cached_scale = policy == 11;
    const int wake_guard = policy == 12;
    const int games_mmcss = policy == 13;
    const int overlap = policy == 8 || cached_scale || wake_guard || games_mmcss;
    const int recovery_test = policy == 9;
    const int unscaled_dib = policy == 10;
    const int offscreen = policy == 7 || overlap || recovery_test || unscaled_dib;
    const int extra_lead = policy == 6 || offscreen;
    const int cooperative = policy == 5 || extra_lead;
    const int strict = policy == 3 || original_lead || cooperative;
    const int prepared = policy == 2 || strict;
    const int construction_soak = map_choice == 21;
    const int construction_replay = map_choice == 22;
    const int full_tour = map_choice == 20 || construction_soak;
    const int full_power = map_choice == 11 || map_choice == 20;
    const int quake = map_choice == 12 || map_choice == 13;
    const int tornado = map_choice == 14 || map_choice == 15;
    const int monster = map_choice == 16 || map_choice == 17;
    const int flood = map_choice == 18 || map_choice == 19;
    const int fire = map_choice == 23 || map_choice == 24;
    const int plane = map_choice == 25;
    const char *overlay = map_choice == 26 ? "density" : map_choice == 27 ? "environment" :
        map_choice == 28 ? "crime" : NULL;
    const int timed_disaster = quake || flood;
    const int moving_disaster = tornado || monster;
    const int ordinary = map_choice == 1 || map_choice == 2 || map_choice == 7 || map_choice == 8 ||
        map_choice == 13 || map_choice == 15 || map_choice == 17 || map_choice == 19 || map_choice == 24;
    const char *event_name = quake ? "quake" : flood ? "flood" : fire ? "fire" : plane ? "plane" : tornado ? "tornado" : "monster";
    const unsigned timer_offset = flood ? 0x0c11u : 0x0c0fu;
    const unsigned actor_flag = monster ? 0x0a91u : 0x0a8bu;
    const unsigned actor_x = monster ? 0x0a51u : 0x0a59u;
    const unsigned actor_y = monster ? 0x0a4fu : 0x0a57u;
    const unsigned lead_frames = simcity_prepared_lead_frames(extra_lead || (!ordinary && !original_lead));
    const char *policy_name = recovery_test ? "prepared-cooperative-injected-stall" :
                              unscaled_dib ? "prepared-cooperative-offscreen-unscaled" :
                              cached_scale ? "prepared-cooperative-offscreen-overlap-cached-scale" :
                              wake_guard ? "prepared-cooperative-offscreen-overlap-wake-guard" :
                              games_mmcss ? "prepared-cooperative-offscreen-overlap-games-mmcss" :
                              overlap ? "prepared-cooperative-offscreen-overlap" :
                              offscreen ? "prepared-cooperative-offscreen" :
                              extra_lead ? "prepared-cooperative-three-frame" :
                              cooperative ? "prepared-cooperative" : original_lead ? "prepared-two-frame" :
                              prepared ? "prepared" : legacy ? "legacy" : "retain";
    const char *map_name = map_choice == 1 ? "city" : map_choice == 2 ? "scenario" :
                           map_choice == 3 ? "world-built" : map_choice == 4 ? "world-aged" :
                           map_choice == 5 ? "world-mixed" :
                           map_choice == 6 ? "world-mixed-development" :
                           map_choice == 7 ? "practice" : map_choice == 8 ? "freeland" :
                           map_choice == 9 ? "world-housing-shops" :
                           map_choice == 10 ? "world-full" :
                           construction_soak ? "world-construction-soak" :
                           construction_replay ? "world-construction-tape" :
                           full_tour ? "world-full-power-tour" :
                           map_choice == 11 ? "world-full-before-power" :
                           quake ? (ordinary ? "ordinary-quake" : "world-quake") :
                           flood ? (ordinary ? "ordinary-flood" : "world-flood") :
                           fire ? (ordinary ? "ordinary-fire" : "world-fire") :
                           map_choice == 26 ? "world-full-density" :
                           map_choice == 27 ? "world-full-environment" :
                           map_choice == 28 ? "world-full-crime" :
                           plane ? "world-plane" :
                           tornado ? (ordinary ? "ordinary-tornado" : "world-tornado") :
                           monster ? (ordinary ? "ordinary-monster" : "world-monster") : "world";
    unsigned seconds = duration ? duration : map_choice ? 15u : 30u;
    if (!QueryPerformanceFrequency(&counter_frequency) || counter_frequency.QuadPart <= 0)
        return 0;
    const uint64_t frequency = (uint64_t)counter_frequency.QuadPart;
    const uint64_t guest_base = frequency * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR /
                               SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
    const uint64_t guest_fraction = frequency * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR %
                                   SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
    if (!guest_base) return 0;
    timer = CreateWaitableTimerExW(NULL, NULL, CREATE_WAITABLE_TIMER_HIGH_RESOLUTION,
                                   TIMER_ALL_ACCESS);
    if (!timer) timer = CreateWaitableTimerW(NULL, FALSE, NULL);
    if (!timer) return 0;
    if (timed_disaster || moving_disaster || fire || plane) {
        snprintf(path, sizeof(path), "%s/stock-%s-%s-%s.scsnap", directory,
                 (moving_disaster || flood || plane) ? "running" : "active", event_name, ordinary ? "ordinary" : "world");
    } else if (construction_soak) {
        snprintf(path, sizeof(path), "%s/stock-world-construction-quadrants.scsnap", directory);
    } else if (construction_replay) {
        uint8_t *bytes = NULL;
        size_t count = 0u;
        snprintf(path, sizeof(path), "%s/stock-world-construction-input.scinput", directory);
        const int valid = read_file(path, &bytes, &count) &&
            stock_controller_tape_decode(&construction_tape, bytes, count);
        free(bytes);
        if (!valid || construction_tape.frames <= AUDIO_PREFILL) goto finish;
        /* The three prefill frames come from the tape itself. Round the
           wall-time window up to a second; neutral inputs are allowed
           only after every recorded construction frame has been played. */
        const uint64_t requested = (uint64_t)(construction_tape.frames - AUDIO_PREFILL) *
            SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
        seconds = (unsigned)((requested + SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR - 1u) /
                             SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR);
        snprintf(path, sizeof(path), "%s/stock-world-construction-input-start.scsnap", directory);
    } else if (overlay) {
        snprintf(path, sizeof(path), "%s/stock-world-full-before-%s.scsnap", directory, overlay);
    } else if (full_power) {
        snprintf(path, sizeof(path), "%s/stock-world-full-before-power.scsnap", directory);
    } else if (map_choice == 10) {
        snprintf(path, sizeof(path), "%s/stock-world-full-stress.scsnap", directory);
        if (!stock_world_make_full_fixture(game, directory, path, error, sizeof(error))) goto finish;
    } else if (map_choice && !ordinary) {
        snprintf(path, sizeof(path), "%s/stock-world-%s.scsnap", directory,
                 map_choice == 3 ? "buildings" : map_choice == 4 ? "aged" :
                 map_choice == 5 ? "mixed" : map_choice == 9 ? "housing-shops-partial" : "mixed-development");
    } else if (!ordinary) {
        snprintf(path, sizeof(path), "%s/stock-world-paced.scsnap", directory);
        if (!stock_world_make_dense_fixture(game, directory, path, error, sizeof(error)))
            goto finish;
    } else {
        WorldProbe boot = {0};
        uint16_t focus = 0u, scenario = UINT16_MAX, year = 0u;
        unsigned funds = 0u;
        uint16_t (*route)(uint32_t) = map_choice == 1 ? new_city_input :
            map_choice == 2 ? scenario_input : map_choice == 7 ? practice_input : freeland_input;
        const unsigned boot_frames = map_choice == 1 ? 2700u : map_choice == 7 ? 1750u : 2750u;
        if (map_choice == 8 && !load_freeland_unlock_sram(game, error, sizeof(error))) goto finish;
        snprintf(path, sizeof(path), "%s/stock-60hz-%s.scsnap", directory, map_name);
        for (unsigned f = 0u; f < boot_frames; ++f)
            if (!world_probe_step(game, &boot, route(f), 1u, 1, 0)) goto finish;
        if (simcity_recomp_stock_world_active(game) || !read_wram16(game, 0x0201u, &focus) ||
            focus != 0xffu || !stock_funds(game, &funds) ||
            (map_choice == 1 && funds != 20000u) || boot.modeled_underruns || boot.modeled_overflows ||
            (map_choice == 2 && (!read_wram16(game, 0x0040u, &scenario) || scenario != 0u ||
                                !read_wram16(game, 0x0b53u, &year) || year != 1906u)) ||
            (map_choice == 8 && !inspect_freeland_initial_map(game)) ||
            !simcity_recomp_snapshot_save(game, path, error, sizeof(error))) {
            fprintf(stderr, "Paced fixture failed map=%s focus=%04X scenario=%u year=%u funds=%u\n",
                    map_name, focus, scenario, year, funds);
            goto finish;
        }
    }
    for (unsigned mode = 0u; mode < 2u; ++mode) {
        if (!(width_mask & (1u << mode))) continue;
        WorldProbe pcm = {0};
        PacedAudio speaker = {0};
        PacedAudio streamed_speaker = {0};
        SimCityPresentationClock presentation;
        SimCityRecompAudioStaticStatus status = {0};
        unsigned guest_frames = 0u, rebases = 0u, drawn = 0u, repeated = 0u, late_draws = 0u;
        int injected = 0;
        uint64_t injected_begin = 0u, injected_end = 0u, injected_slot = 0u;
        unsigned worker_busy = 0u, exact = 0u;
        uint64_t merged = 0u, peak_draw = 0u, peak_guest = 0u, peak_wake = 0u;
        uint64_t guard_waits = 0u, guard_spin_ticks = 0u, video_wake_peak = 0u;
        unsigned video_late_wakes = 0u;
        uint64_t peak_dispatch_lag = 0u;
        unsigned dispatch_after_quarter_slot = 0u;
        unsigned deferred_guest_wakes = 0u;
        uint64_t deferred_guest_ticks = 0u;
        uint64_t guest_total = 0u, guest_cycles = 0u, peak_cycles = 0u;
        uint64_t slowest_wall_cycles = 0u, guest_without_blit_peak = 0u;
        uint64_t guest_blit_total = 0u;
        unsigned guest_over_budget = 0u, guest_over_headroom = 0u, cycle_samples = 0u;
        unsigned guest_without_blit_over = 0u;
        struct {
            uint64_t cycles, guest_instructions, wall_ticks, max_wall_ticks;
            unsigned samples;
        } headroom_group[2][2] = {0};
        struct {
            uint64_t elapsed, cycles, instructions;
            unsigned frame, census, power, density, traffic;
        } slow[5] = {{0}};
        unsigned guest_late = 0u, render_late = 0u, submit_missing = 0u, late_ready_used = 0u;
        uint32_t submitted_frame[SUBMIT_HISTORY] = {0};
        uint64_t submitted_at[SUBMIT_HISTORY] = {0};
        uint64_t slot_count = 0u;
        uint32_t guest_remainder = 0u;
        uint32_t last_drawn = UINT32_MAX;
        uint16_t hazard_initial = 0u, hazard_last = 0u;
        uint16_t event_x = 0u, event_y = 0u;
        unsigned hazard_active_frames = 0u, hazard_timer_changes = 0u;
        uint64_t fire_mask = 0u;
        unsigned fire_samples = 0u, fire_changes = 0u;
        unsigned actor_frames = 0u, actor_moves = 0u, actor_outer_frames = 0u;
        unsigned plane_crash_frame = 0u;
        uint16_t plane_crash_x = 0u, plane_crash_y = 0u, plane_crash_tile = 0u;
        unsigned camera_moves_x = 0u, camera_moves_y = 0u, beyond_both = 0u;
        uint32_t tour_power_at_departure = 0u, tour_fire_at_departure = 0u;
        int camera_x = 0, camera_y = 0, max_camera_x = 0, max_camera_y = 0;
        SimCityRecompStockWorldSample soak_initial = {0};
        uint16_t initial_year = 0u, initial_month = 0u, initial_population = 0u;
        uint16_t peak_population = 0u;
        int event_notice_cleared = 0;
        pcm.hash = UINT64_C(1469598103934665603);
        int (*load_game)(SimCityRecomp *, const char *, char *, size_t) = ordinary ?
            simcity_recomp_snapshot_load : simcity_recomp_stock_world_open_snapshot;
        if (moving_disaster || flood) {
            if (!load_game(game, path, error, sizeof(error)) ||
                !simcity_recomp_set_widescreen(game, mode != 0u, error, sizeof(error)) ||
                !(flood ? stock_flood_preflight(game, AUDIO_PREFILL) :
                  stock_moving_disaster_preflight(game, map_choice, AUDIO_PREFILL, actor_flag, actor_x, actor_y)))
                goto finish;
            snprintf(capture, sizeof(capture), "%s/stock-%s-verified-active-%s.bmp", directory,
                map_name, mode ? "wide398" : "native256");
            if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                !write_bmp(capture, simcity_recomp_frame_bgra(game), simcity_recomp_frame_width(game),
                    SIMCITY_RECOMP_FRAME_HEIGHT)) goto finish;
        }
        if (prepared &&
            (!load_game(game, path, error, sizeof(error)) ||
             !simcity_recomp_set_widescreen(game, mode != 0u, error, sizeof(error)) ||
             !prepared_video_preflight(game, frequency)))
            goto finish;
        if (!load_game(game, path, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, mode != 0u, error, sizeof(error))) goto finish;
        if (construction_replay && simcity_recomp_current_frame(game) != construction_tape.start_frame)
            goto finish;
        for (unsigned n = 0; n < AUDIO_PREFILL; ++n)
            if (!world_probe_step(game, &pcm, construction_replay ? construction_tape.input[n] : 0u,
                                  1u, 0, 0)) goto finish;
        if (timed_disaster && (!read_wram16(game, timer_offset, &hazard_initial) || !hazard_initial)) goto finish;
        if (plane) {
            uint16_t active;
            if (!read_wram16(game, 0x0a8du, &active) || !active) goto finish;
        }
        uint16_t overlay_before[12000];
        if (overlay) {
            SimCityRecompStockWorldSample before;
            if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &before) ||
                (map_choice == 26 && (before.density_cycles || !before.environment_cycles || !before.crime_cycles)) ||
                (map_choice == 27 && before.environment_cycles) ||
                (map_choice == 28 && (before.crime_cycles || !before.environment_cycles))) goto finish;
            for (unsigned y = 0u; y < 200u; y += 2u) for (unsigned x = 0u; x < 240u; x += 2u) {
                SimCityRecompStockWorldSample cell;
                if (!simcity_recomp_stock_world_sample(game, x, y, &cell)) goto finish;
                overlay_before[y / 2u * 120u + x / 2u] = map_choice == 26 ? cell.density :
                    map_choice == 28 ? cell.crime : (uint16_t)(cell.land_value | ((unsigned)cell.pollution << 8));
            }
        }
        if (fire) {
            uint16_t notice, msg;
            if (!read_wram16(game, 0x0395u, &notice) || !notice || !read_wram16(game, 0x0397u, &msg) ||
                msg != 32u || !read_wram16(game, 0x0400u, &event_x) || !read_wram16(game, 0x0402u, &event_y)) goto finish;
            event_x &= 255u;
            event_y &= 255u;
            if ((!ordinary && event_x < 120u && event_y < 100u) ||
                !stock_paced_fire_mask(game, !ordinary, event_x, event_y, &fire_mask) ||
                !(fire_mask & (UINT64_C(1) << 24))) goto finish;
        }
        if (moving_disaster) {
            uint16_t actor;
            if (!read_wram16(game, actor_flag, &actor) || !actor ||
                !read_wram16(game, actor_x, &event_x) || !read_wram16(game, actor_y, &event_y)) goto finish;
        }
        hazard_last = hazard_initial;
        if (construction_soak &&
            (!simcity_recomp_stock_world_sample(game, 121u, 101u, &soak_initial) ||
             !read_wram16(game, 0x0b53u, &initial_year) ||
             !read_wram16(game, 0x0b55u, &initial_month) ||
             !read_wram16(game, 0x0ba5u, &initial_population) ||
             !stock_soak_infrastructure(game, "start", mode))) goto finish;
        peak_population = initial_population;
        if (prepared) {
            video = simcity_prepared_video_open();
            if (!video) goto finish;
        }
        /* Diagnostic only: keep original render dimensions in both runs
           and isolate the cost of stretching the final Win32 destination. */
        if (offscreen && !paced_offscreen_open(&screen,
                unscaled_dib ? simcity_recomp_frame_width(game) : 1920u,
                unscaled_dib ? (mode ? 224u : SIMCITY_RECOMP_FRAME_HEIGHT) : 1080u)) goto finish;
        screen.cached_scale = cached_scale;
        speaker.queue = speaker.min_queue = speaker.max_queue = pcm.frames;
        streamed_speaker = speaker;
        if (games_mmcss) {
            DWORD task_index = 0u;
            dispatch_task = AvSetMmThreadCharacteristicsW(L"Games", &task_index);
            if (!dispatch_task) {
                fprintf(stderr, "Windows Games MMCSS registration unavailable: %lu\n",
                        (unsigned long)GetLastError());
                goto finish;
            }
        }
        const uint64_t start = paced_ticks();
        /* A bounded amount of video lead time, without altering the
           emulation/audio schedule or showing speculative input. */
        const uint64_t present_start = start +
            (prepared ? guest_base * lead_frames : 0u);
        const uint64_t stop = present_start + seconds * frequency;
        const uint64_t start_clock = simcity_recomp_master_clock(game);
        uint64_t guest_deadline = start;
        simcity_presentation_reset(&presentation, present_start, frequency);
        PacedPreparedCheckpoint checkpoint = {video, &presentation, stop, present_start, frequency,
            &slot_count, &merged, &peak_dispatch_lag, &drawn, &repeated, &exact, &late_ready_used,
            &dispatch_after_quarter_slot, &late_draws, &last_drawn, 0u, 0u, 0u, 0,
            offscreen ? &screen : NULL, offscreen ? &streamed_speaker : NULL, &pcm, start, pcm.frames,
            0u, 0u, 0u};
        checkpoint.log_video_faults = construction_replay || recovery_test || full_tour || overlay;
        while (paced_ticks() < stop) {
            int recover_bias = 0;
            uint64_t next_guest = guest_deadline;
            if (video && !overlap) {
                const uint64_t current = paced_ticks();
                const uint64_t earliest = guest_deadline < current ? current : guest_deadline;
                next_guest = simcity_prepared_guest_wakeup(earliest, presentation.deadline, frequency, 0);
                if (next_guest > earliest) {
                    ++deferred_guest_wakes;
                    deferred_guest_ticks += next_guest - earliest;
                }
            }
            uint64_t next = next_guest < presentation.deadline ?
                            next_guest : presentation.deadline;
            const int video_wait = next == presentation.deadline && next < stop;
            const uint64_t guard = wake_guard && video_wait ? frequency / 1000u : 0u;
            const uint64_t due = next < stop ? next : stop;
            if (!paced_wait(timer, guard < due ? due - guard : due, frequency)) goto finish;
            uint64_t now = paced_ticks();
            if (guard && now < due) {
                const uint64_t spin_start = now;
                ++guard_waits;
                /* Probe only: reserve the final millisecond but never
                   consume the guest or video deadline before it is due. */
                do { YieldProcessor(); now = paced_ticks(); } while (now < due);
                guard_spin_ticks += now - spin_start;
            }
            if (now >= stop) break;
            if (now > next && now - next > peak_wake) peak_wake = now - next;
            if (video_wait && now > next) {
                const uint64_t late = now - next;
                if (late > video_wake_peak) video_wake_peak = late;
                video_late_wakes += late > frequency / (4u * SIMCITY_HOST_PRESENT_HZ);
            }
            if (now >= guest_deadline &&
                (!video || (now < presentation.deadline &&
                 simcity_prepared_guest_wakeup(now, presentation.deadline, frequency, overlap) == now))) {
                const uint64_t before_pcm = pcm.frames;
                const uint32_t tape_index = guest_frames + AUDIO_PREFILL;
                const uint16_t input = construction_replay ?
                    (tape_index < construction_tape.frames ? construction_tape.input[tape_index] : 0u) :
                    stock_paced_input(game, map_choice, guest_frames);
                const uint64_t begin_guest = now;
                const uint64_t begin_insns = simcity_recomp_instruction_count(game);
                const uint64_t before_blit = screen.total_ticks;
                ULONG64 before_cycles = 0u, after_cycles = 0u;
                const BOOL cycles_started = QueryThreadCycleTime(GetCurrentThread(), &before_cycles);
                if (recovery_test && !injected && guest_frames >= 90u) {
                    injected = 1;
                    injected_slot = slot_count;
                    injected_begin = paced_ticks();
                    Sleep(64u); /* Model one host stall, never a gameplay change. */
                    injected_end = paced_ticks();
                }
                if (cooperative) {
                    checkpoint.guest_active = 1;
                    if (!simcity_recomp_advance_streamed_headless(game, input, 1u,
                            paced_prepared_checkpoint, &checkpoint, NULL) || checkpoint.failed ||
                        !drain_pcm(game, &pcm.hash, &pcm.frames)) goto finish;
                    checkpoint.guest_active = 0;
                } else if (!world_probe_step(game, &pcm, input, 1u, 0, 0)) goto finish;
                const BOOL cycles_ended = QueryThreadCycleTime(GetCurrentThread(), &after_cycles);
                ++guest_frames;
                if (full_tour) {
                    if (map_choice == 20 && guest_frames == STOCK_FULL_TOUR_NEUTRAL_FRAMES) {
                        SimCityRecompStockWorldSample at_departure;
                        if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &at_departure)) goto finish;
                        tour_power_at_departure = at_departure.power_cycles;
                        tour_fire_at_departure = at_departure.fire_cycles;
                    }
                    uint16_t coarse_x, coarse_y, fine_x, fine_y;
                    if (!read_wram16(game, 0x01bdu, &coarse_x) ||
                        !read_wram16(game, 0x01bfu, &coarse_y) ||
                        !read_wram16(game, 0x0139u, &fine_x) ||
                        !read_wram16(game, 0x0137u, &fine_y)) goto finish;
                    const int x = 8 * (int)(int16_t)coarse_x + (int)(fine_x & 7u);
                    const int y = 8 * (int)(int16_t)coarse_y + (int)(fine_y & 7u);
                    camera_moves_x += guest_frames > 1u && x != camera_x;
                    camera_moves_y += guest_frames > 1u && y != camera_y;
                    beyond_both += x >= 120 * 8 && y >= 100 * 8;
                    if (x > max_camera_x) max_camera_x = x;
                    if (y > max_camera_y) max_camera_y = y;
                    camera_x = x;
                    camera_y = y;
                }
                if (construction_soak && guest_frames % 3600u == 0u) {
                    SimCityRecompStockWorldSample sample;
                    uint16_t year, month, population, speed, focus, budget;
                    if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &sample) ||
                        !read_wram16(game, 0x0b53u, &year) || !read_wram16(game, 0x0b55u, &month) ||
                        !read_wram16(game, 0x0ba5u, &population) ||
                        !read_wram16(game, 0x0193u, &speed) || !read_wram16(game, 0x0201u, &focus) ||
                        !read_wram16(game, 0x0dc3u, &budget)) goto finish;
                    if (population > peak_population) peak_population = population;
                    printf("stock-construction-soak-progress mode=%s frames=%u exact=%u repeated=%u camera=(%d,%d) date=%u/%u pop=%u peak_pop=%u power=%u fire=%u density=%u environment=%u crime=%u traffic=%u/%u beyond_both=%u no_blit_over_8_33ms=%u underruns=%u overflows=%u speed=%04X focus=%04X budget=%04X\n",
                        mode ? "wide398" : "native256", guest_frames, exact, repeated, camera_x, camera_y,
                        year, month, population, peak_population, sample.power_cycles, sample.fire_cycles,
                        sample.density_cycles, sample.environment_cycles, sample.crime_cycles,
                        sample.traffic_west, sample.traffic_east, beyond_both, guest_without_blit_over,
                        streamed_speaker.underruns, streamed_speaker.overflows, speed, focus, budget);
                    fflush(stdout);
                }
                if (timed_disaster) {
                    uint16_t event_timer = 0u;
                    if (!read_wram16(game, timer_offset, &event_timer)) goto finish;
                    hazard_active_frames += event_timer != 0u;
                    hazard_timer_changes += event_timer != hazard_last;
                    hazard_last = event_timer;
                }
                if (moving_disaster) {
                    uint16_t actor, x_pos, y_pos, notice;
                    if (!read_wram16(game, actor_flag, &actor) ||
                        !read_wram16(game, actor_x, &x_pos) || !read_wram16(game, actor_y, &y_pos) ||
                        !read_wram16(game, 0x0395u, &notice)) goto finish;
                    event_notice_cleared |= notice == 0u;
                    if (actor) {
                        ++actor_frames;
                        actor_moves += x_pos != event_x || y_pos != event_y;
                        actor_outer_frames += x_pos >= 120u || y_pos >= 100u;
                    }
                    event_x = x_pos;
                    event_y = y_pos;
                }
                if (plane && !plane_crash_frame) {
                    uint16_t actor, flags, notice, message;
                    if (!read_wram16(game, 0x0a8du, &actor) || !read_wram16(game, 0x0197u, &flags) ||
                        !read_wram16(game, 0x0395u, &notice) || !read_wram16(game, 0x0397u, &message)) goto finish;
                    actor_frames += actor != 0u;
                    if (!actor && !(flags & 4u) && notice && message == 34u) {
                        if (!read_wram16(game, 0x0400u, &plane_crash_x) ||
                            !read_wram16(game, 0x0402u, &plane_crash_y)) goto finish;
                        plane_crash_x &= 255u; plane_crash_y &= 255u;
                        if (plane_crash_x < 120u || plane_crash_y < 100u ||
                            !simcity_recomp_stock_world_tile(game, plane_crash_x, plane_crash_y, &plane_crash_tile) ||
                            ((plane_crash_tile & 0x3fffu) != 0x7fu && (plane_crash_tile & 0x3fffu) != 0x28u)) goto finish;
                        plane_crash_frame = guest_frames;
                    }
                }
                if (fire && (guest_frames == 1u || guest_frames % 30u == 0u)) {
                    uint16_t notice;
                    uint64_t now_burning;
                    if (!read_wram16(game, 0x0395u, &notice) ||
                        !stock_paced_fire_mask(game, !ordinary, event_x, event_y, &now_burning)) goto finish;
                    event_notice_cleared |= notice == 0u;
                    fire_changes += now_burning != fire_mask;
                    fire_mask = now_burning;
                    ++fire_samples;
                }
                now = paced_ticks();
                const uint64_t elapsed = now - begin_guest;
                const uint64_t blit = screen.total_ticks - before_blit;
                const uint64_t without_blit = elapsed - blit;
                const int over_headroom = without_blit > frequency / (2u * SIMCITY_HOST_PRESENT_HZ);
                guest_blit_total += blit;
                if (without_blit > guest_without_blit_peak) guest_without_blit_peak = without_blit;
                guest_without_blit_over += over_headroom;
                const int cycles_valid = cycles_started && cycles_ended && after_cycles >= before_cycles;
                const uint64_t cycle_delta = cycles_valid ? after_cycles - before_cycles : 0u;
                if (cycles_valid) {
                    ++cycle_samples;
                    guest_cycles += cycle_delta;
                    if (cycle_delta > peak_cycles) peak_cycles = cycle_delta;
                    if (map_choice == 10 || full_power || construction_soak || construction_replay) {
                        const unsigned drew_inline = blit != 0u;
                        /* The no-draw cohorts need no subtraction at all.
                           Don't interpret CPU cycles as wall time, which
                           also includes scheduling and changes in CPU rate. */
                        ++headroom_group[drew_inline][over_headroom].samples;
                        headroom_group[drew_inline][over_headroom].cycles += cycle_delta;
                        headroom_group[drew_inline][over_headroom].guest_instructions +=
                            simcity_recomp_instruction_count(game) - begin_insns;
                        headroom_group[drew_inline][over_headroom].wall_ticks += without_blit;
                        if (without_blit > headroom_group[drew_inline][over_headroom].max_wall_ticks)
                            headroom_group[drew_inline][over_headroom].max_wall_ticks = without_blit;
                    }
                }
                guest_total += elapsed;
                guest_over_budget += elapsed > frequency / SIMCITY_HOST_PRESENT_HZ;
                guest_over_headroom += elapsed > frequency / (2u * SIMCITY_HOST_PRESENT_HZ);
                if ((map_choice == 10 || full_power || construction_soak) &&
                    elapsed > frequency / (2u * SIMCITY_HOST_PRESENT_HZ)) {
                    for (unsigned rank = 0u; rank < sizeof(slow) / sizeof(slow[0]); ++rank) {
                        if (elapsed <= slow[rank].elapsed) continue;
                        SimCityRecompStockWorldSample active;
                        if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &active)) goto finish;
                        for (unsigned i = (unsigned)(sizeof(slow) / sizeof(slow[0])) - 1u; i > rank; --i)
                            slow[i] = slow[i - 1u];
                        slow[rank].elapsed = elapsed;
                        slow[rank].cycles = cycle_delta;
                        slow[rank].instructions = simcity_recomp_instruction_count(game) - begin_insns;
                        slow[rank].frame = guest_frames;
                        slow[rank].census = active.census_visits;
                        slow[rank].power = active.power_cycles;
                        slow[rank].density = active.density_cycles;
                        slow[rank].traffic = active.traffic_writes;
                        break;
                    }
                }
                if (elapsed > peak_guest) {
                    peak_guest = elapsed;
                    slowest_wall_cycles = cycle_delta;
                }
                paced_audio_feed(&speaker, (now < stop ? now : stop) - start, frequency, pcm.frames - before_pcm);
                if (offscreen) {
                    paced_audio_feed(&streamed_speaker, (now < stop ? now : stop) - start, frequency,
                        pcm.frames - checkpoint.audio_produced);
                    checkpoint.audio_produced = pcm.frames;
                }
                guest_deadline += guest_base;
                guest_remainder += (uint32_t)guest_fraction;
                if (guest_remainder >= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR) {
                    ++guest_deadline;
                    guest_remainder -= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
                }
                if (!legacy) {
                    if (simcity_guest_limit_debt(now, guest_base, &guest_deadline, &guest_remainder)) {
                        ++rebases;
                        recover_bias = offscreen;
                    }
                } else if (now > guest_deadline + guest_base / 8u) {
                    guest_deadline = now;
                    guest_remainder = 0u;
                    ++rebases;
                }
                if (video) {
                    const uint64_t guest_complete_tick = now;
                    const int submitted = simcity_prepared_video_submit(video, game, guest_frames);
                    if (!submitted) goto finish;
                    worker_busy += submitted == 2;
                    now = paced_ticks();
                    if (checkpoint.log_video_faults) {
                        checkpoint.guest_finished = guest_frames;
                        checkpoint.guest_timing[guest_frames % 16u] =
                            (PacedGuestTiming){guest_frames, guest_complete_tick, now, submitted};
                    }
                    if (submitted == 1) {
                        const unsigned entry = guest_frames % SUBMIT_HISTORY;
                        submitted_frame[entry] = guest_frames;
                        submitted_at[entry] = now;
                    }
                }
            }
            const uint64_t slots = simcity_presentation_consume(&presentation,
                now < stop ? now : stop - 1u);
            const uint32_t selected_bias = checkpoint.target_bias;
            const uint32_t target = slots ? simcity_prepared_biased_target(slot_count + slots - 1u,
                selected_bias) : 0u;
            if (recover_bias)
                checkpoint.target_bias = simcity_prepared_recovery_bias(slot_count + slots,
                    guest_frames, lead_frames, checkpoint.target_bias);
            if (!slots) continue;
            merged += slots - 1u;
            slot_count += slots;
            uint32_t frame = simcity_recomp_current_frame(game);
            uint32_t previous = 0u;
            uint64_t traced_ready = 0u, traced_dispatch = 0u, traced_deadline = 0u;
            if (video) {
                const uint64_t slot_deadline = present_start +
                    simcity_prepared_deadline(slot_count - 1u, frequency);
                const uint64_t dispatch = now < stop ? now : stop - 1u;
                const uint64_t dispatch_lag = dispatch > slot_deadline ? dispatch - slot_deadline : 0u;
                if (dispatch_lag > peak_dispatch_lag) peak_dispatch_lag = dispatch_lag;
                dispatch_after_quarter_slot += dispatch_lag > frequency / (4u * SIMCITY_HOST_PRESENT_HZ);
                uint64_t ready = 0u;
                if (checkpoint.log_video_faults)
                    previous = simcity_prepared_video_last_presented(video);
                const int shown = simcity_prepared_video_present(video, target, dispatch, &frame, &ready);
                if (!shown) goto finish;
                if (slots > 1u || shown != 2 || frame != target) checkpoint.last_bad_slot = slot_count;
                late_ready_used += shown == 2 && frame == target && ready > slot_deadline;
                if (shown == 1 || frame != target) {
                    const unsigned entry = target % SUBMIT_HISTORY;
                    if (target > guest_frames ||
                        (submitted_frame[entry] == target && submitted_at[entry] > dispatch))
                        ++guest_late;
                    else if (submitted_frame[entry] != target)
                        ++submit_missing;
                    else
                        ++render_late;
                }
                if (shown == 1) {
                    ++repeated;
                    if (checkpoint.log_video_faults)
                        paced_checkpoint_video_fault(&checkpoint, slot_count - 1u, slots - 1u,
                            slot_deadline, dispatch, simcity_prepared_video_queued_ready_tick(video, target),
                            0u, target, 0u, previous, selected_bias, 0, "outer");
                    continue;
                }
                if (checkpoint.log_video_faults) {
                    traced_ready = frame == target ? ready :
                        simcity_prepared_video_queued_ready_tick(video, target);
                    traced_dispatch = dispatch;
                    traced_deadline = slot_deadline;
                }
                exact += frame == target;
            }
            if (frame == last_drawn) {
                ++repeated;
                continue;
            }
            if (!video && !simcity_recomp_render_presentation_frame(game, error, sizeof(error)))
                goto finish;
            if (offscreen && !paced_offscreen_draw(&screen, video)) goto finish;
            last_drawn = frame;
            ++drawn;
            const uint64_t done = paced_ticks();
            const int late_paint = simcity_presentation_paint_late(done, presentation.deadline);
            if (late_paint) {
                ++late_draws;
                checkpoint.last_bad_slot = slot_count;
            }
            if (checkpoint.log_video_faults && video &&
                    (slots > 1u || frame != target || late_paint))
                paced_checkpoint_video_fault(&checkpoint, slot_count - 1u, slots - 1u,
                    traced_deadline, traced_dispatch, traced_ready, done, target, frame, previous, selected_bias,
                    late_paint, "outer");
            if (done - now > peak_draw) peak_draw = done - now;
        }
        if (dispatch_task) {
            if (!AvRevertMmThreadCharacteristics(dispatch_task)) goto finish;
            dispatch_task = NULL;
        }
        printf("stock-present-mmcss mode=%s games_registered=%d\n", mode ? "wide398" : "native256", games_mmcss);
        const uint64_t unserviced_tail = simcity_presentation_consume(&presentation, stop - 1u);
        merged += unserviced_tail;
        if (checkpoint.log_video_faults && unserviced_tail)
            printf("stock-live-video-fault-tail unserviced=%llu\n", (unsigned long long)unserviced_tail);
        paced_audio_consume(&speaker, stop - start, frequency);
        if (offscreen) {
            paced_audio_consume(&streamed_speaker, stop - start, frequency);
            printf("stock-streamed-audio mode=%s underruns=%u missing_pcm=%llu overflows=%u queue_min=%llu frame_batch_missing_pcm=%llu\n",
                mode ? "wide398" : "native256", streamed_speaker.underruns,
                (unsigned long long)streamed_speaker.missing_frames, streamed_speaker.overflows,
                (unsigned long long)streamed_speaker.min_queue, (unsigned long long)speaker.missing_frames);
        }
        if (!simcity_recomp_audio_static_status(game, &status)) goto finish;
        snprintf(capture, sizeof(capture), "%s/stock-%s-paced-%s-%s.bmp", directory,
                 map_name, policy_name, mode ? "wide398" : "native256");
        unsigned captured_width = simcity_recomp_frame_width(game);
        const uint32_t *image = video ? simcity_prepared_video_pixels(video, &captured_width)
                                      : simcity_recomp_frame_bgra(game);
        if (!drawn || !image || !write_bmp(capture, image, captured_width, SIMCITY_RECOMP_FRAME_HEIGHT))
            goto finish;
        printf("stock-paced map=%s policy=%s mode=%s seconds=%u slots=%u unique=%u repeated=%u merged=%llu draw_late=%u draw_peak_ms=%.2f guest_frames=%u rebases=%u guest_clocks=%llu pcm=%llu queue_min=%llu queue_max=%llu modeled_underruns=%u missing_pcm=%llu modeled_overflows=%u core_overflows=%llu dropped=%llu\n",
               map_name, policy_name, mode ? "wide398" : "native256",
               seconds, seconds * SIMCITY_HOST_PRESENT_HZ,
               drawn, repeated, (unsigned long long)merged, late_draws,
               1000.0 * (double)peak_draw / (double)frequency, guest_frames, rebases,
               (unsigned long long)(simcity_recomp_master_clock(game) - start_clock),
               (unsigned long long)pcm.frames, (unsigned long long)speaker.min_queue,
               (unsigned long long)speaker.max_queue, speaker.underruns,
               (unsigned long long)speaker.missing_frames, speaker.overflows,
               (unsigned long long)status.pcm_overflows,
               (unsigned long long)simcity_recomp_audio_dropped_frames(game));
        if (video) {
            if (checkpoint.log_video_faults) paced_checkpoint_print_video_faults(&checkpoint);
            const uint64_t render_peak = simcity_prepared_video_peak_render_ticks(video);
            printf("stock-world-prepared mode=%s exact_target=%u queue_full=%u video_lead_ms=%.2f guest_peak_ms=%.2f render_peak_ms=%.2f wake_peak_ms=%.2f reused_images=%u\n",
                   mode ? "wide398" : "native256", exact, worker_busy,
                   1000.0 * lead_frames * (double)guest_base / (double)frequency,
                   1000.0 * (double)peak_guest / (double)frequency,
                   1000.0 * (double)simcity_prepared_video_peak_render_ticks(video) / (double)frequency,
                   1000.0 * (double)peak_wake / (double)frequency,
                   simcity_prepared_video_reused_images(video));
            printf("stock-guest-profile mode=%s guest_avg_ms=%.2f guest_over_budget=%u cpu_cycle_samples=%u guest_avg_mcycles=%.2f guest_peak_mcycles=%.2f slowest_wall_mcycles=%.2f\n",
                   mode ? "wide398" : "native256",
                   guest_frames ? 1000.0 * (double)guest_total / (double)frequency / guest_frames : 0.0,
                   guest_over_budget, cycle_samples,
                   cycle_samples ? (double)guest_cycles / 1000000.0 / cycle_samples : 0.0,
                   (double)peak_cycles / 1000000.0, (double)slowest_wall_cycles / 1000000.0);
            printf("stock-video-deadlines mode=%s target_not_submitted_in_time=%u target_not_queued=%u target_submitted_but_not_shown=%u target_ready_after_nominal_slot=%u host_slots_merged=%llu\n",
                   mode ? "wide398" : "native256", guest_late, submit_missing,
                   render_late, late_ready_used, (unsigned long long)merged);
            printf("stock-present-dispatch mode=%s peak_late_ms=%.2f slots_over_quarter_interval=%u\n",
                   mode ? "wide398" : "native256",
                   1000.0 * (double)peak_dispatch_lag / (double)frequency, dispatch_after_quarter_slot);
            printf("stock-present-wait mode=%s guard_ms=%u spin_waits=%llu spin_wall_ms=%.2f video_wake_peak_ms=%.2f video_wakes_over_quarter_interval=%u\n",
                mode ? "wide398" : "native256", (unsigned)wake_guard,
                (unsigned long long)guard_waits, 1000.0 * (double)guard_spin_ticks / frequency,
                1000.0 * (double)video_wake_peak / frequency, video_late_wakes);
            if (cooperative)
                printf("stock-present-checkpoints mode=%s polls=%u slots_serviced=%u target_misses=%u recovery_bias=%u\n",
                    mode ? "wide398" : "native256", checkpoint.polls, checkpoint.serviced,
                    checkpoint.target_misses, checkpoint.target_bias);
            if (map_choice == 10 || full_power || construction_soak || construction_replay) {
                for (unsigned drew = 0u; drew < 2u; ++drew) for (unsigned late = 0u; late < 2u; ++late) {
                    const unsigned n = headroom_group[drew][late].samples;
                    if (!n) continue;
                    printf("stock-headroom-cohort mode=%s inline_draw=%u no_blit_late=%u frames=%u mean_no_blit_wall_ms=%.2f peak_no_blit_wall_ms=%.2f mean_thread_cycles=%llu mean_guest_insns=%llu\n",
                        mode ? "wide398" : "native256", drew, late, n,
                        1000.0 * (double)headroom_group[drew][late].wall_ticks / (double)frequency / n,
                        1000.0 * (double)headroom_group[drew][late].max_wall_ticks / (double)frequency,
                        (unsigned long long)(headroom_group[drew][late].cycles / n),
                        (unsigned long long)(headroom_group[drew][late].guest_instructions / n));
                }
            }
            if (map_choice == 10 || full_power || construction_soak) {
                SimCityRecompStockWorldSample sample;
                if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &sample)) goto finish;
                printf("stock-full-headroom mode=%s budget_ms=%.2f guest_over=%u/%u worker_peak_ms=%.2f draw_peak_ms=%.2f census_visits=%u power_cycles=%u density_cycles=%u traffic_west=%u traffic_east=%u\n",
                    mode ? "wide398" : "native256", 1000.0 / (2u * SIMCITY_HOST_PRESENT_HZ),
                    guest_over_headroom, guest_frames, 1000.0 * (double)render_peak / (double)frequency,
                    1000.0 * (double)screen.peak_ticks / (double)frequency, sample.census_visits,
                    sample.power_cycles, sample.density_cycles, sample.traffic_west, sample.traffic_east);
                printf("stock-full-frame-attribution mode=%s no_blit_peak_ms=%.2f no_blit_over_8_33ms=%u checkpoint_blit_total_ms=%.2f audio_submit_total_ms=%.2f\n",
                    mode ? "wide398" : "native256", 1000.0 * (double)guest_without_blit_peak / (double)frequency,
                    guest_without_blit_over, 1000.0 * (double)guest_blit_total / (double)frequency,
                    1000.0 * (double)checkpoint.audio_submit_ticks / (double)frequency);
                printf("stock-full-guest-deferral mode=%s waits=%u planned_delay_ms=%.2f overlap=%d\n",
                    mode ? "wide398" : "native256", deferred_guest_wakes,
                    1000.0 * (double)deferred_guest_ticks / (double)frequency, overlap);
                for (unsigned rank = 0u; rank < sizeof(slow) / sizeof(slow[0]) && slow[rank].elapsed; ++rank)
                    printf("stock-full-frame-tail mode=%s rank=%u guest_frame=%u ms=%.2f host_cycles=%llu guest_insns=%llu census=%u power=%u density=%u traffic=%u\n",
                        mode ? "wide398" : "native256", rank + 1u, slow[rank].frame,
                        1000.0 * (double)slow[rank].elapsed / (double)frequency,
                        (unsigned long long)slow[rank].cycles, (unsigned long long)slow[rank].instructions,
                        slow[rank].census, slow[rank].power, slow[rank].density, slow[rank].traffic);
            }
        }
        fflush(stdout);
        if (strict) {
            int workload_ok = 1;
            /* A trailing wake may straddle the observation boundary by one
               guest frame. The budget still uses the original guest rate,
               not the 60 Hz display clock. */
            const uint64_t target = (uint64_t)seconds * SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR /
                SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR + lead_frames;
            const uint64_t actual_clocks = simcity_recomp_master_clock(game) - start_clock;
            const uint64_t expected_clocks = (uint64_t)guest_frames *
                SIMCITY_RECOMP_NTSC_AVERAGE_MASTER_CLOCKS_PER_FRAME;
            const uint64_t clock_error = actual_clocks > expected_clocks ?
                actual_clocks - expected_clocks : expected_clocks - actual_clocks;
            const uint64_t expected_pcm = ((uint64_t)guest_frames + AUDIO_PREFILL) *
                SIMCITY_RECOMP_AUDIO_SAMPLE_RATE * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR /
                SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            const uint64_t pcm_error = pcm.frames > expected_pcm ?
                pcm.frames - expected_pcm : expected_pcm - pcm.frames;
            /* Each advance stops on an instruction boundary near VBlank.
               PCM reflects that boundary and one hardware sample phase. */
            const int original_pace = guest_frames >= target - 1u && guest_frames <= target + 1u &&
                                      clock_error <= 128u && pcm_error <= 3u && !rebases;
            const PacedAudio *checked_audio = offscreen ? &streamed_speaker : &speaker;
            const int audio_ok = !checked_audio->underruns && !checked_audio->overflows && !status.pcm_overflows &&
                                 !simcity_recomp_audio_dropped_frames(game);
            if (offscreen)
                printf("stock-offscreen-gdi size=%ux%u frames=%u cached_draws=%u peak_ms=%.2f mean_ms=%.2f\n",
                    screen.width, screen.height, screen.frames, screen.scale.draws,
                    1000.0 * (double)screen.peak_ticks / (double)frequency,
                    screen.frames ? 1000.0 * (double)screen.total_ticks / (double)frequency / screen.frames : 0.0);
            if (full_power) {
                SimCityRecompStockWorldSample sample;
                workload_ok = simcity_recomp_stock_world_sample(game, 121u, 101u, &sample) &&
                    sample.power_cycles > 0u && sample.fire_cycles > 0u;
                printf("stock-full-power-coverage complete=%d\n", workload_ok);
            }
            if (full_tour) {
                const int camera_ok = camera_moves_x && camera_moves_y && beyond_both;
                workload_ok &= camera_ok;
                if (map_choice == 20) {
                    const int phase_ok = tour_power_at_departure && tour_fire_at_departure;
                    workload_ok &= phase_ok;
                    printf("stock-full-tour-phases mode=%s neutral_frames=%u power_at_departure=%u fire_at_departure=%u complete=%d\n",
                        mode ? "wide398" : "native256", STOCK_FULL_TOUR_NEUTRAL_FRAMES,
                        tour_power_at_departure, tour_fire_at_departure, phase_ok);
                }
                printf("stock-full-tour mode=%s camera_moves=%u/%u max_camera_pixels=%d/%d frames_beyond_both_old_edges=%u complete=%d\n",
                    mode ? "wide398" : "native256", camera_moves_x, camera_moves_y,
                    max_camera_x, max_camera_y, beyond_both, camera_ok);
            }
            if (construction_soak) {
                SimCityRecompStockWorldSample final;
                uint16_t year = 0u, month = 0u, population = 0u;
                if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &final) ||
                    !read_wram16(game, 0x0b53u, &year) || !read_wram16(game, 0x0b55u, &month) ||
                    !read_wram16(game, 0x0ba5u, &population)) goto finish;
                if (population > peak_population) peak_population = population;
                const int progressed = (year > initial_year || (year == initial_year && month > initial_month)) &&
                    final.power_cycles > soak_initial.power_cycles && final.fire_cycles > soak_initial.fire_cycles &&
                    final.density_cycles > soak_initial.density_cycles &&
                    final.environment_cycles > soak_initial.environment_cycles &&
                    final.crime_cycles > soak_initial.crime_cycles;
                workload_ok &= progressed;
                printf("stock-construction-soak mode=%s date=%u/%u->%u/%u population=%u->%u peak_sampled_population=%u power=%u->%u fire=%u->%u density=%u->%u environment=%u->%u crime=%u->%u traffic=%u/%u complete=%d\n",
                    mode ? "wide398" : "native256", initial_year, initial_month, year, month,
                    initial_population, population, peak_population,
                    soak_initial.power_cycles, final.power_cycles, soak_initial.fire_cycles, final.fire_cycles,
                    soak_initial.density_cycles, final.density_cycles,
                    soak_initial.environment_cycles, final.environment_cycles,
                    soak_initial.crime_cycles, final.crime_cycles,
                    final.traffic_west, final.traffic_east, progressed);
            }
            if (construction_replay) {
                const unsigned played = guest_frames + AUDIO_PREFILL;
                workload_ok &= played >= construction_tape.frames;
                printf("stock-construction-tape-paced mode=%s recorded=%u applied=%u neutral_tail=%u complete=%d\n",
                    mode ? "wide398" : "native256", construction_tape.frames,
                    played < construction_tape.frames ? played : construction_tape.frames,
                    played > construction_tape.frames ? played - construction_tape.frames : 0u,
                    played >= construction_tape.frames);
            }
            if (timed_disaster) {
                workload_ok = hazard_active_frames && hazard_timer_changes && hazard_last < hazard_initial;
                printf("stock-disaster-timer-coverage event=%s initial=%u remaining=%u active_guest_frames=%u timer_changes=%u complete=%d\n",
                    event_name, hazard_initial, hazard_last, hazard_active_frames, hazard_timer_changes, workload_ok);
            }
            if (moving_disaster) {
                workload_ok = event_notice_cleared && actor_frames && actor_moves && (ordinary || actor_outer_frames);
                printf("stock-moving-disaster-coverage event=%s notice_cleared=%d active_guest_frames=%u moves=%u outer_frames=%u complete=%d\n",
                    event_name, event_notice_cleared, actor_frames, actor_moves, actor_outer_frames, workload_ok);
            }
            if (fire) {
                workload_ok = event_notice_cleared && fire_samples && fire_changes;
                printf("stock-fire-coverage map=%s notice_cleared=%d origin=(%u,%u) samples=%u burn_pattern_changes=%u complete=%d\n",
                    map_name, event_notice_cleared, event_x, event_y, fire_samples, fire_changes, workload_ok);
            }
            if (plane) {
                workload_ok = actor_frames && plane_crash_frame;
                printf("stock-plane-coverage active_guest_frames=%u crash_frame=%u site=(%u,%u) tile=%04X complete=%d\n",
                       actor_frames, plane_crash_frame, plane_crash_x, plane_crash_y, plane_crash_tile, workload_ok);
            }
            if (overlay) {
                SimCityRecompStockWorldSample final;
                unsigned nonzero[4] = {0}, changed[4] = {0}, pollution_changed[4] = {0};
                if (!simcity_recomp_stock_world_sample(game, 121u, 101u, &final)) goto finish;
                for (unsigned y = 0u; y < 200u; y += 2u) for (unsigned x = 0u; x < 240u; x += 2u) {
                    SimCityRecompStockWorldSample cell;
                    if (!simcity_recomp_stock_world_sample(game, x, y, &cell)) goto finish;
                    const unsigned quadrant = (y >= 100u ? 2u : 0u) + (x >= 120u ? 1u : 0u);
                    const unsigned before = overlay_before[y / 2u * 120u + x / 2u];
                    const unsigned after = map_choice == 26 ? cell.density :
                        map_choice == 28 ? cell.crime : cell.land_value;
                    nonzero[quadrant] += after != 0u;
                    changed[quadrant] += (before & 255u) != after;
                    if (map_choice == 27) pollution_changed[quadrant] += (before >> 8u) != cell.pollution;
                }
                const uint32_t cycles = map_choice == 26 ? final.density_cycles :
                    map_choice == 27 ? final.environment_cycles : final.crime_cycles;
                const uint32_t writes = map_choice == 26 ? final.density_written :
                    map_choice == 27 ? final.pollution_written : final.crime_written;
                /* This window may start partway through a native pass.
                   Count writes since the pass began, not only deltas
                   after the checkpoint (a write may also keep its value). */
                workload_ok = cycles == 1u && writes == 12000u && !final.census_order_errors &&
                    !final.power_order_errors && (map_choice != 26 || final.density_visits == 48000u);
                printf("stock-dense-overlay-coverage pass=%s cycles=%u native_writes=%u changed_nw_ne_sw_se=%u/%u/%u/%u nonzero_nw_ne_sw_se=%u/%u/%u/%u pollution_changed_nw_ne_sw_se=%u/%u/%u/%u complete=%d\n",
                    overlay, cycles, writes, changed[0], changed[1], changed[2], changed[3],
                    nonzero[0], nonzero[1], nonzero[2], nonzero[3],
                    pollution_changed[0], pollution_changed[1], pollution_changed[2], pollution_changed[3], workload_ok);
            }
            const int video_ok = drawn == seconds * SIMCITY_HOST_PRESENT_HZ && exact == drawn &&
                                 (!offscreen || screen.frames == drawn) &&
                                 (!cached_scale || screen.scale.draws == screen.frames) &&
                                 (!overlap || checkpoint.serviced > 0u) &&
                                 !repeated && !merged && !late_draws && !worker_busy;
            if (recovery_test) {
                printf("stock-host-stall-injection mode=%s next_slot=%llu elapsed_us=%lld\n",
                    mode ? "wide398" : "native256", (unsigned long long)injected_slot,
                    paced_offset_us(injected_end, injected_begin, frequency));
                const uint64_t tail = seconds * SIMCITY_HOST_PRESENT_HZ - checkpoint.last_bad_slot;
                const int recovered = injected && rebases == 1u && checkpoint.target_bias &&
                    checkpoint.last_bad_slot && tail >= 5u * SIMCITY_HOST_PRESENT_HZ &&
                    clock_error <= 128u && pcm_error <= 3u;
                printf("stock-host-stall-recovery mode=%s result=%s rebases=%u bias=%u clean_tail_slots=%llu modeled_audio_underruns=%u\n",
                    mode ? "wide398" : "native256", recovered ? "pass" : "fail", rebases,
                    checkpoint.target_bias, (unsigned long long)tail, checked_audio->underruns);
                strict_pass &= recovered;
            } else {
                strict_pass &= audio_ok && original_pace && video_ok && workload_ok;
                printf("stock-60hz-gate map=%s mode=%s result=%s video=%d original_pace=%d audio=%d clock_error_ticks=%llu pcm_error_frames=%llu workload=%d\n",
                    map_name, mode ? "wide398" : "native256",
                    audio_ok && original_pace && video_ok && workload_ok ? "pass" : "fail", video_ok, original_pace, audio_ok,
                    (unsigned long long)clock_error, (unsigned long long)pcm_error, workload_ok);
            }
            fflush(stdout);
        }
        if (drawn + repeated + merged != seconds * SIMCITY_HOST_PRESENT_HZ ||
            status.pcm_overflows || simcity_recomp_audio_dropped_frames(game))
            goto finish;
        simcity_prepared_video_close(video);
        video = NULL;
        paced_offscreen_close(&screen);
        if (construction_soak) {
            snprintf(capture, sizeof(capture), "%s/stock-world-construction-soak-final-%s.scsnap",
                directory, mode ? "wide398" : "native256");
            if (!stock_soak_infrastructure(game, "end", mode) ||
                !simcity_recomp_snapshot_save(game, capture, error, sizeof(error))) goto finish;
        }
        if (offscreen) {
            StockPacedFingerprint timed, unpaced;
            WorldProbe replay = {0};
            replay.hash = UINT64_C(1469598103934665603);
            if (!stock_paced_fingerprint(game, &pcm, &timed) ||
                !load_game(game, path, error, sizeof(error)) ||
                !simcity_recomp_set_widescreen(game, mode != 0u, error, sizeof(error))) goto finish;
            for (unsigned frame = 0u; frame < guest_frames + AUDIO_PREFILL; ++frame) {
                const uint16_t input = construction_replay ?
                    (frame < construction_tape.frames ? construction_tape.input[frame] : 0u) :
                    (frame < AUDIO_PREFILL ? 0u : stock_paced_input(game, map_choice, frame - AUDIO_PREFILL));
                if (!world_probe_step(game, &replay, input, 1u, 0, 0)) goto finish;
            }
            if (!stock_paced_fingerprint(game, &replay, &unpaced)) goto finish;
            const int clock_ok = timed.clocks == unpaced.clocks && timed.instructions == unpaced.instructions;
            const int state_ok = timed.wram == unpaced.wram && timed.tiles == unpaced.tiles;
            const int work_ok = timed.world_work == unpaced.world_work;
            const int pcm_ok = timed.pcm_frames == unpaced.pcm_frames && timed.pcm_hash == unpaced.pcm_hash;
            printf("stock-pace-parity map=%s mode=%s frames=%u clocks_and_work=%d wram_and_tiles=%d world_overlays_and_passes=%d pcm=%d\n",
                map_name, mode ? "wide398" : "native256", guest_frames, clock_ok, state_ok, work_ok, pcm_ok);
            fflush(stdout);
            strict_pass &= clock_ok && state_ok && work_ok && pcm_ok;
        }
    }
    completed = 1;
    ok = strict_pass;
finish:
    if (dispatch_task) (void)AvRevertMmThreadCharacteristics(dispatch_task);
    if (!completed)
        fprintf(stderr, "Paced benchmark could not finish map=%s: %s %s\n",
                map_name, error, simcity_recomp_last_error(game));
    simcity_prepared_video_close(video);
    paced_offscreen_close(&screen);
    stock_controller_tape_clear(&construction_tape);
    CloseHandle(timer);
    return ok;
}

static int stock_world_paced_probe(SimCityRecomp *game, const char *directory, int policy,
                                   int map_choice, unsigned duration) {
    return stock_world_paced_probe_widths(game, directory, policy, map_choice, duration, 3u);
}
#endif

static int stock_world_session_probe(SimCityRecomp *game, const char *directory) {
    enum { SW = 120, SH = 100, WW = 240, WH = 200, AX = 141, AY = 141, CX = 110, CY = 142 };
    uint8_t *stock = malloc(SW * SH * 2u);
    uint16_t *world = calloc(WW * WH, sizeof(*world));
    SimCityRecompStockWorldPower power = {0};
    SimCityRecompAudioStaticStatus audio = {0};
    uint64_t hash = UINT64_C(1469598103934665603), pcm = 0u, phase = 0u, queue = 0u;
    unsigned frame = 0u, settled = 0u, build_frame = 0u, pre_cycles = 0u, underruns = 0u;
    unsigned over_video_budget = 0u;
    unsigned funds_before = 0u, funds_after = 0u;
    uint16_t zones = 0u, plants = 0u;
    int x = 0, y = 0, found = 0, ok = 0, snapshot_verified = 0;
    double simulation_peak_ms = 0.0, total_ms = 0.0;
    char path[4096], error[256] = {0};

    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!stock || !world || !simcity_recomp_snapshot_load(game, path, error, sizeof(error)) ||
        !simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !simcity_recomp_read_wram(game, 0x10200u, stock, SW * SH * 2u) ||
        !stock_cell(game, &x, &y)) goto finish;
    /* Reuse a stock coal plant footprint and leave the building site empty.
       Only the B input below may place the residential zone. */
    for (unsigned sy = 1u; sy + 2u < SH && !found; ++sy)
        for (unsigned sx = 1u; sx + 2u < SW && !found; ++sx) {
            const size_t i = (sy * SW + sx) * 2u;
            if (((stock[i] | ((unsigned)stock[i + 1u] << 8u)) & 0x03ffu) != 0x028cu)
                continue;
            found = 1;
            for (int dy = -1; dy <= 2; ++dy)
                for (int dx = -1; dx <= 2; ++dx) {
                    const size_t from = ((size_t)((int)sy + dy) * SW + (unsigned)((int)sx + dx)) * 2u;
                    const size_t to = (size_t)(CY + dy) * WW + (unsigned)(CX + dx);
                    world[to] = (uint16_t)(stock[from] | ((unsigned)stock[from + 1u] << 8u));
                }
        }
    if (!found) goto finish;
    for (unsigned col = CX + 3u; col < AX; ++col) world[CY * WW + col] = 0x60u;
    for (frame = 1u; frame <= 4000u; ++frame) {
        const uint64_t before = pcm;
        uint16_t input = x < AX ? SIMCITY_INPUT_RIGHT : y < AY ? SIMCITY_INPUT_DOWN : 0u;
        if (!input && !build_frame && ++settled == 13u) {
            if (world[(AY + 1u) * WW + AX + 1u] != 0u ||
                !stock_funds(game, &funds_before)) goto finish;
            pre_cycles = power.completed_cycles;
            build_frame = frame;
            input = SIMCITY_INPUT_B;
        }
        const double start = gameplay_clock();
        if (!simcity_recomp_advance_stock_world_session(game, input, world, WW * WH, &power))
            goto finish;
        const double elapsed = (gameplay_clock() - start) * 1000.0;
        if (elapsed > simulation_peak_ms) simulation_peak_ms = elapsed;
        if (elapsed > 1000.0 / 60.0) ++over_video_budget;
        total_ms += elapsed;
        if (!stock_cell(game, &x, &y) || !drain_pcm(game, &hash, &pcm)) goto finish;
        queue += pcm - before;
        if (frame > 3u) {
            phase += (uint64_t)SIMCITY_RECOMP_AUDIO_SAMPLE_RATE * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
            const uint64_t demand = phase / SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            phase %= SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
            if (demand > queue) { ++underruns; queue = 0u; }
            else queue -= demand;
        }
        if (build_frame && frame == build_frame + 25u) {
            if (!stock_funds(game, &funds_after) || funds_before < 100u ||
                funds_after != funds_before - 100u ||
                (world[(AY + 1u) * WW + AX + 1u] & 0x03ffu) != 0x0084u)
                goto finish;
            printf("stock-session build_frame=%u cursor=(%d,%d) cost=100 prior_cycles=%u\n",
                   build_frame, x, y, pre_cycles);
            fflush(stdout);
        }
        if (build_frame && frame > build_frame + 25u && !snapshot_verified &&
            power.materializing && power.written_cells > 1000u) {
            if (!stock_world_resume_sample(game, directory, world, WW * WH, &power)) goto finish;
            snapshot_verified = 1;
        }
        if (build_frame && frame >= build_frame + 25u && power.completed_cycles >= 2u &&
            power.completed_cycles > pre_cycles &&
            (world[(AY + 1u) * WW + AX + 1u] & 0x83ffu) == 0x8084u) break;
    }
    if (!read_wram16(game, 0x0c73u, &zones) || !read_wram16(game, 0x0c85u, &plants) ||
        !simcity_recomp_audio_static_status(game, &audio)) goto finish;
    printf("stock-session frames=%u cycles=%u scanned=%u power_commit=%u zones=%u plants=%u zone_word=%04X pcm=%llu underruns=%u overflows=%llu dropped=%llu core_avg_ms=%.2f core_peak_ms=%.2f over_60hz_budget=%u\n",
           frame, power.completed_cycles, power.census.visited, power.written_cells, zones, plants,
           world[(AY + 1u) * WW + AX + 1u], (unsigned long long)pcm, underruns,
           (unsigned long long)audio.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game),
           total_ms / (double)frame, simulation_peak_ms, over_video_budget);
    snprintf(path, sizeof(path), "%s/stock-engine-world-session.bmp", directory);
    ok = found && build_frame && snapshot_verified && frame <= 4000u && power.completed_cycles >= 2u &&
         power.completed_cycles > pre_cycles && zones == 1u && plants == 1u &&
         power.census.visited == WW * WH && power.written_cells == WW * WH &&
         !power.order_errors && !power.census.order_errors && !underruns && !audio.pcm_overflows &&
         !simcity_recomp_audio_dropped_frames(game) &&
         simcity_recomp_render_stock_world_preview(game, world, WW * WH, 0, 0) &&
         write_bmp(path, simcity_recomp_frame_bgra(game),
                   SIMCITY_RECOMP_FRAME_WIDTH, SIMCITY_RECOMP_FRAME_HEIGHT);
finish:
    if (!ok) fprintf(stderr, "Stock session failed at frame %u cursor=(%d,%d) cycles=%u: %s %s\n",
                     frame, x, y, power.completed_cycles, error, simcity_recomp_last_error(game));
    free(world);
    free(stock);
    return ok;
}

static void cadence_drain_audio(SimCityRecomp *game, void *opaque) {
    WorldProbe *probe = (WorldProbe *)opaque;
    if (!drain_pcm(game, &probe->hash, &probe->frames)) ++probe->modeled_overflows;
}

static int stock_mixed_core_replay(SimCityRecomp *game, const char *directory) {
    enum { FRAMES = 1800 };
    static const uint16_t inputs[] = {SIMCITY_INPUT_RIGHT, SIMCITY_INPUT_DOWN,
        SIMCITY_INPUT_LEFT, SIMCITY_INPUT_UP};
    char path[4096], error[256] = {0};
    WorldProbe audio = {0};
    SimCityRecompAudioStaticStatus status = {0};
    audio.hash = UINT64_C(1469598103934665603);
    snprintf(path, sizeof(path), "%s/stock-world-mixed-development.scsnap", directory);
    if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error))) {
        fprintf(stderr, "Could not open developed-city test save: %s\n", error);
        return 0;
    }
    const double start = gameplay_clock();
    const uint64_t cpu_start = gameplay_thread_cycles();
    for (unsigned frame = 0u; frame < FRAMES; ++frame) {
        const uint16_t input = frame % 360u < 300u ? inputs[(frame / 360u) % 4u] : 0u;
        if (!world_probe_step(game, &audio, input, 1u, 1, 0)) return 0;
    }
    const uint64_t cpu_end = gameplay_thread_cycles();
    const double wall = gameplay_clock() - start;
    if (!simcity_recomp_audio_static_status(game, &status)) return 0;
    printf("mixed-core-state frame=%u master=%llu instructions=%llu smp_pc=%04X smp_validated=%llu pcm_frames=%llu pcm_hash=%016llX core_pcm_hash=%016llX overflows=%llu drops=%llu modeled_underruns=%u\n",
        simcity_recomp_current_frame(game), (unsigned long long)simcity_recomp_master_clock(game),
        (unsigned long long)simcity_recomp_instruction_count(game), status.current_smp_pc,
        (unsigned long long)status.validated_instructions, (unsigned long long)audio.frames,
        (unsigned long long)audio.hash, (unsigned long long)status.pcm_hash,
        (unsigned long long)status.pcm_overflows,
        (unsigned long long)simcity_recomp_audio_dropped_frames(game), audio.modeled_underruns);
    printf("mixed-core-timing frames=%u elapsed_ms=%.2f avg_ms=%.3f cpu_mcycles_per_frame=%.3f\n",
        FRAMES, wall * 1000.0, wall * 1000.0 / FRAMES,
        cpu_start != UINT64_MAX && cpu_end >= cpu_start ?
            (double)(cpu_end - cpu_start) / (FRAMES * 1000000.0) : 0.0);
    return !audio.modeled_underruns && !audio.modeled_overflows && !status.pcm_overflows &&
           !simcity_recomp_audio_dropped_frames(game);
}

typedef struct MotionCadence {
    unsigned count, last, min_gap, max_gap;
} MotionCadence;

static int stock_mixed_render_parity(SimCityRecomp *game, const char *directory) {
    enum { FRAMES = 480, WRAM_BYTES = 128 * 1024 };
    static const uint16_t route[] = {SIMCITY_INPUT_RIGHT,
        SIMCITY_INPUT_DOWN | SIMCITY_INPUT_A, SIMCITY_INPUT_LEFT,
        SIMCITY_INPUT_UP | SIMCITY_INPUT_A};
    static const char *const names[] = {"no-video", "native256", "wide398"};
    uint8_t *reference = malloc(WRAM_BYTES), *wram = malloc(WRAM_BYTES);
    uint64_t clocks = 0, instructions = 0, samples = 0, pcm_hash = 0, tiles = 0;
    uint32_t frame = 0;
    char path[4096], error[256] = {0};
    int ok = 0;
    if (!reference || !wram) goto finish;
    snprintf(path, sizeof(path), "%s/stock-world-mixed-development.scsnap", directory);
    for (unsigned mode = 0; mode < 3u; ++mode) {
        WorldProbe audio = {0};
        SimCityRecompAudioStaticStatus status = {0};
        uint64_t map_hash = UINT64_C(14695981039346656037);
        audio.hash = map_hash;
        audio.measure_all = 1;
        if (!simcity_recomp_stock_world_open_snapshot(game, path, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, mode == 2u, error, sizeof(error))) goto finish;
        for (unsigned step = 0; step < FRAMES; ++step) {
            const uint16_t input = step % 120u < 100u ? route[step / 120u] : 0u;
            if (!world_probe_step(game, &audio, input, 1u, 0, 0) ||
                (mode && !simcity_recomp_render_presentation_frame(game, error, sizeof(error)))) goto finish;
        }
        for (unsigned y = 0; y < TOUR_HEIGHT; ++y)
            for (unsigned x = 0; x < TOUR_WIDTH; ++x) {
                uint16_t tile;
                if (!simcity_recomp_stock_world_tile(game, x, y, &tile)) goto finish;
                map_hash = (map_hash ^ tile) * UINT64_C(1099511628211);
            }
        if (!simcity_recomp_read_wram(game, 0u, wram, WRAM_BYTES) ||
            !simcity_recomp_audio_static_status(game, &status) || status.pcm_overflows ||
            audio.modeled_underruns || audio.modeled_overflows || simcity_recomp_audio_dropped_frames(game))
            goto finish;
        if (mode == 0u) {
            memcpy(reference, wram, WRAM_BYTES);
            clocks = simcity_recomp_master_clock(game);
            instructions = simcity_recomp_instruction_count(game);
            frame = simcity_recomp_current_frame(game);
            samples = audio.frames;
            pcm_hash = audio.hash;
            tiles = map_hash;
        }
        const int same = !memcmp(reference, wram, WRAM_BYTES) && tiles == map_hash &&
            clocks == simcity_recomp_master_clock(game) && instructions == simcity_recomp_instruction_count(game) &&
            frame == simcity_recomp_current_frame(game) && samples == audio.frames && pcm_hash == audio.hash;
        printf("mixed-render-parity mode=%s identical=%d guest_frames=%u pcm=%llu pcm_hash=%016llX tile_hash=%016llX\n",
            names[mode], same, FRAMES, (unsigned long long)audio.frames,
            (unsigned long long)audio.hash, (unsigned long long)map_hash);
        if (!same) goto finish;
    }
    ok = 1;
finish:
    if (!ok) fprintf(stderr, "Developed World Map render parity failed: %s %s\n", error, simcity_recomp_last_error(game));
    free(wram);
    free(reference);
    return ok;
}

static void motion_change(MotionCadence *m, unsigned frame) {
    if (m->last) {
        const unsigned gap = frame - m->last;
        if (!m->min_gap || gap < m->min_gap) m->min_gap = gap;
        if (gap > m->max_gap) m->max_gap = gap;
    }
    m->last = frame;
    ++m->count;
}

static int stock_world_tile_cadence(SimCityRecomp *game, const char *directory) {
    enum { FRAMES = 480 };
    static const struct {
        const char *name;
        unsigned x, y, width, height;
    } samples[] = {
        {"water", 207u, 145u, 18u, 18u},
        {"coal-plant", 8u, 197u, 30u, 31u},
        {"shop", 66u, 138u, 16u, 18u},
        {"road-rail", 49u, 108u, 13u, 53u}
    };
    char source[4096], capture[4096], error[256] = {0};
    uint64_t native_trace[sizeof(samples) / sizeof(samples[0])] = {0};
    const double rate = simcity_recomp_nominal_fps();
    snprintf(source, sizeof(source), "%s/stock-world-mixed-development.scsnap", directory);
    for (unsigned wide = 0; wide < 2u; ++wide) {
        WorldProbe audio = {0};
        SimCityRecompAudioStaticStatus status = {0};
        MotionCadence cadence[sizeof(samples) / sizeof(samples[0])] = {0};
        uint64_t previous[sizeof(samples) / sizeof(samples[0])] = {0};
        uint64_t trace[sizeof(samples) / sizeof(samples[0])] = {0};
        audio.measure_all = 1;
        /* Match the mixed-district evidence camera before observing any
           animation. Keep every input neutral during the actual sample. */
        if (!simcity_recomp_stock_world_open_snapshot(game, source, error, sizeof(error)) ||
            !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) ||
            !stock_move_axis(game, &audio, 71, 0) || !stock_move_axis(game, &audio, 143, 1) ||
            !simcity_recomp_set_widescreen(game, wide != 0u, error, sizeof(error))) goto fail;
        for (unsigned f = 0; f <= FRAMES; ++f) {
            if ((f && !world_probe_step(game, &audio, 0u, 1u, 0, 0)) ||
                !simcity_recomp_render_presentation_frame(game, error, sizeof(error))) goto fail;
            const unsigned width = simcity_recomp_frame_width(game);
            const unsigned margin = wide ? SIMCITY_RECOMP_WIDESCREEN_MARGIN : 0u;
            if (width != SIMCITY_RECOMP_FRAME_WIDTH + margin * 2u) goto fail;
            const uint32_t *pixels = simcity_recomp_frame_bgra(game);
            for (unsigned n = 0; n < sizeof(samples) / sizeof(samples[0]); ++n) {
                uint64_t hash = UINT64_C(14695981039346656037);
                for (unsigned dy = 0; dy < samples[n].height; ++dy)
                    for (unsigned dx = 0; dx < samples[n].width; ++dx) {
                        const size_t p = (size_t)(samples[n].y + dy) * width + margin + samples[n].x + dx;
                        hash = (hash ^ pixels[p]) * UINT64_C(1099511628211);
                    }
                if (f && hash != previous[n]) motion_change(&cadence[n], f);
                previous[n] = hash;
                trace[n] = (trace[n] ^ hash) * UINT64_C(1099511628211);
            }
            if (f == 0u || f == FRAMES) {
                snprintf(capture, sizeof(capture), "%s/stock-world-tile-cadence-%u-%s.bmp", directory,
                         width, f ? "last" : "first");
                if (!write_bmp(capture, pixels, width, SIMCITY_RECOMP_FRAME_HEIGHT)) goto fail;
            }
        }
        if (!simcity_recomp_audio_static_status(game, &status) || status.pcm_overflows ||
            simcity_recomp_audio_dropped_frames(game) || audio.modeled_underruns || audio.modeled_overflows)
            goto fail;
        for (unsigned n = 0; n < sizeof(samples) / sizeof(samples[0]); ++n) {
            printf("stock-world-tile-cadence width=%u sample=%s guest_frames=%u changes=%u hz=%.2f gap_frames=%u..%u\n",
                simcity_recomp_frame_width(game), samples[n].name, FRAMES,
                cadence[n].count, rate * cadence[n].count / FRAMES, cadence[n].min_gap, cadence[n].max_gap);
            if (!wide) native_trace[n] = trace[n];
            else if (native_trace[n] != trace[n]) {
                fprintf(stderr, "Animation trace changed with display width: %s\n", samples[n].name);
                goto fail;
            }
        }
    }
    return 1;
fail:
    fprintf(stderr, "World Map animation sample failed: %s %s\n", error, simcity_recomp_last_error(game));
    return 0;
}

static int stock_built_motion_cadence(SimCityRecomp *game, const char *directory) {
    enum { SAMPLE = 120 };
    char path[4096], error[256] = {0};
    static const char *const phase_names[] = {"left", "up", "fast-right", "fast-down"};
    static const uint16_t inputs[] = {SIMCITY_INPUT_LEFT, SIMCITY_INPUT_UP,
        SIMCITY_INPUT_RIGHT | SIMCITY_INPUT_A, SIMCITY_INPUT_DOWN | SIMCITY_INPUT_A};
    const double rate = simcity_recomp_nominal_fps();
    for (unsigned world = 0u; world < 2u; ++world) {
        uint64_t master[4], instructions[4], pcm_count[4], pcm_hash[4];
        uint32_t final_frame[4];
        int (*load)(SimCityRecomp *, const char *, char *, size_t) = world ?
            simcity_recomp_stock_world_open_snapshot : simcity_recomp_snapshot_load;
        snprintf(path, sizeof(path), "%s/%s", directory,
            world ? "stock-world-buildings.scsnap" : "stock-60hz-city.scsnap");
        for (unsigned render = 0u; render < 2u; ++render) {
            WorldProbe audio = {0};
            unsigned cursor_changes = 0u, camera_changes = 0u;
            for (unsigned phase = 0u; phase < sizeof(inputs) / sizeof(inputs[0]); ++phase) {
                WorldProbe transit = {0};
                StockRamPosition before;
                MotionCadence cursor = {0}, camera = {0}, tile = {0};
                memset(&audio, 0, sizeof(audio));
                audio.hash = UINT64_C(1469598103934665603);
                if (!load(game, path, error, sizeof(error)) ||
                    simcity_recomp_stock_world_active(game) != (int)world ||
                    !simcity_recomp_set_widescreen(game, 1, error, sizeof(error))) {
                    fprintf(stderr, "Unable to open movement sample: %s\n", error);
                    return 0;
                }
                transit.hash = UINT64_C(1469598103934665603);
                if (!stock_move_axis(game, &transit, world ? 120 : 60, 0) ||
                    !stock_move_axis(game, &transit, world ? 100 : 50, 1) ||
                    !stock_read_position(game, &before, 1) || before.focus != 0xffu) {
                    fprintf(stderr, "Movement sample could not center map=%s input=%s\n",
                        world ? "world" : "normal", phase_names[phase]);
                    return 0;
                }
                for (unsigned f = 1u; f <= SAMPLE; ++f) {
                    StockRamPosition after = {0};
                    if (!(render ? simcity_recomp_advance_streamed_headless(game, inputs[phase],
                                  1u, cadence_drain_audio, &audio, NULL) :
                                  simcity_recomp_advance_headless(game, inputs[phase], 1u, NULL)))
                        return 0;
                    cadence_drain_audio(game, &audio);
                    if (!stock_read_position(game, &after, 0)) return 0;
                    if (before.screen_x != after.screen_x || before.screen_y != after.screen_y)
                        motion_change(&cursor, f);
                    if (before.view_x != after.view_x || before.view_y != after.view_y ||
                        ((before.fine_x ^ after.fine_x) & 7u) || ((before.fine_y ^ after.fine_y) & 7u))
                        motion_change(&camera, f);
                    if (before.x != after.x || before.y != after.y) motion_change(&tile, f);
                    before = after;
                    if (render && f % 3u != 0u &&
                        !simcity_recomp_render_presentation_frame(game, error, sizeof(error)))
                        return 0;
                }
                cursor_changes += cursor.count;
                camera_changes += camera.count;
                if (!render)
                    printf("stock-motion map=%s input=%s guest_frames=%u cursor_changes=%u cursor_hz=%.2f cursor_gaps=%u..%u camera_changes=%u camera_hz=%.2f camera_gaps=%u..%u world_tile_changes=%u\n",
                        world ? "world" : "normal", phase_names[phase], SAMPLE,
                        cursor.count, rate * cursor.count / SAMPLE, cursor.min_gap, cursor.max_gap,
                        camera.count, rate * camera.count / SAMPLE, camera.min_gap, camera.max_gap, tile.count);
                SimCityRecompAudioStaticStatus status = {0};
                if (audio.modeled_overflows || !simcity_recomp_audio_static_status(game, &status) ||
                    status.pcm_overflows || simcity_recomp_audio_dropped_frames(game)) return 0;
                if (!render) {
                    master[phase] = simcity_recomp_master_clock(game);
                    instructions[phase] = simcity_recomp_instruction_count(game);
                    final_frame[phase] = simcity_recomp_current_frame(game);
                    pcm_count[phase] = audio.frames;
                    pcm_hash[phase] = audio.hash;
                } else {
                    const int same = master[phase] == simcity_recomp_master_clock(game) &&
                        instructions[phase] == simcity_recomp_instruction_count(game) &&
                        final_frame[phase] == simcity_recomp_current_frame(game) &&
                        pcm_count[phase] == audio.frames && pcm_hash[phase] == audio.hash;
                    printf("stock-motion-clock-audio map=%s input=%s identical=%d pcm=%llu\n",
                        world ? "world" : "normal", phase_names[phase], same,
                        (unsigned long long)pcm_count[phase]);
                    if (!same) return 0;
                }
            }
            if (!cursor_changes || !camera_changes) return 0;
        }
    }
    return 1;
}

static int stock_motion_cadence(SimCityRecomp *game, const char *directory) {
    char path[4096], error[256];
    uint16_t previous[4] = {0};
    unsigned cursor_updates = 0u, scroll_updates = 0u;
    enum { FRAMES = 120 };
    const uint32_t offsets[] = {0x025du, 0x025fu, 0x01bdu, 0x0139u};
    WorldProbe probe = {0};
    snprintf(path, sizeof(path), "%s/four-plants-roads-zones.scsnap", directory);
    if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) {
        fprintf(stderr, "Cannot load stock movement sample: %s\n", error);
        return 0;
    }
    for (unsigned i = 0u; i < 4u; ++i)
        if (!read_wram16(game, offsets[i], &previous[i])) return 0;
    for (unsigned frame = 1u; frame <= FRAMES; ++frame) {
        uint16_t current[4];
        if (!world_probe_step(game, &probe, SIMCITY_INPUT_LEFT, 1u, 0, 0)) return 0;
        for (unsigned i = 0u; i < 4u; ++i)
            if (!read_wram16(game, offsets[i], &current[i])) return 0;
        const int cursor = current[0] != previous[0] || current[1] != previous[1];
        const int scroll = current[2] != previous[2] || (current[3] & 7u) != (previous[3] & 7u);
        cursor_updates += (unsigned)cursor;
        scroll_updates += (unsigned)scroll;
        printf("stock-held-left frame=%u cursor_changed=%d scroll_changed=%d cursor_x=%d scroll_x=%d\n",
               frame, cursor, scroll, (int)(int16_t)current[0],
               (int)(int16_t)current[2] * 8 + (current[3] & 7));
        memcpy(previous, current, sizeof(previous));
    }
    printf("stock-motion-summary frames=%u cursor_updates=%u scroll_updates=%u\n",
           FRAMES, cursor_updates, scroll_updates);
    const uint64_t master = simcity_recomp_master_clock(game);
    const uint64_t instructions = simcity_recomp_instruction_count(game);
    const uint32_t final_frame = simcity_recomp_current_frame(game);
    WorldProbe split = {0};
    if (!simcity_recomp_snapshot_load(game, path, error, sizeof(error))) return 0;
    for (unsigned frame = 1u; frame <= FRAMES; ++frame) {
        if (!simcity_recomp_advance_streamed_headless(
                game, SIMCITY_INPUT_LEFT, 1u, cadence_drain_audio, &split, NULL))
            return 0;
        cadence_drain_audio(game, &split);
        /* Change which guest frames are rendered, simulating late video slots. */
        if (frame % 3u != 0u && !simcity_recomp_render_presentation_frame(game, error, sizeof(error)))
            return 0;
    }
    const int identical = simcity_recomp_master_clock(game) == master &&
        simcity_recomp_instruction_count(game) == instructions &&
        simcity_recomp_current_frame(game) == final_frame &&
        split.frames == probe.frames && split.hash == probe.hash && !split.modeled_overflows;
    printf("stock-clock-audio-equivalence identical=%d pcm_frames=%llu\n",
           identical, (unsigned long long)split.frames);
    return cursor_updates && scroll_updates && identical;
}

static int stock_freeland_plants(SimCityRecomp *game, const char *directory) {
    static const int sites[][2] = {{15,15}, {77,15}, {77,65}, {15,65}};
    int plant_x[4];
    WorldProbe probe = {0};
    SimCityRecompAudioStaticStatus audio = {0};
    char error[256], snapshot[4096];
    uint8_t treasury[3];
    setvbuf(stdout, NULL, _IONBF, 0);
    probe.hash = UINT64_C(1469598103934665603);
    if (!load_freeland_unlock_sram(game, error, sizeof(error))) return 0;
    for (unsigned frame = 0; frame < 2750u; ++frame)
        if (!world_probe_step(game, &probe, freeland_initial_build_input(frame), 1, 0, 0))
            return 0;
    if (!inspect_freeland_initial_map(game) || !simcity_recomp_probe_freeland_funds(game) ||
        !simcity_recomp_set_widescreen(game, 1, error, sizeof(error)))
        return 0;
    for (unsigned frame = 2750u; frame < 3160u; ++frame)
        if (!world_probe_step(game, &probe, freeland_initial_build_input(frame), 1, 0, 0))
            return 0;
    if (!stock_benchmark(game, &probe, "empty-freeland")) return 0;
    for (size_t i = 0; i < sizeof(sites) / sizeof(sites[0]); ++i) {
        int x = 0, y = 0;
        int chosen = -1;
        char name[40];
        for (int distance = 0; distance <= 12 && chosen < 0; ++distance) {
            if (stock_clear_site(game, sites[i][0] + distance, sites[i][1], 4))
                chosen = sites[i][0] + distance;
            else if (stock_clear_site(game, sites[i][0] - distance, sites[i][1], 4))
                chosen = sites[i][0] - distance;
        }
        if (chosen < 0) return 0;
        int reached = stock_move_axis(game, &probe, chosen, 0) &&
                      stock_move_axis(game, &probe, sites[i][1], 1) &&
                      stock_cell(game, &x, &y);
        if (!reached) return 0;
        snprintf(name, sizeof(name), "plant-%u-before", (unsigned)i + 1u);
        if (!capture_checkpoint(game, directory, name, 0, &x, &y) ||
            !verify_power_site_at(game, (unsigned)x, (unsigned)y, 0) ||
            !world_probe_step(game, &probe, SIMCITY_INPUT_B, 1, 0, 0) ||
            !world_probe_step(game, &probe, 0u, 60, 0, 0) ||
            !verify_power_site_at(game, (unsigned)x, (unsigned)y, 1) ||
            !simcity_recomp_read_wram(game, 0x0b9du, treasury, sizeof(treasury))) {
            fprintf(stderr, "Plant %u assertion failed at (%d,%d)\n", (unsigned)i + 1u, x, y);
            return 0;
        }
        printf("plant=%u world=(%d,%d) funds=%u\n", (unsigned)i + 1u, x, y,
               (unsigned)treasury[0] | ((unsigned)treasury[1] << 8u) |
               ((unsigned)treasury[2] << 16u));
        plant_x[i] = x;
        snprintf(name, sizeof(name), "plant-%u-after", (unsigned)i + 1u);
        if (!capture_checkpoint(game, directory, name, 0, &x, &y) ||
            !stock_benchmark(game, &probe, name)) return 0;
        if (i == 0u &&
            (!world_probe_step(game, &probe, SIMCITY_INPUT_X, 2, 0, 0) ||
             !world_probe_step(game, &probe, 0u, 60, 0, 0))) return 0;
    }
    if (snprintf(snapshot, sizeof(snapshot), "%s/four-plants.scsnap", directory) < 0 ||
        !simcity_recomp_snapshot_save(game, snapshot, error, sizeof(error))) return 0;
    if (!stock_lay_roads(game, &probe, directory, plant_x) ||
        !stock_add_roadside_zones(game, &probe, directory) ||
        !simcity_recomp_audio_static_status(game, &audio)) return 0;
    printf("stock_audio core_overflows=%llu dropped=%llu unknown=%llu\n",
           (unsigned long long)audio.pcm_overflows,
           (unsigned long long)simcity_recomp_audio_dropped_frames(game),
           (unsigned long long)audio.pcm_unknown_frames);
    return !audio.route_failed && !audio.pcm_overflows && !audio.pcm_unknown_frames &&
           !simcity_recomp_audio_dropped_frames(game);
}

static int world_menu_probe(SimCityRecomp *game, const char *directory) {
    WorldProbe probe = {0};
    SimCityWorldMapStatus status;
    char path[4096], error[256];
    unsigned menu_frame = 0u;
    unsigned menu_samples = 0u, menu_changes = 0u, last_change = 0u;
    unsigned min_gap = 0u, max_gap = 0u;
    uint64_t previous_pixels = 0u;
    uint64_t title_previous = 0u;
    unsigned title_samples = 0u;
    MotionCadence title_changes = {0};
    probe.hash = UINT64_C(1469598103934665603);
    if (simcity_recomp_world_menu_ready(game) || simcity_recomp_world_enter_from_menu(game))
        return 0;
    simcity_recomp_world_demo_arm(game);
    for (unsigned i = 0u; i < 1450u; ++i) {
        const uint16_t input = simcity_recomp_world_demo_input(game);
        if (!simcity_recomp_world_demo_active(game) ||
            !world_probe_step(game, &probe, input, 1u, 1, 0)) return 0;
        if (i >= SIMCITY_RECOMP_TITLE_FRAME - 120u && i < SIMCITY_RECOMP_TITLE_FRAME) {
            if (!simcity_recomp_render_presentation_frame(game, error, sizeof(error))) return 0;
            const unsigned width = simcity_recomp_frame_width(game);
            const uint32_t *image = simcity_recomp_frame_bgra(game);
            const uint64_t pixels = fnv1a(image, (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT);
            if (title_samples && pixels != title_previous)
                motion_change(&title_changes, title_samples + 1u);
            title_previous = pixels;
            ++title_samples;
            if (i + 1u == SIMCITY_RECOMP_TITLE_FRAME) {
                snprintf(path, sizeof(path), "%s/stock-title-cadence.bmp", directory);
                if (!write_bmp(path, image, width, SIMCITY_RECOMP_FRAME_HEIGHT)) return 0;
            }
        }
        if (i < SIMCITY_RECOMP_TITLE_FRAME &&
            simcity_recomp_world_menu_ready(game)) return 0;
        if (!menu_frame && simcity_recomp_world_menu_ready(game)) {
            menu_frame = simcity_recomp_current_frame(game);
            snprintf(path, sizeof(path), "%s/stock-main-menu.bmp", directory);
            if (!simcity_recomp_render_current_frame(game, error, sizeof(error)) ||
                !write_bmp(path, simcity_recomp_frame_bgra(game),
                           simcity_recomp_frame_width(game), SIMCITY_RECOMP_FRAME_HEIGHT))
                return 0;
            printf("stock-main-menu frame=%u\n", menu_frame);
        }
        if (simcity_recomp_world_menu_ready(game)) {
            uint64_t pixels;
            if (!simcity_recomp_render_presentation_frame(game, error, sizeof(error))) return 0;
            pixels = fnv1a(simcity_recomp_frame_bgra(game),
                           (size_t)simcity_recomp_frame_width(game) *
                           SIMCITY_RECOMP_FRAME_HEIGHT);
            if (menu_samples && pixels != previous_pixels) {
                const unsigned gap = menu_samples - last_change;
                if (last_change && (!min_gap || gap < min_gap)) min_gap = gap;
                if (last_change && gap > max_gap) max_gap = gap;
                last_change = menu_samples;
                ++menu_changes;
            }
            previous_pixels = pixels;
            ++menu_samples;
        }
        if (simcity_recomp_world_map_status(game, &status)) {
            const double rate = simcity_recomp_nominal_fps();
            printf("stock-title-visual frames=%u changed=%u changes_hz=%.2f min_gap=%u max_gap=%u\n",
                title_samples, title_changes.count,
                title_samples > 1u ? rate * title_changes.count / (title_samples - 1u) : 0.0,
                title_changes.min_gap, title_changes.max_gap);
            printf("stock-menu-visual frames=%u changed=%u changes_hz=%.2f min_gap=%u max_gap=%u\n",
                   menu_samples, menu_changes,
                   menu_samples > 1u ? rate * menu_changes / (menu_samples - 1u) : 0.0,
                   min_gap, max_gap);
            printf("world-entry frame=%u width=%u height=%u funds=%u underruns=%u overflows=%u\n",
                   simcity_recomp_current_frame(game), status.width, status.height,
                   status.funds, probe.modeled_underruns, probe.modeled_overflows);
            if (menu_frame < SIMCITY_RECOMP_TITLE_FRAME ||
                simcity_recomp_world_menu_ready(game) ||
                status.width != 240u || status.height != 200u || status.funds != 20000u ||
                probe.modeled_underruns || probe.modeled_overflows) return 0;
            if (!world_probe_checkpoint(game, directory, "world-map-entry",
                                        status.cursor_x, status.cursor_y, 0u, 0u)) return 0;
            simcity_recomp_world_demo_cancel(game);
            simcity_recomp_world_map_end(game);
            if (!simcity_recomp_world_menu_ready(game) ||
                !simcity_recomp_render_presentation_frame(game, error, sizeof(error))) return 0;
            const unsigned width = simcity_recomp_frame_width(game);
            const size_t count = (size_t)width * SIMCITY_RECOMP_FRAME_HEIGHT;
            const uint64_t resting = fnv1a(simcity_recomp_frame_bgra(game), count);
            unsigned response = 0u;
            for (unsigned f = 1u; f <= 8u; ++f) {
                if (!world_probe_step(game, &probe, f == 1u ? SIMCITY_INPUT_DOWN : 0u, 1u, 1, 0) ||
                    !simcity_recomp_world_menu_ready(game) ||
                    !simcity_recomp_render_presentation_frame(game, error, sizeof(error))) return 0;
                if (fnv1a(simcity_recomp_frame_bgra(game), count) != resting) {
                    response = f;
                    break;
                }
            }
            printf("stock-menu-down visual_response_guest_frames=%u\n", response);
            snprintf(path, sizeof(path), "%s/stock-main-menu-down.bmp", directory);
            if (!response || !write_bmp(path, simcity_recomp_frame_bgra(game), width,
                                       SIMCITY_RECOMP_FRAME_HEIGHT) ||
                !world_probe_step(game, &probe, 0u, 8u, 1, 0) ||
                !world_probe_step(game, &probe, SIMCITY_INPUT_UP, 1u, 1, 0) ||
                !world_probe_step(game, &probe, 0u, 8u, 1, 0) ||
                !simcity_recomp_render_presentation_frame(game, error, sizeof(error)) ||
                fnv1a(simcity_recomp_frame_bgra(game), count) != resting ||
                !world_probe_step(game, &probe, SIMCITY_INPUT_B, 2u, 1, 0) ||
                !world_probe_step(game, &probe, 0u, 120u, 1, 0)) return 0;
            printf("after-stock-selection frame=%u ready=%d\n",
                   simcity_recomp_current_frame(game), simcity_recomp_world_menu_ready(game));
            return !simcity_recomp_world_menu_ready(game) &&
                   !simcity_recomp_world_enter_from_menu(game) &&
                   !probe.modeled_underruns && !probe.modeled_overflows;
        }
    }
    return 0;
}

int main(int argc, char **argv) {
    uint8_t *rom = NULL;
    size_t rom_size = 0u;
    SimCityRecomp *game = NULL;
    uint32_t *native = NULL;
    const uint32_t *wide;
    char error[256] = {0};
    char native_path[4096];
    char wide_path[4096];
    char wram_path[4096];
    uint8_t *wram = NULL;
    FILE *wram_file;
    unsigned x, y;
    size_t mismatches = 0u;
    int traverse_practice = 0;
    int left_edge_practice = 0;
    int toolbar_practice = 0;
    int hide_practice = 0;
    int hide_show_practice = 0;
    int cursor_right_practice = 0;
    int hud_cycle_practice = 0;
    int hud_native_cycle_practice = 0;
    int power_select_practice = 0;
    int power_build_practice = 0;
    int power_position_practice = 0;
    int widescreen_tour_practice = 0;
    int scenario_corners = 0;
    int freeland_initial = 0;
    int freeland_initial_build = 0;
    int freeland_corners = 0;
    int neutral_route = 0;
    int min_view_x = 32767;
    int max_view_x = -32768;
    int min_wide_cursor_x = 32767;
    int max_wide_cursor_x = -32768;
    int allow_center_difference = 0;
    uint16_t power_funds_before = 0u;
    unsigned freeland_site_x = 0u, freeland_site_y = 0u;
    uint64_t pcm_hash = UINT64_C(1469598103934665603);
    uint64_t pcm_frames = 0u;
    if (argc != 4) {
        fprintf(stderr, "usage: %s ROM SCSTATE OUTPUT-DIRECTORY\n", argv[0]);
        return 2;
    }
    if (!read_file(argv[1], &rom, &rom_size) ||
        !simcity_recomp_create(&game, rom, rom_size, error, sizeof(error))) {
        fprintf(stderr, "create failed: %s\n", error);
        free(rom);
        return 1;
    }
    free(rom);
    if (strcmp(argv[2], "stock-mixed-core-replay") == 0) {
        int ok = stock_mixed_core_replay(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-mixed-render-parity") == 0) {
        int ok = stock_mixed_render_parity(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-tile-cadence") == 0) {
        int ok = stock_world_tile_cadence(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
#ifdef _WIN32
#if defined(_M_X64)
    if (strcmp(argv[2], "stock-world-full-core-samples") == 0) {
        int ok = stock_world_core_sample_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-tape-profile") == 0) {
        const int ok = stock_verify_construction_tape(game, argv[3], 1);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
#endif
    if (strcmp(argv[2], "stock-world-image-input-reuse") == 0) {
        int ok = stock_world_image_input_reuse_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-headless-gate") == 0 ||
        strcmp(argv[2], "stock-60hz-headless-gate-offscreen") == 0 ||
        strcmp(argv[2], "stock-60hz-headless-gate-overlap") == 0 ||
        strcmp(argv[2], "stock-60hz-headless-gate-cooperative") == 0 ||
        strcmp(argv[2], "stock-60hz-headless-gate-cooperative-extra-lead") == 0 ||
        strcmp(argv[2], "stock-60hz-headless-gate-practice") == 0) {
        static const int maps[] = {6, 1, 2, 7, 8};
        const int practice_only = strcmp(argv[2], "stock-60hz-headless-gate-practice") == 0;
        const int extra_lead = strcmp(argv[2], "stock-60hz-headless-gate-cooperative-extra-lead") == 0;
        const int policy = strcmp(argv[2], "stock-60hz-headless-gate-overlap") == 0 ? 8 :
            strcmp(argv[2], "stock-60hz-headless-gate-offscreen") == 0 ? 7 :
            extra_lead ? 6 :
            strcmp(argv[2], "stock-60hz-headless-gate-cooperative") == 0 ? 5 : 3;
        unsigned passed = 0u, tested = 0u;
        for (unsigned i = 0u; i < sizeof(maps) / sizeof(maps[0]); ++i) {
            if (practice_only && maps[i] != 7) continue;
            if (extra_lead && maps[i] == 6) continue; /* World Map already uses three frames. */
            ++tested;
            if (simcity_recomp_reset(game, error, sizeof(error)) &&
                stock_world_paced_probe(game, argv[3], policy, maps[i], maps[i] == 6 ? 30u : 15u))
                ++passed;
        }
        printf("stock-60hz-gate-result scenes_passed=%u/%u headless_only=1\n",
               passed, tested);
        simcity_recomp_destroy(game);
        return passed == tested ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-video-pixel-parity") == 0) {
        int ok = stock_video_pixel_parity(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-city") == 0 || strcmp(argv[2], "stock-60hz-scenario") == 0) {
        int ok = stock_world_paced_probe(game, argv[3], 2,
            strcmp(argv[2], "stock-60hz-city") == 0 ? 1 : 2, 0u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-built") == 0 ||
        strcmp(argv[2], "stock-60hz-world-built-long") == 0) {
        int ok = stock_world_paced_probe(game, argv[3], 2, 3,
            strcmp(argv[2], "stock-60hz-world-built-long") == 0 ? 60u : 0u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-aged") == 0) {
        int ok = stock_world_paced_probe(game, argv[3], 2, 4, 0u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-mixed") == 0) {
        int ok = stock_world_paced_probe(game, argv[3], 2, 5, 0u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-cooperative") == 0) {
        int ok = stock_world_paced_probe(game, argv[3], 5, 6, 30u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-offscreen-overlap") == 0) {
        int ok = stock_world_paced_probe(game, argv[3], 8, 6, 20u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-stall-recovery") == 0 ||
        strcmp(argv[2], "stock-60hz-world-stall-recovery-wide") == 0) {
        const unsigned widths = strcmp(argv[2], "stock-60hz-world-stall-recovery-wide") == 0 ? 2u : 3u;
        int ok = stock_world_paced_probe_widths(game, argv[3], 9, 6, 10u, widths);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-full-stress") == 0) {
        int ok = stock_world_paced_probe(game, argv[3], 7, 10, 60u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-construction-tape") == 0 ||
        strcmp(argv[2], "stock-60hz-world-construction-tape-wide") == 0 ||
        strcmp(argv[2], "stock-60hz-world-construction-tape-wide-mmcss") == 0 ||
        strcmp(argv[2], "stock-60hz-world-construction-tape-wide-wake-guard") == 0) {
        const unsigned widths = strcmp(argv[2], "stock-60hz-world-construction-tape") == 0 ? 3u : 2u;
        const int policy = strcmp(argv[2], "stock-60hz-world-construction-tape-wide-wake-guard") == 0 ? 12 :
            strcmp(argv[2], "stock-60hz-world-construction-tape-wide-mmcss") == 0 ? 13 : 8;
        int ok = stock_verify_construction_tape(game, argv[3], 0) &&
            stock_world_paced_probe_widths(game, argv[3], policy, 22, 0u, widths);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-construction-soak") == 0) {
        int ok = stock_world_paced_probe(game, argv[3], 8, 21, 1200u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-full-power-tour") == 0 ||
        strcmp(argv[2], "stock-60hz-world-full-power-tour-wide") == 0) {
        const unsigned widths = strcmp(argv[2], "stock-60hz-world-full-power-tour-wide") == 0 ? 2u : 3u;
        int ok = stock_world_paced_probe_widths(game, argv[3], 8, 20, STOCK_FULL_TOUR_SECONDS, widths);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-full-tour-route-audit") == 0) {
        const int ok = stock_world_full_tour_route_audit(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-full-power") == 0 ||
        strcmp(argv[2], "stock-60hz-world-full-power-overlap") == 0 ||
        strcmp(argv[2], "stock-60hz-world-full-power-cached-scale") == 0 ||
        strcmp(argv[2], "stock-60hz-world-full-power-unscaled-dib") == 0) {
        const int policy = strcmp(argv[2], "stock-60hz-world-full-power-overlap") == 0 ? 8 :
            strcmp(argv[2], "stock-60hz-world-full-power-cached-scale") == 0 ? 11 :
            strcmp(argv[2], "stock-60hz-world-full-power-unscaled-dib") == 0 ? 10 : 7;
        int ok = stock_world_paced_probe(game, argv[3], policy, 11, 90u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-fire-native-reference") == 0) {
        const int ok = stock_fire_native_reference(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-plane-overlap") == 0 ||
        strcmp(argv[2], "stock-60hz-world-plane-overlap-wide") == 0) {
        const int short_wide = strcmp(argv[2], "stock-60hz-world-plane-overlap-wide") == 0;
        const int ok = stock_world_paced_probe_widths(game, argv[3], 8, 25, short_wide ? 12u : 30u,
                                                      short_wide ? 2u : 3u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    {
        static const struct { const char *name; int world; unsigned world_seconds, ordinary_seconds; } samples[] = {
            {"quake", 12, 15u, 15u}, {"tornado", 14, 15u, 15u},
            {"monster", 16, 15u, 15u}, {"flood", 18, 15u, 15u},
            /* Controller-triggered World Map fire first changes at frame 4080. */
            {"fire", 23, 80u, 30u}
        };
        for (unsigned i = 0u; i < sizeof(samples) / sizeof(samples[0]); ++i) {
            char baseline[64], overlap[64];
            snprintf(baseline, sizeof(baseline), "stock-60hz-disaster-%s", samples[i].name);
            snprintf(overlap, sizeof(overlap), "stock-60hz-disaster-%s-overlap", samples[i].name);
            const int policy = strcmp(argv[2], baseline) == 0 ? 7 : strcmp(argv[2], overlap) == 0 ? 8 : 0;
            if (policy) {
                const int world_ok = stock_world_paced_probe(game, argv[3], policy, samples[i].world, samples[i].world_seconds);
                const int ordinary_ok = simcity_recomp_reset(game, error, sizeof(error)) &&
                    stock_world_paced_probe(game, argv[3], policy, samples[i].world + 1, samples[i].ordinary_seconds);
                simcity_recomp_destroy(game);
                return world_ok && ordinary_ok ? 0 : 1;
            }
        }
    }
    if (strcmp(argv[2], "stock-60hz-world-mixed-development") == 0 ||
        strcmp(argv[2], "stock-60hz-world-mixed-development-long") == 0 ||
        strcmp(argv[2], "stock-60hz-world-mixed-development-long-two-frame") == 0) {
        const int original_lead = strcmp(argv[2], "stock-60hz-world-mixed-development-long-two-frame") == 0;
        int ok = stock_world_paced_probe(game, argv[3], original_lead ? 4 : 3, 6,
            original_lead || strcmp(argv[2], "stock-60hz-world-mixed-development-long") == 0 ? 60u : 0u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-60hz-world-housing-shops") == 0 ||
        strcmp(argv[2], "stock-60hz-world-housing-shops-long") == 0) {
        const int long_run = strcmp(argv[2], "stock-60hz-world-housing-shops-long") == 0;
        int ok = stock_world_paced_probe(game, argv[3], 3, 9, long_run ? 60u : 0u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-paced") == 0 ||
        strcmp(argv[2], "stock-world-paced-legacy") == 0 ||
        strcmp(argv[2], "stock-world-paced-prepared") == 0) {
        int ok = stock_world_paced_probe(game, argv[3],
            strcmp(argv[2], "stock-world-paced-legacy") == 0 ? 1 :
            strcmp(argv[2], "stock-world-paced-prepared") == 0 ? 2 : 0, 0, 0u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
#endif
    if (strcmp(argv[2], "stock-world-performance") == 0 ||
        strcmp(argv[2], "stock-world-full-compute-budget") == 0) {
        int ok = stock_world_performance_probe(game, argv[3],
            strcmp(argv[2], "stock-world-full-compute-budget") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-full-native-pass-profile") == 0) {
        int ok = stock_full_native_pass_profile(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-stage-dense-overlay-windows") == 0) {
        const int ok = stage_stock_full_overlay_windows(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-dense-overlay-write-audit") == 0) {
        const int ok = stock_dense_overlay_write_audit(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
#ifdef _WIN32
    if (strcmp(argv[2], "stock-60hz-world-dense-density-wide") == 0 ||
        strcmp(argv[2], "stock-60hz-world-dense-environment-wide") == 0 ||
        strcmp(argv[2], "stock-60hz-world-dense-crime-wide") == 0) {
        const int overlay_case = strstr(argv[2], "environment") ? 27 : strstr(argv[2], "crime") ? 28 : 26;
        const int ok = stock_world_paced_probe_widths(game, argv[3], 8, overlay_case, 12u, 2u);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
#endif
    if (strcmp(argv[2], "stock-world-new-city") == 0) {
        int ok = stock_world_new_city_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-menu-branch-audit") == 0) {
        const int ok = stock_world_menu_branch_audit(game);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-template-catalog") == 0) {
        const int ok = stock_world_template_catalog_probe(game);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-template-topology") == 0) {
        const int ok = stock_world_template_topology();
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-water-tile-reference") == 0) {
        const int ok = stock_water_tile_reference(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-template-catalog-input") == 0) {
        const int ok = stock_world_catalog_input_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-template-catalog-flicker") == 0) {
        const int ok = stock_catalog_flicker_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-original-menu-flicker") == 0 ||
        strcmp(argv[2], "stock-world-original-menu-flicker-wide") == 0) {
        const int ok = stock_catalog_original_menu_flicker(game, argv[3],
            strcmp(argv[2], "stock-world-original-menu-flicker-wide") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-template-catalog-saved-menu") == 0) {
        const int ok = stock_catalog_saved_menu_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-template-catalog-boot-matrix") == 0 ||
        strcmp(argv[2], "stock-world-template-all-land") == 0) {
        const int ok = stock_world_catalog_boot_matrix(game, argv[3],
            strcmp(argv[2], "stock-world-template-all-land") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-template-catalog-native-passthrough") == 0) {
        const int ok = stock_world_catalog_native_passthrough(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-template-catalog-menu-cues") == 0) {
        const int ok = stock_catalog_menu_cue_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-inland-plain-district") == 0) {
        const int ok = stock_inland_plain_district(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strncmp(argv[2], "stock-world-catalog-district-", sizeof("stock-world-catalog-district-") - 1u) == 0) {
        const char *number = argv[2] + sizeof("stock-world-catalog-district-") - 1u;
        char *end = NULL;
        const unsigned id = (unsigned)strtoul(number, &end, 10);
        const int ok = id >= 1u && id <= SIMCITY_WORLD_MAP_TEMPLATE_COUNT &&
            end && !*end && stock_catalog_district_probe(game, argv[3], id, NULL);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-headed-district-tape") == 0) {
        StockControllerTape tape = {0};
        const int ran = stock_catalog_district_probe(game, argv[3], 1u, &tape);
        size_t size = 0u;
        uint8_t *bytes = ran ? stock_controller_tape_encode(&tape, &size) : NULL;
        char path[4096];
        snprintf(path, sizeof(path), "%s/World-Map-Headed.scinput", argv[3]);
        const int ok = bytes && write_new_file(path, bytes, size);
        printf("headed-district tape_frames=%u written=%d\n", tape.frames, ok);
        free(bytes);
        stock_controller_tape_clear(&tape);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-archipelago-start") == 0) {
        const int ok = stock_archipelago_starting_district(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-archipelago-bridge") == 0) {
        const int ok = stock_archipelago_bridge(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-twin-shores-bridge") == 0) {
        const int ok = stock_twin_shores_bridge(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-archipelago-rail-port") == 0) {
        const int ok = stock_archipelago_rail_and_port(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-archipelago-ship") == 0 ||
        strcmp(argv[2], "stock-world-archipelago-ship-east") == 0) {
        const int ok = stock_archipelago_ship_trace(game, argv[3],
            strcmp(argv[2], "stock-world-archipelago-ship-east") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-tour") == 0 || strcmp(argv[2], "stock-world-network") == 0) {
        int ok = stock_world_tour_probe(game, argv[3], strcmp(argv[2], "stock-world-network") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-road-repro") == 0) {
        int ok = stock_world_road_repro_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-ram-navigation") == 0) {
        int ok = stock_world_ram_navigation(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-utilities-tour") == 0) {
        int ok = stock_world_utilities_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-tape-verify") == 0) {
        int ok = stock_verify_construction_tape(game, argv[3], 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-inspect-partial") == 0) {
        int ok = stock_inspect_infill_partial(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-preview") == 0) {
        const int ok = stock_infill_preview_checkpoint(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-probe-notice") == 0) {
        int ok = stock_probe_infill_notice_exit(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-repro-notice") == 0) {
        int ok = stock_repro_infill_notice_recovery(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-repro-notice-feeder") == 0) {
        int ok = stock_repro_infill_notice_feeder(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-repro-north-feeder") == 0) {
        int ok = stock_repro_infill_north_feeder(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-buildings") == 0 ||
        strcmp(argv[2], "stock-world-construction-quadrants") == 0) {
        const int all_quadrants = strcmp(argv[2], "stock-world-construction-quadrants") == 0;
        int ok = stock_world_buildings_probe(game, argv[3], all_quadrants);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
#ifdef _WIN32
    if (strcmp(argv[2], "stock-world-construction-flicker") == 0 ||
        strcmp(argv[2], "stock-world-construction-flicker-full") == 0) {
        const int full_tape = strcmp(argv[2], "stock-world-construction-flicker-full") == 0;
        const int ok = stock_construction_flicker(game, argv[3], full_tape);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-render-worker-preflight") == 0 ||
        strcmp(argv[2], "stock-world-detached-render-cost") == 0 ||
        strcmp(argv[2], "stock-world-detached-render-profile") == 0) {
        char fixture[4096], reason[256] = {0};
        LARGE_INTEGER frequency;
        snprintf(fixture, sizeof(fixture), "%s/stock-world-construction-input-start.scsnap", argv[3]);
        int ok = QueryPerformanceFrequency(&frequency) != 0;
        const int profile = strcmp(argv[2], "stock-world-detached-render-profile") == 0;
        const int cost = profile || strcmp(argv[2], "stock-world-detached-render-cost") == 0;
        for (int preflight_wide = profile; ok && preflight_wide <= 1; ++preflight_wide) {
            ok = simcity_recomp_stock_world_open_snapshot(game, fixture, reason, sizeof(reason)) &&
                simcity_recomp_set_widescreen(game, preflight_wide, reason, sizeof(reason)) &&
                (cost ? prepared_video_compute_cost(game, profile) : prepared_video_preflight(game, (uint64_t)frequency.QuadPart));
            if (!cost || !ok)
                printf("stock-render-worker-preflight width=%d pass=%d %s\n", preflight_wide ? 398 : 256, ok, reason);
        }
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-verify-async-save") == 0 ||
        strcmp(argv[2], "stock-world-construction-verify-shared-save") == 0) {
        const int shared = strcmp(argv[2], "stock-world-construction-verify-shared-save") == 0;
        int ok = stock_verify_async_infill_save(game, argv[3], shared);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-infill-live") == 0 ||
        strcmp(argv[2], "stock-world-construction-infill-live-resume") == 0 ||
        strcmp(argv[2], "stock-world-construction-infill-live-resume-tape") == 0 ||
        strcmp(argv[2], "stock-world-construction-infill-live-resume-extended") == 0 ||
        strcmp(argv[2], "stock-world-construction-infill-live-resume-dense") == 0 ||
        strcmp(argv[2], "stock-world-construction-infill-live-resume-dense-audio-margin") == 0 ||
        strcmp(argv[2], "stock-world-construction-infill-live-one-lot") == 0) {
        live_construction_enabled = 1;
        const int resume = strcmp(argv[2], "stock-world-construction-infill-live") != 0;
        const int one_lot = strcmp(argv[2], "stock-world-construction-infill-live-one-lot") == 0;
        live_construction_shadow_audio = strcmp(argv[2], "stock-world-construction-infill-live-resume-dense-audio-margin") == 0;
        const int dense = live_construction_shadow_audio || strcmp(argv[2], "stock-world-construction-infill-live-resume-dense") == 0;
        infill_dense_feeders = dense;
        infill_extended_feeders = dense || strcmp(argv[2], "stock-world-construction-infill-live-resume-extended") == 0;
        const int record_segment = one_lot || infill_extended_feeders ||
            strcmp(argv[2], "stock-world-construction-infill-live-resume-tape") == 0;
        const int built = stock_world_infill_probe(game, argv[3], resume, record_segment, one_lot, dense);
        const int timing = live_construction_close();
        /* Save the last committed gameplay view after the pacing clock
           has stopped. Neither rendering nor disk I/O belongs in the
           construction timing window, and no guest step is needed here. */
        if (built) (void)stock_infill_capture_checkpoint(game, argv[3]);
        simcity_recomp_destroy(game);
        return built && timing ? 0 : 1;
    }
#endif
    if (strcmp(argv[2], "stock-world-construction-infill-survey") == 0 ||
        strcmp(argv[2], "stock-world-construction-infill-survey-east-all-parcels") == 0) {
        const int ok = stock_infill_survey(game, argv[3],
            strcmp(argv[2], "stock-world-construction-infill-survey-east-all-parcels") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-adopt-southeast") == 0 ||
        strcmp(argv[2], "stock-world-construction-adopt-east") == 0) {
        const int east = strcmp(argv[2], "stock-world-construction-adopt-east") == 0;
        const int ok = stock_infill_adopt_extension(game, argv[3], east);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-reconnect-north") == 0) {
        const int ok = stock_infill_reconnect_north(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-southeast-residential-pilot") == 0) {
        const int ok = stock_infill_southeast_residential_pilot(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-southeast-services-pilot") == 0) {
        const int ok = stock_infill_southeast_services_pilot(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-southeast-bridge-pilot") == 0) {
        const int ok = stock_infill_southeast_bridge_pilot(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-east-road-pilot") == 0) {
        const int ok = stock_infill_east_road_pilot(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-east-services-pilot") == 0) {
        const int ok = stock_infill_east_services_pilot(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-north-seaport-pilot") == 0) {
        const int ok = stock_infill_north_seaport_pilot(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-power-order-repro") == 0) {
        const int ok = stock_infill_power_order_repro(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-infill") == 0 ||
        strcmp(argv[2], "stock-world-construction-infill-resume") == 0) {
        const int resume = strcmp(argv[2], "stock-world-construction-infill-resume") == 0;
        int ok = stock_world_infill_probe(game, argv[3], resume, 0, 0, 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-age-built") == 0) {
        int ok = stock_world_age_built_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-mixed-district") == 0 ||
        strcmp(argv[2], "stock-world-housing-shops") == 0) {
        int ok = stock_world_mixed_district_probe(game, argv[3],
            strcmp(argv[2], "stock-world-housing-shops") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-mixed-development") == 0 ||
        strcmp(argv[2], "stock-world-mixed-development-report") == 0 ||
        strcmp(argv[2], "stock-world-mixed-development-resume") == 0 ||
        strcmp(argv[2], "stock-world-mixed-development-branch") == 0) {
        int ok = stock_world_mixed_develop_probe(game, argv[3],
            strcmp(argv[2], "stock-world-mixed-development-report") == 0,
            strcmp(argv[2], "stock-world-mixed-development-branch") == 0 ? 2 :
            strcmp(argv[2], "stock-world-mixed-development-resume") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-commercial-matched") == 0) {
        int ok = stock_commercial_compare_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-milestone") == 0 ||
        strcmp(argv[2], "stock-world-milestone-continue") == 0) {
        int ok = stock_world_milestone_probe(game, argv[3],
            strcmp(argv[2], "stock-world-milestone-continue") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-construction-capture-end") == 0) {
        const int ok = stock_construction_capture_end(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-milestone-inspect") == 0) {
        int ok = stock_world_milestone_inspect(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-fire-spread") == 0 ||
        strcmp(argv[2], "stock-world-fire-buildings") == 0 ||
        strcmp(argv[2], "stock-world-fire-building4") == 0 ||
        strcmp(argv[2], "stock-world-fire-building6") == 0) {
        unsigned size = strcmp(argv[2], "stock-world-fire-building6") == 0 ? 6u :
                        strcmp(argv[2], "stock-world-fire-building4") == 0 ? 4u :
                        strcmp(argv[2], "stock-world-fire-buildings") == 0 ? 3u : 0u;
        int ok = stock_world_fire_spread_probe(game, argv[3], size);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-battery-cold1") == 0 || strcmp(argv[2], "stock-world-battery-cold2") == 0 ||
        strcmp(argv[2], "stock-world-inland-battery-cold1") == 0) {
        int ok = stock_world_battery_cold_probe(game, argv[3], argv[2][strlen(argv[2]) - 1u] - '0',
            strstr(argv[2], "inland") != NULL);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-native-save") == 0 || strcmp(argv[2], "stock-world-native-save-slot2") == 0 ||
        strcmp(argv[2], "stock-world-battery-save1") == 0 || strcmp(argv[2], "stock-world-battery-save2") == 0 ||
        strcmp(argv[2], "stock-world-inland-battery-save1") == 0) {
        int ok = stock_world_native_save_probe(game, argv[3],
            argv[2][strlen(argv[2]) - 1u] == '2' ? 2u : 1u, strstr(argv[2], "battery") != NULL,
            strstr(argv[2], "inland") != NULL);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-bank-award") == 0 || strcmp(argv[2], "stock-world-bank-place") == 0 ||
        strcmp(argv[2], "stock-world-bank-loan") == 0 || strcmp(argv[2], "stock-world-bank-repayment") == 0) {
        int ok = strcmp(argv[2], "stock-world-bank-repayment") == 0 ? stock_world_bank_repayment_probe(game, argv[3]) :
            strcmp(argv[2], "stock-world-bank-loan") == 0 ? stock_world_bank_loan_probe(game, argv[3]) :
            strcmp(argv[2], "stock-world-bank-place") == 0 ? stock_world_bank_place_probe(game, argv[3]) :
            stock_world_bank_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-house-award") == 0 || strcmp(argv[2], "stock-world-house-power") == 0 ||
        strcmp(argv[2], "stock-world-house-district") == 0) {
        int ok = strcmp(argv[2], "stock-world-house-award") == 0 ? stock_world_house_award_probe(game, argv[3]) :
            stock_world_house_power_probe(game, argv[3], strcmp(argv[2], "stock-world-house-district") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-native-city-menu-flicker") == 0 ||
        strcmp(argv[2], "stock-native-city-menu-flicker-wide") == 0 ||
        strcmp(argv[2], "stock-native-city-storage-flicker") == 0 ||
        strcmp(argv[2], "stock-native-city-storage-flicker-wide") == 0 ||
        strcmp(argv[2], "stock-native-city-map-metrics-flicker") == 0 ||
        strcmp(argv[2], "stock-native-city-map-metrics-flicker-wide") == 0 ||
        strcmp(argv[2], "stock-native-city-map-zones-flicker") == 0 ||
        strcmp(argv[2], "stock-native-city-map-zones-flicker-wide") == 0 ||
        strcmp(argv[2], "stock-native-city-reports-flicker-wide") == 0 ||
        strcmp(argv[2], "stock-native-city-disaster-flicker-wide") == 0 ||
        strcmp(argv[2], "stock-native-city-reports-flicker") == 0 ||
        strcmp(argv[2], "stock-native-city-disaster-flicker") == 0) {
        NativeMenuFrameAudit audit = {0};
        const int reports = strstr(argv[2], "-reports-") != NULL;
        const int disaster = strstr(argv[2], "-disaster-") != NULL;
        const int storage = strstr(argv[2], "-storage-") != NULL;
        const int metrics = strstr(argv[2], "-map-metrics-") != NULL;
        const int zones = strstr(argv[2], "-map-zones-") != NULL;
        audit.widescreen = strstr(argv[2], "-wide") != NULL;
        audit.directory = argv[3];
        audit.snapshot = simcity_recomp_video_snapshot_create();
        audit.prepared = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*audit.prepared));
        simcity_recomp_world_catalog_enable(game, 1);
        native_menu_frame_audit = &audit;
        const int ok = audit.snapshot && audit.prepared &&
            (storage ? stock_world_native_save_probe(game, argv[3], 1u, 0, 1) :
             stock_world_top_toolbar_probe(game, argv[3], reports || disaster || metrics || zones,
                 reports ? 12 : disaster ? 4 : metrics ? 2 : zones ? 3 : 0));
        native_menu_frame_audit = NULL;
        printf("%s native-city menu flicker case=%s completed_frames=%u\n", ok ? "PASS" : "FAIL", argv[2], audit.frames);
        free(audit.prepared);
        simcity_recomp_video_snapshot_destroy(audit.snapshot);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-top-toolbar") == 0 ||
        strcmp(argv[2], "stock-world-information") == 0 ||
        strcmp(argv[2], "stock-world-overview-navigation") == 0 ||
        strcmp(argv[2], "stock-world-overview-metrics") == 0 ||
        strcmp(argv[2], "stock-world-overview-zones") == 0 ||
        strcmp(argv[2], "stock-world-disaster-trace") == 0 ||
        strcmp(argv[2], "stock-world-disaster-fire") == 0 ||
        strcmp(argv[2], "stock-world-disaster-flood") == 0 ||
        strcmp(argv[2], "stock-world-flood-recession") == 0 ||
        strcmp(argv[2], "stock-world-disaster-quake") == 0 ||
        strcmp(argv[2], "stock-world-disaster-tornado") == 0 ||
        strcmp(argv[2], "stock-world-disaster-monster") == 0 ||
        strcmp(argv[2], "stock-world-disaster-plane") == 0 ||
        strcmp(argv[2], "stock-world-city-reports") == 0) {
        int ok = stock_world_top_toolbar_probe(game, argv[3],
            strcmp(argv[2], "stock-world-top-toolbar") != 0,
            strcmp(argv[2], "stock-world-city-reports") == 0 ? 12 :
            strcmp(argv[2], "stock-world-disaster-plane") == 0 ? 11 :
            strcmp(argv[2], "stock-world-disaster-monster") == 0 ? 10 :
            strcmp(argv[2], "stock-world-disaster-tornado") == 0 ? 9 :
            strcmp(argv[2], "stock-world-disaster-quake") == 0 ? 8 :
            strcmp(argv[2], "stock-world-flood-recession") == 0 ? 7 :
            strcmp(argv[2], "stock-world-disaster-flood") == 0 ? 6 :
            strcmp(argv[2], "stock-world-disaster-fire") == 0 ? 5 :
            strcmp(argv[2], "stock-world-disaster-trace") == 0 ? 4 :
            strcmp(argv[2], "stock-world-overview-zones") == 0 ? 3 :
            strcmp(argv[2], "stock-world-overview-metrics") == 0 ? 2 :
                strcmp(argv[2], "stock-world-overview-navigation") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-services") == 0) {
        int ok = stock_world_services_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-environment") == 0) {
        int ok = stock_world_environment_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-density") == 0) {
        int ok = stock_world_density_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-traffic") == 0) {
        int ok = stock_world_traffic_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-session") == 0) {
        int ok = stock_world_session_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-census") == 0 ||
        strcmp(argv[2], "stock-world-power") == 0 ||
        strcmp(argv[2], "stock-world-power-gap") == 0 ||
        strcmp(argv[2], "stock-world-growth") == 0) {
        const int power_mode = strcmp(argv[2], "stock-world-power") == 0 ? 1 :
                               strcmp(argv[2], "stock-world-power-gap") == 0 ? 2 :
                               strcmp(argv[2], "stock-world-growth") == 0 ? 3 : 0;
        int ok = stock_world_census_probe(game, argv[3], power_mode);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-camera") == 0 || strcmp(argv[2], "stock-world-road-seam") == 0) {
        int ok = stock_world_camera_probe(game, argv[3], strcmp(argv[2], "stock-world-road-seam") == 0);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-window") == 0) {
        int ok = stock_world_window_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-world-preview") == 0) {
        int ok = stock_world_preview_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-map-trace") == 0) {
        int ok = stock_map_trace_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-motion-cadence") == 0) {
        int ok = stock_motion_cadence(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "stock-motion-cadence-built") == 0) {
        int ok = stock_built_motion_cadence(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "world-map-menu") == 0) {
        char path[4096];
        snprintf(path, sizeof(path), "%s/world-menu-core.log", argv[3]);
        int ok = simcity_recomp_log_open(path, error, sizeof(error)) &&
                 world_menu_probe(game, argv[3]);
        simcity_recomp_destroy(game);
        simcity_recomp_log_close();
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "freeland-fps-compare") == 0) {
        int ok = stock_fps_compare(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "freeland-zone-resume") == 0) {
        WorldProbe probe = {0};
        SimCityRecompAudioStaticStatus audio = {0};
        char path[4096];
        probe.hash = UINT64_C(1469598103934665603);
        int ok = snprintf(path, sizeof(path), "%s/four-plants-roads.scsnap", argv[3]) > 0 &&
                 simcity_recomp_snapshot_load(game, path, error, sizeof(error)) &&
                 simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) &&
                 stock_add_roadside_zones(game, &probe, argv[3]) &&
                 simcity_recomp_audio_static_status(game, &audio);
        if (ok) {
            uint64_t dropped = simcity_recomp_audio_dropped_frames(game);
            printf("stock_audio core_overflows=%llu dropped=%llu unknown=%llu\n",
                   (unsigned long long)audio.pcm_overflows,
                   (unsigned long long)dropped,
                   (unsigned long long)audio.pcm_unknown_frames);
            ok = !audio.route_failed && !audio.pcm_overflows && !dropped &&
                 !audio.pcm_unknown_frames;
        }
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "freeland-road-resume") == 0) {
        const int plant_x[] = {15, 77, 78, 15};
        WorldProbe probe = {0};
        char path[4096];
        probe.hash = UINT64_C(1469598103934665603);
        int ok = snprintf(path, sizeof(path), "%s/four-plants.scsnap", argv[3]) > 0 &&
                 simcity_recomp_snapshot_load(game, path, error, sizeof(error)) &&
                 simcity_recomp_set_widescreen(game, 1, error, sizeof(error)) &&
                 stock_lay_roads(game, &probe, argv[3], plant_x) &&
                 stock_add_roadside_zones(game, &probe, argv[3]);
        if (!ok) fprintf(stderr, "Road resume unsuccessful: %s\n", error);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "freeland-four-plants") == 0) {
        int ok = stock_freeland_plants(game, argv[3]);
        simcity_recomp_destroy(game);
        return ok ? 0 : 1;
    }
    if (strcmp(argv[2], "world-map") == 0 ||
        strcmp(argv[2], "world-map-control") == 0) {
        int control = strcmp(argv[2], "world-map-control") == 0;
        char log_path[1024];
        int length = snprintf(log_path, sizeof(log_path), "%s/%s-core.log", argv[3], argv[2]);
        int ok = length >= 0 && (size_t)length < sizeof(log_path) &&
                 simcity_recomp_log_open(log_path, error, sizeof(error)) &&
                 world_probe(game, argv[3], control);
        simcity_recomp_destroy(game);
        simcity_recomp_log_close();
        return ok ? 0 : 1;
    }
    if (!drain_pcm(game, &pcm_hash, &pcm_frames)) {
        fprintf(stderr, "initial PCM drain failed or overflowed\n");
        simcity_recomp_destroy(game);
        return 1;
    }
    traverse_practice = strcmp(argv[2], "practice-traverse") == 0;
    left_edge_practice = strcmp(argv[2], "practice-left") == 0;
    toolbar_practice = strcmp(argv[2], "practice-toolbar") == 0;
    hide_practice = strcmp(argv[2], "practice-hide") == 0;
    hide_show_practice = strcmp(argv[2], "practice-hide-show") == 0;
    cursor_right_practice = strcmp(argv[2], "practice-cursor-right") == 0;
    hud_cycle_practice = strcmp(argv[2], "practice-hud-cycle") == 0;
    hud_native_cycle_practice =
        strcmp(argv[2], "practice-hud-native-cycle") == 0;
    power_select_practice = strcmp(argv[2], "practice-power-select") == 0;
    power_build_practice = strcmp(argv[2], "practice-power-build") == 0;
    power_position_practice = strcmp(argv[2], "practice-power-position") == 0;
    widescreen_tour_practice =
        strcmp(argv[2], "practice-widescreen-tour") == 0;
    scenario_corners = strcmp(argv[2], "scenario-corners") == 0;
    freeland_initial = strcmp(argv[2], "scenario-freeland-initial") == 0;
    freeland_initial_build =
        strcmp(argv[2], "scenario-freeland-initial-build") == 0;
    freeland_corners =
        strcmp(argv[2], "scenario-freeland-corners") == 0;
    neutral_route = strncmp(argv[2], "neutral:", 8u) == 0;
    if ((freeland_initial || freeland_initial_build || freeland_corners) &&
        !load_freeland_unlock_sram(game, error, sizeof(error))) {
        fprintf(stderr, "Freeland unlock SRAM load failed: %s\n", error);
        simcity_recomp_destroy(game);
        return 1;
    }
    if ((cursor_right_practice || hud_cycle_practice ||
         hud_native_cycle_practice || power_select_practice ||
         power_build_practice || power_position_practice ||
         widescreen_tour_practice || scenario_corners || freeland_initial ||
         freeland_initial_build || freeland_corners) &&
        !simcity_recomp_set_widescreen(game, 1, error, sizeof(error))) {
        fprintf(stderr, "early widescreen enable failed: %s\n", error);
        simcity_recomp_destroy(game);
        return 1;
    }
    if (strncmp(argv[2], "new-city", 8u) == 0 ||
        strncmp(argv[2], "scenario", 8u) == 0 ||
        strncmp(argv[2], "practice", 8u) == 0 || neutral_route) {
        SimCityRecompFrameResult frame_result;
        uint32_t frame;
        uint32_t target = argv[2][8] == ':' ?
            (uint32_t)strtoul(argv[2] + 9, NULL, 10) : 2700u;
        if (neutral_route)
            target = (uint32_t)strtoul(argv[2] + 8, NULL, 10);
        int use_scenario = strncmp(argv[2], "scenario", 8u) == 0;
        int use_practice = strncmp(argv[2], "practice", 8u) == 0;
        if (traverse_practice) target = 6780u;
        else if (left_edge_practice) target = 2320u;
        else if (toolbar_practice) target = 1900u;
        else if (hide_practice) target = 1860u;
        else if (hide_show_practice) target = 1940u;
        else if (cursor_right_practice) target = 2100u;
        else if (hud_cycle_practice) target = 2600u;
        else if (hud_native_cycle_practice) target = 2500u;
        else if (power_select_practice) target = 2120u;
        else if (power_build_practice) target = 3890u;
        else if (power_position_practice) target = 3700u;
        else if (widescreen_tour_practice) target = 11650u;
        else if (scenario_corners) target = 7670u;
        else if (freeland_initial) target = 2750u;
        else if (freeland_initial_build) target = 3680u;
        else if (freeland_corners) target = 8420u;
        /* Once the city camera reaches a map clamp, the widened view shifts
         * the native center to keep real map pixels on both outer edges.
         * That intentional shift applies to the tutorial and scenario corner
         * routes, so only their explicit world-cell and edge assertions are
         * valid comparisons. */
        allow_center_difference =
            (use_practice && target >= 1400u) || scenario_corners ||
            freeland_initial || freeland_initial_build || freeland_corners;
        for (frame = 0u; frame < target; ++frame) {
            uint8_t view_x_bytes[2];
            uint16_t route_input;
            int view_x;
            if (neutral_route)
                route_input = 0u;
            else if (!use_practice)
                route_input = freeland_initial_build ?
                                  freeland_initial_build_input(frame) :
                              freeland_corners ?
                                  freeland_corners_input(frame) :
                              freeland_initial ? freeland_input(frame) :
                              scenario_corners ? scenario_corners_input(frame) :
                              use_scenario ? scenario_input(frame) :
                                             new_city_input(frame);
            else if (toolbar_practice)
                route_input = practice_toolbar_input(frame);
            else if (hide_practice || hide_show_practice)
                route_input = practice_hide_input(frame, hide_show_practice);
            else if (cursor_right_practice)
                route_input = practice_cursor_right_input(frame);
            else if (hud_cycle_practice)
                route_input = practice_hud_cycle_input(frame);
            else if (hud_native_cycle_practice)
                route_input = practice_hud_native_cycle_input(frame);
            else if (widescreen_tour_practice)
                route_input = practice_widescreen_tour_input(frame);
            else if (power_build_practice || power_position_practice)
                route_input = practice_power_build_input(frame);
            else if (power_select_practice)
                route_input = practice_power_select_input(frame);
            else if (traverse_practice || left_edge_practice)
                route_input = practice_traverse_input(frame);
            else
                route_input = practice_input(frame);
            if (power_build_practice || power_position_practice ||
                widescreen_tour_practice) {
                uint16_t view_x_word, view_y_word, fine_x_word, fine_y_word;
                uint16_t cursor_x_word, cursor_y_word;
                uint16_t focus_word;
                uint16_t tool_x_word, tool_y_word;
                int world_x_pixels, world_y_pixels;
                if (!read_wram16(game, 0x01bdu, &view_x_word) ||
                    !read_wram16(game, 0x01bfu, &view_y_word) ||
                    !read_wram16(game, 0x0139u, &fine_x_word) ||
                    !read_wram16(game, 0x0137u, &fine_y_word) ||
                    !read_wram16(game, 0x025du, &cursor_x_word) ||
                    !read_wram16(game, 0x025fu, &cursor_y_word) ||
                    !read_wram16(game, 0x0201u, &focus_word) ||
                    !read_wram16(game, 0x01ebu, &tool_x_word) ||
                    !read_wram16(game, 0x01edu, &tool_y_word)) {
                    fprintf(stderr, "power-route steering state read failed\n");
                    simcity_recomp_destroy(game);
                    return 1;
                }
                world_x_pixels = (int)(int16_t)view_x_word * 8 +
                    (int)(fine_x_word & 7u) + (int)(int16_t)cursor_x_word;
                world_y_pixels = (int)(int16_t)view_y_word * 8 +
                    (int)(fine_y_word & 7u) + (int)(int16_t)cursor_y_word;
                if (frame >= 2240u && frame < 2600u &&
                    world_y_pixels > 39 * 8 + 7) {
                    route_input &= (uint16_t)~(SIMCITY_INPUT_DOWN |
                                               SIMCITY_INPUT_LEFT |
                                               SIMCITY_INPUT_RIGHT);
                    route_input |= SIMCITY_INPUT_A | SIMCITY_INPUT_UP;
                } else if (frame >= 2240u && frame < 2600u &&
                           world_y_pixels < 39 * 8) {
                    route_input &= (uint16_t)~(SIMCITY_INPUT_UP |
                                               SIMCITY_INPUT_LEFT |
                                               SIMCITY_INPUT_RIGHT);
                    route_input |= SIMCITY_INPUT_A | SIMCITY_INPUT_DOWN;
                } else if (frame >= 2700u && frame < 3700u &&
                           world_x_pixels < 79 * 8) {
                    route_input &= (uint16_t)~(SIMCITY_INPUT_A |
                                               SIMCITY_INPUT_UP |
                                               SIMCITY_INPUT_DOWN |
                                               SIMCITY_INPUT_LEFT);
                    route_input |= SIMCITY_INPUT_RIGHT;
                } else if (frame >= 3830u && frame < 3890u &&
                           focus_word != 0x00ffu) {
                    route_input = SIMCITY_INPUT_RIGHT;
                }
                if (widescreen_tour_practice) {
                    if (frame >= 4000u && frame < 4500u) {
                        if (world_y_pixels < 65 * 8) {
                            route_input = SIMCITY_INPUT_A | SIMCITY_INPUT_DOWN;
                        } else if (world_y_pixels > 65 * 8 + 7) {
                            route_input = SIMCITY_INPUT_A | SIMCITY_INPUT_UP;
                        }
                    } else if (frame >= 4600u && frame < 5000u) {
                        if ((int)(int16_t)cursor_x_word < 64)
                            route_input = SIMCITY_INPUT_RIGHT;
                        else if ((int)(int16_t)cursor_x_word > 192)
                            route_input = SIMCITY_INPUT_LEFT;
                    } else if (frame >= 5100u && frame < 5500u) {
                        int camera_x_pixels = (int)(int16_t)view_x_word * 8 +
                            (int)(fine_x_word & 7u);
                        if (camera_x_pixels > 304)
                            route_input = SIMCITY_INPUT_A | SIMCITY_INPUT_LEFT;
                    } else if (frame >= 5600u && frame < 6200u) {
                        if (world_x_pixels > 31 * 8 + 7)
                            route_input = SIMCITY_INPUT_LEFT;
                        else if (world_x_pixels < 31 * 8)
                            route_input = SIMCITY_INPUT_RIGHT;
                    } else if (frame >= 6600u && frame < 7000u) {
                        if ((int)(int16_t)cursor_x_word < 64)
                            route_input = SIMCITY_INPUT_RIGHT;
                        else if ((int)(int16_t)cursor_x_word > 192)
                            route_input = SIMCITY_INPUT_LEFT;
                    } else if (frame >= 7100u && frame < 8000u) {
                        int camera_x_pixels = (int)(int16_t)view_x_word * 8 +
                            (int)(fine_x_word & 7u);
                        if ((int)(int16_t)cursor_x_word < 64)
                            route_input = SIMCITY_INPUT_RIGHT;
                        else if ((int)(int16_t)cursor_x_word > 192)
                            route_input = SIMCITY_INPUT_LEFT;
                        else if (camera_x_pixels < 376)
                            route_input = SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT;
                    } else if (frame >= 8100u && frame < 9000u) {
                        if (world_y_pixels > 39 * 8 + 7) {
                            route_input = SIMCITY_INPUT_A | SIMCITY_INPUT_UP;
                        } else if (world_y_pixels < 39 * 8) {
                            route_input = SIMCITY_INPUT_A | SIMCITY_INPUT_DOWN;
                        }
                    } else if (frame >= 9100u && frame <= 11600u) {
                        if (world_x_pixels < 79 * 8)
                            route_input = SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT;
                        else if (world_x_pixels > 79 * 8 + 7)
                            route_input = SIMCITY_INPUT_A | SIMCITY_INPUT_LEFT;
                    }
                    if (frame >= 8000u && frame <= 11600u &&
                        focus_word != 0x00ffu) {
                        if ((int)(int16_t)tool_y_word < 48)
                            route_input = SIMCITY_INPUT_DOWN;
                        else if ((int)(int16_t)tool_x_word < 56)
                            route_input = SIMCITY_INPUT_RIGHT;
                    }
                }
            }
            if (freeland_corners && frame >= 6200u && frame < 8350u) {
                uint16_t view_y_word, fine_y_word, cursor_y_word;
                uint16_t scroll_state_word;
                int view_y_pixels, world_y_pixels;
                if (!read_wram16(game, 0x01bfu, &view_y_word) ||
                    !read_wram16(game, 0x0137u, &fine_y_word) ||
                    !read_wram16(game, 0x025fu, &cursor_y_word) ||
                    !read_wram16(game, 0x01f5u, &scroll_state_word)) {
                    fprintf(stderr, "Freeland north-edge state read failed\n");
                    simcity_recomp_destroy(game);
                    return 1;
                }
                view_y_pixels = (int)(int16_t)view_y_word * 8 +
                    (int)(fine_y_word & 7u);
                world_y_pixels = view_y_pixels +
                    (int)(int16_t)cursor_y_word;
                route_input &= (uint16_t)~(SIMCITY_INPUT_UP |
                                           SIMCITY_INPUT_DOWN |
                                           SIMCITY_INPUT_A);
                if (view_y_pixels > -48 && scroll_state_word == 0u)
                    route_input |= SIMCITY_INPUT_A | SIMCITY_INPUT_UP;
                else if (scroll_state_word == 0u && world_y_pixels > 0 &&
                         (frame % 40u) < 30u)
                    route_input |= SIMCITY_INPUT_UP;
                else if (scroll_state_word == 0u && world_y_pixels < 0 &&
                         (frame % 40u) < 30u)
                    route_input |= SIMCITY_INPUT_DOWN;
                if (frame == 7350u || frame == 7602u ||
                    frame == 8002u || frame == 8346u) {
                    uint16_t focus_word = 0u;
                    uint16_t held_word = 0u, edge_word = 0u;
                    uint16_t delay_word = 0u, repeat_word = 0u;
                    uint16_t mode_word = 0u;
                    (void)read_wram16(game, 0x0201u, &focus_word);
                    (void)read_wram16(game, 0x011bu, &held_word);
                    (void)read_wram16(game, 0x00c9u, &edge_word);
                    (void)read_wram16(game, 0x01f3u, &delay_word);
                    (void)read_wram16(game, 0x01ffu, &repeat_word);
                    (void)read_wram16(game, 0x00d7u, &mode_word);
                    printf("freeland_north_approach frame=%u world_y_pixel=%d view_y=%d cursor_y=%d focus=%04X scroll=%04X held=%04X edge=%04X delay=%04X repeat=%04X mode=%04X input=%04X\n",
                           frame, world_y_pixels,
                           view_y_pixels,
                           (int)(int16_t)cursor_y_word, focus_word,
                           scroll_state_word, held_word, edge_word, delay_word,
                           repeat_word, mode_word,
                           route_input);
                }
            }
            memset(&frame_result, 0, sizeof(frame_result));
            if (!simcity_recomp_advance_headless(
                    game, route_input, 1u, &frame_result)) {
                fprintf(stderr, "headless route failed at frame %u: %s\n",
                        frame, simcity_recomp_last_error(game));
                simcity_recomp_destroy(game);
                return 1;
            }
            if (!drain_pcm(game, &pcm_hash, &pcm_frames)) {
                fprintf(stderr,
                        "PCM drain failed or overflowed at frame %u\n", frame);
                simcity_recomp_destroy(game);
                return 1;
            }
            if (hud_cycle_practice || hud_native_cycle_practice) {
                const char *checkpoint_name = NULL;
                uint16_t focus = 0u, cursor_x = 0u, cursor_y = 0u;
                uint16_t tool_x = 0u, tool_y = 0u, sub_layers = 0u;
                uint16_t scroll = 0u, held = 0u, edge = 0u;
                int checkpoint_x = 0, checkpoint_y = 0;
                if (hud_cycle_practice) {
                    if (frame == 1799u) checkpoint_name = "01-hud-map-start";
                    else if (frame == 2099u) checkpoint_name = "02-hud-wide-cursor";
                    else if (frame == 2141u) checkpoint_name = "03-hud-toolbar-enter";
                    else if (frame == 2201u) checkpoint_name = "04-hud-toolbar-used";
                    else if (frame == 2261u) checkpoint_name = "05-hud-toolbar-exit";
                    else if (frame == 2321u) checkpoint_name = "06-hud-hide-transition";
                    else if (frame == 2370u) checkpoint_name = "07-hud-hidden";
                    else if (frame == 2401u) checkpoint_name = "08-hud-show-transition";
                    else if (frame == 2450u) checkpoint_name = "09-hud-restored";
                    else if (frame == 2550u) checkpoint_name = "10-hud-after-map-move";
                } else {
                    if (frame == 1799u) checkpoint_name = "01-hud-map-start";
                    else if (frame == 1801u) checkpoint_name = "02-toolbar-enter";
                    else if (frame == 1901u) checkpoint_name = "03-toolbar-navigation";
                    else if (frame == 1981u) checkpoint_name = "04-toolbar-confirm";
                    else if (frame == 2101u) checkpoint_name = "05-hide-transition";
                    else if (frame == 2150u) checkpoint_name = "06-hidden";
                    else if (frame == 2181u) checkpoint_name = "07-show-transition";
                    else if (frame == 2230u) checkpoint_name = "08-restored";
                    else if (frame == 2301u) checkpoint_name = "09-toolbar-reenter";
                    else if (frame == 2401u) checkpoint_name = "10-toolbar-exit";
                    else if (frame == 2450u) checkpoint_name = "11-hud-final";
                }
                if (checkpoint_name) {
                    if (!read_wram16(game, 0x0201u, &focus) ||
                        !read_wram16(game, 0x025du, &cursor_x) ||
                        !read_wram16(game, 0x025fu, &cursor_y) ||
                        !read_wram16(game, 0x01ebu, &tool_x) ||
                        !read_wram16(game, 0x01edu, &tool_y) ||
                        !read_wram16(game, 0x0068u, &sub_layers) ||
                        !read_wram16(game, 0x01f5u, &scroll) ||
                        !read_wram16(game, 0x011bu, &held) ||
                        !read_wram16(game, 0x00c9u, &edge) ||
                        !capture_checkpoint(game, argv[3], checkpoint_name, 1,
                                            &checkpoint_x, &checkpoint_y)) {
                        fprintf(stderr, "HUD-cycle checkpoint failed at %s\n",
                                checkpoint_name);
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                    printf("hud_cycle checkpoint=%s frame=%u focus=%04X cursor=(%d,%d) tool=(%d,%d) layers=%04X scroll=%04X held=%04X edge=%04X map=(%d,%d)\n",
                           checkpoint_name, frame + 1u, focus,
                           (int)(int16_t)cursor_x, (int)(int16_t)cursor_y,
                           (int)(int16_t)tool_x, (int)(int16_t)tool_y,
                           sub_layers, scroll, held, edge,
                           checkpoint_x, checkpoint_y);
                    if (hud_cycle_practice &&
                        ((frame == 2099u &&
                          (focus != 0x00ffu || (int16_t)cursor_x <= 255 ||
                           (scroll & 0x0003u) != 0u)) ||
                         (frame == 2141u &&
                          (focus != 0u || (int16_t)tool_x != 26)) ||
                         (frame == 2201u &&
                          (focus != 0u || (int16_t)tool_x == 26)) ||
                         (frame == 2261u &&
                          (focus != 0x00ffu || (int16_t)cursor_x <= 255)) ||
                         ((frame == 2321u || frame == 2370u) &&
                          sub_layers != 0x0017u) ||
                         ((frame == 2401u || frame == 2450u) &&
                          sub_layers != 0x0417u))) {
                        fprintf(stderr,
                                "widened HUD state assertion failed at frame %u\n",
                                frame + 1u);
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                }
            }
            if ((power_build_practice || power_position_practice ||
                 widescreen_tour_practice) &&
                frame == 3699u) {
                uint16_t view_x_word, view_y_word, fine_x_word, fine_y_word;
                uint16_t cursor_x_word, cursor_y_word;
                uint16_t funds_mirror;
                uint16_t focus_word;
                int view_x_pixels, view_y_pixels, display_left_x;
                int world_x, world_y, output_x;
                if (!read_wram16(game, 0x01bdu, &view_x_word) ||
                    !read_wram16(game, 0x01bfu, &view_y_word) ||
                    !read_wram16(game, 0x0139u, &fine_x_word) ||
                    !read_wram16(game, 0x0137u, &fine_y_word) ||
                    !read_wram16(game, 0x025du, &cursor_x_word) ||
                    !read_wram16(game, 0x025fu, &cursor_y_word) ||
                    !read_wram16(game, 0x0201u, &focus_word) ||
                    !read_wram16(game, 0x0b9du, &power_funds_before) ||
                    !read_wram16(game, 0x0ba1u, &funds_mirror)) {
                    fprintf(stderr, "power-site coordinate read failed\n");
                    simcity_recomp_destroy(game);
                    return 1;
                }
                view_x_pixels = (int)(int16_t)view_x_word * 8 +
                    (int)(fine_x_word & 7u);
                view_y_pixels = (int)(int16_t)view_y_word * 8 +
                    (int)(fine_y_word & 7u);
                world_x = view_x_pixels + (int)(int16_t)cursor_x_word;
                world_y = view_y_pixels + (int)(int16_t)cursor_y_word;
                display_left_x = view_x_pixels -
                    (int)SIMCITY_RECOMP_WIDESCREEN_MARGIN;
                if (display_left_x < 0) display_left_x = 0;
                if (display_left_x > 120 * 8 -
                        (int)SIMCITY_RECOMP_WIDESCREEN_WIDTH)
                    display_left_x = 120 * 8 -
                        (int)SIMCITY_RECOMP_WIDESCREEN_WIDTH;
                output_x = (int)(int16_t)cursor_x_word + view_x_pixels -
                    display_left_x;
                if (world_x / 8 != 79 || world_y / 8 != 39 ||
                    power_funds_before != funds_mirror ||
                    output_x <= (int)SIMCITY_RECOMP_WIDESCREEN_MARGIN +
                                (int)SIMCITY_RECOMP_FRAME_WIDTH - 1 ||
                    !verify_power_site(game, 0)) {
                    fprintf(stderr,
                            "power-site position failed: world_cell=(%d,%d) output_x=%d focus=%04X cursor=(%d,%d)\n",
                            world_x / 8, world_y / 8, output_x, focus_word,
                            (int)(int16_t)cursor_x_word,
                            (int)(int16_t)cursor_y_word);
                    simcity_recomp_destroy(game);
                    return 1;
                }
                printf("power_site_before=clear world_cell=(79,39) output_x=%d funds=%u\n",
                       output_x, power_funds_before);
            }
            if (widescreen_tour_practice) {
                int checkpoint_x = 0, checkpoint_y = 0;
                uint16_t funds = 0u;
                const char *checkpoint_name = NULL;
                if (frame == 3869u) {
                    checkpoint_name = "01-right-build";
                    if (!verify_power_site(game, 1) ||
                        !read_wram16(game, 0x0b9du, &funds) || funds != 17000u) {
                        fprintf(stderr, "first widened plant was not preserved\n");
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                } else if (frame == 6299u) {
                    checkpoint_name = "02-left-site-clear-before-build";
                    if (!verify_power_site_at(game, 31u, 65u, 0)) {
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                } else if (frame == 6399u) {
                    checkpoint_name = "03-left-build-confirmed";
                    if (!verify_power_site_at(game, 31u, 65u, 1) ||
                        !verify_power_site(game, 1) ||
                        !read_wram16(game, 0x0b9du, &funds) || funds != 14000u) {
                        fprintf(stderr, "second widened plant verification failed\n");
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                } else if (frame == 6470u) {
                    checkpoint_name = "04-left-build-hud-shown";
                } else if (frame == 6550u) {
                    checkpoint_name = "05-left-build-hud-hidden";
                } else if (frame == 11600u) {
                    checkpoint_name = "06-returned-to-right-build";
                    if (!verify_power_site(game, 1)) {
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                }
                if (checkpoint_name &&
                    !capture_checkpoint(game, argv[3], checkpoint_name, 1,
                                        &checkpoint_x, &checkpoint_y)) {
                    simcity_recomp_destroy(game);
                    return 1;
                }
                if (frame == 6299u &&
                    (checkpoint_x != 31 || checkpoint_y != 65)) {
                    fprintf(stderr,
                            "left widened site cursor missed (31,65): got (%d,%d)\n",
                            checkpoint_x, checkpoint_y);
                    simcity_recomp_destroy(game);
                    return 1;
                }
                if (frame == 11600u &&
                    (checkpoint_x != 79 || checkpoint_y != 39)) {
                    fprintf(stderr,
                            "right build return cursor missed (79,39): got (%d,%d)\n",
                            checkpoint_x, checkpoint_y);
                    simcity_recomp_destroy(game);
                    return 1;
                }
            }
            if (freeland_initial_build) {
                int checkpoint_x = 0, checkpoint_y = 0;
                if (frame == 2750u) {
                    if (!inspect_freeland_initial_map(game) ||
                        !capture_checkpoint(game, argv[3],
                                            "01-freeland-fresh-load", 1,
                                            &checkpoint_x, &checkpoint_y)) {
                        fprintf(stderr, "Fresh Freeland verification failed\n");
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                } else if (frame == 3539u) {
                    uint16_t view_x_word, fine_x_word, cursor_x_word;
                    int camera_x, world_x, display_left_x, output_x;
                    if (!read_wram16(game, 0x01bdu, &view_x_word) ||
                        !read_wram16(game, 0x0139u, &fine_x_word) ||
                        !read_wram16(game, 0x025du, &cursor_x_word) ||
                        !read_wram16(game, 0x0b9du, &power_funds_before) ||
                        !capture_checkpoint(game, argv[3],
                                            "02-added-right-site-clear", 1,
                                            &checkpoint_x, &checkpoint_y)) {
                        fprintf(stderr, "Freeland added-area pre-build check failed\n");
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                    camera_x = (int)(int16_t)view_x_word * 8 +
                               (int)(fine_x_word & 7u);
                    world_x = camera_x + (int)(int16_t)cursor_x_word;
                    display_left_x = camera_x -
                                     (int)SIMCITY_RECOMP_WIDESCREEN_MARGIN;
                    if (display_left_x < 0) display_left_x = 0;
                    output_x = world_x - display_left_x;
                    freeland_site_x = (unsigned)checkpoint_x;
                    freeland_site_y = (unsigned)checkpoint_y;
                    if (checkpoint_x < 0 || checkpoint_x > 116 ||
                        checkpoint_y < 0 || checkpoint_y > 96 ||
                        world_x <= camera_x +
                                   (int)SIMCITY_RECOMP_FRAME_WIDTH - 1 ||
                        !verify_power_site_at(game, freeland_site_x,
                                              freeland_site_y, 0)) {
                        fprintf(stderr,
                                "Freeland cursor did not enter added area: world=(%d,%d) output_x=%d\n",
                                checkpoint_x, checkpoint_y, output_x);
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                    printf("freeland_added_site_before=clear world_cell=(%u,%u) output_x=%d funds=%u\n",
                           freeland_site_x, freeland_site_y, output_x,
                           power_funds_before);
                } else if (frame == 3650u) {
                    uint16_t funds_after;
                    if (!verify_power_site_at(game, freeland_site_x,
                                              freeland_site_y, 1) ||
                        !read_wram16(game, 0x0b9du, &funds_after) ||
                        funds_after != 17000u ||
                        !capture_checkpoint(game, argv[3],
                                            "03-added-right-build-confirmed", 1,
                                            &checkpoint_x, &checkpoint_y)) {
                        fprintf(stderr, "Freeland immediate added-area build failed\n");
                        simcity_recomp_destroy(game);
                        return 1;
                    }
                    printf("freeland_added_site_after=built world_cell=(%u,%u) cells=16 funds=%u cost=%u\n",
                           freeland_site_x, freeland_site_y, funds_after,
                           (unsigned)(power_funds_before - funds_after));
                }
            }
            if (scenario_corners || freeland_corners) {
                int checkpoint_x = 0, checkpoint_y = 0;
                const char *checkpoint_name = NULL;
                int expected_x = 0, expected_y = 0;
                if (frame == 4300u) {
                    checkpoint_name = freeland_corners ?
                        "01-freeland-top-right" : "01-scenario-top-right";
                    expected_x = 119;
                } else if (frame == 5200u) {
                    checkpoint_name = freeland_corners ?
                        "02-freeland-bottom-right" : "02-scenario-bottom-right";
                    expected_x = 119;
                    expected_y = 99;
                } else if (frame == 6100u) {
                    checkpoint_name = freeland_corners ?
                        "03-freeland-bottom-left" : "03-scenario-bottom-left";
                    expected_y = 99;
                } else if (frame == (freeland_corners ? 8400u : 7650u)) {
                    checkpoint_name = freeland_corners ?
                        "04-freeland-top-left" : "04-scenario-top-left";
                }
                if (checkpoint_name &&
                    (!capture_checkpoint(game, argv[3], checkpoint_name, 1,
                                         &checkpoint_x, &checkpoint_y) ||
                     checkpoint_x != expected_x ||
                     checkpoint_y != expected_y ||
                     !verify_corner_cell_pixels(game, checkpoint_name,
                                                expected_x, expected_y))) {
                    fprintf(stderr,
                            "scenario corner mismatch at %s: expected (%d,%d), got (%d,%d)\n",
                            checkpoint_name, expected_x, expected_y,
                            checkpoint_x, checkpoint_y);
                    simcity_recomp_destroy(game);
                    return 1;
                }
                if (frame == (freeland_corners ? 8400u : 7650u) &&
                    !capture_native_reference(game, argv[3],
                                              freeland_corners ?
                                              "05-freeland-native-4x3-top-left-reference" :
                                              "05-native-4x3-top-left-reference")) {
                    simcity_recomp_destroy(game);
                    return 1;
                }
            }
            if ((traverse_practice || left_edge_practice) && frame >= 1800u &&
                simcity_recomp_read_wram(game, 0x01bdu, view_x_bytes, 2u)) {
                uint8_t fine_x_bytes[2];
                uint8_t cursor_x_bytes[2];
                int native_camera_x;
                int display_left_x;
                int wide_cursor_x;
                view_x = (int)(int16_t)(view_x_bytes[0] |
                         ((uint16_t)view_x_bytes[1] << 8));
                if (view_x < min_view_x) min_view_x = view_x;
                if (view_x > max_view_x) max_view_x = view_x;
                if (simcity_recomp_read_wram(game, 0x0139u,
                                             fine_x_bytes, 2u) &&
                    simcity_recomp_read_wram(game, 0x025du,
                                             cursor_x_bytes, 2u)) {
                    native_camera_x = view_x * 8 +
                        (int)((fine_x_bytes[0] |
                        ((uint16_t)fine_x_bytes[1] << 8)) & 7u);
                    display_left_x = native_camera_x -
                        (int)SIMCITY_RECOMP_WIDESCREEN_MARGIN;
                    if (display_left_x < 0) display_left_x = 0;
                    if (display_left_x > 120 * 8 -
                            (int)SIMCITY_RECOMP_WIDESCREEN_WIDTH)
                        display_left_x = 120 * 8 -
                            (int)SIMCITY_RECOMP_WIDESCREEN_WIDTH;
                    wide_cursor_x = (int)(int16_t)(cursor_x_bytes[0] |
                        ((uint16_t)cursor_x_bytes[1] << 8)) +
                        native_camera_x - display_left_x;
                    if (wide_cursor_x < 0) wide_cursor_x = 0;
                    if (wide_cursor_x >=
                        (int)SIMCITY_RECOMP_WIDESCREEN_WIDTH)
                        wide_cursor_x =
                            (int)SIMCITY_RECOMP_WIDESCREEN_WIDTH - 1;
                    if (wide_cursor_x < min_wide_cursor_x)
                        min_wide_cursor_x = wide_cursor_x;
                    if (wide_cursor_x > max_wide_cursor_x)
                        max_wide_cursor_x = wide_cursor_x;
                }
            }
        }
        if (power_build_practice) {
            uint16_t funds_after = 0u, funds_mirror = 0u;
            if (!verify_power_site(game, 1) ||
                !read_wram16(game, 0x0b9du, &funds_after) ||
                !read_wram16(game, 0x0ba1u, &funds_mirror) ||
                funds_after != funds_mirror ||
                power_funds_before < funds_after ||
                power_funds_before - funds_after != 3000u) {
                fprintf(stderr,
                        "Coal Power build verification failed (funds before=%u after=%u mirror=%u)\n",
                        power_funds_before, funds_after, funds_mirror);
                simcity_recomp_destroy(game);
                return 1;
            }
            printf("power_site_after=built cells=16 tiles=0287-0296 funds=%u cost=3000\n",
                   funds_after);
        }
        if (freeland_initial) {
            int checkpoint_x = 0, checkpoint_y = 0;
            if (!inspect_freeland_initial_map(game) ||
                !capture_checkpoint(game, argv[3], "01-freeland-initial",
                                    1, &checkpoint_x, &checkpoint_y)) {
                fprintf(stderr, "Freeland initial-state verification failed\n");
                simcity_recomp_destroy(game);
                return 1;
            }
        }
        /* The hardware safety clamps are wider, but cursor-led scrolling of a
         * 120-cell map and 30-cell city viewport has playable endpoints 0..90. */
        if (traverse_practice && (min_view_x != -7 || max_view_x != 90)) {
            fprintf(stderr,
                    "practice traversal missed camera clamps: min=%d max=%d\n",
                    min_view_x, max_view_x);
            simcity_recomp_destroy(game);
            return 1;
        }
        if (traverse_practice &&
            (min_wide_cursor_x > 8 || max_wide_cursor_x <
             (int)SIMCITY_RECOMP_WIDESCREEN_WIDTH - 8)) {
            fprintf(stderr,
                    "widescreen cursor missed display edges: min=%d max=%d\n",
                    min_wide_cursor_x, max_wide_cursor_x);
            simcity_recomp_destroy(game);
            return 1;
        }
        if (left_edge_practice &&
            (min_view_x != -7 || min_wide_cursor_x > 8)) {
            fprintf(stderr,
                    "widescreen cursor missed west display edge: camera_min=%d cursor_min=%d\n",
                    min_view_x, min_wide_cursor_x);
            simcity_recomp_destroy(game);
            return 1;
        }
        if (!simcity_recomp_render_current_frame(game, error, sizeof(error))) {
            fprintf(stderr, "route render failed: %s\n", error);
            simcity_recomp_destroy(game);
            return 1;
        }
    } else if (!(strrchr(argv[2], '.') &&
                 strcmp(strrchr(argv[2], '.'), ".scsnap") == 0 ?
                 simcity_recomp_snapshot_load(game, argv[2], error,
                                              sizeof(error)) :
                 simcity_recomp_load_diagnostic_runtime_state(
                     game, argv[2], error, sizeof(error)))) {
        fprintf(stderr, "state load failed: %s\n", error);
        simcity_recomp_destroy(game);
        return 1;
    }
    if (!simcity_recomp_set_widescreen(game, 0, error, sizeof(error)) ||
        !simcity_recomp_render_current_frame(game, error, sizeof(error))) {
        fprintf(stderr, "native capture failed: %s\n", error);
        simcity_recomp_destroy(game);
        return 1;
    }
    native = (uint32_t *)malloc(SIMCITY_RECOMP_FRAME_PIXELS * sizeof(*native));
    wram = (uint8_t *)malloc(0x20000u);
    if (!native || !wram) {
        fprintf(stderr, "allocation failed\n");
        free(native);
        free(wram);
        simcity_recomp_destroy(game);
        return 1;
    }
    memcpy(native, simcity_recomp_frame_bgra(game),
           SIMCITY_RECOMP_FRAME_PIXELS * sizeof(*native));
    if (!simcity_recomp_set_widescreen(game, 1, error, sizeof(error))) {
        fprintf(stderr, "widescreen failed: %s\n", error);
        free(native);
        free(wram);
        simcity_recomp_destroy(game);
        return 1;
    }
    wide = simcity_recomp_frame_bgra(game);
    for (y = 0u; y < SIMCITY_RECOMP_FRAME_HEIGHT; ++y) {
        for (x = 0u; x < SIMCITY_RECOMP_FRAME_WIDTH; ++x) {
            if (native[(size_t)y * SIMCITY_RECOMP_FRAME_WIDTH + x] !=
                wide[(size_t)y * SIMCITY_RECOMP_WIDESCREEN_WIDTH +
                     SIMCITY_RECOMP_WIDESCREEN_MARGIN + x]) mismatches++;
        }
    }
    snprintf(native_path, sizeof(native_path), "%s\\native.bmp", argv[3]);
    snprintf(wide_path, sizeof(wide_path), "%s\\wide.bmp", argv[3]);
    snprintf(wram_path, sizeof(wram_path), "%s\\wram.bin", argv[3]);
    if (!write_bmp(native_path, native, SIMCITY_RECOMP_FRAME_WIDTH,
                   SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !write_bmp(wide_path, wide, SIMCITY_RECOMP_WIDESCREEN_WIDTH,
                   SIMCITY_RECOMP_FRAME_HEIGHT) ||
        !simcity_recomp_read_wram(game, 0u, wram, 0x20000u) ||
        !(wram_file = fopen(wram_path, "wb")) ||
        fwrite(wram, 1u, 0x20000u, wram_file) != 0x20000u ||
        fclose(wram_file) != 0) {
        fprintf(stderr, "artifact write failed\n");
        free(native);
        free(wram);
        simcity_recomp_destroy(game);
        return 1;
    }
    printf("frame=%u native_hash=%016llX wide_hash=%016llX center_mismatches=%llu\n",
           simcity_recomp_current_frame(game),
           (unsigned long long)fnv1a(native, SIMCITY_RECOMP_FRAME_PIXELS),
           (unsigned long long)fnv1a(wide, SIMCITY_RECOMP_MAX_FRAME_PIXELS),
           (unsigned long long)mismatches);
    printf("pcm_frames=%llu pcm_fnv1a64=%016llX pcm_overflow=0\n",
           (unsigned long long)pcm_frames,
           (unsigned long long)pcm_hash);
    if (traverse_practice || left_edge_practice)
        printf("practice_map=120x100 camera_x_min=%d camera_x_max=%d wide_cursor_x_min=%d wide_cursor_x_max=%d\n",
               min_view_x, max_view_x, min_wide_cursor_x,
               max_wide_cursor_x);
    free(native);
    free(wram);
    simcity_recomp_destroy(game);
    return mismatches && !allow_center_difference ? 1 : 0;
}
