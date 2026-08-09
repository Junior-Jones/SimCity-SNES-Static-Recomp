#include "sc_v11_runtime.h"
#include "sc_core_internal.h"

#include <stddef.h>
#include <stdint.h>
#include <string.h>


static const uint8_t sc_v11_dma_offsets[8][4] = {
    {0u, 0u, 0u, 0u},
    {0u, 1u, 0u, 1u},
    {0u, 0u, 0u, 0u},
    {0u, 0u, 1u, 1u},
    {0u, 1u, 2u, 3u},
    {0u, 1u, 0u, 1u},
    {0u, 0u, 0u, 0u},
    {0u, 0u, 1u, 1u}
};

static int sc_v11_low_bank(uint8_t bank) {
    return bank < 0x40u || (bank >= 0x80u && bank < 0xc0u);
}

static size_t sc_v11_lorom_offset(uint8_t bank, uint16_t address) {
    return ((((size_t)bank & 0x7fu) << 15) | (address & 0x7fffu)) & (SC_V11_ROM_SIZE - 1u);
}

static size_t sc_v11_sram_offset(uint8_t bank, uint16_t address) {
    return ((((size_t)bank & 0x0fu) << 15) | (address & 0x7fffu)) & (SC_V11_SRAM_SIZE - 1u);
}

uint8_t sc_v11_bus_speed(uint32_t address, uint8_t fast_rom_enabled) {
    uint8_t bank = (uint8_t)(address >> 16);
    uint16_t local = (uint16_t)address;

    if (sc_v11_low_bank(bank)) {
        if (local < 0x2000u) return 8u;
        if (local < 0x4000u) return 6u;
        if (local < 0x4200u) return 12u;
        if (local < 0x6000u) return 6u;
        if (local < 0x8000u) return 8u;
        return (uint8_t)((fast_rom_enabled && bank >= 0x80u) ? 6u : 8u);
    }
    return 8u;
}

static void sc_v11_access_cycle(SCV11Runtime *runtime, uint32_t address) {
    uint8_t speed = sc_v11_bus_speed(address, runtime->machine.fast_rom_enabled);
    if (!sc_v11_process_pending_dma(runtime, speed)) return;
    sc_v11_scheduler_cpu_cycle_sample(runtime);
    sc_v11_scheduler_advance(runtime, speed);
}

static void sc_v11_compact_event_ledger(SCMachine *machine) {
    const uint32_t retain = SC_EVENT_CAPACITY / 2u;
    const uint32_t drop = SC_EVENT_CAPACITY - retain;
    uint32_t i;
    if (!machine || machine->hardware_event_count < SC_EVENT_CAPACITY) return;
    for (i = 0u; i < drop; ++i) {
        if (machine->hardware_events[i].kind == SC_EVENT_DMA_END) {
            machine->compacted_dma_transfers++;
        }
    }
    memmove(machine->hardware_events,
            machine->hardware_events + drop,
            (size_t)retain * sizeof(machine->hardware_events[0]));
    memset(machine->hardware_events + retain, 0,
           (size_t)drop * sizeof(machine->hardware_events[0]));
    machine->hardware_event_count = retain;
    machine->functional_event_ledger_compacted = 1u;
}

static void sc_v11_record_event(SCV11Runtime *runtime, uint8_t kind, uint8_t channel,
                                uint32_t address_a, uint16_t address_b, uint8_t value) {
    SCMachine *machine;
    SCHardwareEvent *event;

    if (!runtime || runtime->route_failed) return;
    machine = &runtime->machine;
    machine->hardware_event_sequence++;
    if (machine->hardware_event_count >= SC_EVENT_CAPACITY) {
        sc_v11_compact_event_ledger(machine);
    }
    event = &machine->hardware_events[machine->hardware_event_count++];
    event->sequence = machine->hardware_event_sequence;
    event->address_a = address_a & 0x00ffffffu;
    event->address_b = address_b;
    event->value = value;
    event->channel = channel;
    event->kind = kind;
}


