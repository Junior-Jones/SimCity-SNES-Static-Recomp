/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00065(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x019471u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019471u,2u,0x30u,0x9473u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019473u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 81 03 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019473u,3u,0x03u,0x9476u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0381u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019476u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019476u,3u,0x00u,0x9479u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019479u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 83 03 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019479u,3u,0x03u,0x947Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0383u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01947Cu:
    if(m==0u&&x==0u&&e==0u){ /* AE 87 03 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01947Cu,3u,0x03u,0x947Fu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0387u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01947Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01947Fu,2u,0x03u,0x9481u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9484u;}
      if(c->pc!=0x9481u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9481u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019484u:
    if(m==0u&&x==0u&&e==0u){ /* A9 40 01 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019484u,3u,0x01u,0x9487u);
      sc_v11_op_lda(r,0x0140u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019487u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 8B 03 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019487u,3u,0x03u,0x948Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x038Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01948Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01948Au,1u,0x60u,0x948Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01948Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01948Bu,2u,0x20u,0x948Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01948Bu,2u,0x20u,0x948Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01948Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01948Du,2u,0xD7u,0x948Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01948Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01948Fu,2u,0x0Eu,0x9491u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x949Fu;}
      if(c->pc!=0x9491u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9491u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019491u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019491u,3u,0x03u,0x9494u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0389u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019494u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019494u,2u,0x01u,0x9496u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9497u;}
      if(c->pc!=0x9496u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9496u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019496u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019496u,1u,0x60u,0x9497u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019497u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 89 03 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019497u,3u,0x03u,0x949Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0389u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01949Au:
    if(m==0u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01949Au,1u,0x3Au,0x949Bu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01949Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 71 94 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01949Bu,3u,0x94u,0x949Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x949Du))return 0;c->pc=0x9471u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01949Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01949Eu,1u,0x60u,0x949Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194A7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194A7u,2u,0x30u,0x94A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194A9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194A9u,3u,0x03u,0x94ACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0385u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194ACu:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194ACu,2u,0x01u,0x94AEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x94AFu;}
      if(c->pc!=0x94AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194AEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194AEu,1u,0x60u,0x94AFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194AFu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 85 03 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194AFu,3u,0x03u,0x94B2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0385u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194B2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194B2u,2u,0xD7u,0x94B4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194B4u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194B4u,2u,0x01u,0x94B6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x94B7u;}
      if(c->pc!=0x94B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194B7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 CE 05 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194B7u,3u,0x05u,0x94BAu);
      sc_v11_op_lda(r,0x05CEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194BAu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194BAu,2u,0x79u,0x94BCu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194BCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194BCu,3u,0x00u,0x94BFu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194BFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194BFu,2u,0x7Cu,0x94C1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194C1u:
    if(m==0u&&x==0u&&e==0u){ /* A0 19 00 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194C1u,3u,0x00u,0x94C4u);
      sc_v11_op_ldy(r,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194C4u:
    if(m==0u&&x==0u&&e==0u){ /* A6 79 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194C4u,2u,0x79u,0x94C6u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194C6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 4B 01 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194C6u,3u,0x01u,0x94C9u);
      sc_v11_op_lda(r,0x014Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194C9u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 38 7E Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194C9u,4u,0x7Eu,0x94CDu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194CDu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194CDu,1u,0xE8u,0x94CEu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194CEu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194CEu,1u,0xE8u,0x94CFu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194CFu:
    if(m==0u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194CFu,1u,0x88u,0x94D0u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194D0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F7 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194D0u,2u,0xF7u,0x94D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x94C9u;}
      if(c->pc!=0x94D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194D2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194D2u,2u,0x79u,0x94D4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194D4u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194D4u,1u,0x18u,0x94D5u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194D5u:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194D5u,3u,0x00u,0x94D8u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194D8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194D8u,2u,0x79u,0x94DAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194DAu:
    if(m==0u&&x==0u&&e==0u){ /* C6 7C Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194DAu,2u,0x7Cu,0x94DCu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Cu),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194DCu:
    if(m==0u&&x==0u&&e==0u){ /* D0 E3 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194DCu,2u,0xE3u,0x94DEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x94C1u;}
      if(c->pc!=0x94DEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94DEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194DEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194DEu,3u,0xA8u,0x94E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94E0u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194E1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4580; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194E1u,1u,0x60u,0x94E2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194E6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 90 97 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194E6u,3u,0x97u,0x94E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94E8u))return 0;c->pc=0x9790u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194E9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B 9C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194E9u,3u,0x9Cu,0x94ECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94EBu))return 0;c->pc=0x9C9Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194ECu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194ECu,2u,0x20u,0x94EEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194EEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 83 03 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194EEu,3u,0x03u,0x94F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0383u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194F1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194F1u,3u,0x00u,0x94F4u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194F4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 87 03 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194F4u,3u,0x03u,0x94F7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0387u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194F7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194F7u,3u,0xA8u,0x94FAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94F9u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0194FAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0194FAu,1u,0x60u,0x94FBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019790u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019790u,2u,0x30u,0x9792u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019792u:
    if(m==0u&&x==0u&&e==0u){ /* AD 81 03 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019792u,3u,0x03u,0x9795u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0381u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019795u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019795u,1u,0xAAu,0x9796u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x019796u:
    if(m==0u&&x==0u&&e==0u){ /* BF FB 94 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x019796u,4u,0x01u,0x979Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0194FBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01979Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01979Au,3u,0x00u,0x979Du);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01979Du:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01979Du,1u,0xAAu,0x979Eu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01979Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF 8C 97 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01979Eu,4u,0x01u,0x97A2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01978Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197A2u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197A2u,3u,0x00u,0x97A5u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197A5u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197A5u,1u,0x0Au,0x97A6u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197A6u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197A6u,2u,0x7Fu,0x97A8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197A8u:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197A8u,1u,0x8Au,0x97A9u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197A9u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197A9u,1u,0x0Au,0x97AAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197AAu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197AAu,1u,0xAAu,0x97ABu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197ABu:
    if(m==0u&&x==0u&&e==0u){ /* BF 1C 95 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197ABu,4u,0x01u,0x97AFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01951Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197AFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197AFu,2u,0x79u,0x97B1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197B1u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197B1u,3u,0x00u,0x97B4u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197B4u:
    if(m==0u&&x==0u&&e==0u){ /* A2 CE 05 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197B4u,3u,0x05u,0x97B7u);
      sc_v11_op_ldx(r,0x05CEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197B7u:
    if(m==0u&&x==0u&&e==0u){ /* 86 7C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197B7u,2u,0x7Cu,0x97B9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197B9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197B9u,3u,0x00u,0x97BCu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197BCu:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197BCu,2u,0x82u,0x97BEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197BEu:
    if(m==0u&&x==0u&&e==0u){ /* A6 79 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197BEu,2u,0x79u,0x97C0u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197C0u:
    if(m==0u&&x==0u&&e==0u){ /* A5 7C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197C0u,2u,0x7Cu,0x97C2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197C2u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197C2u,1u,0x18u,0x97C3u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197C3u:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 38 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197C3u,3u,0x38u,0x97C6u);
      sc_v11_op_adc(r,0x3840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197C6u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197C6u,1u,0xA8u,0x97C7u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197C7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197C7u,2u,0x7Fu,0x97C9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197C9u:
    if(m==0u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197C9u,1u,0x3Au,0x97CAu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197CAu:
    if(m==0u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197CAu,1u,0x8Bu,0x97CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197CBu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197CBu,3u,0x01u,0x97CEu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x97CBu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197CEu:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197CEu,1u,0xABu,0x97CFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197CFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 7C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197CFu,2u,0x7Cu,0x97D1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197D1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197D1u,1u,0x18u,0x97D2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197D2u:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197D2u,3u,0x00u,0x97D5u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197D5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197D5u,2u,0x7Cu,0x97D7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197D7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197D7u,2u,0x79u,0x97D9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197D9u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197D9u,1u,0x18u,0x97DAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197DAu:
    if(m==0u&&x==0u&&e==0u){ /* 65 7F Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197DAu,2u,0x7Fu,0x97DCu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197DCu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197DCu,2u,0x79u,0x97DEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197DEu:
    if(m==0u&&x==0u&&e==0u){ /* C6 82 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197DEu,2u,0x82u,0x97E0u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x82u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197E0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DC Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197E0u,2u,0xDCu,0x97E2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x97BEu;}
      if(c->pc!=0x97E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0197E2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0197E2u,1u,0x60u,0x97E3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
