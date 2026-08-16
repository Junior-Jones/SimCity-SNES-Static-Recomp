#if !defined(_WIN32)
#error This video presenter is for Windows only.
#endif

#include "simcity_video_output_sdl3.h"

#include <SDL3/SDL_properties.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_video.h>

#include <string.h>
#include <wchar.h>

static void copy_wide(wchar_t *destination, size_t capacity,
                      const wchar_t *source) {
    if (!destination || capacity == 0u) return;
    if (!source) source = L"";
    wcsncpy(destination, source, capacity - 1u);
    destination[capacity - 1u] = L'\0';
}

static void sdl_error_to_wide(const char *prefix, wchar_t *error,
                              size_t capacity) {
    wchar_t detail[256];
    wchar_t message[384];
    int converted;
    if (!error || capacity == 0u) return;
    detail[0] = L'\0';
    converted = MultiByteToWideChar(CP_UTF8, 0, SDL_GetError(), -1, detail,
                                    (int)(sizeof(detail) / sizeof(detail[0])));
    if (converted <= 0) copy_wide(detail, 256u, L"Unknown SDL video error");
    (void)_snwprintf(message, sizeof(message) / sizeof(message[0]),
                     L"%S: %s", prefix ? prefix : "Video error", detail);
    message[(sizeof(message) / sizeof(message[0])) - 1u] = L'\0';
    copy_wide(error, capacity, message);
}

void simcity_video_output_initialize(SimCityVideoOutput *output) {
    if (output) memset(output, 0, sizeof(*output));
}

static int create_renderer(SimCityVideoOutput *output, HWND window,
                           int vsync_enabled, wchar_t *error,
                           size_t error_capacity) {
    SDL_PropertiesID window_properties = 0;
    SDL_PropertiesID renderer_properties = 0;
    const char *renderer_name;
    if (!SDL_InitSubSystem(SDL_INIT_VIDEO)) {
        sdl_error_to_wide("Unable to initialize SDL video", error,
                          error_capacity);
        return 0;
    }
    output->video_subsystem_initialized = 1;
    window_properties = SDL_CreateProperties();
    if (!window_properties ||
        !SDL_SetPointerProperty(window_properties,
            SDL_PROP_WINDOW_CREATE_WIN32_HWND_POINTER, window)) {
        sdl_error_to_wide("Unable to wrap the Win32 game window", error,
                          error_capacity);
        if (window_properties) SDL_DestroyProperties(window_properties);
        return 0;
    }
    output->window = SDL_CreateWindowWithProperties(window_properties);
    SDL_DestroyProperties(window_properties);
    if (!output->window) {
        sdl_error_to_wide("Unable to wrap the Win32 game window", error,
                          error_capacity);
        return 0;
    }
    renderer_properties = SDL_CreateProperties();
    if (!renderer_properties ||
        !SDL_SetPointerProperty(renderer_properties,
            SDL_PROP_RENDERER_CREATE_WINDOW_POINTER, output->window) ||
        !SDL_SetStringProperty(renderer_properties,
            SDL_PROP_RENDERER_CREATE_NAME_STRING,
            "direct3d11,direct3d12,software") ||
        !SDL_SetNumberProperty(renderer_properties,
            SDL_PROP_RENDERER_CREATE_PRESENT_VSYNC_NUMBER,
            vsync_enabled ? 1 : 0)) {
        sdl_error_to_wide("Unable to configure the video renderer", error,
                          error_capacity);
        if (renderer_properties) SDL_DestroyProperties(renderer_properties);
        return 0;
    }
    output->renderer = SDL_CreateRendererWithProperties(renderer_properties);
    SDL_DestroyProperties(renderer_properties);
    if (!output->renderer) {
        sdl_error_to_wide("Unable to create a GPU or software renderer", error,
                          error_capacity);
        return 0;
    }
    output->texture = SDL_CreateTexture(
        output->renderer, SDL_PIXELFORMAT_BGRA32,
        SDL_TEXTUREACCESS_STREAMING, SIMCITY_RECOMP_FRAME_WIDTH,
        SIMCITY_RECOMP_FRAME_HEIGHT);
    if (!output->texture ||
        !SDL_SetTextureScaleMode(output->texture, SDL_SCALEMODE_NEAREST)) {
        sdl_error_to_wide("Unable to create the game-frame texture", error,
                          error_capacity);
        return 0;
    }
    renderer_name = SDL_GetRendererName(output->renderer);
    if (renderer_name) {
        strncpy(output->diagnostics.renderer_name, renderer_name,
                sizeof(output->diagnostics.renderer_name) - 1u);
        output->diagnostics.renderer_name[
            sizeof(output->diagnostics.renderer_name) - 1u] = '\0';
    }
    output->diagnostics.using_gpu = renderer_name &&
        strcmp(renderer_name, "software") != 0;
    output->vsync_enabled = vsync_enabled != 0;
    output->diagnostics.vsync_enabled = output->vsync_enabled;
    return 1;
}

