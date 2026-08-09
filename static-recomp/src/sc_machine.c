#include "sc_machine.h"
#include "sc_core_internal.h"
#include <string.h>

static const uint8_t sc_smp_ipl_rom[64] = {
    0xCDu,0xEFu,0xBDu,0xE8u,0x00u,0xC6u,0x1Du,0xD0u,0xFCu,0x8Fu,0xAAu,0xF4u,0x8Fu,0xBBu,0xF5u,0x78u,
    0xCCu,0xF4u,0xD0u,0xFBu,0x2Fu,0x19u,0xEBu,0xF4u,0xD0u,0xFCu,0x7Eu,0xF4u,0xD0u,0x0Bu,0xE4u,0xF5u,
    0xCBu,0xF4u,0xD7u,0x00u,0xFCu,0xD0u,0xF3u,0xABu,0x01u,0x10u,0xEFu,0x7Eu,0xF4u,0x10u,0xEBu,0xBAu,
    0xF6u,0xDAu,0x00u,0xBAu,0xF4u,0xC4u,0xF4u,0xDDu,0x5Du,0xD0u,0xDBu,0x1Fu,0x00u,0x00u,0xC0u,0xFFu
};

static const uint8_t sc_dma_transfer_offsets[8][4] = {
    {0u, 0u, 0u, 0u},
    {0u, 1u, 0u, 1u},
    {0u, 0u, 0u, 0u},
    {0u, 0u, 1u, 1u},
    {0u, 1u, 2u, 3u},
    {0u, 1u, 0u, 1u},
    {0u, 0u, 0u, 0u},
    {0u, 0u, 1u, 1u}
};

static int sc_low_bank(uint8_t bank) {
    return bank <= 0x3fu || (bank >= 0x80u && bank <= 0xbfu);
}

static int sc_wram_index(uint32_t address, size_t *index) {
    uint8_t bank = (uint8_t)(address >> 16);
    uint16_t offset = (uint16_t)address;
    if (!index) return 0;
    if (bank == 0x7eu || bank == 0x7fu) {
        *index = ((size_t)(bank - 0x7eu) << 16) | offset;
        return 1;
    }
    if (sc_low_bank(bank) && offset < 0x2000u) {
        *index = offset;
        return 1;
    }
    return 0;
}

static int sc_mmio_address(uint32_t address, uint16_t *offset) {
    uint8_t bank = (uint8_t)(address >> 16);
    uint16_t local = (uint16_t)address;
    if (!offset || !sc_low_bank(bank) || local < SC_MMIO_BASE || local >= SC_MMIO_LIMIT) return 0;
    *offset = local;
    return 1;
}

static void sc_hardware_error(SCMachine *machine, const char *text) {
    if (!machine) return;
    machine->hardware_fail_closed = 1u;
    machine->functional_event_order_valid = 0u;
    sc_copy_text(machine->hardware_error, sizeof(machine->hardware_error), text);
}

