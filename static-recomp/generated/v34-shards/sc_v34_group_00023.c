/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00023(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x008C28u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C28u,2u,0x20u,0x8C2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C2Au:
    if(m==1u&&x==0u&&e==0u){ /* A5 5F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C2Au,2u,0x5Fu,0x8C2Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x5Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C2Cu:
    if(m==1u&&x==0u&&e==0u){ /* 10 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C2Cu,2u,0x04u,0x8C2Eu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x8C32u;}
      if(c->pc!=0x8C2Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C2Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C2Eu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 0C 42 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C2Eu,3u,0x42u,0x8C31u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C31u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C31u,1u,0x60u,0x8C32u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C32u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B5 Mesen corrected gameplay frame 2582; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C32u,2u,0xB5u,0x8C34u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB5u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C34u:
    if(m==1u&&x==0u&&e==0u){ /* D0 04 Mesen corrected gameplay frame 2582; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C34u,2u,0x04u,0x8C36u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C3Au;}
      if(c->pc!=0x8C36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C36u:
    if(m==1u&&x==0u&&e==0u){ /* C5 77 Mesen corrected gameplay frame 2582; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C36u,2u,0x77u,0x8C38u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x77u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C38u:
    if(m==1u&&x==0u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 2582; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C38u,2u,0x07u,0x8C3Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C41u;}
      if(c->pc!=0x8C3Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C3Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C41u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2582; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C41u,1u,0x60u,0x8C42u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C42u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C42u,2u,0x30u,0x8C44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C44u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C44u,2u,0xD7u,0x8C46u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C46u:
    if(m==0u&&x==0u&&e==0u){ /* 10 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C46u,2u,0x03u,0x8C48u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x8C4Bu;}
      if(c->pc!=0x8C48u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C48u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C4Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C4Bu,2u,0x0Du,0x8C4Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C5Au;}
      if(c->pc!=0x8C4Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C4Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C5Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 65 8D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C5Au,3u,0x8Du,0x8C5Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C5Cu))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C5Du:
    if(m==1u&&x==1u&&e==0u){ /* 20 A6 8D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C5Du,3u,0x8Du,0x8C60u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C5Fu))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C60u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2582; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C60u,2u,0x20u,0x8C62u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C60u,2u,0x20u,0x8C62u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C62u:
    if(m==1u&&x==0u&&e==0u){ /* A5 E3 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C62u,2u,0xE3u,0x8C64u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C64u:
    if(m==1u&&x==0u&&e==0u){ /* D0 17 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C64u,2u,0x17u,0x8C66u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C7Du;}
      if(c->pc!=0x8C66u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C66u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C66u:
    if(m==1u&&x==0u&&e==0u){ /* A5 E1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C66u,2u,0xE1u,0x8C68u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C68u:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C68u,1u,0x1Au,0x8C69u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C69u:
    if(m==1u&&x==0u&&e==0u){ /* C9 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C69u,2u,0x18u,0x8C6Bu);
      sc_v11_op_compare(r,c->a,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C6Bu:
    if(m==1u&&x==0u&&e==0u){ /* B0 16 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C6Bu,2u,0x16u,0x8C6Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8C83u;}
      if(c->pc!=0x8C6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C6Du:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C6Du,2u,0x03u,0x8C6Fu);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C6Fu:
    if(m==1u&&x==0u&&e==0u){ /* C9 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C6Fu,2u,0x02u,0x8C71u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C71u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C71u,2u,0x03u,0x8C73u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C76u;}
      if(c->pc!=0x8C73u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C73u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C73u:
    if(m==1u&&x==0u&&e==0u){ /* 4C D9 8D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C73u,3u,0x8Du,0x8C76u);
      c->pc=0x8DD9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C76u:
    if(m==1u&&x==0u&&e==0u){ /* C9 03 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C76u,2u,0x03u,0x8C78u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C78u:
    if(m==1u&&x==0u&&e==0u){ /* D0 09 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C78u,2u,0x09u,0x8C7Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C83u;}
      if(c->pc!=0x8C7Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C7Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C7Au:
    if(m==1u&&x==0u&&e==0u){ /* 4C FB 8D Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C7Au,3u,0x8Du,0x8C7Du);
      c->pc=0x8DFBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008C83u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008C83u,1u,0x60u,0x8C84u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CEEu:
    if(m==1u&&x==0u&&e==0u){ /* AD 45 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008CEEu,3u,0x01u,0x8CF1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0145u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CF1u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 21 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008CF1u,3u,0x21u,0x8CF4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2121u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CF4u:
    if(m==1u&&x==0u&&e==0u){ /* AE 65 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008CF4u,3u,0x01u,0x8CF7u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0165u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CF7u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008CF7u,3u,0x43u,0x8CFAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CFAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008CFAu,2u,0x7Eu,0x8CFCu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CFCu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008CFCu,3u,0x43u,0x8CFFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008CFFu:
    if(m==1u&&x==0u&&e==0u){ /* AE 85 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008CFFu,3u,0x01u,0x8D02u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0185u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D02u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008D02u,3u,0x43u,0x8D05u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D05u:
    if(m==1u&&x==0u&&e==0u){ /* AD 75 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008D05u,3u,0x01u,0x8D08u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0175u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D08u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008D08u,3u,0x43u,0x8D0Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D0Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008D0Bu,2u,0x00u,0x8D0Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D0Du:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008D0Du,3u,0x43u,0x8D10u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D10u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008D10u,2u,0x02u,0x8D12u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D12u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008D12u,3u,0x42u,0x8D15u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008D65u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008D65u,2u,0x20u,0x8D67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    break;
  case 0x008DA2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 8D Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA2u,3u,0x8Du,0x8DA5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DA4u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DA5u:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA5u,1u,0x6Bu,0x8DA6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DA6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA6u,2u,0x20u,0x8DA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA6u,2u,0x20u,0x8DA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DA8u:

    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DA8u,2u,0x10u,0x8DAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DD9u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DD9u,2u,0x20u,0x8DDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DDBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DDBu,2u,0x10u,0x8DDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DDDu:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 28 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DDDu,3u,0x28u,0x8DE0u);
      sc_v11_op_ldx(r,0x2840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DE0u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 67 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DE0u,3u,0x01u,0x8DE3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0167u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DE3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DE3u,2u,0x18u,0x8DE5u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DE5u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 77 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DE5u,3u,0x01u,0x8DE8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0177u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DE8u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DE8u,3u,0x08u,0x8DEBu);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DEBu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 87 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DEBu,3u,0x01u,0x8DEEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0187u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DEEu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 58 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DEEu,3u,0x58u,0x8DF1u);
      sc_v11_op_ldx(r,0x5800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DF1u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 47 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DF1u,3u,0x01u,0x8DF4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0147u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DF4u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DF4u,2u,0xB7u,0x8DF6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DF6u:
    if(m==1u&&x==0u&&e==0u){ /* 09 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DF6u,2u,0x04u,0x8DF8u);
      sc_v11_op_ora(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DF8u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DF8u,2u,0xB7u,0x8DFAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DFAu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DFAu,1u,0x60u,0x8DFBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DFBu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DFBu,2u,0x20u,0x8DFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DFDu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DFDu,2u,0x10u,0x8DFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008DFFu:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 30 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008DFFu,3u,0x30u,0x8E02u);
      sc_v11_op_ldx(r,0x3040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E02u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 69 01 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E02u,3u,0x01u,0x8E05u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0169u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E05u:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E05u,2u,0x18u,0x8E07u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E07u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 79 01 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E07u,3u,0x01u,0x8E0Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0179u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E0Au:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 08 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E0Au,3u,0x08u,0x8E0Du);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E0Du:
    if(m==1u&&x==0u&&e==0u){ /* 8E 89 01 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E0Du,3u,0x01u,0x8E10u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0189u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E10u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 5C Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E10u,3u,0x5Cu,0x8E13u);
      sc_v11_op_ldx(r,0x5C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E13u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 49 01 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E13u,3u,0x01u,0x8E16u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0149u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E16u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B7 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E16u,2u,0xB7u,0x8E18u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E18u:
    if(m==1u&&x==0u&&e==0u){ /* 09 08 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E18u,2u,0x08u,0x8E1Au);
      sc_v11_op_ora(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E1Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 B7 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E1Au,2u,0xB7u,0x8E1Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E1Cu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E1Cu,1u,0x60u,0x8E1Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E1Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 8E Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E1Du,3u,0x8Eu,0x8E20u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E1Fu))return 0;c->pc=0x8E21u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E20u:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E20u,1u,0x6Bu,0x8E21u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E21u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E21u,2u,0x20u,0x8E23u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E23u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E23u,2u,0x10u,0x8E25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E25u:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 38 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E25u,3u,0x38u,0x8E28u);
      sc_v11_op_ldx(r,0x3840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E28u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 67 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E28u,3u,0x01u,0x8E2Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0167u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E2Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E2Bu,2u,0x18u,0x8E2Du);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E2Du:
    if(m==1u&&x==0u&&e==0u){ /* 8D 77 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E2Du,3u,0x01u,0x8E30u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0177u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E30u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 08 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E30u,3u,0x08u,0x8E33u);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E33u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 87 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E33u,3u,0x01u,0x8E36u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0187u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E36u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 54 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E36u,3u,0x54u,0x8E39u);
      sc_v11_op_ldx(r,0x5400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E39u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 47 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E39u,3u,0x01u,0x8E3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0147u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E3Cu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B7 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E3Cu,2u,0xB7u,0x8E3Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E3Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 04 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E3Eu,2u,0x04u,0x8E40u);
      sc_v11_op_ora(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E40u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B7 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E40u,2u,0xB7u,0x8E42u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008E42u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008E42u,1u,0x60u,0x8E43u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FEFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008FEFu,2u,0x20u,0x8FF1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FF1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008FF1u,2u,0x10u,0x8FF3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FF3u:
    if(m==1u&&x==0u&&e==0u){ /* B4 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008FF3u,2u,0x00u,0x8FF5u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FF5u:
    if(m==1u&&x==0u&&e==0u){ /* 84 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008FF5u,2u,0x7Fu,0x8FF7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FF7u:
    if(m==1u&&x==0u&&e==0u){ /* B5 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008FF7u,2u,0x02u,0x8FF9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FF9u:
    if(m==1u&&x==0u&&e==0u){ /* 85 81 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008FF9u,2u,0x81u,0x8FFBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x81u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FFBu:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008FFBu,3u,0x00u,0x8FFEu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008FFEu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008FFEu,3u,0x00u,0x9001u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
