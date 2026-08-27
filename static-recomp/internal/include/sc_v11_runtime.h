#ifndef SC_V11_RUNTIME_H
#define SC_V11_RUNTIME_H
#include "sc_machine.h"
#include "sc_audio_transport.h"
#include <stddef.h>
#include <stdint.h>

#define SC_V11_ROM_SIZE 524288u
#define SC_V11_SRAM_SIZE 32768u
#define SC_V11_EXPECTED_ROM_SHA256 "e9c0bc05511e05a0d7c3e7cc42e761e1e8e532d46f59b9854b6902e1a2e9dd0a"
#define SC_V11_V02_GLOBAL_INSTRUCTIONS 131211u
#define SC_V11_SNES_MASTER_RATE 21477270u
#define SC_V11_SMP_RATIO_NUMERATOR 2050560u
#define SC_V11_SMP_CODE_BYTES 8192u
#define SC_V11_PPU_REGISTER_COUNT 0x40u
#define SC_V11_PPU_RENDER_REGISTER_COUNT 0x34u
#define SC_V11_PPU_VISIBLE_LINES 224u

#define SC_FLAG_C 0x01u
#define SC_FLAG_Z 0x02u
#define SC_FLAG_I 0x04u
#define SC_FLAG_D 0x08u
#define SC_FLAG_X 0x10u
#define SC_FLAG_M 0x20u
#define SC_FLAG_V 0x40u
#define SC_FLAG_N 0x80u
#define SC_SMP_FLAG_C 0x01u
#define SC_SMP_FLAG_Z 0x02u
#define SC_SMP_FLAG_I 0x04u
#define SC_SMP_FLAG_H 0x08u
#define SC_SMP_FLAG_B 0x10u
#define SC_SMP_FLAG_P 0x20u
#define SC_SMP_FLAG_V 0x40u
#define SC_SMP_FLAG_N 0x80u

typedef struct SCV11Timer {
    uint8_t enabled, global_enabled, target, stage0, stage1, previous_stage1, stage2, output, rate;
} SCV11Timer;

typedef struct SCV11Scheduler {
    uint64_t master_clock, cpu_instructions, smp_instructions, nmi_edge_master_clock;
    uint32_t frame;
    uint16_t scanline, hclock, refresh_hclock;
    uint8_t field, nmi_line, nmi_flag, nmi_pending, nmi_edge_counter, irq_pending;
    uint8_t interrupt_delivery_active, in_refresh, refresh_done, auto_joypad_active, fail_closed;
} SCV11Scheduler;

typedef struct SCV11SmpCore {
    uint64_t cycle, instructions;
    uint8_t write_enabled, timers_enabled, timers_disabled, internal_speed, external_speed;
    uint8_t ram_register[2], new_cpu_ports[4], pending_cpu_port_update;
    uint8_t active, active_progress, active_cycles, active_length, active_branch_taken;
    uint16_t active_start_pc;
    uint8_t dsp_step, dsp_every_other_sample;
    uint16_t dsp_counter;
    uint8_t dsp_new_key_on, dsp_key_on, dsp_key_off;
    uint8_t program_started, stop_state, failed, current_epoch;
    uint8_t executed_code[SC_V11_SMP_CODE_BYTES];
    uint8_t observed_pc[SC_V11_SMP_CODE_BYTES];
    uint64_t validated_instructions;
    uint32_t opcode_mismatches, code_write_barriers;
    char error[192];
    SCV11Timer timer[3];
} SCV11SmpCore;

typedef void (*SCV11AudioSink)(void *context, int16_t left, int16_t right);

typedef struct SCAudioRuntimeTrace {
    uint64_t instruction_count, aram_write_count, dsp_write_count, port_event_count;
    uint64_t instruction_fnv1a, aram_write_fnv1a, dsp_write_fnv1a, port_event_fnv1a;
    uint16_t previous_instruction_pc, current_instruction_pc;
    uint8_t previous_instruction_valid, program_started;
    uint8_t mutable_write_bitmap[SC_V11_SMP_CODE_BYTES];
    uint8_t dsp_register_write_bitmap[16u];
} SCAudioRuntimeTrace;

typedef struct SCAudioEpochTrace {
    uint64_t transition_master_clock;
    uint64_t unknown_epoch_barriers;
    uint32_t transition_count;
    uint16_t first_code_write_instruction_pc;
    uint16_t first_code_write_address;
    uint8_t first_code_write_value;
    uint8_t current_epoch;
    uint8_t initial_epoch_entered;
    uint8_t first_code_write_valid;
} SCAudioEpochTrace;

