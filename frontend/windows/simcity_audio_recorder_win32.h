#ifndef SIMCITY_AUDIO_RECORDER_WIN32_H
#define SIMCITY_AUDIO_RECORDER_WIN32_H
#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

typedef struct SimCityAudioRecorderWin32 {
    FILE *file;
    uint64_t frames_written;
    int write_failed;
    wchar_t path[4096];
    wchar_t last_error[256];
} SimCityAudioRecorderWin32;
void simcity_audio_recorder_win32_init(SimCityAudioRecorderWin32 *r);
int simcity_audio_recorder_win32_start(SimCityAudioRecorderWin32 *r,
                                      const wchar_t *audio_directory);
int simcity_audio_recorder_win32_write(SimCityAudioRecorderWin32 *r,
                                      const int16_t *samples,size_t frames);
int simcity_audio_recorder_win32_stop(SimCityAudioRecorderWin32 *r);
int simcity_audio_recorder_win32_active(const SimCityAudioRecorderWin32 *r);
#endif
