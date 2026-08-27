/* AUTO-GENERATED Version 25 exact frame-wait/caller entry contexts; no opcode decoder. */
#include "sc_v11_runtime.h"
int sc_v26_static_cpu_step(SCV11Runtime*,uint32_t,uint8_t,uint8_t,uint8_t);
int sc_v25_static_cpu_step(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00D2DFu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 REP #$20 */
      SC_STATIC_CONTEXT_BEGIN(address,2u,0x20u,0xD2E1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }break;
  case 0x00D2E1u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 LDA #$0000 */
      SC_STATIC_CONTEXT_BEGIN(address,3u,0x00u,0xD2E4u);
      sc_v11_op_lda(r,0u,16u);if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }break;
  case 0x00D2E4u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 COP #$00 */
      SC_STATIC_CONTEXT_BEGIN(address,2u,0x00u,0xD2E6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr)||!sc_v11_push16(r,0xD2E6u)||!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }break;
  default:break;
  }
  return sc_v26_static_cpu_step(r,address,m,x,e);
}