static void sc_compact_event_ledger(SCMachine *machine) {
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

static void sc_record_event(SCMachine *machine, uint8_t kind, uint8_t channel,
                            uint32_t address_a, uint16_t address_b, uint8_t value) {
    SCHardwareEvent *event;
    if (!machine) return;
    machine->hardware_event_sequence++;
    if (machine->hardware_event_count >= SC_EVENT_CAPACITY) {
        sc_compact_event_ledger(machine);
    }
    event = &machine->hardware_events[machine->hardware_event_count++];
    event->sequence = machine->hardware_event_sequence;
    event->address_a = address_a & 0xFFFFFFu;
    event->address_b = address_b;
    event->value = value;
    event->channel = channel;
    event->kind = kind;
}

static void sc_update_oam_address(SCMachine *machine) {
    machine->oam_internal_address = (uint16_t)((machine->oam_word_address << 1) & 0x03ffu);
}

static uint16_t sc_vram_effective_address(const SCMachine *machine) {
    uint16_t address = machine->vram_address;
    switch (machine->vram_remap_mode & 3u) {
        default:
        case 0: return address;
        case 1: return (uint16_t)((address & 0xff00u) | ((address & 0x00e0u) >> 5) | ((address & 0x001fu) << 3));
        case 2: return (uint16_t)((address & 0xfe00u) | ((address & 0x01c0u) >> 6) | ((address & 0x003fu) << 3));
        case 3: return (uint16_t)((address & 0xfc00u) | ((address & 0x0380u) >> 7) | ((address & 0x007fu) << 3));
    }
}

static void sc_write_oam_data(SCMachine *machine, uint8_t value) {
    uint16_t address = machine->oam_internal_address;
    if (address < 512u) {
        if ((address & 1u) != 0u) {
            machine->oam[address - 1u] = machine->oam_write_buffer;
            machine->oam[address] = value;
        } else {
            machine->oam_write_buffer = value;
        }
    }
    if (address >= 512u) {
        uint16_t physical = (uint16_t)(0x0200u | (address & 0x001fu));
        if ((address & 1u) == 0u) machine->oam_write_buffer = value;
        machine->oam[physical] = value;
    }
    machine->oam_internal_address = (uint16_t)((address + 1u) & 0x03ffu);
}

static void sc_write_vram_low(SCMachine *machine, uint8_t value) {
    uint16_t word = sc_vram_effective_address(machine);
    machine->vram[(size_t)word * 2u] = value;
    if (!machine->vram_increment_on_high) machine->vram_address = (uint16_t)((machine->vram_address + machine->vram_increment) & 0x7fffu);
}

static void sc_write_vram_high(SCMachine *machine, uint8_t value) {
    uint16_t word = sc_vram_effective_address(machine);
    machine->vram[(size_t)word * 2u + 1u] = value;
    if (machine->vram_increment_on_high) machine->vram_address = (uint16_t)((machine->vram_address + machine->vram_increment) & 0x7fffu);
}

static void sc_write_cgram_data(SCMachine *machine, uint8_t value) {
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
}


static void sc_update_fixed_color(SCMachine *machine, uint8_t value) {
    uint16_t component = (uint16_t)(value & 0x1fu);
    if (value & 0x20u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x001fu) | component);
    if (value & 0x40u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x03e0u) | (component << 5));
    if (value & 0x80u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x7c00u) | (component << 10));
}

static void sc_update_dma_register(SCMachine *machine, uint16_t address, uint8_t value) {
    unsigned channel_index = (unsigned)((address & 0x70u) >> 4);
    unsigned reg = (unsigned)(address & 0x0fu);
    SCDmaChannel *channel;
    if (channel_index >= SC_DMA_CHANNEL_COUNT) return;
    channel = &machine->dma[channel_index];
    switch (reg) {
        case 0x0u: channel->control = value; break;
        case 0x1u: channel->destination = value; break;
        case 0x2u: channel->source_address = (uint16_t)((channel->source_address & 0xff00u) | value); break;
        case 0x3u: channel->source_address = (uint16_t)((channel->source_address & 0x00ffu) | ((uint16_t)value << 8)); break;
        case 0x4u: channel->source_bank = value; break;
        case 0x5u: channel->transfer_size = (uint16_t)((channel->transfer_size & 0xff00u) | value); break;
        case 0x6u: channel->transfer_size = (uint16_t)((channel->transfer_size & 0x00ffu) | ((uint16_t)value << 8)); break;
        case 0x7u: channel->hdma_bank = value; break;
        case 0x8u: channel->hdma_table_address = (uint16_t)((channel->hdma_table_address & 0xff00u) | value); break;
        case 0x9u: channel->hdma_table_address = (uint16_t)((channel->hdma_table_address & 0x00ffu) | ((uint16_t)value << 8)); break;
        case 0xau: channel->line_counter_repeat = value; break;
        case 0xbu: case 0xfu: channel->unused_register = value; break;
        default: break;
    }
}

void sc_machine_power_on(SCMachine *machine) {
    if (!machine) return;
    memset(machine, 0, sizeof(*machine));
    machine->cpu.sp = 0x01ffu;
    machine->cpu.p = 0x34u;
    machine->cpu.emulation = 1u;
    machine->cpu.pc = SC_EXPECTED_RESET_VECTOR;
    machine->fail_closed = 1;
    machine->ppu_forced_blank = 1u;
    machine->ppu_brightness = 0u;
    machine->mmio[0x2100u - SC_MMIO_BASE] = 0x80u;
    machine->vram_increment = 1u;
    machine->functional_event_order_valid = 1u;
    machine->scheduler_hardware_timed = 0u;
    machine->dma_timing_certified = 0u;
    sc_copy_text(machine->stop_reason, sizeof(machine->stop_reason), "power-on reset; no generated route entered");
}

