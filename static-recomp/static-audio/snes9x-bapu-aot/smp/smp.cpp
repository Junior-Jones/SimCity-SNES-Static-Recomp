#include "../static_snes.hpp"
#define SMP_CPP
namespace SC_STATIC_SNES {
SMP smp;
#include "algorithms.cpp"
#include "core.cpp"
#include "iplrom.cpp"
#include "memory.cpp"
#include "timing.cpp"
#ifdef SC_SMP_AOT
bool SMP::sc_aot_fail(uint32 reason,uint16 pc,uint8 expected,uint8 actual){
  if(!sc_aot_failed_value){
    sc_aot_failed_value=1;sc_aot_fail_reason_value=reason;
    sc_aot_fail_pc_value=pc;sc_aot_expected_opcode=expected;
    sc_aot_actual_opcode=actual;
  }
  clock=0;return false;
}
void SMP::sc_aot_reset_metrics(){
  sc_aot_instructions=0;sc_aot_failed_value=0;sc_aot_fail_pc_value=0;
  sc_aot_fail_reason_value=0;sc_aot_expected_opcode=0xff;
  sc_aot_actual_opcode=0xff;
}
#include "sc_smp_aot_lookup.inc"
#endif
void SMP::enter(){
#ifdef SC_SMP_AOT
  if(sc_aot_failed_value){clock=0;return;}
#endif
  while(clock<0){
#ifdef SC_SMP_AOT
    if(sc_aot_failed_value){clock=0;break;}
#endif
    op_step();
  }
}
void SMP::power(){Processor::clock=0;timer0.target=timer1.target=timer2.target=0;reset();}
void SMP::reset(){
#ifdef SC_SMP_AOT
  sc_aot_reset_metrics();
#endif
  for(unsigned n=0;n<=0xffff;n++)apuram[n]=0;
  opcode_number=0;opcode_cycle=0;instruction_count=0;regs.pc=0xffc0;regs.sp=0xef;
  regs.B.a=0;regs.x=0;regs.B.y=0;regs.p=0x02;
  status.iplrom_enable=true;status.dsp_addr=0;status.ram00f8=status.ram00f9=0;
  timer0.enable=timer1.enable=timer2.enable=false;
  timer0.stage1_ticks=timer1.stage1_ticks=timer2.stage1_ticks=0;
  timer0.stage2_ticks=timer1.stage2_ticks=timer2.stage2_ticks=0;
  timer0.stage3_ticks=timer1.stage3_ticks=timer2.stage3_ticks=0;
}
SMP::SMP(){apuram=new uint8[64*1024];}
SMP::~SMP(){delete[] apuram;}
}
