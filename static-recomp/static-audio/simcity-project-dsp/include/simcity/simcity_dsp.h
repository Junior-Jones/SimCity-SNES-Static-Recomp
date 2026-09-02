#ifndef SIMCITY_PROJECT_DSP_H
#define SIMCITY_PROJECT_DSP_H
#include <stddef.h>
#include <stdint.h>

/*
 * Fixed SNES S-DSP hardware semantics adapted from the project-owned Jungle
 * Strike implementation.  This source is now compiled as part of SimCity;
 * it is not an emulator APU library or a game-program interpreter.
 */
typedef uint32_t simcity_dsp_stop_reason;
#define SIMCITY_DSP_STOP_NONE ((simcity_dsp_stop_reason)0u)
#define SIMCITY_DSP_STOP_INVALID_ARGUMENT ((simcity_dsp_stop_reason)5200u)
#define SIMCITY_DSP_STOP_REGISTER_UNKNOWN ((simcity_dsp_stop_reason)5201u)
#define SIMCITY_DSP_STOP_ARAM_REQUIRED_UNKNOWN ((simcity_dsp_stop_reason)5202u)
#define SIMCITY_DSP_STOP_PCM_FIFO_OVERFLOW ((simcity_dsp_stop_reason)5203u)
#define SIMCITY_DSP_STOP_PHASE_INVARIANT ((simcity_dsp_stop_reason)5204u)
#ifdef __cplusplus
extern "C" {
#endif
#define SIMCITY_DSP_VOICES 8u
#define SIMCITY_DSP_REG_COUNT 128u
#define SIMCITY_DSP_PHASES 32u
#define SIMCITY_DSP_PCM_FIFO_FRAMES 8192u

typedef enum simcity_dsp_envelope_mode {
    SIMCITY_DSP_ENV_RELEASE = 0,
    SIMCITY_DSP_ENV_ATTACK = 1,
    SIMCITY_DSP_ENV_DECAY = 2,
    SIMCITY_DSP_ENV_SUSTAIN = 3
} simcity_dsp_envelope_mode;

typedef struct simcity_dsp_voice {
    int32_t envelope;
    int32_t previous_calculated_envelope;
    uint32_t interpolation_position;
    uint16_t brr_address;
    uint16_t brr_offset;
    uint8_t envelope_mode;
    uint8_t key_on_delay;
    uint8_t env_out;
    uint8_t buffer_pos;
    int16_t sample_buffer[12];
    int16_t output;
    uint8_t active;
    uint64_t brr_groups_decoded;
} simcity_dsp_voice;

typedef struct simcity_dsp {
    uint8_t *aram;
    uint8_t *aram_known;
    uint8_t regs[SIMCITY_DSP_REG_COUNT];
    uint8_t reg_known[SIMCITY_DSP_REG_COUNT / 8u];
    simcity_dsp_voice voices[SIMCITY_DSP_VOICES];

    uint8_t phase;
    uint16_t counter;
    uint16_t noise_lfsr;
    uint8_t out_reg_buffer;
    uint8_t env_reg_buffer;
    uint8_t voice_end_buffer;
    int32_t voice_output;
    int32_t out_samples[2];
    uint8_t out_samples_known[2];
    uint16_t pitch;
    uint16_t sample_address;
    uint16_t brr_next_address;
    uint8_t brr_next_known;
    uint8_t dir_latch;
    uint8_t noise_on_latch;
    uint8_t pmon_latch;
    uint8_t key_on;
    uint8_t new_key_on;
    uint8_t key_off;
    uint8_t every_other_sample;
    uint8_t source_number;
    uint8_t brr_header;
    uint8_t brr_header_known;
    uint8_t brr_data;
    uint8_t brr_data_known;
    uint8_t looped;
    uint8_t adsr1;

    int32_t echo_in[2];
    int32_t echo_out[2];
    uint8_t echo_out_known[2];
    int16_t echo_history[8][2];
    uint8_t echo_history_known[8][2];
    uint16_t echo_pointer;
    uint16_t echo_length;
    uint16_t echo_offset;
    uint8_t echo_history_pos;
    uint8_t esa_latch;
    uint8_t echo_on_latch;
    uint8_t echo_enabled_latch;

    int16_t pcm_fifo[SIMCITY_DSP_PCM_FIFO_FRAMES * 2u];
    uint8_t pcm_known_fifo[SIMCITY_DSP_PCM_FIFO_FRAMES];
    size_t pcm_read_index;
    size_t pcm_write_index;
    size_t pcm_count;
    uint64_t pcm_frames_produced;
    uint64_t pcm_known_frames_produced;
    uint64_t pcm_unknown_frames_produced;
    uint64_t pcm_overflows;
    uint64_t pcm_fnv1a64;

    uint64_t phase_steps;
    uint64_t sample_steps;
    uint64_t register_writes;
    uint64_t register_reads;
    uint64_t aram_reads;
    uint64_t aram_known_reads;
    uint64_t aram_unknown_reads;
    uint64_t aram_writes;
    uint64_t key_on_events;
    uint64_t key_off_events;
    uint8_t last_aram_phase;
    uint16_t last_aram_address;
    uint8_t last_aram_known;
    uint8_t last_latched_reg;
    uint8_t last_latch_phase;
    simcity_dsp_stop_reason last_stop;
} simcity_dsp;

void simcity_dsp_power_on(simcity_dsp *dsp, uint8_t *aram, uint8_t *aram_known);
simcity_dsp_stop_reason simcity_dsp_write_register(simcity_dsp *dsp, uint8_t reg, uint8_t value);
simcity_dsp_stop_reason simcity_dsp_read_register(simcity_dsp *dsp, uint8_t reg, uint8_t *value);
simcity_dsp_stop_reason simcity_dsp_step_phase(simcity_dsp *dsp);
simcity_dsp_stop_reason simcity_dsp_step_smp_cycles(simcity_dsp *dsp, uint32_t cycles);
simcity_dsp_stop_reason simcity_dsp_step_sample(simcity_dsp *dsp);
int simcity_dsp_register_known(const simcity_dsp *dsp, uint8_t reg);
size_t simcity_dsp_pcm_available(const simcity_dsp *dsp);
size_t simcity_dsp_pcm_read(simcity_dsp *dsp, int16_t *stereo_frames, size_t capacity_frames);
size_t simcity_dsp_pcm_read_with_knownness(simcity_dsp *dsp, int16_t *stereo_frames, uint8_t *frame_known, size_t capacity_frames);
uint64_t simcity_dsp_pcm_hash(const simcity_dsp *dsp);
uint8_t simcity_dsp_phase(const simcity_dsp *dsp);
#ifdef __cplusplus
}
#endif
#endif
