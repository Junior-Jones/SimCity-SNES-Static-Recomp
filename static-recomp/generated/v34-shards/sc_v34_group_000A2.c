/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000A2(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02899Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x02899Bu,2u,0x30u,0x899Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02899Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C 63 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x02899Du,3u,0x0Du,0x89A0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289A0u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 61 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289A0u,3u,0x0Du,0x89A3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D61u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289A3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5F 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289A3u,3u,0x0Du,0x89A6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289A6u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289A6u,3u,0x00u,0x89A9u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289A9u:
    if(m==0u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289A9u,1u,0x5Au,0x89AAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289AAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289AAu,2u,0x20u,0x89ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289ACu:
    if(m==1u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289ACu,1u,0x8Bu,0x89ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289ADu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289ADu,2u,0x02u,0x89AFu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289AFu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289AFu,1u,0x48u,0x89B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B0u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B0u,1u,0xABu,0x89B1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B1u:
    if(m==1u&&x==0u&&e==0u){ /* 20 34 8B Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B1u,3u,0x8Bu,0x89B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89B3u))return 0;c->pc=0x8B34u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B4u,2u,0x20u,0x89B6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B6u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B6u,1u,0xABu,0x89B7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B7u:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B7u,1u,0x7Au,0x89B8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B8u:
    if(m==1u&&x==0u&&e==0u){ /* 99 57 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B8u,3u,0x0Du,0x89BBu);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0D57u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289BBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289BBu,2u,0x20u,0x89BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289BDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289BDu,3u,0x0Du,0x89C0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C0u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C0u,1u,0x18u,0x89C1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C1u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C1u,3u,0x00u,0x89C4u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C4u,3u,0x0Du,0x89C7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C7u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C7u,1u,0xC8u,0x89C8u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C8u:
    if(m==0u&&x==0u&&e==0u){ /* C0 08 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C8u,3u,0x00u,0x89CBu);
      sc_v11_op_compare(r,c->y,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289CBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 DC Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289CBu,2u,0xDCu,0x89CDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89A9u;}
      if(c->pc!=0x89CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289CDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9D 90 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289CDu,3u,0x90u,0x89D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89CFu))return 0;c->pc=0x909Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D0u,2u,0x20u,0x89D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 5F 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D2u,3u,0x0Du,0x89D5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D5u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D5u,1u,0x18u,0x89D6u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D6u:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D6u,3u,0x00u,0x89D9u);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D9u,3u,0x0Du,0x89DCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289DCu:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289DCu,3u,0x00u,0x89DFu);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289DFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 C5 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289DFu,2u,0xC5u,0x89E1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89A6u;}
      if(c->pc!=0x89E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289E1u:
    if(m==0u&&x==0u&&e==0u){ /* EE 61 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289E1u,3u,0x0Du,0x89E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0D61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289E4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289E4u,3u,0x0Du,0x89E7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289E7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289E7u,3u,0x00u,0x89EAu);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289EAu:
    if(m==0u&&x==0u&&e==0u){ /* 90 B7 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289EAu,2u,0xB7u,0x89ECu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89A3u;}
      if(c->pc!=0x89ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289ECu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0289ECu,1u,0x60u,0x89EDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B34u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B34u,2u,0x30u,0x8B36u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B36u:
    if(m==0u&&x==0u&&e==0u){ /* AE 63 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B36u,3u,0x0Du,0x8B39u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B39u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B39u,4u,0x7Fu,0x8B3Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B3Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B3Du,3u,0x03u,0x8B40u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B40u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B40u,1u,0xAAu,0x8B41u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B41u:
    if(m==0u&&x==0u&&e==0u){ /* E0 30 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B41u,3u,0x00u,0x8B44u);
      sc_v11_op_compare(r,c->x,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B44u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1F Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B44u,2u,0x1Fu,0x8B46u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8B65u;}
      if(c->pc!=0x8B46u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B46u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B65u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B65u,1u,0xAAu,0x8B66u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B66u:
    if(m==0u&&x==0u&&e==0u){ /* E0 14 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B66u,3u,0x00u,0x8B69u);
      sc_v11_op_compare(r,c->x,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B69u:
    if(m==0u&&x==0u&&e==0u){ /* 90 28 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B69u,2u,0x28u,0x8B6Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8B93u;}
      if(c->pc!=0x8B6Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B6Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B6Bu:
    if(m==0u&&x==0u&&e==0u){ /* E0 26 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B6Bu,3u,0x00u,0x8B6Eu);
      sc_v11_op_compare(r,c->x,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B6Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 23 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B6Eu,2u,0x23u,0x8B70u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8B93u;}
      if(c->pc!=0x8B70u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B70u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B70u:
    if(m==0u&&x==0u&&e==0u){ /* A5 3E Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B70u,2u,0x3Eu,0x8B72u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x3Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B72u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B72u,3u,0x00u,0x8B75u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B75u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1C Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B75u,2u,0x1Cu,0x8B77u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B93u;}
      if(c->pc!=0x8B77u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B77u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B93u:
    if(m==0u&&x==0u&&e==0u){ /* BD 8E 94 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B93u,3u,0x94u,0x8B96u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x948Eu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B96u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x028B96u,1u,0x60u,0x8B97u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
