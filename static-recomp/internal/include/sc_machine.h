#ifndef SC_MACHINE_H
#define SC_MACHINE_H

#include <stddef.h>
#include <stdint.h>

#define SC_WRAM_SIZE 131072u
#define SC_VRAM_SIZE 65536u
#define SC_CGRAM_SIZE 512u
#define SC_OAM_SIZE 544u
#define SC_ARAM_SIZE 65536u
#define SC_APU_PORT_COUNT 4u
#define SC_DSP_REGISTER_COUNT 128u
#define SC_MMIO_BASE 0x2100u
#define SC_MMIO_LIMIT 0x4380u
#define SC_MMIO_SIZE (SC_MMIO_LIMIT - SC_MMIO_BASE)
#define SC_DMA_CHANNEL_COUNT 8u
#define SC_EVENT_CAPACITY 70000u

typedef struct SCCpuState {
    uint16_t a, x, y, sp, d, pc;
    uint8_t p, pbr, dbr, emulation;
} SCCpuState;

typedef struct SCSmpState {
    uint16_t pc;
    uint8_t a, x, y, sp, psw;
    uint8_t ipl_rom_active;
} SCSmpState;

typedef struct SCDmaChannel {
    uint16_t source_address;
    uint16_t transfer_size;
    uint16_t hdma_table_address;
    uint8_t source_bank;
    uint8_t destination;
    uint8_t control;
    uint8_t hdma_bank;
    uint8_t line_counter_repeat;
    uint8_t unused_register;
    uint8_t active;
} SCDmaChannel;

typedef enum SCHardwareEventKind {
    SC_EVENT_MMIO_WRITE = 1,
    SC_EVENT_DMA_QUEUED = 2,
    SC_EVENT_DMA_BEGIN = 3,
    SC_EVENT_DMA_BYTE = 4,
    SC_EVENT_DMA_END = 5
} SCHardwareEventKind;

typedef struct SCHardwareEvent {
    uint32_t sequence;
    uint32_t address_a;
    uint16_t address_b;
    uint8_t value;
    uint8_t channel;
    uint8_t kind;
} SCHardwareEvent;

