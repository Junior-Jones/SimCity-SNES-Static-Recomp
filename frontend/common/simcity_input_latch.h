#ifndef SIMCITY_INPUT_LATCH_H
#define SIMCITY_INPUT_LATCH_H

#include <stdint.h>

typedef struct SimCityInputLatch {
    uint16_t held;
    uint16_t pending_press;
} SimCityInputLatch;

void simcity_input_latch_reset(SimCityInputLatch *latch);
void simcity_input_latch_press(SimCityInputLatch *latch, uint16_t mask,
                           uint16_t unsampled_opposite_mask, int repeated);
void simcity_input_latch_release(SimCityInputLatch *latch, uint16_t mask);
uint16_t simcity_input_latch_sample(const SimCityInputLatch *latch);
void simcity_input_latch_consume(SimCityInputLatch *latch, uint16_t sampled_mask);

#endif
