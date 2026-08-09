#include "sc_v11_runtime.h"
#include <string.h>

#define LINE_LONG 1364u
#define LINE_SHORT 1360u
#define LINES 262u
#define NMI_LINE 225u
#define REFRESH_CLOCKS 40u
#define AUTO_JOYPAD_MASTER_CLOCKS 4224u

static void capture_ppu_scanline_state(SCV11Runtime *runtime) {
    SCV11Scheduler *scheduler;
    SCV11PpuLineState *line;
    unsigned index;
    if (!runtime) return;
    scheduler = &runtime->scheduler;
    if (scheduler->scanline < 1u ||
        scheduler->scanline > SC_V11_PPU_VISIBLE_LINES) return;
    index = (unsigned)(scheduler->scanline - 1u);
    line = &runtime->ppu_line_state[index];
    line->frame = scheduler->frame + 1u;
    memcpy(line->registers, runtime->machine.mmio,
           SC_V11_PPU_RENDER_REGISTER_COUNT);
    memcpy(line->bg_scroll, runtime->bg_scroll, sizeof(line->bg_scroll));
    line->fixed_color = runtime->machine.ppu_fixed_color;
    line->valid = 1u;
}


static void latch_completed_ppu_frame(SCV11Runtime *runtime,
                                      uint32_t completed_frame) {
    unsigned index;
    uint16_t count = 0u;
    if (!runtime) return;
    for (index = 0u; index < SC_V11_PPU_VISIBLE_LINES; ++index) {
        const SCV11PpuLineState *source = &runtime->ppu_line_state[index];
        SCV11PpuLineState *destination =
            &runtime->ppu_completed_line_state[index];
        if (source->valid && source->frame == completed_frame) {
            *destination = *source;
            count++;
        } else {
            memset(destination, 0, sizeof(*destination));
        }
    }
    runtime->ppu_completed_frame = completed_frame;
    runtime->ppu_completed_line_count = count;
}

static uint16_t line_length(const SCV11Scheduler *scheduler) {
    return (scheduler->scanline == 240u && scheduler->field) ?
           LINE_SHORT : LINE_LONG;
}

static void raw_clock(SCV11Runtime *runtime) {
    SCV11Scheduler *scheduler;
    if (!runtime || runtime->route_failed) return;
    scheduler = &runtime->scheduler;
    scheduler->master_clock++;
    scheduler->hclock++;
    if (scheduler->auto_joypad_active &&
        scheduler->master_clock >= runtime->auto_joypad_end_master_clock)
        scheduler->auto_joypad_active = 0u;

    if (scheduler->hclock >= line_length(scheduler)) {
        scheduler->hclock = 0u;
        scheduler->scanline++;
        scheduler->refresh_done = 0u;
        scheduler->refresh_hclock =
            (uint16_t)(538u - (scheduler->master_clock & 7u));
        if (scheduler->scanline >= LINES) {
            scheduler->scanline = 0u;
            scheduler->field ^= 1u;
        }
        capture_ppu_scanline_state(runtime);
    }


    if (scheduler->scanline == NMI_LINE && scheduler->hclock == 2u) {
        latch_completed_ppu_frame(runtime, scheduler->frame + 1u);
        scheduler->frame++;
        scheduler->nmi_line = 1u;
        scheduler->nmi_flag = 1u;
        if (runtime->machine.auto_joypad_enabled) {
            memcpy(runtime->auto_joypad_result, runtime->joypad,
                   sizeof(runtime->auto_joypad_result));
            scheduler->auto_joypad_active = 1u;
            runtime->auto_joypad_end_master_clock =
                scheduler->master_clock + AUTO_JOYPAD_MASTER_CLOCKS;
            runtime->auto_joypad_poll_count++;
        }
    } else if (scheduler->scanline == NMI_LINE &&
               scheduler->hclock == 6u) {
        if (runtime->machine.nmi_enabled) {
            scheduler->nmi_edge_counter = 1u;
            scheduler->nmi_edge_master_clock = scheduler->master_clock;
        }
    } else if (scheduler->scanline == 0u && scheduler->hclock == 2u) {
        scheduler->nmi_line = 0u;
        scheduler->nmi_flag = 0u;
    }
}