typedef struct SCMachine {
    SCCpuState cpu;
    SCSmpState smp;
    uint8_t wram[SC_WRAM_SIZE];
    uint8_t vram[SC_VRAM_SIZE];
    uint8_t cgram[SC_CGRAM_SIZE];
    uint8_t oam[SC_OAM_SIZE];
    uint8_t aram[SC_ARAM_SIZE];
    uint8_t dsp[SC_DSP_REGISTER_COUNT];
    uint8_t mmio[SC_MMIO_SIZE];
    uint8_t mmio_touched[SC_MMIO_SIZE];

    uint8_t ppu_forced_blank;
    uint8_t ppu_brightness;
    uint16_t oam_word_address;
    uint16_t oam_internal_address;
    uint8_t oam_write_buffer;
    uint8_t oam_priority_rotation;
    uint16_t vram_address;
    uint16_t vram_increment;
    uint8_t vram_remap_mode;
    uint8_t vram_increment_on_high;
    uint8_t cgram_address;
    uint8_t cgram_second_write;
    uint8_t cgram_write_latch;
    uint16_t ppu_fixed_color;
    uint16_t vram_read_latch;
    uint8_t cgram_read_second;

    uint8_t nmi_enabled;
    uint8_t auto_joypad_enabled;
    uint8_t fast_rom_enabled;
    uint8_t hdma_enabled_mask;
    uint8_t dma_pending_mask;
    uint8_t dma_start_delay_pending;
    uint8_t scheduler_hardware_timed;
    uint8_t dma_timing_certified;
    uint8_t functional_event_order_valid;
    uint8_t functional_event_ledger_compacted;
    uint32_t compacted_dma_transfers;
    uint8_t hardware_fail_closed;
    uint32_t functional_dma_bytes;
    uint32_t static_nmi_deliveries;
    uint32_t hardware_event_sequence;
    uint32_t hardware_event_count;
    SCHardwareEvent hardware_events[SC_EVENT_CAPACITY];
    SCDmaChannel dma[SC_DMA_CHANNEL_COUNT];

    uint8_t cpu_to_smp_ports[SC_APU_PORT_COUNT];
    uint8_t smp_to_cpu_ports[SC_APU_PORT_COUNT];
    uint32_t cpu_apu_reads;
    uint32_t cpu_apu_writes;
    uint32_t cpu_apu_read_per_port[SC_APU_PORT_COUNT];
    uint32_t cpu_apu_write_per_port[SC_APU_PORT_COUNT];
    uint32_t static_ipl_upload_bytes;
    uint32_t static_ipl_upload_blocks;
    uint16_t static_ipl_entrypoint;
    uint8_t static_ipl_upload_complete;
    uint8_t spc_entry_requested;
    uint8_t spc_program_started;
    uint8_t smp_register_state_certified;
    uint8_t smp_debugger_projection_certified;
    uint8_t smp_prefix_frontier_certified;
    uint8_t smp_timer_phase_certified;
    uint8_t smp_full_dsp_register_state_certified;
    uint8_t smp_initial_edl_model;
    uint8_t smp_initial_edl_hardware_certified;
    uint8_t normalized_cross_processor_state;
    uint8_t cross_processor_state_synchronized;
    uint8_t smp_test_register;
    uint8_t smp_control_register;
    uint8_t smp_dsp_address;
    uint8_t smp_timer_target[3];
    uint8_t smp_timer_stage1_observed[3];
    uint8_t smp_timer_stage2_observed[3];
    uint8_t smp_timer_stage3_observed[3];
    uint8_t smp_timer_output[3];
    uint32_t static_spc700_prefix_instructions;
    uint32_t static_spc700_prefix_unique_pcs;
    uint32_t static_spc700_effect_classes;
    uint32_t static_spc700_known_aram_bytes;
    uint32_t static_spc700_known_dsp_registers;
    uint64_t smp_prefix_frontier_master_clock_observed;
    char smp_prefix_trace_sha256[65];
    char smp_all_edl_trace_sha256[65];
    char smp_known_mask_sha256[65];
    uint8_t full_static_spc700;
    uint8_t full_static_sdsp;
    uint8_t pcm_available;
    uint8_t route_timeline_observed;
    uint64_t route_entry_master_clock;
    uint64_t route_boundary_master_clock;
    uint32_t route_entry_frame;
    uint32_t route_boundary_frame;
    uint32_t route_boundary_scanline;
    uint32_t route_boundary_hclock;
    char apu_semantic_event_sha256[65];

    uint8_t exact_scheduler_quantum_certified;
    uint8_t static_timer_quantum_closed;
    uint8_t static_frame_replay_certified;
    uint8_t general_scheduler_complete;
    uint8_t ppu_scanline_scheduler_complete;
    uint32_t scheduler_quantum_callbacks;
    uint32_t scheduler_quantum_unique_addresses;
    uint32_t scheduler_quantum_new_addresses;
    uint64_t scheduler_quantum_elapsed_clocks;
    uint32_t hardware_refresh_position;
    uint32_t hardware_next_event_clock;
    uint32_t hardware_dma_clock_counter;
    uint32_t static_timer_quantum_symbolic_cases;
    uint32_t static_timer_quantum_endpoint_classes;
    uint32_t static_timer_quantum_instruction_min;
    uint32_t static_timer_quantum_instruction_max;
    uint32_t static_timer_quantum_cycle_min;
    uint32_t static_timer_quantum_cycle_max;
    uint32_t static_frame_width;
    uint32_t static_frame_height;
    uint32_t static_frame_nonblack;
    uint32_t static_frame_unique_colors;
    char scheduler_quantum_trace_sha256[65];
    char static_timer_quantum_trace_sha256[65];
    char static_frame_bgr555_sha256[65];

    uint8_t scheduler_projection_ledger_certified;
    uint8_t scheduler_projection_machine_advanced;
    uint32_t scheduler_projection_boundaries;
    uint32_t scheduler_projection_intervals;
    uint64_t scheduler_projection_callbacks;
    uint64_t scheduler_projection_clock_span;
    uint64_t scheduler_projection_last_clock;
    uint32_t scheduler_projection_last_hit;
    char scheduler_projection_boundaries_sha256[65];
    char scheduler_projection_intervals_sha256[65];

    uint8_t exact_timer_phase_first_interval_certified;
    uint8_t timer_phase_scope_first_interval;
    uint8_t general_timer_phase_ledger_complete;
    uint8_t timer0_entry_stage0;
    uint8_t timer0_entry_stage1;
    uint8_t timer0_entry_stage2;
    uint8_t timer0_entry_output;
    uint8_t timer0_entry_normalized_phase;
    uint8_t timer0_return_stage0;
    uint8_t timer0_return_stage1;
    uint8_t timer0_return_stage2;
    uint8_t timer0_return_output;
    uint8_t timer0_return_normalized_phase;

    uint32_t stop_address;
    uint32_t static_executed_instructions;
    uint32_t generated_instruction_addresses;
    int fail_closed;
    char stop_reason[128];
    char hardware_error[160];
} SCMachine;

void sc_machine_power_on(SCMachine *machine);
int sc_machine_wram_write8(SCMachine *machine, uint32_t address, uint8_t value);
int sc_machine_wram_read8(const SCMachine *machine, uint32_t address, uint8_t *value);
int sc_machine_bus_write8(SCMachine *machine, uint32_t address, uint8_t value);
int sc_machine_bus_read8(const SCMachine *machine, uint32_t address, uint8_t *value);
int sc_machine_mmio_write8(SCMachine *machine, uint16_t address, uint8_t value);
uint8_t sc_machine_mmio_read8(const SCMachine *machine, uint16_t address);
int sc_machine_cpu_apu_write8(SCMachine *machine, unsigned port, uint8_t value);
uint8_t sc_machine_cpu_apu_read8(SCMachine *machine, unsigned port);
int sc_machine_process_pending_dma(SCMachine *machine);
void sc_machine_clear_hardware_events(SCMachine *machine);
void sc_machine_wram_sha256(const SCMachine *machine, char out_hex[65]);
void sc_machine_oam_sha256(const SCMachine *machine, char out_hex[65]);
void sc_machine_vram_sha256(const SCMachine *machine, char out_hex[65]);
void sc_machine_cgram_sha256(const SCMachine *machine, char out_hex[65]);
void sc_machine_aram_sha256(const SCMachine *machine, char out_hex[65]);
void sc_machine_aram_debugger_projection_sha256(const SCMachine *machine, char out_hex[65]);
void sc_machine_dsp_sha256(const SCMachine *machine, char out_hex[65]);
size_t sc_machine_nonzero_wram(const SCMachine *machine);
size_t sc_machine_nonzero_wram_range(const SCMachine *machine, size_t start, size_t length);

#endif