int sc_machine_wram_write8(SCMachine *machine, uint32_t address, uint8_t value) {
    size_t index;
    if (!machine || !sc_wram_index(address, &index) || index >= SC_WRAM_SIZE) return 0;
    machine->wram[index] = value;
    return 1;
}

int sc_machine_wram_read8(const SCMachine *machine, uint32_t address, uint8_t *value) {
    size_t index;
    if (!machine || !value || !sc_wram_index(address, &index) || index >= SC_WRAM_SIZE) return 0;
    *value = machine->wram[index];
    return 1;
}

int sc_machine_bus_write8(SCMachine *machine, uint32_t address, uint8_t value) {
    uint16_t mmio;
    if (sc_machine_wram_write8(machine, address, value)) return 1;
    if (sc_mmio_address(address, &mmio)) return sc_machine_mmio_write8(machine, mmio, value);
    sc_hardware_error(machine, "unsupported A-bus write");
    return 0;
}

int sc_machine_bus_read8(const SCMachine *machine, uint32_t address, uint8_t *value) {
    uint16_t mmio;
    if (sc_machine_wram_read8(machine, address, value)) return 1;
    if (sc_mmio_address(address, &mmio)) {
        if (value) *value = sc_machine_mmio_read8(machine, mmio);
        return value != NULL;
    }
    return 0;
}

int sc_machine_cpu_apu_write8(SCMachine *machine, unsigned port, uint8_t value) {
    if (!machine || port >= SC_APU_PORT_COUNT) return 0;
    machine->cpu_to_smp_ports[port] = value;
    machine->cpu_apu_writes++;
    machine->cpu_apu_write_per_port[port]++;
    return 1;
}

uint8_t sc_machine_cpu_apu_read8(SCMachine *machine, unsigned port) {
    if (!machine || port >= SC_APU_PORT_COUNT) return 0u;
    machine->cpu_apu_reads++;
    machine->cpu_apu_read_per_port[port]++;
    return machine->smp_to_cpu_ports[port];
}

int sc_machine_mmio_write8(SCMachine *machine, uint16_t address, uint8_t value) {
    size_t index;
    if (!machine || address < SC_MMIO_BASE || address >= SC_MMIO_LIMIT) return 0;
    index = (size_t)(address - SC_MMIO_BASE);
    machine->mmio[index] = value;
    machine->mmio_touched[index] = 1u;
    sc_record_event(machine, SC_EVENT_MMIO_WRITE, 0xffu, 0u, address, value);

    switch (address) {
        case 0x2140u: case 0x2141u: case 0x2142u: case 0x2143u:
            if (!sc_machine_cpu_apu_write8(machine, (unsigned)(address - 0x2140u), value)) return 0;
            break;
        case 0x2100u:
            machine->ppu_forced_blank = (uint8_t)((value & 0x80u) != 0u);
            machine->ppu_brightness = (uint8_t)(value & 0x0fu);
            break;
        case 0x2102u:
            machine->oam_word_address = (uint16_t)((machine->oam_word_address & 0x0100u) | value);
            sc_update_oam_address(machine);
            break;
        case 0x2103u:
            machine->oam_word_address = (uint16_t)((machine->oam_word_address & 0x00ffu) | ((uint16_t)(value & 1u) << 8));
            machine->oam_priority_rotation = (uint8_t)((value & 0x80u) != 0u);
            sc_update_oam_address(machine);
            break;
        case 0x2104u: sc_write_oam_data(machine, value); break;
        case 0x2115u:
            switch (value & 3u) {
                case 0u: machine->vram_increment = 1u; break;
                case 1u: machine->vram_increment = 32u; break;
                default: machine->vram_increment = 128u; break;
            }
            machine->vram_remap_mode = (uint8_t)((value >> 2) & 3u);
            machine->vram_increment_on_high = (uint8_t)((value & 0x80u) != 0u);
            break;
        case 0x2116u: machine->vram_address = (uint16_t)((machine->vram_address & 0x7f00u) | value); break;
        case 0x2117u: machine->vram_address = (uint16_t)((machine->vram_address & 0x00ffu) | ((uint16_t)(value & 0x7fu) << 8)); break;
        case 0x2118u: sc_write_vram_low(machine, value); break;
        case 0x2119u: sc_write_vram_high(machine, value); break;
        case 0x2121u:
            machine->cgram_address = value;
            machine->cgram_second_write = 0u;
            break;
        case 0x2122u: sc_write_cgram_data(machine, value); break;
        case 0x2132u: sc_update_fixed_color(machine, value); break;
        case 0x4200u:
            machine->nmi_enabled = (uint8_t)((value & 0x80u) != 0u);
            machine->auto_joypad_enabled = (uint8_t)((value & 0x01u) != 0u);
            break;
        case 0x420bu: {
            unsigned i;
            machine->dma_pending_mask = value;
            machine->dma_start_delay_pending = (uint8_t)(value != 0u);
            for (i = 0; i < SC_DMA_CHANNEL_COUNT; ++i) {
                if ((value & (uint8_t)(1u << i)) != 0u) machine->dma[i].active = 1u;
            }
            if (value != 0u) sc_record_event(machine, SC_EVENT_DMA_QUEUED, 0xffu, 0u, address, value);
            break;
        }
        case 0x420cu: machine->hdma_enabled_mask = value; break;
        case 0x420du: machine->fast_rom_enabled = (uint8_t)(value & 1u); break;
        default:
            if ((address >= 0x4300u && address < 0x4380u)) sc_update_dma_register(machine, address, value);
            break;
    }
    return machine->hardware_fail_closed == 0u;
}

