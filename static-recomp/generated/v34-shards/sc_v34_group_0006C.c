/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0006C(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01B274u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B274u,2u,0x30u,0xB276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B276u:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B276u,3u,0x01u,0xB279u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B279u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B279u,3u,0x01u,0xB27Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B27Cu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B27Cu,1u,0xDAu,0xB27Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B27Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 72 C7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B27Du,3u,0xC7u,0xB280u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB27Fu))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B280u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B280u,1u,0xFAu,0xB281u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B281u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3F 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B281u,3u,0x01u,0xB284u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B284u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 30 7E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B284u,4u,0x7Eu,0xB288u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3040u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B288u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B288u,2u,0xD7u,0xB28Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B28Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B28Au,3u,0x00u,0xB28Du);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B28Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B28Du,2u,0x07u,0xB28Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB296u;}
      if(c->pc!=0xB28Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB28Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B296u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B296u,3u,0x01u,0xB299u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B299u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B299u,1u,0x0Au,0xB29Au);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B29Au:
    if(m==0u&&x==0u&&e==0u){ /* 10 32 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B29Au,2u,0x32u,0xB29Cu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB2CEu;}
      if(c->pc!=0xB29Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB29Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B29Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD D3 01 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B29Cu,3u,0x01u,0xB29Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B29Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B29Fu,1u,0x48u,0xB2A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2A0u:
    if(m==0u&&x==0u&&e==0u){ /* AD D5 01 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2A0u,3u,0x01u,0xB2A3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2A3u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2A3u,1u,0x48u,0xB2A4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2A4u:
    if(m==0u&&x==0u&&e==0u){ /* CE D3 01 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2A4u,3u,0x01u,0xB2A7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D3u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2A7u:
    if(m==0u&&x==0u&&e==0u){ /* CE D5 01 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2A7u,3u,0x01u,0xB2AAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D5u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2AAu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AAu,1u,0xDAu,0xB2ABu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2ABu:
    if(m==0u&&x==0u&&e==0u){ /* 20 72 C7 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2ABu,3u,0xC7u,0xB2AEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2ADu))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2AEu:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AEu,1u,0xFAu,0xB2AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2AFu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AFu,1u,0x68u,0xB2B0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2B0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 01 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B0u,3u,0x01u,0xB2B3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2B3u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B3u,1u,0x68u,0xB2B4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2B4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 01 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B4u,3u,0x01u,0xB2B7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2B7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 01 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B7u,3u,0x01u,0xB2BAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2BAu:
    if(m==0u&&x==0u&&e==0u){ /* 30 09 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BAu,2u,0x09u,0xB2BCu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB2C5u;}
      if(c->pc!=0xB2BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2BCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 76 13 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BCu,3u,0x13u,0xB2BFu);
      sc_v11_op_lda(r,0x1376u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2BFu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BFu,4u,0x7Eu,0xB2C3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2C3u:
    if(m==0u&&x==0u&&e==0u){ /* 80 10 Mesen corrected gameplay frame 3731; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C3u,2u,0x10u,0xB2C5u);
      if(1){c->pc=0xB2D5u;}
      if(c->pc!=0xB2C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2C5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 03 Mesen corrected gameplay frame 3842; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C5u,3u,0x03u,0xB2C8u);
      sc_v11_op_lda(r,0x0300u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2C8u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 3842; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C8u,4u,0x7Eu,0xB2CCu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2CCu:
    if(m==0u&&x==0u&&e==0u){ /* 80 07 Mesen corrected gameplay frame 3842; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2CCu,2u,0x07u,0xB2CEu);
      if(1){c->pc=0xB2D5u;}
      if(c->pc!=0xB2CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2CEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 3D 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2CEu,3u,0x01u,0xB2D1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2D1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2D1u,4u,0x7Eu,0xB2D5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2D5u:
    if(m==0u&&x==0u&&e==0u){ /* EE D3 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2D5u,3u,0x01u,0xB2D8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D3u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2D8u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2D8u,1u,0xE8u,0xB2D9u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2D9u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2D9u,1u,0xE8u,0xB2DAu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2DAu:
    if(m==0u&&x==0u&&e==0u){ /* CE CF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2DAu,3u,0x01u,0xB2DDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01CFu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2DDu:
    if(m==0u&&x==0u&&e==0u){ /* D0 9D Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2DDu,2u,0x9Du,0xB2DFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB27Cu;}
      if(c->pc!=0xB2DFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2DFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2DFu:
    if(m==0u&&x==0u&&e==0u){ /* AD D1 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2DFu,3u,0x01u,0xB2E2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2E2u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2E2u,2u,0x0Fu,0xB2E4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2F3u;}
      if(c->pc!=0xB2E4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2E4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2F3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F3u,1u,0x60u,0xB2F4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B375u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B375u,2u,0x30u,0xB377u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B377u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B377u,3u,0x02u,0xB37Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B37Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B37Au,2u,0x01u,0xB37Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB37Du;}
      if(c->pc!=0xB37Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB37Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B37Du:
    if(m==0u&&x==0u&&e==0u){ /* AE F9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B37Du,3u,0x01u,0xB380u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B380u:
    if(m==0u&&x==0u&&e==0u){ /* BF C0 80 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B380u,4u,0x01u,0xB384u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B384u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B384u,3u,0x00u,0xB387u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B387u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B387u,2u,0x79u,0xB389u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B389u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B389u,3u,0x01u,0xB38Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B38Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B38Cu,1u,0x4Au,0xB38Du);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B38Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B38Du,1u,0x4Au,0xB38Eu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B38Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B38Eu,1u,0x4Au,0xB38Fu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B38Fu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B38Fu,1u,0x18u,0xB390u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B390u:
    if(m==0u&&x==0u&&e==0u){ /* 6D BD 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B390u,3u,0x01u,0xB393u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B393u:
    if(m==0u&&x==0u&&e==0u){ /* 10 0F Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B393u,2u,0x0Fu,0xB395u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB3A4u;}
      if(c->pc!=0xB395u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB395u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3A4u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3A4u,1u,0x18u,0xB3A5u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3A5u:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3A5u,2u,0x79u,0xB3A7u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3A7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3A7u,3u,0x00u,0xB3AAu);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3AAu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3AAu,2u,0x0Au,0xB3ACu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB3B6u;}
      if(c->pc!=0xB3ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3ACu:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3ACu,2u,0x08u,0xB3AEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3B6u;}
      if(c->pc!=0xB3AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3B6u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3B6u,3u,0x01u,0xB3B9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3B9u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3B9u,1u,0x4Au,0xB3BAu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3BAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3BAu,1u,0x4Au,0xB3BBu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3BBu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3BBu,1u,0x4Au,0xB3BCu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3BCu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3BCu,1u,0x18u,0xB3BDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3BDu:
    if(m==0u&&x==0u&&e==0u){ /* 6D BF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3BDu,3u,0x01u,0xB3C0u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3C0u:
    if(m==0u&&x==0u&&e==0u){ /* 10 0E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3C0u,2u,0x0Eu,0xB3C2u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB3D0u;}
      if(c->pc!=0xB3C2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3D0u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3D0u,1u,0x18u,0xB3D1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3D1u:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3D1u,2u,0x79u,0xB3D3u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3D3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3D3u,3u,0x00u,0xB3D6u);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3D6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3D6u,2u,0x0Au,0xB3D8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB3E2u;}
      if(c->pc!=0xB3D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3D8u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3D8u,2u,0x08u,0xB3DAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3E2u;}
      if(c->pc!=0xB3DAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3DAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3E2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E2u,1u,0x60u,0xB3E3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3E7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E7u,2u,0x20u,0xB3E9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3E9u:
    if(m==1u&&x==0u&&e==0u){ /* A5 38 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E9u,2u,0x38u,0xB3EBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x38u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3EBu:
    if(m==1u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3EBu,2u,0x06u,0xB3EDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB3F3u;}
      if(c->pc!=0xB3EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F3u:
    if(m==1u&&x==0u&&e==0u){ /* AD A5 0C Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F3u,3u,0x0Cu,0xB3F6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CA5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F6u:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F6u,1u,0x1Au,0xB3F7u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F7u:
    if(m==1u&&x==0u&&e==0u){ /* 85 03 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F7u,2u,0x03u,0xB3F9u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F9u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F9u,1u,0x60u,0xB3FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
