/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000E4(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x039000u:
    if(m==1u&&x==1u&&e==0u){ /* C0 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039000u,2u,0x00u,0x9002u);
      sc_v11_op_compare(r,c->y,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039002u:
    if(m==1u&&x==1u&&e==0u){ /* F0 2B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039002u,2u,0x2Bu,0x9004u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x902Fu;}
      if(c->pc!=0x9004u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9004u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039004u:
    if(m==1u&&x==1u&&e==0u){ /* 88 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039004u,1u,0x88u,0x9005u);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039005u:
    if(m==1u&&x==1u&&e==0u){ /* 80 1C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039005u,2u,0x1Cu,0x9007u);
      if(1){c->pc=0x9023u;}
      if(c->pc!=0x9007u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9007u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039007u:
    if(m==1u&&x==1u&&e==0u){ /* 3A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039007u,1u,0x3Au,0x9008u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039008u:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039008u,2u,0x07u,0x900Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9011u;}
      if(c->pc!=0x900Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x900Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03900Au:
    if(m==1u&&x==1u&&e==0u){ /* E0 77 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03900Au,2u,0x77u,0x900Cu);
      sc_v11_op_compare(r,c->x,0x0077u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03900Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 21 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03900Cu,2u,0x21u,0x900Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x902Fu;}
      if(c->pc!=0x900Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x900Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03900Eu:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03900Eu,1u,0xE8u,0x900Fu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03900Fu:
    if(m==1u&&x==1u&&e==0u){ /* 80 12 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03900Fu,2u,0x12u,0x9011u);
      if(1){c->pc=0x9023u;}
      if(c->pc!=0x9011u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9011u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039011u:
    if(m==1u&&x==1u&&e==0u){ /* 3A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039011u,1u,0x3Au,0x9012u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039012u:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039012u,2u,0x07u,0x9014u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x901Bu;}
      if(c->pc!=0x9014u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9014u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039014u:
    if(m==1u&&x==1u&&e==0u){ /* C0 63 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039014u,2u,0x63u,0x9016u);
      sc_v11_op_compare(r,c->y,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039016u:
    if(m==1u&&x==1u&&e==0u){ /* F0 17 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039016u,2u,0x17u,0x9018u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x902Fu;}
      if(c->pc!=0x9018u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9018u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039018u:
    if(m==1u&&x==1u&&e==0u){ /* C8 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039018u,1u,0xC8u,0x9019u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039019u:
    if(m==1u&&x==1u&&e==0u){ /* 80 08 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039019u,2u,0x08u,0x901Bu);
      if(1){c->pc=0x9023u;}
      if(c->pc!=0x901Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x901Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03901Bu:
    if(m==1u&&x==1u&&e==0u){ /* 3A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03901Bu,1u,0x3Au,0x901Cu);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03901Cu:
    if(m==1u&&x==1u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03901Cu,2u,0x05u,0x901Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9023u;}
      if(c->pc!=0x901Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x901Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03901Eu:
    if(m==1u&&x==1u&&e==0u){ /* E0 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03901Eu,2u,0x00u,0x9020u);
      sc_v11_op_compare(r,c->x,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039020u:
    if(m==1u&&x==1u&&e==0u){ /* F0 0D Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039020u,2u,0x0Du,0x9022u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x902Fu;}
      if(c->pc!=0x9022u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9022u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039022u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039022u,1u,0xCAu,0x9023u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039023u:
    if(m==1u&&x==1u&&e==0u){ /* 8E 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039023u,3u,0x0Bu,0x9026u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039026u:
    if(m==1u&&x==1u&&e==0u){ /* 8C 86 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039026u,3u,0x0Bu,0x9029u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039029u:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039029u,2u,0x30u,0x902Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03902Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03902Bu,3u,0x00u,0x902Eu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03902Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03902Eu,1u,0x60u,0x902Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039035u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039035u,1u,0x08u,0x9036u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039036u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039036u,2u,0x20u,0x9038u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039038u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039038u,1u,0x0Bu,0x9039u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039039u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039039u,1u,0x48u,0x903Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03903Au:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03903Au,1u,0x7Bu,0x903Bu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03903Bu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03903Bu,1u,0x38u,0x903Cu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03903Cu:
    if(m==0u&&x==0u&&e==0u){ /* E9 06 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03903Cu,3u,0x00u,0x903Fu);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03903Fu:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03903Fu,1u,0x5Bu,0x9040u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039040u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039040u,1u,0x68u,0x9041u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039041u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039041u,2u,0x30u,0x9043u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039043u:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039043u,1u,0xDAu,0x9044u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039044u:
    if(m==0u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039044u,1u,0x5Au,0x9045u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039045u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039045u,1u,0x1Au,0x9046u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039046u:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039046u,2u,0x02u,0x9048u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039048u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039048u,2u,0x00u,0x904Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03904Au:
    if(m==0u&&x==0u&&e==0u){ /* A2 0C 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03904Au,3u,0x00u,0x904Du);
      sc_v11_op_ldx(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03904Du:
    if(m==0u&&x==0u&&e==0u){ /* BD CD 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03904Du,3u,0x0Cu,0x9050u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0CCDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039050u:
    if(m==0u&&x==0u&&e==0u){ /* 9D CF 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039050u,3u,0x0Cu,0x9053u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CCFu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039053u:
    if(m==0u&&x==0u&&e==0u){ /* 65 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039053u,2u,0x00u,0x9055u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039055u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039055u,2u,0x00u,0x9057u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039057u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039057u,1u,0xCAu,0x9058u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039058u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039058u,1u,0xCAu,0x9059u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039059u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F2 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039059u,2u,0xF2u,0x905Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x904Du;}
      if(c->pc!=0x905Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x905Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03905Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03905Bu,3u,0x0Cu,0x905Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CCFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03905Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 7F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03905Eu,3u,0x7Fu,0x9061u);
      sc_v11_op_lda(r,0x7FFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039061u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039061u,2u,0x00u,0x9063u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039063u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CF A3 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039063u,3u,0xA3u,0x9066u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9065u))return 0;c->pc=0xA3CFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039069u:
    if(m==0u&&x==0u&&e==0u){ /* AD CF 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039069u,3u,0x0Cu,0x906Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CCFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03906Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 7F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03906Cu,3u,0x7Fu,0x906Fu);
      sc_v11_op_and(r,0x7FFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03906Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03906Fu,2u,0x00u,0x9071u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039071u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CF A3 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039071u,3u,0xA3u,0x9074u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9073u))return 0;c->pc=0xA3CFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039077u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039077u,2u,0x00u,0x9079u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039079u:
    if(m==0u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039079u,1u,0x7Au,0x907Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03907Au:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03907Au,1u,0xFAu,0x907Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03907Bu:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03907Bu,1u,0x2Bu,0x907Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03907Cu:
    if(m==0u&&x==0u&&e==0u){ /* 28 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03907Cu,1u,0x28u,0x907Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03907Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03907Du,1u,0x60u,0x907Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03907Eu:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03907Eu,1u,0x08u,0x907Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03907Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03907Fu,2u,0x20u,0x9081u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039081u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039081u,1u,0x0Bu,0x9082u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039082u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039082u,1u,0x48u,0x9083u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039083u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039083u,1u,0x7Bu,0x9084u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039084u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039084u,1u,0x38u,0x9085u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039085u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039085u,3u,0x00u,0x9088u);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039088u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039088u,1u,0x5Bu,0x9089u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039089u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039089u,1u,0x68u,0x908Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03908Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03908Au,2u,0x30u,0x908Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03908Cu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03908Cu,1u,0xDAu,0x908Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03908Du:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03908Du,2u,0x00u,0x908Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03908Fu:
    if(m==0u&&x==0u&&e==0u){ /* A2 0C 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03908Fu,3u,0x00u,0x9092u);
      sc_v11_op_ldx(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039092u:
    if(m==0u&&x==0u&&e==0u){ /* BD CD 0C Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039092u,3u,0x0Cu,0x9095u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0CCDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039095u:
    if(m==0u&&x==0u&&e==0u){ /* 9D CF 0C Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039095u,3u,0x0Cu,0x9098u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CCFu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039098u:
    if(m==0u&&x==0u&&e==0u){ /* 65 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039098u,2u,0x00u,0x909Au);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03909Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03909Au,2u,0x00u,0x909Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03909Cu:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03909Cu,1u,0xCAu,0x909Du);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03909Du:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03909Du,1u,0xCAu,0x909Eu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03909Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F2 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03909Eu,2u,0xF2u,0x90A0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9092u;}
      if(c->pc!=0x90A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390A0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 0C Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390A0u,3u,0x0Cu,0x90A3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CCFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390A3u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390A3u,1u,0xFAu,0x90A4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390A4u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390A4u,1u,0x2Bu,0x90A5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390A5u:
    if(m==0u&&x==0u&&e==0u){ /* 28 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390A5u,1u,0x28u,0x90A6u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390A6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390A6u,1u,0x60u,0x90A7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390A7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390A7u,2u,0x20u,0x90A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390A9u:
    if(m==0u&&x==0u&&e==0u){ /* A2 0C 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390A9u,3u,0x00u,0x90ACu);
      sc_v11_op_ldx(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390ACu:
    if(m==0u&&x==0u&&e==0u){ /* BD B7 90 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390ACu,3u,0x90u,0x90AFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x90B7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390AFu:
    if(m==0u&&x==0u&&e==0u){ /* 9D CF 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390AFu,3u,0x0Cu,0x90B2u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CCFu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390B2u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390B2u,1u,0xCAu,0x90B3u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390B3u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390B3u,1u,0xCAu,0x90B4u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390B4u:
    if(m==0u&&x==0u&&e==0u){ /* 10 F6 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390B4u,2u,0xF6u,0x90B6u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x90ACu;}
      if(c->pc!=0x90B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390B6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390B6u,1u,0x60u,0x90B7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390C5u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390C5u,2u,0x30u,0x90C7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390C7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 37 91 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390C7u,3u,0x91u,0x90CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x90C9u))return 0;c->pc=0x9137u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390CAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390CAu,3u,0x0Bu,0x90CDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390CDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 29 01 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390CDu,3u,0x01u,0x90D0u);
      sc_v11_op_compare(r,c->a,0x0129u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390D0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390D0u,2u,0x06u,0x90D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x90D8u;}
      if(c->pc!=0x90D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390D8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 32 01 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390D8u,3u,0x01u,0x90DBu);
      sc_v11_op_compare(r,c->a,0x0132u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390DBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390DBu,2u,0x06u,0x90DDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x90E3u;}
      if(c->pc!=0x90DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90DDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390E3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 6B 03 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390E3u,3u,0x03u,0x90E6u);
      sc_v11_op_compare(r,c->a,0x036Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390E6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 26 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390E6u,2u,0x26u,0x90E8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x910Eu;}
      if(c->pc!=0x90E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390E8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 10 03 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390E8u,3u,0x03u,0x90EBu);
      sc_v11_op_compare(r,c->a,0x0310u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390EBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 21 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390EBu,2u,0x21u,0x90EDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x910Eu;}
      if(c->pc!=0x90EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390EDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 03 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390EDu,3u,0x03u,0x90F0u);
      sc_v11_op_compare(r,c->a,0x0307u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390F0u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1C Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390F0u,2u,0x1Cu,0x90F2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x910Eu;}
      if(c->pc!=0x90F2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90F2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390F2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 BB 02 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390F2u,3u,0x02u,0x90F5u);
      sc_v11_op_compare(r,c->a,0x02BBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0390F5u:
    if(m==0u&&x==0u&&e==0u){ /* 90 12 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0390F5u,2u,0x12u,0x90F7u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9109u;}
      if(c->pc!=0x90F7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90F7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039109u:
    if(m==0u&&x==0u&&e==0u){ /* C9 49 02 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039109u,3u,0x02u,0x910Cu);
      sc_v11_op_compare(r,c->a,0x0249u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03910Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03910Cu,2u,0x03u,0x910Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9111u;}
      if(c->pc!=0x910Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x910Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03910Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 9F AA Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03910Eu,3u,0xAAu,0x9111u);
      c->pc=0xAA9Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039111u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039111u,3u,0x0Bu,0x9114u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039114u:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039114u,3u,0x00u,0x9117u);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039117u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1D Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039117u,2u,0x1Du,0x9119u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9136u;}
      if(c->pc!=0x9119u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9119u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039119u:
    if(m==0u&&x==0u&&e==0u){ /* C9 29 01 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039119u,3u,0x01u,0x911Cu);
      sc_v11_op_compare(r,c->a,0x0129u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03911Cu:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03911Cu,2u,0x03u,0x911Eu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9121u;}
      if(c->pc!=0x911Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x911Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03911Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 7A 93 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03911Eu,3u,0x93u,0x9121u);
      c->pc=0x937Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039136u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039136u,1u,0x60u,0x9137u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039137u:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 0B Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039137u,3u,0x0Bu,0x913Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03913Au:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03913Au,1u,0x38u,0x913Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03913Bu:
    if(m==0u&&x==0u&&e==0u){ /* E9 D0 02 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03913Bu,3u,0x02u,0x913Eu);
      sc_v11_op_sbc(r,0x02D0u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03913Eu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03913Eu,1u,0xAAu,0x913Fu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03913Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03913Fu,3u,0x0Bu,0x9142u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039142u:
    if(m==0u&&x==0u&&e==0u){ /* C9 7A 03 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039142u,3u,0x03u,0x9145u);
      sc_v11_op_compare(r,c->a,0x037Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039145u:
    if(m==0u&&x==0u&&e==0u){ /* 90 EF Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039145u,2u,0xEFu,0x9147u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9136u;}
      if(c->pc!=0x9147u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9147u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03937Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03937Au,2u,0x20u,0x937Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03937Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03937Cu,1u,0x0Bu,0x937Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03937Du:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03937Du,1u,0x48u,0x937Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03937Eu:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03937Eu,1u,0x7Bu,0x937Fu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03937Fu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03937Fu,1u,0x38u,0x9380u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039380u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0A 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039380u,3u,0x00u,0x9383u);
      sc_v11_op_sbc(r,0x000Au,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039383u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039383u,1u,0x5Bu,0x9384u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039384u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039384u,1u,0x68u,0x9385u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039385u:
    if(m==0u&&x==0u&&e==0u){ /* EE 8D 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039385u,3u,0x0Bu,0x9388u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B8Du),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039388u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039388u,3u,0x0Bu,0x938Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03938Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 76 03 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03938Bu,3u,0x03u,0x938Eu);
      sc_v11_op_compare(r,c->a,0x0376u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03938Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03938Eu,2u,0x05u,0x9390u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9395u;}
      if(c->pc!=0x9390u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9390u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039395u:
    if(m==0u&&x==0u&&e==0u){ /* C9 84 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039395u,3u,0x00u,0x9398u);
      sc_v11_op_compare(r,c->a,0x0084u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039398u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039398u,2u,0x05u,0x939Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x939Fu;}
      if(c->pc!=0x939Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x939Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03939Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 3E 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03939Au,3u,0x9Au,0x939Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x939Cu))return 0;c->pc=0x9A3Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03939Du:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03939Du,2u,0x03u,0x939Fu);
      if(1){c->pc=0x93A2u;}
      if(c->pc!=0x939Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x939Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393A2u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393A2u,2u,0x00u,0x93A4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393A4u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393A4u,3u,0x00u,0x93A7u);
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393A7u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393A7u,2u,0x05u,0x93A9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x93AEu;}
      if(c->pc!=0x93A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393A9u:
    if(m==0u&&x==0u&&e==0u){ /* EE 1D 0E Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393A9u,3u,0x0Eu,0x93ACu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0E1Du),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393ACu:
    if(m==0u&&x==0u&&e==0u){ /* 80 0C Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393ACu,2u,0x0Cu,0x93AEu);
      if(1){c->pc=0x93BAu;}
      if(c->pc!=0x93AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393BAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 23 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393BAu,3u,0x00u,0x93BDu);
      sc_v11_op_lda(r,0x0023u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393BDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393BDu,3u,0x90u,0x93C0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93BFu))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393C0u:
    if(m==0u&&x==0u&&e==0u){ /* C5 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393C0u,2u,0x00u,0x93C2u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393C2u:
    if(m==0u&&x==0u&&e==0u){ /* B0 08 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393C2u,2u,0x08u,0x93C4u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x93CCu;}
      if(c->pc!=0x93C4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93C4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393CCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393CCu,3u,0x00u,0x93CFu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393CFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393CFu,2u,0x04u,0x93D1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393D1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393D1u,2u,0x04u,0x93D3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393D3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF FF Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393D3u,3u,0xFFu,0x93D6u);
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393D6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393D6u,2u,0x05u,0x93D8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x93DDu;}
      if(c->pc!=0x93D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393DDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393DDu,3u,0x0Bu,0x93E0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393E0u:
    if(m==0u&&x==0u&&e==0u){ /* C9 84 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393E0u,3u,0x00u,0x93E3u);
      sc_v11_op_compare(r,c->a,0x0084u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393E3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393E3u,2u,0x08u,0x93E5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x93EDu;}
      if(c->pc!=0x93E5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93E5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393EDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393EDu,2u,0x04u,0x93EFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393EFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 D2 99 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393EFu,3u,0x99u,0x93F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93F1u))return 0;c->pc=0x99D2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393F2u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393F2u,1u,0x18u,0x93F3u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393F3u:
    if(m==0u&&x==0u&&e==0u){ /* 6D AD 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393F3u,3u,0x0Bu,0x93F6u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BADu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393F6u:
    if(m==0u&&x==0u&&e==0u){ /* AC 87 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393F6u,3u,0x0Bu,0x93F9u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B87u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393F9u:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393F9u,2u,0x03u,0x93FBu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x93FEu;}
      if(c->pc!=0x93FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393FBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C FE Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393FBu,3u,0xFEu,0x93FEu);
      sc_v11_op_lda(r,0xFE0Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0393FEu:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0393FEu,2u,0x02u,0x9400u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
