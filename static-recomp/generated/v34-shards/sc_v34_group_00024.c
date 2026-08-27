/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00024(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x009001u:
    if(m==1u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009001u,2u,0x7Fu,0x9003u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009003u:
    if(m==1u&&x==0u&&e==0u){ /* D9 39 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009003u,3u,0x90u,0x9006u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9039u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009006u:
    if(m==1u&&x==0u&&e==0u){ /* A5 80 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009006u,2u,0x80u,0x9008u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x80u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009008u:
    if(m==1u&&x==0u&&e==0u){ /* F9 3E 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009008u,3u,0x90u,0x900Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x903Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00900Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 81 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00900Bu,2u,0x81u,0x900Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x81u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00900Du:
    if(m==1u&&x==0u&&e==0u){ /* F9 43 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00900Du,3u,0x90u,0x9010u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9043u)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009010u:
    if(m==1u&&x==0u&&e==0u){ /* 90 18 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009010u,2u,0x18u,0x9012u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x902Au;}
      if(c->pc!=0x9012u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9012u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009012u:
    if(m==1u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009012u,2u,0x7Fu,0x9014u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009014u:
    if(m==1u&&x==0u&&e==0u){ /* F9 39 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009014u,3u,0x90u,0x9017u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9039u)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009017u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009017u,2u,0x7Fu,0x9019u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009019u:
    if(m==1u&&x==0u&&e==0u){ /* A5 80 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009019u,2u,0x80u,0x901Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x80u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00901Bu:
    if(m==1u&&x==0u&&e==0u){ /* F9 3E 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00901Bu,3u,0x90u,0x901Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x903Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00901Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 80 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00901Eu,2u,0x80u,0x9020u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x80u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009020u:
    if(m==1u&&x==0u&&e==0u){ /* A5 81 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009020u,2u,0x81u,0x9022u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x81u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009022u:
    if(m==1u&&x==0u&&e==0u){ /* F9 43 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009022u,3u,0x90u,0x9025u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9043u)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009025u:
    if(m==1u&&x==0u&&e==0u){ /* 85 81 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009025u,2u,0x81u,0x9027u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x81u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009027u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009027u,1u,0xE8u,0x9028u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009028u:
    if(m==1u&&x==0u&&e==0u){ /* 80 D7 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009028u,2u,0xD7u,0x902Au);
      if(1){c->pc=0x9001u;}
      if(c->pc!=0x902Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x902Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00902Au:
    if(m==1u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00902Au,1u,0x8Au,0x902Bu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00902Bu:
    if(m==1u&&x==0u&&e==0u){ /* 99 79 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00902Bu,3u,0x00u,0x902Eu);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0079u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00902Eu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00902Eu,1u,0xC8u,0x902Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00902Fu:
    if(m==1u&&x==0u&&e==0u){ /* C0 05 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00902Fu,3u,0x00u,0x9032u);
      sc_v11_op_compare(r,c->y,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009032u:
    if(m==1u&&x==0u&&e==0u){ /* D0 CA Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009032u,2u,0xCAu,0x9034u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8FFEu;}
      if(c->pc!=0x9034u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9034u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009034u:
    if(m==1u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009034u,2u,0x7Fu,0x9036u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009036u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009036u,2u,0x7Eu,0x9038u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009038u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009038u,1u,0x60u,0x9039u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091A5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 6D 92 Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0091A5u,3u,0x92u,0x91A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x91A7u))return 0;c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00927Cu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00927Cu,2u,0x20u,0x927Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    break;
  case 0x0092CCu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092CCu,2u,0x20u,0x92CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092CEu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092CEu,2u,0xD7u,0x92D0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092D0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 25 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092D0u,2u,0x25u,0x92D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92F7u;}
      if(c->pc!=0x92D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092D2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092D2u,3u,0x01u,0x92D5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092D5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 FF Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092D5u,3u,0xFFu,0x92D8u);
      sc_v11_op_and(r,0xFFF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092D8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092D8u,2u,0x1Du,0x92DAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92F7u;}
      if(c->pc!=0x92DAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92DAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092DAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 06 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092DAu,3u,0x04u,0x92DDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0406u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092DDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF FF Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092DDu,3u,0xFFu,0x92E0u);
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092E0u:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092E0u,2u,0x14u,0x92E2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x92F6u;}
      if(c->pc!=0x92E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092E2u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092E2u,1u,0x1Au,0x92E3u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092E3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 06 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092E3u,3u,0x04u,0x92E6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0406u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092E6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 B4 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092E6u,3u,0x00u,0x92E9u);
      sc_v11_op_compare(r,c->a,0x00B4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092E9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092E9u,2u,0x0Bu,0x92EBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x92F6u;}
      if(c->pc!=0x92EBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092EBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 08 04 Mesen corrected gameplay frame 2749; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092EBu,3u,0x04u,0x92EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0408u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092EEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 2749; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092EEu,2u,0x06u,0x92F0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92F6u;}
      if(c->pc!=0x92F0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92F0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092F6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092F6u,1u,0x60u,0x92F7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092F7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092F7u,3u,0x00u,0x92FAu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092FAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 06 04 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092FAu,3u,0x04u,0x92FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0406u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 08 04 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0092FDu,3u,0x04u,0x9300u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0408u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009300u:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009300u,2u,0x07u,0x9302u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9309u;}
      if(c->pc!=0x9302u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9302u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009302u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009302u,3u,0x00u,0x9305u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009305u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0A 04 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009305u,3u,0x04u,0x9308u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x040Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009308u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009308u,1u,0x60u,0x9309u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009318u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009318u,2u,0x30u,0x931Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00931Au:
    if(m==1u&&x==1u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00931Au,2u,0xD7u,0x931Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00931Cu:
    if(m==1u&&x==1u&&e==0u){ /* 10 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00931Cu,2u,0x03u,0x931Eu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9321u;}
      if(c->pc!=0x931Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x931Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009321u:
    if(m==1u&&x==1u&&e==0u){ /* C9 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009321u,2u,0x01u,0x9323u);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009323u:
    if(m==1u&&x==1u&&e==0u){ /* F0 4F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009323u,2u,0x4Fu,0x9325u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9374u;}
      if(c->pc!=0x9325u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9325u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009325u:
    if(m==1u&&x==1u&&e==0u){ /* C9 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009325u,2u,0x02u,0x9327u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009327u:
    if(m==1u&&x==1u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009327u,2u,0x03u,0x9329u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x932Cu;}
      if(c->pc!=0x9329u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9329u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00932Cu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00932Cu,2u,0x20u,0x932Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00932Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 0F 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00932Eu,3u,0x0Cu,0x9331u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009331u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009331u,2u,0x0Eu,0x9333u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9341u;}
      if(c->pc!=0x9333u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9333u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009341u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009341u,2u,0x20u,0x9343u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009343u:
    if(m==1u&&x==1u&&e==0u){ /* AD 37 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009343u,3u,0x01u,0x9346u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0137u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009346u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 10 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009346u,3u,0x21u,0x9349u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009349u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 10 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009349u,3u,0x21u,0x934Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00934Cu:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00934Cu,1u,0x18u,0x934Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00934Du:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00934Du,2u,0x08u,0x934Fu);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00934Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0E 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00934Fu,3u,0x21u,0x9352u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009352u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0E 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009352u,3u,0x21u,0x9355u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009355u:
    if(m==1u&&x==1u&&e==0u){ /* AD 39 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009355u,3u,0x01u,0x9358u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0139u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009358u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0F 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009358u,3u,0x21u,0x935Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00935Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0F 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00935Bu,3u,0x21u,0x935Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00935Eu:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00935Eu,1u,0x18u,0x935Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00935Fu:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00935Fu,2u,0x08u,0x9361u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009361u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0D 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009361u,3u,0x21u,0x9364u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009364u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0D 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009364u,3u,0x21u,0x9367u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009367u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 12 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009367u,3u,0x21u,0x936Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00936Au:
    if(m==1u&&x==1u&&e==0u){ /* 9C 12 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00936Au,3u,0x21u,0x936Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00936Du:
    if(m==1u&&x==1u&&e==0u){ /* 9C 11 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00936Du,3u,0x21u,0x9370u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009370u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 11 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009370u,3u,0x21u,0x9373u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009373u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x009373u,1u,0x60u,0x9374u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
