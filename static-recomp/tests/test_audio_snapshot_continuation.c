#include "simcity_static_recomp.h"

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

int main(int argc, char **argv) {
    uint8_t *rom = NULL;
    SimCityRecomp *game = NULL;
    SimCityRecompFrameResult frame;
    SimCityRecompAudioStaticStatus status_a, status_b;
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
    if (!simcity_recomp_snapshot_save(game, argv[2], error, sizeof(error))) {
        fprintf(stderr, "snapshot save failed: %s\n", error);
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
    if (!simcity_recomp_audio_static_status(game, &status_a)) goto cleanup;
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
        simcity_recomp_current_frame(game) != frame_a ||
        simcity_recomp_instruction_count(game) != instructions_a ||
        simcity_recomp_master_clock(game) != master_a ||
        count_a != count_b ||
        memcmp(&status_a, &status_b, sizeof(status_a)) != 0 ||
        memcmp(pcm_a, pcm_b, count_a * 2u * sizeof(pcm_a[0])) != 0) {
        fprintf(stderr, "snapshot PCM/state continuation differs\n");
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
    ok = 1;
cleanup:
    if (game) simcity_recomp_destroy(game);
    free(rom);
    (void)remove(argv[2]);
    return ok ? 0 : 1;
}
