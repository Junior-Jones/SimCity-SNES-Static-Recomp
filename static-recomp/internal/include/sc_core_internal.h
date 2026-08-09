#ifndef SC_CORE_INTERNAL_H
#define SC_CORE_INTERNAL_H

#include <stddef.h>
#include <stdint.h>

#include "sc_machine.h"

#define SC_EXPECTED_RESET_VECTOR 0x8000u

void sc_copy_text(char *out, size_t cap, const char *text);
void sc_sha256_bytes(const unsigned char *data, size_t size, char out_hex[65]);
uint32_t sc_crc32_bytes(const unsigned char *data, size_t size);

#endif
