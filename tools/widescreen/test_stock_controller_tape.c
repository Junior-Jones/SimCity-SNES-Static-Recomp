#include "stock_controller_tape.h"
#include <stdio.h>

int main(void) {
    StockControllerTape tape = {0}, loaded = {0};
    uint8_t *bytes = NULL;
    size_t size = 0u;
    int ok = 0;
    tape.start_frame = 90000u;
    for (uint32_t i = 0u; i < 9000u; ++i)
        if (!stock_controller_tape_append(&tape, (uint16_t)((i & 0xfffu) << 4u),
                                          90001u + i)) goto done;
    if (stock_controller_tape_append(&tape, 1u, 99001u) ||
        stock_controller_tape_append(&tape, 0u, 99002u)) goto done;
    bytes = stock_controller_tape_encode(&tape, &size);
    if (!bytes || !stock_controller_tape_decode(&loaded, bytes, size) ||
        loaded.start_frame != tape.start_frame || loaded.frames != tape.frames ||
        memcmp(loaded.input, tape.input, tape.frames * sizeof(*tape.input)) ||
        stock_controller_tape_decode(&loaded, bytes, size - 1u)) goto done;
    bytes[STOCK_TAPE_HEADER] ^= 0x10u;
    if (stock_controller_tape_decode(&loaded, bytes, size)) goto done;
    bytes[STOCK_TAPE_HEADER] ^= 0x11u;
    stock_tape_put32(bytes + 16u, stock_tape_checksum(bytes, size));
    if (stock_controller_tape_decode(&loaded, bytes, size) ||
        loaded.start_frame != tape.start_frame || loaded.frames != tape.frames ||
        memcmp(loaded.input, tape.input, tape.frames * sizeof(*tape.input))) goto done;
    ok = 1;
done:
    free(bytes);
    stock_controller_tape_clear(&loaded);
    stock_controller_tape_clear(&tape);
    puts(ok ? "Controller tape exact round trip and bad-data rejection passed." :
              "Controller tape validation failed.");
    return ok ? 0 : 1;
}
