/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0002E(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00B800u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B800u,1u,0x4Au,0xB801u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B801u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B801u,1u,0x4Au,0xB802u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B802u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B802u,1u,0x4Au,0xB803u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B803u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B803u,3u,0x0Au,0xB806u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B806u:
    if(m==0u&&x==1u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B806u,3u,0x00u,0xB809u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B809u:
    if(m==0u&&x==1u&&e==0u){ /* B0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B809u,2u,0x0Cu,0xB80Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB817u;}
      if(c->pc!=0xB80Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB80Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B80Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD 13 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B80Bu,3u,0x0Bu,0xB80Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B80Eu:
    if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B80Eu,3u,0x00u,0xB811u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B811u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 81 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B811u,3u,0x0Au,0xB814u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A81u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B814u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 17 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B814u,3u,0xBAu,0xB817u);
      c->pc=0xBA17u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 17 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B814u,3u,0xBAu,0xB817u);
      c->pc=0xBA17u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 17 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B814u,3u,0xBAu,0xB817u);
      c->pc=0xBA17u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 17 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B814u,3u,0xBAu,0xB817u);
      c->pc=0xBA17u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B817u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B817u,2u,0x20u,0xB819u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B819u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B819u,3u,0x0Au,0xB81Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A95u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B81Cu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B81Cu,1u,0x60u,0xB81Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B81Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B81Du,2u,0x30u,0xB81Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B81Du,2u,0x30u,0xB81Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B81Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B81Fu,3u,0x0Au,0xB822u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B822u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B822u,1u,0x0Au,0xB823u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B823u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B823u,1u,0x0Au,0xB824u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B824u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B824u,1u,0x0Au,0xB825u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B825u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 11 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B825u,3u,0x0Bu,0xB828u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B11u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B828u:
    if(m==0u&&x==0u&&e==0u){ /* AD 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B828u,3u,0x0Au,0xB82Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A65u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B82Bu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B82Bu,1u,0x0Au,0xB82Cu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B82Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B82Cu,1u,0x0Au,0xB82Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B82Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B82Du,1u,0x0Au,0xB82Eu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B82Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 13 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B82Eu,3u,0x0Bu,0xB831u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B13u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B831u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 81 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B831u,3u,0x0Au,0xB834u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A81u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B834u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 7F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B834u,3u,0x0Au,0xB837u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A7Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B837u:
    if(m==0u&&x==0u&&e==0u){ /* 20 6D B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B837u,3u,0xB8u,0xB83Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB839u))return 0;c->pc=0xB86Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B83Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B83Au,2u,0x30u,0xB83Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B83Au,2u,0x30u,0xB83Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B83Au,2u,0x30u,0xB83Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B83Au,2u,0x30u,0xB83Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B83Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B83Cu,3u,0x0Au,0xB83Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B83Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B83Fu,2u,0x09u,0xB841u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB84Au;}
      if(c->pc!=0xB841u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB841u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B841u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B841u,3u,0x00u,0xB844u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B844u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B844u,3u,0x0Au,0xB847u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A95u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B847u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 17 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B847u,3u,0xBAu,0xB84Au);
      c->pc=0xBA17u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B84Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B84Au,1u,0x60u,0xB84Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B84Bu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B84Bu,2u,0x20u,0xB84Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B84Bu,2u,0x20u,0xB84Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B84Du:
    if(m==1u&&x==0u&&e==0u){ /* AD 05 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B84Du,3u,0x0Bu,0xB850u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B05u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 05 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B84Du,3u,0x0Bu,0xB850u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B05u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B850u:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B850u,1u,0x1Au,0xB851u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B850u,1u,0x1Au,0xB851u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B851u:
    if(m==1u&&x==0u&&e==0u){ /* 29 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B851u,2u,0x01u,0xB853u);
      sc_v11_op_and(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B851u,2u,0x01u,0xB853u);
      sc_v11_op_and(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B853u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 05 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B853u,3u,0x0Bu,0xB856u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B05u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 05 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B853u,3u,0x0Bu,0xB856u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B05u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B856u:
    if(m==1u&&x==0u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B856u,2u,0x14u,0xB858u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB86Cu;}
      if(c->pc!=0xB858u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB858u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B856u,2u,0x14u,0xB858u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB86Cu;}
      if(c->pc!=0xB858u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB858u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B858u:
    if(m==1u&&x==0u&&e==0u){ /* AD 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B858u,3u,0x0Bu,0xB85Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B0Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B858u,3u,0x0Bu,0xB85Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B0Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B85Bu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B85Bu,1u,0x18u,0xB85Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B85Bu,1u,0x18u,0xB85Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B85Cu:
    if(m==1u&&x==0u&&e==0u){ /* 6D 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B85Cu,3u,0x0Bu,0xB85Fu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6D 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B85Cu,3u,0x0Bu,0xB85Fu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B85Fu:
    if(m==1u&&x==0u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B85Fu,2u,0x07u,0xB861u);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B85Fu,2u,0x07u,0xB861u);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B861u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B861u,3u,0x0Bu,0xB864u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B0Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B861u,3u,0x0Bu,0xB864u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B0Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B864u:
    if(m==1u&&x==0u&&e==0u){ /* CD 09 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B864u,3u,0x0Bu,0xB867u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B09u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD 09 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B864u,3u,0x0Bu,0xB867u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B09u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B867u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B867u,2u,0x03u,0xB869u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB86Cu;}
      if(c->pc!=0xB869u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB869u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B867u,2u,0x03u,0xB869u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB86Cu;}
      if(c->pc!=0xB869u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB869u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B869u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B869u,3u,0x0Bu,0xB86Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B07u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B869u,3u,0x0Bu,0xB86Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B07u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B86Cu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B86Cu,1u,0x60u,0xB86Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B86Cu,1u,0x60u,0xB86Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B86Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 EE B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B86Du,3u,0xB9u,0xB870u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB86Fu))return 0;c->pc=0xB9EEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EE B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B86Du,3u,0xB9u,0xB870u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB86Fu))return 0;c->pc=0xB9EEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EE B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B86Du,3u,0xB9u,0xB870u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB86Fu))return 0;c->pc=0xB9EEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EE B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B86Du,3u,0xB9u,0xB870u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB86Fu))return 0;c->pc=0xB9EEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B870u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B870u,2u,0x30u,0xB872u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B870u,2u,0x30u,0xB872u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B870u,2u,0x30u,0xB872u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B870u,2u,0x30u,0xB872u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B872u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B872u,3u,0x0Bu,0xB875u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B875u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B875u,1u,0x18u,0xB876u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B876u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B876u,3u,0x00u,0xB879u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B879u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B879u,3u,0x00u,0xB87Cu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B87Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B87Cu,2u,0x94u,0xB87Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B87Eu:
    if(m==0u&&x==0u&&e==0u){ /* 64 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B87Eu,2u,0x9Du,0xB880u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B880u:
    if(m==0u&&x==0u&&e==0u){ /* 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B880u,2u,0xA0u,0xB882u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xA0u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B882u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B882u,3u,0x82u,0xB885u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB884u))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B885u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B885u,2u,0x30u,0xB887u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B885u,2u,0x30u,0xB887u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B885u,2u,0x30u,0xB887u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B885u,2u,0x30u,0xB887u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B887u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B887u,3u,0x00u,0xB88Au);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B88Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B88Au,2u,0x97u,0xB88Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x97u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B88Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B88Cu,2u,0x9Au,0xB88Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B88Eu:
    if(m==0u&&x==0u&&e==0u){ /* C5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B88Eu,2u,0x94u,0xB890u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B890u:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B890u,2u,0x11u,0xB892u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8A3u;}
      if(c->pc!=0xB892u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB892u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B892u:
    if(m==0u&&x==0u&&e==0u){ /* CD 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B892u,3u,0x0Bu,0xB895u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B895u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B895u,2u,0x07u,0xB897u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB89Eu;}
      if(c->pc!=0xB897u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB897u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B897u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A4 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B897u,3u,0xB9u,0xB89Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB899u))return 0;c->pc=0xB9A4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B89Au:
    if(m==0u&&x==0u&&e==0u){ /* B0 4F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Au,2u,0x4Fu,0xB89Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB89Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB89Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 4F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Au,2u,0x4Fu,0xB89Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB89Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB89Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 4F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Au,2u,0x4Fu,0xB89Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB89Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB89Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 4F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Au,2u,0x4Fu,0xB89Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB89Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB89Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B89Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Cu,2u,0x05u,0xB89Eu);
      if(1){c->pc=0xB8A3u;}
      if(c->pc!=0xB89Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB89Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Cu,2u,0x05u,0xB89Eu);
      if(1){c->pc=0xB8A3u;}
      if(c->pc!=0xB89Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB89Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Cu,2u,0x05u,0xB89Eu);
      if(1){c->pc=0xB8A3u;}
      if(c->pc!=0xB89Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB89Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Cu,2u,0x05u,0xB89Eu);
      if(1){c->pc=0xB8A3u;}
      if(c->pc!=0xB89Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB89Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B89Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B89Eu,3u,0xB8u,0xB8A1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8A0u))return 0;c->pc=0xB8ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8A1u:
    if(m==0u&&x==0u&&e==0u){ /* B0 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A1u,2u,0x48u,0xB8A3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB8A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A1u,2u,0x48u,0xB8A3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB8A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A1u,2u,0x48u,0xB8A3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB8A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A1u,2u,0x48u,0xB8A3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB8A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8A3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A3u,2u,0x30u,0xB8A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A3u,2u,0x30u,0xB8A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A3u,2u,0x30u,0xB8A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A3u,2u,0x30u,0xB8A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8A5u:
    if(m==0u&&x==0u&&e==0u){ /* A5 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A5u,2u,0x9Au,0xB8A7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8A7u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A7u,1u,0x1Au,0xB8A8u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8A8u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8A8u,3u,0x00u,0xB8ABu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8ABu:
    if(m==0u&&x==0u&&e==0u){ /* C5 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8ABu,2u,0x97u,0xB8ADu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x97u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8ADu:
    if(m==0u&&x==0u&&e==0u){ /* D0 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8ADu,2u,0xDDu,0xB8AFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB88Cu;}
      if(c->pc!=0xB8AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8AFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8AFu,2u,0xA0u,0xB8B1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xA0u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8B1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8B1u,2u,0x38u,0xB8B3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB8B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8B3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8B3u,2u,0x9Du,0xB8B5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8B5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8B5u,2u,0x0Cu,0xB8B7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8C3u;}
      if(c->pc!=0xB8B7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8B7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8B7u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8B7u,1u,0x3Au,0xB8B8u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8B8u:
    if(m==0u&&x==0u&&e==0u){ /* CD 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8B8u,3u,0x0Bu,0xB8BBu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8BBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8BBu,2u,0x2Eu,0xB8BDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB8BDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8BDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8BDu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 05 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8BDu,3u,0x0Bu,0xB8C0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B05u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8C0u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2C B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8C0u,3u,0xB9u,0xB8C3u);
      c->pc=0xB92Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8C3u:
    if(m==0u&&x==0u&&e==0u){ /* 64 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8C3u,2u,0x9Du,0xB8C5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8C5u:
    if(m==0u&&x==0u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8C5u,2u,0x94u,0xB8C7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8C7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8C7u,2u,0x9Au,0xB8C9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8C9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8C9u,3u,0xB8u,0xB8CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8CBu))return 0;c->pc=0xB8ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8CCu:
    if(m==0u&&x==0u&&e==0u){ /* B0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8CCu,2u,0x06u,0xB8CEu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8D4u;}
      if(c->pc!=0xB8CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8CCu,2u,0x06u,0xB8CEu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8D4u;}
      if(c->pc!=0xB8CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8CCu,2u,0x06u,0xB8CEu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8D4u;}
      if(c->pc!=0xB8CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8CCu,2u,0x06u,0xB8CEu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB8D4u;}
      if(c->pc!=0xB8CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8CEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8CEu,2u,0x20u,0xB8D0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8CEu,2u,0x20u,0xB8D0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8CEu,2u,0x20u,0xB8D0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8CEu,2u,0x20u,0xB8D0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8D0u:
    if(m==0u&&x==0u&&e==0u){ /* A5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D0u,2u,0x9Du,0xB8D2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D0u,2u,0x9Du,0xB8D2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8D2u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D2u,2u,0x0Au,0xB8D4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8DEu;}
      if(c->pc!=0xB8D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D2u,2u,0x0Au,0xB8D4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8DEu;}
      if(c->pc!=0xB8D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8D4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D4u,2u,0x20u,0xB8D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D4u,2u,0x20u,0xB8D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D4u,2u,0x20u,0xB8D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D4u,2u,0x20u,0xB8D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8D6u:
    if(m==0u&&x==0u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D6u,2u,0x94u,0xB8D8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D6u,2u,0x94u,0xB8D8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8D8u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 05 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D8u,3u,0x0Bu,0xB8DBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B05u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 05 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8D8u,3u,0x0Bu,0xB8DBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B05u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8DBu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2C B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8DBu,3u,0xB9u,0xB8DEu);
      c->pc=0xB92Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 2C B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8DBu,3u,0xB9u,0xB8DEu);
      c->pc=0xB92Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8DEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8DEu,2u,0x20u,0xB8E0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8DEu,2u,0x20u,0xB8E0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8E0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8E0u,3u,0x0Au,0xB8E3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8E0u,3u,0x0Au,0xB8E3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8E3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8E3u,3u,0x0Au,0xB8E6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A95u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8E3u,3u,0x0Au,0xB8E6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A95u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8E6u:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8E6u,2u,0x03u,0xB8E8u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB8E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8E6u,2u,0x03u,0xB8E8u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB8EBu;}
      if(c->pc!=0xB8E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8E8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8E8u,3u,0xBAu,0xB8EBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8EAu))return 0;c->pc=0xBA54u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 54 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8E8u,3u,0xBAu,0xB8EBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8EAu))return 0;c->pc=0xBA54u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8EBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8EBu,1u,0x60u,0xB8ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8EBu,1u,0x60u,0xB8ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8EBu,1u,0x60u,0xB8ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8EBu,1u,0x60u,0xB8ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8ECu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8ECu,2u,0x30u,0xB8EEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8EEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8EEu,1u,0x0Au,0xB8EFu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8EFu:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8EFu,1u,0xA8u,0xB8F0u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8F0u:
    if(m==0u&&x==0u&&e==0u){ /* B9 43 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8F0u,3u,0xB9u,0xB8F3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xB943u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8F3u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8F3u,1u,0x18u,0xB8F4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8F4u:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8F4u,2u,0x91u,0xB8F6u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8F6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 C0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8F6u,3u,0x5Du,0xB8F9u);
      sc_v11_op_compare(r,c->a,0x5DC0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8F9u:
    if(m==0u&&x==0u&&e==0u){ /* B0 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8F9u,2u,0x2Au,0xB8FBu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB925u;}
      if(c->pc!=0xB8FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8FBu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8FBu,1u,0xAAu,0xB8FCu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B8FCu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B8FCu,4u,0x7Fu,0xB900u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B900u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B900u,3u,0x03u,0xB903u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B903u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B903u,3u,0x00u,0xB906u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B906u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B906u,2u,0x1Fu,0xB908u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB927u;}
      if(c->pc!=0xB908u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB908u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B908u:
    if(m==0u&&x==0u&&e==0u){ /* C9 54 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B908u,3u,0x03u,0xB90Bu);
      sc_v11_op_compare(r,c->a,0x0354u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B90Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B90Bu,2u,0x1Au,0xB90Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB927u;}
      if(c->pc!=0xB90Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB90Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B90Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 55 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B90Du,3u,0x03u,0xB910u);
      sc_v11_op_compare(r,c->a,0x0355u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B910u:
    if(m==0u&&x==0u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B910u,2u,0x15u,0xB912u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB927u;}
      if(c->pc!=0xB912u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB912u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B912u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B912u,3u,0x00u,0xB915u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B915u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B915u,2u,0x0Eu,0xB917u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB925u;}
      if(c->pc!=0xB917u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB917u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B917u:
    if(m==0u&&x==0u&&e==0u){ /* A5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B917u,2u,0x9Du,0xB919u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B919u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B919u,2u,0x0Au,0xB91Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB925u;}
      if(c->pc!=0xB91Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB91Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B91Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 63 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B91Bu,3u,0xB9u,0xB91Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB91Du))return 0;c->pc=0xB963u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B91Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B91Eu,2u,0x05u,0xB920u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB925u;}
      if(c->pc!=0xB920u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB920u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B91Eu,2u,0x05u,0xB920u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB925u;}
      if(c->pc!=0xB920u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB920u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B91Eu,2u,0x05u,0xB920u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB925u;}
      if(c->pc!=0xB920u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB920u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B91Eu,2u,0x05u,0xB920u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB925u;}
      if(c->pc!=0xB920u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB920u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B920u:
    if(m==0u&&x==0u&&e==0u){ /* A5 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B920u,2u,0x9Au,0xB922u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B920u,2u,0x9Au,0xB922u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B920u,2u,0x9Au,0xB922u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x9Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B920u,2u,0x9Au,0xB922u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x9Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B922u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B922u,1u,0x1Au,0xB923u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B922u,1u,0x1Au,0xB923u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B922u,1u,0x1Au,0xB923u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B922u,1u,0x1Au,0xB923u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B923u:
    if(m==0u&&x==0u&&e==0u){ /* 85 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B923u,2u,0x9Du,0xB925u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B923u,2u,0x9Du,0xB925u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B923u,2u,0x9Du,0xB925u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x9Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B923u,2u,0x9Du,0xB925u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x9Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B925u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B925u,1u,0x18u,0xB926u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B925u,1u,0x18u,0xB926u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B925u,1u,0x18u,0xB926u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B925u,1u,0x18u,0xB926u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B926u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B926u,1u,0x60u,0xB927u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B926u,1u,0x60u,0xB927u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B926u,1u,0x60u,0xB927u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B926u,1u,0x60u,0xB927u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B927u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 05 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B927u,3u,0x0Bu,0xB92Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B05u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B92Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B92Au,2u,0x9Au,0xB92Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B92Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B92Cu,3u,0x00u,0xB92Fu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B92Cu,3u,0x00u,0xB92Fu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B92Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 09 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B92Fu,3u,0x0Bu,0xB932u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B09u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 09 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B92Fu,3u,0x0Bu,0xB932u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B09u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B932u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B932u,2u,0x20u,0xB934u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B932u,2u,0x20u,0xB934u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B934u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B934u,1u,0x38u,0xB935u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B934u,1u,0x38u,0xB935u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B935u:
    if(m==1u&&x==0u&&e==0u){ /* ED 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B935u,3u,0x0Bu,0xB938u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B0Bu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* ED 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B935u,3u,0x0Bu,0xB938u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B0Bu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B938u:
    if(m==1u&&x==0u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B938u,2u,0x07u,0xB93Au);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B938u,2u,0x07u,0xB93Au);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B93Au:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B93Au,1u,0xAAu,0xB93Bu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B93Au,1u,0xAAu,0xB93Bu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B93Bu:
    if(m==1u&&x==0u&&e==0u){ /* BD B9 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B93Bu,3u,0xB0u,0xB93Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB0B9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD B9 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B93Bu,3u,0xB0u,0xB93Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB0B9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B93Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B93Eu,3u,0x0Bu,0xB941u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B07u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B93Eu,3u,0x0Bu,0xB941u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B07u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B941u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B941u,1u,0x38u,0xB942u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B941u,1u,0x38u,0xB942u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B942u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B942u,1u,0x60u,0xB943u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B942u,1u,0x60u,0xB943u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B963u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B963u,2u,0x30u,0xB965u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B965u:
    if(m==0u&&x==0u&&e==0u){ /* B9 53 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B965u,3u,0xB9u,0xB968u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xB953u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B968u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B968u,1u,0x18u,0xB969u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B969u:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B969u,2u,0x91u,0xB96Bu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B96Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 C0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B96Bu,3u,0x5Du,0xB96Eu);
      sc_v11_op_compare(r,c->a,0x5DC0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B96Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B96Eu,2u,0x30u,0xB970u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB9A0u;}
      if(c->pc!=0xB970u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB970u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B970u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B970u,1u,0xAAu,0xB971u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B971u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B971u,4u,0x7Fu,0xB975u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B975u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B975u,3u,0x03u,0xB978u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B978u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B978u,3u,0x00u,0xB97Bu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B97Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B97Bu,2u,0x25u,0xB97Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9A2u;}
      if(c->pc!=0xB97Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB97Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B97Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 54 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B97Du,3u,0x03u,0xB980u);
      sc_v11_op_compare(r,c->a,0x0354u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B980u:
    if(m==0u&&x==0u&&e==0u){ /* F0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B980u,2u,0x20u,0xB982u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9A2u;}
      if(c->pc!=0xB982u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB982u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B982u:
    if(m==0u&&x==0u&&e==0u){ /* C9 55 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B982u,3u,0x03u,0xB985u);
      sc_v11_op_compare(r,c->a,0x0355u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B985u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B985u,2u,0x1Bu,0xB987u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9A2u;}
      if(c->pc!=0xB987u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB987u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B987u:
    if(m==0u&&x==0u&&e==0u){ /* C9 60 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B987u,3u,0x00u,0xB98Au);
      sc_v11_op_compare(r,c->a,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B98Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B98Au,2u,0x16u,0xB98Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9A2u;}
      if(c->pc!=0xB98Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB98Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B98Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 61 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B98Cu,3u,0x00u,0xB98Fu);
      sc_v11_op_compare(r,c->a,0x0061u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B98Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B98Fu,2u,0x11u,0xB991u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9A2u;}
      if(c->pc!=0xB991u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB991u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B991u:
    if(m==0u&&x==0u&&e==0u){ /* C9 70 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B991u,3u,0x00u,0xB994u);
      sc_v11_op_compare(r,c->a,0x0070u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B994u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B994u,2u,0x0Cu,0xB996u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9A2u;}
      if(c->pc!=0xB996u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB996u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B996u:
    if(m==0u&&x==0u&&e==0u){ /* C9 71 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B996u,3u,0x00u,0xB999u);
      sc_v11_op_compare(r,c->a,0x0071u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B999u:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B999u,2u,0x07u,0xB99Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9A2u;}
      if(c->pc!=0xB99Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB99Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B99Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B99Bu,3u,0x00u,0xB99Eu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B99Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B99Eu,2u,0x02u,0xB9A0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9A2u;}
      if(c->pc!=0xB9A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9A0u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9A0u,1u,0x18u,0xB9A1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9A1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9A1u,1u,0x60u,0xB9A2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9A2u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9A2u,1u,0x38u,0xB9A3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9A3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9A3u,1u,0x60u,0xB9A4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9A4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9A4u,2u,0x30u,0xB9A6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9A6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9A6u,1u,0x0Au,0xB9A7u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9A7u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9A7u,1u,0xA8u,0xB9A8u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9A8u:
    if(m==0u&&x==0u&&e==0u){ /* B9 43 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9A8u,3u,0xB9u,0xB9ABu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xB943u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9ABu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9ABu,1u,0x18u,0xB9ACu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9ACu:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9ACu,2u,0x91u,0xB9AEu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9AEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 C0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9AEu,3u,0x5Du,0xB9B1u);
      sc_v11_op_compare(r,c->a,0x5DC0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9B1u:
    if(m==0u&&x==0u&&e==0u){ /* B0 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9B1u,2u,0x37u,0xB9B3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB9EAu;}
      if(c->pc!=0xB9B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9B3u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9B3u,1u,0xAAu,0xB9B4u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9B4u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9B4u,4u,0x7Fu,0xB9B8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9B8u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9B8u,3u,0x03u,0xB9BBu);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9BBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9BBu,3u,0x00u,0xB9BEu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9BEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9BEu,2u,0x2Cu,0xB9C0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9ECu;}
      if(c->pc!=0xB9C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9C0u:
    if(m==0u&&x==0u&&e==0u){ /* C9 54 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9C0u,3u,0x03u,0xB9C3u);
      sc_v11_op_compare(r,c->a,0x0354u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9C3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9C3u,2u,0x27u,0xB9C5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9ECu;}
      if(c->pc!=0xB9C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9C5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 55 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9C5u,3u,0x03u,0xB9C8u);
      sc_v11_op_compare(r,c->a,0x0355u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9C8u:
    if(m==0u&&x==0u&&e==0u){ /* F0 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9C8u,2u,0x22u,0xB9CAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9ECu;}
      if(c->pc!=0xB9CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9CAu:
    if(m==0u&&x==0u&&e==0u){ /* C9 60 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9CAu,3u,0x00u,0xB9CDu);
      sc_v11_op_compare(r,c->a,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9CDu:
    if(m==0u&&x==0u&&e==0u){ /* F0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9CDu,2u,0x1Du,0xB9CFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9ECu;}
      if(c->pc!=0xB9CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9CFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 61 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9CFu,3u,0x00u,0xB9D2u);
      sc_v11_op_compare(r,c->a,0x0061u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9D2u:
    if(m==0u&&x==0u&&e==0u){ /* F0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9D2u,2u,0x18u,0xB9D4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9ECu;}
      if(c->pc!=0xB9D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9D4u:
    if(m==0u&&x==0u&&e==0u){ /* C9 70 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9D4u,3u,0x00u,0xB9D7u);
      sc_v11_op_compare(r,c->a,0x0070u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9D7u:
    if(m==0u&&x==0u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9D7u,2u,0x13u,0xB9D9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9ECu;}
      if(c->pc!=0xB9D9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9D9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9D9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 71 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9D9u,3u,0x00u,0xB9DCu);
      sc_v11_op_compare(r,c->a,0x0071u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9DCu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9DCu,2u,0x0Eu,0xB9DEu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9ECu;}
      if(c->pc!=0xB9DEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9DEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9DEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9DEu,3u,0x00u,0xB9E1u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9E1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E1u,2u,0x07u,0xB9E3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB9EAu;}
      if(c->pc!=0xB9E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9E3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 63 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E3u,3u,0xB9u,0xB9E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB9E5u))return 0;c->pc=0xB963u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9E6u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E6u,2u,0x02u,0xB9E8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB9EAu;}
      if(c->pc!=0xB9E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E6u,2u,0x02u,0xB9E8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB9EAu;}
      if(c->pc!=0xB9E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E6u,2u,0x02u,0xB9E8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB9EAu;}
      if(c->pc!=0xB9E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E6u,2u,0x02u,0xB9E8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB9EAu;}
      if(c->pc!=0xB9E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9E8u:
    if(m==0u&&x==0u&&e==0u){ /* E6 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E8u,2u,0xA0u,0xB9EAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xA0u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E8u,2u,0xA0u,0xB9EAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xA0u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E8u,2u,0xA0u,0xB9EAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xA0u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9E8u,2u,0xA0u,0xB9EAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xA0u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9EAu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EAu,1u,0x18u,0xB9EBu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EAu,1u,0x18u,0xB9EBu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EAu,1u,0x18u,0xB9EBu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EAu,1u,0x18u,0xB9EBu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9EBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EBu,1u,0x60u,0xB9ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EBu,1u,0x60u,0xB9ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EBu,1u,0x60u,0xB9ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EBu,1u,0x60u,0xB9ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9ECu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9ECu,1u,0x38u,0xB9EDu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9EDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EDu,1u,0x60u,0xB9EEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9EEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EEu,2u,0x20u,0xB9F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EEu,2u,0x20u,0xB9F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EEu,2u,0x20u,0xB9F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9EEu,2u,0x20u,0xB9F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9F0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9F0u,2u,0x10u,0xB9F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9F0u,2u,0x10u,0xB9F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9F2u:
    if(m==1u&&x==0u&&e==0u){ /* AD 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9F2u,3u,0x0Au,0xB9F5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A63u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9F5u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9F5u,3u,0x42u,0xB9F8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9F8u:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9F8u,2u,0x78u,0xB9FAu);
      sc_v11_op_lda(r,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9FAu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 03 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9FAu,3u,0x42u,0xB9FDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9FDu:
    if(m==1u&&x==0u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9FDu,1u,0xEAu,0xB9FEu);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9FEu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9FEu,1u,0x48u,0xB9FFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B9FFu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B9FFu,1u,0x68u,0xBA00u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA00u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA00u,2u,0x20u,0xBA02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA02u:
    if(m==0u&&x==0u&&e==0u){ /* A9 88 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA02u,3u,0x00u,0xBA05u);
      sc_v11_op_lda(r,0x0088u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA05u:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA05u,2u,0x94u,0xBA07u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA07u:
    if(m==0u&&x==0u&&e==0u){ /* AD 16 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA07u,3u,0x42u,0xBA0Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x4216u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA0Au:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA0Au,1u,0x0Au,0xBA0Bu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA0Bu,2u,0x91u,0xBA0Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA0Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA0Du,3u,0x0Au,0xBA10u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A65u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA10u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA10u,1u,0x0Au,0xBA11u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA11u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA11u,1u,0x18u,0xBA12u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA12u:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA12u,2u,0x91u,0xBA14u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA14u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA14u,2u,0x91u,0xBA16u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA16u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA16u,1u,0x60u,0xBA17u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA17u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA17u,2u,0x30u,0xBA19u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA17u,2u,0x30u,0xBA19u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA17u,2u,0x30u,0xBA19u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA17u,2u,0x30u,0xBA19u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA19u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA19u,3u,0x0Bu,0xBA1Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA1Cu:
    if(m==0u&&x==0u&&e==0u){ /* A6 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA1Cu,2u,0xD7u,0xBA1Eu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA1Eu:
    if(m==0u&&x==0u&&e==0u){ /* E0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA1Eu,3u,0x00u,0xBA21u);
      sc_v11_op_compare(r,c->x,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA21u:
    if(m==0u&&x==0u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA21u,2u,0x04u,0xBA23u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBA27u;}
      if(c->pc!=0xBA23u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBA23u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA23u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA23u,1u,0x18u,0xBA24u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA24u:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA24u,3u,0x00u,0xBA27u);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA27u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA27u,1u,0x0Au,0xBA28u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA28u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA28u,1u,0xAAu,0xBA29u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA29u:
    if(m==0u&&x==0u&&e==0u){ /* BD 9A BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA29u,3u,0xBAu,0xBA2Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBA9Au)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA2Cu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA2Cu,1u,0xAAu,0xBA2Du);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA2Du:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA2Du,1u,0x8Bu,0xBA2Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA2Eu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA2Eu,3u,0x70u,0xBA31u);
      sc_v11_op_ldy(r,0x7000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA31u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA31u,3u,0x00u,0xBA34u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA34u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA34u,3u,0x06u,0xBA37u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x06u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xBA34u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA37u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA37u,3u,0x72u,0xBA3Au);
      sc_v11_op_ldy(r,0x7200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA3Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA3Au,3u,0x00u,0xBA3Du);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA3Du:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA3Du,3u,0x06u,0xBA40u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x06u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xBA3Du;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA40u:
    if(m==0u&&x==0u&&e==0u){ /* A0 80 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA40u,3u,0x70u,0xBA43u);
      sc_v11_op_ldy(r,0x7080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA43u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA43u,3u,0x00u,0xBA46u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA46u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA46u,3u,0x06u,0xBA49u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x06u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xBA46u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA49u:
    if(m==0u&&x==0u&&e==0u){ /* A0 80 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA49u,3u,0x72u,0xBA4Cu);
      sc_v11_op_ldy(r,0x7280u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA4Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA4Cu,3u,0x00u,0xBA4Fu);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA4Fu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA4Fu,3u,0x06u,0xBA52u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x06u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xBA4Fu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA52u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA52u,1u,0xABu,0xBA53u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA53u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA53u,1u,0x60u,0xBA54u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA54u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA54u,2u,0x30u,0xBA56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA54u,2u,0x30u,0xBA56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA56u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA56u,3u,0x0Au,0xBA59u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A95u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA59u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA59u,2u,0x20u,0xBA5Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA5Bu:
    if(m==1u&&x==0u&&e==0u){ /* AD 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA5Bu,3u,0x0Au,0xBA5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A63u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA5Eu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA5Eu,1u,0xEBu,0xBA5Fu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA5Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA5Fu,3u,0x0Au,0xBA62u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A65u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA62u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA62u,3u,0x00u,0xBA65u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA65u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA65u,4u,0x03u,0xBA69u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xBA68u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA69u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA69u,2u,0x10u,0xBA6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA69u,2u,0x10u,0xBA6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA69u,2u,0x10u,0xBA6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA69u,2u,0x10u,0xBA6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA6Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA6Bu,3u,0x00u,0xBA6Eu);
      sc_v11_op_ldx(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA6Bu,3u,0x00u,0xBA6Eu);
      sc_v11_op_ldx(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA6Eu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA6Eu,3u,0x00u,0xBA71u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA6Eu,3u,0x00u,0xBA71u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA71u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2E AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA71u,3u,0xAEu,0xBA74u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA73u))return 0;c->pc=0xAE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 2E AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA71u,3u,0xAEu,0xBA74u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA73u))return 0;c->pc=0xAE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA74u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA74u,2u,0x20u,0xBA76u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA74u,2u,0x20u,0xBA76u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA74u,2u,0x20u,0xBA76u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA74u,2u,0x20u,0xBA76u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA76u:
    if(m==1u&&x==0u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA76u,2u,0x10u,0xBA78u);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA76u,2u,0x10u,0xBA78u);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA78u:
    if(m==1u&&x==0u&&e==0u){ /* 22 26 C4 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA78u,4u,0x03u,0xBA7Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xBA7Bu))return 0;
      c->pbr=0x03u;c->pc=0xC426u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 26 C4 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA78u,4u,0x03u,0xBA7Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xBA7Bu))return 0;
      c->pbr=0x03u;c->pc=0xC426u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA7Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA7Cu,2u,0x20u,0xBA7Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA7Cu,2u,0x20u,0xBA7Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA7Cu,2u,0x20u,0xBA7Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA7Cu,2u,0x20u,0xBA7Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA7Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA7Eu,2u,0xFFu,0xBA80u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA7Eu,2u,0xFFu,0xBA80u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA80u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA80u,3u,0x03u,0xBA83u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0395u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA80u,3u,0x03u,0xBA83u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0395u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA83u:
    if(m==1u&&x==0u&&e==0u){ /* A9 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA83u,2u,0x2Bu,0xBA85u);
      sc_v11_op_lda(r,0x002Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA83u,2u,0x2Bu,0xBA85u);
      sc_v11_op_lda(r,0x002Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA85u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA85u,3u,0x03u,0xBA88u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0397u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA85u,3u,0x03u,0xBA88u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0397u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA88u:
    if(m==1u&&x==0u&&e==0u){ /* AD 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA88u,3u,0x0Au,0xBA8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A65u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA88u,3u,0x0Au,0xBA8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A65u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA8Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA8Bu,3u,0x04u,0xBA8Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA8Bu,3u,0x04u,0xBA8Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA8Eu:
    if(m==1u&&x==0u&&e==0u){ /* AD 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA8Eu,3u,0x0Au,0xBA91u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A63u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA8Eu,3u,0x0Au,0xBA91u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A63u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA91u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA91u,3u,0x04u,0xBA94u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA91u,3u,0x04u,0xBA94u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA94u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA94u,2u,0xFFu,0xBA96u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA94u,2u,0xFFu,0xBA96u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA96u:
    if(m==1u&&x==0u&&e==0u){ /* 8D FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA96u,3u,0x03u,0xBA99u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FEu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA96u,3u,0x03u,0xBA99u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FEu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BA99u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA99u,1u,0x60u,0xBA9Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BA99u,1u,0x60u,0xBA9Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAE8u:
    if(m==0u&&x==0u&&e==0u){ /* AD B5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAE8u,3u,0x0Au,0xBAEBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAEBu:
    if(m==0u&&x==0u&&e==0u){ /* 0D 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAEBu,3u,0x0Cu,0xBAEEu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAEEu:
    if(m==0u&&x==0u&&e==0u){ /* 05 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAEEu,2u,0xE3u,0xBAF0u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAF0u:
    if(m==0u&&x==0u&&e==0u){ /* 0D F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAF0u,3u,0x01u,0xBAF3u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAF3u:
    if(m==0u&&x==0u&&e==0u){ /* D0 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAF3u,2u,0x2Bu,0xBAF5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB20u;}
      if(c->pc!=0xBAF5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAF5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAF5u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAF5u,3u,0x0Au,0xBAF8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAF8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAF8u,2u,0x27u,0xBAFAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB21u;}
      if(c->pc!=0xBAFAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAFAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAFAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAFAu,2u,0xD7u,0xBAFCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAFCu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAFCu,1u,0x3Au,0xBAFDu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAFDu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAFDu,2u,0x0Au,0xBAFFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBB09u;}
      if(c->pc!=0xBAFFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAFFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BAFFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BAFFu,3u,0x01u,0xBB02u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB02u:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB02u,3u,0x40u,0xBB05u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB05u:
    if(m==0u&&x==0u&&e==0u){ /* D0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB05u,2u,0x19u,0xBB07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB20u;}
      if(c->pc!=0xBB07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB07u:
    if(m==0u&&x==0u&&e==0u){ /* 80 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB07u,2u,0x08u,0xBB09u);
      if(1){c->pc=0xBB11u;}
      if(c->pc!=0xBB09u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB09u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB09u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB09u,3u,0x01u,0xBB0Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB0Cu,3u,0x0Fu,0xBB0Fu);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB0Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB0Fu,2u,0x0Fu,0xBB11u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB20u;}
      if(c->pc!=0xBB11u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB11u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB11u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB11u,2u,0xE1u,0xBB13u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB13u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB13u,3u,0x00u,0xBB16u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB16u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB16u,3u,0x00u,0xBB19u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB19u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB19u,2u,0x05u,0xBB1Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBB20u;}
      if(c->pc!=0xBB1Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB1Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB1Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB1Bu,2u,0x12u,0xBB1Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB2Fu;}
      if(c->pc!=0xBB1Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB1Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB1Du:
    if(m==0u&&x==0u&&e==0u){ /* 4C 71 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB1Du,3u,0xBBu,0xBB20u);
      c->pc=0xBB71u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB21u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB21u,2u,0xE1u,0xBB23u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB23u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB23u,3u,0x00u,0xBB26u);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB26u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB26u,2u,0xF8u,0xBB28u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB20u;}
      if(c->pc!=0xBB28u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB28u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB28u:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB28u,3u,0x0Bu,0xBB2Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB2Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB2Bu,2u,0x44u,0xBB2Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB71u;}
      if(c->pc!=0xBB2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB2Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB2Du,2u,0xF1u,0xBB2Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBB20u;}
      if(c->pc!=0xBB2Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB2Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB2Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB2Fu,2u,0x20u,0xBB31u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB31u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB31u,2u,0x10u,0xBB33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB33u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB33u,3u,0x62u,0xBB36u);
      sc_v11_op_ldx(r,0x6200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB36u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB36u,3u,0x21u,0xBB39u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB39u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB39u,2u,0x01u,0xBB3Bu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB3Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 40 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB3Bu,3u,0x43u,0xBB3Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4340u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB3Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB3Eu,3u,0x74u,0xBB41u);
      sc_v11_op_ldx(r,0x7400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB41u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 42 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB41u,3u,0x43u,0xBB44u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4342u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB44u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB44u,2u,0x7Eu,0xBB46u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB46u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 44 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB46u,3u,0x43u,0xBB49u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4344u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB49u:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB49u,2u,0x18u,0xBB4Bu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB4Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 41 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB4Bu,3u,0x43u,0xBB4Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4341u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB4Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB4Eu,3u,0x04u,0xBB51u);
      sc_v11_op_ldx(r,0x0400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB51u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 45 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB51u,3u,0x43u,0xBB54u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4345u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB54u:
    if(m==1u&&x==0u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB54u,2u,0x10u,0xBB56u);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB56u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB56u,3u,0x42u,0xBB59u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB59u:
    if(m==1u&&x==0u&&e==0u){ /* A2 E0 65 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB59u,3u,0x65u,0xBB5Cu);
      sc_v11_op_ldx(r,0x65E0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB5Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB5Cu,3u,0x21u,0xBB5Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB5Fu:
    if(m==1u&&x==0u&&e==0u){ /* A2 C0 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB5Fu,3u,0x7Bu,0xBB62u);
      sc_v11_op_ldx(r,0x7BC0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB62u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 42 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB62u,3u,0x43u,0xBB65u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4342u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB65u:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB65u,3u,0x00u,0xBB68u);
      sc_v11_op_ldx(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB68u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 45 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB68u,3u,0x43u,0xBB6Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4345u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB6Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB6Bu,2u,0x10u,0xBB6Du);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB6Du:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB6Du,3u,0x42u,0xBB70u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB70u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB70u,1u,0x60u,0xBB71u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB71u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB71u,2u,0x20u,0xBB73u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB73u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB73u,2u,0x10u,0xBB75u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB75u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB75u,3u,0x60u,0xBB78u);
      sc_v11_op_ldx(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB78u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB78u,3u,0x21u,0xBB7Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB7Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB7Bu,2u,0x01u,0xBB7Du);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB7Du:
    if(m==1u&&x==0u&&e==0u){ /* 8D 40 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB7Du,3u,0x43u,0xBB80u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4340u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB80u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB80u,3u,0x70u,0xBB83u);
      sc_v11_op_ldx(r,0x7000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB83u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 42 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB83u,3u,0x43u,0xBB86u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4342u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB86u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB86u,2u,0x7Eu,0xBB88u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB88u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 44 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB88u,3u,0x43u,0xBB8Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4344u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB8Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB8Bu,2u,0x18u,0xBB8Du);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB8Du:
    if(m==1u&&x==0u&&e==0u){ /* 8D 41 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB8Du,3u,0x43u,0xBB90u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4341u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB90u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB90u,3u,0x04u,0xBB93u);
      sc_v11_op_ldx(r,0x0400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB93u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 45 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB93u,3u,0x43u,0xBB96u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4345u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB96u:
    if(m==1u&&x==0u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB96u,2u,0x10u,0xBB98u);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB98u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB98u,3u,0x42u,0xBB9Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB9Bu:
    if(m==1u&&x==0u&&e==0u){ /* A2 E0 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB9Bu,3u,0x64u,0xBB9Eu);
      sc_v11_op_ldx(r,0x64E0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BB9Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BB9Eu,3u,0x21u,0xBBA1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BBA1u:
    if(m==1u&&x==0u&&e==0u){ /* A2 C0 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BBA1u,3u,0x79u,0xBBA4u);
      sc_v11_op_ldx(r,0x79C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BBA4u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 42 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BBA4u,3u,0x43u,0xBBA7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4342u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BBA7u:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BBA7u,3u,0x00u,0xBBAAu);
      sc_v11_op_ldx(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BBAAu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 45 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BBAAu,3u,0x43u,0xBBADu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4345u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BBADu:
    if(m==1u&&x==0u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BBADu,2u,0x10u,0xBBAFu);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BBAFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BBAFu,3u,0x42u,0xBBB2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BBB2u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BBB2u,1u,0x60u,0xBBB3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
