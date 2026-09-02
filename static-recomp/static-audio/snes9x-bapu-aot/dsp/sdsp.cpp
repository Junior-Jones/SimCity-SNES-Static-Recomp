#include "../sc_static_apu.h"
#include "../static_snes.hpp"
#include <cstring>

namespace SC_STATIC_SNES {
DSP dsp;

uint8 DSP::read(uint8 addr) {
  uint8_t value = 0u;
  synchronize();
  const simcity_dsp_stop_reason stop = simcity_dsp_read_register(&core, addr, &value);
  if (stop != SIMCITY_DSP_STOP_NONE) sc_static_sdsp_report_failure((uint32_t)stop, core.phase);
  return value;
}

void DSP::synchronize() {
  if (clock <= 0) return;
  const simcity_dsp_stop_reason stop = simcity_dsp_step_smp_cycles(&core, (uint32_t)clock);
  if (stop != SIMCITY_DSP_STOP_NONE) sc_static_sdsp_report_failure((uint32_t)stop, core.phase);
  clock = 0;
}

void DSP::write(uint8 addr,uint8 data) {
  synchronize();
  const simcity_dsp_stop_reason stop = simcity_dsp_write_register(&core, addr, data);
  if (stop != SIMCITY_DSP_STOP_NONE) sc_static_sdsp_report_failure((uint32_t)stop, core.phase);
}

void DSP::power() {
  simcity_dsp_power_on(&core, smp.apuram, smp.aram_known);
  clock = 0;
}

void DSP::reset() { power(); }
DSP::DSP() { std::memset(&core, 0, sizeof(core)); clock=0; }
}
