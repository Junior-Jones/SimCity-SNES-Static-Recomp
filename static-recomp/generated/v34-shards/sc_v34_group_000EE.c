/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000EE(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03B807u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B807u,2u,0x04u,0xB809u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B809u:
    if(m==0u&&x==0u&&e==0u){ /* C9 E8 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B809u,3u,0x03u,0xB80Cu);
      sc_v11_op_compare(r,c->a,0x03E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B80Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B80Cu,2u,0x03u,0xB80Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB811u;}
      if(c->pc!=0xB80Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB80Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B811u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B811u,1u,0x18u,0xB812u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B812u:
    if(m==0u&&x==0u&&e==0u){ /* 6D ED 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B812u,3u,0x0Du,0xB815u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B815u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B815u,1u,0x4Au,0xB816u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B816u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B816u,3u,0x0Du,0xB819u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B819u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B819u,3u,0x0Du,0xB81Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B81Cu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B81Cu,1u,0x38u,0xB81Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B81Du:
    if(m==0u&&x==0u&&e==0u){ /* ED F1 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B81Du,3u,0x0Du,0xB820u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DF1u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B820u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B820u,3u,0x0Du,0xB823u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B823u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B823u,1u,0x60u,0xB824u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B824u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B824u,2u,0x30u,0xB826u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B826u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B826u,2u,0x00u,0xB828u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B828u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B828u,3u,0x00u,0xB82Bu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B82Bu:
    if(m==0u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B82Bu,1u,0xBBu,0xB82Cu);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B82Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 E8 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B82Cu,3u,0x03u,0xB82Fu);
      sc_v11_op_lda(r,0x03E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B82Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B82Fu,3u,0x90u,0xB832u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB831u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B832u:
    if(m==0u&&x==0u&&e==0u){ /* CD ED 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B832u,3u,0x0Du,0xB835u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B835u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B835u,2u,0x03u,0xB837u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB83Au;}
      if(c->pc!=0xB837u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB837u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B837u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B837u,1u,0xC8u,0xB838u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B838u:
    if(m==0u&&x==0u&&e==0u){ /* 80 02 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B838u,2u,0x02u,0xB83Au);
      if(1){c->pc=0xB83Cu;}
      if(c->pc!=0xB83Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB83Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B83Au:
    if(m==0u&&x==0u&&e==0u){ /* E6 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B83Au,2u,0x00u,0xB83Cu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B83Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B83Cu,1u,0xE8u,0xB83Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B83Du:
    if(m==0u&&x==0u&&e==0u){ /* E0 64 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B83Du,3u,0x00u,0xB840u);
      sc_v11_op_compare(r,c->x,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B840u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EA Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B840u,2u,0xEAu,0xB842u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB82Cu;}
      if(c->pc!=0xB842u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB842u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B842u:
    if(m==0u&&x==0u&&e==0u){ /* 8C DF 0D Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B842u,3u,0x0Du,0xB845u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DDFu),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B845u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B845u,2u,0x00u,0xB847u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B847u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E1 0D Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B847u,3u,0x0Du,0xB84Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B84Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B84Au,1u,0x60u,0xB84Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B84Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B84Bu,2u,0x20u,0xB84Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3430; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B84Bu,2u,0x20u,0xB84Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B84Du:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B84Du,1u,0x0Bu,0xB84Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B84Eu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B84Eu,1u,0x48u,0xB84Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B84Fu:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B84Fu,1u,0x7Bu,0xB850u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B850u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B850u,1u,0x38u,0xB851u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B851u:
    if(m==0u&&x==0u&&e==0u){ /* E9 10 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B851u,3u,0x00u,0xB854u);
      sc_v11_op_sbc(r,0x0010u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B854u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B854u,1u,0x5Bu,0xB855u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B855u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B855u,1u,0x68u,0xB856u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B856u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B856u,2u,0x30u,0xB858u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B858u:
    if(m==0u&&x==0u&&e==0u){ /* AD 25 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B858u,3u,0x04u,0xB85Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0425u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B85Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B85Bu,3u,0x00u,0xB85Eu);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B85Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B85Eu,2u,0x03u,0xB860u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB863u;}
      if(c->pc!=0xB860u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB860u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B863u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B863u,3u,0x00u,0xB866u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B866u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B866u,3u,0x00u,0xB869u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B869u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B869u,2u,0x03u,0xB86Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB86Eu;}
      if(c->pc!=0xB86Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB86Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B86Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 99 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B86Eu,3u,0x01u,0xB871u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0199u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B871u:
    if(m==0u&&x==0u&&e==0u){ /* F0 2E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B871u,2u,0x2Eu,0xB873u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8A1u;}
      if(c->pc!=0xB873u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB873u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B8A1u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B8A1u,3u,0x00u,0xB8A4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x00D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B8A4u:
    if(m==0u&&x==0u&&e==0u){ /* 0D B5 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B8A4u,3u,0x0Au,0xB8A7u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B8A7u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B8A7u,2u,0x05u,0xB8A9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB8AEu;}
      if(c->pc!=0xB8A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B8A9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B8A9u,3u,0x03u,0xB8ACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0395u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B8ACu:
    if(m==0u&&x==0u&&e==0u){ /* D0 66 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B8ACu,2u,0x66u,0xB8AEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB914u;}
      if(c->pc!=0xB8AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B8AEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B8AEu,3u,0x01u,0xB8B1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B8B1u:
    if(m==0u&&x==0u&&e==0u){ /* F0 63 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B8B1u,2u,0x63u,0xB8B3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB916u;}
      if(c->pc!=0xB8B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B916u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B916u,3u,0x00u,0xB919u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B919u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B919u,3u,0x00u,0xB91Cu);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B91Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 49 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B91Cu,2u,0x49u,0xB91Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB967u;}
      if(c->pc!=0xB91Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB91Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B91Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B91Eu,3u,0x0Bu,0xB921u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B921u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B921u,1u,0x0Au,0xB922u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B922u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B922u,1u,0xA8u,0xB923u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B923u:
    if(m==0u&&x==0u&&e==0u){ /* B9 69 B9 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B923u,3u,0xB9u,0xB926u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xB969u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B926u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B926u,3u,0x90u,0xB929u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB928u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B929u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B929u,3u,0x00u,0xB92Cu);
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B92Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 39 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B92Cu,2u,0x39u,0xB92Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB967u;}
      if(c->pc!=0xB92Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB92Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B967u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B967u,1u,0x2Bu,0xB968u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B968u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03B968u,1u,0x60u,0xB969u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
