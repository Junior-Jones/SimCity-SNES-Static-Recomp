#ifndef SIMCITY_AUDIO_RESAMPLER_H
#define SIMCITY_AUDIO_RESAMPLER_H

#include <stddef.h>
#include <stdint.h>

typedef enum SimCityAudioResamplerMode {
    SIMCITY_AUDIO_RESAMPLER_HERMITE = 0,
    SIMCITY_AUDIO_RESAMPLER_LINEAR = 1,
    SIMCITY_AUDIO_RESAMPLER_NEAREST = 2
} SimCityAudioResamplerMode;

#define SIMCITY_AUDIO_RESAMPLER_PENDING_FRAMES 16384u

typedef struct SimCityAudioHermiteResampler {
    double previous_left[4];
    double previous_right[4];
    double rate_ratio;
    double fraction;
    int16_t last_left;
    int16_t last_right;
    int mode;
    int16_t pending_samples[SIMCITY_AUDIO_RESAMPLER_PENDING_FRAMES * 2u];
    size_t pending_frames;
} SimCityAudioHermiteResampler;

void simcity_audio_resampler_reset(SimCityAudioHermiteResampler *resampler);
void simcity_audio_resampler_set_rates(SimCityAudioHermiteResampler *resampler,
                                      double source_rate,
                                      double destination_rate);
void simcity_audio_resampler_set_mode(SimCityAudioHermiteResampler *resampler,
                                     int mode);

/* The caller must supply enough output storage.  For the SimCity
   32,040 Hz to 48,000 Hz path, twice input_frames is always sufficient. */
size_t simcity_audio_resampler_process(SimCityAudioHermiteResampler *resampler,
                                      const int16_t *input,
                                      size_t input_frames,
                                      int16_t *output,
                                      size_t output_capacity_frames);

#endif
