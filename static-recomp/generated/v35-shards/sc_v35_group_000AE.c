/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000AE(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02BB9Au:
    if(m==1u&&x==1u&&e==1u){ /* A2 DB ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BB9Au,2u);r->open_bus=0xDBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB9Cu;
      sc_v11_op_ldx(r,0x00DBu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BB9Cu:
    if(m==1u&&x==1u&&e==1u){ /* C4 86 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BB9Cu,2u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB9Eu;
      sc_v11_op_compare(r,c->y,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x86u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BB9Eu:
    if(m==1u&&x==1u&&e==1u){ /* 09 A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BB9Eu,2u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA0u;
      sc_v11_op_ora(r,0x00A9u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBA0u:
    if(m==1u&&x==1u&&e==1u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBA0u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBA1u:
    if(m==1u&&x==1u&&e==1u){ /* 85 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBA1u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA3u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBA3u:
    if(m==1u&&x==1u&&e==1u){ /* A2 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBA3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA5u;
      sc_v11_op_ldx(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBF4u:
    if(m==1u&&x==1u&&e==1u){ /* A2 D8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBF4u,2u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF6u;
      sc_v11_op_ldx(r,0x00D8u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBF6u:
    if(m==1u&&x==1u&&e==1u){ /* 8A ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBF6u,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF7u;
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBF7u:
    if(m==1u&&x==1u&&e==1u){ /* 86 09 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBF7u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF9u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x09u),(uint8_t)c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBF9u:
    if(m==1u&&x==1u&&e==1u){ /* A9 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBF9u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFBu;
      sc_v11_op_lda(r,0x000Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBFBu:
    if(m==1u&&x==1u&&e==1u){ /* 85 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBFBu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFDu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BBFDu:
    if(m==1u&&x==1u&&e==1u){ /* A2 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02BBFDu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFFu;
      sc_v11_op_ldx(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
