#include "simcity_static_recomp.h"
#include "sc_static_apu.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int read_rom(const char *path, uint8_t **rom) {
    FILE *file;
    size_t count;
    *rom = NULL;
    file = fopen(path, "rb");
    if (!file) return 0;
    *rom = (uint8_t *)malloc(SIMCITY_RECOMP_ROM_SIZE);
    if (!*rom) { fclose(file); return 0; }
    count = fread(*rom, 1u, SIMCITY_RECOMP_ROM_SIZE, file);
    if (fclose(file) != 0 || count != SIMCITY_RECOMP_ROM_SIZE) {
        free(*rom); *rom = NULL; return 0;
    }
    return 1;
}

static int check_snapshot_capture(SimCityRecomp *game, const char *path,
                                  const char magic[8], char *error, size_t error_capacity) {
    void *bytes = NULL;
    void *draft = NULL;
    size_t size = 0u, draft_size = 0u;
    FILE *file = NULL;
    int ok = 0;
    if (!simcity_recomp_snapshot_capture(game, &bytes, &size, error, error_capacity) ||
        size < 8u || memcmp(bytes, magic, 8u) != 0 ||
        !simcity_recomp_snapshot_capture_deferred(game, &draft, &draft_size, error, error_capacity) ||
        draft_size != size || memcmp(draft, magic, 8u) == 0 ||
        simcity_recomp_snapshot_seal(draft, draft_size - 1u) ||
        !simcity_recomp_snapshot_seal(draft, draft_size) ||
        simcity_recomp_snapshot_seal(draft, draft_size) ||
        memcmp(bytes, draft, size) != 0 ||
        !simcity_recomp_snapshot_save(game, path, error, error_capacity)) goto done;
    file = fopen(path, "rb");
    if (!file) goto done;
    for (size_t offset = 0u; offset < size;) {
        uint8_t buffer[4096];
        const size_t count = size - offset < sizeof(buffer) ? size - offset : sizeof(buffer);
        if (fread(buffer, 1u, count, file) != count ||
            memcmp(buffer, (const uint8_t *)bytes + offset, count) != 0) goto done;
        offset += count;
    }
    ok = fgetc(file) == EOF && !ferror(file);
done:
    if (file && fclose(file) != 0) ok = 0;
    simcity_recomp_snapshot_release(draft);
    simcity_recomp_snapshot_release(bytes);
    return ok;
}

