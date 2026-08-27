/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000EB(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03ADDFu:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03ADDFu,1u,0x08u,0xADE0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03ADDFu,1u,0x08u,0xADE0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03ADE0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03ADE0u,2u,0x30u,0xADE2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03ADE0u,2u,0x30u,0xADE2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03ADE2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3D 02 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03ADE2u,3u,0x02u,0xADE5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x023Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03ADE5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 3C Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03ADE5u,2u,0x3Cu,0xADE7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAE23u;}
      if(c->pc!=0xADE7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADE7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AE23u:
    if(m==0u&&x==0u&&e==0u){ /* 28 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AE23u,1u,0x28u,0xAE24u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AE24u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AE24u,1u,0x60u,0xAE25u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AE24u,1u,0x60u,0xAE25u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEA1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEA1u,2u,0x30u,0xAEA3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEA3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 51 0B Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEA3u,3u,0x0Bu,0xAEA6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEA6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEA6u,3u,0x00u,0xAEA9u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEA9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEA9u,2u,0x01u,0xAEABu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAEACu;}
      if(c->pc!=0xAEABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEABu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEABu,1u,0x60u,0xAEACu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEACu:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEACu,2u,0x00u,0xAEAEu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEAEu:
    if(m==0u&&x==0u&&e==0u){ /* C0 03 00 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEAEu,3u,0x00u,0xAEB1u);
      sc_v11_op_compare(r,c->y,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEB1u:
    if(m==0u&&x==0u&&e==0u){ /* F0 55 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEB1u,2u,0x55u,0xAEB3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAF08u;}
      if(c->pc!=0xAEB3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEB3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEB3u:
    if(m==0u&&x==0u&&e==0u){ /* C0 04 00 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEB3u,3u,0x00u,0xAEB6u);
      sc_v11_op_compare(r,c->y,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEB6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 28 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEB6u,2u,0x28u,0xAEB8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAEE0u;}
      if(c->pc!=0xAEB8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEB8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEE0u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEE0u,3u,0x00u,0xAEE3u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEE3u:
    if(m==0u&&x==0u&&e==0u){ /* B9 7A AF Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEE3u,3u,0xAFu,0xAEE6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xAF7Au)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEE6u:
    if(m==0u&&x==0u&&e==0u){ /* 30 47 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEE6u,2u,0x47u,0xAEE8u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xAF2Fu;}
      if(c->pc!=0xAEE8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEE8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEE8u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEE8u,1u,0x18u,0xAEE9u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEE9u:
    if(m==0u&&x==0u&&e==0u){ /* 65 00 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEE9u,2u,0x00u,0xAEEBu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEEBu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEEBu,1u,0xAAu,0xAEECu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEECu:
    if(m==0u&&x==0u&&e==0u){ /* BF 0C 01 7F Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEECu,4u,0x7Fu,0xAEF0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F010Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEF0u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEF0u,3u,0x03u,0xAEF3u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AEF3u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0E Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AEF3u,2u,0x0Eu,0xAEF5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF03u;}
      if(c->pc!=0xAEF5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEF5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AF03u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AF03u,1u,0xC8u,0xAF04u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AF04u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AF04u,1u,0xC8u,0xAF05u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AF05u:
    if(m==0u&&x==0u&&e==0u){ /* 80 DC Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AF05u,2u,0xDCu,0xAF07u);
      if(1){c->pc=0xAEE3u;}
      if(c->pc!=0xAF07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AF2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 5110; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AF2Fu,1u,0x60u,0xAF30u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFB0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFB0u,2u,0x20u,0xAFB2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFB0u,2u,0x20u,0xAFB2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFB2u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFB2u,1u,0x0Bu,0xAFB3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFB3u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFB3u,1u,0x48u,0xAFB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFB4u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFB4u,1u,0x7Bu,0xAFB5u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFB5u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFB5u,1u,0x38u,0xAFB6u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFB6u:
    if(m==0u&&x==0u&&e==0u){ /* E9 18 00 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFB6u,3u,0x00u,0xAFB9u);
      sc_v11_op_sbc(r,0x0018u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFB9u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFB9u,1u,0x5Bu,0xAFBAu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFBAu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFBAu,1u,0x68u,0xAFBBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFBBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFBBu,2u,0x30u,0xAFBDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFBDu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFBDu,3u,0x00u,0xAFC0u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFC0u:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFC0u,1u,0x8Au,0xAFC1u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFC1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 98 A5 7F Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFC1u,4u,0x7Fu,0xAFC5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FA598u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFC5u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFC5u,1u,0xE8u,0xAFC6u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFC6u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFC6u,1u,0xE8u,0xAFC7u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFC7u:
    if(m==0u&&x==0u&&e==0u){ /* E0 DC 05 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFC7u,3u,0x05u,0xAFCAu);
      sc_v11_op_compare(r,c->x,0x05DCu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFCAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F5 Mesen corrected gameplay frame 2678; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFCAu,2u,0xF5u,0xAFCCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAFC1u;}
      if(c->pc!=0xAFCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFCCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 0E Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFCCu,3u,0x0Eu,0xAFCFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFCFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFCFu,2u,0x06u,0xAFD1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFD1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 BC 02 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFD1u,3u,0x02u,0xAFD4u);
      sc_v11_op_lda(r,0x02BCu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFD4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0A Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFD4u,2u,0x0Au,0xAFD6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFD6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFD6u,3u,0xA2u,0xAFD9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFD8u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFDCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0E Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFDCu,3u,0x0Eu,0xAFDFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFDFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFDFu,2u,0x06u,0xAFE1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFE1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 D0 07 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFE1u,3u,0x07u,0xAFE4u);
      sc_v11_op_lda(r,0x07D0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFE4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0A Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFE4u,2u,0x0Au,0xAFE6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFE6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFE6u,3u,0xA2u,0xAFE9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFE8u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFECu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0E Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFECu,2u,0x0Eu,0xAFEEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFEEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFEEu,1u,0x18u,0xAFEFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFEFu:
    if(m==0u&&x==0u&&e==0u){ /* 65 06 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFEFu,2u,0x06u,0xAFF1u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFF1u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0E Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFF1u,2u,0x0Eu,0xAFF3u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFF3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 10 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFF3u,2u,0x10u,0xAFF5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x10u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFF5u:
    if(m==0u&&x==0u&&e==0u){ /* 65 08 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFF5u,2u,0x08u,0xAFF7u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFF7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 10 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFF7u,2u,0x10u,0xAFF9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x10u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFF9u:
    if(m==0u&&x==0u&&e==0u){ /* 64 12 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFF9u,2u,0x12u,0xAFFBu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFFBu:
    if(m==0u&&x==0u&&e==0u){ /* 64 14 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFFBu,2u,0x14u,0xAFFDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03AFFDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0C Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03AFFDu,3u,0x0Cu,0xB000u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
