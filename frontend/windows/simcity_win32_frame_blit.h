#ifndef SIMCITY_WIN32_FRAME_BLIT_H
#define SIMCITY_WIN32_FRAME_BLIT_H

#include <windows.h>
#include <stdint.h>
#include "simcity_static_recomp.h"
#include "simcity_win32_scaled_dib.h"

#ifdef SIMCITY_TEST_STAGED_BLIT
/* Source-size staging experiment: keep a reusable DIB and let GDI scale
   from it. Never cache guest pixels by frame number or change the layout. */
typedef struct SimCityStagedBlit {
    HDC dc;
    HBITMAP bitmap;
    HGDIOBJ old;
    void *bits;
    unsigned width, height, draws;
} SimCityStagedBlit;

static inline void simcity_staged_blit_close(SimCityStagedBlit *s) {
    if (s->old) SelectObject(s->dc, s->old);
    if (s->bitmap) DeleteObject(s->bitmap);
    if (s->dc) DeleteDC(s->dc);
    memset(s, 0, sizeof(*s));
}

static inline int simcity_staged_blit_draw(SimCityStagedBlit *s, HDC target,
    int x, int y, int w, int h, unsigned sw, unsigned sh, const uint32_t *pixels) {
    if (s->width != sw || s->height != sh) {
        simcity_staged_blit_close(s);
        BITMAPINFO info = simcity_scaled_dib_info(sw, sh);
        s->dc = CreateCompatibleDC(target);
        if (s->dc) s->bitmap = CreateDIBSection(s->dc, &info, DIB_RGB_COLORS, &s->bits, NULL, 0);
        if (s->bitmap && s->bits) {
            HGDIOBJ previous = SelectObject(s->dc, s->bitmap);
            if (previous != HGDI_ERROR) s->old = previous;
        }
        if (!s->old) { simcity_staged_blit_close(s); return 0; }
        s->width = sw;
        s->height = sh;
    }
    /* Complete any prior GDI read before writing directly to the source. */
    if (!GdiFlush()) return 0;
    memcpy(s->bits, pixels, (size_t)sw * sh * sizeof(*pixels));
    SetStretchBltMode(target, COLORONCOLOR);
    if (!StretchBlt(target, x, y, w, h, s->dc, 0, 0, (int)sw, (int)sh, SRCCOPY)) return 0;
    ++s->draws;
    return 1;
}
#endif

/* Drawing depends only on an immutable frame and the requested layout. */
static inline int simcity_win32_frame_blit_impl(HDC dc, const RECT *area,
    const uint32_t *pixels, unsigned image_width, int crop_wide, int integer_scale,
    SimCityScaledDib *cache, void *staged) {
    const int width = (int)image_width;
    const int available_width = area->right - area->left;
    const int available_height = area->bottom - area->top;
    int height = (int)SIMCITY_RECOMP_FRAME_HEIGHT;
    int draw_width = available_width, draw_height;
    BITMAPINFO bitmap = {0};
    if (!dc || !pixels || !width || available_width <= 0 || available_height <= 0)
        return 0;
    draw_height = draw_width * height / width;
    if (crop_wide) {
        /* Crop only the SNES's seven top and eight bottom non-visible rows. */
        height = 224;
        pixels += (size_t)7u * image_width;
        draw_height = available_height;
    } else {
        if (integer_scale >= 1 && integer_scale <= 4) {
            while (integer_scale > 1 &&
                   (width * integer_scale > available_width ||
                    height * integer_scale > available_height))
                --integer_scale;
            if (width * integer_scale <= available_width &&
                height * integer_scale <= available_height) {
                draw_width = width * integer_scale;
                draw_height = height * integer_scale;
            }
        }
        if (draw_height > available_height) {
            draw_height = available_height;
            draw_width = draw_height * width / height;
        }
    }
    if (!draw_width || !draw_height) return 0;
    bitmap.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bitmap.bmiHeader.biWidth = width;
    bitmap.bmiHeader.biHeight = -height;
    bitmap.bmiHeader.biPlanes = 1u;
    bitmap.bmiHeader.biBitCount = 32u;
    bitmap.bmiHeader.biCompression = BI_RGB;
    const int x = area->left + (available_width - draw_width) / 2;
    const int y = area->top + (available_height - draw_height) / 2;
    const RECT matte[] = {
        {area->left, area->top, area->right, y},
        {area->left, y + draw_height, area->right, area->bottom},
        {area->left, y, x, y + draw_height},
        {x + draw_width, y, area->right, y + draw_height}
    };
    const HBRUSH black = (HBRUSH)GetStockObject(BLACK_BRUSH);
    /* SRCCOPY covers the image, so clear only letterbox/pillarbox margins.
       Fullscreen widescreen writes the output once rather than twice. */
    for (unsigned i = 0; i < sizeof(matte) / sizeof(matte[0]); ++i)
        if (matte[i].right > matte[i].left && matte[i].bottom > matte[i].top)
            FillRect(dc, &matte[i], black);
#ifdef SIMCITY_TEST_STAGED_BLIT
    if (staged && simcity_staged_blit_draw(staged, dc, x, y, draw_width, draw_height,
                                         image_width, (unsigned)height, pixels)) return 1;
#else
    (void)staged;
#endif
    if (cache && draw_width >= width && draw_height >= height &&
        (draw_width != width || draw_height != height) &&
        ((cache->width == (unsigned)draw_width && cache->height == (unsigned)draw_height &&
          cache->source_width == image_width && cache->source_height == (unsigned)height) ||
         simcity_scaled_dib_open(cache, dc, (unsigned)draw_width, (unsigned)draw_height,
                                 image_width, (unsigned)height)) &&
        simcity_scaled_dib_draw(cache, dc, x, y, pixels))
        return 1;
    SetStretchBltMode(dc, COLORONCOLOR);
    const int lines = StretchDIBits(dc, x, y, draw_width, draw_height,
        0, 0, width, height, pixels, &bitmap, DIB_RGB_COLORS, SRCCOPY);
    return lines != GDI_ERROR && lines != 0;
}

static inline int simcity_win32_frame_blit_with_cache(HDC dc, const RECT *area,
    const uint32_t *pixels, unsigned image_width, int crop_wide, int integer_scale,
    SimCityScaledDib *cache) {
    return simcity_win32_frame_blit_impl(dc, area, pixels, image_width, crop_wide,
                                        integer_scale, cache, NULL);
}

static inline int simcity_win32_frame_blit(HDC dc, const RECT *area,
    const uint32_t *pixels, unsigned image_width, int crop_wide, int integer_scale) {
    return simcity_win32_frame_blit_with_cache(dc, area, pixels, image_width,
                                             crop_wide, integer_scale, NULL);
}

#endif
