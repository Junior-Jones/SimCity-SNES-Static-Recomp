/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00021(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x008403u:
    if(m==0u&&x==0u&&e==0u){ /* 20 07 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008403u,3u,0x84u,0x8406u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8405u))return 0;c->pc=0x8407u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008406u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008406u,1u,0x6Bu,0x8407u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008406u,1u,0x6Bu,0x8407u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008406u,1u,0x6Bu,0x8407u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008406u,1u,0x6Bu,0x8407u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008407u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008407u,2u,0x20u,0x8409u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008409u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008409u,3u,0x01u,0x840Cu);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00840Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00840Cu,3u,0x02u,0x840Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00840Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 BC 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00840Fu,3u,0x01u,0x8412u);
      sc_v11_op_lda(r,0x01BCu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008412u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 59 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008412u,3u,0x02u,0x8415u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0259u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008415u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008415u,2u,0x20u,0x8417u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008417u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008417u,3u,0x00u,0x841Au);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00841Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00841Au,2u,0x00u,0x841Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x841Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00841Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 49 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00841Cu,3u,0x84u,0x841Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x841Eu))return 0;c->pc=0x8449u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00841Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00841Fu,2u,0x20u,0x8421u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00841Fu,2u,0x20u,0x8421u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00841Fu,2u,0x20u,0x8421u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00841Fu,2u,0x20u,0x8421u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008421u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 08 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008421u,3u,0x04u,0x8424u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0408u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 08 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008421u,3u,0x04u,0x8424u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0408u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008424u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008424u,1u,0x60u,0x8425u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008424u,1u,0x60u,0x8425u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00842Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 49 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00842Au,3u,0x84u,0x842Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x842Cu))return 0;c->pc=0x8449u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 49 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00842Au,3u,0x84u,0x842Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x842Cu))return 0;c->pc=0x8449u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 49 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00842Au,3u,0x84u,0x842Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x842Cu))return 0;c->pc=0x8449u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00842Du:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00842Du,1u,0x6Bu,0x842Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00842Du,1u,0x6Bu,0x842Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00842Du,1u,0x6Bu,0x842Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00842Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 49 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00842Eu,3u,0x84u,0x8431u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8430u))return 0;c->pc=0x8449u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 49 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00842Eu,3u,0x84u,0x8431u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8430u))return 0;c->pc=0x8449u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008431u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008431u,1u,0x6Bu,0x8432u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008431u,1u,0x6Bu,0x8432u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008431u,1u,0x6Bu,0x8432u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008432u:
    if(m==0u&&x==1u&&e==0u){ /* 20 36 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008432u,3u,0x84u,0x8435u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8434u))return 0;c->pc=0x8436u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 36 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008432u,3u,0x84u,0x8435u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8434u))return 0;c->pc=0x8436u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 36 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008432u,3u,0x84u,0x8435u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8434u))return 0;c->pc=0x8436u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008435u:
    if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008435u,1u,0x6Bu,0x8436u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008435u,1u,0x6Bu,0x8436u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008435u,1u,0x6Bu,0x8436u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008436u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008436u,2u,0x20u,0x8438u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008436u,2u,0x20u,0x8438u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008436u,2u,0x20u,0x8438u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008438u:
    if(m==0u&&x==1u&&e==0u){ /* AD 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008438u,3u,0x0Bu,0x843Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00843Bu:
    if(m==0u&&x==1u&&e==0u){ /* CD A1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00843Bu,3u,0x0Bu,0x843Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00843Eu:
    if(m==0u&&x==1u&&e==0u){ /* D0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00843Eu,2u,0x09u,0x8440u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8449u;}
      if(c->pc!=0x8440u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8440u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008440u:
    if(m==0u&&x==1u&&e==0u){ /* AD 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008440u,3u,0x0Bu,0x8443u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008443u:
    if(m==0u&&x==1u&&e==0u){ /* CD A3 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008443u,3u,0x0Bu,0x8446u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008446u:
    if(m==0u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008446u,2u,0x01u,0x8448u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8449u;}
      if(c->pc!=0x8448u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8448u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008448u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008448u,1u,0x60u,0x8449u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008449u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008449u,3u,0x01u,0x844Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008449u,3u,0x01u,0x844Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008449u,3u,0x01u,0x844Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01D7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00844Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00844Cu,2u,0x5Au,0x844Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x84A8u;}
      if(c->pc!=0x844Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x844Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00844Cu,2u,0x5Au,0x844Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x84A8u;}
      if(c->pc!=0x844Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x844Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00844Cu,2u,0x5Au,0x844Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x84A8u;}
      if(c->pc!=0x844Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x844Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00844Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00844Eu,2u,0x20u,0x8450u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00844Eu,2u,0x20u,0x8450u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00844Eu,2u,0x20u,0x8450u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008450u:

    if(m==0u&&x==1u&&e==0u){ /* AD 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008450u,3u,0x0Bu,0x8453u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008453u:

    if(m==0u&&x==1u&&e==0u){ /* 8D A1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008453u,3u,0x0Bu,0x8456u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008456u:

    if(m==0u&&x==1u&&e==0u){ /* AD 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008456u,3u,0x0Bu,0x8459u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008459u:

    if(m==0u&&x==1u&&e==0u){ /* 8D A3 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008459u,3u,0x0Bu,0x845Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00845Cu:

    if(m==0u&&x==1u&&e==0u){ /* A9 6C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00845Cu,3u,0x00u,0x845Fu);
      sc_v11_op_lda(r,0x006Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00845Fu:

    if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00845Fu,3u,0x02u,0x8462u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008462u:

    if(m==0u&&x==1u&&e==0u){ /* 9C 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008462u,3u,0x02u,0x8465u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008465u:

    if(m==0u&&x==1u&&e==0u){ /* 9C 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008465u,3u,0x02u,0x8468u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008468u:

    if(m==0u&&x==1u&&e==0u){ /* A9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008468u,3u,0x00u,0x846Bu);
      sc_v11_op_lda(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00846Bu:

    if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00846Bu,3u,0x02u,0x846Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00846Eu:

    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00846Eu,2u,0x20u,0x8470u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008470u:

    if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008470u,3u,0x00u,0x8473u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008473u:

    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008473u,2u,0x00u,0x8475u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8475u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008475u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008475u,2u,0x20u,0x8477u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008477u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008477u,2u,0x10u,0x8479u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00847Fu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00847Fu,3u,0x00u,0x8482u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00847Fu,2u,0x00u,0x8481u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00847Fu,2u,0x00u,0x8481u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008482u:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008482u,1u,0x9Bu,0x8483u);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008483u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008483u,2u,0x7Fu,0x8485u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008485u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008485u,1u,0x5Au,0x8486u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008486u:
    if(m==0u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008486u,3u,0x00u,0x8489u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0079u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008489u:
    if(m==0u&&x==0u&&e==0u){ /* 05 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008489u,2u,0x7Fu,0x848Bu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00848Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00848Bu,2u,0x10u,0x848Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x849Du;}
      if(c->pc!=0x848Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x848Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00848Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00848Du,3u,0xEBu,0x8490u);
      sc_v11_op_lda(r,0xEB00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008490u:
    if(m==0u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008490u,3u,0x00u,0x8493u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0079u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008493u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008493u,1u,0xA8u,0x8494u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008494u:
    if(m==0u&&x==0u&&e==0u){ /* B9 E1 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008494u,3u,0x85u,0x8497u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x85E1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008497u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 72 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008497u,4u,0x7Eu,0x849Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2072u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00849Bu:
    if(m==0u&&x==0u&&e==0u){ /* E6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00849Bu,2u,0x7Fu,0x849Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00849Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00849Du,1u,0xE8u,0x849Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00849Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00849Eu,1u,0xE8u,0x849Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00849Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00849Fu,1u,0xE8u,0x84A0u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084A0u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A0u,1u,0xE8u,0x84A1u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084A1u:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A1u,1u,0x7Au,0x84A2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084A2u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A2u,1u,0xC8u,0x84A3u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084A3u:
    if(m==0u&&x==0u&&e==0u){ /* C0 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A3u,3u,0x00u,0x84A6u);
      sc_v11_op_compare(r,c->y,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084A6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A6u,2u,0xDDu,0x84A8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8485u;}
      if(c->pc!=0x84A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084A8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A8u,1u,0x60u,0x84A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A8u,1u,0x60u,0x84A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A8u,1u,0x60u,0x84A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084A9u:
    if(m==0u&&x==1u&&e==0u){ /* 20 AD 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A9u,3u,0x84u,0x84ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84ABu))return 0;c->pc=0x84ADu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 AD 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084A9u,3u,0x84u,0x84ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84ABu))return 0;c->pc=0x84ADu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084ACu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084ACu,1u,0x6Bu,0x84ADu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084ACu,1u,0x6Bu,0x84ADu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084ACu,1u,0x6Bu,0x84ADu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084ADu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084ADu,2u,0x20u,0x84AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084ADu,2u,0x20u,0x84AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084DBu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084DBu,3u,0x00u,0x84DEu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084DBu,2u,0x00u,0x84DDu);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084DBu,2u,0x00u,0x84DDu);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084DEu:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084DEu,1u,0x9Bu,0x84DFu);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084DFu:
    if(m==0u&&x==0u&&e==0u){ /* 64 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084DFu,2u,0x7Fu,0x84E1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084E1u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084E1u,1u,0x5Au,0x84E2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084E2u:
    if(m==0u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084E2u,3u,0x00u,0x84E5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0079u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084E5u:
    if(m==0u&&x==0u&&e==0u){ /* 05 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084E5u,2u,0x7Fu,0x84E7u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084E7u:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084E7u,2u,0x10u,0x84E9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x84F9u;}
      if(c->pc!=0x84E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084E9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084E9u,3u,0xEBu,0x84ECu);
      sc_v11_op_lda(r,0xEB00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084E9u,2u,0x00u,0x84EBu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084EBu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084EBu,1u,0xEBu,0x84ECu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084ECu:
    if(m==0u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084ECu,3u,0x00u,0x84EFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0079u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084ECu,3u,0x00u,0x84EFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0079u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084EFu:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084EFu,1u,0xA8u,0x84F0u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084EFu,1u,0xA8u,0x84F0u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084F0u:
    if(m==0u&&x==0u&&e==0u){ /* B9 E1 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084F0u,3u,0x85u,0x84F3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x85E1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B9 E1 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084F0u,3u,0x85u,0x84F3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x85E1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084F3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 56 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084F3u,4u,0x7Eu,0x84F7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2056u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 56 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084F3u,4u,0x7Eu,0x84F7u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2056u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084F7u:
    if(m==0u&&x==0u&&e==0u){ /* E6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084F7u,2u,0x7Fu,0x84F9u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084F7u,2u,0x7Fu,0x84F9u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084F9u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084F9u,1u,0xE8u,0x84FAu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084FAu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084FAu,1u,0xE8u,0x84FBu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084FBu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084FBu,1u,0xE8u,0x84FCu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084FCu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084FCu,1u,0xE8u,0x84FDu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084FDu:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084FDu,1u,0x7Au,0x84FEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084FEu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084FEu,1u,0xC8u,0x84FFu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0084FFu:
    if(m==0u&&x==0u&&e==0u){ /* C0 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0084FFu,3u,0x00u,0x8502u);
      sc_v11_op_compare(r,c->y,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008502u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008502u,2u,0xDDu,0x8504u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x84E1u;}
      if(c->pc!=0x8504u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8504u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008504u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008504u,2u,0x20u,0x8506u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008515u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008515u,3u,0x00u,0x8518u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008515u,2u,0x00u,0x8517u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008515u,2u,0x00u,0x8517u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008518u:
    if(m==0u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008518u,1u,0xBBu,0x8519u);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008519u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008519u,2u,0x7Fu,0x851Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00851Bu:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00851Bu,1u,0x5Au,0x851Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00851Cu:
    if(m==0u&&x==0u&&e==0u){ /* B9 7B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00851Cu,3u,0x00u,0x851Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x007Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00851Fu:
    if(m==0u&&x==0u&&e==0u){ /* 05 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00851Fu,2u,0x7Fu,0x8521u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008521u:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008521u,2u,0x10u,0x8523u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8533u;}
      if(c->pc!=0x8523u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8523u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008523u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008523u,3u,0xEBu,0x8526u);
      sc_v11_op_lda(r,0xEB00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008526u:
    if(m==0u&&x==0u&&e==0u){ /* B9 7B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008526u,3u,0x00u,0x8529u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x007Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008529u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008529u,1u,0xA8u,0x852Au);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00852Au:
    if(m==0u&&x==0u&&e==0u){ /* B9 E1 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00852Au,3u,0x85u,0x852Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x85E1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00852Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 2E 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00852Du,4u,0x7Eu,0x8531u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E202Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008531u:
    if(m==0u&&x==0u&&e==0u){ /* E6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008531u,2u,0x7Fu,0x8533u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008533u:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008533u,1u,0x7Au,0x8534u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008534u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008534u,1u,0xE8u,0x8535u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008535u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008535u,1u,0xE8u,0x8536u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008536u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008536u,1u,0xE8u,0x8537u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008537u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008537u,1u,0xE8u,0x8538u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008538u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008538u,1u,0xC8u,0x8539u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008539u:
    if(m==0u&&x==0u&&e==0u){ /* C0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008539u,3u,0x00u,0x853Cu);
      sc_v11_op_compare(r,c->y,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00853Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00853Cu,2u,0xDDu,0x853Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x851Bu;}
      if(c->pc!=0x853Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x853Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00853Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00853Eu,2u,0x30u,0x8540u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0085EBu:

    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085EBu,2u,0x20u,0x85EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085EBu,2u,0x20u,0x85EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085EBu,2u,0x20u,0x85EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0085EDu:

    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085EDu,2u,0x10u,0x85EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0085F6u:
    if(m==1u&&x==0u&&e==0u){ /* AD B9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085F6u,3u,0x0Bu,0x85F9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BB9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0085F9u:
    if(m==1u&&x==0u&&e==0u){ /* F0 FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085F9u,2u,0xFAu,0x85FBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x85F5u;}
      if(c->pc!=0x85FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0085FBu:
    if(m==1u&&x==0u&&e==0u){ /* 9C B9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085FBu,3u,0x0Bu,0x85FEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BB9u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0085FEu:
    if(m==0u&&x==0u&&e==0u){ /* A2 A5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085FEu,3u,0x0Bu,0x8601u);
      sc_v11_op_ldx(r,0x0BA5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 A5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0085FEu,3u,0x0Bu,0x8601u);
      sc_v11_op_ldx(r,0x0BA5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008601u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EF 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008601u,3u,0x8Fu,0x8604u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8603u))return 0;c->pc=0x8FEFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EF 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008601u,3u,0x8Fu,0x8604u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8603u))return 0;c->pc=0x8FEFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008604u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008604u,3u,0x00u,0x8607u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008604u,2u,0x00u,0x8606u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008604u,3u,0x00u,0x8607u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008604u,2u,0x00u,0x8606u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008607u:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008607u,1u,0x9Bu,0x8608u);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008607u,1u,0x9Bu,0x8608u);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008608u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008608u,2u,0x7Fu,0x860Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008608u,2u,0x7Fu,0x860Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00860Au:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00860Au,1u,0x5Au,0x860Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00860Au,1u,0x5Au,0x860Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00860Bu:
    if(m==0u&&x==0u&&e==0u){ /* C0 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00860Bu,3u,0x00u,0x860Eu);
      sc_v11_op_compare(r,c->y,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00860Bu,3u,0x00u,0x860Eu);
      sc_v11_op_compare(r,c->y,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00860Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00860Eu,2u,0x0Eu,0x8610u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x861Eu;}
      if(c->pc!=0x8610u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8610u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00860Eu,2u,0x0Eu,0x8610u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x861Eu;}
      if(c->pc!=0x8610u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8610u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008610u:
    if(m==0u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008610u,3u,0x00u,0x8613u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0079u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008610u,3u,0x00u,0x8613u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0079u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008613u:
    if(m==0u&&x==0u&&e==0u){ /* 05 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008613u,2u,0x7Fu,0x8615u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 05 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008613u,2u,0x7Fu,0x8615u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008615u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008615u,2u,0x07u,0x8617u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x861Eu;}
      if(c->pc!=0x8617u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8617u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008615u,2u,0x07u,0x8617u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x861Eu;}
      if(c->pc!=0x8617u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8617u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008617u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008617u,2u,0x20u,0x8619u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008617u,2u,0x20u,0x8619u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008619u:
    if(m==0u&&x==0u&&e==0u){ /* A9 B5 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008619u,3u,0x24u,0x861Cu);
      sc_v11_op_lda(r,0x24B5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00861Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00861Cu,2u,0x0Du,0x861Eu);
      if(1){c->pc=0x862Bu;}
      if(c->pc!=0x861Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x861Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00861Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00861Eu,2u,0x20u,0x8620u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00861Eu,2u,0x20u,0x8620u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008620u:
    if(m==0u&&x==0u&&e==0u){ /* E6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008620u,2u,0x7Fu,0x8622u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008622u:
    if(m==0u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008622u,3u,0x00u,0x8625u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0079u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008625u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008625u,3u,0x00u,0x8628u);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008628u:
    if(m==0u&&x==0u&&e==0u){ /* 09 A0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008628u,3u,0x28u,0x862Bu);
      sc_v11_op_ora(r,0x28A0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00862Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F EE 38 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00862Bu,4u,0x7Eu,0x862Fu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E38EEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00862Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00862Fu,2u,0x20u,0x8631u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008631u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008631u,1u,0xE8u,0x8632u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008632u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008632u,1u,0xE8u,0x8633u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008633u:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008633u,1u,0x7Au,0x8634u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008634u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008634u,1u,0xC8u,0x8635u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008635u:
    if(m==1u&&x==0u&&e==0u){ /* C0 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008635u,3u,0x00u,0x8638u);
      sc_v11_op_compare(r,c->y,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008638u:
    if(m==1u&&x==0u&&e==0u){ /* D0 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008638u,2u,0xD0u,0x863Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x860Au;}
      if(c->pc!=0x863Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x863Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00863Au:
    if(m==1u&&x==0u&&e==0u){ /* A2 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00863Au,3u,0x0Bu,0x863Du);
      sc_v11_op_ldx(r,0x0B9Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00863Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 EF 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00863Du,3u,0x8Fu,0x8640u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x863Fu))return 0;c->pc=0x8FEFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008640u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008640u,3u,0x00u,0x8643u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008640u,2u,0x00u,0x8642u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008640u,3u,0x00u,0x8643u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008640u,2u,0x00u,0x8642u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008643u:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008643u,1u,0x9Bu,0x8644u);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008643u,1u,0x9Bu,0x8644u);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008644u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008644u,2u,0x7Fu,0x8646u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008644u,2u,0x7Fu,0x8646u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008646u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008646u,1u,0x5Au,0x8647u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008646u,1u,0x5Au,0x8647u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008647u:
    if(m==0u&&x==0u&&e==0u){ /* C0 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008647u,3u,0x00u,0x864Au);
      sc_v11_op_compare(r,c->y,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008647u,3u,0x00u,0x864Au);
      sc_v11_op_compare(r,c->y,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00864Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00864Au,2u,0x0Eu,0x864Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x865Au;}
      if(c->pc!=0x864Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x864Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00864Au,2u,0x0Eu,0x864Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x865Au;}
      if(c->pc!=0x864Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x864Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00864Cu:
    if(m==0u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00864Cu,3u,0x00u,0x864Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0079u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00864Cu,3u,0x00u,0x864Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0079u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00864Fu:
    if(m==0u&&x==0u&&e==0u){ /* 05 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00864Fu,2u,0x7Fu,0x8651u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 05 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00864Fu,2u,0x7Fu,0x8651u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008651u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008651u,2u,0x07u,0x8653u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x865Au;}
      if(c->pc!=0x8653u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8653u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008651u,2u,0x07u,0x8653u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x865Au;}
      if(c->pc!=0x8653u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8653u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008653u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008653u,2u,0x20u,0x8655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008653u,2u,0x20u,0x8655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008655u:
    if(m==0u&&x==0u&&e==0u){ /* A9 B5 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008655u,3u,0x24u,0x8658u);
      sc_v11_op_lda(r,0x24B5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008658u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008658u,2u,0x0Du,0x865Au);
      if(1){c->pc=0x8667u;}
      if(c->pc!=0x865Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x865Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00865Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00865Au,2u,0x20u,0x865Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00865Au,2u,0x20u,0x865Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00865Cu:
    if(m==0u&&x==0u&&e==0u){ /* E6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00865Cu,2u,0x7Fu,0x865Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00865Eu:
    if(m==0u&&x==0u&&e==0u){ /* B9 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00865Eu,3u,0x00u,0x8661u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0079u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008661u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008661u,3u,0x00u,0x8664u);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008664u:
    if(m==0u&&x==0u&&e==0u){ /* 09 A0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008664u,3u,0x28u,0x8667u);
      sc_v11_op_ora(r,0x28A0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008667u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 6E 39 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008667u,4u,0x7Eu,0x866Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E396Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00866Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00866Bu,2u,0x20u,0x866Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00866Du:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00866Du,1u,0xE8u,0x866Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00866Eu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00866Eu,1u,0xE8u,0x866Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00866Fu:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00866Fu,1u,0x7Au,0x8670u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008670u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008670u,1u,0xC8u,0x8671u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008671u:
    if(m==1u&&x==0u&&e==0u){ /* C0 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008671u,3u,0x00u,0x8674u);
      sc_v11_op_compare(r,c->y,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008674u:
    if(m==1u&&x==0u&&e==0u){ /* D0 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008674u,2u,0xD0u,0x8676u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8646u;}
      if(c->pc!=0x8676u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8676u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008676u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008676u,2u,0x20u,0x8678u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008678u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008678u,2u,0xB3u,0x867Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00867Au:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00867Au,2u,0x7Fu,0x867Cu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00867Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00867Cu,2u,0xB1u,0x867Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00867Eu:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00867Eu,2u,0xBBu,0x8680u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008680u:
    if(m==1u&&x==0u&&e==0u){ /* 09 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008680u,2u,0x10u,0x8682u);
      sc_v11_op_ora(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008682u:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008682u,2u,0xBBu,0x8684u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008684u:
    if(m==1u&&x==0u&&e==0u){ /* 20 21 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008684u,3u,0x8Eu,0x8687u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8686u))return 0;c->pc=0x8E21u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008687u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008687u,2u,0x20u,0x8689u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008687u,2u,0x20u,0x8689u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008687u,2u,0x20u,0x8689u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008687u,2u,0x20u,0x8689u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008689u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008689u,2u,0xB3u,0x868Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008689u,2u,0xB3u,0x868Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00868Bu:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00868Bu,2u,0x80u,0x868Du);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00868Bu,2u,0x80u,0x868Du);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00868Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00868Du,2u,0xB1u,0x868Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00868Du,2u,0xB1u,0x868Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00868Fu:
    if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00868Fu,1u,0x6Bu,0x8690u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00868Fu,1u,0x6Bu,0x8690u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008690u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008690u,2u,0x10u,0x8692u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008690u,2u,0x10u,0x8692u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008690u,2u,0x10u,0x8692u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008692u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008692u,2u,0x20u,0x8694u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086C8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086C8u,2u,0x30u,0x86CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086CAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086CAu,3u,0x02u,0x86CDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0253u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086CDu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FC FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086CDu,3u,0xFFu,0x86D0u);
      sc_v11_op_and(r,0xFFFCu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086D0u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086D0u,1u,0xAAu,0x86D1u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086D1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086D1u,2u,0x20u,0x86D3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086D3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086D3u,2u,0xE0u,0x86D5u);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086D5u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086D5u,4u,0x7Eu,0x86D9u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086D9u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086D9u,1u,0xE8u,0x86DAu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086DAu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086DAu,1u,0xE8u,0x86DBu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086DBu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086DBu,1u,0xE8u,0x86DCu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086DCu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086DCu,1u,0xE8u,0x86DDu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086DDu:
    if(m==1u&&x==0u&&e==0u){ /* EC 59 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086DDu,3u,0x02u,0x86E0u);
      sc_v11_op_compare(r,c->x,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0259u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086E0u:
    if(m==1u&&x==0u&&e==0u){ /* 90 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086E0u,2u,0xF3u,0x86E2u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x86D5u;}
      if(c->pc!=0x86E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086E2u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086E2u,1u,0x60u,0x86E3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086F6u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086F6u,2u,0x20u,0x86F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086F6u,2u,0x20u,0x86F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086F6u,2u,0x20u,0x86F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086F8u:
    if(m==1u&&x==1u&&e==0u){ /* A5 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086F8u,2u,0xD1u,0x86FAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086FAu:
    if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086FAu,2u,0x03u,0x86FCu);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086FCu:
    if(m==1u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086FCu,2u,0x06u,0x86FEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8704u;}
      if(c->pc!=0x86FEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86FEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086FEu:
    if(m==1u&&x==1u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0086FEu,2u,0xBBu,0x8700u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008700u:
    if(m==1u&&x==1u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008700u,2u,0x0Cu,0x8702u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008702u:
    if(m==1u&&x==1u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008702u,2u,0xBBu,0x8704u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008704u:
    if(m==1u&&x==1u&&e==0u){ /* E6 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008704u,2u,0xD1u,0x8706u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xD1u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008706u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008706u,1u,0x60u,0x8707u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008707u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008707u,2u,0x30u,0x8709u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008707u,2u,0x30u,0x8709u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008707u,2u,0x30u,0x8709u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008710u:
    if(m==0u&&x==0u&&e==0u){ /* AD 18 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008710u,3u,0x42u,0x8713u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x4218u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008713u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008713u,3u,0xFFu,0x8716u);
      sc_v11_op_and(r,0xFFF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008716u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008716u,2u,0x0Cu,0x8718u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8724u;}
      if(c->pc!=0x8718u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8718u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008724u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008724u,2u,0xE1u,0x8726u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008726u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008726u,1u,0x1Au,0x8727u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008727u:
    if(m==0u&&x==0u&&e==0u){ /* C9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008727u,3u,0x00u,0x872Au);
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00872Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00872Au,2u,0x03u,0x872Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x872Fu;}
      if(c->pc!=0x872Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x872Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00872Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00872Cu,3u,0x00u,0x872Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00872Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00872Fu,2u,0xE1u,0x8731u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE1u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008731u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008731u,1u,0x60u,0x8732u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008744u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008744u,1u,0x60u,0x8745u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008744u,1u,0x60u,0x8745u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
