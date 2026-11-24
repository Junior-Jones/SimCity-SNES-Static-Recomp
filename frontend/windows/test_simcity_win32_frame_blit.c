#define SIMCITY_TEST_STAGED_BLIT
#include "simcity_win32_frame_blit.h"
#include <stdio.h>
#include <stdlib.h>

static int scaled_candidate(unsigned w, unsigned h, unsigned sw, int crop, int benchmark) {
    const RECT area = {0, 0, (LONG)w, (LONG)h};
    const unsigned sh = crop ? 224u : SIMCITY_RECOMP_FRAME_HEIGHT;
    BITMAPINFO info = simcity_scaled_dib_info(w, h);
    SimCityScaledDib scale = {0};
    SimCityStagedBlit staged = {0};
    HDC dc = CreateCompatibleDC(NULL);
    HBITMAP bitmap = NULL;
    HGDIOBJ old = NULL;
    void *bits = NULL;
    uint32_t *source = malloc((size_t)sw * SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*source));
    uint32_t *reference = malloc((size_t)w * h * sizeof(*reference));
    LARGE_INTEGER frequency;
    LONGLONG ticks[3] = {0}, peaks[3] = {0};
    unsigned counts[3] = {0};
    int ok = 0;
    if (!dc || !source || !reference || !QueryPerformanceFrequency(&frequency)) goto done;
    bitmap = CreateDIBSection(dc, &info, DIB_RGB_COLORS, &bits, NULL, 0);
    if (!bitmap || !bits) goto done;
    old = SelectObject(dc, bitmap);
    if (old == HGDI_ERROR) old = NULL;
    if (!old) goto done;
    uint32_t color = 0x9384a346u;
    for (unsigned i = 0u; i < sw * SIMCITY_RECOMP_FRAME_HEIGHT; ++i) {
        color = 1664525u * color + 1013904223u;
        source[i] = (color >> 8) & 0xffffffu;
    }
    if (!simcity_win32_frame_blit(dc, &area, source, sw, crop, 0) || !GdiFlush()) goto done;
    memcpy(reference, bits, (size_t)w * h * sizeof(*reference));
    if (!simcity_win32_frame_blit_with_cache(dc, &area, source, sw, crop, 0, &scale) ||
        scale.draws != 1u || !GdiFlush()) goto done;
    for (size_t i = 0u; i < (size_t)w * h; ++i)
        if ((reference[i] ^ ((const uint32_t *)bits)[i]) & 0xffffffu) {
            fprintf(stderr, "Cached sampling differs at %zu for %u x %u.\n", i, w, h);
            goto done;
        }
    if (!simcity_win32_frame_blit_impl(dc, &area, source, sw, crop, 0, NULL, &staged) ||
        staged.draws != 1u || !GdiFlush()) goto done;
    for (size_t i = 0u; i < (size_t)w * h; ++i)
        if ((reference[i] ^ ((const uint32_t *)bits)[i]) & 0xffffffu) {
            fprintf(stderr, "Staged source differs at %zu for %u x %u.\n", i, w, h);
            goto done;
        }
    for (unsigned frame = 0; benchmark && frame < 120u; ++frame) {
        for (unsigned order = 0; order < 3u; ++order) {
            const unsigned candidate = (frame + order) % 3u;
            LARGE_INTEGER start, end;
            QueryPerformanceCounter(&start);
            if (!simcity_win32_frame_blit_impl(dc, &area, source, sw, crop, 0,
                candidate == 1u ? &scale : NULL, candidate == 2u ? &staged : NULL) || !GdiFlush()) goto done;
            QueryPerformanceCounter(&end);
            const LONGLONG elapsed = end.QuadPart - start.QuadPart;
            ticks[candidate] += elapsed;
            if (elapsed > peaks[candidate]) peaks[candidate] = elapsed;
            ++counts[candidate];
        }
    }
    if (scale.draws != counts[1] + 1u || staged.draws != counts[2] + 1u) goto done;
    if (benchmark) {
        const double ms = 1000.0 / frequency.QuadPart;
        printf("scale %ux%u from %ux%u: stock avg %.3f peak %.3f ms; cache avg %.3f peak %.3f ms; staged avg %.3f peak %.3f ms\n",
            w, h, sw, sh, ticks[0] * ms / counts[0], peaks[0] * ms,
            ticks[1] * ms / counts[1], peaks[1] * ms, ticks[2] * ms / counts[2], peaks[2] * ms);
    }
    ok = 1;
