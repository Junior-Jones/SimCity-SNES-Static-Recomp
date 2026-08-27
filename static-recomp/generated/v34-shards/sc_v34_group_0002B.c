/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0002B(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00AE83u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE83u,2u,0x30u,0xAE85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE85u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8F 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE85u,3u,0x0Au,0xAE88u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE88u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE88u,2u,0x01u,0xAE8Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAE8Bu;}
      if(c->pc!=0xAE8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE8Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE8Au,1u,0x60u,0xAE8Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
