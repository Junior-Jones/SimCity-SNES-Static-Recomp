#include "sc_v11_runtime.h"
#include "sc_audio_transport.h"
#include "sc_audio_scpu_access_manifest.h"
#include "sc_core_internal.h"

#include <stdio.h>
#include <string.h>

static int transport_fail(SCV11Runtime *runtime, const char *message) {
    SCAudioTransportState *state;
    if (!runtime) return 0;
    state = &runtime->audio_transport;
    state->failed = 1u;
    sc_copy_text(state->error, sizeof(state->error), message);
    return sc_v11_fail(runtime, runtime->current_instruction_address,
                       message ? message : "audio transport failure");
}

static size_t lorom_offset(uint32_t address) {
    uint8_t bank = (uint8_t)(address >> 16);
    uint16_t local = (uint16_t)address;
    return ((size_t)(bank & 0x7fu) << 15) | (size_t)(local & 0x7fffu);
}

static void record_event(SCV11Runtime *runtime, uint8_t actor,
                         uint8_t direction, unsigned port, uint8_t value) {
    SCAudioTransportState *state = &runtime->audio_transport;
    SCAudioTransportEvent *event;
    if (state->command_event_count >= SC_AUDIO_TRANSPORT_EVENT_CAPACITY) {
        state->event_overflow = 1u;
        return;
    }
    event = &state->events[state->command_event_count++];
    event->master_clock = runtime->scheduler.master_clock;
    event->cpu_address = runtime->current_instruction_address & 0x00ffffffu;
    event->smp_pc = runtime->machine.smp.pc;
    event->actor = actor;
    event->direction = direction;
    event->port = (uint8_t)port;
    event->value = value;
}

void sc_audio_transport_power_on(SCV11Runtime *runtime) {
    if (!runtime) return;
    memset(&runtime->audio_transport, 0, sizeof(runtime->audio_transport));
}

int sc_audio_transport_cpu_access(SCV11Runtime *runtime,
                                  uint8_t direction,
                                  unsigned port,
                                  uint8_t value) {
    SCAudioTransportState *state;
    const SCAudioScpuAccessSite *site;
    const SCAudioScpuAccessSite *base;
    size_t rom_offset;
    unsigned i, index;
    if (!runtime || port >= 4u || runtime->route_failed) return 0;
    state = &runtime->audio_transport;
    site = sc_audio_scpu_access_lookup(runtime->current_instruction_address,
                                       direction, port);
    if (!site) {
        char message[192];
        state->unmanifested_cpu_accesses++;
        (void)snprintf(message, sizeof(message),
                       "ungenerated S-CPU APUIO %s at %06X port %u",
                       direction == SC_AUDIO_SCPU_ACCESS_READ ? "read" : "write",
                       (unsigned)(runtime->current_instruction_address & 0x00ffffffu),
                       port);
        return transport_fail(runtime, message);
    }
    rom_offset = lorom_offset(site->address);
    if (!runtime->rom || rom_offset + site->opcode_length > runtime->rom_size)
        return transport_fail(runtime, "S-CPU APUIO authority is outside the exact ROM");
    for (i = 0u; i < site->opcode_length; ++i) {
        if (runtime->rom[rom_offset + i] != site->opcode[i])
            return transport_fail(runtime, "S-CPU APUIO opcode changed from generated authority");
    }
    base = sc_audio_scpu_access_sites();
    index = (unsigned)(site - base);
    if (index < 32u) {
        uint32_t bit = (uint32_t)1u << index;
        state->observed_access_site_mask |= bit;
        if ((state->recorded_access_site_mask & bit) == 0u) {
            state->recorded_access_site_mask |= bit;
            record_event(runtime, 1u, direction, port, value);
        }
    }
    state->last_cpu_access_address = runtime->current_instruction_address & 0x00ffffffu;
    state->cpu_access_count++;
    if (direction == SC_AUDIO_SCPU_ACCESS_READ) state->cpu_read_count++;
    else state->cpu_write_count++;
    if (state->upload_complete) {
        if (direction == SC_AUDIO_SCPU_ACCESS_READ) state->post_upload_cpu_reads++;
        else state->post_upload_cpu_writes++;
        record_event(runtime, 1u, direction, port, value);
    }

    if (direction == SC_AUDIO_SCPU_ACCESS_WRITE && port == 0u &&
        state->ready_mask == 3u && value == 0xccu &&
        !state->upload_handshake_started) {
        state->upload_handshake_started = 1u;
        state->upload_start_master_clock = runtime->scheduler.master_clock;
    }
    return 1;
}