static uint16_t sc_v11_vram_effective_address(const SCMachine *machine) {
    uint16_t address = machine->vram_address;
    switch (machine->vram_remap_mode & 3u) {
        default:
        case 0: return address;
        case 1: return (uint16_t)((address & 0xff00u) | ((address & 0x00e0u) >> 5) |
                                  ((address & 0x001fu) << 3));
        case 2: return (uint16_t)((address & 0xfe00u) | ((address & 0x01c0u) >> 6) |
                                  ((address & 0x003fu) << 3));
        case 3: return (uint16_t)((address & 0xfc00u) | ((address & 0x0380u) >> 7) |
                                  ((address & 0x007fu) << 3));
    }
}

static void sc_v11_record_ppu_write(SCV11Runtime *runtime, uint16_t address) {
    unsigned index;
    if (!runtime || address < 0x2100u || address > 0x213fu) return;
    index = (unsigned)(address - 0x2100u);
    runtime->ppu_register_write_count[index]++;
    runtime->ppu_register_last_frame[index] = runtime->scheduler.frame;
    runtime->ppu_register_last_scanline[index] = runtime->scheduler.scanline;
    runtime->ppu_register_last_hclock[index] = runtime->scheduler.hclock;
    if (runtime->machine.ppu_forced_blank) {
        runtime->ppu_forced_blank_write_count[index]++;
    } else if (runtime->scheduler.scanline >= 1u &&
               runtime->scheduler.scanline <= SC_V11_PPU_VISIBLE_LINES) {
        if (runtime->scheduler.hclock < 1096u) {
            runtime->ppu_active_display_writes++;
            runtime->ppu_active_nonblank_write_count[index]++;
        } else {
            runtime->ppu_hblank_writes++;
            runtime->ppu_hblank_write_count[index]++;
        }
    } else {
        runtime->ppu_vblank_writes++;
        runtime->ppu_vblank_write_count[index]++;
    }
}

static void sc_v11_record_ppu_read(SCV11Runtime *runtime, uint16_t address) {
    if (!runtime || address < 0x2100u || address > 0x213fu) return;
    runtime->ppu_register_read_count[address - 0x2100u]++;
}

static void sc_v11_update_fixed_color(SCMachine *machine, uint8_t value) {
    uint16_t component = (uint16_t)(value & 0x1fu);
    if (value & 0x20u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x001fu) | component);
    if (value & 0x40u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x03e0u) | (component << 5));
    if (value & 0x80u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x7c00u) | (component << 10));
}

