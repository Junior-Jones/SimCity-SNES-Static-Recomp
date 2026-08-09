/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000A4(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02909Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 36 91 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02909Du,3u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x909Fu))return 0;c->pc=0x9136u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290A0u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290A0u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290A2u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290A2u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A3u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290A3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290A3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290A5u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 57 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290A5u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A8u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D57u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290A8u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290A8u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A9u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290A9u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 58 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290A9u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90ACu;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D58u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290ACu:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290ACu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90ADu;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290ADu:
    if(m==1u&&x==0u&&e==0u){ /* 4E 59 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290ADu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B0u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D59u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290B0u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290B0u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B1u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290B1u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5A 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290B1u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B4u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Au),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290B4u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290B4u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B5u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290B5u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5B 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290B5u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B8u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Bu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290B8u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290B8u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B9u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290B9u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5C 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290B9u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90BCu;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Cu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290BCu:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290BCu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90BDu;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290BDu:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5D 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290BDu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C0u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Du),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290C0u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290C0u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C1u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290C1u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5E 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290C1u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C4u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Eu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290C4u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290C4u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C5u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290C5u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 A0 7E Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290C5u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C9u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7EA000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290C9u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 57 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290C9u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90CCu;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D57u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290CCu:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290CCu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90CDu;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290CDu:
    if(m==1u&&x==0u&&e==0u){ /* 4E 58 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290CDu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D0u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D58u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290D0u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290D0u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D1u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290D1u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 59 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290D1u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D4u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D59u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290D4u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290D4u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D5u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290D5u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5A 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290D5u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D8u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Au),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290D8u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290D8u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D9u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290D9u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5B 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290D9u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90DCu;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Bu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290DCu:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290DCu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90DDu;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290DDu:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5C 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290DDu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E0u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Cu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290E0u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290E0u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E1u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290E1u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5D 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290E1u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E4u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Du),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290E4u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290E4u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E5u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290E5u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5E 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290E5u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E8u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Eu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290E8u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290E8u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E9u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290E9u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 01 A0 7E Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290E9u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90EDu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7EA001u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290EDu:
    if(m==1u&&x==0u&&e==0u){ /* 4E 57 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290EDu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F0u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D57u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290F0u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290F0u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F1u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290F1u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 58 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290F1u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F4u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D58u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290F4u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290F4u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F5u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290F5u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 59 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290F5u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F8u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D59u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290F8u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290F8u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F9u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290F9u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5A 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290F9u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90FCu;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Au),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290FCu:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290FCu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90FDu;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0290FDu:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5B 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0290FDu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9100u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Bu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029100u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029100u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9101u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029101u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5C 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029101u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9104u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Cu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029104u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029104u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9105u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029105u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5D 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029105u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9108u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Du),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029108u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029108u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9109u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029109u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5E 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029109u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x910Cu;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Eu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02910Cu:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02910Cu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x910Du;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02910Du:
    if(m==1u&&x==0u&&e==0u){ /* 9F 10 A0 7E Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02910Du,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9111u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7EA010u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029111u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 57 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029111u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9114u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D57u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029114u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029114u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9115u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029115u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 58 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029115u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9118u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D58u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029118u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029118u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9119u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029119u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 59 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029119u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x911Cu;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D59u),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02911Cu:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02911Cu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x911Du;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02911Du:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5A 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02911Du,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9120u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Au),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029120u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029120u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9121u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029121u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5B 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029121u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9124u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Bu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029124u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029124u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9125u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029125u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5C 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029125u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9128u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Cu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029128u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029128u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9129u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029129u:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5D 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029129u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x912Cu;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Du),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02912Cu:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02912Cu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x912Du;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02912Du:
    if(m==1u&&x==0u&&e==0u){ /* 4E 5E 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02912Du,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9130u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0D5Eu),8u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029130u:
    if(m==1u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029130u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9131u;
      sc_v11_op_shift_accumulator(r,8u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029131u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 11 A0 7E Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029131u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9135u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7EA011u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029135u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029135u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9136u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029136u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029136u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9138u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029138u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029138u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x913Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02913Au:
    if(m==0u&&x==1u&&e==0u){ /* AD 5F 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02913Au,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x913Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02913Du:
    if(m==0u&&x==1u&&e==0u){ /* 29 F8 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02913Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9140u;
      sc_v11_op_and(r,0x00F8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029140u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029140u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9141u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029141u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029141u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9142u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029142u:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029142u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9144u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029144u:
    if(m==0u&&x==1u&&e==0u){ /* AD 61 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029144u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9147u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029147u:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029147u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9148u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029148u:
    if(m==0u&&x==1u&&e==0u){ /* 69 12 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029148u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x914Bu;
      sc_v11_op_adc(r,0x0012u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02914Bu:
    if(m==0u&&x==1u&&e==0u){ /* 4A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02914Bu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x914Cu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02914Cu:
    if(m==0u&&x==1u&&e==0u){ /* 4A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02914Cu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x914Du;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02914Du:
    if(m==0u&&x==1u&&e==0u){ /* 4A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02914Du,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x914Eu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02914Eu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02914Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9150u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029150u:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029150u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9151u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029151u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029151u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9153u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029153u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029153u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9154u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029154u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029154u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9156u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029156u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029156u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9158u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029158u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029158u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x915Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02915Au:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02915Au,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x915Bu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02915Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02915Bu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x915Fu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02915Fu:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02915Fu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9160u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029160u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029160u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9164u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029164u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029164u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9165u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029165u:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029165u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9166u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029166u:
    if(m==1u&&x==1u&&e==0u){ /* EA Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029166u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9167u;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029167u:
    if(m==1u&&x==1u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029167u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x916Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02916Bu:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02916Bu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x916Cu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02916Cu:
    if(m==1u&&x==1u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02916Cu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9170u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029170u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029170u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9171u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029171u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029171u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9173u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029173u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029173u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9175u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029175u:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029175u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9176u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029176u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029176u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9178u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029178u:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029178u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9179u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029179u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029179u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x917Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02917Bu:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02917Bu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x917Cu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02917Cu:
    if(m==0u&&x==1u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02917Cu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x917Eu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02917Eu:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02917Eu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9180u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029180u:
    if(m==0u&&x==1u&&e==0u){ /* AD 61 0D Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029180u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9183u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029183u:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029183u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9184u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029184u:
    if(m==0u&&x==1u&&e==0u){ /* 69 12 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029184u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9187u;
      sc_v11_op_adc(r,0x0012u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029187u:
    if(m==0u&&x==1u&&e==0u){ /* 29 07 00 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029187u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x918Au;
      sc_v11_op_and(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02918Au:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02918Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x918Bu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02918Bu:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02918Bu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x918Cu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02918Cu:
    if(m==0u&&x==1u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02918Cu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x918Eu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02918Eu:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02918Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x918Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02923Fu:
    if(m==1u&&x==0u&&e==0u){ /* 20 43 92 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02923Fu,3u);r->open_bus=0x92u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9242u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9241u))return 0;c->pc=0x9243u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029242u:
    if(m==1u&&x==1u&&e==0u){ /* 6B Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029242u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9243u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029243u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029243u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9245u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029245u:
    if(m==0u&&x==0u&&e==0u){ /* A2 FE 1B Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029245u,3u);r->open_bus=0x1Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9248u;
      sc_v11_op_ldx(r,0x1BFEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029248u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029248u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x924Bu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02924Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 A4 7E Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02924Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x924Fu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7EA400u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02924Fu:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02924Fu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9250u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029250u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029250u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9251u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029251u:
    if(m==0u&&x==0u&&e==0u){ /* 10 F8 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029251u,2u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9253u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0x924Bu;}
      if(c->pc!=0x9253u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9253u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029253u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B 89 Mesen corrected gameplay frame 1575; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029253u,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9256u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9255u))return 0;c->pc=0x899Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029256u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029256u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9258u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029258u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029258u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x925Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02925Au:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02925Au,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x925Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02925Cu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02925Cu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x925Eu;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02925Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02925Eu,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9260u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029260u:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029260u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9264u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9263u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029264u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029264u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9267u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029267u:
    if(m==1u&&x==0u&&e==0u){ /* A9 20 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029267u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9269u;
      sc_v11_op_lda(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029269u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029269u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x926Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02926Cu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02926Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x926Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02926Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02926Eu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9270u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029270u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029270u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9271u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029271u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029271u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9272u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029272u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029272u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9273u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029273u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029273u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9274u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029274u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029274u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9275u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029275u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029275u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9277u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029277u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029277u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x927Au;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02927Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02927Au,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x927Cu;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02927Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02927Cu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x927Fu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02927Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02927Fu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9281u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029281u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029281u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9284u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029284u:
    if(m==1u&&x==1u&&e==0u){ /* A9 A0 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029284u,2u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9286u;
      sc_v11_op_lda(r,0x00A0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029286u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029286u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9289u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029289u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029289u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x928Bu;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02928Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02928Bu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x928Eu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02928Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02928Eu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9290u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029290u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029290u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9293u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029293u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029293u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9295u;
      sc_v11_op_lda(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029295u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029295u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9298u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029298u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029298u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x929Au;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02929Au:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02929Au,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x929Cu;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02929Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02929Cu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x929Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x92A2u;}
      if(c->pc!=0x929Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x929Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02929Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02929Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x929Fu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02929Fu:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02929Fu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92A0u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292A0u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292A0u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92A2u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x929Eu;}
      if(c->pc!=0x92A2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92A2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292A2u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292A2u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92A5u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292A5u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292A5u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92A9u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x92A8u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292A9u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292A9u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92ACu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292ACu:
    if(m==1u&&x==1u&&e==0u){ /* A9 24 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292ACu,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92AEu;
      sc_v11_op_lda(r,0x0024u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292AEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292AEu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292B1u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292B1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292B3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292B3u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B5u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292B5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292B5u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B6u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292B6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292B6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B7u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292B7u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292B7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B8u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292B8u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292B8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B9u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292B9u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292B9u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92BAu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292BAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292BAu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92BCu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292BCu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292BCu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92BFu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292BFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292BFu,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92C1u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292C1u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292C1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92C4u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292C4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292C4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92C6u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292C6u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292C6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92C9u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292C9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 A8 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292C9u,2u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92CBu;
      sc_v11_op_lda(r,0x00A8u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292CBu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292CBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92CEu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292CEu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292CEu,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92D0u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292D0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292D0u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92D3u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292D3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292D3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92D5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292D5u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292D5u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92D8u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292D8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292D8u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92DAu;
      sc_v11_op_lda(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292DAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292DAu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92DDu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292DDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292DDu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92DFu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292DFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292DFu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E1u;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292E1u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292E1u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x92E7u;}
      if(c->pc!=0x92E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292E3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292E3u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E4u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292E4u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292E4u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E5u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292E5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292E5u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92E3u;}
      if(c->pc!=0x92E7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92E7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292E7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292E7u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92EAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292EAu:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292EAu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92EEu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x92EDu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292EEu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292EEu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92F1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292F1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 28 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292F1u,2u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92F3u;
      sc_v11_op_lda(r,0x0028u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292F3u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292F3u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92F6u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292F6u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292F6u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92F8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292F8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292F8u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92FAu;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292FAu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292FAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92FBu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292FBu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292FBu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92FCu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292FCu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292FCu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92FDu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292FDu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292FDu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92FEu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292FEu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292FEu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92FFu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0292FFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0292FFu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9301u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029301u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029301u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9304u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029304u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029304u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9306u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029306u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029306u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9309u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029309u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029309u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x930Bu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02930Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02930Bu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x930Eu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02930Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 B0 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02930Eu,2u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9310u;
      sc_v11_op_lda(r,0x00B0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029310u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029310u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9313u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029313u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029313u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9315u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029315u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029315u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9318u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029318u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029318u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x931Au;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02931Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02931Au,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x931Du;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02931Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02931Du,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x931Fu;
      sc_v11_op_lda(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02931Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02931Fu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9322u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029322u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029322u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9324u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029324u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029324u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9326u;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029326u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029326u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9328u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x932Cu;}
      if(c->pc!=0x9328u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9328u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029328u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029328u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9329u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029329u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029329u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x932Au;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02932Au:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02932Au,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x932Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9328u;}
      if(c->pc!=0x932Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x932Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02932Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02932Cu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x932Fu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02932Fu:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 1625; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02932Fu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9333u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9332u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029333u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029333u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9336u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029336u:
    if(m==1u&&x==1u&&e==0u){ /* A9 2C Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029336u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9338u;
      sc_v11_op_lda(r,0x002Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029338u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029338u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x933Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02933Bu:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02933Bu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x933Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02933Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02933Du,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x933Fu;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02933Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02933Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9340u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029340u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029340u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9341u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029341u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029341u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9342u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029342u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029342u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9343u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029343u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029343u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9344u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029344u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029344u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9346u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029346u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029346u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9349u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029349u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029349u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x934Bu;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02934Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02934Bu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x934Eu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02934Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02934Eu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9350u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029350u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029350u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9353u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029353u:
    if(m==1u&&x==1u&&e==0u){ /* A9 B8 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029353u,2u);r->open_bus=0xB8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9355u;
      sc_v11_op_lda(r,0x00B8u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029355u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029355u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9358u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029358u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029358u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x935Au;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02935Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02935Au,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x935Du;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02935Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02935Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x935Fu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02935Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02935Fu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9362u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029362u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029362u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9364u;
      sc_v11_op_lda(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029364u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029364u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9367u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029367u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029367u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9369u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029369u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029369u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x936Bu;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02936Bu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02936Bu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x936Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9371u;}
      if(c->pc!=0x936Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x936Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02936Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02936Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x936Eu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02936Eu:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02936Eu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x936Fu;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02936Fu:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02936Fu,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9371u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x936Du;}
      if(c->pc!=0x9371u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9371u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029371u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029371u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9374u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029374u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029374u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9376u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029376u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029376u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9378u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x029378u:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x029378u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x937Au;
      sc_v11_op_ora(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02937Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02937Au,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x937Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02937Cu:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02937Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x937Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