typedef struct SCV11PpuLineState {
    uint32_t frame;
    uint16_t bg_scroll[8];
    uint16_t fixed_color;
    uint8_t registers[SC_V11_PPU_RENDER_REGISTER_COUNT];
    uint8_t valid;
} SCV11PpuLineState;

typedef struct SCV11Runtime {
    SCMachine machine;
    const uint8_t *rom; size_t rom_size;
    uint8_t sram[SC_V11_SRAM_SIZE];
    SCV11AudioSink audio_sink;
    void *audio_sink_context;
    uint8_t sram_dirty;
    uint8_t rom_identity_valid;
    uint8_t open_bus; uint32_t wram_port;
    uint16_t bg_scroll[8]; uint8_t bgofs_latch,bghofs_latch,oam_phase,cgram_phase;
    uint64_t ppu_register_write_count[SC_V11_PPU_REGISTER_COUNT];
    uint64_t ppu_register_read_count[SC_V11_PPU_REGISTER_COUNT];
    uint64_t ppu_active_nonblank_write_count[SC_V11_PPU_REGISTER_COUNT];
    uint64_t ppu_forced_blank_write_count[SC_V11_PPU_REGISTER_COUNT];
    uint64_t ppu_hblank_write_count[SC_V11_PPU_REGISTER_COUNT];
    uint64_t ppu_vblank_write_count[SC_V11_PPU_REGISTER_COUNT];
    uint32_t ppu_register_last_frame[SC_V11_PPU_REGISTER_COUNT];
    uint16_t ppu_register_last_scanline[SC_V11_PPU_REGISTER_COUNT];
    uint16_t ppu_register_last_hclock[SC_V11_PPU_REGISTER_COUNT];
    uint32_t ppu_active_display_writes;
    uint32_t ppu_hblank_writes;
    uint32_t ppu_vblank_writes;
    /* The working array records the field currently being scanned.  At
       VBlank entry it is latched into the completed array so a long native
       instruction or DMA cannot overwrite the frame the host is presenting. */
    SCV11PpuLineState ppu_line_state[SC_V11_PPU_VISIBLE_LINES];
    SCV11PpuLineState ppu_completed_line_state[SC_V11_PPU_VISIBLE_LINES];
    uint32_t ppu_completed_frame;
    uint16_t ppu_completed_line_count;
    uint8_t mul_a,mul_b; uint16_t dividend; uint8_t divisor; uint16_t quotient,remainder;
    uint16_t joypad[4];
    uint16_t auto_joypad_result[4];
    uint64_t auto_joypad_end_master_clock;
    uint32_t auto_joypad_poll_count;
    uint32_t cpu_apu_read_ordinal,current_instruction_address;
    uint64_t generated_callbacks,dma_event_count,dma_event_hash;
    uint32_t generated_unique_contexts; uint8_t route_failed; char route_error[192];
    SCV11Scheduler scheduler; SCV11SmpCore smp_core;
    SCAudioTransportState audio_transport;
    SCAudioRuntimeTrace audio_trace;
    SCAudioEpochTrace audio_epoch_trace;
} SCV11Runtime;


int sc_v11_validate_rom_identity(const uint8_t*,size_t,char output_sha256[65]);
void sc_v11_runtime_init(SCV11Runtime*,const uint8_t*,size_t);
int sc_v11_bootstrap_step(SCV11Runtime*); int sc_v11_cpu_step(SCV11Runtime*);
int sc_v23_static_cpu_step(SCV11Runtime*,uint32_t,uint8_t,uint8_t,uint8_t);
int sc_v11_inject_native_nmi(SCV11Runtime*); int sc_v11_before_instruction(SCV11Runtime*); int sc_v11_finish_instruction(SCV11Runtime*);
int sc_v11_process_pending_dma(SCV11Runtime*,uint8_t);
uint8_t sc_v11_bus_peek8(const SCV11Runtime*,uint32_t); uint16_t sc_v11_bus_peek16(const SCV11Runtime*,uint32_t);
uint8_t sc_v11_bus_read8(SCV11Runtime*,uint32_t); uint16_t sc_v11_bus_read16(SCV11Runtime*,uint32_t);
void sc_v11_bus_write8(SCV11Runtime*,uint32_t,uint8_t); void sc_v11_bus_write16(SCV11Runtime*,uint32_t,uint16_t);
uint8_t sc_v11_bus_speed(uint32_t,uint8_t); void sc_v11_scheduler_advance(SCV11Runtime*,uint32_t);
void sc_v11_scheduler_code_access(SCV11Runtime*,uint32_t,unsigned); void sc_v11_scheduler_internal_cycle(SCV11Runtime*,unsigned);
void sc_v11_scheduler_program_bus_cycle(SCV11Runtime*,uint32_t); void sc_v11_scheduler_idle_or_read(SCV11Runtime*); void sc_v11_scheduler_cpu_cycle_sample(SCV11Runtime*);
void sc_v11_smp_power_on(SCV11Runtime*); int sc_v11_smp_sync_to_master(SCV11Runtime*,uint64_t);
int sc_v11_smp_cpu_write_port(SCV11Runtime*,unsigned,uint8_t); uint8_t sc_v11_smp_cpu_read_port(SCV11Runtime*,unsigned); int sc_v11_smp_run_microcycle(SCV11Runtime*);
void sc_v11_set_audio_sink(SCV11Runtime*,SCV11AudioSink,void*);


