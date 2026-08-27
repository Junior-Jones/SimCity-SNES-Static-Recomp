/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0007B(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01EECFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EECFu,2u,0x20u,0xEED1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EED1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EED1u,2u,0x10u,0xEED3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EED3u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EED3u,3u,0x00u,0xEED6u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EED6u:
    if(m==1u&&x==0u&&e==0u){ /* AD F8 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EED6u,3u,0x01u,0xEED9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01F8u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EED9u:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EED9u,2u,0x09u,0xEEDBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEEE4u;}
      if(c->pc!=0xEEDBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEEDBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEE4u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEE4u,1u,0x60u,0xEEE5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF9Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Fu,2u,0x30u,0xEFA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFA1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFA1u,2u,0xD7u,0xEFA3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFA3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFA3u,3u,0x00u,0xEFA6u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFA6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFA6u,2u,0x01u,0xEFA8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEFA9u;}
      if(c->pc!=0xEFA8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEFA8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFA8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFA8u,1u,0x60u,0xEFA9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
