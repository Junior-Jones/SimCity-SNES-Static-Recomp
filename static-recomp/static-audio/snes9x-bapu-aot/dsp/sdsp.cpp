#include "../sc_static_apu.h"
#include "../static_snes.hpp"
#define DSP_CPP
SCStaticDspSettings SCStaticSettings;
namespace SC_STATIC_SNES {
DSP dsp;
#include "SPC_DSP.cpp"

void SCStaticSPC_DSP::run(int clocks_remain){
  require(clocks_remain>0);
  while(clocks_remain-- > 0){
    const uint8_t phase=(uint8_t)m.phase;
    ::sc_static_sdsp_primitive_step(phase);
    switch(phase){
      case 0: sc_voice_V5(&m.voices[0]); sc_voice_V2(&m.voices[1]); break;
      case 1: sc_voice_V6(&m.voices[0]); sc_voice_V3(&m.voices[1]); break;
      case 2: sc_voice_V7_V4_V1(&m.voices[0]); break;
      case 3: sc_voice_V8_V5_V2(&m.voices[0]); break;
      case 4: sc_voice_V9_V6_V3(&m.voices[0]); break;
      case 5: sc_voice_V7_V4_V1(&m.voices[1]); break;
      case 6: sc_voice_V8_V5_V2(&m.voices[1]); break;
      case 7: sc_voice_V9_V6_V3(&m.voices[1]); break;
      case 8: sc_voice_V7_V4_V1(&m.voices[2]); break;
      case 9: sc_voice_V8_V5_V2(&m.voices[2]); break;
      case 10: sc_voice_V9_V6_V3(&m.voices[2]); break;
      case 11: sc_voice_V7_V4_V1(&m.voices[3]); break;
      case 12: sc_voice_V8_V5_V2(&m.voices[3]); break;
      case 13: sc_voice_V9_V6_V3(&m.voices[3]); break;
      case 14: sc_voice_V7_V4_V1(&m.voices[4]); break;
      case 15: sc_voice_V8_V5_V2(&m.voices[4]); break;
      case 16: sc_voice_V9_V6_V3(&m.voices[4]); break;
      case 17: sc_voice_V1(&m.voices[0]); sc_voice_V7(&m.voices[5]); sc_voice_V4(&m.voices[6]); break;
      case 18: sc_voice_V8_V5_V2(&m.voices[5]); break;
      case 19: sc_voice_V9_V6_V3(&m.voices[5]); break;
      case 20: sc_voice_V1(&m.voices[1]); sc_voice_V7(&m.voices[6]); sc_voice_V4(&m.voices[7]); break;
      case 21: sc_voice_V8(&m.voices[6]); sc_voice_V5(&m.voices[7]); sc_voice_V2(&m.voices[0]); break;
      case 22: sc_voice_V3a(&m.voices[0]); sc_voice_V9(&m.voices[6]); sc_voice_V6(&m.voices[7]); sc_echo_22(); break;
      case 23: sc_voice_V7(&m.voices[7]); sc_echo_23(); break;
      case 24: sc_voice_V8(&m.voices[7]); sc_echo_24(); break;
      case 25: sc_voice_V3b(&m.voices[0]); sc_voice_V9(&m.voices[7]); sc_echo_25(); break;
      case 26: sc_echo_26(); break;
      case 27: sc_misc_27(); sc_echo_27(); break;
      case 28: sc_misc_28(); sc_echo_28(); break;
      case 29: sc_misc_29(); sc_echo_29(); break;
      case 30: sc_misc_30(); sc_voice_V3c(&m.voices[0]); sc_echo_30(); break;
      case 31: sc_voice_V4(&m.voices[0]); sc_voice_V1(&m.voices[2]); break;
      default: break;
    }
    m.phase=(phase+1u)&31u;
  }
}
void DSP::power(){ spc_dsp.init(smp.apuram); spc_dsp.reset(); clock=0; }
void DSP::reset(){ spc_dsp.soft_reset(); clock=0; }
DSP::DSP(){ clock=0; }
}
