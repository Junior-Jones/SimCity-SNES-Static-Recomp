/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000F9(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03E574u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E574u,1u,0x08u,0xE575u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E574u,1u,0x08u,0xE575u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 Mesen corrected gameplay frame 1020; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E574u,1u,0x08u,0xE575u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E575u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E575u,2u,0x20u,0xE577u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E575u,2u,0x20u,0xE577u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1020; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E575u,2u,0x20u,0xE577u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E577u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E577u,1u,0x48u,0xE578u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 1020; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E577u,1u,0x48u,0xE578u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E578u:
    if(m==1u&&x==0u&&e==0u){ /* A9 06 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E578u,2u,0x06u,0xE57Au);
      sc_v11_op_lda(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 06 Mesen corrected gameplay frame 1020; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E578u,2u,0x06u,0xE57Au);
      sc_v11_op_lda(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E57Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 05 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Au,2u,0x05u,0xE57Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 05 Mesen corrected gameplay frame 1020; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Au,2u,0x05u,0xE57Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E57Cu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Cu,1u,0x68u,0xE57Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1020; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Cu,1u,0x68u,0xE57Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E57Du:
    if(m==1u&&x==0u&&e==0u){ /* 28 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Du,1u,0x28u,0xE57Eu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 1020; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Du,1u,0x28u,0xE57Eu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E57Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Eu,1u,0x60u,0xE57Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Eu,1u,0x60u,0xE57Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1020; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03E57Eu,1u,0x60u,0xE57Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
