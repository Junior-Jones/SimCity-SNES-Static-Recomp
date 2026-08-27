/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00026(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0098A0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A0u,2u,0x20u,0x98A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A0u,2u,0x20u,0x98A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098A2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A2u,2u,0x10u,0x98A4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A2u,2u,0x10u,0x98A4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098A4u:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A4u,1u,0xFAu,0x98A5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098A5u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A5u,1u,0x68u,0x98A6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098A6u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A6u,1u,0x48u,0x98A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098A7u:
    if(m==1u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A7u,1u,0x8Bu,0x98A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098A8u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A8u,1u,0x48u,0x98A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098A9u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098A9u,1u,0xABu,0x98AAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098AAu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098AAu,1u,0xE8u,0x98ABu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098ABu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098ABu,2u,0x20u,0x98ADu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098ADu:
    if(m==0u&&x==0u&&e==0u){ /* BD 00 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098ADu,3u,0x00u,0x98B0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098B0u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098B0u,1u,0xE8u,0x98B1u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098B1u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098B1u,1u,0xABu,0x98B2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098B2u:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098B2u,1u,0xDAu,0x98B3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098B3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098B3u,2u,0x30u,0x98B5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098B5u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098B5u,1u,0xAAu,0x98B6u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098B6u:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098B6u,1u,0xEBu,0x98B7u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098B7u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098B7u,3u,0x00u,0x98BAu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0003u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0098BAu:
    if(m==1u&&x==1u&&e==0u){ /* 6B Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0098BAu,1u,0x6Bu,0x98BBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
