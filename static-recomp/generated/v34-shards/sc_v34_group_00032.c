/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00032(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00CA9Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 A1 CA Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CA9Du,3u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAA0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCA9Fu))return 0;c->pc=0xCAA1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAA0u:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAA0u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAA1u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAA1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAA1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAA3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAA3u:
    if(m==0u&&x==0u&&e==0u){ /* A2 FE 09 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAA3u,3u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAA6u;
      sc_v11_op_ldx(r,0x09FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAA6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAA6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAA9u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAA9u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAA9u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAADu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E8000u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAADu:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAADu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAAEu;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAAEu:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAAEu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAAFu;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAAFu:
    if(m==0u&&x==0u&&e==0u){ /* 10 F8 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAAFu,2u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAB1u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xCAA9u;}
      if(c->pc!=0xCAB1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCAB1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAB1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAB1u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAB2u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CADCu:
    if(m==1u&&x==1u&&e==0u){ /* 20 E0 CA Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CADCu,3u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCADFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCADEu))return 0;c->pc=0xCAE0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CADFu:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CADFu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAE0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAE0u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAE0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAE2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAE2u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAE2u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAE4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAE4u:
    if(m==1u&&x==0u&&e==0u){ /* A2 F7 86 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAE4u,3u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAE7u;
      sc_v11_op_ldx(r,0x86F7u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAE7u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAE7u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAE9u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAE9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0B Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAE9u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAEBu;
      sc_v11_op_lda(r,0x000Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAEBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAEBu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAEDu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAEDu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 10 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAEDu,3u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAF0u;
      sc_v11_op_ldx(r,0x1000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAF0u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAF0u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAF2u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAF2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAF2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAF4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAF4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAF4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAF7u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAF7u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAF7u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAF9u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCAF9u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CAF9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CAF9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCAFAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