uint8_t sc_v11_pack_p(const SCCpuState*); void sc_v11_unpack_p(SCCpuState*,uint8_t); void sc_v11_set_nz8(SCCpuState*,uint8_t); void sc_v11_set_nz16(SCCpuState*,uint16_t);
int sc_v11_push8(SCV11Runtime*,uint8_t); int sc_v11_push16(SCV11Runtime*,uint16_t); uint8_t sc_v11_pop8(SCV11Runtime*); uint16_t sc_v11_pop16(SCV11Runtime*);
uint32_t sc_v11_ea_dp(SCV11Runtime*,uint16_t); uint32_t sc_v11_ea_dpx(SCV11Runtime*,uint16_t); uint32_t sc_v11_ea_dpy(SCV11Runtime*,uint16_t);
uint32_t sc_v11_ea_abs(SCV11Runtime*,uint16_t); uint32_t sc_v11_ea_absx(SCV11Runtime*,uint16_t); uint32_t sc_v11_ea_absy(SCV11Runtime*,uint16_t);
uint32_t sc_v11_ea_long(uint32_t); uint32_t sc_v11_ea_longx(SCV11Runtime*,uint32_t); uint32_t sc_v11_ea_stack(SCV11Runtime*,uint8_t);
uint32_t sc_v11_ea_dp_indirect(SCV11Runtime*,uint8_t); uint32_t sc_v11_ea_dpx_indirect(SCV11Runtime*,uint8_t); uint32_t sc_v11_ea_dp_indirect_y(SCV11Runtime*,uint8_t);
uint32_t sc_v11_ea_dp_long(SCV11Runtime*,uint8_t); uint32_t sc_v11_ea_dp_long_y(SCV11Runtime*,uint8_t); uint32_t sc_v11_ea_stack_indirect_y(SCV11Runtime*,uint8_t);
void sc_v11_op_lda(SCV11Runtime*,uint16_t,unsigned); void sc_v11_op_ldx(SCV11Runtime*,uint16_t,unsigned); void sc_v11_op_ldy(SCV11Runtime*,uint16_t,unsigned);
void sc_v11_op_and(SCV11Runtime*,uint16_t,unsigned); void sc_v11_op_ora(SCV11Runtime*,uint16_t,unsigned); void sc_v11_op_eor(SCV11Runtime*,uint16_t,unsigned);
void sc_v11_op_adc(SCV11Runtime*,uint16_t,unsigned); void sc_v11_op_sbc(SCV11Runtime*,uint16_t,unsigned); void sc_v11_op_compare(SCV11Runtime*,uint16_t,uint16_t,unsigned);
void sc_v11_op_shift_memory(SCV11Runtime*,uint32_t,unsigned,unsigned); void sc_v11_op_shift_accumulator(SCV11Runtime*,unsigned,unsigned);
void sc_v11_op_incdec_memory(SCV11Runtime*,uint32_t,unsigned,int); void sc_v11_op_incdec_accumulator(SCV11Runtime*,unsigned,int);
int sc_v11_fail(SCV11Runtime*,uint32_t,const char*);
void sc_v11_trace_cpu_instruction(SCV11Runtime*,uint32_t);

/*
 * Compile-time source compaction for exact generated contexts.  These macros
 * expand to the original generated bookkeeping statements; they add no
 * runtime decoder, lookup table, fallback path, or context-key dimension.
 */
#define SC_STATIC_CONTEXT_BEGIN(address_, length_, open_bus_, next_pc_) \
    sc_v11_scheduler_code_access(r, address_, length_); \
    r->open_bus = open_bus_; \
    r->scheduler.cpu_instructions++; \
    r->generated_callbacks++; \
    r->machine.static_executed_instructions = \
        (uint32_t)r->scheduler.cpu_instructions; \
    c->pc = next_pc_

#define SC_STATIC_CONTEXT_END() \
    if (!sc_v11_finish_instruction(r)) return 0; \
    return r->route_failed ? 0 : 1
#endif