static void sc_v11_ppu_write_raw(SCV11Runtime *runtime, uint16_t address, uint8_t value) {
    SCMachine *machine = &runtime->machine;
    size_t index = (size_t)(address - SC_MMIO_BASE);

    machine->mmio[index] = value;
    machine->mmio_touched[index] = 1u;
    switch (address) {
        case 0x2100u:
            machine->ppu_forced_blank = (uint8_t)((value & 0x80u) != 0u);
            machine->ppu_brightness = (uint8_t)(value & 0x0fu);
            break;
        case 0x2102u:
            machine->oam_word_address = (uint16_t)((machine->oam_word_address & 0x0100u) | value);
            machine->oam_internal_address = (uint16_t)((machine->oam_word_address << 1) & 0x03ffu);
            break;
        case 0x2103u:
            machine->oam_word_address = (uint16_t)((machine->oam_word_address & 0x00ffu) |
                                        ((uint16_t)(value & 1u) << 8));
            machine->oam_priority_rotation = (uint8_t)((value & 0x80u) != 0u);
            machine->oam_internal_address = (uint16_t)((machine->oam_word_address << 1) & 0x03ffu);
            break;
        case 0x2104u: {
            uint16_t oam_address = machine->oam_internal_address;
            if (oam_address < 512u) {
                if ((oam_address & 1u) != 0u) {
                    machine->oam[oam_address - 1u] = machine->oam_write_buffer;
                    machine->oam[oam_address] = value;
                } else {
                    machine->oam_write_buffer = value;
                }
            } else {
                uint16_t physical = (uint16_t)(0x0200u | (oam_address & 0x001fu));
                if ((oam_address & 1u) == 0u) machine->oam_write_buffer = value;
                machine->oam[physical] = value;
            }
            machine->oam_internal_address = (uint16_t)((oam_address + 1u) & 0x03ffu);
            break;
        }
        case 0x2115u:
            switch (value & 3u) {
                case 0u: machine->vram_increment = 1u; break;
                case 1u: machine->vram_increment = 32u; break;
                default: machine->vram_increment = 128u; break;
            }
            machine->vram_remap_mode = (uint8_t)((value >> 2) & 3u);
            machine->vram_increment_on_high = (uint8_t)((value & 0x80u) != 0u);
            break;
        case 0x2116u:
            machine->vram_address = (uint16_t)((machine->vram_address & 0x7f00u) | value);
            break;
        case 0x2117u:
            machine->vram_address = (uint16_t)((machine->vram_address & 0x00ffu) |
                                    ((uint16_t)(value & 0x7fu) << 8));
            break;
        case 0x2118u: {
            uint16_t word = sc_v11_vram_effective_address(machine);
            machine->vram[(size_t)word * 2u] = value;
            if (!machine->vram_increment_on_high) {
                machine->vram_address = (uint16_t)((machine->vram_address +
                                        machine->vram_increment) & 0x7fffu);
            }
            break;
        }
        case 0x2119u: {
            uint16_t word = sc_v11_vram_effective_address(machine);
            machine->vram[(size_t)word * 2u + 1u] = value;
            if (machine->vram_increment_on_high) {
                machine->vram_address = (uint16_t)((machine->vram_address +
                                        machine->vram_increment) & 0x7fffu);
            }
            break;
        }
        case 0x2121u:
            machine->cgram_address = value;
            machine->cgram_second_write = 0u;
            break;
        case 0x2122u: {
            size_t byte_address = (size_t)machine->cgram_address * 2u;
            if (!machine->cgram_second_write) {
                machine->cgram_write_latch = value;
                machine->cgram_second_write = 1u;
            } else {
                machine->cgram[byte_address] = machine->cgram_write_latch;
                machine->cgram[byte_address + 1u] = (uint8_t)(value & 0x7fu);
                machine->cgram_address = (uint8_t)(machine->cgram_address + 1u);
                machine->cgram_second_write = 0u;
            }
            break;
        }
        case 0x2132u:
            sc_v11_update_fixed_color(machine, value);
            break;
        default:
            break;
    }
}

static void sc_v11_dma_hash_byte(SCV11Runtime *runtime, unsigned channel,
                                 uint32_t address_a, uint16_t address_b, uint8_t value) {
    uint64_t hash = runtime->dma_event_hash ? runtime->dma_event_hash : UINT64_C(1469598103934665603);
    uint64_t fields[4];
    unsigned i;
    fields[0] = channel;
    fields[1] = address_a & 0x00ffffffu;
    fields[2] = address_b;
    fields[3] = value;
    for (i = 0u; i < 4u; ++i) {
        unsigned byte;
        for (byte = 0u; byte < 8u; ++byte) {
            hash ^= (fields[i] >> (byte * 8u)) & 0xffu;
            hash *= UINT64_C(1099511628211);
        }
    }
    runtime->dma_event_hash = hash;
    runtime->dma_event_count++;
}

