/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00067(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x019C9Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019C9Bu,2u,0x30u,0x9C9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019C9Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 81 03 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019C9Du,3u,0x03u,0x9CA0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0381u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CA0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CA0u,1u,0x0Au,0x9CA1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CA1u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CA1u,1u,0xAAu,0x9CA2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CA2u:
    if(m==0u&&x==0u&&e==0u){ /* BF E3 97 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CA2u,4u,0x01u,0x9CA6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0197E3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CA6u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CA6u,2u,0x79u,0x9CA8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CA8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 06 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CA8u,3u,0x06u,0x9CABu);
      sc_v11_op_lda(r,0x0610u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CABu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CABu,2u,0x7Cu,0x9CADu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CADu:
    if(m==0u&&x==0u&&e==0u){ /* AD 81 03 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CADu,3u,0x03u,0x9CB0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0381u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CB0u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CB0u,1u,0xAAu,0x9CB1u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CB1u:
    if(m==0u&&x==0u&&e==0u){ /* BF FB 94 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CB1u,4u,0x01u,0x9CB5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0194FBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CB5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CB5u,3u,0x00u,0x9CB8u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CB8u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CB8u,1u,0xAAu,0x9CB9u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CB9u:
    if(m==0u&&x==0u&&e==0u){ /* BF 8C 97 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CB9u,4u,0x01u,0x9CBDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01978Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CBDu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CBDu,3u,0x00u,0x9CC0u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CC0u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CC0u,1u,0x38u,0x9CC1u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CC1u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CC1u,3u,0x00u,0x9CC4u);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CC4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CC4u,2u,0x7Fu,0x9CC6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CC6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CC6u,3u,0x00u,0x9CC9u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CC9u:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CC9u,2u,0x82u,0x9CCBu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CCBu:
    if(m==0u&&x==0u&&e==0u){ /* A6 79 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CCBu,2u,0x79u,0x9CCDu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CCDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CCDu,2u,0x7Fu,0x9CCFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CCFu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CCFu,1u,0x48u,0x9CD0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CD0u:
    if(m==0u&&x==0u&&e==0u){ /* A4 7C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CD0u,2u,0x7Cu,0x9CD2u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CD2u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 00 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CD2u,4u,0x01u,0x9CD6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x010000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CD6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CD6u,3u,0x00u,0x9CD9u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CD9u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 2C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CD9u,3u,0x2Cu,0x9CDCu);
      sc_v11_op_ora(r,0x2C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CDCu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CDCu,1u,0xDAu,0x9CDDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CDDu:
    if(m==0u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CDDu,1u,0xBBu,0x9CDEu);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CDEu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 38 7E Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CDEu,4u,0x7Eu,0x9CE2u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CE2u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CE2u,1u,0xFAu,0x9CE3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CE3u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CE3u,1u,0xC8u,0x9CE4u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CE4u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CE4u,1u,0xC8u,0x9CE5u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CE5u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CE5u,1u,0xE8u,0x9CE6u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CE6u:
    if(m==0u&&x==0u&&e==0u){ /* C6 7F Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CE6u,2u,0x7Fu,0x9CE8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CE8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 E8 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CE8u,2u,0xE8u,0x9CEAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9CD2u;}
      if(c->pc!=0x9CEAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9CEAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CEAu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CEAu,1u,0x68u,0x9CEBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CEBu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CEBu,2u,0x7Fu,0x9CEDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CEDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 7C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CEDu,2u,0x7Cu,0x9CEFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CEFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CEFu,1u,0x18u,0x9CF0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CF0u:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CF0u,3u,0x00u,0x9CF3u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CF3u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CF3u,2u,0x7Cu,0x9CF5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CF5u:
    if(m==0u&&x==0u&&e==0u){ /* C6 82 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CF5u,2u,0x82u,0x9CF7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x82u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CF7u:
    if(m==0u&&x==0u&&e==0u){ /* D0 D4 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CF7u,2u,0xD4u,0x9CF9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9CCDu;}
      if(c->pc!=0x9CF9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9CF9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019CF9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019CF9u,1u,0x60u,0x9CFAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
