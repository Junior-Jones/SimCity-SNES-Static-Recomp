#include "SPC_DSP.h"
class DSP : public Processor {
public:
  inline uint8 read(uint8 addr) { synchronize(); return (uint8)spc_dsp.read(addr); }
  inline void synchronize() { if(clock>0){ spc_dsp.run(clock); clock=0; } }
  inline void write(uint8 addr,uint8 data){ synchronize(); spc_dsp.write(addr,data); }
  void power(); void reset();
  DSP();
  SCStaticSPC_DSP spc_dsp;
};
extern DSP dsp;