int simcity_video_output_open(SimCityVideoOutput *output, HWND window,
                              int vsync_enabled, wchar_t *error,
                              size_t error_capacity) {
    if (error && error_capacity) error[0] = L'\0';
    if (!output || !window) return 0;
    simcity_video_output_close(output);
    if (!create_renderer(output, window, vsync_enabled, error,
                         error_capacity)) {
        simcity_video_output_close(output);
        return 0;
    }
    return 1;
}

void simcity_video_output_close(SimCityVideoOutput *output) {
    if (!output) return;
    if (output->texture) SDL_DestroyTexture(output->texture);
    if (output->renderer) SDL_DestroyRenderer(output->renderer);
    if (output->window) SDL_DestroyWindow(output->window);
    if (output->video_subsystem_initialized) SDL_QuitSubSystem(SDL_INIT_VIDEO);
    memset(output, 0, sizeof(*output));
}

int simcity_video_output_set_vsync(SimCityVideoOutput *output, int enabled) {
    if (!output || !output->renderer) return 0;
    if (!SDL_SetRenderVSync(output->renderer, enabled ? 1 : 0)) return 0;
    output->vsync_enabled = enabled != 0;
    output->diagnostics.vsync_enabled = output->vsync_enabled;
    return 1;
}

int simcity_video_output_submit(SimCityVideoOutput *output,
                                const uint32_t *pixels, size_t pixel_count) {
    unsigned back_buffer;
    const size_t required = (size_t)SIMCITY_RECOMP_FRAME_WIDTH *
                            SIMCITY_RECOMP_FRAME_HEIGHT;
    if (!output || !pixels || pixel_count < required) return 0;
    back_buffer = output->frame_valid ? output->front_buffer ^ 1u : 0u;
    memcpy(output->frame_buffers[back_buffer], pixels,
           required * sizeof(*pixels));
    output->front_buffer = back_buffer;
    output->frame_valid = 1;
    output->diagnostics.submitted_frames++;
    return 1;
}

void simcity_video_output_calculate_destination(
    int output_width, int output_height, int render_top, int integer_scale,
    int correct_aspect, int *x, int *y, int *width, int *height) {
    int available_height = output_height - render_top;
    int draw_width;
    int draw_height;
    int aspect_width = correct_aspect ? 4 : SIMCITY_RECOMP_FRAME_WIDTH;
    int aspect_height = correct_aspect ? 3 : SIMCITY_RECOMP_FRAME_HEIGHT;
    if (output_width < 1) output_width = 1;
    if (available_height < 1) available_height = 1;
    if (integer_scale >= 1 && integer_scale <= 4) {
        draw_height = SIMCITY_RECOMP_FRAME_HEIGHT * integer_scale;
        draw_width = correct_aspect ?
            (draw_height * 4 + 1) / 3 :
            SIMCITY_RECOMP_FRAME_WIDTH * integer_scale;
    } else {
        draw_width = output_width;
        draw_height = draw_width * aspect_height / aspect_width;
        if (draw_height > available_height) {
            draw_height = available_height;
            draw_width = draw_height * aspect_width / aspect_height;
        }
    }
    if (draw_width > output_width) draw_width = output_width;
    if (draw_height > available_height) draw_height = available_height;
    if (x) *x = (output_width - draw_width) / 2;
    if (y) *y = render_top + (available_height - draw_height) / 2;
    if (width) *width = draw_width;
    if (height) *height = draw_height;
}

int simcity_video_output_present(SimCityVideoOutput *output, int render_top,
                                 int integer_scale, int correct_aspect) {
    SDL_FRect destination;
    int output_width;
    int output_height;
    int x;
    int y;
    int width;
    int height;
    if (!output || !output->renderer || !output->texture ||
        !output->frame_valid) return 0;
    if (!SDL_GetRenderOutputSize(output->renderer, &output_width,
                                 &output_height)) goto failed;
    simcity_video_output_calculate_destination(
        output_width, output_height, render_top, integer_scale,
        correct_aspect, &x, &y, &width, &height);
    if (!SDL_UpdateTexture(output->texture, NULL,
            output->frame_buffers[output->front_buffer],
            SIMCITY_RECOMP_FRAME_WIDTH * (int)sizeof(uint32_t)) ||
        !SDL_SetRenderDrawColor(output->renderer, 0, 0, 0, 255) ||
        !SDL_RenderClear(output->renderer)) goto failed;
    destination.x = (float)x;
    destination.y = (float)y;
    destination.w = (float)width;
    destination.h = (float)height;
    if (!SDL_RenderTexture(output->renderer, output->texture, NULL,
                           &destination)) goto failed;
    SDL_RenderPresent(output->renderer);
    output->diagnostics.presented_frames++;
    return 1;
failed:
    output->diagnostics.presentation_failures++;
    return 0;
}

int simcity_video_output_available(const SimCityVideoOutput *output) {
    return output && output->renderer && output->texture;
}

void simcity_video_output_get_diagnostics(
    const SimCityVideoOutput *output, SimCityVideoDiagnostics *diagnostics) {
    if (!diagnostics) return;
    if (!output) memset(diagnostics, 0, sizeof(*diagnostics));
    else *diagnostics = output->diagnostics;
}