uint8_t sc_machine_mmio_read8(const SCMachine *machine, uint16_t address) {
    if (!machine || address < SC_MMIO_BASE || address >= SC_MMIO_LIMIT) return 0u;
    if (address >= 0x2140u && address <= 0x2143u) return machine->smp_to_cpu_ports[address - 0x2140u];
    return machine->mmio[address - SC_MMIO_BASE];
}

int sc_machine_process_pending_dma(SCMachine *machine) {
    unsigned channel_index;
    if (!machine) return 0;
    if (machine->hardware_fail_closed) return 0;
    if (machine->dma_pending_mask == 0u) return 1;

    /* This is a functional event boundary, not a cycle-accurate timing claim.
     * The queue/start/byte/end order is explicit, while absolute master clocks,
     * WRAM refresh and DMA/HDMA arbitration remain uncertified. */
    machine->dma_start_delay_pending = 0u;
    sc_record_event(machine, SC_EVENT_DMA_BEGIN, 0xffu, 0u, 0x420bu, machine->dma_pending_mask);
    for (channel_index = 0u; channel_index < SC_DMA_CHANNEL_COUNT; ++channel_index) {
        SCDmaChannel *channel;
        uint32_t remaining;
        uint32_t byte_index;
        uint8_t mode;
        if ((machine->dma_pending_mask & (uint8_t)(1u << channel_index)) == 0u) continue;
        channel = &machine->dma[channel_index];
        if (!channel->active) {
            sc_hardware_error(machine, "DMA pending mask and channel activity disagree");
            return 0;
        }
        if ((channel->control & 0x80u) != 0u) {
            sc_hardware_error(machine, "B-bus to A-bus DMA is outside the Version 02 functional model");
            return 0;
        }
        mode = (uint8_t)(channel->control & 7u);
        remaining = channel->transfer_size ? channel->transfer_size : 65536u;
        for (byte_index = 0u; byte_index < remaining; ++byte_index) {
            uint32_t address_a = ((uint32_t)channel->source_bank << 16) | channel->source_address;
            uint16_t address_b = (uint16_t)(0x2100u | (uint16_t)(channel->destination + sc_dma_transfer_offsets[mode][byte_index & 3u]));
            uint8_t value;
            if (!sc_machine_bus_read8(machine, address_a, &value)) {
                sc_hardware_error(machine, "unsupported DMA A-bus source read");
                return 0;
            }
            if (!sc_machine_mmio_write8(machine, address_b, value)) return 0;
            sc_record_event(machine, SC_EVENT_DMA_BYTE, (uint8_t)channel_index, address_a, address_b, value);
            machine->functional_dma_bytes++;
            if ((channel->control & 0x08u) == 0u) {
                if ((channel->control & 0x10u) != 0u) channel->source_address = (uint16_t)(channel->source_address - 1u);
                else channel->source_address = (uint16_t)(channel->source_address + 1u);
            }
            channel->transfer_size = (uint16_t)(channel->transfer_size - 1u);
        }
        channel->active = 0u;
        machine->mmio[(0x4302u + channel_index * 0x10u) - SC_MMIO_BASE] = (uint8_t)channel->source_address;
        machine->mmio[(0x4303u + channel_index * 0x10u) - SC_MMIO_BASE] = (uint8_t)(channel->source_address >> 8);
        machine->mmio[(0x4305u + channel_index * 0x10u) - SC_MMIO_BASE] = (uint8_t)channel->transfer_size;
        machine->mmio[(0x4306u + channel_index * 0x10u) - SC_MMIO_BASE] = (uint8_t)(channel->transfer_size >> 8);
    }
    machine->dma_pending_mask = 0u;
    machine->mmio[0x420bu - SC_MMIO_BASE] = 0u;
    sc_record_event(machine, SC_EVENT_DMA_END, 0xffu, 0u, 0x420bu, 0u);
    return machine->hardware_fail_closed == 0u;
}

