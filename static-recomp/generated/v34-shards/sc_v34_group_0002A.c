/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0002A(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00AB92u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB92u,2u,0x10u,0xAB94u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AB94u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB94u,2u,0x20u,0xAB96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AB96u:
    if(m==0u&&x==1u&&e==0u){ /* AD 91 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB96u,3u,0x0Au,0xAB99u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A91u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AB99u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB99u,2u,0x0Au,0xAB9Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xABA5u;}
      if(c->pc!=0xAB9Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAB9Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABA5u:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABA5u,1u,0x60u,0xABA6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
