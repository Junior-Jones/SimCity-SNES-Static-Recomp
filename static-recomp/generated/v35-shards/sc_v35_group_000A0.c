/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000A0(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x028000u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028000u,2u,0x30u,0x8002u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028000u,2u,0x30u,0x8002u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028000u,2u,0x30u,0x8002u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028000u,2u,0x30u,0x8002u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028002u:
    if(m==0u&&x==0u&&e==0u){ /* AD 87 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028002u,3u,0x0Du,0x8005u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D87u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028005u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028005u,2u,0x03u,0x8007u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x800Au;}
      if(c->pc!=0x8007u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8007u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028007u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 62 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028007u,3u,0x84u,0x800Au);
      c->pc=0x8462u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02800Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02800Au,2u,0x30u,0x800Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02800Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02800Cu,1u,0x8Bu,0x800Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02800Du:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02800Du,3u,0x25u,0x8010u);
      sc_v11_op_ldy(r,0x2540u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028010u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028010u,3u,0x89u,0x8013u);
      sc_v11_op_ldx(r,0x8900u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028013u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028013u,3u,0x00u,0x8016u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028016u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028016u,3u,0x05u,0x8019u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x8016u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028019u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028019u,1u,0xABu,0x801Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02801Au:
    if(m==0u&&x==0u&&e==0u){ /* E6 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02801Au,2u,0xC3u,0x801Cu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xC3u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02801Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02801Cu,2u,0xBBu,0x801Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBBu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02801Eu:
    if(m==0u&&x==0u&&e==0u){ /* 09 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02801Eu,3u,0x00u,0x8021u);
      sc_v11_op_ora(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028021u:
    if(m==0u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028021u,2u,0xBBu,0x8023u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028023u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A2 8D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028023u,4u,0x00u,0x8027u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8026u))return 0;
      c->pbr=0x00u;c->pc=0x8DA2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028027u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028027u,3u,0x0Du,0x802Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028027u,3u,0x0Du,0x802Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028027u,3u,0x0Du,0x802Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028027u,3u,0x0Du,0x802Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02802Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C 35 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Au,3u,0x0Bu,0x802Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B35u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 35 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Au,3u,0x0Bu,0x802Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B35u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 35 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Au,3u,0x0Bu,0x802Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B35u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 35 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Au,3u,0x0Bu,0x802Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B35u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02802Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Du,2u,0x20u,0x802Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Du,2u,0x20u,0x802Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Du,2u,0x20u,0x802Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Du,2u,0x20u,0x802Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02802Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Fu,3u,0x00u,0x8032u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02802Fu,3u,0x00u,0x8032u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028032u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028032u,2u,0x00u,0x8034u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8034u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028032u,2u,0x00u,0x8034u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8034u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028034u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028034u,3u,0xA0u,0x8037u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8036u))return 0;c->pc=0xA01Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1D A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028034u,3u,0xA0u,0x8037u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8036u))return 0;c->pc=0xA01Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028037u:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028037u,3u,0x01u,0x803Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028037u,3u,0x01u,0x803Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD FB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028037u,3u,0x01u,0x803Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01FBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD FB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028037u,3u,0x01u,0x803Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01FBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02803Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Au,2u,0x03u,0x803Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x803Fu;}
      if(c->pc!=0x803Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x803Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Au,2u,0x03u,0x803Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x803Fu;}
      if(c->pc!=0x803Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x803Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Au,2u,0x03u,0x803Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x803Fu;}
      if(c->pc!=0x803Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x803Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Au,2u,0x03u,0x803Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x803Fu;}
      if(c->pc!=0x803Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x803Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02803Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 4B 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Cu,3u,0x82u,0x803Fu);
      c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 4B 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Cu,3u,0x82u,0x803Fu);
      c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 4B 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Cu,3u,0x82u,0x803Fu);
      c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 4B 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Cu,3u,0x82u,0x803Fu);
      c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02803Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Fu,3u,0x98u,0x8042u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8041u))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Fu,3u,0x98u,0x8042u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8041u))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Fu,3u,0x98u,0x8042u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8041u))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02803Fu,3u,0x98u,0x8042u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8041u))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028042u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028042u,2u,0x20u,0x8044u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028042u,2u,0x20u,0x8044u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028042u,2u,0x20u,0x8044u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028042u,2u,0x20u,0x8044u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028044u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028044u,3u,0x00u,0x8047u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028044u,3u,0x00u,0x8047u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028047u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028047u,2u,0x00u,0x8049u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8049u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028047u,2u,0x00u,0x8049u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8049u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028049u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028049u,2u,0x30u,0x804Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028049u,2u,0x30u,0x804Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02804Bu:
    if(m==1u&&x==1u&&e==0u){ /* AD 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02804Bu,3u,0x0Du,0x804Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02804Eu:
    if(m==1u&&x==1u&&e==0u){ /* F0 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02804Eu,2u,0x21u,0x8050u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8071u;}
      if(c->pc!=0x8050u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8050u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028050u:
    if(m==1u&&x==1u&&e==0u){ /* E6 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028050u,2u,0xC3u,0x8052u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xC3u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028052u:
    if(m==1u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028052u,3u,0x0Du,0x8055u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028055u:
    if(m==1u&&x==1u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028055u,3u,0x0Du,0x8058u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028058u:
    if(m==1u&&x==1u&&e==0u){ /* 8E 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028058u,3u,0x0Du,0x805Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D49u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02805Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02805Bu,3u,0x0Du,0x805Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02805Eu:
    if(m==1u&&x==1u&&e==0u){ /* 20 F8 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02805Eu,3u,0x87u,0x8061u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8060u))return 0;c->pc=0x87F8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028061u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028061u,2u,0x20u,0x8063u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028061u,2u,0x20u,0x8063u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028061u,2u,0x20u,0x8063u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028061u,2u,0x20u,0x8063u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028063u:
    if(m==1u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028063u,3u,0x0Du,0x8066u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028063u,3u,0x0Du,0x8066u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028066u:
    if(m==1u&&x==0u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028066u,3u,0x0Du,0x8069u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028066u,3u,0x0Du,0x8069u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028069u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028069u,3u,0x0Du,0x806Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D49u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028069u,3u,0x0Du,0x806Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D49u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02806Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02806Cu,3u,0x0Du,0x806Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02806Cu,3u,0x0Du,0x806Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02806Fu:
    if(m==1u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02806Fu,2u,0x03u,0x8071u);
      if(1){c->pc=0x8074u;}
      if(c->pc!=0x8071u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8071u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02806Fu,2u,0x03u,0x8071u);
      if(1){c->pc=0x8074u;}
      if(c->pc!=0x8071u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8071u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028071u:
    if(m==1u&&x==1u&&e==0u){ /* 20 F1 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028071u,3u,0x87u,0x8074u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8073u))return 0;c->pc=0x87F1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028074u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028074u,2u,0x20u,0x8076u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028074u,2u,0x20u,0x8076u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028074u,2u,0x20u,0x8076u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028074u,2u,0x20u,0x8076u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028076u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028076u,2u,0x20u,0x8078u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028076u,2u,0x20u,0x8078u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028078u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028078u,2u,0xB3u,0x807Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028078u,2u,0xB3u,0x807Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02807Au:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02807Au,2u,0x7Fu,0x807Cu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02807Au,2u,0x7Fu,0x807Cu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02807Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02807Cu,2u,0xB1u,0x807Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02807Cu,2u,0xB1u,0x807Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02807Eu:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02807Eu,4u,0x00u,0x8082u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8081u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02807Eu,4u,0x00u,0x8082u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8081u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028082u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028082u,3u,0x21u,0x8085u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028082u,3u,0x21u,0x8085u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028082u,3u,0x21u,0x8085u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028082u,3u,0x21u,0x8085u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028085u:
    if(m==0u&&x==0u&&e==0u){ /* A9 60 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028085u,3u,0x8Du,0x8088u);
      sc_v11_op_lda(r,0x8D60u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 60 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028085u,3u,0x8Du,0x8088u);
      sc_v11_op_lda(r,0x8D60u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028085u,2u,0x60u,0x8087u);
      sc_v11_op_lda(r,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028085u,2u,0x60u,0x8087u);
      sc_v11_op_lda(r,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028087u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028087u,3u,0x21u,0x808Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028087u,3u,0x21u,0x808Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02808Au:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02808Au,2u,0x30u,0x808Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02808Au,2u,0x30u,0x808Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02808Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02808Cu,2u,0x02u,0x808Eu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02808Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02808Eu,1u,0x0Au,0x808Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02808Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02808Fu,1u,0x0Au,0x8090u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028090u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028090u,1u,0x0Au,0x8091u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028091u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028091u,1u,0x0Au,0x8092u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028092u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028092u,1u,0xAAu,0x8093u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028093u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028093u,2u,0x01u,0x8095u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028095u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028095u,3u,0x43u,0x8098u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028098u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028098u,2u,0x18u,0x809Au);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02809Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02809Au,3u,0x43u,0x809Du);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02809Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02809Du,2u,0x00u,0x809Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02809Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02809Fu,3u,0x43u,0x80A2u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280A2u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280A2u,2u,0x80u,0x80A4u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280A4u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280A4u,3u,0x43u,0x80A7u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280A7u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280A7u,2u,0x7Eu,0x80A9u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280A9u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280A9u,3u,0x43u,0x80ACu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280ACu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280ACu,2u,0x00u,0x80AEu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280AEu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280AEu,3u,0x43u,0x80B1u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280B1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280B1u,2u,0x08u,0x80B3u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280B3u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280B3u,3u,0x43u,0x80B6u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280B6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280B6u,2u,0x01u,0x80B8u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280B8u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280B8u,2u,0x02u,0x80BAu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280BAu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280BAu,2u,0x04u,0x80BCu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x80C0u;}
      if(c->pc!=0x80BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280BCu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280BCu,1u,0x0Au,0x80BDu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280BDu:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280BDu,1u,0xCAu,0x80BEu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280BEu:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280BEu,2u,0xFCu,0x80C0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x80BCu;}
      if(c->pc!=0x80C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280C0u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280C0u,3u,0x42u,0x80C3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280C3u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280C3u,4u,0x00u,0x80C7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x80C6u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280C7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280C7u,3u,0x21u,0x80CAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280C7u,3u,0x21u,0x80CAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280C7u,3u,0x21u,0x80CAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280C7u,3u,0x21u,0x80CAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280CAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280CAu,3u,0x8Du,0x80CDu);
      sc_v11_op_lda(r,0x8D64u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 64 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280CAu,3u,0x8Du,0x80CDu);
      sc_v11_op_lda(r,0x8D64u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280CAu,2u,0x64u,0x80CCu);
      sc_v11_op_lda(r,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280CAu,2u,0x64u,0x80CCu);
      sc_v11_op_lda(r,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280CCu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280CCu,3u,0x21u,0x80CFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280CCu,3u,0x21u,0x80CFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280CFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280CFu,2u,0x30u,0x80D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280CFu,2u,0x30u,0x80D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280D1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280D1u,2u,0x02u,0x80D3u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280D3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280D3u,1u,0x0Au,0x80D4u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280D4u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280D4u,1u,0x0Au,0x80D5u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280D5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280D5u,1u,0x0Au,0x80D6u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280D6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280D6u,1u,0x0Au,0x80D7u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280D7u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280D7u,1u,0xAAu,0x80D8u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280D8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280D8u,2u,0x01u,0x80DAu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280DAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280DAu,3u,0x43u,0x80DDu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280DDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280DDu,2u,0x18u,0x80DFu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280DFu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280DFu,3u,0x43u,0x80E2u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280E2u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280E2u,2u,0x00u,0x80E4u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280E4u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280E4u,3u,0x43u,0x80E7u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280E7u:
    if(m==1u&&x==1u&&e==0u){ /* A9 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280E7u,2u,0x88u,0x80E9u);
      sc_v11_op_lda(r,0x0088u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280E9u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280E9u,3u,0x43u,0x80ECu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280ECu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280ECu,2u,0x7Eu,0x80EEu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280EEu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280EEu,3u,0x43u,0x80F1u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280F1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280F1u,2u,0x00u,0x80F3u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280F3u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280F3u,3u,0x43u,0x80F6u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280F6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280F6u,2u,0x08u,0x80F8u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280F8u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280F8u,3u,0x43u,0x80FBu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280FBu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280FBu,2u,0x01u,0x80FDu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280FDu:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280FDu,2u,0x02u,0x80FFu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0280FFu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0280FFu,2u,0x04u,0x8101u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8105u;}
      if(c->pc!=0x8101u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8101u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028101u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028101u,1u,0x0Au,0x8102u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028102u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028102u,1u,0xCAu,0x8103u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028103u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028103u,2u,0xFCu,0x8105u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8101u;}
      if(c->pc!=0x8105u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8105u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028105u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028105u,3u,0x42u,0x8108u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028108u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028108u,4u,0x00u,0x810Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x810Bu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02810Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02810Cu,3u,0x21u,0x810Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02810Cu,3u,0x21u,0x810Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02810Cu,3u,0x21u,0x810Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02810Cu,3u,0x21u,0x810Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02810Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 68 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02810Fu,3u,0x8Du,0x8112u);
      sc_v11_op_lda(r,0x8D68u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 68 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02810Fu,3u,0x8Du,0x8112u);
      sc_v11_op_lda(r,0x8D68u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02810Fu,2u,0x68u,0x8111u);
      sc_v11_op_lda(r,0x0068u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02810Fu,2u,0x68u,0x8111u);
      sc_v11_op_lda(r,0x0068u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028111u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028111u,3u,0x21u,0x8114u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028111u,3u,0x21u,0x8114u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028114u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028114u,2u,0x30u,0x8116u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028114u,2u,0x30u,0x8116u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028116u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028116u,2u,0x02u,0x8118u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028118u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028118u,1u,0x0Au,0x8119u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028119u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028119u,1u,0x0Au,0x811Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02811Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02811Au,1u,0x0Au,0x811Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02811Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02811Bu,1u,0x0Au,0x811Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02811Cu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02811Cu,1u,0xAAu,0x811Du);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02811Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02811Du,2u,0x01u,0x811Fu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02811Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02811Fu,3u,0x43u,0x8122u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028122u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028122u,2u,0x18u,0x8124u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028124u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028124u,3u,0x43u,0x8127u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028127u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028127u,2u,0x00u,0x8129u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028129u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028129u,3u,0x43u,0x812Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02812Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02812Cu,2u,0x90u,0x812Eu);
      sc_v11_op_lda(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02812Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02812Eu,3u,0x43u,0x8131u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028131u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028131u,2u,0x7Eu,0x8133u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028133u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028133u,3u,0x43u,0x8136u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028136u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028136u,2u,0x00u,0x8138u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028138u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028138u,3u,0x43u,0x813Bu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02813Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02813Bu,2u,0x08u,0x813Du);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02813Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02813Du,3u,0x43u,0x8140u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028140u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028140u,2u,0x01u,0x8142u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028142u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028142u,2u,0x02u,0x8144u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028144u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028144u,2u,0x04u,0x8146u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x814Au;}
      if(c->pc!=0x8146u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8146u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028146u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028146u,1u,0x0Au,0x8147u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028147u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028147u,1u,0xCAu,0x8148u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028148u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028148u,2u,0xFCu,0x814Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8146u;}
      if(c->pc!=0x814Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x814Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02814Au:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02814Au,3u,0x42u,0x814Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02814Du:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02814Du,4u,0x00u,0x8151u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8150u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028151u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028151u,3u,0x21u,0x8154u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028151u,3u,0x21u,0x8154u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028151u,3u,0x21u,0x8154u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028151u,3u,0x21u,0x8154u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028154u:
    if(m==0u&&x==0u&&e==0u){ /* A9 6C 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028154u,3u,0x8Du,0x8157u);
      sc_v11_op_lda(r,0x8D6Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 6C 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028154u,3u,0x8Du,0x8157u);
      sc_v11_op_lda(r,0x8D6Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028154u,2u,0x6Cu,0x8156u);
      sc_v11_op_lda(r,0x006Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028154u,2u,0x6Cu,0x8156u);
      sc_v11_op_lda(r,0x006Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028156u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028156u,3u,0x21u,0x8159u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028156u,3u,0x21u,0x8159u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028159u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028159u,2u,0x30u,0x815Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028159u,2u,0x30u,0x815Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02815Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02815Bu,2u,0x02u,0x815Du);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02815Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02815Du,1u,0x0Au,0x815Eu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02815Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02815Eu,1u,0x0Au,0x815Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02815Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02815Fu,1u,0x0Au,0x8160u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028160u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028160u,1u,0x0Au,0x8161u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028161u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028161u,1u,0xAAu,0x8162u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028162u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028162u,2u,0x01u,0x8164u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028164u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028164u,3u,0x43u,0x8167u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028167u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028167u,2u,0x18u,0x8169u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028169u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028169u,3u,0x43u,0x816Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02816Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02816Cu,2u,0x00u,0x816Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02816Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02816Eu,3u,0x43u,0x8171u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028171u:
    if(m==1u&&x==1u&&e==0u){ /* A9 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028171u,2u,0x98u,0x8173u);
      sc_v11_op_lda(r,0x0098u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028173u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028173u,3u,0x43u,0x8176u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028176u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028176u,2u,0x7Eu,0x8178u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028178u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028178u,3u,0x43u,0x817Bu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02817Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02817Bu,2u,0x00u,0x817Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02817Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02817Du,3u,0x43u,0x8180u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028180u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028180u,2u,0x08u,0x8182u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028182u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028182u,3u,0x43u,0x8185u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028185u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028185u,2u,0x01u,0x8187u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028187u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028187u,2u,0x02u,0x8189u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028189u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028189u,2u,0x04u,0x818Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x818Fu;}
      if(c->pc!=0x818Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x818Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02818Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02818Bu,1u,0x0Au,0x818Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02818Cu:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02818Cu,1u,0xCAu,0x818Du);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02818Du:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02818Du,2u,0xFCu,0x818Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x818Bu;}
      if(c->pc!=0x818Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x818Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02818Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02818Fu,3u,0x42u,0x8192u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028192u:
    if(m==1u&&x==1u&&e==0u){ /* 20 39 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028192u,3u,0x88u,0x8195u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8194u))return 0;c->pc=0x8839u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028195u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028195u,1u,0x6Bu,0x8196u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028195u,1u,0x6Bu,0x8196u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028195u,1u,0x6Bu,0x8196u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028195u,1u,0x6Bu,0x8196u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028196u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028196u,2u,0x20u,0x8198u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028196u,2u,0x20u,0x8198u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028198u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028198u,3u,0x01u,0x819Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028198u,3u,0x01u,0x819Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02819Bu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02819Bu,1u,0x48u,0x819Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02819Bu,1u,0x48u,0x819Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02819Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02819Cu,3u,0x01u,0x819Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02819Cu,3u,0x01u,0x819Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02819Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02819Fu,1u,0x48u,0x81A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02819Fu,1u,0x48u,0x81A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281A0u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281A0u,3u,0x01u,0x81A3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281A0u,3u,0x01u,0x81A3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281A3u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281A3u,1u,0x48u,0x81A4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281A3u,1u,0x48u,0x81A4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281A4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 AC 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281A4u,3u,0x00u,0x81A7u);
      sc_v11_op_lda(r,0x00ACu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 AC 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281A4u,3u,0x00u,0x81A7u);
      sc_v11_op_lda(r,0x00ACu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281A7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281A7u,3u,0x01u,0x81AAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281A7u,3u,0x01u,0x81AAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281AAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281AAu,3u,0x00u,0x81ADu);
      sc_v11_op_lda(r,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281AAu,3u,0x00u,0x81ADu);
      sc_v11_op_lda(r,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281ADu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281ADu,3u,0x01u,0x81B0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281ADu,3u,0x01u,0x81B0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281B0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B0u,2u,0x20u,0x81B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B0u,2u,0x20u,0x81B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281B2u:
    if(m==1u&&x==0u&&e==0u){ /* AD 6B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B2u,3u,0x04u,0x81B5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x046Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 6B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B2u,3u,0x04u,0x81B5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x046Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281B5u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B5u,1u,0x48u,0x81B6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B5u,1u,0x48u,0x81B6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281B6u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 6B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B6u,3u,0x04u,0x81B9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x046Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 6B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B6u,3u,0x04u,0x81B9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x046Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281B9u:
    if(m==1u&&x==0u&&e==0u){ /* 64 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B9u,2u,0x6Fu,0x81BBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281B9u,2u,0x6Fu,0x81BBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281BBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281BBu,2u,0x20u,0x81BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281BBu,2u,0x20u,0x81BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281BDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281BDu,3u,0x00u,0x81C0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281BDu,3u,0x00u,0x81C0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281C0u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281C0u,2u,0x00u,0x81C2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x81C2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281C0u,2u,0x00u,0x81C2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x81C2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281C2u:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281C2u,3u,0x01u,0x81C5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281C2u,3u,0x01u,0x81C5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281C5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281C5u,2u,0x03u,0x81C7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x81CAu;}
      if(c->pc!=0x81C7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x81C7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281C5u,2u,0x03u,0x81C7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x81CAu;}
      if(c->pc!=0x81C7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x81C7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281C7u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 75 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281C7u,3u,0x83u,0x81CAu);
      c->pc=0x8375u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 75 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281C7u,3u,0x83u,0x81CAu);
      c->pc=0x8375u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281CAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281CAu,2u,0x10u,0x81CCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281CAu,2u,0x10u,0x81CCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281CCu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281CCu,2u,0x20u,0x81CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281CEu:
    if(m==0u&&x==1u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281CEu,3u,0x0Du,0x81D1u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281D1u:
    if(m==0u&&x==1u&&e==0u){ /* BF 4D A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281D1u,4u,0x00u,0x81D5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x00A94Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281D5u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281D5u,3u,0x00u,0x81D8u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281D8u:
    if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281D8u,3u,0x01u,0x81DBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281DBu:
    if(m==0u&&x==1u&&e==0u){ /* 20 89 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281DBu,3u,0x95u,0x81DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81DDu))return 0;c->pc=0x9589u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281DEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A0 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281DEu,3u,0x95u,0x81E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81E0u))return 0;c->pc=0x95A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A0 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281DEu,3u,0x95u,0x81E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81E0u))return 0;c->pc=0x95A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A0 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281DEu,3u,0x95u,0x81E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81E0u))return 0;c->pc=0x95A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A0 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281DEu,3u,0x95u,0x81E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81E0u))return 0;c->pc=0x95A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281E1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E1u,3u,0x87u,0x81E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81E3u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E1u,3u,0x87u,0x81E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81E3u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E1u,3u,0x87u,0x81E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81E3u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E1u,3u,0x87u,0x81E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81E3u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281E4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E4u,2u,0x20u,0x81E6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E4u,2u,0x20u,0x81E6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E4u,2u,0x20u,0x81E6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E4u,2u,0x20u,0x81E6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281E6u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E6u,2u,0x10u,0x81E8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E6u,2u,0x10u,0x81E8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281E8u:
    if(m==1u&&x==0u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281E8u,3u,0x0Du,0x81EBu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281EBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281EBu,2u,0x01u,0x81EDu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281EDu:
    if(m==1u&&x==0u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281EDu,3u,0xA0u,0x81F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81EFu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281F0u:
    if(m==0u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F0u,4u,0x01u,0x81F4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x81F3u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F0u,4u,0x01u,0x81F4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x81F3u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F0u,4u,0x01u,0x81F4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x81F3u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F0u,4u,0x01u,0x81F4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x81F3u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281F4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F4u,2u,0x30u,0x81F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F4u,2u,0x30u,0x81F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F4u,2u,0x30u,0x81F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F4u,2u,0x30u,0x81F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281F6u:
    if(m==1u&&x==1u&&e==0u){ /* 20 EA 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F6u,3u,0x85u,0x81F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81F8u))return 0;c->pc=0x85EAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281F9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F9u,2u,0x20u,0x81FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F9u,2u,0x20u,0x81FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F9u,2u,0x20u,0x81FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281F9u,2u,0x20u,0x81FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281FBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281FBu,3u,0x00u,0x81FEu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281FBu,3u,0x00u,0x81FEu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0281FEu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281FEu,2u,0x00u,0x8200u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8200u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0281FEu,2u,0x00u,0x8200u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8200u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028200u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028200u,2u,0x20u,0x8202u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028200u,2u,0x20u,0x8202u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028202u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028202u,2u,0x10u,0x8204u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028202u,2u,0x10u,0x8204u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028204u:
    if(m==1u&&x==0u&&e==0u){ /* AD 87 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028204u,3u,0x0Du,0x8207u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D87u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028207u:
    if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028207u,2u,0x03u,0x8209u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x820Cu;}
      if(c->pc!=0x8209u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8209u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028209u:
    if(m==1u&&x==0u&&e==0u){ /* 4C 62 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028209u,3u,0x84u,0x820Cu);
      c->pc=0x8462u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02820Cu:
    if(m==1u&&x==0u&&e==0u){ /* AD C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02820Cu,3u,0x0Du,0x820Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DC3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02820Fu:
    if(m==1u&&x==0u&&e==0u){ /* 30 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02820Fu,2u,0x0Bu,0x8211u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x821Cu;}
      if(c->pc!=0x8211u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8211u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028211u:
    if(m==1u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028211u,2u,0x11u,0x8213u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8224u;}
      if(c->pc!=0x8213u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8213u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028213u:
    if(m==1u&&x==0u&&e==0u){ /* 20 E0 A3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028213u,3u,0xA3u,0x8216u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8215u))return 0;c->pc=0xA3E0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028216u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028216u,3u,0xA6u,0x8219u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8218u))return 0;c->pc=0xA651u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028216u,3u,0xA6u,0x8219u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8218u))return 0;c->pc=0xA651u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 51 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028216u,3u,0xA6u,0x8219u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8218u))return 0;c->pc=0xA651u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 51 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028216u,3u,0xA6u,0x8219u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8218u))return 0;c->pc=0xA651u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028219u:
    if(m==0u&&x==0u&&e==0u){ /* 4C F9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028219u,3u,0x81u,0x821Cu);
      c->pc=0x81F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C F9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028219u,3u,0x81u,0x821Cu);
      c->pc=0x81F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C F9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028219u,3u,0x81u,0x821Cu);
      c->pc=0x81F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C F9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028219u,3u,0x81u,0x821Cu);
      c->pc=0x81F9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02821Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02821Cu,2u,0x01u,0x821Eu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02821Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 35 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02821Eu,3u,0x0Bu,0x8221u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B35u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028221u:
    if(m==1u&&x==0u&&e==0u){ /* 4C 23 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028221u,3u,0x84u,0x8224u);
      c->pc=0x8423u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028224u:
    if(m==1u&&x==0u&&e==0u){ /* 20 5A 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028224u,3u,0x98u,0x8227u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8226u))return 0;c->pc=0x985Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028227u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028227u,3u,0x84u,0x822Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8229u))return 0;c->pc=0x84EBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028227u,3u,0x84u,0x822Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8229u))return 0;c->pc=0x84EBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028227u,3u,0x84u,0x822Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8229u))return 0;c->pc=0x84EBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028227u,3u,0x84u,0x822Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8229u))return 0;c->pc=0x84EBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02822Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02822Au,2u,0x20u,0x822Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02822Au,2u,0x20u,0x822Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02822Au,2u,0x20u,0x822Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02822Au,2u,0x20u,0x822Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02822Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02822Cu,3u,0x0Cu,0x822Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02822Cu,3u,0x0Cu,0x822Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02822Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02822Fu,2u,0x03u,0x8231u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8234u;}
      if(c->pc!=0x8231u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8231u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02822Fu,2u,0x03u,0x8231u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8234u;}
      if(c->pc!=0x8231u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8231u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028231u:
    if(m==0u&&x==0u&&e==0u){ /* 20 76 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028231u,3u,0x84u,0x8234u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8233u))return 0;c->pc=0x8476u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 76 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028231u,3u,0x84u,0x8234u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8233u))return 0;c->pc=0x8476u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028234u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028234u,2u,0x20u,0x8236u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028234u,2u,0x20u,0x8236u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028234u,2u,0x20u,0x8236u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028234u,2u,0x20u,0x8236u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028236u:
    if(m==1u&&x==0u&&e==0u){ /* AD 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028236u,3u,0x0Du,0x8239u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D29u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028236u,3u,0x0Du,0x8239u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D29u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028239u:
    if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028239u,2u,0x03u,0x823Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x823Eu;}
      if(c->pc!=0x823Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x823Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028239u,2u,0x03u,0x823Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x823Eu;}
      if(c->pc!=0x823Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x823Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02823Bu:
    if(m==1u&&x==0u&&e==0u){ /* 4C 23 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02823Bu,3u,0x84u,0x823Eu);
      c->pc=0x8423u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 23 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02823Bu,3u,0x84u,0x823Eu);
      c->pc=0x8423u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02823Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02823Eu,3u,0x87u,0x8241u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8240u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02823Eu,3u,0x87u,0x8241u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8240u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028241u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028241u,3u,0x95u,0x8244u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8243u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028241u,3u,0x95u,0x8244u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8243u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028241u,3u,0x95u,0x8244u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8243u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028241u,3u,0x95u,0x8244u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8243u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028244u:
    if(m==0u&&x==0u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028244u,4u,0x00u,0x8248u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8247u))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028244u,4u,0x00u,0x8248u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8247u))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028244u,4u,0x00u,0x8248u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8247u))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028244u,4u,0x00u,0x8248u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8247u))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028248u:
    if(m==0u&&x==0u&&e==0u){ /* 4C F9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028248u,3u,0x81u,0x824Bu);
      c->pc=0x81F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C F9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028248u,3u,0x81u,0x824Bu);
      c->pc=0x81F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C F9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028248u,3u,0x81u,0x824Bu);
      c->pc=0x81F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C F9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028248u,3u,0x81u,0x824Bu);
      c->pc=0x81F9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02824Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F3 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02824Bu,3u,0x98u,0x824Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x98F3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F3 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02824Bu,3u,0x98u,0x824Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x98F3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F3 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02824Bu,3u,0x98u,0x824Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x98F3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F3 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02824Bu,3u,0x98u,0x824Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x98F3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02824Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 0F 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02824Eu,3u,0x99u,0x8251u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8250u))return 0;c->pc=0x990Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0F 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02824Eu,3u,0x99u,0x8251u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8250u))return 0;c->pc=0x990Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 0F 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02824Eu,3u,0x99u,0x8251u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8250u))return 0;c->pc=0x990Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 0F 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02824Eu,3u,0x99u,0x8251u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8250u))return 0;c->pc=0x990Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028251u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028251u,2u,0x20u,0x8253u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028251u,2u,0x20u,0x8253u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028251u,2u,0x20u,0x8253u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028251u,2u,0x20u,0x8253u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028253u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028253u,2u,0xB3u,0x8255u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028253u,2u,0xB3u,0x8255u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028255u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028255u,2u,0x7Fu,0x8257u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028255u,2u,0x7Fu,0x8257u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028257u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028257u,2u,0xB1u,0x8259u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028257u,2u,0xB1u,0x8259u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028259u:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028259u,4u,0x00u,0x825Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x825Cu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028259u,4u,0x00u,0x825Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x825Cu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02825Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02825Du,3u,0x21u,0x8260u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02825Du,3u,0x21u,0x8260u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02825Du,3u,0x21u,0x8260u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02825Du,3u,0x21u,0x8260u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028260u:
    if(m==0u&&x==0u&&e==0u){ /* A9 60 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028260u,3u,0x8Du,0x8263u);
      sc_v11_op_lda(r,0x8D60u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 60 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028260u,3u,0x8Du,0x8263u);
      sc_v11_op_lda(r,0x8D60u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028260u,2u,0x60u,0x8262u);
      sc_v11_op_lda(r,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028260u,2u,0x60u,0x8262u);
      sc_v11_op_lda(r,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028262u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028262u,3u,0x21u,0x8265u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028262u,3u,0x21u,0x8265u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028265u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028265u,2u,0x30u,0x8267u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028265u,2u,0x30u,0x8267u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028267u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028267u,2u,0x02u,0x8269u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028269u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028269u,1u,0x0Au,0x826Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02826Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02826Au,1u,0x0Au,0x826Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02826Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02826Bu,1u,0x0Au,0x826Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02826Cu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02826Cu,1u,0x0Au,0x826Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02826Du:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02826Du,1u,0xAAu,0x826Eu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02826Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02826Eu,2u,0x01u,0x8270u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028270u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028270u,3u,0x43u,0x8273u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028273u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028273u,2u,0x18u,0x8275u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028275u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028275u,3u,0x43u,0x8278u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028278u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028278u,2u,0x00u,0x827Au);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02827Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02827Au,3u,0x43u,0x827Du);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02827Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02827Du,2u,0x80u,0x827Fu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02827Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02827Fu,3u,0x43u,0x8282u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028282u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028282u,2u,0x7Eu,0x8284u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028284u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028284u,3u,0x43u,0x8287u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028287u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028287u,2u,0x00u,0x8289u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028289u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028289u,3u,0x43u,0x828Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02828Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02828Cu,2u,0x08u,0x828Eu);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02828Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02828Eu,3u,0x43u,0x8291u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028291u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028291u,2u,0x01u,0x8293u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028293u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028293u,2u,0x02u,0x8295u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028295u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028295u,2u,0x04u,0x8297u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x829Bu;}
      if(c->pc!=0x8297u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8297u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028297u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028297u,1u,0x0Au,0x8298u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028298u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028298u,1u,0xCAu,0x8299u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028299u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028299u,2u,0xFCu,0x829Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8297u;}
      if(c->pc!=0x829Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x829Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02829Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02829Bu,3u,0x42u,0x829Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02829Eu:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02829Eu,4u,0x00u,0x82A2u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x82A1u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282A2u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A2u,3u,0x21u,0x82A5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A2u,3u,0x21u,0x82A5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A2u,3u,0x21u,0x82A5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A2u,3u,0x21u,0x82A5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282A5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A5u,3u,0x8Du,0x82A8u);
      sc_v11_op_lda(r,0x8D64u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 64 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A5u,3u,0x8Du,0x82A8u);
      sc_v11_op_lda(r,0x8D64u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A5u,2u,0x64u,0x82A7u);
      sc_v11_op_lda(r,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A5u,2u,0x64u,0x82A7u);
      sc_v11_op_lda(r,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282A7u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A7u,3u,0x21u,0x82AAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282A7u,3u,0x21u,0x82AAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282AAu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282AAu,2u,0x30u,0x82ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282AAu,2u,0x30u,0x82ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282ACu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282ACu,2u,0x02u,0x82AEu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282AEu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282AEu,1u,0x0Au,0x82AFu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282AFu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282AFu,1u,0x0Au,0x82B0u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282B0u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282B0u,1u,0x0Au,0x82B1u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282B1u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282B1u,1u,0x0Au,0x82B2u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282B2u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282B2u,1u,0xAAu,0x82B3u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282B3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282B3u,2u,0x01u,0x82B5u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282B5u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282B5u,3u,0x43u,0x82B8u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282B8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282B8u,2u,0x18u,0x82BAu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282BAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282BAu,3u,0x43u,0x82BDu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282BDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282BDu,2u,0x00u,0x82BFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282BFu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282BFu,3u,0x43u,0x82C2u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282C2u:
    if(m==1u&&x==1u&&e==0u){ /* A9 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282C2u,2u,0x88u,0x82C4u);
      sc_v11_op_lda(r,0x0088u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282C4u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282C4u,3u,0x43u,0x82C7u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282C7u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282C7u,2u,0x7Eu,0x82C9u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282C9u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282C9u,3u,0x43u,0x82CCu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282CCu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282CCu,2u,0x00u,0x82CEu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282CEu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282CEu,3u,0x43u,0x82D1u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282D1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282D1u,2u,0x08u,0x82D3u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282D3u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282D3u,3u,0x43u,0x82D6u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282D6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282D6u,2u,0x01u,0x82D8u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282D8u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282D8u,2u,0x02u,0x82DAu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282DAu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282DAu,2u,0x04u,0x82DCu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x82E0u;}
      if(c->pc!=0x82DCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x82DCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282DCu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282DCu,1u,0x0Au,0x82DDu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282DDu:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282DDu,1u,0xCAu,0x82DEu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282DEu:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282DEu,2u,0xFCu,0x82E0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x82DCu;}
      if(c->pc!=0x82E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x82E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282E0u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282E0u,3u,0x42u,0x82E3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282E3u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282E3u,4u,0x00u,0x82E7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x82E6u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282E7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282E7u,3u,0x21u,0x82EAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282E7u,3u,0x21u,0x82EAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282E7u,3u,0x21u,0x82EAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282E7u,3u,0x21u,0x82EAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282EAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 68 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282EAu,3u,0x8Du,0x82EDu);
      sc_v11_op_lda(r,0x8D68u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 68 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282EAu,3u,0x8Du,0x82EDu);
      sc_v11_op_lda(r,0x8D68u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282EAu,2u,0x68u,0x82ECu);
      sc_v11_op_lda(r,0x0068u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282EAu,2u,0x68u,0x82ECu);
      sc_v11_op_lda(r,0x0068u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282ECu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282ECu,3u,0x21u,0x82EFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282ECu,3u,0x21u,0x82EFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282EFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282EFu,2u,0x30u,0x82F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282EFu,2u,0x30u,0x82F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282F1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282F1u,2u,0x02u,0x82F3u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282F3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282F3u,1u,0x0Au,0x82F4u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282F4u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282F4u,1u,0x0Au,0x82F5u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282F5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282F5u,1u,0x0Au,0x82F6u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282F6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282F6u,1u,0x0Au,0x82F7u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282F7u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282F7u,1u,0xAAu,0x82F8u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282F8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282F8u,2u,0x01u,0x82FAu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282FAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282FAu,3u,0x43u,0x82FDu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282FDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282FDu,2u,0x18u,0x82FFu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0282FFu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0282FFu,3u,0x43u,0x8302u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028302u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028302u,2u,0x00u,0x8304u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028304u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028304u,3u,0x43u,0x8307u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028307u:
    if(m==1u&&x==1u&&e==0u){ /* A9 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028307u,2u,0x90u,0x8309u);
      sc_v11_op_lda(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028309u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028309u,3u,0x43u,0x830Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02830Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02830Cu,2u,0x7Eu,0x830Eu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02830Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02830Eu,3u,0x43u,0x8311u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028311u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028311u,2u,0x00u,0x8313u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028313u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028313u,3u,0x43u,0x8316u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028316u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028316u,2u,0x08u,0x8318u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028318u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028318u,3u,0x43u,0x831Bu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02831Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02831Bu,2u,0x01u,0x831Du);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02831Du:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02831Du,2u,0x02u,0x831Fu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02831Fu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02831Fu,2u,0x04u,0x8321u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8325u;}
      if(c->pc!=0x8321u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8321u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028321u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028321u,1u,0x0Au,0x8322u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028322u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028322u,1u,0xCAu,0x8323u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028323u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028323u,2u,0xFCu,0x8325u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8321u;}
      if(c->pc!=0x8325u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8325u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028325u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028325u,3u,0x42u,0x8328u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028328u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028328u,4u,0x00u,0x832Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x832Bu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02832Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02832Cu,3u,0x21u,0x832Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02832Cu,3u,0x21u,0x832Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02832Cu,3u,0x21u,0x832Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02832Cu,3u,0x21u,0x832Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02832Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 6C 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02832Fu,3u,0x8Du,0x8332u);
      sc_v11_op_lda(r,0x8D6Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 6C 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02832Fu,3u,0x8Du,0x8332u);
      sc_v11_op_lda(r,0x8D6Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02832Fu,2u,0x6Cu,0x8331u);
      sc_v11_op_lda(r,0x006Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02832Fu,2u,0x6Cu,0x8331u);
      sc_v11_op_lda(r,0x006Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028331u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028331u,3u,0x21u,0x8334u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028331u,3u,0x21u,0x8334u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028334u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028334u,2u,0x30u,0x8336u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028334u,2u,0x30u,0x8336u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028336u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028336u,2u,0x02u,0x8338u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028338u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028338u,1u,0x0Au,0x8339u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028339u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028339u,1u,0x0Au,0x833Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02833Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02833Au,1u,0x0Au,0x833Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02833Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02833Bu,1u,0x0Au,0x833Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02833Cu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02833Cu,1u,0xAAu,0x833Du);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02833Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02833Du,2u,0x01u,0x833Fu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02833Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02833Fu,3u,0x43u,0x8342u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028342u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028342u,2u,0x18u,0x8344u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028344u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028344u,3u,0x43u,0x8347u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028347u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028347u,2u,0x00u,0x8349u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028349u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028349u,3u,0x43u,0x834Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02834Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02834Cu,2u,0x98u,0x834Eu);
      sc_v11_op_lda(r,0x0098u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02834Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02834Eu,3u,0x43u,0x8351u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028351u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028351u,2u,0x7Eu,0x8353u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028353u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028353u,3u,0x43u,0x8356u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028356u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028356u,2u,0x00u,0x8358u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028358u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028358u,3u,0x43u,0x835Bu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02835Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02835Bu,2u,0x08u,0x835Du);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02835Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02835Du,3u,0x43u,0x8360u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028360u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028360u,2u,0x01u,0x8362u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028362u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028362u,2u,0x02u,0x8364u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028364u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028364u,2u,0x04u,0x8366u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x836Au;}
      if(c->pc!=0x8366u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8366u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028366u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028366u,1u,0x0Au,0x8367u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028367u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028367u,1u,0xCAu,0x8368u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028368u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028368u,2u,0xFCu,0x836Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8366u;}
      if(c->pc!=0x836Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x836Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02836Au:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02836Au,3u,0x42u,0x836Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02836Du:
    if(m==1u&&x==1u&&e==0u){ /* 20 7E 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02836Du,3u,0x88u,0x8370u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x836Fu))return 0;c->pc=0x887Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028370u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028370u,2u,0x20u,0x8372u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028370u,2u,0x20u,0x8372u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028370u,2u,0x20u,0x8372u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028370u,2u,0x20u,0x8372u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028372u:
    if(m==0u&&x==0u&&e==0u){ /* 64 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028372u,2u,0xC3u,0x8374u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028372u,2u,0xC3u,0x8374u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028374u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028374u,1u,0x6Bu,0x8375u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028374u,1u,0x6Bu,0x8375u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028375u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028375u,2u,0x20u,0x8377u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028375u,2u,0x20u,0x8377u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028377u:
    if(m==0u&&x==0u&&e==0u){ /* 64 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028377u,2u,0xE3u,0x8379u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028377u,2u,0xE3u,0x8379u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028379u:
    if(m==0u&&x==0u&&e==0u){ /* A9 46 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028379u,3u,0x00u,0x837Cu);
      sc_v11_op_lda(r,0x0046u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 46 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028379u,3u,0x00u,0x837Cu);
      sc_v11_op_lda(r,0x0046u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02837Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02837Cu,3u,0x01u,0x837Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02837Cu,3u,0x01u,0x837Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02837Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 AC 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02837Fu,3u,0x00u,0x8382u);
      sc_v11_op_lda(r,0x00ACu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 AC 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02837Fu,3u,0x00u,0x8382u);
      sc_v11_op_lda(r,0x00ACu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028382u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028382u,3u,0x01u,0x8385u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028382u,3u,0x01u,0x8385u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028385u:
    if(m==0u&&x==0u&&e==0u){ /* 20 68 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028385u,3u,0xA0u,0x8388u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8387u))return 0;c->pc=0xA068u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 68 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028385u,3u,0xA0u,0x8388u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8387u))return 0;c->pc=0xA068u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028388u:
    if(m==0u&&x==0u&&e==0u){ /* 20 10 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028388u,3u,0x99u,0x838Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x838Au))return 0;c->pc=0x9910u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 10 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028388u,3u,0x99u,0x838Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x838Au))return 0;c->pc=0x9910u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 10 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028388u,3u,0x99u,0x838Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x838Au))return 0;c->pc=0x9910u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 10 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028388u,3u,0x99u,0x838Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x838Au))return 0;c->pc=0x9910u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02838Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02838Bu,2u,0x30u,0x838Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02838Bu,2u,0x30u,0x838Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02838Bu,2u,0x30u,0x838Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02838Bu,2u,0x30u,0x838Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02838Du:
    if(m==1u&&x==1u&&e==0u){ /* A2 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02838Du,2u,0x06u,0x838Fu);
      sc_v11_op_ldx(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02838Fu:
    if(m==1u&&x==1u&&e==0u){ /* AD 25 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02838Fu,3u,0x0Bu,0x8392u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B25u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028392u:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028392u,2u,0x01u,0x8394u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8395u;}
      if(c->pc!=0x8394u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8394u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028394u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028394u,1u,0xE8u,0x8395u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028395u:
    if(m==1u&&x==1u&&e==0u){ /* 8E AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028395u,3u,0x0Du,0x8398u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DAFu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028398u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028398u,3u,0x9Bu,0x839Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x839Au))return 0;c->pc=0x9BB8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02839Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02839Bu,2u,0x20u,0x839Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02839Bu,2u,0x20u,0x839Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02839Bu,2u,0x20u,0x839Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02839Bu,2u,0x20u,0x839Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02839Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02839Du,3u,0x00u,0x83A0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02839Du,3u,0x00u,0x83A0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283A0u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283A0u,2u,0x00u,0x83A2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x83A2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283A0u,2u,0x00u,0x83A2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x83A2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283A2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283A2u,2u,0x20u,0x83A4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283A2u,2u,0x20u,0x83A4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283A4u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283A4u,2u,0x10u,0x83A6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283A4u,2u,0x10u,0x83A6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283A6u:
    if(m==1u&&x==0u&&e==0u){ /* AD 87 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283A6u,3u,0x0Du,0x83A9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D87u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283A9u:
    if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283A9u,2u,0x03u,0x83ABu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83AEu;}
      if(c->pc!=0x83ABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83ABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283ABu:
    if(m==1u&&x==0u&&e==0u){ /* 4C 62 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283ABu,3u,0x84u,0x83AEu);
      c->pc=0x8462u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283AEu:
    if(m==1u&&x==0u&&e==0u){ /* AD C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283AEu,3u,0x0Du,0x83B1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DC3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283B1u:
    if(m==1u&&x==0u&&e==0u){ /* 30 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283B1u,2u,0x0Bu,0x83B3u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x83BEu;}
      if(c->pc!=0x83B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283B3u:
    if(m==1u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283B3u,2u,0x11u,0x83B5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83C6u;}
      if(c->pc!=0x83B5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83B5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283B5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 E0 A3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283B5u,3u,0xA3u,0x83B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83B7u))return 0;c->pc=0xA3E0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283B8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283B8u,3u,0xA6u,0x83BBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83BAu))return 0;c->pc=0xA651u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283B8u,3u,0xA6u,0x83BBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83BAu))return 0;c->pc=0xA651u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 51 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283B8u,3u,0xA6u,0x83BBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83BAu))return 0;c->pc=0xA651u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 51 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283B8u,3u,0xA6u,0x83BBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83BAu))return 0;c->pc=0xA651u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283BBu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 9B 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283BBu,3u,0x83u,0x83BEu);
      c->pc=0x839Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 9B 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283BBu,3u,0x83u,0x83BEu);
      c->pc=0x839Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 9B 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283BBu,3u,0x83u,0x83BEu);
      c->pc=0x839Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 9B 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283BBu,3u,0x83u,0x83BEu);
      c->pc=0x839Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283BEu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283BEu,2u,0x02u,0x83C0u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283C0u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 35 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283C0u,3u,0x0Bu,0x83C3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B35u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283C3u:
    if(m==1u&&x==0u&&e==0u){ /* 4C 23 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283C3u,3u,0x84u,0x83C6u);
      c->pc=0x8423u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283C6u:
    if(m==1u&&x==0u&&e==0u){ /* AD 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283C6u,3u,0x0Cu,0x83C9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C0Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283C9u:
    if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283C9u,2u,0x03u,0x83CBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83CEu;}
      if(c->pc!=0x83CBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83CBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283CBu:
    if(m==1u&&x==0u&&e==0u){ /* 4C 16 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283CBu,3u,0x84u,0x83CEu);
      c->pc=0x8416u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283CEu:
    if(m==1u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283CEu,2u,0xC9u,0x83D0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283D0u:
    if(m==1u&&x==0u&&e==0u){ /* 29 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283D0u,2u,0x40u,0x83D2u);
      sc_v11_op_and(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283D2u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283D2u,2u,0x0Bu,0x83D4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83DFu;}
      if(c->pc!=0x83D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283D4u:
    if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283D4u,1u,0x08u,0x83D5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283D5u:
    if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283D5u,4u,0x00u,0x83D9u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x83D8u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283D9u:
    if(m==0u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283D9u,2u,0x06u,0x83DBu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283D9u,2u,0x06u,0x83DBu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283D9u,2u,0x06u,0x83DBu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283D9u,2u,0x06u,0x83DBu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283DBu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DBu,1u,0x28u,0x83DCu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DBu,1u,0x28u,0x83DCu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DBu,1u,0x28u,0x83DCu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DBu,1u,0x28u,0x83DCu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283DCu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 23 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DCu,3u,0x84u,0x83DFu);
      c->pc=0x8423u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 23 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DCu,3u,0x84u,0x83DFu);
      c->pc=0x8423u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 23 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DCu,3u,0x84u,0x83DFu);
      c->pc=0x8423u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 23 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DCu,3u,0x84u,0x83DFu);
      c->pc=0x8423u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283DFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283DFu,2u,0x20u,0x83E1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283E1u:
    if(m==1u&&x==0u&&e==0u){ /* 24 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283E1u,2u,0xCAu,0x83E3u);
      {uint16_t q=sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xCAu));uint16_t z=(uint16_t)((c->a&0x00FFu)&q);c->p=(uint8_t)(c->p&~(SC_FLAG_N|SC_FLAG_V|SC_FLAG_Z));if(!z)c->p|=SC_FLAG_Z;if(q&0x0080u)c->p|=SC_FLAG_N;if(q&0x0040u)c->p|=SC_FLAG_V;}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283E3u:
    if(m==1u&&x==0u&&e==0u){ /* 10 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283E3u,2u,0x2Eu,0x83E5u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x8413u;}
      if(c->pc!=0x83E5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83E5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283E5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 58 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283E5u,3u,0x99u,0x83E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83E7u))return 0;c->pc=0x9958u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283E8u:
    if(m==0u&&x==0u&&e==0u){ /* B0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283E8u,2u,0x2Cu,0x83EAu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8416u;}
      if(c->pc!=0x83EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283E8u,2u,0x2Cu,0x83EAu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8416u;}
      if(c->pc!=0x83EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283E8u,2u,0x2Cu,0x83EAu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8416u;}
      if(c->pc!=0x83EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283E8u,2u,0x2Cu,0x83EAu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8416u;}
      if(c->pc!=0x83EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283EAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 78 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EAu,3u,0x99u,0x83EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83ECu))return 0;c->pc=0x9978u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 78 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EAu,3u,0x99u,0x83EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83ECu))return 0;c->pc=0x9978u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 78 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EAu,3u,0x99u,0x83EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83ECu))return 0;c->pc=0x9978u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 78 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EAu,3u,0x99u,0x83EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83ECu))return 0;c->pc=0x9978u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283EDu:
    if(m==0u&&x==0u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EDu,2u,0x08u,0x83EFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x83F7u;}
      if(c->pc!=0x83EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EDu,2u,0x08u,0x83EFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x83F7u;}
      if(c->pc!=0x83EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EDu,2u,0x08u,0x83EFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x83F7u;}
      if(c->pc!=0x83EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EDu,2u,0x08u,0x83EFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x83F7u;}
      if(c->pc!=0x83EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283EFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 D5 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EFu,3u,0x99u,0x83F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83F1u))return 0;c->pc=0x99D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D5 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EFu,3u,0x99u,0x83F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83F1u))return 0;c->pc=0x99D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 D5 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EFu,3u,0x99u,0x83F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83F1u))return 0;c->pc=0x99D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D5 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283EFu,3u,0x99u,0x83F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83F1u))return 0;c->pc=0x99D5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283F2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F2u,3u,0x9Bu,0x83F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83F4u))return 0;c->pc=0x9BB8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F2u,3u,0x9Bu,0x83F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83F4u))return 0;c->pc=0x9BB8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F2u,3u,0x9Bu,0x83F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83F4u))return 0;c->pc=0x9BB8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F2u,3u,0x9Bu,0x83F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x83F4u))return 0;c->pc=0x9BB8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283F5u:
    if(m==0u&&x==0u&&e==0u){ /* 80 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F5u,2u,0x1Fu,0x83F7u);
      if(1){c->pc=0x8416u;}
      if(c->pc!=0x83F7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83F7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F5u,2u,0x1Fu,0x83F7u);
      if(1){c->pc=0x8416u;}
      if(c->pc!=0x83F7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83F7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F5u,2u,0x1Fu,0x83F7u);
      if(1){c->pc=0x8416u;}
      if(c->pc!=0x83F7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83F7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F5u,2u,0x1Fu,0x83F7u);
      if(1){c->pc=0x8416u;}
      if(c->pc!=0x83F7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83F7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283F7u:
    if(m==0u&&x==0u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F7u,3u,0x0Du,0x83FAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DAFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F7u,3u,0x0Du,0x83FAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DAFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F7u,3u,0x0Du,0x83FAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283F7u,3u,0x0Du,0x83FAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283FAu:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FAu,3u,0xB0u,0x83FDu);
      sc_v11_op_compare(r,c->a,0xB006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 06 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FAu,3u,0xB0u,0x83FDu);
      sc_v11_op_compare(r,c->a,0xB006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FAu,2u,0x06u,0x83FCu);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FAu,2u,0x06u,0x83FCu);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283FCu:
    if(m==1u&&x==0u&&e==0u){ /* B0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FCu,2u,0x18u,0x83FEu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8416u;}
      if(c->pc!=0x83FEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83FEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FCu,2u,0x18u,0x83FEu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8416u;}
      if(c->pc!=0x83FEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83FEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283FDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FDu,1u,0x18u,0x83FEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FDu,1u,0x18u,0x83FEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0283FEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 D5 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FEu,3u,0x99u,0x8401u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8400u))return 0;c->pc=0x99D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D5 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FEu,3u,0x99u,0x8401u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8400u))return 0;c->pc=0x99D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 D5 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FEu,3u,0x99u,0x8401u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8400u))return 0;c->pc=0x99D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D5 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0283FEu,3u,0x99u,0x8401u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8400u))return 0;c->pc=0x99D5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