void sc_audio_transport_smp_port_access(SCV11Runtime *runtime,
                                        uint8_t direction,
                                        unsigned port,
                                        uint8_t value) {
    SCAudioTransportState *state;
    if (!runtime || port >= 4u) return;
    state = &runtime->audio_transport;
    if (direction == SC_AUDIO_SCPU_ACCESS_READ) state->smp_port_read_count++;
    else state->smp_port_write_count++;
    if (state->upload_complete) {
        if (direction == SC_AUDIO_SCPU_ACCESS_READ) state->post_upload_smp_reads++;
        else state->post_upload_smp_writes++;
    } else if (direction == SC_AUDIO_SCPU_ACCESS_WRITE &&
               ((port == 0u && value == 0xaau) || (port == 1u && value == 0xbbu))) {
        record_event(runtime, 2u, direction, port, value);
    }
    if (direction == SC_AUDIO_SCPU_ACCESS_WRITE && !state->upload_complete) {
        if (port == 0u && value == 0xaau) state->ready_mask |= 1u;
        if (port == 1u && value == 0xbbu) state->ready_mask |= 2u;
        if (state->ready_mask == 3u && state->ready_master_clock == 0u)
            state->ready_master_clock = runtime->scheduler.master_clock;
    }
}

void sc_audio_transport_smp_aram_write(SCV11Runtime *runtime,
                                       uint16_t address,
                                       uint8_t value) {
    SCAudioTransportState *state;
    SCAudioUploadBlock *block;
    uint8_t bit;
    int new_block;
    if (!runtime) return;
    state = &runtime->audio_transport;
    if (!state->upload_handshake_started || state->upload_complete) return;

    new_block = !state->last_upload_address_valid ||
        address != (uint16_t)(state->last_upload_address + 1u);
    if (new_block) {
        if (state->upload_block_count >= SC_AUDIO_UPLOAD_MAX_BLOCKS) {
            (void)transport_fail(runtime, "initial S-SMP upload exceeded the static block ledger");
            return;
        }
        block = &state->blocks[state->upload_block_count++];
        memset(block, 0, sizeof(*block));
        block->destination = address;
        block->final_address = address;
        block->source_cpu_address = state->last_cpu_access_address;
        block->first_master_clock = runtime->scheduler.master_clock;
        block->payload_fnv1a = UINT64_C(1469598103934665603);
    }
    block = &state->blocks[state->upload_block_count - 1u];
    block->final_address = address;
    block->write_count++;
    block->last_master_clock = runtime->scheduler.master_clock;
    block->payload_fnv1a ^= value;
    block->payload_fnv1a *= UINT64_C(1099511628211);

    bit = (uint8_t)(1u << (address & 7u));
    if ((state->reconstructed_mask[address >> 3] & bit) == 0u) {
        state->reconstructed_mask[address >> 3] |= bit;
        state->upload_unique_byte_count++;
        block->unique_byte_count++;
    } else {
        state->upload_overlap_writes++;
    }
    state->reconstructed_image[address] = value;
    state->upload_write_count++;
    state->last_upload_address = address;
    state->last_upload_address_valid = 1u;
}

int sc_audio_transport_instruction_begin(SCV11Runtime *runtime, uint16_t pc) {
    SCAudioTransportState *state;
    unsigned address;
    if (!runtime || runtime->route_failed) return 0;
    state = &runtime->audio_transport;
    if (state->upload_complete || !state->upload_handshake_started ||
        state->upload_write_count == 0u)
        return 1;

    /* The boot ROM remains mapped at FFC0-FFFF.  The first native instruction
       outside that range after uploaded bytes is the exact driver entry. */
    if (pc >= 0xffc0u) return 1;

    state->entrypoint = pc;
    state->entry_observed = 1u;
    state->upload_complete = 1u;
    state->upload_complete_master_clock = runtime->scheduler.master_clock;
    for (address = 0u; address < 65536u; ++address) {
        uint8_t bit = (uint8_t)(1u << (address & 7u));
        if ((state->reconstructed_mask[address >> 3] & bit) != 0u &&
            state->reconstructed_image[address] != runtime->machine.aram[address])
            state->upload_verify_mismatches++;
    }
    state->upload_verified = (uint8_t)(state->upload_verify_mismatches == 0u);
    sc_sha256_bytes(state->reconstructed_image,
                    sizeof(state->reconstructed_image), state->image_sha256);
    sc_sha256_bytes(state->reconstructed_mask,
                    sizeof(state->reconstructed_mask), state->mask_sha256);
    runtime->machine.static_ipl_upload_bytes = state->upload_unique_byte_count;
    runtime->machine.static_ipl_upload_blocks = state->upload_block_count;
    runtime->machine.static_ipl_entrypoint = state->entrypoint;
    runtime->machine.static_ipl_upload_complete = state->upload_verified;
    runtime->machine.spc_entry_requested = 1u;
    if (!state->upload_verified)
        return transport_fail(runtime, "reconstructed IPL upload differs from live ARAM at entry");
    return 1;
}