done:
    simcity_staged_blit_close(&staged);
    simcity_scaled_dib_close(&scale);
    if (old) SelectObject(dc, old);
    if (bitmap) DeleteObject(bitmap);
    if (dc) DeleteDC(dc);
    free(reference);
    free(source);
    return ok;
}

int main(int argc, char **argv) {
    enum { W = 512, H = 288 };
    enum { RGB_MASK = 0xffffff, BLUE = 0x002244ff, RED = 0x00dd3322, MARK = 0x00feddca };
    const RECT screen = {0, 0, W, H};
    const RECT inset = {24, 20, 488, 268};
    BITMAPINFO info = {0};
    HDC dc = CreateCompatibleDC(NULL);
    HBITMAP bitmap = NULL;
    HGDIOBJ old = NULL;
    void *bits = NULL;
    uint32_t *source = malloc(SIMCITY_RECOMP_MAX_FRAME_PIXELS * sizeof(*source));
    int ok = 0;
    if (!dc || !source) goto done;
    info.bmiHeader.biSize = sizeof(info.bmiHeader);
    info.bmiHeader.biWidth = W;
    info.bmiHeader.biHeight = -H;
    info.bmiHeader.biPlanes = 1u;
    info.bmiHeader.biBitCount = 32u;
    info.bmiHeader.biCompression = BI_RGB;
    bitmap = CreateDIBSection(dc, &info, DIB_RGB_COLORS, &bits, NULL, 0u);
    if (!bitmap || !bits || !(old = SelectObject(dc, bitmap))) goto done;
    uint32_t *dest = bits;
    for (unsigned i = 0u; i < W * H; ++i) dest[i] = MARK;
    for (unsigned i = 0u; i < SIMCITY_RECOMP_MAX_FRAME_PIXELS; ++i) source[i] = BLUE;
    if (!simcity_win32_frame_blit(dc, &inset, source, SIMCITY_RECOMP_FRAME_WIDTH, 0, 1) ||
        !GdiFlush()) goto done;
    for (unsigned y = 0u; y < H; ++y) for (unsigned x = 0u; x < W; ++x) {
        const unsigned native_left = (W - SIMCITY_RECOMP_FRAME_WIDTH) / 2u;
        const unsigned native_top = (H - SIMCITY_RECOMP_FRAME_HEIGHT) / 2u;
        const int in_area = x >= 24u && x < 488u && y >= 20u && y < 268u;
        const int in_frame = x >= native_left && x < native_left + SIMCITY_RECOMP_FRAME_WIDTH &&
            y >= native_top && y < native_top + SIMCITY_RECOMP_FRAME_HEIGHT;
        if ((dest[y * W + x] & RGB_MASK) != (in_frame ? BLUE : in_area ? 0u : MARK)) goto done;
    }
    for (unsigned y = 0u; y < SIMCITY_RECOMP_FRAME_HEIGHT; ++y)
        for (unsigned x = 0u; x < SIMCITY_RECOMP_WIDESCREEN_WIDTH; ++x)
            source[y * SIMCITY_RECOMP_WIDESCREEN_WIDTH + x] = (y < 7u || y >= 231u) ? BLUE : RED;
    if (!simcity_win32_frame_blit(dc, &screen, source, SIMCITY_RECOMP_WIDESCREEN_WIDTH, 1, 0) ||
        !GdiFlush()) goto done;
    for (unsigned i = 0u; i < W * H; ++i)
        if ((dest[i] & RGB_MASK) != RED) goto done;
    const int benchmark = argc == 2 && strcmp(argv[1], "--benchmark") == 0;
    ok = scaled_candidate(1920u, 1080u, SIMCITY_RECOMP_WIDESCREEN_WIDTH, 1, benchmark) &&
         scaled_candidate(1365u, 767u, SIMCITY_RECOMP_WIDESCREEN_WIDTH, 1, benchmark) &&
         scaled_candidate(1920u, 1080u, SIMCITY_RECOMP_FRAME_WIDTH, 0, benchmark);
done:
    if (old) SelectObject(dc, old);
    if (bitmap) DeleteObject(bitmap);
    if (dc) DeleteDC(dc);
    free(source);
    if (!ok) fprintf(stderr, "Unexpected Win32 frame pixels or border writes.\n");
    return ok ? 0 : 1;
}
