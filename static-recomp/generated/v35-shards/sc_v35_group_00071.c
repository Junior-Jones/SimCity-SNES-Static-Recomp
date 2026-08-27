/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00071(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01C433u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C433u,1u,0x60u,0xC434u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C433u,1u,0x60u,0xC434u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C433u,1u,0x60u,0xC434u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C434u:
    if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C434u,2u,0x10u,0xC436u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C434u,2u,0x10u,0xC436u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C434u,2u,0x10u,0xC436u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C436u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C436u,2u,0x20u,0xC438u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C457u:
    if(m==0u&&x==1u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C457u,3u,0x00u,0xC45Au);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C45Au:
    if(m==0u&&x==1u&&e==0u){ /* 80 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C45Au,2u,0x0Eu,0xC45Cu);
      if(1){c->pc=0xC46Au;}
      if(c->pc!=0xC45Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC45Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C464u:
    if(m==0u&&x==1u&&e==0u){ /* A9 F0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C464u,3u,0x00u,0xC467u);
      sc_v11_op_lda(r,0x00F0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C467u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C467u,1u,0x38u,0xC468u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C468u:
    if(m==0u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C468u,2u,0x79u,0xC46Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C46Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C46Au,3u,0x01u,0xC46Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C478u:
    if(m==0u&&x==1u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C478u,3u,0x00u,0xC47Bu);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C47Bu:
    if(m==0u&&x==1u&&e==0u){ /* 80 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C47Bu,2u,0x0Eu,0xC47Du);
      if(1){c->pc=0xC48Bu;}
      if(c->pc!=0xC47Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC47Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C485u:
    if(m==0u&&x==1u&&e==0u){ /* A9 C8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C485u,3u,0x00u,0xC488u);
      sc_v11_op_lda(r,0x00C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C488u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C488u,1u,0x38u,0xC489u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C489u:
    if(m==0u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C489u,2u,0x79u,0xC48Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C48Bu:
    if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C48Bu,3u,0x01u,0xC48Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4C7u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4C7u,2u,0x30u,0xC4C9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4C7u,2u,0x30u,0xC4C9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4C7u,2u,0x30u,0xC4C9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4CFu:
    if(m==0u&&x==0u&&e==0u){ /* EE BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4CFu,3u,0x01u,0xC4D2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01BDu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4D5u:
    if(m==0u&&x==0u&&e==0u){ /* CE BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4D5u,3u,0x01u,0xC4D8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01BDu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4DBu:
    if(m==0u&&x==0u&&e==0u){ /* EE BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4DBu,3u,0x01u,0xC4DEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01BFu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4E1u:
    if(m==0u&&x==0u&&e==0u){ /* CE BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4E1u,3u,0x01u,0xC4E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01BFu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4E5u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4E5u,2u,0x30u,0xC4E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4E5u,2u,0x30u,0xC4E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4E5u,2u,0x30u,0xC4E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4EDu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4EDu,1u,0x48u,0xC4EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4EEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4EEu,3u,0x01u,0xC4F1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4F1u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4F1u,1u,0x1Au,0xC4F2u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4F2u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4F2u,1u,0x1Au,0xC4F3u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4F3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4F3u,3u,0x00u,0xC4F6u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4F6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4F6u,3u,0x01u,0xC4F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0139u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4F9u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4F9u,1u,0x68u,0xC4FAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4FDu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4FDu,1u,0x48u,0xC4FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4FEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4FEu,3u,0x01u,0xC501u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C501u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C501u,1u,0x3Au,0xC502u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C502u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C502u,1u,0x3Au,0xC503u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C503u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C503u,3u,0x00u,0xC506u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C506u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C506u,3u,0x01u,0xC509u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0139u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C509u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C509u,1u,0x68u,0xC50Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C50Du:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C50Du,1u,0x48u,0xC50Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C50Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C50Eu,3u,0x01u,0xC511u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C511u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C511u,1u,0x1Au,0xC512u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C512u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C512u,1u,0x1Au,0xC513u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C513u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C513u,3u,0x00u,0xC516u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C516u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C516u,3u,0x01u,0xC519u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0137u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C519u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C519u,1u,0x68u,0xC51Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C51Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C51Du,3u,0x01u,0xC520u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C520u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C520u,1u,0x3Au,0xC521u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C521u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C521u,1u,0x3Au,0xC522u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C522u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C522u,3u,0x00u,0xC525u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C525u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C525u,3u,0x01u,0xC528u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0137u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C529u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C529u,2u,0x30u,0xC52Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C539u:
    if(m==0u&&x==0u&&e==0u){ /* 4C B0 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C539u,3u,0xC5u,0xC53Cu);
      c->pc=0xC5B0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C546u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CE 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C546u,3u,0x8Du,0xC549u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC548u))return 0;c->pc=0x8DCEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C549u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C549u,2u,0x30u,0xC54Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C549u,2u,0x30u,0xC54Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C549u,2u,0x30u,0xC54Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C549u,2u,0x30u,0xC54Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C57Du:
    if(m==0u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C57Du,2u,0x08u,0xC57Fu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C57Du,2u,0x08u,0xC57Fu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C57Du,2u,0x08u,0xC57Fu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C57Du,2u,0x08u,0xC57Fu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C57Fu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C57Fu,1u,0x28u,0xC580u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C57Fu,1u,0x28u,0xC580u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C57Fu,1u,0x28u,0xC580u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C580u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C580u,1u,0x60u,0xC581u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C580u,1u,0x60u,0xC581u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C580u,1u,0x60u,0xC581u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C58Bu:
    if(m==0u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Bu,2u,0x08u,0xC58Du);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Bu,2u,0x08u,0xC58Du);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Bu,2u,0x08u,0xC58Du);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Bu,2u,0x08u,0xC58Du);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C58Du:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Du,1u,0x28u,0xC58Eu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Du,1u,0x28u,0xC58Eu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Du,1u,0x28u,0xC58Eu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C58Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Eu,3u,0x01u,0xC591u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Eu,3u,0x01u,0xC591u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Eu,3u,0x01u,0xC591u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C591u:
    if(m==0u&&x==1u&&e==0u){ /* 29 F8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C591u,3u,0x00u,0xC594u);
      sc_v11_op_and(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C591u,2u,0xF8u,0xC593u);
      sc_v11_op_and(r,0x00F8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C591u,2u,0xF8u,0xC593u);
      sc_v11_op_and(r,0x00F8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C594u:
    if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C594u,3u,0x01u,0xC597u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C597u:
    if(m==0u&&x==1u&&e==0u){ /* AD F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C597u,3u,0x01u,0xC59Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C59Au:
    if(m==0u&&x==1u&&e==0u){ /* 29 F8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C59Au,3u,0x00u,0xC59Du);
      sc_v11_op_and(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C59Du:
    if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C59Du,3u,0x01u,0xC5A0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5A0u:
    if(m==0u&&x==1u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5A0u,3u,0x01u,0xC5A3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5A3u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 3B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5A3u,3u,0x02u,0xC5A6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5A6u:
    if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5A6u,3u,0x00u,0xC5A9u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5A9u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 01 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5A9u,3u,0x02u,0xC5ACu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5ACu:
    if(m==0u&&x==1u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5ACu,3u,0xB3u,0xC5AFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC5AEu))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5AFu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5AFu,1u,0x60u,0xC5B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5AFu,1u,0x60u,0xC5B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5AFu,1u,0x60u,0xC5B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5B0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5B0u,2u,0x20u,0xC5B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5B2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5B2u,3u,0x02u,0xC5B5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5B5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5B5u,2u,0x2Eu,0xC5B7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC5E5u;}
      if(c->pc!=0xC5B7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5B7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5B7u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5B7u,3u,0x01u,0xC5BAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5BAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5BAu,2u,0x05u,0xC5BCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC5C1u;}
      if(c->pc!=0xC5BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5BCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CE 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5BCu,3u,0x8Du,0xC5BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC5BEu))return 0;c->pc=0x8DCEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5BFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5BFu,2u,0x30u,0xC5C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5BFu,2u,0x30u,0xC5C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5BFu,2u,0x30u,0xC5C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5BFu,2u,0x30u,0xC5C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5C1u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5C1u,3u,0x01u,0xC5C4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5C4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5C4u,3u,0x01u,0xC5C7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5C7u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5C7u,3u,0x01u,0xC5CAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5CAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5CAu,3u,0x01u,0xC5CDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5CDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 48 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5CDu,3u,0x00u,0xC5D0u);
      sc_v11_op_lda(r,0x0048u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5D0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5D0u,3u,0x01u,0xC5D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5D3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5D3u,3u,0x00u,0xC5D6u);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5D6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5D6u,3u,0x01u,0xC5D9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5D9u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5D9u,3u,0x02u,0xC5DCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5DCu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5DCu,1u,0x08u,0xC5DDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5DDu:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5DDu,4u,0x00u,0xC5E1u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC5E0u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5E1u:
    if(m==0u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E1u,2u,0x08u,0xC5E3u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E1u,2u,0x08u,0xC5E3u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E1u,2u,0x08u,0xC5E3u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E1u,2u,0x08u,0xC5E3u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5E3u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E3u,1u,0x28u,0xC5E4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E3u,1u,0x28u,0xC5E4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E3u,1u,0x28u,0xC5E4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E3u,1u,0x28u,0xC5E4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5E4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E4u,1u,0x60u,0xC5E5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E4u,1u,0x60u,0xC5E5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E4u,1u,0x60u,0xC5E5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E4u,1u,0x60u,0xC5E5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5E5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E5u,2u,0x20u,0xC5E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5E7u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5E7u,3u,0x01u,0xC5EAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5EAu:
    if(m==0u&&x==0u&&e==0u){ /* 30 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5EAu,2u,0xC3u,0xC5ECu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC5AFu;}
      if(c->pc!=0xC5ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5ECu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5ECu,1u,0x08u,0xC5EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5EDu:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5EDu,4u,0x00u,0xC5F1u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC5F0u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5F1u:
    if(m==0u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F1u,2u,0x08u,0xC5F3u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F1u,2u,0x08u,0xC5F3u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F1u,2u,0x08u,0xC5F3u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F1u,2u,0x08u,0xC5F3u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5F3u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F3u,1u,0x28u,0xC5F4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F3u,1u,0x28u,0xC5F4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F3u,1u,0x28u,0xC5F4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F3u,1u,0x28u,0xC5F4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5F4u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F4u,3u,0x01u,0xC5F7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F4u,3u,0x01u,0xC5F7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F4u,3u,0x01u,0xC5F7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F4u,3u,0x01u,0xC5F7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5F7u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F7u,3u,0x00u,0xC5FAu);
      sc_v11_op_and(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 F8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F7u,3u,0x00u,0xC5FAu);
      sc_v11_op_and(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F7u,2u,0xF8u,0xC5F9u);
      sc_v11_op_and(r,0x00F8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5F7u,2u,0xF8u,0xC5F9u);
      sc_v11_op_and(r,0x00F8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5FAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5FAu,3u,0x01u,0xC5FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5FAu,3u,0x01u,0xC5FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5FDu,3u,0x01u,0xC600u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5FDu,3u,0x01u,0xC600u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C600u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C600u,3u,0x00u,0xC603u);
      sc_v11_op_and(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 F8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C600u,3u,0x00u,0xC603u);
      sc_v11_op_and(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C603u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C603u,3u,0x01u,0xC606u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C603u,3u,0x01u,0xC606u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C606u:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C606u,3u,0x01u,0xC609u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C606u,3u,0x01u,0xC609u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C609u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C609u,3u,0x02u,0xC60Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 3B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C609u,3u,0x02u,0xC60Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C60Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C60Cu,3u,0x00u,0xC60Fu);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C60Cu,3u,0x00u,0xC60Fu);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C60Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 01 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C60Fu,3u,0x02u,0xC612u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 01 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C60Fu,3u,0x02u,0xC612u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C612u:
    if(m==0u&&x==0u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C612u,3u,0xB3u,0xC615u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC614u))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C612u,3u,0xB3u,0xC615u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC614u))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C615u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C615u,1u,0x60u,0xC616u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C615u,1u,0x60u,0xC616u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C615u,1u,0x60u,0xC616u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C615u,1u,0x60u,0xC616u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C616u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C616u,2u,0x30u,0xC618u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C616u,2u,0x30u,0xC618u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C616u,2u,0x30u,0xC618u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C660u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C660u,2u,0x20u,0xC662u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C660u,2u,0x20u,0xC662u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C667u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C667u,1u,0x60u,0xC668u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C668u:
    if(m==0u&&x==1u&&e==0u){ /* 9C E5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C668u,3u,0x01u,0xC66Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C66Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C66Bu,3u,0x01u,0xC66Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C66Eu:
    if(m==0u&&x==1u&&e==0u){ /* F0 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C66Eu,2u,0x2Eu,0xC670u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC69Eu;}
      if(c->pc!=0xC670u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC670u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C670u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C670u,3u,0x01u,0xC673u);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C673u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C673u,3u,0x02u,0xC676u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C676u:
    if(m==0u&&x==1u&&e==0u){ /* A9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C676u,3u,0x00u,0xC679u);
      sc_v11_op_lda(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C679u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C679u,3u,0x02u,0xC67Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C67Cu:
    if(m==0u&&x==1u&&e==0u){ /* A9 16 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C67Cu,3u,0x00u,0xC67Fu);
      sc_v11_op_lda(r,0x0016u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C67Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C67Fu,3u,0x02u,0xC682u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C682u:
    if(m==0u&&x==1u&&e==0u){ /* A9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C682u,3u,0x00u,0xC685u);
      sc_v11_op_lda(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C685u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C685u,3u,0x02u,0xC688u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C688u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C688u,2u,0x20u,0xC68Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C68Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C68Au,3u,0x00u,0xC68Du);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C68Du:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C68Du,2u,0x00u,0xC68Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xC68Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C68Fu:
    if(m==0u&&x==1u&&e==0u){ /* 20 07 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C68Fu,3u,0xC8u,0xC692u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC691u))return 0;c->pc=0xC807u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C692u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C692u,4u,0x00u,0xC696u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC695u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C692u,4u,0x00u,0xC696u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC695u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 A9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C692u,4u,0x00u,0xC696u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC695u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C696u:
    if(m==0u&&x==0u&&e==0u){ /* 22 2A 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C696u,4u,0x00u,0xC69Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC699u))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 2A 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C696u,4u,0x00u,0xC69Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC699u))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 2A 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C696u,4u,0x00u,0xC69Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC699u))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C69Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 25 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Au,3u,0x8Fu,0xC69Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Cu))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 25 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Au,3u,0x8Fu,0xC69Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Cu))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 25 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Au,3u,0x8Fu,0xC69Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Cu))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C69Du:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Du,1u,0x60u,0xC69Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Du,1u,0x60u,0xC69Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Du,1u,0x60u,0xC69Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C69Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 55 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Eu,3u,0x55u,0xC6A1u);
      sc_v11_op_lda(r,0x5555u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 55 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Eu,3u,0x55u,0xC6A1u);
      sc_v11_op_lda(r,0x5555u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6A1u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 10 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6A1u,4u,0x7Eu,0xC6A5u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2210u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 10 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6A1u,4u,0x7Eu,0xC6A5u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2210u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6A5u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 12 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6A5u,4u,0x7Eu,0xC6A9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2212u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 12 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6A5u,4u,0x7Eu,0xC6A9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2212u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6A9u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 14 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6A9u,4u,0x7Eu,0xC6ADu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2214u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 14 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6A9u,4u,0x7Eu,0xC6ADu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2214u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6ADu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6ADu,4u,0x7Eu,0xC6B1u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2202u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6ADu,4u,0x7Eu,0xC6B1u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2202u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6B1u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6B1u,4u,0x7Eu,0xC6B5u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2204u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6B1u,4u,0x7Eu,0xC6B5u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2204u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6B5u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 06 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6B5u,4u,0x7Eu,0xC6B9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2206u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 06 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6B5u,4u,0x7Eu,0xC6B9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2206u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6B9u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6B9u,4u,0x7Eu,0xC6BDu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2208u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6B9u,4u,0x7Eu,0xC6BDu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2208u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6BDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6BDu,3u,0x55u,0xC6C0u);
      sc_v11_op_lda(r,0x5500u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6BDu,3u,0x55u,0xC6C0u);
      sc_v11_op_lda(r,0x5500u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6C0u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C0u,4u,0x7Eu,0xC6C4u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C0u,4u,0x7Eu,0xC6C4u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6C4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C4u,3u,0x8Fu,0xC6C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC6C6u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C4u,3u,0x8Fu,0xC6C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC6C6u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6C7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C7u,1u,0x60u,0xC6C8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C7u,1u,0x60u,0xC6C8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C7u,1u,0x60u,0xC6C8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C7u,1u,0x60u,0xC6C8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6C8u:
    if(m==0u&&x==1u&&e==0u){ /* 20 CC C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C8u,3u,0xC6u,0xC6CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC6CAu))return 0;c->pc=0xC6CCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 CC C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C8u,3u,0xC6u,0xC6CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC6CAu))return 0;c->pc=0xC6CCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CC C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6C8u,3u,0xC6u,0xC6CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC6CAu))return 0;c->pc=0xC6CCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6CBu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6CBu,1u,0x6Bu,0xC6CCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6CBu,1u,0x6Bu,0xC6CCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6CBu,1u,0x6Bu,0xC6CCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6CCu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6CCu,2u,0x30u,0xC6CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6CCu,2u,0x30u,0xC6CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6CCu,2u,0x30u,0xC6CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6D4u:
    if(m==0u&&x==1u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6D4u,3u,0x00u,0xC6D7u);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6D4u,2u,0x1Fu,0xC6D6u);
      sc_v11_op_lda(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6D4u,2u,0x1Fu,0xC6D6u);
      sc_v11_op_lda(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6D7u:
    if(m==0u&&x==1u&&e==0u){ /* 8D AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6D7u,3u,0x01u,0xC6DAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01AFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6DAu:
    if(m==0u&&x==1u&&e==0u){ /* AD B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6DAu,3u,0x01u,0xC6DDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6DAu,3u,0x01u,0xC6DDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01B1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6DAu,3u,0x01u,0xC6DDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01B1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6DDu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6DDu,2u,0x20u,0xC6DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6DDu,2u,0x20u,0xC6DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6DDu,2u,0x20u,0xC6DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6DFu:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6DFu,1u,0x48u,0xC6E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6E0u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6E0u,2u,0xB3u,0xC6E2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6E2u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6E2u,2u,0x7Fu,0xC6E4u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6E4u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6E4u,2u,0xB1u,0xC6E6u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6E6u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6E6u,1u,0x68u,0xC6E7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6E7u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 02 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6E7u,4u,0x00u,0xC6EBu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6EBu:
    if(m==1u&&x==1u&&e==0u){ /* A9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6EBu,2u,0x20u,0xC6EDu);
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6EDu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 03 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6EDu,4u,0x00u,0xC6F1u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6F1u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6F1u,1u,0x48u,0xC6F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6F2u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6F2u,1u,0x68u,0xC6F3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6F3u:
    if(m==1u&&x==1u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6F3u,1u,0xEAu,0xC6F4u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6F4u:
    if(m==1u&&x==1u&&e==0u){ /* AF 17 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6F4u,4u,0x00u,0xC6F8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6F8u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6F8u,1u,0xEBu,0xC6F9u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6F9u:
    if(m==1u&&x==1u&&e==0u){ /* AF 16 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6F9u,4u,0x00u,0xC6FDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6FDu:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6FDu,1u,0x48u,0xC6FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C6FEu:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C6FEu,2u,0xB3u,0xC700u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C700u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C700u,2u,0xB1u,0xC702u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C702u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C702u,1u,0x68u,0xC703u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C703u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C703u,2u,0x20u,0xC705u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C705u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C705u,1u,0x18u,0xC706u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C706u:
    if(m==0u&&x==1u&&e==0u){ /* 6D AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C706u,3u,0x01u,0xC709u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01AFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C709u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C709u,1u,0x0Au,0xC70Au);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C70Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D BB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C70Au,3u,0x01u,0xC70Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C70Du:
    if(m==0u&&x==1u&&e==0u){ /* AD AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C70Du,3u,0x01u,0xC710u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01AFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C710u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C710u,1u,0x18u,0xC711u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C711u:
    if(m==0u&&x==1u&&e==0u){ /* 6D BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C711u,3u,0x01u,0xC714u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C714u:
    if(m==0u&&x==1u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C714u,3u,0x01u,0xC717u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C717u:
    if(m==0u&&x==1u&&e==0u){ /* AD B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C717u,3u,0x01u,0xC71Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C71Au:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C71Au,1u,0x18u,0xC71Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C71Bu:
    if(m==0u&&x==1u&&e==0u){ /* 6D BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C71Bu,3u,0x01u,0xC71Eu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C71Eu:
    if(m==0u&&x==1u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C71Eu,3u,0x01u,0xC721u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C721u:
    if(m==0u&&x==1u&&e==0u){ /* 20 72 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C721u,3u,0xC7u,0xC724u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC723u))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C724u:
    if(m==0u&&x==1u&&e==0u){ /* AE BB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C724u,3u,0x01u,0xC727u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01BBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE BB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C724u,3u,0x01u,0xC727u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE BB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C724u,3u,0x01u,0xC727u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01BBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C727u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C727u,3u,0x01u,0xC72Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C727u,3u,0x01u,0xC72Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C727u,3u,0x01u,0xC72Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C72Au:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C72Au,4u,0x7Eu,0xC72Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C72Au,4u,0x7Eu,0xC72Eu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2840u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C72Au,4u,0x7Eu,0xC72Eu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2840u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C72Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C72Eu,3u,0x01u,0xC731u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C72Eu,3u,0x01u,0xC731u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C72Eu,3u,0x01u,0xC731u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C731u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C731u,4u,0x7Eu,0xC735u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3040u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C731u,4u,0x7Eu,0xC735u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E3040u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C731u,4u,0x7Eu,0xC735u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E3040u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C735u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C735u,3u,0x01u,0xC738u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C735u,3u,0x01u,0xC738u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C735u,3u,0x01u,0xC738u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C738u:
    if(m==0u&&x==1u&&e==0u){ /* 30 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C738u,2u,0x1Fu,0xC73Au);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC759u;}
      if(c->pc!=0xC73Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC73Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C738u,2u,0x1Fu,0xC73Au);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC759u;}
      if(c->pc!=0xC73Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC73Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C738u,2u,0x1Fu,0xC73Au);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC759u;}
      if(c->pc!=0xC73Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC73Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C73Au:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C73Au,3u,0x03u,0xC73Du);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C73Au,2u,0xFFu,0xC73Cu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C73Au,2u,0xFFu,0xC73Cu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C73Cu:
    if(m==1u&&x==0u&&e==0u){ /* 03 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C73Cu,2u,0xC9u,0xC73Eu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xC9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C73Cu,2u,0xC9u,0xC73Eu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xC9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C73Du:
    if(m==0u&&x==1u&&e==0u){ /* C9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C73Du,3u,0x00u,0xC740u);
      sc_v11_op_compare(r,c->a,0x0084u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C73Eu:
    if(m==1u&&x==0u&&e==0u){ /* 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C73Eu,2u,0x00u,0xC740u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C73Eu,2u,0x00u,0xC740u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C740u:
    if(m==0u&&x==1u&&e==0u){ /* D0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C740u,2u,0x17u,0xC742u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC759u;}
      if(c->pc!=0xC742u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC742u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C740u,2u,0x17u,0xC742u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC759u;}
      if(c->pc!=0xC742u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC742u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C740u,2u,0x17u,0xC742u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC759u;}
      if(c->pc!=0xC742u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC742u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C742u:
    if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C742u,1u,0xDAu,0xC743u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C742u,1u,0xDAu,0xC743u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C742u,1u,0xDAu,0xC743u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C743u:
    if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C743u,1u,0x8Au,0xC744u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C743u,1u,0x8Au,0xC744u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C743u,1u,0x8Au,0xC744u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C744u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C744u,1u,0x18u,0xC745u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C744u,1u,0x18u,0xC745u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C744u,1u,0x18u,0xC745u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C745u:
    if(m==0u&&x==1u&&e==0u){ /* 69 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C745u,3u,0x00u,0xC748u);
      sc_v11_op_adc(r,0x0042u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C745u,2u,0x42u,0xC747u);
      sc_v11_op_adc(r,0x0042u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C745u,2u,0x42u,0xC747u);
      sc_v11_op_adc(r,0x0042u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C748u:
    if(m==0u&&x==1u&&e==0u){ /* C9 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C748u,3u,0x08u,0xC74Bu);
      sc_v11_op_compare(r,c->a,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C74Bu:
    if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C74Bu,2u,0x03u,0xC74Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC750u;}
      if(c->pc!=0xC74Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC74Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C74Du:
    if(m==0u&&x==1u&&e==0u){ /* E9 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C74Du,3u,0x08u,0xC750u);
      sc_v11_op_sbc(r,0x0800u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C750u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C750u,1u,0xAAu,0xC751u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C751u:
    if(m==0u&&x==1u&&e==0u){ /* A9 76 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C751u,3u,0x13u,0xC754u);
      sc_v11_op_lda(r,0x1376u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C754u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C754u,4u,0x7Eu,0xC758u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C758u:
    if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C758u,1u,0xFAu,0xC759u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C759u:
    if(m==0u&&x==1u&&e==0u){ /* CE AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C759u,3u,0x01u,0xC75Cu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01AFu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C759u,3u,0x01u,0xC75Cu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01AFu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C759u,3u,0x01u,0xC75Cu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01AFu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C75Cu:
    if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C75Cu,2u,0x03u,0xC75Eu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC761u;}
      if(c->pc!=0xC75Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC75Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C75Cu,2u,0x03u,0xC75Eu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC761u;}
      if(c->pc!=0xC75Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC75Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C75Cu,2u,0x03u,0xC75Eu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC761u;}
      if(c->pc!=0xC75Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC75Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C75Eu:
    if(m==0u&&x==1u&&e==0u){ /* 4C DA C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C75Eu,3u,0xC6u,0xC761u);
      c->pc=0xC6DAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C DA C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C75Eu,3u,0xC6u,0xC761u);
      c->pc=0xC6DAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C DA C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C75Eu,3u,0xC6u,0xC761u);
      c->pc=0xC6DAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C761u:
    if(m==0u&&x==1u&&e==0u){ /* CE B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C761u,3u,0x01u,0xC764u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01B1u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C761u,3u,0x01u,0xC764u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01B1u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C761u,3u,0x01u,0xC764u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01B1u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C764u:
    if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C764u,2u,0x03u,0xC766u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC769u;}
      if(c->pc!=0xC766u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC766u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C764u,2u,0x03u,0xC766u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC769u;}
      if(c->pc!=0xC766u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC766u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C764u,2u,0x03u,0xC766u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC769u;}
      if(c->pc!=0xC766u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC766u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C766u:
    if(m==0u&&x==1u&&e==0u){ /* 4C D4 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C766u,3u,0xC6u,0xC769u);
      c->pc=0xC6D4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C D4 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C766u,3u,0xC6u,0xC769u);
      c->pc=0xC6D4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C D4 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C766u,3u,0xC6u,0xC769u);
      c->pc=0xC6D4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C769u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C769u,2u,0x20u,0xC76Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C769u,2u,0x20u,0xC76Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C769u,2u,0x20u,0xC76Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C76Bu:
    if(m==1u&&x==1u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C76Bu,2u,0xBBu,0xC76Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C76Du:
    if(m==1u&&x==1u&&e==0u){ /* 09 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C76Du,2u,0x04u,0xC76Fu);
      sc_v11_op_ora(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C76Fu:
    if(m==1u&&x==1u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C76Fu,2u,0xBBu,0xC771u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C771u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C771u,1u,0x60u,0xC772u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C772u:

    if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C772u,2u,0x10u,0xC774u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7C2u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C2u,3u,0x01u,0xC7C5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C2u,3u,0x01u,0xC7C5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x013Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C2u,3u,0x01u,0xC7C5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x013Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7C5u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C5u,1u,0x68u,0xC7C6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C5u,1u,0x68u,0xC7C6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C5u,1u,0x68u,0xC7C6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7C6u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C6u,1u,0x48u,0xC7C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C6u,1u,0x48u,0xC7C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C6u,1u,0x48u,0xC7C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7C7u:
    if(m==0u&&x==1u&&e==0u){ /* 20 ED C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C7u,3u,0xC7u,0xC7CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7C9u))return 0;c->pc=0xC7EDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 ED C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C7u,3u,0xC7u,0xC7CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7C9u))return 0;c->pc=0xC7EDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 ED C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7C7u,3u,0xC7u,0xC7CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7C9u))return 0;c->pc=0xC7EDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7CAu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CAu,3u,0x01u,0xC7CDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CAu,3u,0x01u,0xC7CDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x013Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CAu,3u,0x01u,0xC7CDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x013Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7CDu:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CDu,1u,0x68u,0xC7CEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CDu,1u,0x68u,0xC7CEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CDu,1u,0x68u,0xC7CEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7CEu:
    if(m==0u&&x==1u&&e==0u){ /* 20 FD C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CEu,3u,0xC7u,0xC7D1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7D0u))return 0;c->pc=0xC7FDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FD C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CEu,3u,0xC7u,0xC7D1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7D0u))return 0;c->pc=0xC7FDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FD C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7CEu,3u,0xC7u,0xC7D1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7D0u))return 0;c->pc=0xC7FDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7D1u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 41 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7D1u,3u,0x01u,0xC7D4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0141u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 41 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7D1u,3u,0x01u,0xC7D4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0141u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 41 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7D1u,3u,0x01u,0xC7D4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0141u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7D4u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7D4u,1u,0x60u,0xC7D5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7D4u,1u,0x60u,0xC7D5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7D4u,1u,0x60u,0xC7D5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7EDu:
    if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EDu,1u,0xDAu,0xC7EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EDu,1u,0xDAu,0xC7EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EDu,1u,0xDAu,0xC7EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7EEu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EEu,1u,0x0Au,0xC7EFu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EEu,1u,0x0Au,0xC7EFu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EEu,1u,0x0Au,0xC7EFu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7EFu:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EFu,1u,0xAAu,0xC7F0u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EFu,1u,0xAAu,0xC7F0u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7EFu,1u,0xAAu,0xC7F0u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7F0u:
    if(m==0u&&x==1u&&e==0u){ /* BF 2D CF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F0u,4u,0x02u,0xC7F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CF2Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 2D CF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F0u,4u,0x02u,0xC7F4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x02CF2Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 2D CF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F0u,4u,0x02u,0xC7F4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x02CF2Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7F4u:
    if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F4u,1u,0xFAu,0xC7F5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F4u,1u,0xFAu,0xC7F5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F4u,1u,0xFAu,0xC7F5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7F5u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F5u,1u,0x60u,0xC7F6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F5u,1u,0x60u,0xC7F6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7F5u,1u,0x60u,0xC7F6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7FDu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FDu,1u,0x0Au,0xC7FEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FDu,1u,0x0Au,0xC7FEu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FDu,1u,0x0Au,0xC7FEu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7FEu:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FEu,1u,0xAAu,0xC7FFu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FEu,1u,0xAAu,0xC7FFu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FEu,1u,0xAAu,0xC7FFu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C7FFu:
    if(m==0u&&x==1u&&e==0u){ /* BF 25 DE 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FFu,4u,0x02u,0xC803u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02DE25u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 25 DE 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FFu,4u,0x02u,0xC803u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x02DE25u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 25 DE 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C7FFu,4u,0x02u,0xC803u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x02DE25u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
