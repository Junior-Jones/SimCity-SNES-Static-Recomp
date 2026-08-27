/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00023(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x008C28u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C28u,2u,0x20u,0x8C2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C28u,2u,0x20u,0x8C2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C28u,2u,0x20u,0x8C2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C2Au:
    if(m==1u&&x==1u&&e==0u){ /* A5 5F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C2Au,2u,0x5Fu,0x8C2Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x5Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C2Cu:
    if(m==1u&&x==1u&&e==0u){ /* 10 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C2Cu,2u,0x04u,0x8C2Eu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x8C32u;}
      if(c->pc!=0x8C2Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C2Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C2Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0C 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C2Eu,3u,0x42u,0x8C31u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C31u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C31u,1u,0x60u,0x8C32u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C32u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C32u,2u,0xB5u,0x8C34u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB5u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C34u:
    if(m==1u&&x==1u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C34u,2u,0x04u,0x8C36u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C3Au;}
      if(c->pc!=0x8C36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C36u:
    if(m==1u&&x==1u&&e==0u){ /* C5 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C36u,2u,0x77u,0x8C38u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x77u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C38u:
    if(m==1u&&x==1u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C38u,2u,0x07u,0x8C3Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C41u;}
      if(c->pc!=0x8C3Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C3Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C3Au:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0C 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C3Au,3u,0x42u,0x8C3Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0C 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C3Au,3u,0x42u,0x8C3Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C3Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C3Du,2u,0x77u,0x8C3Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x77u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C3Du,2u,0x77u,0x8C3Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x77u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C3Fu:
    if(m==1u&&x==0u&&e==0u){ /* 64 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C3Fu,2u,0xB5u,0x8C41u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C3Fu,2u,0xB5u,0x8C41u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C41u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C41u,1u,0x60u,0x8C42u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C42u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C42u,2u,0x30u,0x8C44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C42u,2u,0x30u,0x8C44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C42u,2u,0x30u,0x8C44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C48u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D2 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C48u,3u,0x8Cu,0x8C4Bu);
      c->pc=0x8CD2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C4Du:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C4Du,1u,0x3Au,0x8C4Eu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C4Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C4Eu,2u,0x03u,0x8C50u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C53u;}
      if(c->pc!=0x8C50u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C50u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C50u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 84 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C50u,3u,0x8Cu,0x8C53u);
      c->pc=0x8C84u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C53u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C53u,1u,0x3Au,0x8C54u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C54u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C54u,2u,0x03u,0x8C56u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C59u;}
      if(c->pc!=0x8C56u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C56u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C56u:
    if(m==0u&&x==0u&&e==0u){ /* 4C BD 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C56u,3u,0x8Cu,0x8C59u);
      c->pc=0x8CBDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C59u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C59u,1u,0x60u,0x8C5Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C5Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C5Du,3u,0x8Du,0x8C60u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C5Fu))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C5Du,3u,0x8Du,0x8C60u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C5Fu))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C5Du,3u,0x8Du,0x8C60u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C5Fu))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C60u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C60u,2u,0x20u,0x8C62u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C60u,2u,0x20u,0x8C62u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C62u:
    if(m==1u&&x==1u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C62u,2u,0xE3u,0x8C64u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C64u:
    if(m==1u&&x==1u&&e==0u){ /* D0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C64u,2u,0x17u,0x8C66u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C7Du;}
      if(c->pc!=0x8C66u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C66u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C66u:
    if(m==1u&&x==1u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C66u,2u,0xE1u,0x8C68u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C68u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C68u,1u,0x1Au,0x8C69u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C69u:
    if(m==1u&&x==1u&&e==0u){ /* C9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C69u,2u,0x18u,0x8C6Bu);
      sc_v11_op_compare(r,c->a,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C6Bu:
    if(m==1u&&x==1u&&e==0u){ /* B0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C6Bu,2u,0x16u,0x8C6Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8C83u;}
      if(c->pc!=0x8C6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C6Du:
    if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C6Du,2u,0x03u,0x8C6Fu);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C6Fu:
    if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C6Fu,2u,0x02u,0x8C71u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C71u:
    if(m==1u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C71u,2u,0x03u,0x8C73u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C76u;}
      if(c->pc!=0x8C73u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C73u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C73u:
    if(m==1u&&x==1u&&e==0u){ /* 4C D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C73u,3u,0x8Du,0x8C76u);
      c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C76u:
    if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C76u,2u,0x03u,0x8C78u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C78u:
    if(m==1u&&x==1u&&e==0u){ /* D0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C78u,2u,0x09u,0x8C7Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C83u;}
      if(c->pc!=0x8C7Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C7Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C7Au:
    if(m==1u&&x==1u&&e==0u){ /* 4C FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C7Au,3u,0x8Du,0x8C7Du);
      c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C7Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C7Du,3u,0x8Du,0x8C80u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C7Fu))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C7Du,3u,0x8Du,0x8C80u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C7Fu))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C80u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C80u,3u,0x8Du,0x8C83u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C82u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C80u,3u,0x8Du,0x8C83u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C82u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C80u,3u,0x8Du,0x8C83u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C82u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C80u,3u,0x8Du,0x8C83u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C82u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C83u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C83u,1u,0x60u,0x8C84u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C83u,1u,0x60u,0x8C84u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C83u,1u,0x60u,0x8C84u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C84u:
    if(m==0u&&x==0u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C84u,3u,0x8Du,0x8C87u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C86u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C87u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C87u,3u,0x8Du,0x8C8Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C89u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C87u,3u,0x8Du,0x8C8Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C89u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C87u,3u,0x8Du,0x8C8Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C89u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C87u,3u,0x8Du,0x8C8Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C89u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C8Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C8Au,2u,0x20u,0x8C8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C8Au,2u,0x20u,0x8C8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C8Au,2u,0x20u,0x8C8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C8Au,2u,0x20u,0x8C8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C8Cu:
    if(m==1u&&x==0u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C8Cu,2u,0xE3u,0x8C8Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C8Cu,2u,0xE3u,0x8C8Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C8Eu:
    if(m==1u&&x==0u&&e==0u){ /* D0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C8Eu,2u,0x1Bu,0x8C90u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8CABu;}
      if(c->pc!=0x8C90u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C90u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C8Eu,2u,0x1Bu,0x8C90u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8CABu;}
      if(c->pc!=0x8C90u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C90u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C90u:
    if(m==1u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C90u,2u,0xE1u,0x8C92u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C90u,2u,0xE1u,0x8C92u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C92u:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C92u,1u,0x1Au,0x8C93u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C92u,1u,0x1Au,0x8C93u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C93u:
    if(m==1u&&x==0u&&e==0u){ /* C9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C93u,2u,0x18u,0x8C95u);
      sc_v11_op_compare(r,c->a,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C93u,2u,0x18u,0x8C95u);
      sc_v11_op_compare(r,c->a,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C95u:
    if(m==1u&&x==0u&&e==0u){ /* B0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C95u,2u,0x25u,0x8C97u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8CBCu;}
      if(c->pc!=0x8C97u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C97u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C95u,2u,0x25u,0x8C97u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8CBCu;}
      if(c->pc!=0x8C97u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C97u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C97u:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C97u,2u,0x03u,0x8C99u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C97u,2u,0x03u,0x8C99u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C99u:
    if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C99u,2u,0x02u,0x8C9Bu);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C99u,2u,0x02u,0x8C9Bu);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C9Bu:
    if(m==1u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C9Bu,2u,0x05u,0x8C9Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8CA2u;}
      if(c->pc!=0x8C9Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C9Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C9Bu,2u,0x05u,0x8C9Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8CA2u;}
      if(c->pc!=0x8C9Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C9Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C9Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C9Du,3u,0x8Du,0x8CA0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C9Fu))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008C9Du,3u,0x8Du,0x8CA0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C9Fu))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CA0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA0u,2u,0x0Fu,0x8CA2u);
      if(1){c->pc=0x8CB1u;}
      if(c->pc!=0x8CA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA0u,2u,0x0Fu,0x8CA2u);
      if(1){c->pc=0x8CB1u;}
      if(c->pc!=0x8CA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA0u,2u,0x0Fu,0x8CA2u);
      if(1){c->pc=0x8CB1u;}
      if(c->pc!=0x8CA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA0u,2u,0x0Fu,0x8CA2u);
      if(1){c->pc=0x8CB1u;}
      if(c->pc!=0x8CA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CA2u:
    if(m==1u&&x==0u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA2u,2u,0x03u,0x8CA4u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA2u,2u,0x03u,0x8CA4u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CA4u:
    if(m==1u&&x==0u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA4u,2u,0x0Bu,0x8CA6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8CB1u;}
      if(c->pc!=0x8CA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA4u,2u,0x0Bu,0x8CA6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8CB1u;}
      if(c->pc!=0x8CA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CA6u:
    if(m==1u&&x==0u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA6u,3u,0x8Du,0x8CA9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CA8u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA6u,3u,0x8Du,0x8CA9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CA8u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CA9u:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA9u,2u,0x06u,0x8CABu);
      if(1){c->pc=0x8CB1u;}
      if(c->pc!=0x8CABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA9u,2u,0x06u,0x8CABu);
      if(1){c->pc=0x8CB1u;}
      if(c->pc!=0x8CABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA9u,2u,0x06u,0x8CABu);
      if(1){c->pc=0x8CB1u;}
      if(c->pc!=0x8CABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CA9u,2u,0x06u,0x8CABu);
      if(1){c->pc=0x8CB1u;}
      if(c->pc!=0x8CABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CABu:
    if(m==1u&&x==0u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CABu,3u,0x8Du,0x8CAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CADu))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CABu,3u,0x8Du,0x8CAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CADu))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CAEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CAEu,3u,0x8Du,0x8CB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CB0u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CAEu,3u,0x8Du,0x8CB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CB0u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CAEu,3u,0x8Du,0x8CB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CB0u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CAEu,3u,0x8Du,0x8CB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CB0u))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CB1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB1u,2u,0x20u,0x8CB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB1u,2u,0x20u,0x8CB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB1u,2u,0x20u,0x8CB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB1u,2u,0x20u,0x8CB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CB3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB3u,2u,0xDFu,0x8CB5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xDFu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB3u,2u,0xDFu,0x8CB5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xDFu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CB5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB5u,2u,0x05u,0x8CB7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8CBCu;}
      if(c->pc!=0x8CB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB5u,2u,0x05u,0x8CB7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8CBCu;}
      if(c->pc!=0x8CB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CB7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB7u,3u,0x8Eu,0x8CBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CB9u))return 0;c->pc=0x8E21u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 21 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CB7u,3u,0x8Eu,0x8CBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CB9u))return 0;c->pc=0x8E21u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CBAu:
    if(m==0u&&x==0u&&e==0u){ /* 64 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBAu,2u,0xDFu,0x8CBCu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xDFu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBAu,2u,0xDFu,0x8CBCu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xDFu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBAu,2u,0xDFu,0x8CBCu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xDFu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBAu,2u,0xDFu,0x8CBCu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xDFu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CBCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBCu,1u,0x60u,0x8CBDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBCu,1u,0x60u,0x8CBDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBCu,1u,0x60u,0x8CBDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBCu,1u,0x60u,0x8CBDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CBDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CBDu,3u,0x8Du,0x8CC0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CBFu))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CC0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC0u,2u,0x20u,0x8CC2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC0u,2u,0x20u,0x8CC2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC0u,2u,0x20u,0x8CC2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC0u,2u,0x20u,0x8CC2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CC2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC2u,2u,0xD1u,0x8CC4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC2u,2u,0xD1u,0x8CC4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CC4u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC4u,1u,0x4Au,0x8CC5u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC4u,1u,0x4Au,0x8CC5u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CC5u:
    if(m==0u&&x==0u&&e==0u){ /* B0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC5u,2u,0x07u,0x8CC7u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8CCEu;}
      if(c->pc!=0x8CC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC5u,2u,0x07u,0x8CC7u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8CCEu;}
      if(c->pc!=0x8CC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CC7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC7u,3u,0x8Du,0x8CCAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CC9u))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CC7u,3u,0x8Du,0x8CCAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CC9u))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CCAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCAu,3u,0x8Du,0x8CCDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CCCu))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCAu,3u,0x8Du,0x8CCDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CCCu))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCAu,3u,0x8Du,0x8CCDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CCCu))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FB 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCAu,3u,0x8Du,0x8CCDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CCCu))return 0;c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CCDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCDu,1u,0x60u,0x8CCEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCDu,1u,0x60u,0x8CCEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCDu,1u,0x60u,0x8CCEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCDu,1u,0x60u,0x8CCEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CCEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCEu,3u,0x8Eu,0x8CD1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CD0u))return 0;c->pc=0x8E21u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 21 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CCEu,3u,0x8Eu,0x8CD1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CD0u))return 0;c->pc=0x8E21u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CD1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD1u,1u,0x60u,0x8CD2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD1u,1u,0x60u,0x8CD2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD1u,1u,0x60u,0x8CD2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD1u,1u,0x60u,0x8CD2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CD2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD2u,3u,0x8Du,0x8CD5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CD4u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CD5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD5u,3u,0x8Du,0x8CD8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CD7u))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD5u,3u,0x8Du,0x8CD8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CD7u))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD5u,3u,0x8Du,0x8CD8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CD7u))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D9 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD5u,3u,0x8Du,0x8CD8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CD7u))return 0;c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CD8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD8u,1u,0x60u,0x8CD9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD8u,1u,0x60u,0x8CD9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD8u,1u,0x60u,0x8CD9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CD8u,1u,0x60u,0x8CD9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CDDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CDDu,2u,0x20u,0x8CDFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CDDu,2u,0x20u,0x8CDFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CDDu,2u,0x20u,0x8CDFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CDFu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008CDFu,2u,0x10u,0x8CE1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D65u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008D65u,2u,0x20u,0x8D67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008D65u,2u,0x20u,0x8D67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D67u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008D67u,2u,0x00u,0x8D69u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D69u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 02 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008D69u,3u,0x21u,0x8D6Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2102u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D6Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 03 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008D6Cu,3u,0x21u,0x8D6Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2103u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D6Fu:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008D6Fu,2u,0x30u,0x8D71u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DA2u:
    if(m==0u&&x==1u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA2u,3u,0x8Du,0x8DA5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DA4u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA2u,3u,0x8Du,0x8DA5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DA4u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA2u,3u,0x8Du,0x8DA5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DA4u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DA5u:
    if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA5u,1u,0x6Bu,0x8DA6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA5u,1u,0x6Bu,0x8DA6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA5u,1u,0x6Bu,0x8DA6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DA6u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA6u,2u,0x20u,0x8DA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    break;
  case 0x008DD9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DD9u,2u,0x20u,0x8DDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DD9u,2u,0x20u,0x8DDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DD9u,2u,0x20u,0x8DDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DDBu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DDBu,2u,0x10u,0x8DDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DFBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DFBu,2u,0x20u,0x8DFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DFBu,2u,0x20u,0x8DFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DFBu,2u,0x20u,0x8DFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DFDu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008DFDu,2u,0x10u,0x8DFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E1Du:
    if(m==0u&&x==1u&&e==0u){ /* 20 21 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008E1Du,3u,0x8Eu,0x8E20u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E1Fu))return 0;c->pc=0x8E21u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E20u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008E20u,1u,0x6Bu,0x8E21u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008E20u,1u,0x6Bu,0x8E21u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008E20u,1u,0x6Bu,0x8E21u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E21u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008E21u,2u,0x20u,0x8E23u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008E21u,2u,0x20u,0x8E23u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E23u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008E23u,2u,0x10u,0x8E25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EBAu:
    if(m==0u&&x==1u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EBAu,3u,0x00u,0x8EBDu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EBDu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 51 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EBDu,3u,0x02u,0x8EC0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0251u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EC0u:
    if(m==0u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EC0u,2u,0x01u,0x8EC2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EC2u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EC2u,3u,0x02u,0x8EC5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EC5u:
    if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EC5u,1u,0xC8u,0x8EC6u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EC6u:
    if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EC6u,1u,0xC8u,0x8EC7u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EC7u:
    if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EC7u,1u,0x8Au,0x8EC8u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EC8u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EC8u,1u,0x4Au,0x8EC9u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EC9u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EC9u,1u,0x4Au,0x8ECAu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008ECAu:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008ECAu,1u,0x4Au,0x8ECBu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008ECBu:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008ECBu,1u,0x4Au,0x8ECCu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008ECCu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008ECCu,3u,0xFFu,0x8ECFu);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008ECFu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 55 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008ECFu,3u,0x02u,0x8ED2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0255u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008ED2u:
    if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008ED2u,1u,0x8Au,0x8ED3u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008ED3u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008ED3u,1u,0x4Au,0x8ED4u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008ED4u:
    if(m==0u&&x==1u&&e==0u){ /* 29 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008ED4u,3u,0x00u,0x8ED7u);
      sc_v11_op_and(r,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008ED7u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 57 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008ED7u,3u,0x02u,0x8EDAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0257u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EDAu:
    if(m==0u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EDAu,2u,0x01u,0x8EDCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EDCu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EDCu,3u,0x00u,0x8EDFu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EDFu:
    if(m==0u&&x==1u&&e==0u){ /* 4E 5B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EDFu,3u,0x02u,0x8EE2u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x025Bu),16u,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EE2u:
    if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EE2u,2u,0x03u,0x8EE4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8EE7u;}
      if(c->pc!=0x8EE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EE4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EE4u:
    if(m==0u&&x==1u&&e==0u){ /* 09 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EE4u,3u,0x01u,0x8EE7u);
      sc_v11_op_ora(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EE7u:
    if(m==0u&&x==1u&&e==0u){ /* C9 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EE7u,3u,0x01u,0x8EEAu);
      sc_v11_op_compare(r,c->a,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EEAu:
    if(m==0u&&x==1u&&e==0u){ /* F0 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EEAu,2u,0x61u,0x8EECu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8F4Du;}
      if(c->pc!=0x8EECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EECu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EECu,1u,0x18u,0x8EEDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EEDu:
    if(m==0u&&x==1u&&e==0u){ /* 6D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EEDu,3u,0x02u,0x8EF0u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x025Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EF0u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EF0u,2u,0x20u,0x8EF2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EF2u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EF2u,4u,0x7Eu,0x8EF6u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EF6u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EF6u,2u,0x20u,0x8EF8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EF8u:
    if(m==0u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EF8u,1u,0x5Au,0x8EF9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EF9u:
    if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EF9u,1u,0xDAu,0x8EFAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EFAu:
    if(m==0u&&x==1u&&e==0u){ /* AE 55 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EFAu,3u,0x02u,0x8EFDu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0255u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008EFDu:
    if(m==0u&&x==1u&&e==0u){ /* AC 57 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008EFDu,3u,0x02u,0x8F00u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0257u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F00u:
    if(m==0u&&x==1u&&e==0u){ /* 29 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F00u,3u,0x01u,0x8F03u);
      sc_v11_op_and(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F03u:
    if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F03u,1u,0x08u,0x8F04u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F04u:
    if(m==0u&&x==1u&&e==0u){ /* BF 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F04u,4u,0x7Eu,0x8F08u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E2200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F08u:
    if(m==0u&&x==1u&&e==0u){ /* 39 72 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F08u,3u,0x8Fu,0x8F0Bu);
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8F72u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F0Bu:
    if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F0Bu,1u,0x28u,0x8F0Cu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F0Cu:
    if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F0Cu,2u,0x03u,0x8F0Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8F11u;}
      if(c->pc!=0x8F0Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F0Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F0Cu,2u,0x03u,0x8F0Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8F11u;}
      if(c->pc!=0x8F0Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F0Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F0Cu,2u,0x03u,0x8F0Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8F11u;}
      if(c->pc!=0x8F0Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F0Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F0Eu:
    if(m==0u&&x==1u&&e==0u){ /* 19 52 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F0Eu,3u,0x8Fu,0x8F11u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8F52u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 19 52 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F0Eu,3u,0x8Fu,0x8F11u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x8F52u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 19 52 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F0Eu,3u,0x8Fu,0x8F11u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x8F52u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F11u:
    if(m==0u&&x==1u&&e==0u){ /* 4E 5B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F11u,3u,0x02u,0x8F14u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x025Bu),16u,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4E 5B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F11u,3u,0x02u,0x8F14u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x025Bu),8u,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4E 5B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F11u,3u,0x02u,0x8F14u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x025Bu),8u,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F14u:
    if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F14u,2u,0x03u,0x8F16u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8F19u;}
      if(c->pc!=0x8F16u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F16u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F14u,2u,0x03u,0x8F16u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8F19u;}
      if(c->pc!=0x8F16u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F16u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F14u,2u,0x03u,0x8F16u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8F19u;}
      if(c->pc!=0x8F16u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F16u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F16u:
    if(m==0u&&x==1u&&e==0u){ /* 19 62 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F16u,3u,0x8Fu,0x8F19u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8F62u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 19 62 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F16u,3u,0x8Fu,0x8F19u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x8F62u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 19 62 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F16u,3u,0x8Fu,0x8F19u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x8F62u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F19u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F19u,4u,0x7Eu,0x8F1Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F19u,4u,0x7Eu,0x8F1Du);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F19u,4u,0x7Eu,0x8F1Du);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F1Du:
    if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Du,1u,0xFAu,0x8F1Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Du,1u,0xFAu,0x8F1Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Du,1u,0xFAu,0x8F1Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F1Eu:
    if(m==0u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Eu,1u,0x7Au,0x8F1Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Eu,1u,0x7Au,0x8F1Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Eu,1u,0x7Au,0x8F1Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F1Fu:
    if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Fu,1u,0xC8u,0x8F20u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Fu,1u,0xC8u,0x8F20u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F1Fu,1u,0xC8u,0x8F20u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F20u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F20u,2u,0x20u,0x8F22u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F20u,2u,0x20u,0x8F22u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F20u,2u,0x20u,0x8F22u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F22u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F22u,2u,0x00u,0x8F24u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F24u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F24u,1u,0xEBu,0x8F25u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F25u:
    if(m==1u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F25u,2u,0x01u,0x8F27u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F27u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F27u,2u,0x20u,0x8F29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F29u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F29u,1u,0x18u,0x8F2Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F2Au:
    if(m==0u&&x==1u&&e==0u){ /* 6D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F2Au,3u,0x02u,0x8F2Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x025Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F2Du:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F2Du,2u,0x20u,0x8F2Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F2Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F2Fu,4u,0x7Eu,0x8F33u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F33u:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F33u,1u,0xC8u,0x8F34u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F34u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F34u,2u,0x20u,0x8F36u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F36u:
    if(m==0u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F36u,2u,0x01u,0x8F38u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F38u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 02 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F38u,4u,0x7Eu,0x8F3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2002u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F3Cu:
    if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F3Cu,1u,0xC8u,0x8F3Du);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F3Du:
    if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F3Du,1u,0xC8u,0x8F3Eu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F3Eu:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F3Eu,1u,0xE8u,0x8F3Fu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F3Fu:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F3Fu,1u,0xE8u,0x8F40u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F40u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F40u,1u,0xE8u,0x8F41u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F41u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F41u,1u,0xE8u,0x8F42u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F42u:
    if(m==0u&&x==1u&&e==0u){ /* CE 51 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F42u,3u,0x02u,0x8F45u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0251u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F45u:
    if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F45u,2u,0x03u,0x8F47u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8F4Au;}
      if(c->pc!=0x8F47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F47u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F47u:
    if(m==0u&&x==1u&&e==0u){ /* 4C C7 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F47u,3u,0x8Eu,0x8F4Au);
      c->pc=0x8EC7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F4Au:
    if(m==0u&&x==1u&&e==0u){ /* 4C BA 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F4Au,3u,0x8Eu,0x8F4Du);
      c->pc=0x8EBAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F4Du:
    if(m==0u&&x==1u&&e==0u){ /* 8E 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F4Du,3u,0x02u,0x8F50u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0253u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F50u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F50u,1u,0x68u,0x8F51u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008F51u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008F51u,1u,0x60u,0x8F52u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FEBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 EF 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008FEBu,3u,0x8Fu,0x8FEEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8FEDu))return 0;c->pc=0x8FEFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EF 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008FEBu,3u,0x8Fu,0x8FEEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8FEDu))return 0;c->pc=0x8FEFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FEEu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008FEEu,1u,0x6Bu,0x8FEFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008FEEu,1u,0x6Bu,0x8FEFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008FEEu,1u,0x6Bu,0x8FEFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008FEEu,1u,0x6Bu,0x8FEFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FEFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008FEFu,2u,0x20u,0x8FF1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
