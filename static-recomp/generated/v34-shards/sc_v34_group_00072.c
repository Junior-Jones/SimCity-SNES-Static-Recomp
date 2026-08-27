/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00072(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01C807u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A9 C8 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C807u,3u,0xC8u,0xC80Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC809u))return 0;c->pc=0xC8A9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C80Au:
    if(m==1u&&x==1u&&e==0u){ /* 20 B7 C8 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Au,3u,0xC8u,0xC80Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC80Cu))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C80Du:
    if(m==1u&&x==1u&&e==0u){ /* 20 71 C8 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Du,3u,0xC8u,0xC810u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC80Fu))return 0;c->pc=0xC871u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C810u:
    if(m==1u&&x==1u&&e==0u){ /* 20 9B C8 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C810u,3u,0xC8u,0xC813u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC812u))return 0;c->pc=0xC89Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C813u:
    if(m==1u&&x==1u&&e==0u){ /* 20 C8 C8 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C813u,3u,0xC8u,0xC816u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC815u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C816u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C816u,1u,0x60u,0xC817u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C817u:
    if(m==0u&&x==1u&&e==0u){ /* 20 24 C8 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C817u,3u,0xC8u,0xC81Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC819u))return 0;c->pc=0xC824u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 24 C8 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C817u,3u,0xC8u,0xC81Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC819u))return 0;c->pc=0xC824u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 24 C8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C817u,3u,0xC8u,0xC81Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC819u))return 0;c->pc=0xC824u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C81Au:
    if(m==1u&&x==1u&&e==0u){ /* 20 71 C8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C81Au,3u,0xC8u,0xC81Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC81Cu))return 0;c->pc=0xC871u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C81Du:
    if(m==1u&&x==1u&&e==0u){ /* 20 9B C8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C81Du,3u,0xC8u,0xC820u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC81Fu))return 0;c->pc=0xC89Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C820u:
    if(m==1u&&x==1u&&e==0u){ /* 20 C8 C8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C820u,3u,0xC8u,0xC823u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC822u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C823u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C823u,1u,0x60u,0xC824u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C824u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C824u,2u,0x30u,0xC826u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C824u,2u,0x30u,0xC826u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C824u,2u,0x30u,0xC826u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C826u:
    if(m==1u&&x==1u&&e==0u){ /* A0 0F Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C826u,2u,0x0Fu,0xC828u);
      sc_v11_op_ldy(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C828u:
    if(m==1u&&x==1u&&e==0u){ /* A2 1E Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C828u,2u,0x1Eu,0xC82Au);
      sc_v11_op_ldx(r,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C82Au:
    if(m==1u&&x==1u&&e==0u){ /* AD 25 04 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C82Au,3u,0x04u,0xC82Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C82Du:
    if(m==1u&&x==1u&&e==0u){ /* 29 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C82Du,2u,0x02u,0xC82Fu);
      sc_v11_op_and(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C82Fu:
    if(m==1u&&x==1u&&e==0u){ /* D0 1C Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C82Fu,2u,0x1Cu,0xC831u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC84Du;}
      if(c->pc!=0xC831u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC831u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C831u:
    if(m==1u&&x==1u&&e==0u){ /* AD 9F 0B Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C831u,3u,0x0Bu,0xC834u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B9Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C834u:
    if(m==1u&&x==1u&&e==0u){ /* D0 17 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C834u,2u,0x17u,0xC836u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC84Du;}
      if(c->pc!=0xC836u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC836u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C836u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C836u,2u,0x20u,0xC838u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C838u:
    if(m==0u&&x==1u&&e==0u){ /* AD 9D 0B Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C838u,3u,0x0Bu,0xC83Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C83Bu:
    if(m==0u&&x==1u&&e==0u){ /* DF 4E 88 01 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C83Bu,4u,0x01u,0xC83Fu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01884Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C83Fu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C83Fu,2u,0x20u,0xC841u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C841u:
    if(m==1u&&x==1u&&e==0u){ /* B0 0A Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C841u,2u,0x0Au,0xC843u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC84Du;}
      if(c->pc!=0xC843u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC843u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C84Du:
    if(m==1u&&x==1u&&e==0u){ /* B9 9B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C84Du,3u,0x02u,0xC850u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x029Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C850u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C850u,2u,0x7Fu,0xC852u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C852u:
    if(m==1u&&x==1u&&e==0u){ /* 99 9B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C852u,3u,0x02u,0xC855u);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x029Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C855u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C855u,1u,0xCAu,0xC856u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C856u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C856u,1u,0xCAu,0xC857u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C857u:
    if(m==1u&&x==1u&&e==0u){ /* 88 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C857u,1u,0x88u,0xC858u);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C858u:
    if(m==1u&&x==1u&&e==0u){ /* 10 D0 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C858u,2u,0xD0u,0xC85Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC82Au;}
      if(c->pc!=0xC85Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC85Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C85Au:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C85Au,2u,0x20u,0xC85Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C85Cu:
    if(m==0u&&x==1u&&e==0u){ /* A0 0F Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C85Cu,2u,0x0Fu,0xC85Eu);
      sc_v11_op_ldy(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C85Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD F5 03 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C85Eu,3u,0x03u,0xC861u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C861u:
    if(m==0u&&x==1u&&e==0u){ /* 0D F7 03 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C861u,3u,0x03u,0xC864u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C864u:
    if(m==0u&&x==1u&&e==0u){ /* D0 0A Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C864u,2u,0x0Au,0xC866u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC870u;}
      if(c->pc!=0xC866u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC866u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C866u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C866u,2u,0x20u,0xC868u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C868u:
    if(m==1u&&x==1u&&e==0u){ /* B9 9B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C868u,3u,0x02u,0xC86Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x029Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C86Bu:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C86Bu,2u,0x80u,0xC86Du);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C86Du:
    if(m==1u&&x==1u&&e==0u){ /* 99 9B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C86Du,3u,0x02u,0xC870u);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x029Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C870u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C870u,1u,0x60u,0xC871u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C871u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C871u,2u,0x30u,0xC873u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C873u:
    if(m==1u&&x==1u&&e==0u){ /* A2 0F Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C873u,2u,0x0Fu,0xC875u);
      sc_v11_op_ldx(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C875u:
    if(m==1u&&x==1u&&e==0u){ /* BD 9B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C875u,3u,0x02u,0xC878u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x029Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C878u:
    if(m==1u&&x==1u&&e==0u){ /* DD 8B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C878u,3u,0x02u,0xC87Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x028Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C87Bu:
    if(m==1u&&x==1u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C87Bu,2u,0x07u,0xC87Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC884u;}
      if(c->pc!=0xC87Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC87Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C87Du:
    if(m==1u&&x==1u&&e==0u){ /* DA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C87Du,1u,0xDAu,0xC87Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C87Eu:
    if(m==1u&&x==1u&&e==0u){ /* 20 88 C8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C87Eu,3u,0xC8u,0xC881u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC880u))return 0;c->pc=0xC888u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C881u:
    if(m==1u&&x==1u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C881u,2u,0x10u,0xC883u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C883u:
    if(m==1u&&x==1u&&e==0u){ /* FA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C883u,1u,0xFAu,0xC884u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C884u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C884u,1u,0xCAu,0xC885u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C885u:
    if(m==1u&&x==1u&&e==0u){ /* 10 EE Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C885u,2u,0xEEu,0xC887u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC875u;}
      if(c->pc!=0xC887u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC887u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C887u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C887u,1u,0x60u,0xC888u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C888u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C888u,2u,0x30u,0xC88Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C88Au:
    if(m==1u&&x==1u&&e==0u){ /* DA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C88Au,1u,0xDAu,0xC88Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C88Bu:
    if(m==1u&&x==1u&&e==0u){ /* AE 4B 08 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C88Bu,3u,0x08u,0xC88Eu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x084Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C88Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 4F 08 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C88Eu,3u,0x08u,0xC891u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x084Fu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C891u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C891u,1u,0xE8u,0xC892u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C892u:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C892u,1u,0x68u,0xC893u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C893u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 4F 08 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C893u,3u,0x08u,0xC896u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x084Fu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C896u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C896u,1u,0xE8u,0xC897u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C897u:
    if(m==1u&&x==1u&&e==0u){ /* 8E 4B 08 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C897u,3u,0x08u,0xC89Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x084Bu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C89Au:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C89Au,1u,0x60u,0xC89Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C89Bu:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C89Bu,2u,0x30u,0xC89Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C89Du:
    if(m==1u&&x==1u&&e==0u){ /* A2 0F Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C89Du,2u,0x0Fu,0xC89Fu);
      sc_v11_op_ldx(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C89Fu:
    if(m==1u&&x==1u&&e==0u){ /* BD 9B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C89Fu,3u,0x02u,0xC8A2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x029Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8A2u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 8B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8A2u,3u,0x02u,0xC8A5u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x028Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8A5u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8A5u,1u,0xCAu,0xC8A6u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8A6u:
    if(m==1u&&x==1u&&e==0u){ /* 10 F7 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8A6u,2u,0xF7u,0xC8A8u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC89Fu;}
      if(c->pc!=0xC8A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC8A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8A8u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8A8u,1u,0x60u,0xC8A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8A9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8A9u,2u,0x30u,0xC8ABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8ABu:
    if(m==1u&&x==1u&&e==0u){ /* A2 0F Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8ABu,2u,0x0Fu,0xC8ADu);
      sc_v11_op_ldx(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8ADu:
    if(m==1u&&x==1u&&e==0u){ /* BD 8B 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8ADu,3u,0x02u,0xC8B0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x028Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8B0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 9B 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B0u,3u,0x02u,0xC8B3u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x029Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8B3u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B3u,1u,0xCAu,0xC8B4u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8B4u:
    if(m==1u&&x==1u&&e==0u){ /* 10 F7 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B4u,2u,0xF7u,0xC8B6u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC8ADu;}
      if(c->pc!=0xC8B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC8B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8B6u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B6u,1u,0x60u,0xC8B7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8B7u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B7u,2u,0x30u,0xC8B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B7u,2u,0x30u,0xC8B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8B9u:
    if(m==1u&&x==1u&&e==0u){ /* A2 0F Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B9u,2u,0x0Fu,0xC8BBu);
      sc_v11_op_ldx(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8BBu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8BBu,2u,0x02u,0xC8BDu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8BDu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 8B 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8BDu,3u,0x02u,0xC8C0u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x028Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8C0u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C0u,1u,0xCAu,0xC8C1u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8C1u:
    if(m==1u&&x==1u&&e==0u){ /* 10 FA Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C1u,2u,0xFAu,0xC8C3u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC8BDu;}
      if(c->pc!=0xC8C3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC8C3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8C3u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C3u,1u,0x60u,0xC8C4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8C8u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C8u,2u,0x30u,0xC8CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8CAu:
    if(m==1u&&x==1u&&e==0u){ /* AD 4D 08 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8CAu,3u,0x08u,0xC8CDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x084Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8CDu:
    if(m==1u&&x==1u&&e==0u){ /* CD 4B 08 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8CDu,3u,0x08u,0xC8D0u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x084Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8D0u:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8D0u,2u,0x01u,0xC8D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC8D3u;}
      if(c->pc!=0xC8D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC8D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8D2u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8D2u,1u,0x60u,0xC8D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8D3u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8D3u,2u,0x20u,0xC8D5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8D5u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8D5u,2u,0xB3u,0xC8D7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8D7u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8D7u,2u,0x7Fu,0xC8D9u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8D9u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8D9u,2u,0xB1u,0xC8DBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8DBu:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8DBu,4u,0x00u,0xC8DFu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC8DEu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8DFu:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8DFu,2u,0x20u,0xC8E1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8E1u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 49 08 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8E1u,3u,0x08u,0xC8E4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0849u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8E4u:
    if(m==1u&&x==1u&&e==0u){ /* AE 4D 08 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8E4u,3u,0x08u,0xC8E7u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x084Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8E7u:
    if(m==1u&&x==1u&&e==0u){ /* EC 4B 08 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8E7u,3u,0x08u,0xC8EAu);
      sc_v11_op_compare(r,c->x,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x084Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8EAu:
    if(m==1u&&x==1u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8EAu,2u,0x03u,0xC8ECu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC8EFu;}
      if(c->pc!=0xC8ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC8ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8ECu:
    if(m==1u&&x==1u&&e==0u){ /* 4C A2 C9 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8ECu,3u,0xC9u,0xC8EFu);
      c->pc=0xC9A2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8EFu:
    if(m==1u&&x==1u&&e==0u){ /* EE 49 08 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8EFu,3u,0x08u,0xC8F2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0849u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8F2u:
    if(m==1u&&x==1u&&e==0u){ /* BD 4F 08 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8F2u,3u,0x08u,0xC8F5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x084Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8F5u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8F5u,1u,0xE8u,0xC8F6u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8F6u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8F6u,1u,0x48u,0xC8F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8F7u:
    if(m==1u&&x==1u&&e==0u){ /* BD 4F 08 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8F7u,3u,0x08u,0xC8FAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x084Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8FAu:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8FAu,1u,0xE8u,0xC8FBu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8FBu:
    if(m==1u&&x==1u&&e==0u){ /* 8E 4D 08 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8FBu,3u,0x08u,0xC8FEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x084Du),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8FEu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8FEu,1u,0xAAu,0xC8FFu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8FFu:
    if(m==1u&&x==1u&&e==0u){ /* BF C4 80 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8FFu,4u,0x01u,0xC903u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0180C4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C903u:
    if(m==1u&&x==1u&&e==0u){ /* 85 94 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C903u,2u,0x94u,0xC905u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x94u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C905u:
    if(m==1u&&x==1u&&e==0u){ /* BF 07 81 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C905u,4u,0x01u,0xC909u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018107u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C909u:
    if(m==1u&&x==1u&&e==0u){ /* 85 95 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C909u,2u,0x95u,0xC90Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x95u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C90Bu:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C90Bu,1u,0x68u,0xC90Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C90Cu:
    if(m==1u&&x==1u&&e==0u){ /* 89 81 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C90Cu,2u,0x81u,0xC90Eu);
      {uint16_t z=(uint16_t)((c->a&0x00FFu)&0x0081u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C90Eu:
    if(m==1u&&x==1u&&e==0u){ /* 10 24 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C90Eu,2u,0x24u,0xC910u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC934u;}
      if(c->pc!=0xC910u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC910u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C910u:
    if(m==1u&&x==1u&&e==0u){ /* BF 4A 81 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C910u,4u,0x01u,0xC914u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01814Au)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C914u:
    if(m==1u&&x==1u&&e==0u){ /* 85 91 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C914u,2u,0x91u,0xC916u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C916u:
    if(m==1u&&x==1u&&e==0u){ /* BF 8D 81 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C916u,4u,0x01u,0xC91Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01818Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C91Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 92 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C91Au,2u,0x92u,0xC91Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C91Cu:
    if(m==1u&&x==1u&&e==0u){ /* BF D0 81 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C91Cu,4u,0x01u,0xC920u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0181D0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C920u:
    if(m==1u&&x==1u&&e==0u){ /* 85 93 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C920u,2u,0x93u,0xC922u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C922u:
    if(m==1u&&x==1u&&e==0u){ /* 8A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C922u,1u,0x8Au,0xC923u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C923u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C923u,1u,0x0Au,0xC924u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C924u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C924u,1u,0x0Au,0xC925u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C925u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C925u,1u,0xAAu,0xC926u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C926u:
    if(m==1u&&x==1u&&e==0u){ /* BF 23 21 7E Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C926u,4u,0x7Eu,0xC92Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2123u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C92Au:
    if(m==1u&&x==1u&&e==0u){ /* 29 F1 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C92Au,2u,0xF1u,0xC92Cu);
      sc_v11_op_and(r,0x00F1u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C92Cu:
    if(m==1u&&x==1u&&e==0u){ /* 09 04 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C92Cu,2u,0x04u,0xC92Eu);
      sc_v11_op_ora(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C92Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 23 21 7E Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C92Eu,4u,0x7Eu,0xC932u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2123u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C932u:
    if(m==1u&&x==1u&&e==0u){ /* 80 5A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C932u,2u,0x5Au,0xC934u);
      if(1){c->pc=0xC98Eu;}
      if(c->pc!=0xC934u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC934u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C934u:
    if(m==1u&&x==1u&&e==0u){ /* F0 24 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C934u,2u,0x24u,0xC936u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC95Au;}
      if(c->pc!=0xC936u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC936u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C936u:
    if(m==1u&&x==1u&&e==0u){ /* BF 13 82 01 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C936u,4u,0x01u,0xC93Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018213u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C93Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 91 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C93Au,2u,0x91u,0xC93Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C93Cu:
    if(m==1u&&x==1u&&e==0u){ /* BF 56 82 01 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C93Cu,4u,0x01u,0xC940u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018256u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C940u:
    if(m==1u&&x==1u&&e==0u){ /* 85 92 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C940u,2u,0x92u,0xC942u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C942u:
    if(m==1u&&x==1u&&e==0u){ /* BF 99 82 01 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C942u,4u,0x01u,0xC946u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018299u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C946u:
    if(m==1u&&x==1u&&e==0u){ /* 85 93 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C946u,2u,0x93u,0xC948u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C948u:
    if(m==1u&&x==1u&&e==0u){ /* 8A Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C948u,1u,0x8Au,0xC949u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C949u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C949u,1u,0x0Au,0xC94Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C94Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C94Au,1u,0x0Au,0xC94Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C94Bu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C94Bu,1u,0xAAu,0xC94Cu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C94Cu:
    if(m==1u&&x==1u&&e==0u){ /* BF 23 21 7E Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C94Cu,4u,0x7Eu,0xC950u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2123u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C950u:
    if(m==1u&&x==1u&&e==0u){ /* 29 F1 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C950u,2u,0xF1u,0xC952u);
      sc_v11_op_and(r,0x00F1u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C952u:
    if(m==1u&&x==1u&&e==0u){ /* 09 00 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C952u,2u,0x00u,0xC954u);
      sc_v11_op_ora(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C954u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 23 21 7E Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C954u,4u,0x7Eu,0xC958u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2123u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C958u:
    if(m==1u&&x==1u&&e==0u){ /* 80 34 Mesen corrected gameplay frame 2571; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C958u,2u,0x34u,0xC95Au);
      if(1){c->pc=0xC98Eu;}
      if(c->pc!=0xC95Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC95Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C95Au:
    if(m==1u&&x==1u&&e==0u){ /* BF 4A 81 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C95Au,4u,0x01u,0xC95Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01814Au)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C95Eu:
    if(m==1u&&x==1u&&e==0u){ /* 85 91 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C95Eu,2u,0x91u,0xC960u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C960u:
    if(m==1u&&x==1u&&e==0u){ /* BF 8D 81 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C960u,4u,0x01u,0xC964u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01818Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C964u:
    if(m==1u&&x==1u&&e==0u){ /* 85 92 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C964u,2u,0x92u,0xC966u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C966u:
    if(m==1u&&x==1u&&e==0u){ /* BF D0 81 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C966u,4u,0x01u,0xC96Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0181D0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 93 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Au,2u,0x93u,0xC96Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Cu,1u,0x8Au,0xC96Du);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Du,1u,0x0Au,0xC96Eu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Eu,1u,0x0Au,0xC96Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Fu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Fu,1u,0xAAu,0xC970u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C970u:
    if(m==1u&&x==1u&&e==0u){ /* E0 3C Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C970u,2u,0x3Cu,0xC972u);
      sc_v11_op_compare(r,c->x,0x003Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C972u:
    if(m==1u&&x==1u&&e==0u){ /* D0 0E Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C972u,2u,0x0Eu,0xC974u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC982u;}
      if(c->pc!=0xC974u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC974u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C982u:
    if(m==1u&&x==1u&&e==0u){ /* BF 23 21 7E Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C982u,4u,0x7Eu,0xC986u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2123u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C986u:
    if(m==1u&&x==1u&&e==0u){ /* 29 F1 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C986u,2u,0xF1u,0xC988u);
      sc_v11_op_and(r,0x00F1u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C988u:
    if(m==1u&&x==1u&&e==0u){ /* 09 00 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C988u,2u,0x00u,0xC98Au);
      sc_v11_op_ora(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C98Au:
    if(m==1u&&x==1u&&e==0u){ /* 9F 23 21 7E Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C98Au,4u,0x7Eu,0xC98Eu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2123u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C98Eu:
    if(m==1u&&x==1u&&e==0u){ /* 20 AD C9 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C98Eu,3u,0xC9u,0xC991u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC990u))return 0;c->pc=0xC9ADu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C991u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C991u,2u,0x20u,0xC993u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C993u:
    if(m==1u&&x==1u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C993u,2u,0x10u,0xC995u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C995u:
    if(m==1u&&x==1u&&e==0u){ /* AD 49 08 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C995u,3u,0x08u,0xC998u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0849u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C998u:
    if(m==1u&&x==1u&&e==0u){ /* C9 04 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C998u,2u,0x04u,0xC99Au);
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C99Au:
    if(m==1u&&x==1u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C99Au,2u,0x03u,0xC99Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC99Fu;}
      if(c->pc!=0xC99Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC99Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C99Cu:
    if(m==1u&&x==1u&&e==0u){ /* 4C DB C8 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C99Cu,3u,0xC8u,0xC99Fu);
      c->pc=0xC8DBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C99Fu:
    if(m==1u&&x==1u&&e==0u){ /* 4C E4 C8 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C99Fu,3u,0xC8u,0xC9A2u);
      c->pc=0xC8E4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9A2u:
    if(m==1u&&x==1u&&e==0u){ /* 64 B7 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9A2u,2u,0xB7u,0xC9A4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9A4u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9A4u,2u,0x20u,0xC9A6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9A6u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9A6u,2u,0xB3u,0xC9A8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9A8u:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9A8u,2u,0x80u,0xC9AAu);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9AAu:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9AAu,2u,0xB1u,0xC9ACu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9ACu:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9ACu,1u,0x60u,0xC9ADu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9ADu:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9ADu,2u,0x30u,0xC9AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9AFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9AFu,2u,0x01u,0xC9B1u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9B1u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9B1u,1u,0x0Au,0xC9B2u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9B2u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9B2u,1u,0x0Au,0xC9B3u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9B3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9B3u,1u,0x0Au,0xC9B4u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9B4u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9B4u,1u,0x0Au,0xC9B5u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9B5u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9B5u,1u,0xAAu,0xC9B6u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9B6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9B6u,2u,0x01u,0xC9B8u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9B8u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9B8u,3u,0x43u,0xC9BBu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9BBu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9BBu,2u,0x18u,0xC9BDu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9BDu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9BDu,3u,0x43u,0xC9C0u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9C0u:
    if(m==1u&&x==1u&&e==0u){ /* A5 94 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9C0u,2u,0x94u,0xC9C2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x94u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9C2u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 16 21 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9C2u,3u,0x21u,0xC9C5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9C5u:
    if(m==1u&&x==1u&&e==0u){ /* A5 95 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9C5u,2u,0x95u,0xC9C7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x95u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9C7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9C7u,3u,0x21u,0xC9CAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9CAu:
    if(m==1u&&x==1u&&e==0u){ /* A5 91 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9CAu,2u,0x91u,0xC9CCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x91u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9CCu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9CCu,3u,0x43u,0xC9CFu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9CFu:
    if(m==1u&&x==1u&&e==0u){ /* A5 92 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9CFu,2u,0x92u,0xC9D1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x92u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9D1u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9D1u,3u,0x43u,0xC9D4u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9D4u:
    if(m==1u&&x==1u&&e==0u){ /* A5 93 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9D4u,2u,0x93u,0xC9D6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x93u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9D6u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9D6u,3u,0x43u,0xC9D9u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9D9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 40 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9D9u,2u,0x40u,0xC9DBu);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9DBu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9DBu,3u,0x43u,0xC9DEu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9DEu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9DEu,2u,0x00u,0xC9E0u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9E0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9E0u,3u,0x43u,0xC9E3u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9E3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9E3u,2u,0x01u,0xC9E5u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9E5u:
    if(m==1u&&x==1u&&e==0u){ /* A2 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9E5u,2u,0x01u,0xC9E7u);
      sc_v11_op_ldx(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9E7u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9E7u,2u,0x04u,0xC9E9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC9EDu;}
      if(c->pc!=0xC9E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC9E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9E9u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9E9u,1u,0x0Au,0xC9EAu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9EAu:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9EAu,1u,0xCAu,0xC9EBu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9EBu:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9EBu,2u,0xFCu,0xC9EDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC9E9u;}
      if(c->pc!=0xC9EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC9EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9EDu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9EDu,3u,0x42u,0xC9F0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9F0u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9F0u,2u,0x20u,0xC9F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9F2u:
    if(m==0u&&x==1u&&e==0u){ /* A5 91 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9F2u,2u,0x91u,0xC9F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9F4u:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9F4u,1u,0x18u,0xC9F5u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9F5u:
    if(m==0u&&x==1u&&e==0u){ /* 69 40 00 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9F5u,3u,0x00u,0xC9F8u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9F8u:
    if(m==0u&&x==1u&&e==0u){ /* 85 91 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9F8u,2u,0x91u,0xC9FAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9FAu:
    if(m==0u&&x==1u&&e==0u){ /* A5 94 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9FAu,2u,0x94u,0xC9FCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9FCu:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9FCu,1u,0x18u,0xC9FDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9FDu:
    if(m==0u&&x==1u&&e==0u){ /* 69 00 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9FDu,3u,0x01u,0xCA00u);
      sc_v11_op_adc(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA00u:
    if(m==0u&&x==1u&&e==0u){ /* 85 94 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA00u,2u,0x94u,0xCA02u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA02u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA02u,2u,0x20u,0xCA04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA04u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA04u,2u,0x30u,0xCA06u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA06u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA06u,2u,0x01u,0xCA08u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA08u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA08u,1u,0x0Au,0xCA09u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA09u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA09u,1u,0x0Au,0xCA0Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA0Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA0Au,1u,0x0Au,0xCA0Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA0Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA0Bu,1u,0x0Au,0xCA0Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA0Cu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA0Cu,1u,0xAAu,0xCA0Du);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA0Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA0Du,2u,0x01u,0xCA0Fu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA0Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA0Fu,3u,0x43u,0xCA12u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA12u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA12u,2u,0x18u,0xCA14u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA14u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA14u,3u,0x43u,0xCA17u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA17u:
    if(m==1u&&x==1u&&e==0u){ /* A5 94 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA17u,2u,0x94u,0xCA19u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x94u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA19u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 16 21 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA19u,3u,0x21u,0xCA1Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA1Cu:
    if(m==1u&&x==1u&&e==0u){ /* A5 95 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA1Cu,2u,0x95u,0xCA1Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x95u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA1Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA1Eu,3u,0x21u,0xCA21u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA21u:
    if(m==1u&&x==1u&&e==0u){ /* A5 91 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA21u,2u,0x91u,0xCA23u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x91u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA23u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA23u,3u,0x43u,0xCA26u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA26u:
    if(m==1u&&x==1u&&e==0u){ /* A5 92 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA26u,2u,0x92u,0xCA28u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x92u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA28u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA28u,3u,0x43u,0xCA2Bu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA2Bu:
    if(m==1u&&x==1u&&e==0u){ /* A5 93 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA2Bu,2u,0x93u,0xCA2Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x93u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA2Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA2Du,3u,0x43u,0xCA30u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA30u:
    if(m==1u&&x==1u&&e==0u){ /* A9 40 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA30u,2u,0x40u,0xCA32u);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA32u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA32u,3u,0x43u,0xCA35u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA35u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA35u,2u,0x00u,0xCA37u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA37u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA37u,3u,0x43u,0xCA3Au);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA3Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA3Au,2u,0x01u,0xCA3Cu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA3Cu:
    if(m==1u&&x==1u&&e==0u){ /* A2 01 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA3Cu,2u,0x01u,0xCA3Eu);
      sc_v11_op_ldx(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA3Eu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA3Eu,2u,0x04u,0xCA40u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCA44u;}
      if(c->pc!=0xCA40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA40u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA40u,1u,0x0Au,0xCA41u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA41u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA41u,1u,0xCAu,0xCA42u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA42u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA42u,2u,0xFCu,0xCA44u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCA40u;}
      if(c->pc!=0xCA44u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA44u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA44u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA44u,3u,0x42u,0xCA47u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA47u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2568; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA47u,1u,0x60u,0xCA48u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAA6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAA6u,2u,0x30u,0xCAA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAA8u:
    if(m==1u&&x==1u&&e==0u){ /* AE 4B 08 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAA8u,3u,0x08u,0xCAABu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x084Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAABu:
    if(m==1u&&x==1u&&e==0u){ /* AC DD 01 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAABu,3u,0x01u,0xCAAEu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01DDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAAEu:
    if(m==1u&&x==1u&&e==0u){ /* B9 9B 02 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAAEu,3u,0x02u,0xCAB1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x029Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAB1u:
    if(m==1u&&x==1u&&e==0u){ /* 09 01 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAB1u,2u,0x01u,0xCAB3u);
      sc_v11_op_ora(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAB3u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 4F 08 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAB3u,3u,0x08u,0xCAB6u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x084Fu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAB6u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAB6u,1u,0xE8u,0xCAB7u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAB7u:
    if(m==1u&&x==1u&&e==0u){ /* 98 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAB7u,1u,0x98u,0xCAB8u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAB8u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 4F 08 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAB8u,3u,0x08u,0xCABBu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x084Fu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CABBu:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CABBu,1u,0xE8u,0xCABCu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CABCu:
    if(m==1u&&x==1u&&e==0u){ /* 8E 4B 08 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CABCu,3u,0x08u,0xCABFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x084Bu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CABFu:
    if(m==1u&&x==1u&&e==0u){ /* 20 C8 C8 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CABFu,3u,0xC8u,0xCAC2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAC1u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAC2u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC2u,1u,0x60u,0xCAC3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