static uint8_t sc_v11_read_raw(SCV11Runtime *runtime, uint32_t address, int dma_access) {
    uint8_t bank;
    uint16_t local;
    uint8_t value;

    (void)dma_access;
    address &= 0x00ffffffu;
    bank = (uint8_t)(address >> 16);
    local = (uint16_t)address;
    value = runtime->open_bus;

    if (bank == 0x7eu || bank == 0x7fu) {
        value = runtime->machine.wram[((size_t)(bank - 0x7eu) << 16) | local];
    } else if (sc_v11_low_bank(bank) && local < 0x2000u) {
        value = runtime->machine.wram[local];
    } else if (sc_v11_low_bank(bank) && local == 0x2180u) {
        value = runtime->machine.wram[runtime->wram_port & 0x1ffffu];
        runtime->wram_port = (runtime->wram_port + 1u) & 0x1ffffu;
    } else if (sc_v11_low_bank(bank) && local >= 0x2140u && local <= 0x2143u) {
        unsigned port = (unsigned)(local - 0x2140u);
        value = sc_v11_smp_cpu_read_port(runtime, port);
    } else if (sc_v11_low_bank(bank) && local >= 0x2100u && local <= 0x213fu) {
        sc_v11_record_ppu_read(runtime, local);
        switch (local) {
            case 0x2138u: {
                uint16_t oam_address = runtime->machine.oam_internal_address;
                uint16_t physical = oam_address < 512u
                    ? oam_address : (uint16_t)(0x0200u | (oam_address & 0x001fu));
                value = runtime->machine.oam[physical];
                runtime->machine.oam_internal_address = (uint16_t)((oam_address + 1u) & 0x03ffu);
                break;
            }
            case 0x2139u: {
                uint16_t word = sc_v11_vram_effective_address(&runtime->machine);
                value = runtime->machine.vram[(size_t)word * 2u];
                if (!runtime->machine.vram_increment_on_high)
                    runtime->machine.vram_address = (uint16_t)((runtime->machine.vram_address +
                        runtime->machine.vram_increment) & 0x7fffu);
                break;
            }
            case 0x213au: {
                uint16_t word = sc_v11_vram_effective_address(&runtime->machine);
                value = runtime->machine.vram[(size_t)word * 2u + 1u];
                if (runtime->machine.vram_increment_on_high)
                    runtime->machine.vram_address = (uint16_t)((runtime->machine.vram_address +
                        runtime->machine.vram_increment) & 0x7fffu);
                break;
            }
            case 0x213bu: {
                size_t byte_address = (size_t)runtime->machine.cgram_address * 2u;
                if (!runtime->machine.cgram_read_second) {
                    value = runtime->machine.cgram[byte_address];
                    runtime->machine.cgram_read_second = 1u;
                } else {
                    value = (uint8_t)((runtime->machine.cgram[byte_address + 1u] & 0x7fu) |
                                      (runtime->open_bus & 0x80u));
                    runtime->machine.cgram_address = (uint8_t)(runtime->machine.cgram_address + 1u);
                    runtime->machine.cgram_read_second = 0u;
                }
                break;
            }
            case 0x213eu:
                value = (uint8_t)((runtime->open_bus & 0x10u) | 0x01u);
                break;
            case 0x213fu:
                value = (uint8_t)((runtime->open_bus & 0x20u) |
                                  (runtime->scheduler.field ? 0x80u : 0u) | 0x03u);
                break;
            default:
                value = sc_machine_mmio_read8(&runtime->machine, local);
                break;
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x4200u && local <= 0x421fu) {
        if (local == 0x4210u) {
            value = (uint8_t)((runtime->open_bus & 0x70u) | 0x02u |
                              (runtime->scheduler.nmi_flag ? 0x80u : 0u));
            runtime->scheduler.nmi_flag = 0u;
        } else if (local == 0x4211u) {
            value = runtime->scheduler.irq_pending ? 0x80u : 0u;
            runtime->scheduler.irq_pending = 0u;
        } else if (local == 0x4212u) {
            value = (uint8_t)((runtime->open_bus & 0x3eu) |
                (runtime->scheduler.scanline >= 225u ? 0x80u : 0u) |
                ((runtime->scheduler.hclock >= 1096u && runtime->scheduler.hclock < 1364u) ? 0x40u : 0u) |
                (runtime->scheduler.auto_joypad_active ? 1u : 0u));
        } else if (local >= 0x4214u && local <= 0x4217u) {
            uint16_t result = local < 0x4216u ? runtime->quotient : runtime->remainder;
            value = (uint8_t)(result >> ((local & 1u) * 8u));
        } else if (local >= 0x4218u && local <= 0x421fu) {
            unsigned port = (unsigned)((local - 0x4218u) >> 1);
            value = (uint8_t)(runtime->auto_joypad_result[port] >>
                              ((local & 1u) * 8u));
        } else {
            value = sc_machine_mmio_read8(&runtime->machine, local);
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x4300u && local < 0x4380u) {
        value = sc_machine_mmio_read8(&runtime->machine, local);
    } else if ((bank >= 0x70u && bank <= 0x7du) || bank >= 0xf0u) {
        if (local < 0x8000u) value = runtime->sram[sc_v11_sram_offset(bank, local)];
        else value = runtime->rom[sc_v11_lorom_offset(bank, local)];
    } else if (local >= 0x8000u ||
               (bank >= 0x40u && bank <= 0x6fu) || bank >= 0xc0u) {
        value = runtime->rom[sc_v11_lorom_offset(bank, local)];
    }

    runtime->open_bus = value;
    return value;
}

static int sc_v11_write_raw(SCV11Runtime *runtime, uint32_t address, uint8_t value,
                            int dma_access, int permit_dma_start);

static int sc_v11_run_dma_mask(SCV11Runtime *runtime, uint8_t mask, uint8_t cpu_speed) {
    unsigned channel_index;
    uint32_t dma_clocks;
    uint32_t start_sync;

    if (!runtime || runtime->route_failed || cpu_speed == 0u) return 0;

    /* Manual DMA starts on the CPU cycle after the one-cycle start delay.
     * Synchronize by 2-8 master clocks to the next multiple of eight, then
     * account for global and per-channel overhead.  End synchronization is
     * relative to the speed of the CPU cycle that DMA interrupted. */
    start_sync = (uint32_t)(8u - (runtime->scheduler.master_clock & 7u));
    sc_v11_scheduler_advance(runtime, start_sync);
    dma_clocks = start_sync;
    sc_v11_scheduler_advance(runtime, 8u);
    dma_clocks += 8u;
    sc_v11_record_event(runtime, SC_EVENT_DMA_BEGIN, 0xffu, 0u, 0x420bu, mask);

    for (channel_index = 0u; channel_index < SC_DMA_CHANNEL_COUNT; ++channel_index) {
        SCDmaChannel *channel;
        uint32_t remaining;
        uint32_t byte_index;
        uint8_t mode;
        int direction_b_to_a;
        int fixed;
        int decrement;

        if ((mask & (uint8_t)(1u << channel_index)) == 0u) continue;
        channel = &runtime->machine.dma[channel_index];
        channel->active = 1u;
        mode = (uint8_t)(channel->control & 7u);
        direction_b_to_a = (channel->control & 0x80u) != 0u;
        fixed = (channel->control & 0x08u) != 0u;
        decrement = (channel->control & 0x10u) != 0u;
        remaining = channel->transfer_size ? channel->transfer_size : 65536u;

        sc_v11_scheduler_advance(runtime, 8u);
        dma_clocks += 8u;

        for (byte_index = 0u; byte_index < remaining; ++byte_index) {
            uint32_t address_a = ((uint32_t)channel->source_bank << 16) |
                                 channel->source_address;
            uint16_t address_b = (uint16_t)(0x2100u |
                (uint16_t)(channel->destination +
                sc_v11_dma_offsets[mode][byte_index & 3u]));
            uint8_t transferred;

            if (direction_b_to_a) {
                transferred = sc_v11_read_raw(runtime, address_b, 1);
                if (!sc_v11_write_raw(runtime, address_a, transferred, 1, 0)) return 0;
            } else {
                transferred = sc_v11_read_raw(runtime, address_a, 1);
                if (!sc_v11_write_raw(runtime, address_b, transferred, 1, 0)) return 0;
            }
            if (runtime->route_failed) return 0;

            sc_v11_scheduler_advance(runtime, 8u);
            dma_clocks += 8u;
            sc_v11_dma_hash_byte(runtime, channel_index, address_a, address_b, transferred);
            runtime->machine.functional_dma_bytes++;

            if (!fixed) {
                channel->source_address = decrement
                    ? (uint16_t)(channel->source_address - 1u)
                    : (uint16_t)(channel->source_address + 1u);
            }
            channel->transfer_size = (uint16_t)(channel->transfer_size - 1u);
        }

        channel->active = 0u;
        runtime->machine.mmio[(0x4302u + channel_index * 0x10u) - SC_MMIO_BASE] =
            (uint8_t)channel->source_address;
        runtime->machine.mmio[(0x4303u + channel_index * 0x10u) - SC_MMIO_BASE] =
            (uint8_t)(channel->source_address >> 8);
        runtime->machine.mmio[(0x4305u + channel_index * 0x10u) - SC_MMIO_BASE] =
            (uint8_t)channel->transfer_size;
        runtime->machine.mmio[(0x4306u + channel_index * 0x10u) - SC_MMIO_BASE] =
            (uint8_t)(channel->transfer_size >> 8);
    }

    sc_v11_scheduler_advance(runtime,
        (uint32_t)(cpu_speed - (uint8_t)(dma_clocks % cpu_speed)));
    runtime->machine.dma_pending_mask = 0u;
    runtime->machine.mmio[0x420bu - SC_MMIO_BASE] = 0u;
    sc_v11_record_event(runtime, SC_EVENT_DMA_END, 0xffu, 0u, 0x420bu, 0u);
    return runtime->route_failed == 0u;
}

int sc_v11_process_pending_dma(SCV11Runtime *runtime, uint8_t cpu_speed) {
    uint8_t mask;
    if (!runtime || runtime->route_failed) return 0;
    mask = runtime->machine.dma_pending_mask;
    if (mask == 0u) return 1;
    if (runtime->machine.dma_start_delay_pending) {
        runtime->machine.dma_start_delay_pending = 0u;
        return 1;
    }
    return sc_v11_run_dma_mask(runtime, mask, cpu_speed);
}

static int sc_v11_write_raw(SCV11Runtime *runtime, uint32_t address, uint8_t value,
                            int dma_access, int permit_dma_start) {
    uint8_t bank;
    uint16_t local;

    (void)dma_access;
    address &= 0x00ffffffu;
    bank = (uint8_t)(address >> 16);
    local = (uint16_t)address;
    runtime->open_bus = value;

    if (bank == 0x7eu || bank == 0x7fu) {
        runtime->machine.wram[((size_t)(bank - 0x7eu) << 16) | local] = value;
    } else if (sc_v11_low_bank(bank) && local < 0x2000u) {
        runtime->machine.wram[local] = value;
    } else if (sc_v11_low_bank(bank) && local >= 0x2180u && local <= 0x2183u) {
        if (local == 0x2180u) {
            runtime->machine.wram[runtime->wram_port & 0x1ffffu] = value;
            runtime->wram_port = (runtime->wram_port + 1u) & 0x1ffffu;
        } else if (local == 0x2181u) {
            runtime->wram_port = (runtime->wram_port & 0x1ff00u) | value;
        } else if (local == 0x2182u) {
            runtime->wram_port = (runtime->wram_port & 0x100ffu) | ((uint32_t)value << 8);
        } else {
            runtime->wram_port = (runtime->wram_port & 0x0ffffu) |
                                 ((uint32_t)(value & 1u) << 16);
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x2140u && local <= 0x2143u) {
        if (!sc_v11_smp_cpu_write_port(runtime,
                                       (unsigned)(local - 0x2140u), value)) {
            return sc_v11_fail(runtime, address, "CPU-to-S-SMP port write failed");
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x2100u && local <= 0x213fu) {
        if (dma_access) {
            sc_v11_ppu_write_raw(runtime, local, value);
        } else if (!sc_machine_mmio_write8(&runtime->machine, local, value)) {
            return sc_v11_fail(runtime, address, "PPU register write failed");
        }
        if (local == 0x210du) {
            uint16_t combined = (uint16_t)(((uint16_t)value << 8) |
                                (runtime->bgofs_latch & 0xf8u) |
                                (runtime->bghofs_latch & 7u));
            runtime->bgofs_latch = value;
            runtime->bghofs_latch = value;
            runtime->bg_scroll[0] = combined & 0x03ffu;
        } else if (local == 0x210eu) {
            runtime->bg_scroll[1] = (uint16_t)(((uint16_t)value << 8) |
                                    runtime->bgofs_latch) & 0x03ffu;
            runtime->bgofs_latch = value;
        } else if (local == 0x210fu || local == 0x2111u) {
            unsigned index = local == 0x210fu ? 2u : 4u;
            runtime->bg_scroll[index] = (uint16_t)(((uint16_t)value << 8) |
                                        (runtime->bgofs_latch & 0xf8u) |
                                        (runtime->bghofs_latch & 7u)) & 0x03ffu;
            runtime->bgofs_latch = value;
            runtime->bghofs_latch = value;
        } else if (local == 0x2110u || local == 0x2112u ||
                   local == 0x2113u || local == 0x2114u) {
            unsigned index;
            if (local == 0x2110u) index = 3u;
            else if (local == 0x2112u) index = 5u;
            else index = local == 0x2113u ? 6u : 7u;
            runtime->bg_scroll[index] = (uint16_t)(((uint16_t)value << 8) |
                                        runtime->bgofs_latch) & 0x03ffu;
            runtime->bgofs_latch = value;
        }
        sc_v11_record_ppu_write(runtime, local);
    } else if (sc_v11_low_bank(bank) && local >= 0x4200u && local <= 0x421fu) {
        if (local == 0x4202u) {
            runtime->mul_a = value;
        } else if (local == 0x4203u) {
            runtime->mul_b = value;
            runtime->remainder = (uint16_t)(runtime->mul_a * runtime->mul_b);
        } else if (local == 0x4204u) {
            runtime->dividend = (uint16_t)((runtime->dividend & 0xff00u) | value);
        } else if (local == 0x4205u) {
            runtime->dividend = (uint16_t)((runtime->dividend & 0x00ffu) |
                                ((uint16_t)value << 8));
        } else if (local == 0x4206u) {
            runtime->divisor = value;
            if (value) {
                runtime->quotient = (uint16_t)(runtime->dividend / value);
                runtime->remainder = (uint16_t)(runtime->dividend % value);
            } else {
                runtime->quotient = 0xffffu;
                runtime->remainder = runtime->dividend;
            }
        }
        if (!sc_machine_mmio_write8(&runtime->machine, local, value)) {
            return sc_v11_fail(runtime, address, "CPU I/O register write failed");
        }
        if (local == 0x420bu && permit_dma_start && value != 0u) {
            runtime->machine.dma_pending_mask = value;
            runtime->machine.dma_start_delay_pending = 1u;
            sc_v11_record_event(runtime, SC_EVENT_DMA_QUEUED, 0xffu,
                                address, local, value);
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x4300u && local < 0x4380u) {
        if (!sc_machine_mmio_write8(&runtime->machine, local, value)) {
            return sc_v11_fail(runtime, address, "DMA register write failed");
        }
    } else if (((bank >= 0x70u && bank <= 0x7du) || bank >= 0xf0u) &&
               local < 0x8000u) {
        {
            size_t offset = sc_v11_sram_offset(bank, local);
            if (runtime->sram[offset] != value) {
                runtime->sram[offset] = value;
                runtime->sram_dirty = 1u;
            }
        }
    } else if (local >= 0x8000u ||
               (bank >= 0x40u && bank <= 0x6fu) || bank >= 0xc0u) {
        return sc_v11_fail(runtime, address, "attempted write to immutable cartridge ROM");
    } else {
        return sc_v11_fail(runtime, address, "unsupported A-bus write");
    }
    return runtime->route_failed == 0u;
}

uint8_t sc_v11_bus_peek8(const SCV11Runtime *runtime, uint32_t address) {
    uint8_t bank;
    uint16_t local;
    if (!runtime || !runtime->rom || runtime->rom_size != SC_V11_ROM_SIZE) return 0u;
    address &= 0x00ffffffu;
    bank = (uint8_t)(address >> 16);
    local = (uint16_t)address;
    if (bank == 0x7eu || bank == 0x7fu)
        return runtime->machine.wram[((size_t)(bank - 0x7eu) << 16) | local];
    if (sc_v11_low_bank(bank) && local < 0x2000u)
        return runtime->machine.wram[local];
    if (((bank >= 0x70u && bank <= 0x7du) || bank >= 0xf0u) && local < 0x8000u)
        return runtime->sram[sc_v11_sram_offset(bank, local)];
    if (local >= 0x8000u || (bank >= 0x40u && bank <= 0x6fu) || bank >= 0xc0u)
        return runtime->rom[sc_v11_lorom_offset(bank, local)];
    if (sc_v11_low_bank(bank) && local >= SC_MMIO_BASE && local < SC_MMIO_LIMIT)
        return runtime->machine.mmio[local - SC_MMIO_BASE];
    return runtime->open_bus;
}

uint16_t sc_v11_bus_peek16(const SCV11Runtime *runtime, uint32_t address) {
    uint8_t low = sc_v11_bus_peek8(runtime, address);
    uint8_t high = sc_v11_bus_peek8(runtime, (address + 1u) & 0x00ffffffu);
    return (uint16_t)(low | ((uint16_t)high << 8));
}

uint8_t sc_v11_bus_read8(SCV11Runtime *runtime, uint32_t address) {
    uint8_t bank; uint16_t local; uint8_t value;
    if (!runtime || runtime->route_failed) return 0u;
    address &= 0x00ffffffu; bank=(uint8_t)(address>>16); local=(uint16_t)address;
    if (sc_v11_low_bank(bank) && local>=0x2140u && local<=0x2143u) {
        if (!sc_v11_process_pending_dma(runtime, 6u)) return 0u;
        sc_v11_scheduler_cpu_cycle_sample(runtime);
        sc_v11_scheduler_advance(runtime,2u);
        value=sc_v11_read_raw(runtime,address,0);
        sc_v11_scheduler_advance(runtime,4u);
        return value;
    }
    sc_v11_access_cycle(runtime, address);
    return sc_v11_read_raw(runtime, address, 0);
}

uint16_t sc_v11_bus_read16(SCV11Runtime *runtime, uint32_t address) {
    uint8_t low = sc_v11_bus_read8(runtime, address);
    uint8_t high = sc_v11_bus_read8(runtime, (address + 1u) & 0x00ffffffu);
    return (uint16_t)(low | ((uint16_t)high << 8));
}

void sc_v11_bus_write8(SCV11Runtime *runtime, uint32_t address, uint8_t value) {
    if (!runtime || runtime->route_failed) return;
    sc_v11_access_cycle(runtime, address & 0x00ffffffu);
    (void)sc_v11_write_raw(runtime, address, value, 0, 1);
}

void sc_v11_bus_write16(SCV11Runtime *runtime, uint32_t address, uint16_t value) {
    sc_v11_bus_write8(runtime, address, (uint8_t)value);
    sc_v11_bus_write8(runtime, (address + 1u) & 0x00ffffffu, (uint8_t)(value >> 8));
}

