/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0006A(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01A8FFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A8FFu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA901u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A901u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A901u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA903u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A903u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A903u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA905u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A905u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A905u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA907u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A907u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A907u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA909u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A909u:
    if(m==0u&&x==0u&&e==0u){ /* 22 1D 8E 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A909u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA90Du;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA90Cu))return 0;
      c->pbr=0x00u;c->pc=0x8E1Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A90Du:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A90Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA90Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A90Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A90Fu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA911u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A911u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A911u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA913u;
      sc_v11_op_ora(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A913u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A913u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA915u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A915u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A915u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA917u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A917u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A917u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA918u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
