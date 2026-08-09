#ifndef SC_STATIC_APU_H
#define SC_STATIC_APU_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

typedef void (*SCStaticAudioSink)(void *context,int16_t left,int16_t right);
typedef void (*SCStaticInstructionTrace)(void *context,uint16_t pc,uint8_t opcode);
typedef int (*SCStaticAramWriteTrace)(void *context,uint16_t instruction_pc,uint16_t address,uint8_t value);
typedef void (*SCStaticDspWriteTrace)(void *context,uint16_t instruction_pc,uint8_t address,uint8_t value);
typedef void (*SCStaticPortTrace)(void *context,uint16_t instruction_pc,uint8_t direction,uint8_t port,uint8_t value);
typedef struct SCStaticTraceCallbacks {
    SCStaticInstructionTrace instruction;
    SCStaticAramWriteTrace aram_write;
    SCStaticDspWriteTrace dsp_write;
    SCStaticPortTrace port;
    void *context;
} SCStaticTraceCallbacks;

typedef struct SCStaticApuStatus {
    uint64_t synchronized_master_clock;
    uint64_t smp_cycles;
    uint64_t smp_instructions;
    uint64_t aot_validated_instructions;
    uint64_t pcm_frames;
    uint16_t smp_pc;
    uint16_t aot_fail_pc;
    uint8_t expected_opcode;
    uint8_t actual_opcode;
    uint8_t initialized;
    uint8_t aot_failed;
    uint8_t aot_fail_reason;
    uint8_t current_epoch;
    uint32_t code_write_barriers;
    uint64_t sdsp_primitive_steps;
    uint64_t sdsp_primitive_hash;
    uint64_t sdsp_brr_steps;
    uint64_t sdsp_brr_hash;
    uint8_t sdsp_static_failed;
    uint8_t sdsp_fail_reason;
    uint8_t sdsp_fail_phase;
    uint8_t dsp_phase;
    uint8_t timer_enable_mask;
    uint8_t timer_target[3];
    uint8_t timer_stage1[3];
    uint8_t timer_stage2[3];
    uint8_t timer_stage3[3];
    uint32_t clock_ratio_numerator;
    uint32_t clock_ratio_denominator;
    uint32_t clock_remainder;
    uint32_t maximum_sync_master_delta;
    uint32_t first_sync_master_delta;
    uint32_t maximum_followup_sync_master_delta;
    int32_t smp_cycle_overshoot;
    uint64_t smp_executed_cycles;
    uint64_t sync_calls;
    uint64_t rendezvous_hash;
    uint64_t cpu_port_event_count;
    uint64_t cpu_port_event_hash;
} SCStaticApuStatus;

int sc_static_apu_acquire(char *error,size_t error_capacity);
void sc_static_apu_release(void);
void sc_static_apu_reset(void);
void sc_static_apu_set_sink(SCStaticAudioSink sink,void *context);
void sc_static_apu_set_trace_callbacks(const SCStaticTraceCallbacks *callbacks);
void sc_static_apu_trace_instruction_event(uint16_t pc,uint8_t opcode);
int sc_static_apu_trace_aram_write_event(uint16_t address,uint8_t value);
void sc_static_apu_trace_dsp_write_event(uint8_t address,uint8_t value);
void sc_static_apu_trace_port_event(uint8_t direction,uint8_t port,uint8_t value);
void sc_static_sdsp_primitive_step(uint8_t phase);
int sc_static_sdsp_brr_step(uint16_t address,const uint8_t *aram);
int sc_static_apu_sync_to_master(uint64_t master_clock,char *error,size_t error_capacity);
int sc_static_apu_cpu_write_port(uint64_t master_clock,unsigned port,uint8_t value,char *error,size_t error_capacity);
uint8_t sc_static_apu_cpu_read_port(uint64_t master_clock,unsigned port,int *ok,char *error,size_t error_capacity);
int sc_static_apu_status(SCStaticApuStatus *status);
size_t sc_static_apu_snapshot_size(void);
int sc_static_apu_snapshot_save(void *data,size_t capacity);
int sc_static_apu_snapshot_load(const void *data,size_t size,
                                char *error,size_t error_capacity);

#ifdef __cplusplus
}
#endif
#endif
