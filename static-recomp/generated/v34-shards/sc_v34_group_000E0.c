/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000E0(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x038000u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038000u,2u,0x20u,0x8002u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038002u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038002u,2u,0x10u,0x8004u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038004u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038004u,2u,0x03u,0x8006u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038006u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038006u,1u,0x48u,0x8007u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038007u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038007u,1u,0xABu,0x8008u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038008u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038008u,2u,0x20u,0x800Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03800Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 A7 90 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03800Au,3u,0x90u,0x800Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x800Cu))return 0;c->pc=0x90A7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03800Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 C4 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03800Du,3u,0xC4u,0x8010u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x800Fu))return 0;c->pc=0xC474u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038010u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4B B8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038010u,3u,0xB8u,0x8013u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8012u))return 0;c->pc=0xB84Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038013u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B4 88 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038013u,3u,0x88u,0x8016u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8015u))return 0;c->pc=0x88B4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038016u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038016u,2u,0x30u,0x8018u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038016u,2u,0x30u,0x8018u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038018u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4C 89 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038018u,3u,0x89u,0x801Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x801Au))return 0;c->pc=0x894Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03801Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D 82 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03801Bu,3u,0x82u,0x801Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x801Du))return 0;c->pc=0x821Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03801Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 97 82 Mesen corrected gameplay frame 3274; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03801Eu,3u,0x82u,0x8021u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8020u))return 0;c->pc=0x8297u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038021u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038021u,3u,0xADu,0x8024u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8023u))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038024u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038024u,2u,0x20u,0x8026u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038026u:
    if(m==0u&&x==0u&&e==0u){ /* EE 51 0B Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038026u,3u,0x0Bu,0x8029u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B51u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038029u:
    if(m==0u&&x==0u&&e==0u){ /* AD C7 0D Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038029u,3u,0x0Du,0x802Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03802Cu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03802Cu,1u,0x18u,0x802Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03802Du:
    if(m==0u&&x==0u&&e==0u){ /* 6D C5 0D Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03802Du,3u,0x0Du,0x8030u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038030u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C7 0D Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038030u,3u,0x0Du,0x8033u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038033u:
    if(m==0u&&x==0u&&e==0u){ /* AD 51 0B Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038033u,3u,0x0Bu,0x8036u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038036u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038036u,3u,0x00u,0x8039u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038039u:
    if(m==0u&&x==0u&&e==0u){ /* D0 75 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038039u,2u,0x75u,0x803Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x80B0u;}
      if(c->pc!=0x803Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x803Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03803Bu:
    if(m==0u&&x==0u&&e==0u){ /* EE 55 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03803Bu,3u,0x0Bu,0x803Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B55u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03803Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03803Eu,3u,0x0Bu,0x8041u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038041u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0D 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038041u,3u,0x00u,0x8044u);
      sc_v11_op_compare(r,c->a,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038044u:
    if(m==0u&&x==0u&&e==0u){ /* D0 09 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038044u,2u,0x09u,0x8046u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x804Fu;}
      if(c->pc!=0x8046u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8046u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03804Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 D1 8B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03804Fu,3u,0x8Bu,0x8052u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8051u))return 0;c->pc=0x8BD1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038052u:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038052u,3u,0x0Bu,0x8055u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038055u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038055u,1u,0x38u,0x8056u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038056u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0A 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038056u,3u,0x00u,0x8059u);
      sc_v11_op_sbc(r,0x000Au,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038059u:
    if(m==0u&&x==0u&&e==0u){ /* 8D A9 0D Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038059u,3u,0x0Du,0x805Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DA9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03805Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03805Cu,3u,0x0Bu,0x805Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03805Fu:
    if(m==0u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03805Fu,1u,0x3Au,0x8060u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038060u:
    if(m==0u&&x==0u&&e==0u){ /* 8D AD 0D Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038060u,3u,0x0Du,0x8063u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DADu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038063u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038063u,3u,0x00u,0x8066u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038066u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E7 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038066u,3u,0x0Cu,0x8069u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CE7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038069u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038069u,3u,0xADu,0x806Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x806Bu))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03806Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03806Cu,3u,0x0Bu,0x806Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03806Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03806Fu,3u,0x00u,0x8072u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038072u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038072u,2u,0x1Cu,0x8074u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8090u;}
      if(c->pc!=0x8074u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8074u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038090u:
    if(m==0u&&x==0u&&e==0u){ /* AC 55 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038090u,3u,0x0Bu,0x8093u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038093u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038093u,2u,0x20u,0x8095u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038095u:
    if(m==1u&&x==0u&&e==0u){ /* B9 60 81 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038095u,3u,0x81u,0x8098u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x8160u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038098u:
    if(m==1u&&x==0u&&e==0u){ /* F0 16 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038098u,2u,0x16u,0x809Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x80B0u;}
      if(c->pc!=0x809Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x809Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03809Au:
    if(m==1u&&x==0u&&e==0u){ /* B9 6D 81 Mesen corrected gameplay frame 4957; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03809Au,3u,0x81u,0x809Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x816Du)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03809Du:
    if(m==1u&&x==0u&&e==0u){ /* CD 4D 0B Mesen corrected gameplay frame 4957; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03809Du,3u,0x0Bu,0x80A0u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380A0u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0E Mesen corrected gameplay frame 4957; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380A0u,2u,0x0Eu,0x80A2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x80B0u;}
      if(c->pc!=0x80A2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80A2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380A2u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4D 0B Mesen corrected gameplay frame 4957; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380A2u,3u,0x0Bu,0x80A5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B4Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380A5u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4957; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380A5u,2u,0x20u,0x80A7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380A7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 4957; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380A7u,3u,0x00u,0x80AAu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380AAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4B 0B Mesen corrected gameplay frame 4957; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380AAu,3u,0x0Bu,0x80ADu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380ADu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 4F 0B Mesen corrected gameplay frame 4957; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380ADu,3u,0x0Bu,0x80B0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380B0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380B0u,2u,0x20u,0x80B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380B0u,2u,0x20u,0x80B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380B2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 51 0B Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380B2u,3u,0x0Bu,0x80B5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380B5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380B5u,3u,0x00u,0x80B8u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380B8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380B8u,3u,0x00u,0x80BBu);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380BBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380BBu,2u,0x06u,0x80BDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x80C3u;}
      if(c->pc!=0x80BDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80BDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380BDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 1F 89 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380BDu,3u,0x89u,0x80C0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80BFu))return 0;c->pc=0x891Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380C0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380C0u,3u,0xADu,0x80C3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80C2u))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380C3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F3 88 Mesen corrected gameplay frame 3386; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380C3u,3u,0x88u,0x80C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80C5u))return 0;c->pc=0x88F3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380C6u:
    if(m==1u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380C6u,3u,0xADu,0x80C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80C8u))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380C9u:
    if(m==1u&&x==0u&&e==0u){ /* 20 12 BE Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380C9u,3u,0xBEu,0x80CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80CBu))return 0;c->pc=0xBE12u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380CCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 AD C0 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380CCu,3u,0xC0u,0x80CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80CEu))return 0;c->pc=0xC0ADu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380CFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 C4 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380CFu,3u,0xC4u,0x80D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80D1u))return 0;c->pc=0xC474u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380D2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 00 C5 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380D2u,3u,0xC5u,0x80D5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80D4u))return 0;c->pc=0xC500u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380D5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380D5u,2u,0x20u,0x80D7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380D7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380D7u,2u,0x10u,0x80D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380D9u:
    if(m==1u&&x==0u&&e==0u){ /* AD 93 01 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380D9u,3u,0x01u,0x80DCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0193u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380DCu:
    if(m==1u&&x==0u&&e==0u){ /* C9 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380DCu,2u,0x03u,0x80DEu);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380DEu:
    if(m==1u&&x==0u&&e==0u){ /* F0 F9 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380DEu,2u,0xF9u,0x80E0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x80D9u;}
      if(c->pc!=0x80E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380E0u:
    if(m==1u&&x==0u&&e==0u){ /* AC 93 01 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380E0u,3u,0x01u,0x80E3u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380E3u:
    if(m==1u&&x==0u&&e==0u){ /* B9 7A 81 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380E3u,3u,0x81u,0x80E6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x817Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380E6u:
    if(m==1u&&x==0u&&e==0u){ /* 2D 51 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380E6u,3u,0x0Bu,0x80E9u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380E9u:
    if(m==1u&&x==0u&&e==0u){ /* D0 09 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380E9u,2u,0x09u,0x80EBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x80F4u;}
      if(c->pc!=0x80EBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380EBu:
    if(m==1u&&x==0u&&e==0u){ /* 20 B0 AF Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380EBu,3u,0xAFu,0x80EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EDu))return 0;c->pc=0xAFB0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380EEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 52 B1 Mesen corrected gameplay frame 3388; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380EEu,3u,0xB1u,0x80F1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F0u))return 0;c->pc=0xB152u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380F1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380F1u,3u,0xADu,0x80F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F3u))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380F4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380F4u,2u,0x20u,0x80F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380F6u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380F6u,2u,0x10u,0x80F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380F8u:
    if(m==1u&&x==0u&&e==0u){ /* AC 93 01 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380F8u,3u,0x01u,0x80FBu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380FBu:
    if(m==1u&&x==0u&&e==0u){ /* B9 7E 81 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380FBu,3u,0x81u,0x80FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x817Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0380FEu:
    if(m==1u&&x==0u&&e==0u){ /* 2D 51 0B Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0380FEu,3u,0x0Bu,0x8101u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038101u:
    if(m==1u&&x==0u&&e==0u){ /* D9 82 81 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038101u,3u,0x81u,0x8104u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x8182u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038104u:
    if(m==1u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038104u,2u,0x06u,0x8106u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x810Cu;}
      if(c->pc!=0x8106u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8106u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038106u:
    if(m==1u&&x==0u&&e==0u){ /* 20 11 9C Mesen corrected gameplay frame 4022; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038106u,3u,0x9Cu,0x8109u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8108u))return 0;c->pc=0x9C11u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038109u:
    if(m==1u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 4144; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038109u,3u,0xADu,0x810Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x810Bu))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03810Cu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03810Cu,2u,0x20u,0x810Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03810Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03810Eu,2u,0x10u,0x8110u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038110u:
    if(m==1u&&x==0u&&e==0u){ /* AC 93 01 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038110u,3u,0x01u,0x8113u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038113u:
    if(m==1u&&x==0u&&e==0u){ /* B9 7E 81 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038113u,3u,0x81u,0x8116u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x817Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038116u:
    if(m==1u&&x==0u&&e==0u){ /* 2D 51 0B Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038116u,3u,0x0Bu,0x8119u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038119u:
    if(m==1u&&x==0u&&e==0u){ /* D9 86 81 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038119u,3u,0x81u,0x811Cu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x8186u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03811Cu:
    if(m==1u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03811Cu,2u,0x06u,0x811Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8124u;}
      if(c->pc!=0x811Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x811Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03811Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 8E 9E Mesen corrected gameplay frame 3412; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03811Eu,3u,0x9Eu,0x8121u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8120u))return 0;c->pc=0x9E8Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038121u:
    if(m==1u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038121u,3u,0xADu,0x8124u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8123u))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038124u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038124u,2u,0x20u,0x8126u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038126u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038126u,2u,0x10u,0x8128u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038128u:
    if(m==1u&&x==0u&&e==0u){ /* AC 93 01 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038128u,3u,0x01u,0x812Bu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03812Bu:
    if(m==1u&&x==0u&&e==0u){ /* B9 7E 81 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03812Bu,3u,0x81u,0x812Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x817Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03812Eu:
    if(m==1u&&x==0u&&e==0u){ /* 2D 51 0B Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03812Eu,3u,0x0Bu,0x8131u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038131u:
    if(m==1u&&x==0u&&e==0u){ /* D9 8A 81 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038131u,3u,0x81u,0x8134u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x818Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038134u:
    if(m==1u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038134u,2u,0x06u,0x8136u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x813Cu;}
      if(c->pc!=0x8136u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8136u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038136u:
    if(m==1u&&x==0u&&e==0u){ /* 20 D7 9A Mesen corrected gameplay frame 3572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038136u,3u,0x9Au,0x8139u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8138u))return 0;c->pc=0x9AD7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038139u:
    if(m==1u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038139u,3u,0xADu,0x813Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x813Bu))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03813Cu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03813Cu,2u,0x20u,0x813Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03813Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03813Eu,2u,0x10u,0x8140u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038140u:
    if(m==1u&&x==0u&&e==0u){ /* AC 93 01 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038140u,3u,0x01u,0x8143u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038143u:
    if(m==1u&&x==0u&&e==0u){ /* B9 7E 81 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038143u,3u,0x81u,0x8146u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x817Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038146u:
    if(m==1u&&x==0u&&e==0u){ /* 2D 51 0B Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038146u,3u,0x0Bu,0x8149u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038149u:
    if(m==1u&&x==0u&&e==0u){ /* D9 8E 81 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038149u,3u,0x81u,0x814Cu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x818Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03814Cu:
    if(m==1u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03814Cu,2u,0x06u,0x814Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8154u;}
      if(c->pc!=0x814Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x814Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03814Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 A3 9A Mesen corrected gameplay frame 3868; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03814Eu,3u,0x9Au,0x8151u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8150u))return 0;c->pc=0x9AA3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038151u:
    if(m==1u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3872; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038151u,3u,0xADu,0x8154u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8153u))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038154u:
    if(m==1u&&x==0u&&e==0u){ /* 20 4B B8 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038154u,3u,0xB8u,0x8157u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8156u))return 0;c->pc=0xB84Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038157u:
    if(m==0u&&x==0u&&e==0u){ /* 20 96 81 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038157u,3u,0x81u,0x815Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8159u))return 0;c->pc=0x8196u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03815Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 DF AD Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03815Au,3u,0xADu,0x815Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x815Cu))return 0;c->pc=0xADDFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03815Du:
    if(m==0u&&x==0u&&e==0u){ /* 4C 16 80 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03815Du,3u,0x80u,0x8160u);
      c->pc=0x8016u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038196u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038196u,2u,0x20u,0x8198u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038198u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038198u,1u,0x0Bu,0x8199u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038199u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038199u,1u,0x48u,0x819Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03819Au:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03819Au,1u,0x7Bu,0x819Bu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03819Bu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03819Bu,1u,0x38u,0x819Cu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03819Cu:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03819Cu,3u,0x00u,0x819Fu);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03819Fu:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03819Fu,1u,0x5Bu,0x81A0u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381A0u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381A0u,1u,0x68u,0x81A1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381A1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381A1u,2u,0x30u,0x81A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381A3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8F 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381A3u,3u,0x0Bu,0x81A6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381A6u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381A6u,1u,0x18u,0x81A7u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381A7u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 93 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381A7u,3u,0x0Bu,0x81AAu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B93u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381AAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381AAu,1u,0x0Au,0x81ABu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381ABu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381ABu,1u,0x0Au,0x81ACu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381ACu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381ACu,1u,0x0Au,0x81ADu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381ADu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 8B 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381ADu,3u,0x0Bu,0x81B0u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381B0u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381B0u,2u,0x00u,0x81B2u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381B2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 14 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381B2u,3u,0x00u,0x81B5u);
      sc_v11_op_lda(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381B5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381B5u,2u,0x02u,0x81B7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381B7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381B7u,3u,0xA2u,0x81BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81B9u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381BDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381BDu,2u,0x00u,0x81BFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381BFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D A5 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381BFu,3u,0x0Bu,0x81C2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381C2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381C2u,2u,0x02u,0x81C4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381C4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D A7 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381C4u,3u,0x0Bu,0x81C7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381C7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381C7u,2u,0x00u,0x81C9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381C9u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381C9u,1u,0x38u,0x81CAu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381CAu:
    if(m==0u&&x==0u&&e==0u){ /* ED CD 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381CAu,3u,0x0Bu,0x81CDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BCDu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381CDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D E3 0D Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381CDu,3u,0x0Du,0x81D0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381D0u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381D0u,2u,0x02u,0x81D2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381D2u:
    if(m==0u&&x==0u&&e==0u){ /* ED CF 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381D2u,3u,0x0Bu,0x81D5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BCFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381D5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E5 0D Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381D5u,3u,0x0Du,0x81D8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381D8u:
    if(m==0u&&x==0u&&e==0u){ /* A0 03 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381D8u,3u,0x00u,0x81DBu);
      sc_v11_op_ldy(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381DBu:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381DBu,3u,0x0Bu,0x81DEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381DEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 1A Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381DEu,2u,0x1Au,0x81E0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x81FAu;}
      if(c->pc!=0x81E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x81E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381E0u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381E0u,3u,0x00u,0x81E3u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381E3u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381E3u,3u,0x0Bu,0x81E6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381E6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 D0 07 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381E6u,3u,0x07u,0x81E9u);
      sc_v11_op_compare(r,c->a,0x07D0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0381E9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 2D Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0381E9u,2u,0x2Du,0x81EBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8218u;}
      if(c->pc!=0x81EBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x81EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038218u:
    if(m==0u&&x==0u&&e==0u){ /* 8C EB 0D Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038218u,3u,0x0Du,0x821Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEBu),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03821Bu:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03821Bu,1u,0x2Bu,0x821Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03821Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03821Cu,1u,0x60u,0x821Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03821Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03821Du,2u,0x30u,0x821Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03821Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03821Fu,3u,0x0Eu,0x8222u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E01u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038222u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 15 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038222u,3u,0x0Eu,0x8225u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E15u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038225u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 17 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038225u,3u,0x0Eu,0x8228u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E17u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038228u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8B 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038228u,3u,0x0Bu,0x822Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B8Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03822Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 93 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03822Bu,3u,0x0Bu,0x822Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B93u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03822Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8F 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03822Eu,3u,0x0Bu,0x8231u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B8Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038231u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8D 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038231u,3u,0x0Bu,0x8234u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B8Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038234u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 95 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038234u,3u,0x0Bu,0x8237u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B95u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038237u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 91 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038237u,3u,0x0Bu,0x823Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B91u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03823Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C 03 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03823Au,3u,0x0Eu,0x823Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E03u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03823Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C 05 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03823Du,3u,0x0Eu,0x8240u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E05u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038240u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 07 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038240u,3u,0x0Eu,0x8243u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E07u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038243u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 09 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038243u,3u,0x0Eu,0x8246u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E09u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038246u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 0B 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038246u,3u,0x0Eu,0x8249u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E0Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038249u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 0D 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038249u,3u,0x0Eu,0x824Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E0Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03824Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 0F 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03824Cu,3u,0x0Eu,0x824Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E0Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03824Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 11 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03824Fu,3u,0x0Eu,0x8252u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E11u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038252u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 13 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038252u,3u,0x0Eu,0x8255u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E13u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038255u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 1B 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038255u,3u,0x0Eu,0x8258u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E1Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038258u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 1D 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038258u,3u,0x0Eu,0x825Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E1Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03825Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 1F 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03825Bu,3u,0x0Eu,0x825Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E1Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03825Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 23 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03825Eu,3u,0x0Eu,0x8261u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E23u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038261u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 25 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038261u,3u,0x0Eu,0x8264u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E25u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038264u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 27 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038264u,3u,0x0Eu,0x8267u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E27u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038267u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 29 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038267u,3u,0x0Eu,0x826Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03826Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C 19 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03826Au,3u,0x0Eu,0x826Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E19u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03826Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C A1 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03826Du,3u,0x0Cu,0x8270u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038270u:
    if(m==0u&&x==0u&&e==0u){ /* 9C A3 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038270u,3u,0x0Cu,0x8273u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038273u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 57 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038273u,3u,0x0Cu,0x8276u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C57u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038276u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 59 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038276u,3u,0x0Cu,0x8279u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C59u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038279u:
    if(m==0u&&x==0u&&e==0u){ /* 9C DD 0D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038279u,3u,0x0Du,0x827Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DDDu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03827Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 71 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03827Cu,3u,0x0Cu,0x827Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C71u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03827Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03827Fu,2u,0x20u,0x8281u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038281u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038281u,3u,0x00u,0x8284u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038284u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038284u,3u,0x00u,0x8287u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038287u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 6E B1 7F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038287u,4u,0x7Fu,0x828Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FB16Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03828Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F F4 B2 7F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03828Bu,4u,0x7Fu,0x828Fu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FB2F4u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03828Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03828Fu,1u,0xE8u,0x8290u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038290u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038290u,1u,0xE8u,0x8291u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038291u:
    if(m==0u&&x==0u&&e==0u){ /* E0 86 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038291u,3u,0x01u,0x8294u);
      sc_v11_op_compare(r,c->x,0x0186u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038294u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038294u,2u,0xF1u,0x8296u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8287u;}
      if(c->pc!=0x8296u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8296u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038296u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038296u,1u,0x60u,0x8297u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038297u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038297u,2u,0x20u,0x8299u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038299u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038299u,1u,0x0Bu,0x829Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03829Au:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03829Au,1u,0x48u,0x829Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03829Bu:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03829Bu,1u,0x7Bu,0x829Cu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03829Cu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03829Cu,1u,0x38u,0x829Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03829Du:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03829Du,3u,0x00u,0x82A0u);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382A0u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382A0u,1u,0x5Bu,0x82A1u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382A1u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382A1u,1u,0x68u,0x82A2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382A2u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382A2u,2u,0x00u,0x82A4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382A4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382A4u,2u,0x20u,0x82A6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382A6u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 86 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382A6u,3u,0x0Bu,0x82A9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382A9u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 85 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382A9u,3u,0x0Bu,0x82ACu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382ACu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382ACu,2u,0x20u,0x82AEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382AEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382AEu,3u,0x0Bu,0x82B1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382B1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9E 84 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382B1u,3u,0x84u,0x82B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x82B3u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382B4u:
    if(m==0u&&x==0u&&e==0u){ /* E4 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382B4u,2u,0x00u,0x82B6u);
      sc_v11_op_compare(r,c->x,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382B6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382B6u,2u,0x01u,0x82B8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x82B9u;}
      if(c->pc!=0x82B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x82B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382B9u:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382B9u,2u,0x00u,0x82BBu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382BBu:
    if(m==0u&&x==0u&&e==0u){ /* 8E 49 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382BBu,3u,0x0Bu,0x82BEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B49u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382BEu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382BEu,4u,0x7Fu,0x82C2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382C2u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382C2u,1u,0xE8u,0x82C3u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382C3u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382C3u,1u,0xE8u,0x82C4u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382C4u:
    if(m==0u&&x==0u&&e==0u){ /* 86 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382C4u,2u,0x00u,0x82C6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382C6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 87 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382C6u,3u,0x0Bu,0x82C9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B87u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382C9u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382C9u,3u,0x03u,0x82CCu);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382CCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382CCu,3u,0x0Bu,0x82CFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B89u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382CFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 7F 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382CFu,3u,0x00u,0x82D2u);
      sc_v11_op_compare(r,c->a,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382D2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382D2u,2u,0x05u,0x82D4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x82D9u;}
      if(c->pc!=0x82D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x82D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382D9u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382D9u,1u,0xA8u,0x82DAu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382DAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382DAu,2u,0x20u,0x82DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382DCu:
    if(m==1u&&x==0u&&e==0u){ /* B9 EB 84 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382DCu,3u,0x84u,0x82DFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382DFu:
    if(m==1u&&x==0u&&e==0u){ /* 29 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382DFu,2u,0x01u,0x82E1u);
      sc_v11_op_and(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382E1u:
    if(m==1u&&x==0u&&e==0u){ /* F0 1C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382E1u,2u,0x1Cu,0x82E3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x82FFu;}
      if(c->pc!=0x82E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x82E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382E3u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382E3u,2u,0x20u,0x82E5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382E5u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3F 02 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382E5u,3u,0x02u,0x82E8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382E8u:
    if(m==0u&&x==0u&&e==0u){ /* BF F0 02 7F Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382E8u,4u,0x7Fu,0x82ECu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F02F0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382ECu:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 40 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382ECu,3u,0x40u,0x82EFu);
      sc_v11_op_ora(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382EFu:
    if(m==0u&&x==0u&&e==0u){ /* 9F F0 02 7F Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382EFu,4u,0x7Fu,0x82F3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F02F0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382F3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3F 02 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382F3u,3u,0x02u,0x82F6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x023Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382F6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 ED Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382F6u,2u,0xEDu,0x82F8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x82E5u;}
      if(c->pc!=0x82F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x82F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382F8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382F8u,2u,0x20u,0x82FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382FAu:
    if(m==1u&&x==0u&&e==0u){ /* 20 C5 90 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382FAu,3u,0x90u,0x82FDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x82FCu))return 0;c->pc=0x90C5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382FDu:
    if(m==0u&&x==0u&&e==0u){ /* 80 42 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382FDu,2u,0x42u,0x82FFu);
      if(1){c->pc=0x8341u;}
      if(c->pc!=0x82FFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x82FFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 42 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382FDu,2u,0x42u,0x82FFu);
      if(1){c->pc=0x8341u;}
      if(c->pc!=0x82FFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x82FFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0382FFu:
    if(m==1u&&x==0u&&e==0u){ /* B9 EB 84 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0382FFu,3u,0x84u,0x8302u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038302u:
    if(m==1u&&x==0u&&e==0u){ /* 29 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038302u,2u,0x20u,0x8304u);
      sc_v11_op_and(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038304u:
    if(m==1u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038304u,2u,0x05u,0x8306u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x830Bu;}
      if(c->pc!=0x8306u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8306u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03830Bu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03830Bu,2u,0x20u,0x830Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03830Du:
    if(m==1u&&x==0u&&e==0u){ /* AC 89 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03830Du,3u,0x0Bu,0x8310u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038310u:
    if(m==1u&&x==0u&&e==0u){ /* B9 EB 84 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038310u,3u,0x84u,0x8313u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038313u:
    if(m==1u&&x==0u&&e==0u){ /* 29 40 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038313u,2u,0x40u,0x8315u);
      sc_v11_op_and(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038315u:
    if(m==1u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038315u,2u,0x03u,0x8317u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x831Au;}
      if(c->pc!=0x8317u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8317u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03831Au:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03831Au,2u,0x20u,0x831Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03831Cu:
    if(m==1u&&x==0u&&e==0u){ /* AC 89 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03831Cu,3u,0x0Bu,0x831Fu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03831Fu:
    if(m==1u&&x==0u&&e==0u){ /* B9 EB 84 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03831Fu,3u,0x84u,0x8322u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038322u:
    if(m==1u&&x==0u&&e==0u){ /* 29 10 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038322u,2u,0x10u,0x8324u);
      sc_v11_op_and(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038324u:
    if(m==1u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038324u,2u,0x05u,0x8326u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x832Bu;}
      if(c->pc!=0x8326u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8326u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038326u:
    if(m==1u&&x==0u&&e==0u){ /* 20 DA A7 Mesen corrected gameplay frame 4435; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038326u,3u,0xA7u,0x8329u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8328u))return 0;c->pc=0xA7DAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038329u:
    if(m==0u&&x==0u&&e==0u){ /* 80 13 Mesen corrected gameplay frame 4435; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038329u,2u,0x13u,0x832Bu);
      if(1){c->pc=0x833Eu;}
      if(c->pc!=0x832Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x832Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03832Bu:
    if(m==1u&&x==0u&&e==0u){ /* AC 89 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03832Bu,3u,0x0Bu,0x832Eu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03832Eu:
    if(m==1u&&x==0u&&e==0u){ /* C0 65 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03832Eu,3u,0x03u,0x8331u);
      sc_v11_op_compare(r,c->y,0x0365u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038331u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038331u,2u,0x03u,0x8333u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8336u;}
      if(c->pc!=0x8333u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8333u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038336u:
    if(m==1u&&x==0u&&e==0u){ /* C0 64 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038336u,3u,0x03u,0x8339u);
      sc_v11_op_compare(r,c->y,0x0364u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038339u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038339u,2u,0x03u,0x833Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x833Eu;}
      if(c->pc!=0x833Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x833Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03833Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F9 83 Mesen corrected gameplay frame 4435; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03833Eu,3u,0x83u,0x8341u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8340u))return 0;c->pc=0x83F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F9 83 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03833Eu,3u,0x83u,0x8341u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8340u))return 0;c->pc=0x83F9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038341u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038341u,2u,0x20u,0x8343u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038341u,2u,0x20u,0x8343u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038343u:
    if(m==1u&&x==0u&&e==0u){ /* EE 85 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038343u,3u,0x0Bu,0x8346u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B85u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038346u:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038346u,3u,0x0Bu,0x8349u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038349u:
    if(m==1u&&x==0u&&e==0u){ /* C9 78 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038349u,2u,0x78u,0x834Bu);
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03834Bu:
    if(m==1u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03834Bu,2u,0x03u,0x834Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8350u;}
      if(c->pc!=0x834Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x834Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03834Du:
    if(m==1u&&x==0u&&e==0u){ /* 4C AC 82 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03834Du,3u,0x82u,0x8350u);
      c->pc=0x82ACu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038350u:
    if(m==1u&&x==0u&&e==0u){ /* EE 86 0B Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038350u,3u,0x0Bu,0x8353u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B86u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038353u:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038353u,3u,0x0Bu,0x8356u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038356u:
    if(m==1u&&x==0u&&e==0u){ /* C9 64 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038356u,2u,0x64u,0x8358u);
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038358u:
    if(m==1u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038358u,2u,0x03u,0x835Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x835Du;}
      if(c->pc!=0x835Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x835Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03835Au:
    if(m==1u&&x==0u&&e==0u){ /* 4C A9 82 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03835Au,3u,0x82u,0x835Du);
      c->pc=0x82A9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03835Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03835Du,2u,0x20u,0x835Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03835Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 8D 0B Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03835Fu,3u,0x0Bu,0x8362u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038362u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 73 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038362u,3u,0x0Cu,0x8365u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C73u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038365u:
    if(m==0u&&x==0u&&e==0u){ /* AD 91 0B Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038365u,3u,0x0Bu,0x8368u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B91u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038368u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 75 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038368u,3u,0x0Cu,0x836Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C75u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03836Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 0B Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03836Bu,3u,0x0Bu,0x836Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03836Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 77 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03836Eu,3u,0x0Cu,0x8371u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C77u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038371u:
    if(m==0u&&x==0u&&e==0u){ /* AD 15 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038371u,3u,0x0Eu,0x8374u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038374u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7F 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038374u,3u,0x0Cu,0x8377u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C7Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038377u:
    if(m==0u&&x==0u&&e==0u){ /* AD 17 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038377u,3u,0x0Eu,0x837Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E17u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03837Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 81 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03837Au,3u,0x0Cu,0x837Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C81u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03837Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 19 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03837Du,3u,0x0Eu,0x8380u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E19u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038380u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 83 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038380u,3u,0x0Cu,0x8383u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C83u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038383u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038383u,3u,0x0Eu,0x8386u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E1Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038386u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 79 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038386u,3u,0x0Cu,0x8389u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C79u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038389u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1D 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038389u,3u,0x0Eu,0x838Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E1Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03838Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7B 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03838Cu,3u,0x0Cu,0x838Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C7Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03838Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1F 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03838Fu,3u,0x0Eu,0x8392u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E1Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038392u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7D 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038392u,3u,0x0Cu,0x8395u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C7Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038395u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038395u,1u,0x18u,0x8396u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038396u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 1B 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038396u,3u,0x0Eu,0x8399u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E1Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038399u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 1D 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x038399u,3u,0x0Eu,0x839Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E1Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03839Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 21 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03839Cu,3u,0x0Eu,0x839Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E21u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03839Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03839Fu,3u,0x0Eu,0x83A2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383A2u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383A2u,1u,0x18u,0x83A3u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383A3u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 0F 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383A3u,3u,0x0Eu,0x83A6u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383A6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383A6u,3u,0x0Cu,0x83A9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383A9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383A9u,3u,0x0Eu,0x83ACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383ACu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 87 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383ACu,3u,0x0Cu,0x83AFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C87u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383AFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 09 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383AFu,3u,0x0Eu,0x83B2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E09u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383B2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383B2u,3u,0x0Cu,0x83B5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C89u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383B5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383B5u,3u,0x0Eu,0x83B8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383B8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 8B 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383B8u,3u,0x0Cu,0x83BBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C8Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383BBu:
    if(m==0u&&x==0u&&e==0u){ /* AD A1 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383BBu,3u,0x0Cu,0x83BEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383BEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 8D 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383BEu,3u,0x0Cu,0x83C1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C8Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383C1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383C1u,3u,0x0Eu,0x83C4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383C4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 8F 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383C4u,3u,0x0Cu,0x83C7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C8Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383C7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 11 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383C7u,3u,0x0Eu,0x83CAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383CAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 91 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383CAu,3u,0x0Cu,0x83CDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C91u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383CDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383CDu,3u,0x0Eu,0x83D0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383D0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 93 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383D0u,3u,0x0Cu,0x83D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C93u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383D3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 05 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383D3u,3u,0x0Eu,0x83D6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E05u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383D6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383D6u,3u,0x0Cu,0x83D9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C95u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383D9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 23 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383D9u,3u,0x0Eu,0x83DCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E23u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383DCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383DCu,3u,0x0Cu,0x83DFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C97u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383DFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 25 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383DFu,3u,0x0Eu,0x83E2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E25u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383E2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 99 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383E2u,3u,0x0Cu,0x83E5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C99u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383E5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 27 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383E5u,3u,0x0Eu,0x83E8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E27u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383E8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9B 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383E8u,3u,0x0Cu,0x83EBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C9Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383EBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 29 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383EBu,3u,0x0Eu,0x83EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E29u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383EEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9D 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383EEu,3u,0x0Cu,0x83F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C9Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383F1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0E Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383F1u,3u,0x0Eu,0x83F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E01u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383F4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 0C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383F4u,3u,0x0Cu,0x83F7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C9Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383F7u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383F7u,1u,0x2Bu,0x83F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383F8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383F8u,1u,0x60u,0x83F9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383F9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4435; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383F9u,2u,0x20u,0x83FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383F9u,2u,0x20u,0x83FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383FBu:
    if(m==0u&&x==0u&&e==0u){ /* AC 89 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383FBu,3u,0x0Bu,0x83FEu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0383FEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0383FEu,2u,0x05u,0x8400u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8405u;}
      if(c->pc!=0x8400u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8400u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
