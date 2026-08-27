/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000E9(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03A401u:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A401u,2u,0x06u,0xA403u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A403u:
    if(m==0u&&x==0u&&e==0u){ /* A0 10 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A403u,3u,0x00u,0xA406u);
      sc_v11_op_ldy(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A406u:
    if(m==0u&&x==0u&&e==0u){ /* 26 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A406u,2u,0x02u,0xA408u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x02u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A408u:
    if(m==0u&&x==0u&&e==0u){ /* 26 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A408u,2u,0x06u,0xA40Au);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x06u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A40Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A40Au,2u,0x06u,0xA40Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A40Cu:
    if(m==0u&&x==0u&&e==0u){ /* C5 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A40Cu,2u,0x04u,0xA40Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A40Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A40Eu,2u,0x04u,0xA410u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA414u;}
      if(c->pc!=0xA410u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA410u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A410u:
    if(m==0u&&x==0u&&e==0u){ /* E5 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A410u,2u,0x04u,0xA412u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A412u:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A412u,2u,0x06u,0xA414u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A414u:
    if(m==0u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A414u,1u,0x88u,0xA415u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A415u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EF Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A415u,2u,0xEFu,0xA417u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA406u;}
      if(c->pc!=0xA417u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA417u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A417u:
    if(m==0u&&x==0u&&e==0u){ /* 26 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A417u,2u,0x02u,0xA419u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x02u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A419u:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A419u,2u,0x00u,0xA41Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A41Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A41Bu,2u,0x02u,0xA41Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A41Du:
    if(m==0u&&x==0u&&e==0u){ /* 95 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A41Du,2u,0x08u,0xA41Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A41Fu:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A41Fu,1u,0x2Bu,0xA420u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A420u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A420u,1u,0x60u,0xA421u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A421u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A421u,2u,0x30u,0xA423u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A421u,2u,0x30u,0xA423u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A423u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A423u,1u,0x68u,0xA424u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A424u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A424u,1u,0xA8u,0xA425u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A425u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A425u,1u,0x18u,0xA426u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A426u:
    if(m==0u&&x==0u&&e==0u){ /* 69 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A426u,3u,0x00u,0xA429u);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A429u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A429u,1u,0x48u,0xA42Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A42Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A42Au,2u,0x20u,0xA42Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A42Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A42Cu,1u,0x0Bu,0xA42Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A42Du:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A42Du,1u,0x48u,0xA42Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A42Eu:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A42Eu,1u,0x7Bu,0xA42Fu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A42Fu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A42Fu,1u,0x38u,0xA430u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A430u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0E 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A430u,3u,0x00u,0xA433u);
      sc_v11_op_sbc(r,0x000Eu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A433u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A433u,1u,0x5Bu,0xA434u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A434u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A434u,1u,0x68u,0xA435u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A435u:
    if(m==0u&&x==0u&&e==0u){ /* B9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A435u,3u,0x00u,0xA438u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0001u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A438u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A438u,3u,0x00u,0xA43Bu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A43Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A43Bu,1u,0xAAu,0xA43Cu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A43Cu:
    if(m==0u&&x==0u&&e==0u){ /* B5 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A43Cu,2u,0x0Eu,0xA43Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A43Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A43Eu,2u,0x02u,0xA440u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A440u:
    if(m==0u&&x==0u&&e==0u){ /* B5 10 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A440u,2u,0x10u,0xA442u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x10u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A442u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A442u,2u,0x04u,0xA444u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A444u:
    if(m==0u&&x==0u&&e==0u){ /* B9 02 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A444u,3u,0x00u,0xA447u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0002u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A447u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A447u,3u,0x00u,0xA44Au);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A44Au:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A44Au,1u,0xAAu,0xA44Bu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A44Bu:
    if(m==0u&&x==0u&&e==0u){ /* B5 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A44Bu,2u,0x0Eu,0xA44Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A44Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A44Du,2u,0x06u,0xA44Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A44Fu:
    if(m==0u&&x==0u&&e==0u){ /* B5 10 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A44Fu,2u,0x10u,0xA451u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x10u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A451u:
    if(m==0u&&x==0u&&e==0u){ /* 85 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A451u,2u,0x08u,0xA453u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A453u:
    if(m==0u&&x==0u&&e==0u){ /* B9 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A453u,3u,0x00u,0xA456u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0003u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A456u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A456u,3u,0x00u,0xA459u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A459u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A459u,2u,0x00u,0xA45Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A45Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A45Bu,2u,0x0Au,0xA45Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A45Du:
    if(m==0u&&x==0u&&e==0u){ /* 64 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A45Du,2u,0x0Cu,0xA45Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A45Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 20 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A45Fu,3u,0x00u,0xA462u);
      sc_v11_op_ldy(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A462u:
    if(m==0u&&x==0u&&e==0u){ /* 26 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A462u,2u,0x02u,0xA464u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x02u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A464u:
    if(m==0u&&x==0u&&e==0u){ /* 26 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A464u,2u,0x04u,0xA466u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x04u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A466u:
    if(m==0u&&x==0u&&e==0u){ /* 26 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A466u,2u,0x0Au,0xA468u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x0Au),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A468u:
    if(m==0u&&x==0u&&e==0u){ /* 26 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A468u,2u,0x0Cu,0xA46Au);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x0Cu),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A46Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A46Au,2u,0x0Au,0xA46Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A46Cu:
    if(m==0u&&x==0u&&e==0u){ /* C5 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A46Cu,2u,0x06u,0xA46Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A46Eu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A46Eu,2u,0x0Cu,0xA470u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A470u:
    if(m==0u&&x==0u&&e==0u){ /* E5 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A470u,2u,0x08u,0xA472u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A472u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A472u,2u,0x0Cu,0xA474u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA480u;}
      if(c->pc!=0xA474u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA474u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A474u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A474u,2u,0x0Au,0xA476u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A476u:
    if(m==0u&&x==0u&&e==0u){ /* E5 06 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A476u,2u,0x06u,0xA478u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A478u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0A Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A478u,2u,0x0Au,0xA47Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A47Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A47Au,2u,0x0Cu,0xA47Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A47Cu:
    if(m==0u&&x==0u&&e==0u){ /* E5 08 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A47Cu,2u,0x08u,0xA47Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A47Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 0C Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A47Eu,2u,0x0Cu,0xA480u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A480u:
    if(m==0u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A480u,1u,0x88u,0xA481u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A481u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DF Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A481u,2u,0xDFu,0xA483u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA462u;}
      if(c->pc!=0xA483u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA483u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A483u:
    if(m==0u&&x==0u&&e==0u){ /* 26 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A483u,2u,0x02u,0xA485u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x02u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A485u:
    if(m==0u&&x==0u&&e==0u){ /* 26 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A485u,2u,0x04u,0xA487u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x04u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A487u:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A487u,2u,0x00u,0xA489u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A489u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A489u,2u,0x02u,0xA48Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A48Bu:
    if(m==0u&&x==0u&&e==0u){ /* 95 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A48Bu,2u,0x0Eu,0xA48Du);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x0Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A48Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A48Du,2u,0x04u,0xA48Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A48Fu:
    if(m==0u&&x==0u&&e==0u){ /* 95 10 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A48Fu,2u,0x10u,0xA491u);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x10u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A491u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A491u,1u,0x2Bu,0xA492u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A492u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A492u,1u,0x60u,0xA493u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7DAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4435; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7DAu,2u,0x30u,0xA7DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7DCu:
    if(m==0u&&x==0u&&e==0u){ /* EE 19 0E Mesen corrected gameplay frame 4435; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7DCu,3u,0x0Eu,0xA7DFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0E19u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7DFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4435; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7DFu,1u,0x60u,0xA7E0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
