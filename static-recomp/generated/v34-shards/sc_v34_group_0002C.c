/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0002C(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00B0C1u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B0C1u,2u,0x20u,0xB0C3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B0C3u:
    if(m==0u&&x==1u&&e==0u){ /* AD 8B 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B0C3u,3u,0x0Au,0xB0C6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B0C6u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B0C6u,2u,0x0Au,0xB0C8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB0D2u;}
      if(c->pc!=0xB0C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B0D2u:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B0D2u,1u,0x60u,0xB0D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B1ABu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B1ABu,2u,0x30u,0xB1ADu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B1ADu:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B1ADu,3u,0x0Au,0xB1B0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A93u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B1B0u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B1B0u,2u,0x0Cu,0xB1B2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1BEu;}
      if(c->pc!=0xB1B2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1B2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B1BEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C E9 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B1BEu,3u,0x0Au,0xB1C1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AE9u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B1C1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B1C1u,1u,0x60u,0xB1C2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
