/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00021(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00842Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 49 84 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00842Au,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x842Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x842Cu))return 0;c->pc=0x8449u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00842Du:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00842Du,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x842Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00842Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 49 84 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00842Eu,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8431u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8430u))return 0;c->pc=0x8449u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008431u:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008431u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8432u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008432u:
    if(m==0u&&x==0u&&e==0u){ /* 20 36 84 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008432u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8435u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8434u))return 0;c->pc=0x8436u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008435u:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008435u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8436u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008436u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008436u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8438u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008438u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008438u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x843Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00843Bu:
    if(m==0u&&x==0u&&e==0u){ /* CD A1 0B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00843Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x843Eu;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00843Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 09 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00843Eu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8440u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8449u;}
      if(c->pc!=0x8440u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8440u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008440u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008440u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8443u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008443u:
    if(m==0u&&x==0u&&e==0u){ /* CD A3 0B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008443u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8446u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA3u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008446u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008446u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8448u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8449u;}
      if(c->pc!=0x8448u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8448u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008448u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008448u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8449u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008449u:
    if(m==1u&&x==0u&&e==0u){ /* AD D7 01 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008449u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x844Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01D7u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00844Cu:
    if(m==1u&&x==0u&&e==0u){ /* F0 5A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00844Cu,2u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x844Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x84A8u;}
      if(c->pc!=0x844Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x844Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00844Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00844Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8450u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008450u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008450u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8453u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008453u:
    if(m==0u&&x==0u&&e==0u){ /* 8D A1 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008453u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8456u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA1u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008456u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008456u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8459u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008459u:
    if(m==0u&&x==0u&&e==0u){ /* 8D A3 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008459u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x845Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA3u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00845Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 6C 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00845Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x845Fu;
      sc_v11_op_lda(r,0x006Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00845Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00845Fu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8462u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008462u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5D 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008462u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8465u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008465u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5F 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008465u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8468u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008468u:
    if(m==0u&&x==0u&&e==0u){ /* A9 07 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008468u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x846Bu;
      sc_v11_op_lda(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00846Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00846Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x846Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00846Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00846Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8470u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008470u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008470u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8473u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008473u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008473u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8475u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8475u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008475u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008475u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8477u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008477u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008477u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8479u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008479u:
    if(m==1u&&x==0u&&e==0u){ /* A2 9D 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008479u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x847Cu;
      sc_v11_op_ldx(r,0x0B9Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00847Cu:
    if(m==1u&&x==0u&&e==0u){ /* 20 EF 8F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00847Cu,3u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x847Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x847Eu))return 0;c->pc=0x8FEFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00847Fu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00847Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8482u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008482u:
    if(m==1u&&x==0u&&e==0u){ /* 9B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008482u,1u);r->open_bus=0x9Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8483u;
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008483u:
    if(m==1u&&x==0u&&e==0u){ /* 64 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008483u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8485u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008485u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008485u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8486u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008486u:
    if(m==1u&&x==0u&&e==0u){ /* B9 79 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008486u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8489u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0079u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008489u:
    if(m==1u&&x==0u&&e==0u){ /* 05 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008489u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x848Bu;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00848Bu:
    if(m==1u&&x==0u&&e==0u){ /* F0 10 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00848Bu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x848Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x849Du;}
      if(c->pc!=0x848Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x848Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00848Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00848Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x848Fu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00848Fu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00848Fu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8490u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008490u:
    if(m==1u&&x==0u&&e==0u){ /* B9 79 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008490u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8493u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0079u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008493u:
    if(m==1u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008493u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8494u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008494u:
    if(m==1u&&x==0u&&e==0u){ /* B9 E1 85 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008494u,3u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8497u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x85E1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008497u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 72 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008497u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x849Bu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2072u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00849Bu:
    if(m==1u&&x==0u&&e==0u){ /* E6 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00849Bu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x849Du;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00849Du:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00849Du,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x849Eu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00849Eu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00849Eu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x849Fu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00849Fu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00849Fu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84A0u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084A0u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084A0u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84A1u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084A1u:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084A1u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84A2u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084A2u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084A2u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84A3u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084A3u:
    if(m==1u&&x==0u&&e==0u){ /* C0 06 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084A3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84A6u;
      sc_v11_op_compare(r,c->y,0x0006u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084A6u:
    if(m==1u&&x==0u&&e==0u){ /* D0 DD Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084A6u,2u);r->open_bus=0xDDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84A8u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8485u;}
      if(c->pc!=0x84A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084A8u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084A8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84A9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084A9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 AD 84 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084A9u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84ACu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84ABu))return 0;c->pc=0x84ADu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 AD 84 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084A9u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84ACu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84ABu))return 0;c->pc=0x84ADu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084ACu:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084ACu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84ADu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084ADu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084ADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84AFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084ADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84AFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084AFu:
    if(m==0u&&x==0u&&e==0u){ /* 9C B9 0B Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084AFu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84B2u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB9u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C B9 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084AFu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84B2u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB9u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084B2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084B2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84B5u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084B2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84B5u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084B5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 08 04 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084B5u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84B8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0408u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 08 04 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084B5u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84B8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0408u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084B8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084B8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84BBu;
      sc_v11_op_lda(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 10 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084B8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84BBu;
      sc_v11_op_lda(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084BBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084BBu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84BEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084BBu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84BEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084BEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5D 02 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084BEu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84C1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 5D 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084BEu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84C1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084C1u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5F 02 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084C1u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84C4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 5F 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084C1u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84C4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084C4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084C4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84C7u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084C4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84C7u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084C7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084C7u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84CAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084C7u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84CAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084CAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084CAu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84CCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084CAu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84CCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084CCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084CCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84CFu;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084CCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84CFu;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084CFu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084CFu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84D1u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x84D1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084CFu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84D1u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x84D1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084D1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084D1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84D3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084D1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84D3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084D3u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084D3u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84D5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084D3u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84D5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084D5u:
    if(m==1u&&x==0u&&e==0u){ /* A2 A5 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084D5u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84D8u;
      sc_v11_op_ldx(r,0x0BA5u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084D8u:
    if(m==1u&&x==0u&&e==0u){ /* 20 EF 8F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084D8u,3u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84DBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84DAu))return 0;c->pc=0x8FEFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084DBu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084DBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84DEu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084DEu:
    if(m==1u&&x==0u&&e==0u){ /* 9B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084DEu,1u);r->open_bus=0x9Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84DFu;
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084DFu:
    if(m==1u&&x==0u&&e==0u){ /* 64 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084DFu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84E1u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084E1u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084E1u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84E2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084E2u:
    if(m==1u&&x==0u&&e==0u){ /* B9 79 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084E2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84E5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0079u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084E5u:
    if(m==1u&&x==0u&&e==0u){ /* 05 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084E5u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84E7u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084E7u:
    if(m==1u&&x==0u&&e==0u){ /* F0 10 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084E7u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84E9u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x84F9u;}
      if(c->pc!=0x84E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084F9u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084F9u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84FAu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084FAu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084FAu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84FBu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084FBu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084FBu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84FCu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084FCu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084FCu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84FDu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084FDu:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084FDu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84FEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084FEu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084FEu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x84FFu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0084FFu:
    if(m==1u&&x==0u&&e==0u){ /* C0 06 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0084FFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8502u;
      sc_v11_op_compare(r,c->y,0x0006u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008502u:
    if(m==1u&&x==0u&&e==0u){ /* D0 DD Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008502u,2u);r->open_bus=0xDDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8504u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x84E1u;}
      if(c->pc!=0x8504u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8504u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008504u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008504u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8506u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008506u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008506u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8508u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008508u:
    if(m==1u&&x==0u&&e==0u){ /* AE 53 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008508u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x850Bu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00850Bu:
    if(m==1u&&x==0u&&e==0u){ /* 86 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00850Bu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x850Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00850Du:
    if(m==1u&&x==0u&&e==0u){ /* 64 81 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00850Du,2u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x850Fu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x81u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00850Fu:
    if(m==1u&&x==0u&&e==0u){ /* A2 7F 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00850Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8512u;
      sc_v11_op_ldx(r,0x007Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008512u:
    if(m==1u&&x==0u&&e==0u){ /* 20 EF 8F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008512u,3u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8515u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8514u))return 0;c->pc=0x8FEFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008515u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008515u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8518u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008518u:
    if(m==1u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008518u,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8519u;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008519u:
    if(m==1u&&x==0u&&e==0u){ /* 64 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008519u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x851Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00851Bu:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00851Bu,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x851Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00851Cu:
    if(m==1u&&x==0u&&e==0u){ /* B9 7B 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00851Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x851Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x007Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00851Fu:
    if(m==1u&&x==0u&&e==0u){ /* 05 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00851Fu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8521u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008521u:
    if(m==1u&&x==0u&&e==0u){ /* F0 10 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008521u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8523u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8533u;}
      if(c->pc!=0x8523u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8523u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008523u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008523u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8525u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008525u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008525u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8526u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008526u:
    if(m==1u&&x==0u&&e==0u){ /* B9 7B 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008526u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8529u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x007Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008529u:
    if(m==1u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008529u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x852Au;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00852Au:
    if(m==1u&&x==0u&&e==0u){ /* B9 E1 85 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00852Au,3u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x852Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x85E1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00852Du:
    if(m==1u&&x==0u&&e==0u){ /* 9F 2E 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00852Du,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8531u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E202Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008531u:
    if(m==1u&&x==0u&&e==0u){ /* E6 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008531u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8533u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008533u:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008533u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8534u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008534u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008534u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8535u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008535u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008535u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8536u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008536u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008536u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8537u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008537u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008537u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8538u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008538u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008538u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8539u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008539u:
    if(m==1u&&x==0u&&e==0u){ /* C0 04 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008539u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x853Cu;
      sc_v11_op_compare(r,c->y,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00853Cu:
    if(m==1u&&x==0u&&e==0u){ /* D0 DD Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00853Cu,2u);r->open_bus=0xDDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x853Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x851Bu;}
      if(c->pc!=0x853Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x853Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00853Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00853Eu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8540u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008540u:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008540u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8543u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008543u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008543u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8544u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008544u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 55 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008544u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8547u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008547u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008547u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8548u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008548u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008548u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8549u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008549u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008549u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x854Cu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00854Cu:
    if(m==0u&&x==0u&&e==0u){ /* B9 82 85 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00854Cu,3u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x854Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8582u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00854Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00854Fu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8553u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2042u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008553u:
    if(m==0u&&x==0u&&e==0u){ /* B9 84 85 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008553u,3u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8556u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8584u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008556u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 46 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008556u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x855Au;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2046u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00855Au:
    if(m==0u&&x==0u&&e==0u){ /* B9 86 85 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00855Au,3u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x855Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8586u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00855Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 4A 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00855Du,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8561u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E204Au),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008561u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008561u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8563u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008563u:
    if(m==1u&&x==0u&&e==0u){ /* AE BB 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008563u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8566u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BBBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008566u:
    if(m==1u&&x==0u&&e==0u){ /* BD D0 85 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008566u,3u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8569u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x85D0u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008569u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 21 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008569u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x856Du;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2021u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00856Du:
    if(m==1u&&x==0u&&e==0u){ /* AE BD 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00856Du,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8570u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BBDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008570u:
    if(m==1u&&x==0u&&e==0u){ /* BD D0 85 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008570u,3u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8573u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x85D0u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008573u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 25 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008573u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8577u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2025u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008577u:
    if(m==1u&&x==0u&&e==0u){ /* AE BF 0B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008577u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x857Au;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BBFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00857Au:
    if(m==1u&&x==0u&&e==0u){ /* BD D0 85 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00857Au,3u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x857Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x85D0u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00857Du:
    if(m==1u&&x==0u&&e==0u){ /* 8F 29 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00857Du,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8581u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2029u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008581u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008581u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8582u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0085EBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0085EBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x85EDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0085EDu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0085EDu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x85EFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0085EFu:
    if(m==1u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0085EFu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x85F1u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0085F1u:
    if(m==1u&&x==0u&&e==0u){ /* C9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0085F1u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x85F3u;
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0085F3u:
    if(m==1u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0085F3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x85F5u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x85F6u;}
      if(c->pc!=0x85F5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85F5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0085F5u:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0085F5u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x85F6u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008690u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008690u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8692u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008692u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008692u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8694u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008694u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008694u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8697u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008697u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 80 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008697u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x869Au;
      sc_v11_op_ldy(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00869Au:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00869Au,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x869Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00869Du:
    if(m==1u&&x==0u&&e==0u){ /* 8E 18 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00869Du,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86A0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2118u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086A0u:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086A0u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86A1u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086A1u:
    if(m==1u&&x==0u&&e==0u){ /* D0 FA Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086A1u,2u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86A3u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x869Du;}
      if(c->pc!=0x86A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086A3u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086A3u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86A4u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086A4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086A4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86A6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086A6u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086A6u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86A8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086A8u:
    if(m==1u&&x==0u&&e==0u){ /* A2 FC 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086A8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86ABu;
      sc_v11_op_ldx(r,0x00FCu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086ABu:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086ABu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86ADu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086ADu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086ADu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86B1u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086B1u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 21 7E Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086B1u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86B5u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2100u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086B5u:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086B5u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86B6u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086B6u:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086B6u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86B7u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086B7u:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086B7u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86B8u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086B8u:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086B8u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86B9u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086B9u:
    if(m==1u&&x==0u&&e==0u){ /* 10 F2 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086B9u,2u);r->open_bus=0xF2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86BBu;
      if((c->p&SC_FLAG_N)==0u){c->pc=0x86ADu;}
      if(c->pc!=0x86BBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86BBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086BBu:
    if(m==1u&&x==0u&&e==0u){ /* A2 1F 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086BBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86BEu;
      sc_v11_op_ldx(r,0x001Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086BEu:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086BEu,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86C0u;
      sc_v11_op_lda(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086C0u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 22 7E Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086C0u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86C4u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086C4u:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086C4u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86C5u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086C5u:
    if(m==1u&&x==0u&&e==0u){ /* 10 F9 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086C5u,2u);r->open_bus=0xF9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86C7u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0x86C0u;}
      if(c->pc!=0x86C7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86C7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086C7u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086C7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86C8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086F6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086F6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86F8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086F8u:
    if(m==1u&&x==0u&&e==0u){ /* A5 D1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086F8u,2u);r->open_bus=0xD1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86FAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086FAu:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086FAu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86FCu;
      sc_v11_op_and(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086FCu:
    if(m==1u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086FCu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x86FEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8704u;}
      if(c->pc!=0x86FEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86FEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0086FEu:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0086FEu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8700u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008700u:
    if(m==1u&&x==0u&&e==0u){ /* 09 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008700u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8702u;
      sc_v11_op_ora(r,0x000Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008702u:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008702u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8704u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008704u:
    if(m==1u&&x==0u&&e==0u){ /* E6 D1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008704u,2u);r->open_bus=0xD1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8706u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xD1u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008706u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008706u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8707u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008707u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008707u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8709u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008709u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008709u,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x870Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00870Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00870Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x870Eu;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00870Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00870Eu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8710u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8718u;}
      if(c->pc!=0x8710u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8710u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008718u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E3 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008718u,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x871Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00871Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00871Au,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x871Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8724u;}
      if(c->pc!=0x871Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x871Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00871Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00871Cu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x871Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00871Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00871Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8722u;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008722u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008722u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8724u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8732u;}
      if(c->pc!=0x8724u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8724u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008732u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008732u,2u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8734u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008734u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008734u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8735u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008735u:
    if(m==0u&&x==0u&&e==0u){ /* C9 18 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008735u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8738u;
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008738u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008738u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x873Au;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x873Du;}
      if(c->pc!=0x873Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x873Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00873Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2593; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00873Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x873Du;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00873Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 E1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00873Du,2u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x873Fu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE1u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00873Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00873Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8740u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008740u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008740u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8741u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008741u:
    if(m==0u&&x==0u&&e==0u){ /* FC 45 87 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008741u,3u);r->open_bus=0x87u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8744u;
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x8745u+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0x8743u))return 0;c->pc=t;}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008744u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008744u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8745u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008744u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8745u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008775u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E5 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008775u,2u);r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8777u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE5u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008777u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008777u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x877Au;
      sc_v11_op_and(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00877Au:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00877Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x877Bu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00877Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00877Bu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x877Cu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00877Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00877Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x877Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00877Eu:
    if(m==1u&&x==0u&&e==0u){ /* A0 50 39 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00877Eu,3u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8781u;
      sc_v11_op_ldy(r,0x3950u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008781u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 16 21 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008781u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8784u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008784u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008784u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8786u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008786u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008786u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8789u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008789u:
    if(m==1u&&x==0u&&e==0u){ /* BC A0 87 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008789u,3u);r->open_bus=0x87u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x878Cu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x87A0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00878Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8C 12 43 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00878Cu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x878Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00878Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 05 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00878Fu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8791u;
      sc_v11_op_lda(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008791u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008791u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8794u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008794u:
    if(m==1u&&x==0u&&e==0u){ /* A0 60 06 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008794u,3u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8797u;
      sc_v11_op_ldy(r,0x0660u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008797u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 15 43 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008797u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x879Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00879Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00879Au,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x879Cu;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00879Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00879Cu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x879Fu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00879Fu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00879Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87A0u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087A8u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E5 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087A8u,2u);r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87AAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE5u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087AAu:
    if(m==0u&&x==0u&&e==0u){ /* E6 E5 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087AAu,2u);r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87ACu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xE5u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087ACu:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087ACu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87AFu;
      sc_v11_op_and(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087AFu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087AFu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87B0u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087B0u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087B0u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87B1u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087B1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087B1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87B3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087B3u:
    if(m==1u&&x==0u&&e==0u){ /* A0 80 3C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087B3u,3u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87B6u;
      sc_v11_op_ldy(r,0x3C80u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087B6u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 16 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087B6u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87B9u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087B9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087B9u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87BBu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087BBu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087BBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87BEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087BEu:
    if(m==1u&&x==0u&&e==0u){ /* BC D5 87 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087BEu,3u);r->open_bus=0x87u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87C1u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x87D5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087C1u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 12 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087C1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87C4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087C4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087C4u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87C6u;
      sc_v11_op_lda(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087C6u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087C6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87C9u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087C9u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 07 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087C9u,3u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87CCu;
      sc_v11_op_ldy(r,0x0700u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087CCu:
    if(m==1u&&x==0u&&e==0u){ /* 8C 15 43 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087CCu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87CFu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087CFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087CFu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87D1u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087D1u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087D1u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87D4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087D4u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087D4u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87D5u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087DDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 E9 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087DDu,2u);r->open_bus=0xE9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87DFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087DFu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087DFu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87E0u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087E0u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087E0u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87E1u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087E1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087E1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87E3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087E3u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 36 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087E3u,3u);r->open_bus=0x36u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87E6u;
      sc_v11_op_ldy(r,0x3600u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087E6u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 16 21 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087E6u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87E9u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087E9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087E9u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87EBu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087EBu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087EBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87EEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087EEu:
    if(m==1u&&x==0u&&e==0u){ /* BC 10 88 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087EEu,3u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87F1u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8810u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087F1u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 12 43 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087F1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87F4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087F4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 05 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087F4u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87F6u;
      sc_v11_op_lda(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087F6u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087F6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87F9u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087F9u:
    if(m==1u&&x==0u&&e==0u){ /* A0 C0 02 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087F9u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87FCu;
      sc_v11_op_ldy(r,0x02C0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087FCu:
    if(m==1u&&x==0u&&e==0u){ /* 8C 15 43 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087FCu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x87FFu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0087FFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0087FFu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8801u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
