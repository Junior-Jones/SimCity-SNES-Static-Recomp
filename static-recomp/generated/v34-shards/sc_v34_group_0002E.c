/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0002E(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00BADAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00BADAu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBADCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00BADCu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00BADCu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBADEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00BADEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00BADEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE1u;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00BAE1u:
    if(m==0u&&x==0u&&e==0u){ /* B0 3D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00BAE1u,2u);r->open_bus=0x3Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE3u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBB20u;}
      if(c->pc!=0xBAE3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAE3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00BAE3u:
    if(m==0u&&x==0u&&e==0u){ /* AD B7 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00BAE3u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00BAE6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00BAE6u,2u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBB20u;}
      if(c->pc!=0xBAE8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAE8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00BB20u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00BB20u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB21u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
