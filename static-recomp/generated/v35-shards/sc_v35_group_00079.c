/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00079(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01E400u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E400u,2u,0x0Eu,0xE402u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E402u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E402u,2u,0x20u,0xE404u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E404u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E404u,3u,0x00u,0xE407u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E407u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E407u,2u,0x00u,0xE409u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE409u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E409u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E409u,2u,0x30u,0xE40Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E40Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E40Bu,3u,0x03u,0xE40Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E40Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E40Eu,3u,0x00u,0xE411u);
      sc_v11_op_compare(r,c->a,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E411u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E411u,2u,0x1Bu,0xE413u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE42Eu;}
      if(c->pc!=0xE413u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE413u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E413u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E413u,2u,0x20u,0xE415u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E415u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E415u,2u,0x10u,0xE417u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E417u:
    if(m==1u&&x==0u&&e==0u){ /* A2 34 9C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E417u,3u,0x9Cu,0xE41Au);
      sc_v11_op_ldx(r,0x9C34u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E41Au:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E41Au,2u,0x09u,0xE41Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E41Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E41Cu,2u,0x0Au,0xE41Eu);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E41Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E41Eu,2u,0x0Bu,0xE420u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E420u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E420u,3u,0x20u,0xE423u);
      sc_v11_op_ldx(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E423u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E423u,2u,0x0Eu,0xE425u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E425u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E425u,2u,0x20u,0xE427u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E427u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E427u,3u,0x00u,0xE42Au);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E42Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E42Au,2u,0x00u,0xE42Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE42Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E42Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 5E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E42Cu,2u,0x5Eu,0xE42Eu);
      if(1){c->pc=0xE48Cu;}
      if(c->pc!=0xE42Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE42Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E42Eu:
    if(m==0u&&x==0u&&e==0u){ /* AE 9F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E42Eu,3u,0x03u,0xE431u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x039Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E431u:
    if(m==0u&&x==0u&&e==0u){ /* BF E2 E3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E431u,4u,0x01u,0xE435u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E3E2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E435u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E435u,3u,0x00u,0xE438u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E438u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E438u,2u,0x1Bu,0xE43Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE455u;}
      if(c->pc!=0xE43Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE43Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E43Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E43Au,2u,0x20u,0xE43Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E43Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E43Cu,2u,0x10u,0xE43Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E43Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 C1 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E43Eu,3u,0xEBu,0xE441u);
      sc_v11_op_ldx(r,0xEBC1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E441u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E441u,2u,0x09u,0xE443u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E443u:
    if(m==1u&&x==0u&&e==0u){ /* A9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E443u,2u,0x09u,0xE445u);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E445u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E445u,2u,0x0Bu,0xE447u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E447u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E447u,3u,0x20u,0xE44Au);
      sc_v11_op_ldx(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E44Au:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E44Au,2u,0x0Eu,0xE44Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E44Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E44Cu,2u,0x20u,0xE44Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E44Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E44Eu,3u,0x00u,0xE451u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E451u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E451u,2u,0x00u,0xE453u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE453u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E453u:
    if(m==0u&&x==0u&&e==0u){ /* 80 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E453u,2u,0x37u,0xE455u);
      if(1){c->pc=0xE48Cu;}
      if(c->pc!=0xE455u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE455u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E455u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E455u,1u,0x3Au,0xE456u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E456u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E456u,2u,0x1Bu,0xE458u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE473u;}
      if(c->pc!=0xE458u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE458u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E457u:
    if(m==1u&&x==1u&&e==0u){ /* 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E457u,1u,0x1Bu,0xE458u);
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E458u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E458u,2u,0x20u,0xE45Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E458u,2u,0x20u,0xE45Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E45Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E45Au,2u,0x10u,0xE45Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E45Au,2u,0x10u,0xE45Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E45Cu:
    if(m==1u&&x==0u&&e==0u){ /* A2 E9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E45Cu,3u,0x81u,0xE45Fu);
      sc_v11_op_ldx(r,0x81E9u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E45Fu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E45Fu,2u,0x09u,0xE461u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E461u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E461u,2u,0x0Au,0xE463u);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E463u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E463u,2u,0x0Bu,0xE465u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E465u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E465u,3u,0x20u,0xE468u);
      sc_v11_op_ldx(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E468u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E468u,2u,0x0Eu,0xE46Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E46Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E46Au,2u,0x20u,0xE46Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E46Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E46Cu,3u,0x00u,0xE46Fu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E46Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E46Fu,2u,0x00u,0xE471u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE471u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E471u:
    if(m==0u&&x==0u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E471u,2u,0x19u,0xE473u);
      if(1){c->pc=0xE48Cu;}
      if(c->pc!=0xE473u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE473u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E473u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E473u,2u,0x20u,0xE475u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E475u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E475u,2u,0x10u,0xE477u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E477u:
    if(m==1u&&x==0u&&e==0u){ /* A2 68 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E477u,3u,0x8Fu,0xE47Au);
      sc_v11_op_ldx(r,0x8F68u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E47Au:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E47Au,2u,0x09u,0xE47Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E47Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E47Cu,2u,0x0Au,0xE47Eu);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E47Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E47Eu,2u,0x0Bu,0xE480u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E480u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E480u,3u,0x20u,0xE483u);
      sc_v11_op_ldx(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E483u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E483u,2u,0x0Eu,0xE485u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E485u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E485u,2u,0x20u,0xE487u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E487u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E487u,3u,0x00u,0xE48Au);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E48Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E48Au,2u,0x00u,0xE48Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE48Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E48Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E48Cu,2u,0x20u,0xE48Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E48Eu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E48Eu,2u,0x20u,0xE490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E490u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E490u,2u,0xB3u,0xE492u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E492u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E492u,2u,0x7Fu,0xE494u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E494u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E494u,2u,0xB1u,0xE496u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E496u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E496u,2u,0x30u,0xE498u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E498u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E498u,3u,0x60u,0xE49Bu);
      sc_v11_op_lda(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E49Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E49Bu,2u,0x79u,0xE49Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E49Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E49Du,3u,0x80u,0xE4A0u);
      sc_v11_op_lda(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4A0u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4A0u,2u,0x7Cu,0xE4A2u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4A2u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4A2u,3u,0x00u,0xE4A5u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4A5u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4A5u,1u,0xDAu,0xE4A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4A6u:
    if(m==0u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4A6u,4u,0x00u,0xE4AAu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE4A9u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4AAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4AAu,2u,0x20u,0xE4ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4AAu,2u,0x20u,0xE4ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4AAu,2u,0x20u,0xE4ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4AAu,2u,0x20u,0xE4ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4ACu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4ACu,2u,0x01u,0xE4AEu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4ACu,2u,0x01u,0xE4AEu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4AEu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4AEu,3u,0x43u,0xE4B1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4AEu,3u,0x43u,0xE4B1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4B1u:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4B1u,2u,0x18u,0xE4B3u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4B1u,2u,0x18u,0xE4B3u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4B3u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4B3u,3u,0x43u,0xE4B6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 11 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4B3u,3u,0x43u,0xE4B6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4B6u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4B6u,2u,0x7Eu,0xE4B8u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4B6u,2u,0x7Eu,0xE4B8u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4B8u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4B8u,3u,0x43u,0xE4BBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 14 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4B8u,3u,0x43u,0xE4BBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4BBu:
    if(m==1u&&x==0u&&e==0u){ /* A6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4BBu,2u,0x79u,0xE4BDu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4BBu,2u,0x79u,0xE4BDu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4BDu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4BDu,3u,0x21u,0xE4C0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4BDu,3u,0x21u,0xE4C0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4C0u:
    if(m==1u&&x==0u&&e==0u){ /* A6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4C0u,2u,0x7Cu,0xE4C2u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4C0u,2u,0x7Cu,0xE4C2u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4C2u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4C2u,3u,0x43u,0xE4C5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4C2u,3u,0x43u,0xE4C5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4312u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4C5u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4C5u,3u,0x10u,0xE4C8u);
      sc_v11_op_ldx(r,0x1000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4C5u,2u,0x00u,0xE4C7u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4C7u:
    if(m==1u&&x==1u&&e==0u){ /* 10 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4C7u,2u,0x8Eu,0xE4C9u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xE457u;}
      if(c->pc!=0xE4C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE4C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4C8u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4C8u,3u,0x43u,0xE4CBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4CBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4CBu,2u,0x02u,0xE4CDu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4CDu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4CDu,3u,0x42u,0xE4D0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4D0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4D0u,2u,0x20u,0xE4D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4D2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4D2u,2u,0x79u,0xE4D4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4D4u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4D4u,1u,0x18u,0xE4D5u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4D5u:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4D5u,3u,0x08u,0xE4D8u);
      sc_v11_op_adc(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4D8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4D8u,2u,0x79u,0xE4DAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4DAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4DAu,2u,0x7Cu,0xE4DCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4DCu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4DCu,1u,0x18u,0xE4DDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4DDu:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4DDu,3u,0x10u,0xE4E0u);
      sc_v11_op_adc(r,0x1000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4E0u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4E0u,2u,0x7Cu,0xE4E2u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4E2u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4E2u,1u,0xFAu,0xE4E3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4E3u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4E3u,1u,0xE8u,0xE4E4u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4E4u:
    if(m==0u&&x==0u&&e==0u){ /* E0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4E4u,3u,0x00u,0xE4E7u);
      sc_v11_op_compare(r,c->x,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4E7u:
    if(m==0u&&x==0u&&e==0u){ /* D0 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4E7u,2u,0xBCu,0xE4E9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE4A5u;}
      if(c->pc!=0xE4E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE4E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4E9u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 9D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4E9u,3u,0x03u,0xE4ECu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x039Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4ECu:
    if(m==0u&&x==0u&&e==0u){ /* 20 44 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4ECu,3u,0xE5u,0xE4EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE4EEu))return 0;c->pc=0xE544u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4EFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4EFu,2u,0x20u,0xE4F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4EFu,2u,0x20u,0xE4F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4EFu,2u,0x20u,0xE4F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4EFu,2u,0x20u,0xE4F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4F1u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F1u,2u,0xB3u,0xE4F3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F1u,2u,0xB3u,0xE4F3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4F3u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F3u,2u,0x80u,0xE4F5u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F3u,2u,0x80u,0xE4F5u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4F5u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F5u,2u,0xB1u,0xE4F7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F5u,2u,0xB1u,0xE4F7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4F7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F7u,2u,0x20u,0xE4F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F7u,2u,0x20u,0xE4F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E4F9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F9u,1u,0x60u,0xE4FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E4F9u,1u,0x60u,0xE4FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E544u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E544u,2u,0x30u,0xE546u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E546u:
    if(m==0u&&x==0u&&e==0u){ /* AE 9F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E546u,3u,0x03u,0xE549u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x039Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E549u:
    if(m==0u&&x==0u&&e==0u){ /* BF 02 E5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E549u,4u,0x01u,0xE54Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E502u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E54Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E54Du,3u,0x00u,0xE550u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E550u:
    if(m==0u&&x==0u&&e==0u){ /* F0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E550u,2u,0x09u,0xE552u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE55Bu;}
      if(c->pc!=0xE552u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE552u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E552u:
    if(m==0u&&x==0u&&e==0u){ /* EE 59 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E552u,3u,0x0Bu,0xE555u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B59u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E555u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E555u,1u,0x3Au,0xE556u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E556u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F1 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E556u,3u,0x03u,0xE559u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E559u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E559u,2u,0x0Du,0xE55Bu);
      if(1){c->pc=0xE568u;}
      if(c->pc!=0xE55Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE55Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E55Bu:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E55Bu,3u,0x03u,0xE55Eu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E55Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF 10 E5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E55Eu,4u,0x01u,0xE562u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E510u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E562u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E562u,3u,0x00u,0xE565u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E565u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F1 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E565u,3u,0x03u,0xE568u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E568u:
    if(m==0u&&x==0u&&e==0u){ /* 22 2B 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E568u,4u,0x00u,0xE56Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE56Bu))return 0;
      c->pbr=0x00u;c->pc=0x982Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E56Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Cu,1u,0x4Bu,0xE56Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Cu,1u,0x4Bu,0xE56Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Cu,1u,0x4Bu,0xE56Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Cu,1u,0x4Bu,0xE56Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E56Du:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Du,1u,0xABu,0xE56Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Du,1u,0xABu,0xE56Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Du,1u,0xABu,0xE56Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Du,1u,0xABu,0xE56Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E56Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Eu,2u,0x30u,0xE570u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Eu,2u,0x30u,0xE570u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Eu,2u,0x30u,0xE570u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E56Eu,2u,0x30u,0xE570u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E570u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E570u,3u,0x03u,0xE573u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E573u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E573u,1u,0x0Au,0xE574u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E574u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E574u,1u,0xA8u,0xE575u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E575u:
    if(m==0u&&x==0u&&e==0u){ /* BE FA E4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E575u,3u,0xE4u,0xE578u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xE4FAu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E578u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E578u,3u,0x38u,0xE57Bu);
      sc_v11_op_ldy(r,0x3840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E57Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E57Bu,3u,0x08u,0xE57Eu);
      sc_v11_op_lda(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E57Eu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E57Eu,3u,0x7Eu,0xE581u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE57Eu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E581u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E581u,3u,0x00u,0xE584u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E584u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E584u,1u,0xABu,0xE585u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E585u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E585u,1u,0xABu,0xE586u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E586u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E586u,2u,0x20u,0xE588u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E588u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E588u,2u,0x20u,0xE58Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E58Au:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E58Au,2u,0xB3u,0xE58Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E58Cu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E58Cu,2u,0x7Fu,0xE58Eu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E58Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E58Eu,2u,0xB1u,0xE590u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E590u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E590u,2u,0x30u,0xE592u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E592u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E592u,3u,0x03u,0xE595u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E595u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E595u,1u,0x0Au,0xE596u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E596u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E596u,1u,0xAAu,0xE597u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E597u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 A8 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E597u,4u,0x0Fu,0xE59Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0FA800u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E59Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E59Bu,1u,0xAAu,0xE59Cu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E59Cu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E59Cu,3u,0x00u,0xE59Fu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E59Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E59Fu,3u,0x00u,0xE5A2u);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5A2u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5A2u,2u,0x79u,0xE5A4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5A4u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5A4u,4u,0x0Fu,0xE5A8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0F0000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5A8u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5A8u,3u,0x00u,0xE5ABu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5ABu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5ABu,3u,0x00u,0xE5AEu);
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5AEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5AEu,2u,0x19u,0xE5B0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE5C9u;}
      if(c->pc!=0xE5B0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE5B0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5B0u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5B0u,3u,0x08u,0xE5B3u);
      sc_v11_op_ora(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5B3u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5B3u,1u,0xDAu,0xE5B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5B4u:
    if(m==0u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5B4u,1u,0xBBu,0xE5B5u);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5B5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 48 39 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5B5u,4u,0x7Eu,0xE5B9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3948u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5B9u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5B9u,1u,0xFAu,0xE5BAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5BAu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5BAu,1u,0xE8u,0xE5BBu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5BBu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5BBu,1u,0xC8u,0xE5BCu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5BCu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5BCu,1u,0xC8u,0xE5BDu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5BDu:
    if(m==0u&&x==0u&&e==0u){ /* C6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5BDu,2u,0x79u,0xE5BFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5BFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5BFu,2u,0xE3u,0xE5C1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE5A4u;}
      if(c->pc!=0xE5C1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE5C1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5C1u:
    if(m==0u&&x==0u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5C1u,1u,0x98u,0xE5C2u);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5C2u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5C2u,1u,0x18u,0xE5C3u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5C3u:
    if(m==0u&&x==0u&&e==0u){ /* 69 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5C3u,3u,0x00u,0xE5C6u);
      sc_v11_op_adc(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5C6u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5C6u,1u,0xA8u,0xE5C7u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5C7u:
    if(m==0u&&x==0u&&e==0u){ /* 80 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5C7u,2u,0xD6u,0xE5C9u);
      if(1){c->pc=0xE59Fu;}
      if(c->pc!=0xE5C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE5C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5C9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5C9u,2u,0x20u,0xE5CBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5CBu:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5CBu,4u,0x00u,0xE5CFu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE5CEu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5CFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5CFu,3u,0x8Du,0xE5D2u);
      sc_v11_op_lda(r,0x8D01u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5CFu,3u,0x8Du,0xE5D2u);
      sc_v11_op_lda(r,0x8D01u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5CFu,2u,0x01u,0xE5D1u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5CFu,2u,0x01u,0xE5D1u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5D1u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D1u,3u,0x43u,0xE5D4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D1u,3u,0x43u,0xE5D4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5D2u:
    if(m==0u&&x==0u&&e==0u){ /* 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D2u,2u,0x43u,0xE5D4u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xE617u;}
      if(c->pc!=0xE5D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE5D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D2u,2u,0x43u,0xE5D4u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xE617u;}
      if(c->pc!=0xE5D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE5D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5D4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 18 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D4u,3u,0x8Du,0xE5D7u);
      sc_v11_op_lda(r,0x8D18u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 18 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D4u,3u,0x8Du,0xE5D7u);
      sc_v11_op_lda(r,0x8D18u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D4u,2u,0x18u,0xE5D6u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D4u,2u,0x18u,0xE5D6u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5D6u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D6u,3u,0x43u,0xE5D9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 11 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D6u,3u,0x43u,0xE5D9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5D9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D9u,2u,0x7Eu,0xE5DBu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5D9u,2u,0x7Eu,0xE5DBu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5DBu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5DBu,3u,0x43u,0xE5DEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 14 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5DBu,3u,0x43u,0xE5DEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5DEu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5DEu,3u,0x54u,0xE5E1u);
      sc_v11_op_ldx(r,0x5400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5DEu,2u,0x00u,0xE5E0u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5E0u:
    if(m==1u&&x==1u&&e==0u){ /* 54 8E 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5E0u,3u,0x16u,0xE5E3u);
      sc_v11_bus_write8(r,((uint32_t)0x8Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x16u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x8Eu;if(c->a!=0xFFFFu)c->pc=0xE5E0u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5E1u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5E1u,3u,0x21u,0xE5E4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5E4u:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5E4u,3u,0x38u,0xE5E7u);
      sc_v11_op_ldx(r,0x3840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5E7u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5E7u,3u,0x43u,0xE5EAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5EAu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5EAu,3u,0x08u,0xE5EDu);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5EDu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5EDu,3u,0x43u,0xE5F0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5F0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5F0u,2u,0x02u,0xE5F2u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5F2u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5F2u,3u,0x42u,0xE5F5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5F5u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5F5u,2u,0x20u,0xE5F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5F7u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5F7u,2u,0xB3u,0xE5F9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5F9u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5F9u,2u,0x80u,0xE5FBu);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5FBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5FBu,2u,0xB1u,0xE5FDu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5FDu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5FDu,1u,0x60u,0xE5FEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E5FEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5FEu,2u,0x20u,0xE600u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E5FEu,2u,0x20u,0xE600u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E600u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E600u,2u,0x10u,0xE602u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E600u,2u,0x10u,0xE602u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E602u:
    if(m==1u&&x==0u&&e==0u){ /* A2 FB C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E602u,3u,0xC0u,0xE605u);
      sc_v11_op_ldx(r,0xC0FBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E605u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E605u,2u,0x09u,0xE607u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E607u:
    if(m==1u&&x==0u&&e==0u){ /* A9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E607u,2u,0x09u,0xE609u);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E609u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E609u,2u,0x0Bu,0xE60Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E60Bu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E60Bu,3u,0x00u,0xE60Eu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E60Eu:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E60Eu,2u,0x0Eu,0xE610u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E610u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E610u,2u,0x20u,0xE612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E612u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E612u,3u,0x00u,0xE615u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E615u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E615u,2u,0x00u,0xE617u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE617u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E617u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E617u,2u,0x20u,0xE619u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E617u,2u,0x20u,0xE619u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E619u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E619u,2u,0xB3u,0xE61Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E619u,2u,0xB3u,0xE61Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E61Bu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E61Bu,2u,0x7Fu,0xE61Du);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E61Bu,2u,0x7Fu,0xE61Du);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E61Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E61Du,2u,0xB1u,0xE61Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E61Du,2u,0xB1u,0xE61Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E61Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E61Fu,2u,0x20u,0xE621u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E61Fu,2u,0x20u,0xE621u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E621u:
    if(m==0u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E621u,4u,0x00u,0xE625u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE624u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E621u,4u,0x00u,0xE625u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE624u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E625u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E625u,2u,0x20u,0xE627u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E625u,2u,0x20u,0xE627u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E625u,2u,0x20u,0xE627u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E625u,2u,0x20u,0xE627u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E627u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E627u,2u,0x10u,0xE629u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E627u,2u,0x10u,0xE629u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E629u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E629u,2u,0x01u,0xE62Bu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E62Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E62Bu,3u,0x43u,0xE62Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E62Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E62Eu,2u,0x18u,0xE630u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E630u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E630u,3u,0x43u,0xE633u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E633u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E633u,2u,0x7Eu,0xE635u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E635u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E635u,3u,0x43u,0xE638u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E638u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E638u,3u,0x40u,0xE63Bu);
      sc_v11_op_ldx(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E63Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E63Bu,3u,0x21u,0xE63Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E63Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E63Eu,3u,0x80u,0xE641u);
      sc_v11_op_ldx(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E641u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E641u,3u,0x43u,0xE644u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E644u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E644u,3u,0x10u,0xE647u);
      sc_v11_op_ldx(r,0x1000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E647u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E647u,3u,0x43u,0xE64Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E64Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E64Au,2u,0x02u,0xE64Cu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E64Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E64Cu,3u,0x42u,0xE64Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E64Fu:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E64Fu,4u,0x00u,0xE653u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE652u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E653u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E653u,2u,0x20u,0xE655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E653u,2u,0x20u,0xE655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E653u,2u,0x20u,0xE655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E653u,2u,0x20u,0xE655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E655u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E655u,2u,0x10u,0xE657u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E655u,2u,0x10u,0xE657u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E657u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E657u,3u,0x48u,0xE65Au);
      sc_v11_op_ldx(r,0x4800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E65Au:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E65Au,3u,0x21u,0xE65Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E65Du:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E65Du,3u,0x90u,0xE660u);
      sc_v11_op_ldx(r,0x9000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E660u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E660u,3u,0x43u,0xE663u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E663u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E663u,3u,0x10u,0xE666u);
      sc_v11_op_ldx(r,0x1000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E666u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E666u,3u,0x43u,0xE669u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E669u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E669u,2u,0x02u,0xE66Bu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E66Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E66Bu,3u,0x42u,0xE66Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E66Eu:
    if(m==1u&&x==0u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E66Eu,4u,0x00u,0xE672u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE671u))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E672u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E672u,3u,0xA8u,0xE675u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE674u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E672u,3u,0xA8u,0xE675u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE674u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E672u,3u,0xA8u,0xE675u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE674u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E672u,3u,0xA8u,0xE675u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE674u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E675u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E675u,2u,0x20u,0xE677u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E675u,2u,0x20u,0xE677u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E675u,2u,0x20u,0xE677u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E675u,2u,0x20u,0xE677u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E677u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E677u,3u,0x00u,0xE67Au);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E677u,3u,0x00u,0xE67Au);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E67Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E67Au,2u,0x00u,0xE67Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE67Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E67Au,2u,0x00u,0xE67Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE67Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E67Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E67Cu,1u,0x60u,0xE67Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E67Cu,1u,0x60u,0xE67Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E67Du:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E67Du,2u,0x20u,0xE67Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E67Du,2u,0x20u,0xE67Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E67Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E67Fu,2u,0x00u,0xE681u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E67Fu,2u,0x00u,0xE681u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E681u:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E681u,2u,0x79u,0xE683u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E681u,2u,0x79u,0xE683u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E683u:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E683u,2u,0x80u,0xE685u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E683u,2u,0x80u,0xE685u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E685u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E685u,1u,0x38u,0xE686u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E685u,1u,0x38u,0xE686u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E686u:
    if(m==1u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E686u,2u,0x79u,0xE688u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E686u,2u,0x79u,0xE688u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E688u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E688u,3u,0x21u,0xE68Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E688u,3u,0x21u,0xE68Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E68Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E68Bu,2u,0x80u,0xE68Du);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E68Bu,2u,0x80u,0xE68Du);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E68Du:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E68Du,1u,0x18u,0xE68Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E68Du,1u,0x18u,0xE68Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E68Eu:
    if(m==1u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E68Eu,2u,0x79u,0xE690u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E68Eu,2u,0x79u,0xE690u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E690u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E690u,3u,0x21u,0xE693u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E690u,3u,0x21u,0xE693u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E693u:
    if(m==1u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E693u,2u,0x79u,0xE695u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E693u,2u,0x79u,0xE695u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E695u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E695u,1u,0x18u,0xE696u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E695u,1u,0x18u,0xE696u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E696u:
    if(m==1u&&x==0u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E696u,2u,0x04u,0xE698u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E696u,2u,0x04u,0xE698u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E698u:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E698u,2u,0x79u,0xE69Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E698u,2u,0x79u,0xE69Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E69Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E69Au,2u,0x20u,0xE69Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E69Au,2u,0x20u,0xE69Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E69Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E69Cu,3u,0x00u,0xE69Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E69Cu,3u,0x00u,0xE69Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E69Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E69Fu,2u,0x00u,0xE6A1u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE6A1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E69Fu,2u,0x00u,0xE6A1u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE6A1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6A1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A1u,2u,0x20u,0xE6A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A1u,2u,0x20u,0xE6A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6A3u:
    if(m==1u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A3u,2u,0x79u,0xE6A5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A3u,2u,0x79u,0xE6A5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6A5u:
    if(m==1u&&x==0u&&e==0u){ /* C9 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A5u,2u,0x69u,0xE6A7u);
      sc_v11_op_compare(r,c->a,0x0069u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A5u,2u,0x69u,0xE6A7u);
      sc_v11_op_compare(r,c->a,0x0069u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6A7u:
    if(m==1u&&x==0u&&e==0u){ /* 90 DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A7u,2u,0xDAu,0xE6A9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xE683u;}
      if(c->pc!=0xE6A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE6A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A7u,2u,0xDAu,0xE6A9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xE683u;}
      if(c->pc!=0xE6A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE6A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6A9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A9u,2u,0x00u,0xE6ABu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6A9u,2u,0x00u,0xE6ABu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6ABu:
    if(m==1u&&x==0u&&e==0u){ /* 85 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6ABu,2u,0x72u,0xE6ADu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6ABu,2u,0x72u,0xE6ADu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6ADu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6ADu,2u,0x20u,0xE6AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6ADu,2u,0x20u,0xE6AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6AFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6AFu,3u,0x00u,0xE6B2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6AFu,3u,0x00u,0xE6B2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6B2u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B2u,2u,0x00u,0xE6B4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE6B4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B2u,2u,0x00u,0xE6B4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE6B4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6B4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B4u,1u,0x60u,0xE6B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B4u,1u,0x60u,0xE6B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6B5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B5u,2u,0x20u,0xE6B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B5u,2u,0x20u,0xE6B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6B7u:
    if(m==1u&&x==0u&&e==0u){ /* A9 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B7u,2u,0x68u,0xE6B9u);
      sc_v11_op_lda(r,0x0068u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B7u,2u,0x68u,0xE6B9u);
      sc_v11_op_lda(r,0x0068u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6B9u:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B9u,2u,0x79u,0xE6BBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6B9u,2u,0x79u,0xE6BBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6BBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6BBu,2u,0x20u,0xE6BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6BBu,2u,0x20u,0xE6BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6BDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6BDu,3u,0x00u,0xE6C0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6BDu,3u,0x00u,0xE6C0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6C0u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C0u,2u,0x00u,0xE6C2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE6C2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C0u,2u,0x00u,0xE6C2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE6C2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6C2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C2u,2u,0x20u,0xE6C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C2u,2u,0x20u,0xE6C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6C4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C4u,2u,0x80u,0xE6C6u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C4u,2u,0x80u,0xE6C6u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6C6u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C6u,1u,0x38u,0xE6C7u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C6u,1u,0x38u,0xE6C7u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6C7u:
    if(m==1u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C7u,2u,0x79u,0xE6C9u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C7u,2u,0x79u,0xE6C9u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6C9u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C9u,3u,0x21u,0xE6CCu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6C9u,3u,0x21u,0xE6CCu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6CCu:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6CCu,2u,0x80u,0xE6CEu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6CCu,2u,0x80u,0xE6CEu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6CEu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6CEu,1u,0x18u,0xE6CFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6CEu,1u,0x18u,0xE6CFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6CFu:
    if(m==1u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6CFu,2u,0x79u,0xE6D1u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6CFu,2u,0x79u,0xE6D1u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6D1u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D1u,3u,0x21u,0xE6D4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D1u,3u,0x21u,0xE6D4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6D4u:
    if(m==1u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D4u,2u,0x79u,0xE6D6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D4u,2u,0x79u,0xE6D6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6D6u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D6u,1u,0x38u,0xE6D7u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D6u,1u,0x38u,0xE6D7u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6D7u:
    if(m==1u&&x==0u&&e==0u){ /* E9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D7u,2u,0x04u,0xE6D9u);
      sc_v11_op_sbc(r,0x0004u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D7u,2u,0x04u,0xE6D9u);
      sc_v11_op_sbc(r,0x0004u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6D9u:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D9u,2u,0x79u,0xE6DBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6D9u,2u,0x79u,0xE6DBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6DBu:
    if(m==1u&&x==0u&&e==0u){ /* 10 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6DBu,2u,0xDEu,0xE6DDu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xE6BBu;}
      if(c->pc!=0xE6DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE6DDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6DBu,2u,0xDEu,0xE6DDu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xE6BBu;}
      if(c->pc!=0xE6DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE6DDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6DDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6DDu,2u,0xFFu,0xE6DFu);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6DDu,2u,0xFFu,0xE6DFu);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6DFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6DFu,3u,0x21u,0xE6E2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6DFu,3u,0x21u,0xE6E2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E6E2u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6E2u,1u,0x60u,0xE6E3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E6E2u,1u,0x60u,0xE6E3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E72Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E72Fu,2u,0x30u,0xE731u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E72Fu,2u,0x30u,0xE731u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E731u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E731u,3u,0x03u,0xE734u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E734u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E734u,3u,0x00u,0xE737u);
      sc_v11_op_compare(r,c->a,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E737u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E737u,2u,0x05u,0xE739u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE73Eu;}
      if(c->pc!=0xE739u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE739u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E739u:
    if(m==0u&&x==0u&&e==0u){ /* 22 45 F2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E739u,4u,0x03u,0xE73Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE73Cu))return 0;
      c->pbr=0x03u;c->pc=0xF245u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E73Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E73Du,1u,0x60u,0xE73Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E73Du,1u,0x60u,0xE73Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E73Du,1u,0x60u,0xE73Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E73Du,1u,0x60u,0xE73Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E73Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E73Eu,3u,0x03u,0xE741u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x039Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E741u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E741u,1u,0x0Au,0xE742u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E742u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E742u,1u,0xAAu,0xE743u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E743u:
    if(m==0u&&x==0u&&e==0u){ /* BF E3 E6 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E743u,4u,0x01u,0xE747u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E6E3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E747u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E747u,1u,0x48u,0xE748u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E748u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E748u,1u,0x4Bu,0xE749u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E749u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E749u,1u,0xABu,0xE74Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E74Au:
    if(m==0u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E74Au,3u,0x00u,0xE74Du);
      sc_v11_op_ldx(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E74Du:
    if(m==0u&&x==0u&&e==0u){ /* E0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E74Du,3u,0x00u,0xE750u);
      sc_v11_op_compare(r,c->x,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E750u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E750u,2u,0x05u,0xE752u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE757u;}
      if(c->pc!=0xE752u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE752u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E752u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E752u,3u,0x00u,0xE755u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E755u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E755u,2u,0x03u,0xE757u);
      if(1){c->pc=0xE75Au;}
      if(c->pc!=0xE757u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE757u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E757u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E757u,3u,0xFFu,0xE75Au);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E75Au:
    if(m==0u&&x==0u&&e==0u){ /* 9D D7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E75Au,3u,0x02u,0xE75Du);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x02D7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E75Du:
    if(m==0u&&x==0u&&e==0u){ /* 9D E7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E75Du,3u,0x02u,0xE760u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x02E7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E760u:
    if(m==0u&&x==0u&&e==0u){ /* 9E F7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E760u,3u,0x02u,0xE763u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x02F7u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E763u:
    if(m==0u&&x==0u&&e==0u){ /* 9E 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E763u,3u,0x03u,0xE766u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0307u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E766u:
    if(m==0u&&x==0u&&e==0u){ /* 9E 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E766u,3u,0x03u,0xE769u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0317u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E769u:
    if(m==0u&&x==0u&&e==0u){ /* 9E 27 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E769u,3u,0x03u,0xE76Cu);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0327u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E76Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9E 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E76Cu,3u,0x03u,0xE76Fu);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0357u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E76Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9E 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E76Fu,3u,0x03u,0xE772u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0367u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E772u:
    if(m==0u&&x==0u&&e==0u){ /* 9E C7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E772u,3u,0x02u,0xE775u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x02C7u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E775u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E775u,1u,0x8Au,0xE776u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E776u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E776u,1u,0x0Au,0xE777u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E777u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E777u,1u,0xA8u,0xE778u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E778u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E778u,2u,0x01u,0xE77Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E77Au:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E77Au,1u,0xC8u,0xE77Bu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E77Bu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E77Bu,1u,0xC8u,0xE77Cu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E77Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9D 37 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E77Cu,3u,0x03u,0xE77Fu);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0337u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E77Fu:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E77Fu,2u,0x01u,0xE781u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E781u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 47 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E781u,3u,0x03u,0xE784u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0347u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E784u:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E784u,1u,0xCAu,0xE785u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E785u:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E785u,1u,0xCAu,0xE786u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E786u:
    if(m==0u&&x==0u&&e==0u){ /* 10 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E786u,2u,0xC5u,0xE788u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xE74Du;}
      if(c->pc!=0xE788u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE788u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E788u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E788u,1u,0x68u,0xE789u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E789u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E789u,3u,0x00u,0xE78Cu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E78Cu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E78Cu,1u,0xABu,0xE78Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E78Du:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E78Du,1u,0xABu,0xE78Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E78Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E78Eu,3u,0x00u,0xE791u);
      sc_v11_op_lda(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E791u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E791u,3u,0x03u,0xE794u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E794u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E794u,3u,0x03u,0xE797u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E797u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A3 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E797u,3u,0xECu,0xE79Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE799u))return 0;c->pc=0xECA3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E79Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E79Au,1u,0x60u,0xE79Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E79Au,1u,0x60u,0xE79Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E79Au,1u,0x60u,0xE79Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E79Au,1u,0x60u,0xE79Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7CFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7CFu,2u,0x30u,0xE7D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7CFu,2u,0x30u,0xE7D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7CFu,2u,0x30u,0xE7D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7CFu,2u,0x30u,0xE7D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7D1u:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7D1u,3u,0x03u,0xE7D4u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7D4u:
    if(m==0u&&x==0u&&e==0u){ /* BF 9B E7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7D4u,4u,0x01u,0xE7D8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E79Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7D8u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7D8u,3u,0x00u,0xE7DBu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7DBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7DBu,2u,0x01u,0xE7DDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE7DEu;}
      if(c->pc!=0xE7DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE7DDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7DDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7DDu,1u,0x60u,0xE7DEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7DEu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7DEu,1u,0x48u,0xE7DFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7DFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 68 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7DFu,3u,0xCDu,0xE7E2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE7E1u))return 0;c->pc=0xCD68u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7E2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7E2u,2u,0x30u,0xE7E4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7E2u,2u,0x30u,0xE7E4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7E2u,2u,0x30u,0xE7E4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7E2u,2u,0x30u,0xE7E4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7E4u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7E4u,1u,0x68u,0xE7E5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7E5u:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7E5u,3u,0x03u,0xE7E8u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7E8u:
    if(m==0u&&x==0u&&e==0u){ /* E0 0D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7E8u,3u,0x00u,0xE7EBu);
      sc_v11_op_compare(r,c->x,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7EBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7EBu,2u,0x08u,0xE7EDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE7F5u;}
      if(c->pc!=0xE7EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE7EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7EDu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7EDu,3u,0x00u,0xE7F0u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7F0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 BC CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7F0u,3u,0xCEu,0xE7F3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE7F2u))return 0;c->pc=0xCEBCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7F3u:
    if(m==0u&&x==0u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7F3u,2u,0x12u,0xE7F5u);
      if(1){c->pc=0xE807u;}
      if(c->pc!=0xE7F5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE7F5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7F3u,2u,0x12u,0xE7F5u);
      if(1){c->pc=0xE807u;}
      if(c->pc!=0xE7F5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE7F5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7F3u,2u,0x12u,0xE7F5u);
      if(1){c->pc=0xE807u;}
      if(c->pc!=0xE7F5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE7F5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7F3u,2u,0x12u,0xE7F5u);
      if(1){c->pc=0xE807u;}
      if(c->pc!=0xE7F5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE7F5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7F5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7F5u,3u,0x00u,0xE7F8u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7F8u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7F8u,3u,0x00u,0xE7FBu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7FBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 BC CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7FBu,3u,0xCEu,0xE7FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE7FDu))return 0;c->pc=0xCEBCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E7FEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7FEu,3u,0x00u,0xE801u);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7FEu,3u,0x00u,0xE801u);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7FEu,2u,0x05u,0xE800u);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E7FEu,2u,0x05u,0xE800u);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
