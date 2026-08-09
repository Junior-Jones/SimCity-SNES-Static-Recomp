/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00039(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00E5A5u:
    if(m==0u&&x==0u&&e==0u){ /* 09 36 37 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00E5A5u,3u);r->open_bus=0x37u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE5A8u;
      sc_v11_op_ora(r,0x3736u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00E5A8u:
    if(m==0u&&x==0u&&e==0u){ /* E9 09 35 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00E5A8u,3u);r->open_bus=0x35u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE5ABu;
      sc_v11_op_sbc(r,0x3509u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