static void refresh(SCV11Runtime *runtime) {
    SCV11Scheduler *scheduler;
    unsigned index;

    if (!runtime || runtime->route_failed) return;
    scheduler = &runtime->scheduler;
    if (scheduler->refresh_done ||
        scheduler->hclock != scheduler->refresh_hclock) {
        return;
    }

    scheduler->refresh_done = 1u;
    scheduler->in_refresh = 1u;
    for (index = 0u; index < REFRESH_CLOCKS && !runtime->route_failed;
         ++index) {
        raw_clock(runtime);
    }
    scheduler->in_refresh = 0u;
}

void sc_v11_scheduler_advance(SCV11Runtime *runtime, uint32_t clocks) {
    uint32_t index;
    if (!runtime || runtime->route_failed) return;
    for (index = 0u; index < clocks && !runtime->route_failed; ++index) {
        raw_clock(runtime);
        refresh(runtime);
    }
    /* Major 5: the audio oscillator is independent, but every modeled S-CPU
       bus segment has an exact end clock.  Rendezvous here rather than only at
       scanline boundaries.  APUIO reads that sample after two clocks naturally
       call this function before the latch is observed; writes occur after the
       full bus cycle and therefore publish their latch after this rendezvous. */
    if (!runtime->route_failed)
        (void)sc_v11_smp_sync_to_master(runtime, runtime->scheduler.master_clock);
}

void sc_v11_scheduler_cpu_cycle_sample(SCV11Runtime *runtime) {
    SCV11Scheduler *scheduler;
    if (!runtime) return;
    scheduler = &runtime->scheduler;
    if (scheduler->nmi_edge_counter) {
        scheduler->nmi_edge_counter--;
        if (scheduler->nmi_edge_counter == 0u)
            scheduler->nmi_pending = 1u;
    }
}

void sc_v11_scheduler_code_access(SCV11Runtime *runtime,
                                  uint32_t address,
                                  unsigned byte_count) {
    unsigned index;
    uint8_t speed;
    if (!runtime) return;
    for (index = 0u; index < byte_count && !runtime->route_failed; ++index) {
        speed = sc_v11_bus_speed((address + index) & 0x00ffffffu,
                                 runtime->machine.fast_rom_enabled);
        if (!sc_v11_process_pending_dma(runtime, speed)) return;
        sc_v11_scheduler_cpu_cycle_sample(runtime);
        sc_v11_scheduler_advance(runtime, speed);
    }
}

void sc_v11_scheduler_program_bus_cycle(SCV11Runtime *runtime,
                                        uint32_t address) {
    uint8_t speed;
    if (!runtime || runtime->route_failed) return;
    speed = sc_v11_bus_speed(address & 0x00ffffffu,
                             runtime->machine.fast_rom_enabled);
    if (!sc_v11_process_pending_dma(runtime, speed)) return;
    sc_v11_scheduler_cpu_cycle_sample(runtime);
    sc_v11_scheduler_advance(runtime, speed);
}

void sc_v11_scheduler_idle_or_read(SCV11Runtime *runtime) {
    SCV11Scheduler *scheduler;
    uint32_t address;
    if (!runtime || runtime->route_failed) return;
    scheduler = &runtime->scheduler;
    if (scheduler->nmi_pending || scheduler->nmi_edge_counter ||
        (scheduler->irq_pending &&
         (runtime->machine.cpu.p & SC_FLAG_I) == 0u)) {
        address = ((uint32_t)runtime->machine.cpu.pbr << 16) |
                  runtime->machine.cpu.pc;
        (void)sc_v11_bus_read8(runtime, address);
    } else {
        if (!sc_v11_process_pending_dma(runtime, 6u)) return;
        sc_v11_scheduler_cpu_cycle_sample(runtime);
        sc_v11_scheduler_advance(runtime, 6u);
    }
}

void sc_v11_scheduler_internal_cycle(SCV11Runtime *runtime,
                                     unsigned count) {
    while (count-- && runtime && !runtime->route_failed) {
        if (!sc_v11_process_pending_dma(runtime, 6u)) return;
        sc_v11_scheduler_cpu_cycle_sample(runtime);
        sc_v11_scheduler_advance(runtime, 6u);
    }
}
