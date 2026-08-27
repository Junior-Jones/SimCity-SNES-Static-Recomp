/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00072(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01C803u:
    if(m==0u&&x==1u&&e==0u){ /* 09 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C803u,3u,0x20u,0xC806u);
      sc_v11_op_ora(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C803u,2u,0x00u,0xC805u);
      sc_v11_op_ora(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C803u,2u,0x00u,0xC805u);
      sc_v11_op_ora(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C805u:
    if(m==1u&&x==0u&&e==0u){ /* 20 60 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C805u,3u,0x20u,0xC808u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC807u))return 0;c->pc=0x2060u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 60 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C805u,3u,0x20u,0xC808u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC807u))return 0;c->pc=0x2060u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C806u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C806u,1u,0x60u,0xC807u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C807u:
    if(m==0u&&x==1u&&e==0u){ /* 20 A9 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C807u,3u,0xC8u,0xC80Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC809u))return 0;c->pc=0xC8A9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C808u:
    if(m==0u&&x==0u&&e==0u){ /* A9 C8 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C808u,3u,0x20u,0xC80Bu);
      sc_v11_op_lda(r,0x20C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 C8 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C808u,3u,0x20u,0xC80Bu);
      sc_v11_op_lda(r,0x20C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C808u,2u,0xC8u,0xC80Au);
      sc_v11_op_lda(r,0x00C8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C808u,2u,0xC8u,0xC80Au);
      sc_v11_op_lda(r,0x00C8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C80Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Au,3u,0xC8u,0xC80Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC80Cu))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Au,3u,0xC8u,0xC80Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC80Cu))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Au,3u,0xC8u,0xC80Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC80Cu))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C80Bu:
    if(m==0u&&x==0u&&e==0u){ /* B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Bu,2u,0xC8u,0xC80Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0xC8u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Bu,2u,0xC8u,0xC80Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0xC8u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C80Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 71 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Du,3u,0xC8u,0xC810u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC80Fu))return 0;c->pc=0xC871u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 71 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Du,3u,0xC8u,0xC810u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC80Fu))return 0;c->pc=0xC871u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 71 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C80Du,3u,0xC8u,0xC810u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC80Fu))return 0;c->pc=0xC871u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C810u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C810u,3u,0xC8u,0xC813u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC812u))return 0;c->pc=0xC89Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9B C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C810u,3u,0xC8u,0xC813u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC812u))return 0;c->pc=0xC89Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9B C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C810u,3u,0xC8u,0xC813u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC812u))return 0;c->pc=0xC89Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C813u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C813u,3u,0xC8u,0xC816u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC815u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C813u,3u,0xC8u,0xC816u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC815u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C813u,3u,0xC8u,0xC816u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC815u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C816u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C816u,1u,0x60u,0xC817u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C816u,1u,0x60u,0xC817u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C816u,1u,0x60u,0xC817u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C817u:
    if(m==0u&&x==0u&&e==0u){ /* 20 24 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C817u,3u,0xC8u,0xC81Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC819u))return 0;c->pc=0xC824u;
      SC_STATIC_CONTEXT_END();
    }

    break;
  case 0x01C81Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 71 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C81Au,3u,0xC8u,0xC81Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC81Cu))return 0;c->pc=0xC871u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 71 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C81Au,3u,0xC8u,0xC81Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC81Cu))return 0;c->pc=0xC871u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 71 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C81Au,3u,0xC8u,0xC81Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC81Cu))return 0;c->pc=0xC871u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C81Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C81Du,3u,0xC8u,0xC820u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC81Fu))return 0;c->pc=0xC89Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9B C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C81Du,3u,0xC8u,0xC820u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC81Fu))return 0;c->pc=0xC89Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9B C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C81Du,3u,0xC8u,0xC820u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC81Fu))return 0;c->pc=0xC89Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C820u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C820u,3u,0xC8u,0xC823u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC822u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C820u,3u,0xC8u,0xC823u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC822u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C820u,3u,0xC8u,0xC823u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC822u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C823u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C823u,1u,0x60u,0xC824u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C823u,1u,0x60u,0xC824u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C823u,1u,0x60u,0xC824u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C824u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C824u,2u,0x30u,0xC826u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    break;
  case 0x01C843u:
    if(m==1u&&x==1u&&e==0u){ /* B9 9B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C843u,3u,0x02u,0xC846u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x029Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C846u:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C846u,2u,0x80u,0xC848u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C848u:
    if(m==1u&&x==1u&&e==0u){ /* 99 9B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C848u,3u,0x02u,0xC84Bu);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x029Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C84Bu:
    if(m==1u&&x==1u&&e==0u){ /* 80 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C84Bu,2u,0x08u,0xC84Du);
      if(1){c->pc=0xC855u;}
      if(c->pc!=0xC84Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC84Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C870u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C870u,1u,0x60u,0xC871u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }

    break;
  case 0x01C871u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C871u,2u,0x30u,0xC873u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C871u,2u,0x30u,0xC873u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C871u,2u,0x30u,0xC873u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C875u:
    if(m==0u&&x==1u&&e==0u){ /* BD 9B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C875u,3u,0x02u,0xC878u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x029Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C878u:
    if(m==0u&&x==1u&&e==0u){ /* DD 8B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C878u,3u,0x02u,0xC87Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x028Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C87Bu:
    if(m==0u&&x==1u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C87Bu,2u,0x07u,0xC87Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC884u;}
      if(c->pc!=0xC87Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC87Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C87Du:
    if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C87Du,1u,0xDAu,0xC87Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C87Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 88 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C87Eu,3u,0xC8u,0xC881u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC880u))return 0;c->pc=0xC888u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C881u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C881u,2u,0x10u,0xC883u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C881u,2u,0x10u,0xC883u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C881u,2u,0x10u,0xC883u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C883u:
    if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C883u,1u,0xFAu,0xC884u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C884u:
    if(m==0u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C884u,1u,0xCAu,0xC885u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C885u:
    if(m==0u&&x==1u&&e==0u){ /* 10 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C885u,2u,0xEEu,0xC887u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC875u;}
      if(c->pc!=0xC887u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC887u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C887u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C887u,1u,0x60u,0xC888u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C888u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C888u,2u,0x30u,0xC88Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C89Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C89Bu,2u,0x30u,0xC89Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C89Bu,2u,0x30u,0xC89Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C89Bu,2u,0x30u,0xC89Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8A9u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8A9u,2u,0x30u,0xC8ABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8B7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B7u,2u,0x30u,0xC8B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8B7u,2u,0x30u,0xC8B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8C4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C4u,3u,0xC8u,0xC8C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC8C6u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C4u,3u,0xC8u,0xC8C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC8C6u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C4u,3u,0xC8u,0xC8C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC8C6u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C8 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C4u,3u,0xC8u,0xC8C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC8C6u))return 0;c->pc=0xC8C8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8C7u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C7u,1u,0x6Bu,0xC8C8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C7u,1u,0x6Bu,0xC8C8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C7u,1u,0x6Bu,0xC8C8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C7u,1u,0x6Bu,0xC8C8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8C8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C8u,2u,0x30u,0xC8CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C8u,2u,0x30u,0xC8CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8C8u,2u,0x30u,0xC8CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8DFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8DFu,2u,0x20u,0xC8E1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8DFu,2u,0x20u,0xC8E1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8DFu,2u,0x20u,0xC8E1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8E1u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 49 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8E1u,3u,0x08u,0xC8E4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0849u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8E4u:
    if(m==1u&&x==0u&&e==0u){ /* AE 4D 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8E4u,3u,0x08u,0xC8E7u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x084Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8E7u:
    if(m==1u&&x==0u&&e==0u){ /* EC 4B 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8E7u,3u,0x08u,0xC8EAu);
      sc_v11_op_compare(r,c->x,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x084Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8EAu:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8EAu,2u,0x03u,0xC8ECu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC8EFu;}
      if(c->pc!=0xC8ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC8ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8ECu:
    if(m==1u&&x==0u&&e==0u){ /* 4C A2 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8ECu,3u,0xC9u,0xC8EFu);
      c->pc=0xC9A2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8EFu:
    if(m==1u&&x==0u&&e==0u){ /* EE 49 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8EFu,3u,0x08u,0xC8F2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0849u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8F2u:
    if(m==1u&&x==0u&&e==0u){ /* BD 4F 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8F2u,3u,0x08u,0xC8F5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x084Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8F5u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8F5u,1u,0xE8u,0xC8F6u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8F6u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8F6u,1u,0x48u,0xC8F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8F7u:
    if(m==1u&&x==0u&&e==0u){ /* BD 4F 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8F7u,3u,0x08u,0xC8FAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x084Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8FAu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8FAu,1u,0xE8u,0xC8FBu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8FBu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 4D 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8FBu,3u,0x08u,0xC8FEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x084Du),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8FEu:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8FEu,1u,0xAAu,0xC8FFu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C8FFu:
    if(m==1u&&x==0u&&e==0u){ /* BF C4 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C8FFu,4u,0x01u,0xC903u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0180C4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C903u:
    if(m==1u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C903u,2u,0x94u,0xC905u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x94u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C905u:
    if(m==1u&&x==0u&&e==0u){ /* BF 07 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C905u,4u,0x01u,0xC909u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018107u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C909u:
    if(m==1u&&x==0u&&e==0u){ /* 85 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C909u,2u,0x95u,0xC90Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x95u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C90Bu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C90Bu,1u,0x68u,0xC90Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C90Cu:
    if(m==1u&&x==0u&&e==0u){ /* 89 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C90Cu,2u,0x81u,0xC90Eu);
      {uint16_t z=(uint16_t)((c->a&0x00FFu)&0x0081u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C90Eu:
    if(m==1u&&x==0u&&e==0u){ /* 10 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C90Eu,2u,0x24u,0xC910u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC934u;}
      if(c->pc!=0xC910u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC910u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C910u:
    if(m==1u&&x==0u&&e==0u){ /* BF 4A 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C910u,4u,0x01u,0xC914u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01814Au)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C914u:
    if(m==1u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C914u,2u,0x91u,0xC916u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C916u:
    if(m==1u&&x==0u&&e==0u){ /* BF 8D 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C916u,4u,0x01u,0xC91Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01818Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C91Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C91Au,2u,0x92u,0xC91Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C91Cu:
    if(m==1u&&x==0u&&e==0u){ /* BF D0 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C91Cu,4u,0x01u,0xC920u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0181D0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C920u:
    if(m==1u&&x==0u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C920u,2u,0x93u,0xC922u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C922u:
    if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C922u,1u,0x8Au,0xC923u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C923u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C923u,1u,0x0Au,0xC924u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C924u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C924u,1u,0x0Au,0xC925u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C925u:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C925u,1u,0xAAu,0xC926u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C926u:
    if(m==1u&&x==0u&&e==0u){ /* BF 23 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C926u,4u,0x7Eu,0xC92Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2123u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C92Au:
    if(m==1u&&x==0u&&e==0u){ /* 29 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C92Au,2u,0xF1u,0xC92Cu);
      sc_v11_op_and(r,0x00F1u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C92Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C92Cu,2u,0x04u,0xC92Eu);
      sc_v11_op_ora(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C92Eu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 23 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C92Eu,4u,0x7Eu,0xC932u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2123u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C932u:
    if(m==1u&&x==0u&&e==0u){ /* 80 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C932u,2u,0x5Au,0xC934u);
      if(1){c->pc=0xC98Eu;}
      if(c->pc!=0xC934u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC934u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C934u:
    if(m==1u&&x==0u&&e==0u){ /* F0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C934u,2u,0x24u,0xC936u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC95Au;}
      if(c->pc!=0xC936u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC936u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C936u:
    if(m==1u&&x==0u&&e==0u){ /* BF 13 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C936u,4u,0x01u,0xC93Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018213u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C93Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C93Au,2u,0x91u,0xC93Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C93Cu:
    if(m==1u&&x==0u&&e==0u){ /* BF 56 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C93Cu,4u,0x01u,0xC940u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018256u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C940u:
    if(m==1u&&x==0u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C940u,2u,0x92u,0xC942u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C942u:
    if(m==1u&&x==0u&&e==0u){ /* BF 99 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C942u,4u,0x01u,0xC946u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018299u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C946u:
    if(m==1u&&x==0u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C946u,2u,0x93u,0xC948u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C948u:
    if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C948u,1u,0x8Au,0xC949u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C949u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C949u,1u,0x0Au,0xC94Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C94Au:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C94Au,1u,0x0Au,0xC94Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C94Bu:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C94Bu,1u,0xAAu,0xC94Cu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C94Cu:
    if(m==1u&&x==0u&&e==0u){ /* BF 23 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C94Cu,4u,0x7Eu,0xC950u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2123u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C950u:
    if(m==1u&&x==0u&&e==0u){ /* 29 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C950u,2u,0xF1u,0xC952u);
      sc_v11_op_and(r,0x00F1u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C952u:
    if(m==1u&&x==0u&&e==0u){ /* 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C952u,2u,0x00u,0xC954u);
      sc_v11_op_ora(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C954u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 23 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C954u,4u,0x7Eu,0xC958u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2123u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C958u:
    if(m==1u&&x==0u&&e==0u){ /* 80 34 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C958u,2u,0x34u,0xC95Au);
      if(1){c->pc=0xC98Eu;}
      if(c->pc!=0xC95Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC95Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C95Au:
    if(m==1u&&x==0u&&e==0u){ /* BF 4A 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C95Au,4u,0x01u,0xC95Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01814Au)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C95Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C95Eu,2u,0x91u,0xC960u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C960u:
    if(m==1u&&x==0u&&e==0u){ /* BF 8D 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C960u,4u,0x01u,0xC964u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01818Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C964u:
    if(m==1u&&x==0u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C964u,2u,0x92u,0xC966u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C966u:
    if(m==1u&&x==0u&&e==0u){ /* BF D0 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C966u,4u,0x01u,0xC96Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0181D0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Au,2u,0x93u,0xC96Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Cu,1u,0x8Au,0xC96Du);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Du:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Du,1u,0x0Au,0xC96Eu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Eu:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Eu,1u,0x0Au,0xC96Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C96Fu:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C96Fu,1u,0xAAu,0xC970u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C970u:
    if(m==1u&&x==0u&&e==0u){ /* E0 3C D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C970u,3u,0xD0u,0xC973u);
      sc_v11_op_compare(r,c->x,0xD03Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C973u:
    if(m==1u&&x==0u&&e==0u){ /* 0E BF 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C973u,3u,0x23u,0xC976u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x23BFu),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C974u:
    if(m==1u&&x==1u&&e==0u){ /* BF 23 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C974u,4u,0x7Eu,0xC978u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2123u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C978u:
    if(m==1u&&x==1u&&e==0u){ /* 29 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C978u,2u,0xF1u,0xC97Au);
      sc_v11_op_and(r,0x00F1u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C97Au:
    if(m==1u&&x==1u&&e==0u){ /* 09 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C97Au,2u,0x06u,0xC97Cu);
      sc_v11_op_ora(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C97Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 23 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C97Cu,4u,0x7Eu,0xC980u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2123u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C980u:
    if(m==1u&&x==1u&&e==0u){ /* 80 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C980u,2u,0x0Cu,0xC982u);
      if(1){c->pc=0xC98Eu;}
      if(c->pc!=0xC982u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC982u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C98Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 AD C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C98Eu,3u,0xC9u,0xC991u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC990u))return 0;c->pc=0xC9ADu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C991u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C991u,2u,0x20u,0xC993u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C991u,2u,0x20u,0xC993u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C991u,2u,0x20u,0xC993u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C993u:
    if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C993u,2u,0x10u,0xC995u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9A2u:
    if(m==1u&&x==0u&&e==0u){ /* 64 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9A2u,2u,0xB7u,0xC9A4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9A4u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9A4u,2u,0x20u,0xC9A6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9A6u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9A6u,2u,0xB3u,0xC9A8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9A8u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9A8u,2u,0x80u,0xC9AAu);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9AAu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9AAu,2u,0xB1u,0xC9ACu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9ACu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9ACu,1u,0x60u,0xC9ADu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C9ADu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9ADu,2u,0x30u,0xC9AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9ADu,2u,0x30u,0xC9AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C9ADu,2u,0x30u,0xC9AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA48u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA48u,2u,0x30u,0xCA4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA4Au:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA4Au,2u,0x20u,0xCA4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA4Cu:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA4Cu,2u,0xB3u,0xCA4Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA4Eu:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA4Eu,2u,0x7Fu,0xCA50u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA50u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA50u,2u,0xB1u,0xCA52u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA52u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA52u,4u,0x00u,0xCA56u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCA55u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA56u:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA56u,3u,0x01u,0xCA59u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD DF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA56u,3u,0x01u,0xCA59u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA56u,3u,0x01u,0xCA59u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01DFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD DF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA56u,3u,0x01u,0xCA59u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01DFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA59u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA59u,1u,0x18u,0xCA5Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA59u,1u,0x18u,0xCA5Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA59u,1u,0x18u,0xCA5Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA59u,1u,0x18u,0xCA5Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA5Au:
    if(m==0u&&x==0u&&e==0u){ /* 69 10 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Au,3u,0xAAu,0xCA5Du);
      sc_v11_op_adc(r,0xAA10u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 10 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Au,3u,0xAAu,0xCA5Du);
      sc_v11_op_adc(r,0xAA10u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Au,2u,0x10u,0xCA5Cu);
      sc_v11_op_adc(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Au,2u,0x10u,0xCA5Cu);
      sc_v11_op_adc(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA5Cu:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Cu,1u,0xAAu,0xCA5Du);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Cu,1u,0xAAu,0xCA5Du);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA5Du:
    if(m==0u&&x==0u&&e==0u){ /* BF C4 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Du,4u,0x01u,0xCA61u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C4u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF C4 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Du,4u,0x01u,0xCA61u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C4u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF C4 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Du,4u,0x01u,0xCA61u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0180C4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF C4 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA5Du,4u,0x01u,0xCA61u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0180C4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA61u:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA61u,2u,0x94u,0xCA63u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA61u,2u,0x94u,0xCA63u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA61u,2u,0x94u,0xCA63u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x94u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA61u,2u,0x94u,0xCA63u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x94u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA63u:
    if(m==0u&&x==0u&&e==0u){ /* BF 07 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA63u,4u,0x01u,0xCA67u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018107u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 07 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA63u,4u,0x01u,0xCA67u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018107u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 07 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA63u,4u,0x01u,0xCA67u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018107u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 07 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA63u,4u,0x01u,0xCA67u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018107u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA67u:
    if(m==0u&&x==0u&&e==0u){ /* 85 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA67u,2u,0x95u,0xCA69u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x95u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA67u,2u,0x95u,0xCA69u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x95u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA67u,2u,0x95u,0xCA69u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x95u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA67u,2u,0x95u,0xCA69u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x95u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA69u:
    if(m==0u&&x==0u&&e==0u){ /* AD E3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA69u,3u,0x01u,0xCA6Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD E3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA69u,3u,0x01u,0xCA6Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD E3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA69u,3u,0x01u,0xCA6Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01E3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD E3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA69u,3u,0x01u,0xCA6Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01E3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA6Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA6Cu,2u,0x14u,0xCA6Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCA82u;}
      if(c->pc!=0xCA6Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA6Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA6Cu,2u,0x14u,0xCA6Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCA82u;}
      if(c->pc!=0xCA6Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA6Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA6Cu,2u,0x14u,0xCA6Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCA82u;}
      if(c->pc!=0xCA6Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA6Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA6Cu,2u,0x14u,0xCA6Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCA82u;}
      if(c->pc!=0xCA6Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA6Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA6Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF 13 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA6Eu,4u,0x01u,0xCA72u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018213u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 13 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA6Eu,4u,0x01u,0xCA72u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018213u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 13 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA6Eu,4u,0x01u,0xCA72u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018213u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 13 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA6Eu,4u,0x01u,0xCA72u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018213u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA72u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA72u,2u,0x91u,0xCA74u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA72u,2u,0x91u,0xCA74u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA72u,2u,0x91u,0xCA74u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA72u,2u,0x91u,0xCA74u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA74u:
    if(m==0u&&x==0u&&e==0u){ /* BF 56 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA74u,4u,0x01u,0xCA78u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018256u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 56 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA74u,4u,0x01u,0xCA78u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018256u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 56 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA74u,4u,0x01u,0xCA78u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018256u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 56 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA74u,4u,0x01u,0xCA78u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018256u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA78u:
    if(m==0u&&x==0u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA78u,2u,0x92u,0xCA7Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x92u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA78u,2u,0x92u,0xCA7Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x92u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA78u,2u,0x92u,0xCA7Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA78u,2u,0x92u,0xCA7Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA7Au:
    if(m==0u&&x==0u&&e==0u){ /* BF 99 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA7Au,4u,0x01u,0xCA7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018299u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 99 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA7Au,4u,0x01u,0xCA7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018299u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 99 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA7Au,4u,0x01u,0xCA7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018299u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 99 82 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA7Au,4u,0x01u,0xCA7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018299u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA7Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA7Eu,2u,0x93u,0xCA80u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x93u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA7Eu,2u,0x93u,0xCA80u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x93u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA7Eu,2u,0x93u,0xCA80u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA7Eu,2u,0x93u,0xCA80u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA80u:
    if(m==0u&&x==0u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA80u,2u,0x12u,0xCA82u);
      if(1){c->pc=0xCA94u;}
      if(c->pc!=0xCA82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA80u,2u,0x12u,0xCA82u);
      if(1){c->pc=0xCA94u;}
      if(c->pc!=0xCA82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA80u,2u,0x12u,0xCA82u);
      if(1){c->pc=0xCA94u;}
      if(c->pc!=0xCA82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA80u,2u,0x12u,0xCA82u);
      if(1){c->pc=0xCA94u;}
      if(c->pc!=0xCA82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCA82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA82u:
    if(m==0u&&x==0u&&e==0u){ /* BF 4A 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA82u,4u,0x01u,0xCA86u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01814Au)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 4A 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA82u,4u,0x01u,0xCA86u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01814Au)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 4A 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA82u,4u,0x01u,0xCA86u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01814Au)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 4A 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA82u,4u,0x01u,0xCA86u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01814Au)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA86u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA86u,2u,0x91u,0xCA88u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA86u,2u,0x91u,0xCA88u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA86u,2u,0x91u,0xCA88u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA86u,2u,0x91u,0xCA88u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA88u:
    if(m==0u&&x==0u&&e==0u){ /* BF 8D 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA88u,4u,0x01u,0xCA8Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01818Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 8D 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA88u,4u,0x01u,0xCA8Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01818Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 8D 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA88u,4u,0x01u,0xCA8Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01818Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 8D 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA88u,4u,0x01u,0xCA8Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01818Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA8Cu,2u,0x92u,0xCA8Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x92u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA8Cu,2u,0x92u,0xCA8Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x92u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA8Cu,2u,0x92u,0xCA8Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA8Cu,2u,0x92u,0xCA8Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA8Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF D0 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA8Eu,4u,0x01u,0xCA92u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0181D0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF D0 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA8Eu,4u,0x01u,0xCA92u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0181D0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF D0 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA8Eu,4u,0x01u,0xCA92u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0181D0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF D0 81 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA8Eu,4u,0x01u,0xCA92u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x0181D0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA92u:
    if(m==0u&&x==0u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA92u,2u,0x93u,0xCA94u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x93u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA92u,2u,0x93u,0xCA94u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x93u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA92u,2u,0x93u,0xCA94u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA92u,2u,0x93u,0xCA94u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x93u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA94u:
    if(m==0u&&x==0u&&e==0u){ /* 20 AD C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA94u,3u,0xC9u,0xCA97u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCA96u))return 0;c->pc=0xC9ADu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 AD C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA94u,3u,0xC9u,0xCA97u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCA96u))return 0;c->pc=0xC9ADu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 AD C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA94u,3u,0xC9u,0xCA97u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCA96u))return 0;c->pc=0xC9ADu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 AD C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA94u,3u,0xC9u,0xCA97u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCA96u))return 0;c->pc=0xC9ADu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA97u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA97u,2u,0x20u,0xCA99u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA97u,2u,0x20u,0xCA99u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA97u,2u,0x20u,0xCA99u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA97u,2u,0x20u,0xCA99u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA99u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA99u,2u,0x10u,0xCA9Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA99u,2u,0x10u,0xCA9Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA9Bu:
    if(m==1u&&x==0u&&e==0u){ /* 64 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA9Bu,2u,0xB7u,0xCA9Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA9Du:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA9Du,2u,0x20u,0xCA9Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CA9Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CA9Fu,2u,0xB3u,0xCAA1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAA1u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAA1u,2u,0x80u,0xCAA3u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAA3u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAA3u,2u,0xB1u,0xCAA5u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAA5u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAA5u,1u,0x60u,0xCAA6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAA6u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAA6u,2u,0x30u,0xCAA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAA6u,2u,0x30u,0xCAA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAA6u,2u,0x30u,0xCAA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAC2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC2u,1u,0x60u,0xCAC3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC2u,1u,0x60u,0xCAC3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC2u,1u,0x60u,0xCAC3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAC3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC3u,2u,0x20u,0xCAC5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC3u,2u,0x20u,0xCAC5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAC5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC5u,3u,0x03u,0xCAC8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0385u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC5u,3u,0x03u,0xCAC8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0385u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAC8u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC8u,2u,0x03u,0xCACAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCACDu;}
      if(c->pc!=0xCACAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCACAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAC8u,2u,0x03u,0xCACAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCACDu;}
      if(c->pc!=0xCACAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCACAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CACAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A7 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CACAu,3u,0x94u,0xCACDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCACCu))return 0;c->pc=0x94A7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A7 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CACAu,3u,0x94u,0xCACDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCACCu))return 0;c->pc=0x94A7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CACDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CACDu,2u,0x20u,0xCACFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CACDu,2u,0x20u,0xCACFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CACDu,2u,0x20u,0xCACFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CACDu,2u,0x20u,0xCACFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CACFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CACFu,3u,0x00u,0xCAD2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CACFu,3u,0x00u,0xCAD2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAD2u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAD2u,2u,0x00u,0xCAD4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCAD4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAD2u,2u,0x00u,0xCAD4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCAD4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAD4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAD4u,2u,0x20u,0xCAD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAD4u,2u,0x20u,0xCAD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAD6u:
    if(m==0u&&x==0u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAD6u,3u,0x03u,0xCAD9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAD6u,3u,0x03u,0xCAD9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAD9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAD9u,3u,0x00u,0xCADCu);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAD9u,3u,0x00u,0xCADCu);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CADCu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CADCu,2u,0x03u,0xCADEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCAE1u;}
      if(c->pc!=0xCADEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCADEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CADCu,2u,0x03u,0xCADEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCAE1u;}
      if(c->pc!=0xCADEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCADEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CADEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CADEu,3u,0x03u,0xCAE1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CADEu,3u,0x03u,0xCAE1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAE1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAE1u,3u,0x00u,0xCAE4u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAE1u,3u,0x00u,0xCAE4u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAE4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAE4u,2u,0xE3u,0xCAE6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAE4u,2u,0xE3u,0xCAE6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAE6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAE6u,3u,0x01u,0xCAE9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAE6u,3u,0x01u,0xCAE9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAE9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F2 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAE9u,3u,0xCCu,0xCAECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAEBu))return 0;c->pc=0xCCF2u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F2 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAE9u,3u,0xCCu,0xCAECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAEBu))return 0;c->pc=0xCCF2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAECu:
    if(m==0u&&x==0u&&e==0u){ /* 20 C8 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAECu,3u,0xCBu,0xCAEFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAEEu))return 0;c->pc=0xCBC8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C8 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAECu,3u,0xCBu,0xCAEFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAEEu))return 0;c->pc=0xCBC8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C8 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAECu,3u,0xCBu,0xCAEFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAEEu))return 0;c->pc=0xCBC8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C8 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAECu,3u,0xCBu,0xCAEFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAEEu))return 0;c->pc=0xCBC8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAEFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 8A CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAEFu,3u,0xCFu,0xCAF2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF1u))return 0;c->pc=0xCF8Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 8A CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAEFu,3u,0xCFu,0xCAF2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF1u))return 0;c->pc=0xCF8Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 8A CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAEFu,3u,0xCFu,0xCAF2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF1u))return 0;c->pc=0xCF8Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 8A CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAEFu,3u,0xCFu,0xCAF2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF1u))return 0;c->pc=0xCF8Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAF2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF2u,3u,0xCCu,0xCAF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF4u))return 0;c->pc=0xCC1Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF2u,3u,0xCCu,0xCAF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF4u))return 0;c->pc=0xCC1Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF2u,3u,0xCCu,0xCAF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF4u))return 0;c->pc=0xCC1Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF2u,3u,0xCCu,0xCAF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF4u))return 0;c->pc=0xCC1Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAF5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 36 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF5u,3u,0xD0u,0xCAF8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF7u))return 0;c->pc=0xD036u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 36 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF5u,3u,0xD0u,0xCAF8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF7u))return 0;c->pc=0xD036u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 36 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF5u,3u,0xD0u,0xCAF8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF7u))return 0;c->pc=0xD036u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 36 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF5u,3u,0xD0u,0xCAF8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAF7u))return 0;c->pc=0xD036u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAF8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0B CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF8u,3u,0xCCu,0xCAFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAFAu))return 0;c->pc=0xCC0Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0B CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF8u,3u,0xCCu,0xCAFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAFAu))return 0;c->pc=0xCC0Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 0B CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF8u,3u,0xCCu,0xCAFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAFAu))return 0;c->pc=0xCC0Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 0B CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAF8u,3u,0xCCu,0xCAFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCAFAu))return 0;c->pc=0xCC0Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAFBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAFBu,2u,0x20u,0xCAFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAFBu,2u,0x20u,0xCAFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAFBu,2u,0x20u,0xCAFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAFBu,2u,0x20u,0xCAFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAFDu:
    if(m==0u&&x==0u&&e==0u){ /* 64 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAFDu,2u,0xE3u,0xCAFFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAFDu,2u,0xE3u,0xCAFFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CAFFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAFFu,1u,0x60u,0xCB00u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CAFFu,1u,0x60u,0xCB00u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBC8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBC8u,2u,0x30u,0xCBCAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBC8u,2u,0x30u,0xCBCAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBC8u,2u,0x30u,0xCBCAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBC8u,2u,0x30u,0xCBCAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBCAu:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBCAu,1u,0x4Bu,0xCBCBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBCBu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBCBu,1u,0xABu,0xCBCCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBCCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBCCu,3u,0x04u,0xCBCFu);
      sc_v11_op_lda(r,0x040Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBCFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBCFu,2u,0x79u,0xCBD1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBD1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBD1u,3u,0x00u,0xCBD4u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBD4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBD4u,2u,0x7Cu,0xCBD6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBD6u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBD6u,3u,0x00u,0xCBD9u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBD9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBD9u,3u,0x00u,0xCBDCu);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBDCu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBDCu,2u,0x7Fu,0xCBDEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBDEu:
    if(m==0u&&x==0u&&e==0u){ /* A6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBDEu,2u,0x79u,0xCBE0u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBE0u:
    if(m==0u&&x==0u&&e==0u){ /* B9 00 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBE0u,3u,0xCBu,0xCBE3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCB00u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBE3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 38 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBE3u,4u,0x7Eu,0xCBE7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBE7u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBE7u,1u,0xE8u,0xCBE8u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBE8u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBE8u,1u,0xE8u,0xCBE9u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBE9u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBE9u,1u,0xC8u,0xCBEAu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBEAu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBEAu,1u,0xC8u,0xCBEBu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBEBu:
    if(m==0u&&x==0u&&e==0u){ /* C6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBEBu,2u,0x7Fu,0xCBEDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBEDu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBEDu,2u,0xF1u,0xCBEFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCBE0u;}
      if(c->pc!=0xCBEFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCBEFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBEFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBEFu,2u,0x79u,0xCBF1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBF1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBF1u,1u,0x18u,0xCBF2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBF2u:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBF2u,3u,0x00u,0xCBF5u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBF5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBF5u,2u,0x79u,0xCBF7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBF7u:
    if(m==0u&&x==0u&&e==0u){ /* C6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBF7u,2u,0x7Cu,0xCBF9u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Cu),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBF9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBF9u,2u,0xDEu,0xCBFBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCBD9u;}
      if(c->pc!=0xCBFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCBFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBFBu:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBFBu,3u,0x00u,0xCBFEu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBFEu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBFEu,1u,0xABu,0xCBFFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CBFFu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CBFFu,1u,0xABu,0xCC00u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