int main(int argc, char **argv) {
    uint8_t *rom = NULL;
    SimCityRecomp *game = NULL;
    SimCityRecompFrameResult frame;
    SimCityRecompAudioStaticStatus status_a, status_b;
    SCStaticApuStatus trace_a, trace_b;
    int16_t pcm_a[2048 * 2], pcm_b[2048 * 2];
    size_t count_a, count_b;
    uint32_t frame_a;
    uint64_t instructions_a, master_a;
    char error[256] = {0};
    int ok = 0;
    if (argc != 3) {
        fprintf(stderr, "usage: test ROM SNAPSHOT\n");
        return 2;
    }
    (void)remove(argv[2]);
    if (!read_rom(argv[1], &rom) ||
        !simcity_recomp_create(&game, rom, SIMCITY_RECOMP_ROM_SIZE,
                               error, sizeof(error))) {
        fprintf(stderr, "create failed: %s\n", error);
        goto cleanup;
    }
    if (!simcity_recomp_advance_headless(game, 0u, 600u, &frame)) {
        fprintf(stderr, "initial advance failed: %s\n",
                simcity_recomp_last_error(game));
        goto cleanup;
    }
    (void)simcity_recomp_audio_discard(game);
    if (!check_snapshot_capture(game, argv[2], "SCSNAP11", error, sizeof(error))) {
        fprintf(stderr, "ordinary snapshot memory/file parity failed: %s\n", error);
        goto cleanup;
    }
    if (!simcity_recomp_advance_headless(
            game, SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT, 1u, &frame)) {
        fprintf(stderr, "first replay advance failed: %s\n",
                simcity_recomp_last_error(game));
        goto cleanup;
    }
    frame_a = simcity_recomp_current_frame(game);
    instructions_a = simcity_recomp_instruction_count(game);
    master_a = simcity_recomp_master_clock(game);
    if (!simcity_recomp_audio_static_status(game, &status_a) || !sc_static_apu_status(&trace_a)) goto cleanup;
    if (status_a.pcm_unknown_frames != 0u ||
        status_a.pcm_known_frames != status_a.pcm_frames ||
        status_a.pcm_overflows != 0u) {
        fprintf(stderr, "PCM knownness/overflow invariant failed\n");
        goto cleanup;
    }
    count_a = simcity_recomp_audio_available(game);
    if (count_a > 2048u ||
        simcity_recomp_audio_read(game, pcm_a, count_a) != count_a) {
        fprintf(stderr, "first PCM capture failed\n");
        goto cleanup;
    }
    if (!simcity_recomp_snapshot_load(game, argv[2], error, sizeof(error)) ||
        !simcity_recomp_advance_headless(
            game, SIMCITY_INPUT_A | SIMCITY_INPUT_RIGHT, 1u, &frame)) {
        fprintf(stderr, "second replay failed: %s\n", error);
        goto cleanup;
    }
    count_b = simcity_recomp_audio_available(game);
    if (count_b > 2048u ||
        simcity_recomp_audio_read(game, pcm_b, count_b) != count_b ||
        !simcity_recomp_audio_static_status(game, &status_b) ||
        !sc_static_apu_status(&trace_b) ||
        simcity_recomp_current_frame(game) != frame_a ||
        simcity_recomp_instruction_count(game) != instructions_a ||
        simcity_recomp_master_clock(game) != master_a ||
        count_a != count_b ||
        memcmp(&status_a, &status_b, sizeof(status_a)) != 0 ||
        memcmp(pcm_a, pcm_b, count_a * 2u * sizeof(pcm_a[0])) != 0) {
        fprintf(stderr, "snapshot PCM/state continuation differs\n");
        goto cleanup;
    }
    if (trace_a.rendezvous_hash != trace_b.rendezvous_hash ||
        trace_a.sync_calls != trace_b.sync_calls ||
        trace_a.cpu_port_event_count != trace_b.cpu_port_event_count ||
        trace_a.cpu_port_event_hash != trace_b.cpu_port_event_hash ||
        trace_a.clock_remainder != trace_b.clock_remainder) {
        fprintf(stderr, "snapshot audio rendezvous/port trace differs\n");
        goto cleanup;
    }
    {
        FILE *file = fopen(argv[2], "ab");
        if (!file || fputc(0x5a, file) == EOF || fclose(file) != 0) {
            fprintf(stderr, "corruption setup failed\n");
            goto cleanup;
        }
    }
    if (simcity_recomp_snapshot_load(game, argv[2], error, sizeof(error))) {
        fprintf(stderr, "snapshot with trailing data was accepted\n");
        goto cleanup;
    }
    {
        /* Isolate serialization layout from the multi-minute gameplay
           routes while testing an outer World Map tile and overlay work. */
        enum { WX = 240, WY = 200, X = 143, Y = 127 };
        static uint16_t tiles[WX * WY];
        static uint16_t copied[WX * WY + 1u];
        static SimCityRecompStockWorldPower power;
        uint16_t actual = 0u;
        SimCityRecompStockWorldSample sample = {0};
        tiles[0] = 0x0012u;
        tiles[WX - 1u] = 0x0072u;
        tiles[Y * WX + X] = 0x0032u;
        tiles[WX * WY - 1u] = 0x8062u;
        copied[WX * WY] = 0xabbau;
        power.traffic_writes = 123u;
        power.traffic_east = 123u;
        if (!simcity_recomp_stock_world_snapshot_save(game, argv[2], tiles, WX * WY,
                &power, error, sizeof(error)) ||
            !simcity_recomp_stock_world_open_snapshot(game, argv[2], error, sizeof(error)) ||
            !check_snapshot_capture(game, argv[2], "SCWORLD6", error, sizeof(error)) ||
            !simcity_recomp_stock_world_open_snapshot(game, argv[2], error, sizeof(error)) ||
            !simcity_recomp_stock_world_tile(game, X, Y, &actual) || actual != tiles[Y * WX + X] ||
            simcity_recomp_stock_world_copy_tiles(game, NULL, WX * WY) ||
            simcity_recomp_stock_world_copy_tiles(game, copied, WX * WY - 1u) ||
            copied[0] != 0u ||
            !simcity_recomp_stock_world_copy_tiles(game, copied, WX * WY + 1u) ||
            memcmp(tiles, copied, sizeof(tiles)) || copied[WX * WY] != 0xabbau ||
            !simcity_recomp_stock_world_sample(game, X, Y, &sample) ||
            sample.traffic_writes != 123u || sample.traffic_east != 123u) {
            fprintf(stderr, "World Map snapshot memory/file parity failed: %s\n", error);
            goto cleanup;
        }
    }
    ok = 1;
cleanup:
    if (game) simcity_recomp_destroy(game);
    free(rom);
    (void)remove(argv[2]);
    return ok ? 0 : 1;
}
