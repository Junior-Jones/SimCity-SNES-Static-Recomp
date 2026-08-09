#ifndef SC_AUDIO_TRANSPORT_H
#define SC_AUDIO_TRANSPORT_H

#include <stdint.h>

#define SC_AUDIO_SCPU_ACCESS_READ 1u
#define SC_AUDIO_SCPU_ACCESS_WRITE 2u
#define SC_AUDIO_UPLOAD_MAX_BLOCKS 128u
#define SC_AUDIO_TRANSPORT_EVENT_CAPACITY 4096u
#define SC_AUDIO_UPLOAD_MASK_BYTES 8192u

typedef struct SCAudioUploadBlock {
    uint16_t destination;
    uint16_t final_address;
    uint32_t write_count;
    uint32_t unique_byte_count;
    uint32_t source_cpu_address;
    uint64_t first_master_clock;
    uint64_t last_master_clock;
    uint64_t payload_fnv1a;
} SCAudioUploadBlock;

typedef struct SCAudioTransportEvent {
    uint64_t master_clock;
    uint32_t cpu_address;
    uint16_t smp_pc;
    uint8_t actor;      /* 1=S-CPU, 2=S-SMP */
    uint8_t direction;  /* 1=read, 2=write */
    uint8_t port;
    uint8_t value;
} SCAudioTransportEvent;

typedef struct SCAudioTransportState {
    uint8_t ready_mask;
    uint8_t upload_handshake_started;
    uint8_t upload_complete;
    uint8_t upload_verified;
    uint8_t entry_observed;
    uint8_t failed;
    uint8_t last_upload_address_valid;
    uint8_t event_overflow;
    uint16_t entrypoint;
    uint16_t last_upload_address;
    uint32_t upload_write_count;
    uint32_t upload_unique_byte_count;
    uint32_t upload_block_count;
    uint32_t upload_overlap_writes;
    uint32_t upload_verify_mismatches;
    uint32_t cpu_access_count;
    uint32_t cpu_read_count;
    uint32_t cpu_write_count;
    uint32_t smp_port_read_count;
    uint32_t smp_port_write_count;
    uint32_t command_event_count;
    uint32_t unmanifested_cpu_accesses;
    uint32_t observed_access_site_mask;
    uint32_t recorded_access_site_mask;
    uint32_t post_upload_cpu_reads;
    uint32_t post_upload_cpu_writes;
    uint32_t post_upload_smp_reads;
    uint32_t post_upload_smp_writes;
    uint32_t last_cpu_access_address;
    uint64_t ready_master_clock;
    uint64_t upload_start_master_clock;
    uint64_t upload_complete_master_clock;
    uint8_t reconstructed_image[65536u];
    uint8_t reconstructed_mask[SC_AUDIO_UPLOAD_MASK_BYTES];
    SCAudioUploadBlock blocks[SC_AUDIO_UPLOAD_MAX_BLOCKS];
    SCAudioTransportEvent events[SC_AUDIO_TRANSPORT_EVENT_CAPACITY];
    char image_sha256[65];
    char mask_sha256[65];
    char error[192];
} SCAudioTransportState;

struct SCV11Runtime;

void sc_audio_transport_power_on(struct SCV11Runtime *runtime);
int sc_audio_transport_cpu_access(struct SCV11Runtime *runtime,
                                  uint8_t direction,
                                  unsigned port,
                                  uint8_t value);
void sc_audio_transport_smp_port_access(struct SCV11Runtime *runtime,
                                        uint8_t direction,
                                        unsigned port,
                                        uint8_t value);
void sc_audio_transport_smp_aram_write(struct SCV11Runtime *runtime,
                                       uint16_t address,
                                       uint8_t value);
int sc_audio_transport_instruction_begin(struct SCV11Runtime *runtime,
                                         uint16_t pc);

#endif
