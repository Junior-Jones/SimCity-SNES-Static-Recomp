/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000A5(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x029589u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029589u,2u,0x20u,0x958Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02958Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02958Bu,3u,0x01u,0x958Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02958Eu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02958Eu,1u,0x18u,0x958Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02958Fu:
    if(m==0u&&x==1u&&e==0u){ /* 69 46 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02958Fu,3u,0x00u,0x9592u);
      sc_v11_op_adc(r,0x0046u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029592u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029592u,3u,0x0Du,0x9595u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029595u:
    if(m==0u&&x==1u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029595u,3u,0x01u,0x9598u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029598u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029598u,1u,0x18u,0x9599u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029599u:
    if(m==0u&&x==1u&&e==0u){ /* 69 32 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029599u,3u,0x00u,0x959Cu);
      sc_v11_op_adc(r,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02959Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02959Cu,3u,0x0Du,0x959Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D35u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02959Fu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02959Fu,1u,0x60u,0x95A0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295A0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A0u,3u,0x9Fu,0x95A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A2u))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A0u,3u,0x9Fu,0x95A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A2u))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A0u,3u,0x9Fu,0x95A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A2u))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A0u,3u,0x9Fu,0x95A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A2u))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295A3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0C 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A3u,3u,0x98u,0x95A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A5u))return 0;c->pc=0x980Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0C 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A3u,3u,0x98u,0x95A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A5u))return 0;c->pc=0x980Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 0C 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A3u,3u,0x98u,0x95A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A5u))return 0;c->pc=0x980Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 0C 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A3u,3u,0x98u,0x95A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A5u))return 0;c->pc=0x980Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295A6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 31 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A6u,3u,0x97u,0x95A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A8u))return 0;c->pc=0x9731u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 31 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A6u,3u,0x97u,0x95A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A8u))return 0;c->pc=0x9731u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 31 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A6u,3u,0x97u,0x95A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A8u))return 0;c->pc=0x9731u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 31 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A6u,3u,0x97u,0x95A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95A8u))return 0;c->pc=0x9731u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295A9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F4 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A9u,3u,0x96u,0x95ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95ABu))return 0;c->pc=0x96F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F4 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A9u,3u,0x96u,0x95ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95ABu))return 0;c->pc=0x96F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F4 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A9u,3u,0x96u,0x95ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95ABu))return 0;c->pc=0x96F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F4 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295A9u,3u,0x96u,0x95ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95ABu))return 0;c->pc=0x96F4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295ACu:
    if(m==0u&&x==0u&&e==0u){ /* 20 68 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295ACu,3u,0xA0u,0x95AFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95AEu))return 0;c->pc=0xA068u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 68 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295ACu,3u,0xA0u,0x95AFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95AEu))return 0;c->pc=0xA068u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 68 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295ACu,3u,0xA0u,0x95AFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95AEu))return 0;c->pc=0xA068u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 68 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295ACu,3u,0xA0u,0x95AFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95AEu))return 0;c->pc=0xA068u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295AFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B6 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295AFu,3u,0x95u,0x95B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95B1u))return 0;c->pc=0x95B6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B6 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295AFu,3u,0x95u,0x95B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95B1u))return 0;c->pc=0x95B6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B6 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295AFu,3u,0x95u,0x95B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95B1u))return 0;c->pc=0x95B6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B6 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295AFu,3u,0x95u,0x95B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95B1u))return 0;c->pc=0x95B6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295B2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B2u,3u,0x95u,0x95B5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95B4u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B2u,3u,0x95u,0x95B5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95B4u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B2u,3u,0x95u,0x95B5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95B4u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B2u,3u,0x95u,0x95B5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95B4u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295B5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B5u,1u,0x60u,0x95B6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B5u,1u,0x60u,0x95B6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B5u,1u,0x60u,0x95B6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B5u,1u,0x60u,0x95B6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295B6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B6u,2u,0x20u,0x95B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B6u,2u,0x20u,0x95B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B6u,2u,0x20u,0x95B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B6u,2u,0x20u,0x95B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295B8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 D0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B8u,3u,0x00u,0x95BBu);
      sc_v11_op_lda(r,0x00D0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 D0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295B8u,3u,0x00u,0x95BBu);
      sc_v11_op_lda(r,0x00D0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295BBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295BBu,3u,0x02u,0x95BEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295BBu,3u,0x02u,0x95BEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295BEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295BEu,3u,0x00u,0x95C1u);
      sc_v11_op_lda(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295BEu,3u,0x00u,0x95C1u);
      sc_v11_op_lda(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295C1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295C1u,3u,0x02u,0x95C4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295C1u,3u,0x02u,0x95C4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295C4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295C4u,3u,0x00u,0x95C7u);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295C4u,3u,0x00u,0x95C7u);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295C7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295C7u,3u,0x02u,0x95CAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295C7u,3u,0x02u,0x95CAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295CAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 22 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295CAu,3u,0x00u,0x95CDu);
      sc_v11_op_lda(r,0x0022u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 22 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295CAu,3u,0x00u,0x95CDu);
      sc_v11_op_lda(r,0x0022u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295CDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295CDu,3u,0x02u,0x95D0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295CDu,3u,0x02u,0x95D0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295D0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D0u,2u,0x20u,0x95D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D0u,2u,0x20u,0x95D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295D2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D2u,3u,0x00u,0x95D5u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D2u,3u,0x00u,0x95D5u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295D5u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D5u,2u,0x00u,0x95D7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x95D7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D5u,2u,0x00u,0x95D7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x95D7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295D7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D7u,2u,0x20u,0x95D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D7u,2u,0x20u,0x95D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295D9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D9u,2u,0x00u,0x95DBu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295D9u,2u,0x00u,0x95DBu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295DBu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 0D 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295DBu,4u,0x7Eu,0x95DFu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 0D 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295DBu,4u,0x7Eu,0x95DFu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295DFu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 0E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295DFu,4u,0x7Eu,0x95E3u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 0E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295DFu,4u,0x7Eu,0x95E3u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295E3u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 0F 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295E3u,4u,0x7Eu,0x95E7u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 0F 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295E3u,4u,0x7Eu,0x95E7u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295E7u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 10 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295E7u,4u,0x7Eu,0x95EBu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2210u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 10 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295E7u,4u,0x7Eu,0x95EBu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2210u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295EBu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295EBu,1u,0x60u,0x95ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295EBu,1u,0x60u,0x95ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295ECu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295ECu,2u,0x20u,0x95EEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295ECu,2u,0x20u,0x95EEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295ECu,2u,0x20u,0x95EEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295ECu,2u,0x20u,0x95EEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295EEu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295EEu,2u,0x10u,0x95F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295EEu,2u,0x10u,0x95F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295F0u:
    if(m==1u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295F0u,3u,0x0Du,0x95F3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295F3u:
    if(m==1u&&x==0u&&e==0u){ /* AE 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295F3u,3u,0x0Du,0x95F6u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295F6u:
    if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295F6u,2u,0x03u,0x95F8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x95FBu;}
      if(c->pc!=0x95F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295F8u:
    if(m==1u&&x==0u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295F8u,3u,0x0Du,0x95FBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295FBu:
    if(m==1u&&x==0u&&e==0u){ /* C9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295FBu,2u,0x04u,0x95FDu);
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295FDu:
    if(m==1u&&x==0u&&e==0u){ /* 90 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295FDu,2u,0x01u,0x95FFu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9600u;}
      if(c->pc!=0x95FFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95FFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0295FFu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0295FFu,1u,0x60u,0x9600u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029600u:
    if(m==1u&&x==0u&&e==0u){ /* AD 8D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029600u,3u,0x0Au,0x9603u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A8Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029603u:
    if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029603u,2u,0x14u,0x9605u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9619u;}
      if(c->pc!=0x9605u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9605u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029605u:
    if(m==1u&&x==0u&&e==0u){ /* A0 50 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029605u,3u,0x00u,0x9608u);
      sc_v11_op_ldy(r,0x0050u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029608u:
    if(m==1u&&x==0u&&e==0u){ /* A2 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029608u,3u,0x00u,0x960Bu);
      sc_v11_op_ldx(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02960Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02960Bu,2u,0xFCu,0x960Du);
      sc_v11_op_lda(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02960Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 AB 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02960Du,3u,0x96u,0x9610u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x960Fu))return 0;c->pc=0x96ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029610u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029610u,2u,0x20u,0x9612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029610u,2u,0x20u,0x9612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029610u,2u,0x20u,0x9612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029610u,2u,0x20u,0x9612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029612u:
    if(m==0u&&x==0u&&e==0u){ /* A9 ED 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029612u,3u,0x32u,0x9615u);
      sc_v11_op_lda(r,0x32EDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 ED 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029612u,3u,0x32u,0x9615u);
      sc_v11_op_lda(r,0x32EDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029615u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 52 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029615u,4u,0x7Eu,0x9619u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2052u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 52 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029615u,4u,0x7Eu,0x9619u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2052u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029619u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029619u,2u,0x20u,0x961Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029619u,2u,0x20u,0x961Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029619u,2u,0x20u,0x961Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02961Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02961Bu,2u,0x10u,0x961Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02961Bu,2u,0x10u,0x961Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02961Du:
    if(m==1u&&x==0u&&e==0u){ /* AD 93 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02961Du,3u,0x0Au,0x9620u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A93u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029620u:
    if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029620u,2u,0x14u,0x9622u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9636u;}
      if(c->pc!=0x9622u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9622u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029622u:
    if(m==1u&&x==0u&&e==0u){ /* A0 60 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029622u,3u,0x00u,0x9625u);
      sc_v11_op_ldy(r,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029625u:
    if(m==1u&&x==0u&&e==0u){ /* A2 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029625u,3u,0x00u,0x9628u);
      sc_v11_op_ldx(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029628u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029628u,2u,0xFCu,0x962Au);
      sc_v11_op_lda(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02962Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 AB 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02962Au,3u,0x96u,0x962Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x962Cu))return 0;c->pc=0x96ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02962Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02962Du,2u,0x20u,0x962Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02962Du,2u,0x20u,0x962Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02962Du,2u,0x20u,0x962Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02962Du,2u,0x20u,0x962Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02962Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 EA 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02962Fu,3u,0x32u,0x9632u);
      sc_v11_op_lda(r,0x32EAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 EA 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02962Fu,3u,0x32u,0x9632u);
      sc_v11_op_lda(r,0x32EAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029632u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 62 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029632u,4u,0x7Eu,0x9636u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2062u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 62 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029632u,4u,0x7Eu,0x9636u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2062u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029636u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029636u,2u,0x20u,0x9638u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029636u,2u,0x20u,0x9638u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029636u,2u,0x20u,0x9638u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029638u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029638u,2u,0x10u,0x963Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029638u,2u,0x10u,0x963Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02963Au:
    if(m==1u&&x==0u&&e==0u){ /* AD 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02963Au,3u,0x0Au,0x963Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A95u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02963Du:
    if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02963Du,2u,0x14u,0x963Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9653u;}
      if(c->pc!=0x963Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x963Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02963Fu:
    if(m==1u&&x==0u&&e==0u){ /* A0 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02963Fu,3u,0x00u,0x9642u);
      sc_v11_op_ldy(r,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029642u:
    if(m==1u&&x==0u&&e==0u){ /* A2 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029642u,3u,0x00u,0x9645u);
      sc_v11_op_ldx(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029645u:
    if(m==1u&&x==0u&&e==0u){ /* A9 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029645u,2u,0xF3u,0x9647u);
      sc_v11_op_lda(r,0x00F3u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029647u:
    if(m==1u&&x==0u&&e==0u){ /* 20 AB 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029647u,3u,0x96u,0x964Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9649u))return 0;c->pc=0x96ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02964Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02964Au,2u,0x20u,0x964Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02964Au,2u,0x20u,0x964Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02964Au,2u,0x20u,0x964Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02964Au,2u,0x20u,0x964Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02964Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 EC 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02964Cu,3u,0x32u,0x964Fu);
      sc_v11_op_lda(r,0x32ECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 EC 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02964Cu,3u,0x32u,0x964Fu);
      sc_v11_op_lda(r,0x32ECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02964Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 66 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02964Fu,4u,0x7Eu,0x9653u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2066u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 66 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02964Fu,4u,0x7Eu,0x9653u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2066u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029653u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029653u,2u,0x20u,0x9655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029653u,2u,0x20u,0x9655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029653u,2u,0x20u,0x9655u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029655u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029655u,2u,0x10u,0x9657u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029655u,2u,0x10u,0x9657u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029657u:
    if(m==1u&&x==0u&&e==0u){ /* AD 8F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029657u,3u,0x0Au,0x965Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A8Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02965Au:
    if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02965Au,2u,0x14u,0x965Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9670u;}
      if(c->pc!=0x965Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x965Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02965Cu:
    if(m==1u&&x==0u&&e==0u){ /* A2 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02965Cu,3u,0x00u,0x965Fu);
      sc_v11_op_ldx(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02965Fu:
    if(m==1u&&x==0u&&e==0u){ /* A0 54 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02965Fu,3u,0x00u,0x9662u);
      sc_v11_op_ldy(r,0x0054u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029662u:
    if(m==1u&&x==0u&&e==0u){ /* A9 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029662u,2u,0xF3u,0x9664u);
      sc_v11_op_lda(r,0x00F3u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029664u:
    if(m==1u&&x==0u&&e==0u){ /* 20 AB 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029664u,3u,0x96u,0x9667u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9666u))return 0;c->pc=0x96ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029667u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029667u,2u,0x20u,0x9669u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029667u,2u,0x20u,0x9669u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029667u,2u,0x20u,0x9669u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029667u,2u,0x20u,0x9669u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029669u:
    if(m==0u&&x==0u&&e==0u){ /* A9 E9 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029669u,3u,0x32u,0x966Cu);
      sc_v11_op_lda(r,0x32E9u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 E9 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029669u,3u,0x32u,0x966Cu);
      sc_v11_op_lda(r,0x32E9u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02966Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 56 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02966Cu,4u,0x7Eu,0x9670u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2056u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 56 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02966Cu,4u,0x7Eu,0x9670u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2056u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029670u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029670u,2u,0x20u,0x9672u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029670u,2u,0x20u,0x9672u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029670u,2u,0x20u,0x9672u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029672u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029672u,2u,0x10u,0x9674u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029672u,2u,0x10u,0x9674u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029674u:
    if(m==1u&&x==0u&&e==0u){ /* AD 8B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029674u,3u,0x0Au,0x9677u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A8Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029677u:
    if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029677u,2u,0x14u,0x9679u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x968Du;}
      if(c->pc!=0x9679u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9679u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029679u:
    if(m==1u&&x==0u&&e==0u){ /* A2 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029679u,3u,0x00u,0x967Cu);
      sc_v11_op_ldx(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02967Cu:
    if(m==1u&&x==0u&&e==0u){ /* A0 58 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02967Cu,3u,0x00u,0x967Fu);
      sc_v11_op_ldy(r,0x0058u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02967Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02967Fu,2u,0xCFu,0x9681u);
      sc_v11_op_lda(r,0x00CFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029681u:
    if(m==1u&&x==0u&&e==0u){ /* 20 AB 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029681u,3u,0x96u,0x9684u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9683u))return 0;c->pc=0x96ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029684u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029684u,2u,0x20u,0x9686u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029684u,2u,0x20u,0x9686u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029684u,2u,0x20u,0x9686u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029684u,2u,0x20u,0x9686u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029686u:
    if(m==0u&&x==0u&&e==0u){ /* A9 EB 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029686u,3u,0x32u,0x9689u);
      sc_v11_op_lda(r,0x32EBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 EB 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029686u,3u,0x32u,0x9689u);
      sc_v11_op_lda(r,0x32EBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029689u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 5A 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029689u,4u,0x7Eu,0x968Du);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E205Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 5A 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029689u,4u,0x7Eu,0x968Du);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E205Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02968Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02968Du,2u,0x20u,0x968Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02968Du,2u,0x20u,0x968Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02968Du,2u,0x20u,0x968Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02968Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02968Fu,2u,0x10u,0x9691u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02968Fu,2u,0x10u,0x9691u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029691u:
    if(m==1u&&x==0u&&e==0u){ /* AD 91 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029691u,3u,0x0Au,0x9694u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A91u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029694u:
    if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029694u,2u,0x14u,0x9696u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x96AAu;}
      if(c->pc!=0x9696u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9696u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029696u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029696u,3u,0x00u,0x9699u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029699u:
    if(m==1u&&x==0u&&e==0u){ /* A0 5C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029699u,3u,0x00u,0x969Cu);
      sc_v11_op_ldy(r,0x005Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02969Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02969Cu,2u,0x3Fu,0x969Eu);
      sc_v11_op_lda(r,0x003Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02969Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 AB 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02969Eu,3u,0x96u,0x96A1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x96A0u))return 0;c->pc=0x96ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296A1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296A1u,2u,0x20u,0x96A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296A1u,2u,0x20u,0x96A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296A1u,2u,0x20u,0x96A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296A1u,2u,0x20u,0x96A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296A3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 EE 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296A3u,3u,0x32u,0x96A6u);
      sc_v11_op_lda(r,0x32EEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 EE 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296A3u,3u,0x32u,0x96A6u);
      sc_v11_op_lda(r,0x32EEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296A6u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 5E 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296A6u,4u,0x7Eu,0x96AAu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E205Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 5E 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296A6u,4u,0x7Eu,0x96AAu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E205Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296AAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296AAu,1u,0x60u,0x96ABu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296AAu,1u,0x60u,0x96ABu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296AAu,1u,0x60u,0x96ABu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296ABu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296ABu,2u,0x20u,0x96ADu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296ADu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296ADu,2u,0x10u,0x96AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296AFu:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296AFu,2u,0x79u,0x96B1u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296B1u:
    if(m==1u&&x==0u&&e==0u){ /* BD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296B1u,3u,0x0Au,0x96B4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A4Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296B4u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296B4u,1u,0x18u,0x96B5u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296B5u:
    if(m==1u&&x==0u&&e==0u){ /* 69 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296B5u,2u,0x30u,0x96B7u);
      sc_v11_op_adc(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296B7u:
    if(m==1u&&x==0u&&e==0u){ /* C9 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296B7u,2u,0x2Fu,0x96B9u);
      sc_v11_op_compare(r,c->a,0x002Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296B9u:
    if(m==1u&&x==0u&&e==0u){ /* B0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296B9u,2u,0x04u,0x96BBu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x96BFu;}
      if(c->pc!=0x96BBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96BBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296BBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296BBu,2u,0x2Fu,0x96BDu);
      sc_v11_op_lda(r,0x002Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296BDu:
    if(m==1u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296BDu,2u,0x06u,0x96BFu);
      if(1){c->pc=0x96C5u;}
      if(c->pc!=0x96BFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96BFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296BFu:
    if(m==1u&&x==0u&&e==0u){ /* C9 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296BFu,2u,0x8Fu,0x96C1u);
      sc_v11_op_compare(r,c->a,0x008Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296C1u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296C1u,2u,0x02u,0x96C3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x96C5u;}
      if(c->pc!=0x96C3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96C3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296C3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296C3u,2u,0x8Fu,0x96C5u);
      sc_v11_op_lda(r,0x008Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296C5u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296C5u,1u,0xEBu,0x96C6u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296C6u:
    if(m==1u&&x==0u&&e==0u){ /* BD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296C6u,3u,0x0Au,0x96C9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A51u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296C9u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296C9u,1u,0x18u,0x96CAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296CAu:
    if(m==1u&&x==0u&&e==0u){ /* 69 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296CAu,2u,0x42u,0x96CCu);
      sc_v11_op_adc(r,0x0042u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296CCu:
    if(m==1u&&x==0u&&e==0u){ /* C9 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296CCu,2u,0x43u,0x96CEu);
      sc_v11_op_compare(r,c->a,0x0043u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296CEu:
    if(m==1u&&x==0u&&e==0u){ /* B0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296CEu,2u,0x04u,0x96D0u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x96D4u;}
      if(c->pc!=0x96D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296D0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296D0u,2u,0x43u,0x96D2u);
      sc_v11_op_lda(r,0x0043u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296D2u:
    if(m==1u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296D2u,2u,0x06u,0x96D4u);
      if(1){c->pc=0x96DAu;}
      if(c->pc!=0x96D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296D4u:
    if(m==1u&&x==0u&&e==0u){ /* C9 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296D4u,2u,0xB5u,0x96D6u);
      sc_v11_op_compare(r,c->a,0x00B5u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296D6u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296D6u,2u,0x02u,0x96D8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x96DAu;}
      if(c->pc!=0x96D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296D8u:
    if(m==1u&&x==0u&&e==0u){ /* A9 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296D8u,2u,0xB5u,0x96DAu);
      sc_v11_op_lda(r,0x00B5u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296DAu:
    if(m==1u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296DAu,1u,0xBBu,0x96DBu);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296DBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296DBu,2u,0x20u,0x96DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296DDu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296DDu,4u,0x7Eu,0x96E1u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296E1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296E1u,2u,0x30u,0x96E3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296E3u:
    if(m==1u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296E3u,1u,0x98u,0x96E4u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296E4u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296E4u,1u,0x4Au,0x96E5u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296E5u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296E5u,1u,0x4Au,0x96E6u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296E6u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296E6u,1u,0x4Au,0x96E7u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296E7u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296E7u,1u,0x4Au,0x96E8u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296E8u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296E8u,1u,0xAAu,0x96E9u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296E9u:
    if(m==1u&&x==1u&&e==0u){ /* BF 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296E9u,4u,0x7Eu,0x96EDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2200u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296EDu:
    if(m==1u&&x==1u&&e==0u){ /* 25 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296EDu,2u,0x79u,0x96EFu);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296EFu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296EFu,4u,0x7Eu,0x96F3u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296F3u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296F3u,1u,0x60u,0x96F4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296F4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296F4u,2u,0x10u,0x96F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296F4u,2u,0x10u,0x96F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296F4u,2u,0x10u,0x96F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296F4u,2u,0x10u,0x96F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296F6u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296F6u,2u,0x20u,0x96F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296F6u,2u,0x20u,0x96F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296F8u:
    if(m==0u&&x==1u&&e==0u){ /* A2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296F8u,2u,0x20u,0x96FAu);
      sc_v11_op_ldx(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296FAu:
    if(m==0u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296FAu,3u,0x0Du,0x96FDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0296FDu:
    if(m==0u&&x==1u&&e==0u){ /* C9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0296FDu,3u,0x00u,0x9700u);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029700u:
    if(m==0u&&x==1u&&e==0u){ /* 90 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029700u,2u,0x2Eu,0x9702u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9730u;}
      if(c->pc!=0x9702u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9702u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029702u:
    if(m==0u&&x==1u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029702u,2u,0x02u,0x9704u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9706u;}
      if(c->pc!=0x9704u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9704u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029704u:
    if(m==0u&&x==1u&&e==0u){ /* A2 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029704u,2u,0x2Du,0x9706u);
      sc_v11_op_ldx(r,0x002Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029706u:
    if(m==0u&&x==1u&&e==0u){ /* 8E 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029706u,3u,0x02u,0x9709u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0261u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029709u:
    if(m==0u&&x==1u&&e==0u){ /* A9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029709u,3u,0x00u,0x970Cu);
      sc_v11_op_lda(r,0x0084u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02970Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02970Cu,3u,0x02u,0x970Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02970Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02970Fu,3u,0x00u,0x9712u);
      sc_v11_op_lda(r,0x00C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029712u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029712u,3u,0x02u,0x9715u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029715u:
    if(m==0u&&x==1u&&e==0u){ /* A9 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029715u,3u,0x00u,0x9718u);
      sc_v11_op_lda(r,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029718u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029718u,3u,0x02u,0x971Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02971Bu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02971Bu,2u,0x20u,0x971Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02971Du:
    if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02971Du,3u,0x00u,0x9720u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029720u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029720u,2u,0x00u,0x9722u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9722u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029722u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029722u,2u,0x20u,0x9724u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029724u:
    if(m==1u&&x==1u&&e==0u){ /* AF 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029724u,4u,0x7Eu,0x9728u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2208u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029728u:
    if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029728u,2u,0x03u,0x972Au);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02972Au:
    if(m==1u&&x==1u&&e==0u){ /* 09 A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02972Au,2u,0xA8u,0x972Cu);
      sc_v11_op_ora(r,0x00A8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02972Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02972Cu,4u,0x7Eu,0x9730u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2208u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029730u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029730u,1u,0x60u,0x9731u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029730u,1u,0x60u,0x9731u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029731u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029731u,2u,0x20u,0x9733u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029731u,2u,0x20u,0x9733u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029731u,2u,0x20u,0x9733u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029731u,2u,0x20u,0x9733u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029733u:
    if(m==0u&&x==0u&&e==0u){ /* A9 70 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029733u,3u,0x00u,0x9736u);
      sc_v11_op_lda(r,0x0070u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 70 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029733u,3u,0x00u,0x9736u);
      sc_v11_op_lda(r,0x0070u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029736u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029736u,3u,0x02u,0x9739u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029736u,3u,0x02u,0x9739u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029739u:
    if(m==0u&&x==0u&&e==0u){ /* A9 38 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029739u,3u,0x00u,0x973Cu);
      sc_v11_op_lda(r,0x0038u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 38 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029739u,3u,0x00u,0x973Cu);
      sc_v11_op_lda(r,0x0038u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02973Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02973Cu,3u,0x02u,0x973Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02973Cu,3u,0x02u,0x973Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02973Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02973Fu,3u,0x00u,0x9742u);
      sc_v11_op_lda(r,0x00A5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02973Fu,3u,0x00u,0x9742u);
      sc_v11_op_lda(r,0x00A5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029742u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029742u,3u,0x02u,0x9745u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029742u,3u,0x02u,0x9745u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029745u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029745u,3u,0x00u,0x9748u);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029745u,3u,0x00u,0x9748u);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029748u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029748u,3u,0x02u,0x974Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029748u,3u,0x02u,0x974Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02974Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02974Bu,2u,0x20u,0x974Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02974Bu,2u,0x20u,0x974Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02974Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02974Du,3u,0x00u,0x9750u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02974Du,3u,0x00u,0x9750u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029750u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029750u,2u,0x00u,0x9752u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9752u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029750u,2u,0x00u,0x9752u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9752u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029752u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029752u,2u,0x20u,0x9754u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029752u,2u,0x20u,0x9754u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029754u:
    if(m==1u&&x==0u&&e==0u){ /* A9 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029754u,2u,0xAAu,0x9756u);
      sc_v11_op_lda(r,0x00AAu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029754u,2u,0xAAu,0x9756u);
      sc_v11_op_lda(r,0x00AAu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029756u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 07 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029756u,4u,0x7Eu,0x975Au);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2207u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 07 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029756u,4u,0x7Eu,0x975Au);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2207u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02975Au:
    if(m==1u&&x==0u&&e==0u){ /* AF 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02975Au,4u,0x7Eu,0x975Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2208u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02975Au,4u,0x7Eu,0x975Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2208u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02975Eu:
    if(m==1u&&x==0u&&e==0u){ /* 29 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02975Eu,2u,0xFCu,0x9760u);
      sc_v11_op_and(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02975Eu,2u,0xFCu,0x9760u);
      sc_v11_op_and(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029760u:
    if(m==1u&&x==0u&&e==0u){ /* 09 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029760u,2u,0x02u,0x9762u);
      sc_v11_op_ora(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029760u,2u,0x02u,0x9762u);
      sc_v11_op_ora(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029762u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029762u,4u,0x7Eu,0x9766u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2208u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029762u,4u,0x7Eu,0x9766u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2208u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029766u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029766u,1u,0x60u,0x9767u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029766u,1u,0x60u,0x9767u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029767u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029767u,2u,0x30u,0x9769u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029767u,2u,0x30u,0x9769u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029767u,2u,0x30u,0x9769u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029767u,2u,0x30u,0x9769u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029769u:
    if(m==1u&&x==1u&&e==0u){ /* AD 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029769u,3u,0x0Du,0x976Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02976Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02976Cu,2u,0x3Fu,0x976Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x97ADu;}
      if(c->pc!=0x976Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x976Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02976Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02976Eu,1u,0x8Bu,0x976Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02976Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02976Fu,2u,0x02u,0x9771u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029771u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029771u,1u,0x48u,0x9772u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029772u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029772u,1u,0xABu,0x9773u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029773u:
    if(m==1u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029773u,3u,0x0Du,0x9776u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029776u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029776u,1u,0x0Au,0x9777u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029777u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029777u,1u,0xAAu,0x9778u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029778u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029778u,2u,0x20u,0x977Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02977Au:
    if(m==0u&&x==1u&&e==0u){ /* BD A4 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02977Au,3u,0x86u,0x977Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x86A4u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02977Du:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02977Du,1u,0x0Au,0x977Eu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02977Eu:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02977Eu,1u,0xAAu,0x977Fu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02977Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 68 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02977Fu,3u,0x00u,0x9782u);
      sc_v11_op_lda(r,0x0068u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029782u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029782u,3u,0x02u,0x9785u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029785u:
    if(m==0u&&x==1u&&e==0u){ /* BD AE 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029785u,3u,0x97u,0x9788u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x97AEu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029788u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029788u,3u,0x02u,0x978Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02978Bu:
    if(m==0u&&x==1u&&e==0u){ /* A9 AC 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02978Bu,3u,0x00u,0x978Eu);
      sc_v11_op_lda(r,0x00ACu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02978Eu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02978Eu,3u,0x02u,0x9791u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029791u:
    if(m==0u&&x==1u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029791u,3u,0x00u,0x9794u);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029794u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029794u,3u,0x02u,0x9797u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029797u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029797u,2u,0x20u,0x9799u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029799u:
    if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029799u,3u,0x00u,0x979Cu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02979Cu:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02979Cu,2u,0x00u,0x979Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x979Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02979Eu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02979Eu,2u,0x20u,0x97A0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297A0u:
    if(m==1u&&x==1u&&e==0u){ /* AF 06 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297A0u,4u,0x7Eu,0x97A4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2206u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297A4u:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297A4u,2u,0x0Fu,0x97A6u);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297A6u:
    if(m==1u&&x==1u&&e==0u){ /* 09 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297A6u,2u,0xA0u,0x97A8u);
      sc_v11_op_ora(r,0x00A0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297A8u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 06 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297A8u,4u,0x7Eu,0x97ACu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2206u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297ACu:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297ACu,1u,0xABu,0x97ADu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297ADu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297ADu,1u,0x60u,0x97AEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297B6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297B6u,2u,0x20u,0x97B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297B6u,2u,0x20u,0x97B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297B8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297B8u,3u,0x00u,0x97BBu);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297B8u,3u,0x00u,0x97BBu);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297BBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297BBu,3u,0x02u,0x97BEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297BBu,3u,0x02u,0x97BEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297BEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297BEu,3u,0x0Du,0x97C1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297BEu,3u,0x0Du,0x97C1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297C1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 43 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297C1u,3u,0x00u,0x97C4u);
      sc_v11_op_compare(r,c->a,0x0043u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 43 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297C1u,3u,0x00u,0x97C4u);
      sc_v11_op_compare(r,c->a,0x0043u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297C4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297C4u,2u,0x0Au,0x97C6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x97D0u;}
      if(c->pc!=0x97C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297C4u,2u,0x0Au,0x97C6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x97D0u;}
      if(c->pc!=0x97C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297C6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 A1 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297C6u,3u,0x00u,0x97C9u);
      sc_v11_op_compare(r,c->a,0x00A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 A1 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297C6u,3u,0x00u,0x97C9u);
      sc_v11_op_compare(r,c->a,0x00A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297C9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297C9u,2u,0x08u,0x97CBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x97D3u;}
      if(c->pc!=0x97CBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97CBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297C9u,2u,0x08u,0x97CBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x97D3u;}
      if(c->pc!=0x97CBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97CBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297CBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 A1 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297CBu,3u,0x00u,0x97CEu);
      sc_v11_op_lda(r,0x00A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 A1 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297CBu,3u,0x00u,0x97CEu);
      sc_v11_op_lda(r,0x00A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297CEu:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297CEu,2u,0x03u,0x97D0u);
      if(1){c->pc=0x97D3u;}
      if(c->pc!=0x97D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297CEu,2u,0x03u,0x97D0u);
      if(1){c->pc=0x97D3u;}
      if(c->pc!=0x97D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297D0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 43 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297D0u,3u,0x00u,0x97D3u);
      sc_v11_op_lda(r,0x0043u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 43 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297D0u,3u,0x00u,0x97D3u);
      sc_v11_op_lda(r,0x0043u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297D3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297D3u,3u,0x02u,0x97D6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297D3u,3u,0x02u,0x97D6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297D6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297D6u,3u,0x0Du,0x97D9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D35u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297D6u,3u,0x0Du,0x97D9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D35u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297D9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297D9u,3u,0x00u,0x97DCu);
      sc_v11_op_compare(r,c->a,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297D9u,3u,0x00u,0x97DCu);
      sc_v11_op_compare(r,c->a,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297DCu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297DCu,2u,0x0Au,0x97DEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x97E8u;}
      if(c->pc!=0x97DEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97DEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297DCu,2u,0x0Au,0x97DEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x97E8u;}
      if(c->pc!=0x97DEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97DEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297DEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297DEu,3u,0x00u,0x97E1u);
      sc_v11_op_compare(r,c->a,0x007Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297DEu,3u,0x00u,0x97E1u);
      sc_v11_op_compare(r,c->a,0x007Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297E1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297E1u,2u,0x08u,0x97E3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x97EBu;}
      if(c->pc!=0x97E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297E1u,2u,0x08u,0x97E3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x97EBu;}
      if(c->pc!=0x97E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297E3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297E3u,3u,0x00u,0x97E6u);
      sc_v11_op_lda(r,0x007Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297E3u,3u,0x00u,0x97E6u);
      sc_v11_op_lda(r,0x007Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297E6u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297E6u,2u,0x03u,0x97E8u);
      if(1){c->pc=0x97EBu;}
      if(c->pc!=0x97E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297E6u,2u,0x03u,0x97E8u);
      if(1){c->pc=0x97EBu;}
      if(c->pc!=0x97E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297E8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297E8u,3u,0x00u,0x97EBu);
      sc_v11_op_lda(r,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297E8u,3u,0x00u,0x97EBu);
      sc_v11_op_lda(r,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297EBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297EBu,3u,0x02u,0x97EEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297EBu,3u,0x02u,0x97EEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297EEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297EEu,3u,0x00u,0x97F1u);
      sc_v11_op_lda(r,0x001Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297EEu,3u,0x00u,0x97F1u);
      sc_v11_op_lda(r,0x001Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297F1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297F1u,3u,0x02u,0x97F4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297F1u,3u,0x02u,0x97F4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297F4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297F4u,2u,0x20u,0x97F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297F4u,2u,0x20u,0x97F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297F6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297F6u,3u,0x00u,0x97F9u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297F6u,3u,0x00u,0x97F9u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297F9u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297F9u,2u,0x00u,0x97FBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x97FBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297F9u,2u,0x00u,0x97FBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x97FBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297FBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297FBu,2u,0x20u,0x97FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297FBu,2u,0x20u,0x97FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297FDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297FDu,2u,0x00u,0x97FFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297FDu,2u,0x00u,0x97FFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0297FFu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297FFu,4u,0x7Eu,0x9803u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0297FFu,4u,0x7Eu,0x9803u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
