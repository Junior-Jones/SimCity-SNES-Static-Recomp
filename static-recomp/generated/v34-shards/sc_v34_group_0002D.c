/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0002D(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00B502u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B502u,2u,0x30u,0xB504u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B504u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8D 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B504u,3u,0x0Au,0xB507u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B507u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B507u,2u,0x01u,0xB509u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB50Au;}
      if(c->pc!=0xB509u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB509u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B509u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B509u,1u,0x60u,0xB50Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B743u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B743u,2u,0x20u,0xB745u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B745u:
    if(m==0u&&x==0u&&e==0u){ /* A5 40 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B745u,2u,0x40u,0xB747u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x40u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B747u:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B747u,3u,0x00u,0xB74Au);
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B74Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B74Au,2u,0x0Cu,0xB74Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB758u;}
      if(c->pc!=0xB74Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB74Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B74Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 40 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B74Cu,2u,0x40u,0xB74Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x40u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B74Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B74Eu,3u,0x00u,0xB751u);
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B751u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B751u,2u,0x05u,0xB753u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB758u;}
      if(c->pc!=0xB753u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB753u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B753u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B753u,3u,0x0Au,0xB756u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B756u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B756u,2u,0x01u,0xB758u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB759u;}
      if(c->pc!=0xB758u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB758u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B758u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00B758u,1u,0x60u,0xB759u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
