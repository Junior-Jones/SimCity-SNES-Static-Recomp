/* AUTO-GENERATED Version 24 exact original caller edge; no opcode decoder. */
#include "sc_v11_runtime.h"
int sc_v25_static_cpu_step(SCV11Runtime*,uint32_t,uint8_t,uint8_t,uint8_t);
int sc_v24_static_cpu_step(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  if(address==0x00D2E6u&&e==0u){
    (void)m;(void)x;
    SC_STATIC_CONTEXT_BEGIN(0x00D2E6u,3u,0xDAu,0xD2E9u);
    sc_v11_scheduler_internal_cycle(r,1u);
    if(!sc_v11_push16(r,0xD2E8u))return 0;
    c->pc=0xDA75u;
    SC_STATIC_CONTEXT_END();
  }
  return sc_v25_static_cpu_step(r,address,m,x,e);
}
