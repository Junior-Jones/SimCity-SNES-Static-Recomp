#include "simcity_static_recomp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    if (!bytes || fread(bytes, 1u, (size_t)length, file) != (size_t)length ||
        fclose(file) != 0) {
        free(bytes);
        return 0;
    }
    *data = bytes;
    *size = (size_t)length;
    return 1;
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

static uint16_t scenario_input(uint32_t frame, unsigned scenario_index) {
    uint16_t input = 0u;
    if (pulse(frame, 840u)) input |= SIMCITY_INPUT_START;
    if (pulse(frame, 980u) || pulse(frame, 1000u))
        input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 1040u) || pulse(frame, 1300u) || pulse(frame, 1700u))
        input |= SIMCITY_INPUT_B;
    if (scenario_index >= 3u && pulse(frame, 1120u))
        input |= SIMCITY_INPUT_DOWN;
    if ((scenario_index % 3u) >= 1u && pulse(frame, 1160u))
        input |= SIMCITY_INPUT_RIGHT;
    if ((scenario_index % 3u) >= 2u && pulse(frame, 1200u))
        input |= SIMCITY_INPUT_RIGHT;
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
    return (uint16_t)(scenario_input(frame, 0u) |
                      corner_navigation_input(frame));
}

static uint16_t scenario_mature_input(uint32_t frame,
                                      unsigned scenario_index) {
    uint16_t input = scenario_input(frame, scenario_index);

    /* The SNES manual control contract is exercised deliberately:
       A/Y accelerate map movement, Select moves between map and building
       toolbar, Start moves between map and top menu, B confirms, and X
       cancels or hides/shows the HUD. */
    if (frame >= 2800u && frame < 3400u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT;
    else if (frame >= 3400u && frame < 4000u)
        input |= SIMCITY_INPUT_Y | SIMCITY_INPUT_DOWN;
    else if (frame >= 4000u && frame < 4600u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_LEFT;
    else if (frame >= 4600u && frame < 5200u)
        input |= SIMCITY_INPUT_Y | SIMCITY_INPUT_UP;

    /* Building toolbar: enter it, visit multiple rows/columns, confirm one
       harmless selection, return to the map, then animate HUD hide/show. */
    if (pulse(frame, 5600u) || pulse(frame, 6100u))
        input |= SIMCITY_INPUT_SELECT;
    if (pulse(frame, 5660u) || pulse(frame, 5720u) ||
        pulse(frame, 5780u))
        input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 5840u)) input |= SIMCITY_INPUT_RIGHT;
    if (pulse(frame, 6000u)) input |= SIMCITY_INPUT_B;
    if (pulse(frame, 6200u) || pulse(frame, 6320u))
        input |= SIMCITY_INPUT_X;

    /* Top menu and Information: enter, move across the top row, open a
       submenu, move through its choices, confirm a view, then back out. */
    if (pulse(frame, 6600u) || pulse(frame, 7420u))
        input |= SIMCITY_INPUT_START;
    if (pulse(frame, 6680u) || pulse(frame, 6740u) ||
        pulse(frame, 6800u) || pulse(frame, 6960u))
        input |= SIMCITY_INPUT_RIGHT;
    if (pulse(frame, 7020u) || pulse(frame, 7080u))
        input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 6880u) || pulse(frame, 7140u))
        input |= SIMCITY_INPUT_B;
    if (pulse(frame, 7300u)) input |= SIMCITY_INPUT_X;

    /* Traverse the mature city again after menu use, reaching every map
       direction with accelerated scrolling. */
    if (frame >= 7600u && frame < 8600u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT;
    else if (frame >= 8600u && frame < 9600u)
        input |= SIMCITY_INPUT_Y | SIMCITY_INPUT_DOWN;
    else if (frame >= 9600u && frame < 10600u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_LEFT;
    else if (frame >= 10600u && frame < 11600u)
        input |= SIMCITY_INPUT_Y | SIMCITY_INPUT_UP;

    /* Revisit the top options and side building menus late in the run so
       simulation events and developed-map state are active at the same time. */
    if (pulse(frame, 12000u) || pulse(frame, 12600u))
        input |= SIMCITY_INPUT_START;
    if (pulse(frame, 12080u) || pulse(frame, 12140u))
        input |= SIMCITY_INPUT_RIGHT;
    if (pulse(frame, 12200u) || pulse(frame, 12260u))
        input |= SIMCITY_INPUT_DOWN;
    if (pulse(frame, 12320u)) input |= SIMCITY_INPUT_B;
    if (pulse(frame, 12480u)) input |= SIMCITY_INPUT_X;

    if (pulse(frame, 13500u) || pulse(frame, 14000u))
        input |= SIMCITY_INPUT_SELECT;
    if (pulse(frame, 13580u) || pulse(frame, 13640u) ||
        pulse(frame, 13700u))
        input |= SIMCITY_INPUT_UP;
    if (pulse(frame, 13760u) || pulse(frame, 13820u))
        input |= SIMCITY_INPUT_LEFT;
    if (pulse(frame, 13900u)) input |= SIMCITY_INPUT_B;

    if (frame >= 14500u && frame < 15400u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT;
    else if (frame >= 15400u && frame < 16300u)
        input |= SIMCITY_INPUT_Y | SIMCITY_INPUT_DOWN;
    else if (frame >= 16300u && frame < 17200u)
        input |= SIMCITY_INPUT_A | SIMCITY_INPUT_LEFT;
    else if (frame >= 17200u)
        input |= SIMCITY_INPUT_Y | SIMCITY_INPUT_UP;
    return input;
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
    int scenario_mature = 0;
    unsigned scenario_index = 0u;
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
    scenario_mature = strncmp(argv[2], "scenario-mature-", 16u) == 0;
    if (scenario_mature) {
        scenario_index = (unsigned)strtoul(argv[2] + 16, NULL, 10);
        if (scenario_index > 5u) {
            fputs("scenario-mature index must be 0 through 5\n", stderr);
            simcity_recomp_destroy(game);
            return 2;
        }
    }
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
         widescreen_tour_practice || scenario_corners || scenario_mature ||
         freeland_initial || freeland_initial_build || freeland_corners) &&
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
        else if (scenario_mature) target = 18030u;
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
            scenario_mature || freeland_initial || freeland_initial_build ||
            freeland_corners;
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
                              scenario_mature ?
                                  scenario_mature_input(frame, scenario_index) :
                              use_scenario ? scenario_input(frame, 0u) :
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
            if (scenario_mature &&
                (frame == 5200u || frame == 5620u || frame == 5900u ||
                 frame == 6620u || frame == 6900u || frame == 7200u ||
                 frame == 9000u || frame == 12380u || frame == 13880u ||
                 frame == 17980u)) {
                char checkpoint_name[64];
                int checkpoint_x = 0, checkpoint_y = 0;
                const char *phase =
                    frame == 5200u ? "map-first-tour" :
                    frame == 5620u ? "building-toolbar-entered" :
                    frame == 5900u ? "building-toolbar" :
                    frame == 6620u ? "top-menu-entered" :
                    frame == 6900u ? "information-opened" :
                    frame == 7200u ? "information-menu" :
                    frame == 9000u ? "map-second-tour" :
                    frame == 12380u ? "top-options-menu" :
                    frame == 13880u ? "building-toolbar-late" :
                                      "final-city";
                (void)snprintf(checkpoint_name, sizeof(checkpoint_name),
                               "%02u-%s", scenario_index, phase);
                if (!capture_checkpoint(game, argv[3], checkpoint_name, 1,
                                        &checkpoint_x, &checkpoint_y)) {
                    fprintf(stderr,
                            "scenario %u checkpoint failed at frame %u\n",
                            scenario_index, frame);
                    simcity_recomp_destroy(game);
                    return 1;
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
    if (scenario_mature) {
        uint16_t scenario = 0u, year = 0u, funds = 0u;
        if (!read_wram16(game, 0x0040u, &scenario) ||
            !read_wram16(game, 0x0b53u, &year) ||
            !read_wram16(game, 0x0b9du, &funds)) {
            fputs("scenario final-state read failed\n", stderr);
            free(native);
            free(wram);
            simcity_recomp_destroy(game);
            return 1;
        }
        printf("scenario_index=%u scenario_state=%u year=%u funds=%u "
               "duration_frames=18030 duration_seconds=300.006\n",
               scenario_index, scenario, year, funds);
    }
    if (traverse_practice || left_edge_practice)
        printf("practice_map=120x100 camera_x_min=%d camera_x_max=%d wide_cursor_x_min=%d wide_cursor_x_max=%d\n",
               min_view_x, max_view_x, min_wide_cursor_x,
               max_wide_cursor_x);
    free(native);
    free(wram);
    simcity_recomp_destroy(game);
    return mismatches && !allow_center_difference ? 1 : 0;
}
