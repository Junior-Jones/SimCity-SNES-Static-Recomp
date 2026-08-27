/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000AF(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02BC8Fu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Fu,2u,0x30u,0xBC91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
