#ifndef SIMCITY_VIDEO_OUTPUT_SDL3_H
#define SIMCITY_VIDEO_OUTPUT_SDL3_H

#if !defined(_WIN32)
#error This video presenter is for Windows only.
#endif

#include <windows.h>
#include <stdint.h>

#include <SDL3/SDL.h>

#include "simcity_static_recomp.h"

typedef struct SimCityVideoDiagnostics {
    uint64_t submitted_frames;
    uint64_t presented_frames;
    uint64_t dropped_presentations;
    uint64_t renderer_recoveries;
    uint64_t presentation_failures;
    int using_gpu;
    int vsync_enabled;
    char renderer_name[64];
} SimCityVideoDiagnostics;

typedef struct SimCityVideoOutput {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    uint32_t frame_buffers[2][SIMCITY_RECOMP_FRAME_WIDTH *
                              SIMCITY_RECOMP_FRAME_HEIGHT];
    unsigned front_buffer;
    int frame_valid;
    int video_subsystem_initialized;
    int vsync_enabled;
    SimCityVideoDiagnostics diagnostics;
} SimCityVideoOutput;

void simcity_video_output_initialize(SimCityVideoOutput *output);
int simcity_video_output_open(SimCityVideoOutput *output, HWND window,
                              int vsync_enabled, wchar_t *error,
                              size_t error_capacity);
void simcity_video_output_close(SimCityVideoOutput *output);
int simcity_video_output_set_vsync(SimCityVideoOutput *output, int enabled);
int simcity_video_output_submit(SimCityVideoOutput *output,
                                const uint32_t *pixels, size_t pixel_count);
int simcity_video_output_present(SimCityVideoOutput *output, int render_top,
                                 int integer_scale, int correct_aspect);
int simcity_video_output_available(const SimCityVideoOutput *output);
void simcity_video_output_get_diagnostics(
    const SimCityVideoOutput *output, SimCityVideoDiagnostics *diagnostics);
void simcity_video_output_calculate_destination(
    int output_width, int output_height, int render_top, int integer_scale,
    int correct_aspect, int *x, int *y, int *width, int *height);

#endif
