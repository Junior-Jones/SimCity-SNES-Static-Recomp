/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000F0(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03C001u:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C001u,3u,0x0Du,0xC004u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C004u:
    if(m==0u&&x==0u&&e==0u){ /* C9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C004u,3u,0x00u,0xC007u);
      sc_v11_op_compare(r,c->a,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C007u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C007u,2u,0x05u,0xC009u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC00Eu;}
      if(c->pc!=0xC009u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC009u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C009u:
    if(m==0u&&x==0u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C009u,3u,0x00u,0xC00Cu);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C00Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C00Cu,2u,0x22u,0xC00Eu);
      if(1){c->pc=0xC030u;}
      if(c->pc!=0xC00Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC00Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C016u:
    if(m==0u&&x==0u&&e==0u){ /* A9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C016u,3u,0x00u,0xC019u);
      sc_v11_op_lda(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C019u:
    if(m==0u&&x==0u&&e==0u){ /* 80 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C019u,2u,0x6Bu,0xC01Bu);
      if(1){c->pc=0xC086u;}
      if(c->pc!=0xC01Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC01Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C020u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C020u,3u,0x00u,0xC023u);
      sc_v11_op_lda(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C023u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C023u,3u,0xC0u,0xC026u);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C02Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C02Fu,1u,0x60u,0xC030u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C03Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C03Au,3u,0x00u,0xC03Du);
      sc_v11_op_compare(r,c->a,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C03Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C03Du,2u,0x05u,0xC03Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC044u;}
      if(c->pc!=0xC03Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC03Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C086u:
    if(m==0u&&x==0u&&e==0u){ /* CD 9B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C086u,3u,0x03u,0xC089u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x039Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C089u:
    if(m==0u&&x==0u&&e==0u){ /* F0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C089u,2u,0x09u,0xC08Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC094u;}
      if(c->pc!=0xC08Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC08Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C08Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C08Bu,3u,0x03u,0xC08Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C08Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C08Eu,3u,0x00u,0xC091u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C091u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C091u,3u,0x03u,0xC094u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C094u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C094u,1u,0x60u,0xC095u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0ADu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0ADu,2u,0x30u,0xC0AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0ADu,2u,0x30u,0xC0AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0ADu,2u,0x30u,0xC0AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0BAu:
    if(m==0u&&x==1u&&e==0u){ /* 20 CD C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0BAu,3u,0xC3u,0xC0BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0BCu))return 0;c->pc=0xC3CDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 CD C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0BAu,3u,0xC3u,0xC0BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0BCu))return 0;c->pc=0xC3CDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CD C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0BAu,3u,0xC3u,0xC0BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0BCu))return 0;c->pc=0xC3CDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0BDu:
    if(m==0u&&x==1u&&e==0u){ /* AD 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0BDu,3u,0x00u,0xC0C0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0BDu,3u,0x00u,0xC0C0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x003Eu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0BDu,3u,0x00u,0xC0C0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x003Eu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0C0u:
    if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C0u,3u,0x00u,0xC0C3u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C0u,2u,0x03u,0xC0C2u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C0u,2u,0x03u,0xC0C2u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0C3u:
    if(m==0u&&x==1u&&e==0u){ /* F0 34 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C3u,2u,0x34u,0xC0C5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC0F9u;}
      if(c->pc!=0xC0C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0C5u:
    if(m==0u&&x==1u&&e==0u){ /* 20 91 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C5u,3u,0xC3u,0xC0C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0C7u))return 0;c->pc=0xC391u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0C8u:
    if(m==0u&&x==1u&&e==0u){ /* 20 05 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C8u,3u,0xC4u,0xC0CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0CAu))return 0;c->pc=0xC405u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 05 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C8u,3u,0xC4u,0xC0CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0CAu))return 0;c->pc=0xC405u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 05 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C8u,3u,0xC4u,0xC0CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0CAu))return 0;c->pc=0xC405u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0CBu:
    if(m==0u&&x==0u&&e==0u){ /* B0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CBu,2u,0x2Cu,0xC0CDu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC0F9u;}
      if(c->pc!=0xC0CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CBu,2u,0x2Cu,0xC0CDu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC0F9u;}
      if(c->pc!=0xC0CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CBu,2u,0x2Cu,0xC0CDu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC0F9u;}
      if(c->pc!=0xC0CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0CDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CDu,2u,0x30u,0xC0CFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CDu,2u,0x30u,0xC0CFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CDu,2u,0x30u,0xC0CFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0D2u:
    if(m==0u&&x==1u&&e==0u){ /* 20 4C C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D2u,3u,0xC1u,0xC0D5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D4u))return 0;c->pc=0xC14Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4C C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D2u,3u,0xC1u,0xC0D5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D4u))return 0;c->pc=0xC14Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4C C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D2u,3u,0xC1u,0xC0D5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D4u))return 0;c->pc=0xC14Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0D5u:
    if(m==0u&&x==1u&&e==0u){ /* 20 86 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D5u,3u,0xC1u,0xC0D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D7u))return 0;c->pc=0xC186u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 86 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D5u,3u,0xC1u,0xC0D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D7u))return 0;c->pc=0xC186u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 86 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D5u,3u,0xC1u,0xC0D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D7u))return 0;c->pc=0xC186u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0D8u:
    if(m==0u&&x==1u&&e==0u){ /* 20 CE C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D8u,3u,0xC1u,0xC0DBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0DAu))return 0;c->pc=0xC1CEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 CE C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D8u,3u,0xC1u,0xC0DBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0DAu))return 0;c->pc=0xC1CEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CE C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D8u,3u,0xC1u,0xC0DBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0DAu))return 0;c->pc=0xC1CEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0DBu:
    if(m==0u&&x==1u&&e==0u){ /* 20 0F C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0DBu,3u,0xC2u,0xC0DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0DDu))return 0;c->pc=0xC20Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 0F C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0DBu,3u,0xC2u,0xC0DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0DDu))return 0;c->pc=0xC20Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 0F C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0DBu,3u,0xC2u,0xC0DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0DDu))return 0;c->pc=0xC20Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0DEu:
    if(m==0u&&x==1u&&e==0u){ /* 20 6B C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0DEu,3u,0xC2u,0xC0E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E0u))return 0;c->pc=0xC26Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 6B C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0DEu,3u,0xC2u,0xC0E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E0u))return 0;c->pc=0xC26Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 6B C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0DEu,3u,0xC2u,0xC0E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E0u))return 0;c->pc=0xC26Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0E1u:
    if(m==0u&&x==1u&&e==0u){ /* 20 91 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E1u,3u,0xC2u,0xC0E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E3u))return 0;c->pc=0xC291u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 91 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E1u,3u,0xC2u,0xC0E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E3u))return 0;c->pc=0xC291u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 91 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E1u,3u,0xC2u,0xC0E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E3u))return 0;c->pc=0xC291u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0E4u:
    if(m==0u&&x==1u&&e==0u){ /* 20 B7 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E4u,3u,0xC2u,0xC0E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E6u))return 0;c->pc=0xC2B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B7 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E4u,3u,0xC2u,0xC0E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E6u))return 0;c->pc=0xC2B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B7 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E4u,3u,0xC2u,0xC0E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E6u))return 0;c->pc=0xC2B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0E7u:
    if(m==0u&&x==1u&&e==0u){ /* 20 DD C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E7u,3u,0xC2u,0xC0EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E9u))return 0;c->pc=0xC2DDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 DD C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E7u,3u,0xC2u,0xC0EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E9u))return 0;c->pc=0xC2DDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 DD C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E7u,3u,0xC2u,0xC0EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E9u))return 0;c->pc=0xC2DDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0EAu:
    if(m==0u&&x==1u&&e==0u){ /* 20 03 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0EAu,3u,0xC3u,0xC0EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0ECu))return 0;c->pc=0xC303u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 03 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0EAu,3u,0xC3u,0xC0EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0ECu))return 0;c->pc=0xC303u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 03 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0EAu,3u,0xC3u,0xC0EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0ECu))return 0;c->pc=0xC303u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0EDu:
    if(m==0u&&x==1u&&e==0u){ /* 20 27 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0EDu,3u,0xC3u,0xC0F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0EFu))return 0;c->pc=0xC327u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 27 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0EDu,3u,0xC3u,0xC0F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0EFu))return 0;c->pc=0xC327u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 27 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0EDu,3u,0xC3u,0xC0F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0EFu))return 0;c->pc=0xC327u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0F0u:
    if(m==0u&&x==1u&&e==0u){ /* 20 4B C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F0u,3u,0xC3u,0xC0F3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F2u))return 0;c->pc=0xC34Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4B C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F0u,3u,0xC3u,0xC0F3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F2u))return 0;c->pc=0xC34Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4B C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F0u,3u,0xC3u,0xC0F3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F2u))return 0;c->pc=0xC34Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0F3u:
    if(m==0u&&x==1u&&e==0u){ /* 20 69 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F3u,3u,0xC3u,0xC0F6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F5u))return 0;c->pc=0xC369u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 69 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F3u,3u,0xC3u,0xC0F6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F5u))return 0;c->pc=0xC369u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 69 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F3u,3u,0xC3u,0xC0F6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F5u))return 0;c->pc=0xC369u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0F6u:
    if(m==0u&&x==1u&&e==0u){ /* 20 AF C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F6u,3u,0xC3u,0xC0F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F8u))return 0;c->pc=0xC3AFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 AF C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F6u,3u,0xC3u,0xC0F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F8u))return 0;c->pc=0xC3AFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 AF C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F6u,3u,0xC3u,0xC0F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F8u))return 0;c->pc=0xC3AFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0F9u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F9u,1u,0x60u,0xC0FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F9u,1u,0x60u,0xC0FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F9u,1u,0x60u,0xC0FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C100u:
    if(m==0u&&x==1u&&e==0u){ /* 90 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C100u,2u,0x17u,0xC102u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC119u;}
      if(c->pc!=0xC102u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC102u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C100u,2u,0x17u,0xC102u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC119u;}
      if(c->pc!=0xC102u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC102u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C100u,2u,0x17u,0xC102u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC119u;}
      if(c->pc!=0xC102u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC102u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C102u:
    if(m==0u&&x==0u&&e==0u){ /* EE C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C102u,3u,0x0Cu,0xC105u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC9u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C102u,3u,0x0Cu,0xC105u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC9u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C102u,3u,0x0Cu,0xC105u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC9u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C102u,3u,0x0Cu,0xC105u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC9u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C105u:
    if(m==0u&&x==0u&&e==0u){ /* EE A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C105u,3u,0x0Cu,0xC108u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CA5u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C105u,3u,0x0Cu,0xC108u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CA5u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C105u,3u,0x0Cu,0xC108u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CA5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C105u,3u,0x0Cu,0xC108u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CA5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C108u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C108u,3u,0x0Cu,0xC10Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C108u,3u,0x0Cu,0xC10Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C108u,3u,0x0Cu,0xC10Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CA5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C108u,3u,0x0Cu,0xC10Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CA5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C10Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Bu,3u,0x03u,0xC10Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Bu,3u,0x03u,0xC10Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Bu,3u,0x03u,0xC10Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0397u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Bu,3u,0x03u,0xC10Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0397u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C10Eu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Eu,1u,0x1Au,0xC10Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Eu,1u,0x1Au,0xC10Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Eu,1u,0x1Au,0xC10Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Eu,1u,0x1Au,0xC10Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C10Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Fu,3u,0xC4u,0xC112u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC111u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Fu,3u,0xC4u,0xC112u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC111u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Fu,3u,0xC4u,0xC112u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC111u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C10Fu,3u,0xC4u,0xC112u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC111u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C112u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C112u,3u,0x00u,0xC115u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C112u,3u,0x00u,0xC115u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C112u,2u,0x01u,0xC114u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C112u,2u,0x01u,0xC114u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C115u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C115u,3u,0x03u,0xC118u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C115u,3u,0x03u,0xC118u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C118u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C118u,1u,0x68u,0xC119u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C118u,1u,0x68u,0xC119u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C119u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C119u,1u,0x60u,0xC11Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C119u,1u,0x60u,0xC11Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C119u,1u,0x60u,0xC11Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C13Bu:
    if(m==0u&&x==0u&&e==0u){ /* EE A7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C13Bu,3u,0x0Cu,0xC13Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CA7u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C13Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 2C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C13Eu,3u,0x00u,0xC141u);
      sc_v11_op_lda(r,0x002Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C141u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C141u,3u,0x03u,0xC144u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C144u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C144u,3u,0x00u,0xC147u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C147u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C147u,3u,0x03u,0xC14Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C14Au:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Au,1u,0x68u,0xC14Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C14Cu:
    if(m==0u&&x==1u&&e==0u){ /* AC A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Cu,3u,0x0Cu,0xC14Fu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CA9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AC A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Cu,3u,0x0Cu,0xC14Fu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Cu,3u,0x0Cu,0xC14Fu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CA9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C14Fu:
    if(m==0u&&x==1u&&e==0u){ /* D0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Fu,2u,0x1Au,0xC151u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC16Bu;}
      if(c->pc!=0xC151u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC151u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Fu,2u,0x1Au,0xC151u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC16Bu;}
      if(c->pc!=0xC151u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC151u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Fu,2u,0x1Au,0xC151u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC16Bu;}
      if(c->pc!=0xC151u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC151u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C151u:
    if(m==0u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C151u,3u,0x0Du,0xC154u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C151u,3u,0x0Du,0xC154u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C151u,3u,0x0Du,0xC154u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C154u:
    if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C154u,3u,0x00u,0xC157u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C154u,2u,0x02u,0xC156u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C154u,2u,0x02u,0xC156u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C157u:
    if(m==0u&&x==1u&&e==0u){ /* 90 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C157u,2u,0x2Cu,0xC159u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC185u;}
      if(c->pc!=0xC159u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC159u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C159u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C159u,3u,0x0Bu,0xC15Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C159u,3u,0x0Bu,0xC15Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C15Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C15Cu,2u,0x27u,0xC15Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC185u;}
      if(c->pc!=0xC15Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC15Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C15Cu,2u,0x27u,0xC15Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC185u;}
      if(c->pc!=0xC15Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC15Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C15Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C15Eu,3u,0x0Bu,0xC161u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C15Eu,3u,0x0Bu,0xC161u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C161u:
    if(m==0u&&x==0u&&e==0u){ /* C9 D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C161u,3u,0x07u,0xC164u);
      sc_v11_op_compare(r,c->a,0x07D0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C161u,3u,0x07u,0xC164u);
      sc_v11_op_compare(r,c->a,0x07D0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C164u:
    if(m==0u&&x==0u&&e==0u){ /* B0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C164u,2u,0x1Fu,0xC166u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC185u;}
      if(c->pc!=0xC166u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC166u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C164u,2u,0x1Fu,0xC166u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC185u;}
      if(c->pc!=0xC166u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC166u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C166u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C166u,3u,0x00u,0xC169u);
      sc_v11_op_lda(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C166u,3u,0x00u,0xC169u);
      sc_v11_op_lda(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C169u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C169u,2u,0x0Du,0xC16Bu);
      if(1){c->pc=0xC178u;}
      if(c->pc!=0xC16Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC16Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C169u,2u,0x0Du,0xC16Bu);
      if(1){c->pc=0xC178u;}
      if(c->pc!=0xC16Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC16Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C16Bu:
    if(m==0u&&x==0u&&e==0u){ /* C0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C16Bu,3u,0x00u,0xC16Eu);
      sc_v11_op_compare(r,c->y,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C16Bu,2u,0x01u,0xC16Du);
      sc_v11_op_compare(r,c->y,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C16Bu,3u,0x00u,0xC16Eu);
      sc_v11_op_compare(r,c->y,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C16Bu,2u,0x01u,0xC16Du);
      sc_v11_op_compare(r,c->y,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C16Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C16Eu,2u,0x15u,0xC170u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC185u;}
      if(c->pc!=0xC170u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC170u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C16Eu,2u,0x15u,0xC170u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC185u;}
      if(c->pc!=0xC170u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC170u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C170u:
    if(m==0u&&x==0u&&e==0u){ /* AD A3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C170u,3u,0x0Cu,0xC173u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD A3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C170u,3u,0x0Cu,0xC173u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CA3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C173u:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C173u,2u,0x10u,0xC175u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC185u;}
      if(c->pc!=0xC175u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC175u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C173u,2u,0x10u,0xC175u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC185u;}
      if(c->pc!=0xC175u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC175u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C175u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C175u,3u,0x00u,0xC178u);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C175u,2u,0x1Fu,0xC177u);
      sc_v11_op_lda(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C178u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C178u,3u,0x03u,0xC17Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C178u,3u,0x03u,0xC17Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C17Bu:
    if(m==0u&&x==0u&&e==0u){ /* EE A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C17Bu,3u,0x0Cu,0xC17Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CA9u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C17Bu,3u,0x0Cu,0xC17Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CA9u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C17Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C17Eu,3u,0x00u,0xC181u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C17Eu,3u,0x00u,0xC181u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C181u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C181u,3u,0x03u,0xC184u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C181u,3u,0x03u,0xC184u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C184u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C184u,1u,0x68u,0xC185u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C184u,1u,0x68u,0xC185u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C185u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C185u,1u,0x60u,0xC186u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C185u,1u,0x60u,0xC186u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C186u:
    if(m==0u&&x==1u&&e==0u){ /* AD AB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C186u,3u,0x0Cu,0xC189u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CABu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD AB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C186u,3u,0x0Cu,0xC189u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CABu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD AB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C186u,3u,0x0Cu,0xC189u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CABu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C189u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C189u,3u,0x00u,0xC18Cu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C189u,2u,0xFFu,0xC18Bu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C189u,2u,0xFFu,0xC18Bu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C18Cu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C18Cu,1u,0x0Au,0xC18Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C18Du:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C18Du,1u,0xA8u,0xC18Eu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C18Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C18Eu,3u,0x0Eu,0xC191u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C191u:
    if(m==0u&&x==1u&&e==0u){ /* D9 C0 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C191u,3u,0xC1u,0xC194u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC1C0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C194u:
    if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C194u,2u,0x05u,0xC196u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC19Bu;}
      if(c->pc!=0xC196u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC196u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C196u:
    if(m==0u&&x==0u&&e==0u){ /* EE AB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C196u,3u,0x0Cu,0xC199u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CABu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE AB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C196u,3u,0x0Cu,0xC199u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CABu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C199u:
    if(m==0u&&x==0u&&e==0u){ /* 80 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C199u,2u,0x17u,0xC19Bu);
      if(1){c->pc=0xC1B2u;}
      if(c->pc!=0xC19Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC19Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C199u,2u,0x17u,0xC19Bu);
      if(1){c->pc=0xC1B2u;}
      if(c->pc!=0xC19Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC19Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C19Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD AC 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C19Bu,3u,0x0Cu,0xC19Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CACu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C19Eu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C19Eu,3u,0x00u,0xC1A1u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A1u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A1u,1u,0x0Au,0xC1A2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A2u:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A2u,1u,0xA8u,0xC1A3u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A3u:
    if(m==0u&&x==1u&&e==0u){ /* AD 05 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A3u,3u,0x0Eu,0xC1A6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E05u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A6u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A6u,1u,0x18u,0xC1A7u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A7u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 03 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A7u,3u,0x0Eu,0xC1AAu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1AAu:
    if(m==0u&&x==1u&&e==0u){ /* D9 C8 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1AAu,3u,0xC1u,0xC1ADu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC1C8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1ADu:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1ADu,2u,0x10u,0xC1AFu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC1BFu;}
      if(c->pc!=0xC1AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1AFu:
    if(m==0u&&x==0u&&e==0u){ /* EE AC 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1AFu,3u,0x0Cu,0xC1B2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CACu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE AC 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1AFu,3u,0x0Cu,0xC1B2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CACu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1B2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1B2u,3u,0x00u,0xC1B5u);
      sc_v11_op_lda(r,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1B2u,3u,0x00u,0xC1B5u);
      sc_v11_op_lda(r,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1B5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1B5u,3u,0x03u,0xC1B8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1B5u,3u,0x03u,0xC1B8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1B8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1B8u,3u,0x00u,0xC1BBu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1B8u,3u,0x00u,0xC1BBu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1BBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1BBu,3u,0x03u,0xC1BEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1BBu,3u,0x03u,0xC1BEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1BEu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1BEu,1u,0x68u,0xC1BFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1BEu,1u,0x68u,0xC1BFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1BFu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1BFu,1u,0x60u,0xC1C0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1CEu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1CEu,2u,0x20u,0xC1D0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1CEu,2u,0x20u,0xC1D0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1CEu,2u,0x20u,0xC1D0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1D0u:
    if(m==1u&&x==1u&&e==0u){ /* AD AE 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1D0u,3u,0x0Cu,0xC1D3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CAEu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1D3u:
    if(m==1u&&x==1u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1D3u,2u,0x15u,0xC1D5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC1EAu;}
      if(c->pc!=0xC1D5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1D5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1D5u:
    if(m==1u&&x==0u&&e==0u){ /* CE AE 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1D5u,3u,0x0Cu,0xC1D8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CAEu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE AE 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1D5u,3u,0x0Cu,0xC1D8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CAEu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1D8u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1D8u,2u,0x20u,0xC1DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1D8u,2u,0x20u,0xC1DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1DAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1DAu,2u,0x2Cu,0xC1DCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC208u;}
      if(c->pc!=0xC1DCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1DCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1DAu,2u,0x2Cu,0xC1DCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC208u;}
      if(c->pc!=0xC1DCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1DCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1DCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1DCu,3u,0x00u,0xC1DFu);
      sc_v11_op_lda(r,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1DCu,3u,0x00u,0xC1DFu);
      sc_v11_op_lda(r,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1DFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1DFu,3u,0x03u,0xC1E2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1DFu,3u,0x03u,0xC1E2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1E2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1E2u,3u,0x00u,0xC1E5u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1E2u,3u,0x00u,0xC1E5u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1E5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1E5u,3u,0x03u,0xC1E8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1E5u,3u,0x03u,0xC1E8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1E8u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1E8u,1u,0x68u,0xC1E9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1E8u,1u,0x68u,0xC1E9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1E9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1E9u,1u,0x60u,0xC1EAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1E9u,1u,0x60u,0xC1EAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1EAu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1EAu,2u,0x20u,0xC1ECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1ECu:
    if(m==0u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1ECu,3u,0x0Du,0xC1EFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1EFu:
    if(m==0u&&x==1u&&e==0u){ /* F0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1EFu,2u,0x17u,0xC1F1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC208u;}
      if(c->pc!=0xC1F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1F1u:
    if(m==0u&&x==0u&&e==0u){ /* AD AD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F1u,3u,0x0Cu,0xC1F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CADu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD AD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F1u,3u,0x0Cu,0xC1F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CADu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1F4u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F4u,1u,0x0Au,0xC1F5u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F4u,1u,0x0Au,0xC1F5u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1F5u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F5u,1u,0xA8u,0xC1F6u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F5u,1u,0xA8u,0xC1F6u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1F6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F6u,3u,0x0Eu,0xC1F9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 0B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F6u,3u,0x0Eu,0xC1F9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1F9u:
    if(m==0u&&x==0u&&e==0u){ /* D9 09 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F9u,3u,0xC2u,0xC1FCu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC209u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D9 09 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1F9u,3u,0xC2u,0xC1FCu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC209u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1FCu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1FCu,2u,0x0Au,0xC1FEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC208u;}
      if(c->pc!=0xC1FEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1FEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1FCu,2u,0x0Au,0xC1FEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC208u;}
      if(c->pc!=0xC1FEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1FEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1FEu:
    if(m==0u&&x==0u&&e==0u){ /* AD AD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1FEu,3u,0x0Cu,0xC201u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CADu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD AD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1FEu,3u,0x0Cu,0xC201u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CADu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C201u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C201u,1u,0x1Au,0xC202u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C201u,1u,0x1Au,0xC202u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C202u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C202u,3u,0x18u,0xC205u);
      sc_v11_op_ora(r,0x1800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 09 00 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C202u,3u,0x18u,0xC205u);
      sc_v11_op_ora(r,0x1800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C205u:
    if(m==0u&&x==0u&&e==0u){ /* 8D AD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C205u,3u,0x0Cu,0xC208u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CADu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D AD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C205u,3u,0x0Cu,0xC208u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CADu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C208u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C208u,1u,0x60u,0xC209u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C20Fu:
    if(m==0u&&x==1u&&e==0u){ /* AD AF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C20Fu,3u,0x0Cu,0xC212u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CAFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD AF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C20Fu,3u,0x0Cu,0xC212u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD AF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C20Fu,3u,0x0Cu,0xC212u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C212u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C212u,3u,0x00u,0xC215u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C212u,2u,0xFFu,0xC214u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C212u,2u,0xFFu,0xC214u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C215u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C215u,1u,0x0Au,0xC216u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C216u:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C216u,1u,0xA8u,0xC217u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C217u:
    if(m==0u&&x==1u&&e==0u){ /* AD 27 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C217u,3u,0x0Eu,0xC21Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E27u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C21Au:
    if(m==0u&&x==1u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C21Au,2u,0x0Au,0xC21Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC226u;}
      if(c->pc!=0xC21Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC21Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C21Cu:
    if(m==0u&&x==1u&&e==0u){ /* D9 4D C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C21Cu,3u,0xC2u,0xC21Fu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC24Du)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C21Fu:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C21Fu,2u,0x05u,0xC221u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC226u;}
      if(c->pc!=0xC221u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC221u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C221u:
    if(m==0u&&x==0u&&e==0u){ /* EE AF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C221u,3u,0x0Cu,0xC224u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CAFu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE AF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C221u,3u,0x0Cu,0xC224u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CAFu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C224u:
    if(m==0u&&x==0u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C224u,2u,0x19u,0xC226u);
      if(1){c->pc=0xC23Fu;}
      if(c->pc!=0xC226u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC226u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C224u,2u,0x19u,0xC226u);
      if(1){c->pc=0xC23Fu;}
      if(c->pc!=0xC226u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC226u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C226u:
    if(m==0u&&x==1u&&e==0u){ /* AD B0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C226u,3u,0x0Cu,0xC229u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C229u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C229u,3u,0x00u,0xC22Cu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C22Cu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C22Cu,1u,0x0Au,0xC22Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C22Du:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C22Du,1u,0xA8u,0xC22Eu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C22Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD A5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C22Eu,3u,0x0Bu,0xC231u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C231u:
    if(m==0u&&x==1u&&e==0u){ /* D9 57 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C231u,3u,0xC2u,0xC234u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC257u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C234u:
    if(m==0u&&x==1u&&e==0u){ /* AD A7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C234u,3u,0x0Bu,0xC237u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C237u:
    if(m==0u&&x==1u&&e==0u){ /* F9 61 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C237u,3u,0xC2u,0xC23Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC261u)),16u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C23Au:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C23Au,2u,0x10u,0xC23Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC24Cu;}
      if(c->pc!=0xC23Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC23Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C23Cu:
    if(m==0u&&x==0u&&e==0u){ /* EE B0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C23Cu,3u,0x0Cu,0xC23Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB0u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE B0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C23Cu,3u,0x0Cu,0xC23Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB0u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C23Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C23Fu,3u,0x00u,0xC242u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C23Fu,3u,0x00u,0xC242u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C242u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C242u,3u,0x03u,0xC245u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C242u,3u,0x03u,0xC245u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C245u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C245u,3u,0x00u,0xC248u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C245u,3u,0x00u,0xC248u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C248u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C248u,3u,0x03u,0xC24Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C248u,3u,0x03u,0xC24Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C24Bu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C24Bu,1u,0x68u,0xC24Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C24Bu,1u,0x68u,0xC24Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C24Cu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C24Cu,1u,0x60u,0xC24Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C26Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD B1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Bu,3u,0x0Cu,0xC26Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD B1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Bu,3u,0x0Cu,0xC26Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD B1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Bu,3u,0x0Cu,0xC26Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C26Eu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Eu,1u,0x0Au,0xC26Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Eu,1u,0x0Au,0xC26Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Eu,1u,0x0Au,0xC26Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C26Fu:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Fu,1u,0xA8u,0xC270u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Fu,1u,0xA8u,0xC270u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Fu,1u,0xA8u,0xC270u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C270u:
    if(m==0u&&x==1u&&e==0u){ /* AD 07 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C270u,3u,0x0Eu,0xC273u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 07 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C270u,3u,0x0Eu,0xC273u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 07 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C270u,3u,0x0Eu,0xC273u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C273u:
    if(m==0u&&x==1u&&e==0u){ /* D9 89 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C273u,3u,0xC2u,0xC276u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC289u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D9 89 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C273u,3u,0xC2u,0xC276u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC289u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D9 89 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C273u,3u,0xC2u,0xC276u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC289u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C276u:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C276u,2u,0x10u,0xC278u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC288u;}
      if(c->pc!=0xC278u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC278u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C276u,2u,0x10u,0xC278u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC288u;}
      if(c->pc!=0xC278u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC278u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C276u,2u,0x10u,0xC278u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC288u;}
      if(c->pc!=0xC278u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC278u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C278u:
    if(m==0u&&x==0u&&e==0u){ /* EE B1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C278u,3u,0x0Cu,0xC27Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB1u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE B1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C278u,3u,0x0Cu,0xC27Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB1u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE B1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C278u,3u,0x0Cu,0xC27Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB1u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE B1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C278u,3u,0x0Cu,0xC27Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB1u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C27Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 11 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C27Bu,3u,0x00u,0xC27Eu);
      sc_v11_op_lda(r,0x0011u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 11 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C27Bu,3u,0x00u,0xC27Eu);
      sc_v11_op_lda(r,0x0011u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C27Bu,2u,0x11u,0xC27Du);
      sc_v11_op_lda(r,0x0011u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C27Bu,2u,0x11u,0xC27Du);
      sc_v11_op_lda(r,0x0011u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C27Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C27Eu,3u,0x03u,0xC281u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C27Eu,3u,0x03u,0xC281u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C281u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C281u,3u,0x00u,0xC284u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C281u,3u,0x00u,0xC284u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C284u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C284u,3u,0x03u,0xC287u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C284u,3u,0x03u,0xC287u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C287u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C287u,1u,0x68u,0xC288u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C287u,1u,0x68u,0xC288u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C288u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C288u,1u,0x60u,0xC289u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C288u,1u,0x60u,0xC289u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C288u,1u,0x60u,0xC289u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C291u:
    if(m==0u&&x==1u&&e==0u){ /* AD B3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C291u,3u,0x0Cu,0xC294u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD B3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C291u,3u,0x0Cu,0xC294u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD B3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C291u,3u,0x0Cu,0xC294u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C294u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C294u,1u,0x0Au,0xC295u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C294u,1u,0x0Au,0xC295u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C294u,1u,0x0Au,0xC295u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C295u:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C295u,1u,0xA8u,0xC296u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C295u,1u,0xA8u,0xC296u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C295u,1u,0xA8u,0xC296u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C296u:
    if(m==0u&&x==1u&&e==0u){ /* AD 09 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C296u,3u,0x0Eu,0xC299u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E09u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 09 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C296u,3u,0x0Eu,0xC299u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E09u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 09 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C296u,3u,0x0Eu,0xC299u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E09u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C299u:
    if(m==0u&&x==1u&&e==0u){ /* D9 AF C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C299u,3u,0xC2u,0xC29Cu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC2AFu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D9 AF C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C299u,3u,0xC2u,0xC29Cu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC2AFu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D9 AF C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C299u,3u,0xC2u,0xC29Cu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC2AFu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C29Cu:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C29Cu,2u,0x10u,0xC29Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2AEu;}
      if(c->pc!=0xC29Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC29Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C29Cu,2u,0x10u,0xC29Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2AEu;}
      if(c->pc!=0xC29Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC29Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C29Cu,2u,0x10u,0xC29Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2AEu;}
      if(c->pc!=0xC29Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC29Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C29Eu:
    if(m==0u&&x==0u&&e==0u){ /* EE B3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C29Eu,3u,0x0Cu,0xC2A1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB3u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE B3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C29Eu,3u,0x0Cu,0xC2A1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB3u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE B3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C29Eu,3u,0x0Cu,0xC2A1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB3u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE B3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C29Eu,3u,0x0Cu,0xC2A1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB3u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2A1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2A1u,3u,0x00u,0xC2A4u);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2A1u,3u,0x00u,0xC2A4u);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2A1u,2u,0x12u,0xC2A3u);
      sc_v11_op_lda(r,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2A1u,2u,0x12u,0xC2A3u);
      sc_v11_op_lda(r,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2A4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2A4u,3u,0x03u,0xC2A7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2A4u,3u,0x03u,0xC2A7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2A7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2A7u,3u,0x00u,0xC2AAu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2A7u,3u,0x00u,0xC2AAu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2AAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2AAu,3u,0x03u,0xC2ADu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2AAu,3u,0x03u,0xC2ADu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2ADu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2ADu,1u,0x68u,0xC2AEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2ADu,1u,0x68u,0xC2AEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2AEu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2AEu,1u,0x60u,0xC2AFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2AEu,1u,0x60u,0xC2AFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2AEu,1u,0x60u,0xC2AFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2B7u:
    if(m==0u&&x==1u&&e==0u){ /* AD B5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2B7u,3u,0x0Cu,0xC2BAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD B5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2B7u,3u,0x0Cu,0xC2BAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD B5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2B7u,3u,0x0Cu,0xC2BAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2BAu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BAu,1u,0x0Au,0xC2BBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BAu,1u,0x0Au,0xC2BBu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BAu,1u,0x0Au,0xC2BBu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2BBu:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BBu,1u,0xA8u,0xC2BCu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BBu,1u,0xA8u,0xC2BCu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BBu,1u,0xA8u,0xC2BCu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2BCu:
    if(m==0u&&x==1u&&e==0u){ /* AD 05 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BCu,3u,0x0Eu,0xC2BFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E05u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 05 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BCu,3u,0x0Eu,0xC2BFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E05u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 05 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BCu,3u,0x0Eu,0xC2BFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E05u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2BFu:
    if(m==0u&&x==1u&&e==0u){ /* D9 D5 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BFu,3u,0xC2u,0xC2C2u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC2D5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D9 D5 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BFu,3u,0xC2u,0xC2C2u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC2D5u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D9 D5 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BFu,3u,0xC2u,0xC2C2u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC2D5u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2C2u:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C2u,2u,0x10u,0xC2C4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2D4u;}
      if(c->pc!=0xC2C4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2C4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C2u,2u,0x10u,0xC2C4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2D4u;}
      if(c->pc!=0xC2C4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2C4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C2u,2u,0x10u,0xC2C4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2D4u;}
      if(c->pc!=0xC2C4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2C4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2C4u:
    if(m==0u&&x==0u&&e==0u){ /* EE B5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C4u,3u,0x0Cu,0xC2C7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB5u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE B5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C4u,3u,0x0Cu,0xC2C7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB5u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE B5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C4u,3u,0x0Cu,0xC2C7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE B5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C4u,3u,0x0Cu,0xC2C7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2C7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C7u,3u,0x00u,0xC2CAu);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C7u,3u,0x00u,0xC2CAu);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C7u,2u,0x18u,0xC2C9u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C7u,2u,0x18u,0xC2C9u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2CAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2CAu,3u,0x03u,0xC2CDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2CAu,3u,0x03u,0xC2CDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2CDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2CDu,3u,0x00u,0xC2D0u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2CDu,3u,0x00u,0xC2D0u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2D0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2D0u,3u,0x03u,0xC2D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2D0u,3u,0x03u,0xC2D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2D3u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2D3u,1u,0x68u,0xC2D4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2D3u,1u,0x68u,0xC2D4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2D4u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2D4u,1u,0x60u,0xC2D5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2D4u,1u,0x60u,0xC2D5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2D4u,1u,0x60u,0xC2D5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2DDu:
    if(m==0u&&x==1u&&e==0u){ /* AD B7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2DDu,3u,0x0Cu,0xC2E0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD B7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2DDu,3u,0x0Cu,0xC2E0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD B7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2DDu,3u,0x0Cu,0xC2E0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E0u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E0u,1u,0x0Au,0xC2E1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E0u,1u,0x0Au,0xC2E1u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E0u,1u,0x0Au,0xC2E1u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E1u:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E1u,1u,0xA8u,0xC2E2u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E1u,1u,0xA8u,0xC2E2u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E1u,1u,0xA8u,0xC2E2u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E2u:
    if(m==0u&&x==1u&&e==0u){ /* AD 23 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E2u,3u,0x0Eu,0xC2E5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E23u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 23 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E2u,3u,0x0Eu,0xC2E5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E23u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 23 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E2u,3u,0x0Eu,0xC2E5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E23u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E5u:
    if(m==0u&&x==1u&&e==0u){ /* D9 FB C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E5u,3u,0xC2u,0xC2E8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC2FBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D9 FB C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E5u,3u,0xC2u,0xC2E8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC2FBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D9 FB C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E5u,3u,0xC2u,0xC2E8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC2FBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E8u:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E8u,2u,0x10u,0xC2EAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2FAu;}
      if(c->pc!=0xC2EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E8u,2u,0x10u,0xC2EAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2FAu;}
      if(c->pc!=0xC2EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E8u,2u,0x10u,0xC2EAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2FAu;}
      if(c->pc!=0xC2EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2EAu:
    if(m==0u&&x==0u&&e==0u){ /* EE B7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2EAu,3u,0x0Cu,0xC2EDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB7u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE B7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2EAu,3u,0x0Cu,0xC2EDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB7u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE B7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2EAu,3u,0x0Cu,0xC2EDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB7u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE B7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2EAu,3u,0x0Cu,0xC2EDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB7u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2EDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 19 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2EDu,3u,0x00u,0xC2F0u);
      sc_v11_op_lda(r,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 19 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2EDu,3u,0x00u,0xC2F0u);
      sc_v11_op_lda(r,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2EDu,2u,0x19u,0xC2EFu);
      sc_v11_op_lda(r,0x0019u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2EDu,2u,0x19u,0xC2EFu);
      sc_v11_op_lda(r,0x0019u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2F0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2F0u,3u,0x03u,0xC2F3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2F0u,3u,0x03u,0xC2F3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2F3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2F3u,3u,0x00u,0xC2F6u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2F3u,3u,0x00u,0xC2F6u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2F6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2F6u,3u,0x03u,0xC2F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2F6u,3u,0x03u,0xC2F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2F9u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2F9u,1u,0x68u,0xC2FAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2F9u,1u,0x68u,0xC2FAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2FAu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2FAu,1u,0x60u,0xC2FBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2FAu,1u,0x60u,0xC2FBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2FAu,1u,0x60u,0xC2FBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C303u:
    if(m==0u&&x==1u&&e==0u){ /* AD B9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C303u,3u,0x0Cu,0xC306u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD B9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C303u,3u,0x0Cu,0xC306u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD B9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C303u,3u,0x0Cu,0xC306u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CB9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C306u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C306u,1u,0x0Au,0xC307u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C306u,1u,0x0Au,0xC307u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C306u,1u,0x0Au,0xC307u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C307u:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C307u,1u,0xA8u,0xC308u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C307u,1u,0xA8u,0xC308u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C307u,1u,0xA8u,0xC308u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C308u:
    if(m==0u&&x==1u&&e==0u){ /* AD 17 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C308u,3u,0x0Eu,0xC30Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E17u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 17 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C308u,3u,0x0Eu,0xC30Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E17u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 17 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C308u,3u,0x0Eu,0xC30Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E17u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C30Bu:
    if(m==0u&&x==1u&&e==0u){ /* D9 21 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C30Bu,3u,0xC3u,0xC30Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC321u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D9 21 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C30Bu,3u,0xC3u,0xC30Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC321u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D9 21 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C30Bu,3u,0xC3u,0xC30Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC321u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C30Eu:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C30Eu,2u,0x10u,0xC310u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC320u;}
      if(c->pc!=0xC310u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC310u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C30Eu,2u,0x10u,0xC310u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC320u;}
      if(c->pc!=0xC310u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC310u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C30Eu,2u,0x10u,0xC310u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC320u;}
      if(c->pc!=0xC310u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC310u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C310u:
    if(m==0u&&x==0u&&e==0u){ /* EE B9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C310u,3u,0x0Cu,0xC313u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB9u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE B9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C310u,3u,0x0Cu,0xC313u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB9u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE B9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C310u,3u,0x0Cu,0xC313u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB9u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE B9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C310u,3u,0x0Cu,0xC313u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CB9u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C313u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C313u,3u,0x00u,0xC316u);
      sc_v11_op_lda(r,0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C313u,3u,0x00u,0xC316u);
      sc_v11_op_lda(r,0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C313u,2u,0x1Au,0xC315u);
      sc_v11_op_lda(r,0x001Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C313u,2u,0x1Au,0xC315u);
      sc_v11_op_lda(r,0x001Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C316u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C316u,3u,0x03u,0xC319u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C316u,3u,0x03u,0xC319u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C319u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C319u,3u,0x00u,0xC31Cu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C319u,3u,0x00u,0xC31Cu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C31Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C31Cu,3u,0x03u,0xC31Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C31Cu,3u,0x03u,0xC31Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C31Fu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C31Fu,1u,0x68u,0xC320u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C31Fu,1u,0x68u,0xC320u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C320u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C320u,1u,0x60u,0xC321u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C320u,1u,0x60u,0xC321u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C320u,1u,0x60u,0xC321u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C327u:
    if(m==0u&&x==1u&&e==0u){ /* AD BB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C327u,3u,0x0Cu,0xC32Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CBBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD BB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C327u,3u,0x0Cu,0xC32Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CBBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD BB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C327u,3u,0x0Cu,0xC32Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CBBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C32Au:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Au,1u,0x0Au,0xC32Bu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Au,1u,0x0Au,0xC32Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Au,1u,0x0Au,0xC32Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C32Bu:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Bu,1u,0xA8u,0xC32Cu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Bu,1u,0xA8u,0xC32Cu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Bu,1u,0xA8u,0xC32Cu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C32Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Cu,3u,0x0Eu,0xC32Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E1Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 1B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Cu,3u,0x0Eu,0xC32Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E1Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 1B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Cu,3u,0x0Eu,0xC32Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E1Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C32Fu:
    if(m==0u&&x==1u&&e==0u){ /* D9 45 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Fu,3u,0xC3u,0xC332u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC345u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D9 45 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Fu,3u,0xC3u,0xC332u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC345u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D9 45 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Fu,3u,0xC3u,0xC332u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC345u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C332u:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C332u,2u,0x10u,0xC334u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC344u;}
      if(c->pc!=0xC334u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC334u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C332u,2u,0x10u,0xC334u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC344u;}
      if(c->pc!=0xC334u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC334u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C332u,2u,0x10u,0xC334u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC344u;}
      if(c->pc!=0xC334u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC334u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C334u:
    if(m==0u&&x==0u&&e==0u){ /* EE BB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C334u,3u,0x0Cu,0xC337u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CBBu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE BB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C334u,3u,0x0Cu,0xC337u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CBBu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE BB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C334u,3u,0x0Cu,0xC337u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CBBu),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE BB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C334u,3u,0x0Cu,0xC337u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CBBu),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C337u:
    if(m==0u&&x==0u&&e==0u){ /* A9 17 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C337u,3u,0x00u,0xC33Au);
      sc_v11_op_lda(r,0x0017u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 17 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C337u,3u,0x00u,0xC33Au);
      sc_v11_op_lda(r,0x0017u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C337u,2u,0x17u,0xC339u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C337u,2u,0x17u,0xC339u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C33Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C33Au,3u,0x03u,0xC33Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C33Au,3u,0x03u,0xC33Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C33Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C33Du,3u,0x00u,0xC340u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C33Du,3u,0x00u,0xC340u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C340u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C340u,3u,0x03u,0xC343u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C340u,3u,0x03u,0xC343u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C343u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C343u,1u,0x68u,0xC344u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C343u,1u,0x68u,0xC344u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C344u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C344u,1u,0x60u,0xC345u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C344u,1u,0x60u,0xC345u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C344u,1u,0x60u,0xC345u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C34Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD BD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C34Bu,3u,0x0Cu,0xC34Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CBDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD BD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C34Bu,3u,0x0Cu,0xC34Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CBDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD BD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C34Bu,3u,0x0Cu,0xC34Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CBDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C34Eu:
    if(m==0u&&x==1u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C34Eu,2u,0x18u,0xC350u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC368u;}
      if(c->pc!=0xC350u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC350u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C34Eu,2u,0x18u,0xC350u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC368u;}
      if(c->pc!=0xC350u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC350u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C34Eu,2u,0x18u,0xC350u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC368u;}
      if(c->pc!=0xC350u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC350u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C350u:
    if(m==0u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C350u,3u,0x0Du,0xC353u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C350u,3u,0x0Du,0xC353u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C350u,3u,0x0Du,0xC353u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C353u:
    if(m==0u&&x==1u&&e==0u){ /* C9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C353u,3u,0x00u,0xC356u);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C353u,2u,0x05u,0xC355u);
      sc_v11_op_compare(r,c->a,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C353u,2u,0x05u,0xC355u);
      sc_v11_op_compare(r,c->a,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C356u:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C356u,2u,0x10u,0xC358u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC368u;}
      if(c->pc!=0xC358u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC358u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C358u:
    if(m==0u&&x==0u&&e==0u){ /* EE BD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C358u,3u,0x0Cu,0xC35Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CBDu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE BD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C358u,3u,0x0Cu,0xC35Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CBDu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C35Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C35Bu,3u,0x00u,0xC35Eu);
      sc_v11_op_lda(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C35Bu,3u,0x00u,0xC35Eu);
      sc_v11_op_lda(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C35Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C35Eu,3u,0x03u,0xC361u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C35Eu,3u,0x03u,0xC361u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C361u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C361u,3u,0x00u,0xC364u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C361u,3u,0x00u,0xC364u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C364u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C364u,3u,0x03u,0xC367u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C364u,3u,0x03u,0xC367u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C367u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C367u,1u,0x68u,0xC368u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C367u,1u,0x68u,0xC368u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C368u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C368u,1u,0x60u,0xC369u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C368u,1u,0x60u,0xC369u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C368u,1u,0x60u,0xC369u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C369u:
    if(m==0u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C369u,3u,0x0Du,0xC36Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C369u,3u,0x0Du,0xC36Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C369u,3u,0x0Du,0xC36Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C36Cu:
    if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C36Cu,3u,0x00u,0xC36Fu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C36Cu,2u,0x02u,0xC36Eu);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C36Cu,2u,0x02u,0xC36Eu);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C36Fu:
    if(m==0u&&x==1u&&e==0u){ /* 90 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C36Fu,2u,0x1Fu,0xC371u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC390u;}
      if(c->pc!=0xC371u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC371u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C371u:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C371u,3u,0x0Cu,0xC374u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CBFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD BF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C371u,3u,0x0Cu,0xC374u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CBFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C374u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C374u,2u,0x1Au,0xC376u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC390u;}
      if(c->pc!=0xC376u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC376u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C374u,2u,0x1Au,0xC376u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC390u;}
      if(c->pc!=0xC376u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC376u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C376u:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C376u,3u,0x0Eu,0xC379u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 13 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C376u,3u,0x0Eu,0xC379u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C379u:
    if(m==0u&&x==0u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C379u,2u,0x15u,0xC37Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC390u;}
      if(c->pc!=0xC37Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC37Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C379u,2u,0x15u,0xC37Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC390u;}
      if(c->pc!=0xC37Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC37Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C37Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 11 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C37Bu,3u,0x0Eu,0xC37Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 11 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C37Bu,3u,0x0Eu,0xC37Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C37Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C37Eu,2u,0x10u,0xC380u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC390u;}
      if(c->pc!=0xC380u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC380u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C37Eu,2u,0x10u,0xC380u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC390u;}
      if(c->pc!=0xC380u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC380u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C380u:
    if(m==0u&&x==0u&&e==0u){ /* EE BF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C380u,3u,0x0Cu,0xC383u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CBFu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE BF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C380u,3u,0x0Cu,0xC383u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CBFu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C383u:
    if(m==0u&&x==0u&&e==0u){ /* A9 16 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C383u,3u,0x00u,0xC386u);
      sc_v11_op_lda(r,0x0016u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 16 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C383u,3u,0x00u,0xC386u);
      sc_v11_op_lda(r,0x0016u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C386u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C386u,3u,0x03u,0xC389u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C386u,3u,0x03u,0xC389u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C389u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C389u,3u,0x00u,0xC38Cu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C389u,3u,0x00u,0xC38Cu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C38Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C38Cu,3u,0x03u,0xC38Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C38Cu,3u,0x03u,0xC38Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C38Fu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C38Fu,1u,0x68u,0xC390u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C38Fu,1u,0x68u,0xC390u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C390u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C390u,1u,0x60u,0xC391u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C391u:
    if(m==0u&&x==1u&&e==0u){ /* AD C3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C391u,3u,0x0Cu,0xC394u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CC3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C394u:
    if(m==0u&&x==1u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C394u,2u,0x18u,0xC396u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3AEu;}
      if(c->pc!=0xC396u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC396u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C396u:
    if(m==0u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C396u,3u,0x0Du,0xC399u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C399u:
    if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C399u,3u,0x00u,0xC39Cu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C39Cu:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C39Cu,2u,0x10u,0xC39Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3AEu;}
      if(c->pc!=0xC39Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC39Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C39Eu:
    if(m==0u&&x==0u&&e==0u){ /* EE C3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C39Eu,3u,0x0Cu,0xC3A1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC3u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE C3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C39Eu,3u,0x0Cu,0xC3A1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC3u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3A1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3A1u,3u,0x00u,0xC3A4u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3A1u,3u,0x00u,0xC3A4u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3A4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3A4u,3u,0x03u,0xC3A7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3A4u,3u,0x03u,0xC3A7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3A7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3A7u,3u,0x00u,0xC3AAu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3A7u,3u,0x00u,0xC3AAu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3AAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3AAu,3u,0x03u,0xC3ADu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3AAu,3u,0x03u,0xC3ADu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3ADu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3ADu,1u,0x68u,0xC3AEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3ADu,1u,0x68u,0xC3AEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3AEu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3AEu,1u,0x60u,0xC3AFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3AFu:
    if(m==0u&&x==1u&&e==0u){ /* AD C1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3AFu,3u,0x0Cu,0xC3B2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CC1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD C1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3AFu,3u,0x0Cu,0xC3B2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CC1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD C1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3AFu,3u,0x0Cu,0xC3B2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CC1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3B2u:
    if(m==0u&&x==1u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B2u,2u,0x18u,0xC3B4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3CCu;}
      if(c->pc!=0xC3B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B2u,2u,0x18u,0xC3B4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3CCu;}
      if(c->pc!=0xC3B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B2u,2u,0x18u,0xC3B4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3CCu;}
      if(c->pc!=0xC3B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3B4u:
    if(m==0u&&x==1u&&e==0u){ /* AD 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B4u,3u,0x0Bu,0xC3B7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B4u,3u,0x0Bu,0xC3B7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B53u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B4u,3u,0x0Bu,0xC3B7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B53u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3B7u:
    if(m==0u&&x==1u&&e==0u){ /* C9 9E 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B7u,3u,0x07u,0xC3BAu);
      sc_v11_op_compare(r,c->a,0x079Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B7u,2u,0x9Eu,0xC3B9u);
      sc_v11_op_compare(r,c->a,0x009Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B7u,2u,0x9Eu,0xC3B9u);
      sc_v11_op_compare(r,c->a,0x009Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3BAu:
    if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3BAu,2u,0x10u,0xC3BCu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3CCu;}
      if(c->pc!=0xC3BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3BCu:
    if(m==0u&&x==0u&&e==0u){ /* EE C1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3BCu,3u,0x0Cu,0xC3BFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC1u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE C1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3BCu,3u,0x0Cu,0xC3BFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC1u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3BFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 13 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3BFu,3u,0x00u,0xC3C2u);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 13 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3BFu,3u,0x00u,0xC3C2u);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3C2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3C2u,3u,0x03u,0xC3C5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3C2u,3u,0x03u,0xC3C5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3C5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3C5u,3u,0x00u,0xC3C8u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3C5u,3u,0x00u,0xC3C8u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3C8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3C8u,3u,0x03u,0xC3CBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3C8u,3u,0x03u,0xC3CBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3CBu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CBu,1u,0x68u,0xC3CCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CBu,1u,0x68u,0xC3CCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3CCu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CCu,1u,0x60u,0xC3CDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CCu,1u,0x60u,0xC3CDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CCu,1u,0x60u,0xC3CDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3CDu:
    if(m==0u&&x==1u&&e==0u){ /* AD C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CDu,3u,0x0Cu,0xC3D0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CDu,3u,0x0Cu,0xC3D0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CC5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CDu,3u,0x0Cu,0xC3D0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CC5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3D0u:
    if(m==0u&&x==1u&&e==0u){ /* D0 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D0u,2u,0x32u,0xC3D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC404u;}
      if(c->pc!=0xC3D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D0u,2u,0x32u,0xC3D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC404u;}
      if(c->pc!=0xC3D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D0u,2u,0x32u,0xC3D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC404u;}
      if(c->pc!=0xC3D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3D2u:
    if(m==0u&&x==1u&&e==0u){ /* A0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D2u,2u,0x06u,0xC3D4u);
      sc_v11_op_ldy(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D2u,3u,0x00u,0xC3D5u);
      sc_v11_op_ldy(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D2u,2u,0x06u,0xC3D4u);
      sc_v11_op_ldy(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3D5u:
    if(m==1u&&x==0u&&e==0u){ /* AD 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D5u,3u,0x00u,0xC3D8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x003Eu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3D8u:
    if(m==1u&&x==0u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D8u,2u,0x01u,0xC3DAu);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3E1u:
    if(m==0u&&x==1u&&e==0u){ /* 90 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E1u,2u,0x21u,0xC3E3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC404u;}
      if(c->pc!=0xC3E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E1u,2u,0x21u,0xC3E3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC404u;}
      if(c->pc!=0xC3E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E1u,2u,0x21u,0xC3E3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC404u;}
      if(c->pc!=0xC3E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3E3u:
    if(m==0u&&x==0u&&e==0u){ /* EE C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E3u,3u,0x0Cu,0xC3E6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC5u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E3u,3u,0x0Cu,0xC3E6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC5u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E3u,3u,0x0Cu,0xC3E6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E3u,3u,0x0Cu,0xC3E6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3E6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E6u,3u,0x00u,0xC3E9u);
      sc_v11_op_lda(r,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E6u,3u,0x00u,0xC3E9u);
      sc_v11_op_lda(r,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E6u,2u,0x31u,0xC3E8u);
      sc_v11_op_lda(r,0x0031u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E6u,2u,0x31u,0xC3E8u);
      sc_v11_op_lda(r,0x0031u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3E9u:
    if(m==0u&&x==0u&&e==0u){ /* AC 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E9u,3u,0x00u,0xC3ECu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AC 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E9u,3u,0x00u,0xC3ECu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x003Eu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3ECu:
    if(m==0u&&x==0u&&e==0u){ /* C0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3ECu,3u,0x00u,0xC3EFu);
      sc_v11_op_compare(r,c->y,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3ECu,2u,0x01u,0xC3EEu);
      sc_v11_op_compare(r,c->y,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3EFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3EFu,2u,0x09u,0xC3F1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC3FAu;}
      if(c->pc!=0xC3F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3F1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 13 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3F1u,3u,0x00u,0xC3F4u);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3F4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3F4u,3u,0xC4u,0xC3F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC3F6u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3F7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3F7u,3u,0x00u,0xC3FAu);
      sc_v11_op_lda(r,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3F7u,3u,0x00u,0xC3FAu);
      sc_v11_op_lda(r,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3F7u,2u,0x2Fu,0xC3F9u);
      sc_v11_op_lda(r,0x002Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3F7u,2u,0x2Fu,0xC3F9u);
      sc_v11_op_lda(r,0x002Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3FAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3FAu,3u,0x03u,0xC3FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3FAu,3u,0x03u,0xC3FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3FDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3FDu,3u,0x00u,0xC400u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3FDu,3u,0x00u,0xC400u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
