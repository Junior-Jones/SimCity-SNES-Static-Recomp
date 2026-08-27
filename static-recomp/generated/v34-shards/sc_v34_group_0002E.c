/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0002E(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00BADAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BADAu,2u,0x30u,0xBADCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BADCu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BADCu,2u,0xD7u,0xBADEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BADEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BADEu,3u,0x00u,0xBAE1u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAE1u:
    if(m==0u&&x==0u&&e==0u){ /* B0 3D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAE1u,2u,0x3Du,0xBAE3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBB20u;}
      if(c->pc!=0xBAE3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAE3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAE3u:
    if(m==0u&&x==0u&&e==0u){ /* AD B7 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAE3u,3u,0x0Au,0xBAE6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAE6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAE6u,2u,0x38u,0xBAE8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBB20u;}
      if(c->pc!=0xBAE8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAE8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB20u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB20u,1u,0x60u,0xBB21u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