void sc_machine_clear_hardware_events(SCMachine *machine) {
    if (!machine) return;
    machine->hardware_event_sequence = 0u;
    machine->hardware_event_count = 0u;
    machine->functional_dma_bytes = 0u;
    machine->functional_event_order_valid = 1u;
    machine->functional_event_ledger_compacted = 0u;
    machine->compacted_dma_transfers = 0u;
    memset(machine->hardware_events, 0, sizeof(machine->hardware_events));
}

void sc_machine_wram_sha256(const SCMachine *machine, char out_hex[65]) {
    if (!machine) { if (out_hex) out_hex[0] = 0; return; }
    sc_sha256_bytes(machine->wram, SC_WRAM_SIZE, out_hex);
}

void sc_machine_oam_sha256(const SCMachine *machine, char out_hex[65]) {
    if (!machine) { if (out_hex) out_hex[0] = 0; return; }
    sc_sha256_bytes(machine->oam, SC_OAM_SIZE, out_hex);
}

void sc_machine_vram_sha256(const SCMachine *machine, char out_hex[65]) {
    if (!machine) { if (out_hex) out_hex[0] = 0; return; }
    sc_sha256_bytes(machine->vram, SC_VRAM_SIZE, out_hex);
}

void sc_machine_cgram_sha256(const SCMachine *machine, char out_hex[65]) {
    if (!machine) { if (out_hex) out_hex[0] = 0; return; }
    sc_sha256_bytes(machine->cgram, SC_CGRAM_SIZE, out_hex);
}

void sc_machine_aram_sha256(const SCMachine *machine, char out_hex[65]) {
    if (!machine) { if (out_hex) out_hex[0] = 0; return; }
    sc_sha256_bytes(machine->aram, SC_ARAM_SIZE, out_hex);
}

void sc_machine_aram_debugger_projection_sha256(const SCMachine *machine, char out_hex[65]) {
    uint8_t projection[SC_ARAM_SIZE];
    if (!machine) { if (out_hex) out_hex[0] = 0; return; }
    memcpy(projection, machine->aram, sizeof(projection));
    memcpy(projection + 0x00F4u, machine->cpu_to_smp_ports, SC_APU_PORT_COUNT);
    memcpy(projection + 0x00FDu, machine->smp_timer_output, 3u);
    if (machine->smp.ipl_rom_active) memcpy(projection + 0xFFC0u, sc_smp_ipl_rom, sizeof(sc_smp_ipl_rom));
    sc_sha256_bytes(projection, sizeof(projection), out_hex);
}

void sc_machine_dsp_sha256(const SCMachine *machine, char out_hex[65]) {
    if (!machine) { if (out_hex) out_hex[0] = 0; return; }
    sc_sha256_bytes(machine->dsp, SC_DSP_REGISTER_COUNT, out_hex);
}

size_t sc_machine_nonzero_wram_range(const SCMachine *machine, size_t start, size_t length) {
    size_t i, end, count = 0;
    if (!machine || start > SC_WRAM_SIZE || length > SC_WRAM_SIZE - start) return 0;
    end = start + length;
    for (i = start; i < end; i++) if (machine->wram[i] != 0u) count++;
    return count;
}

size_t sc_machine_nonzero_wram(const SCMachine *machine) {
    return sc_machine_nonzero_wram_range(machine, 0u, SC_WRAM_SIZE);
}
