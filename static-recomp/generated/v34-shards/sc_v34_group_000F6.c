/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000F6(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03D80Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D80Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD80Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D80Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D80Fu,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD811u;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D811u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D811u,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD813u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D813u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D813u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD815u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D815u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D815u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD818u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D818u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D818u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Au;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD81Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D81Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D81Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D81Cu:
    if(m==1u&&x==0u&&e==0u){ /* AD 27 0B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D81Cu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B27u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D81Fu:
    if(m==1u&&x==0u&&e==0u){ /* CD 2A 0B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D81Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD822u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Au)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D822u:
    if(m==1u&&x==0u&&e==0u){ /* D0 10 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D822u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD824u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD834u;}
      if(c->pc!=0xD824u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD824u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D834u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D834u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD836u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D836u:
    if(m==0u&&x==0u&&e==0u){ /* AD 27 0B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D836u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD839u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B27u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D839u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D839u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Au;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D83Au:
    if(m==0u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D83Au,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Bu;
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D83Bu:
    if(m==0u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D83Bu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Cu;
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D83Cu:
    if(m==0u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D83Cu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Du;
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D83Du:
    if(m==0u&&x==0u&&e==0u){ /* 69 D6 5C Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D83Du,3u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD840u;
      sc_v11_op_adc(r,0x5CD6u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D840u:
    if(m==0u&&x==0u&&e==0u){ /* 85 59 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D840u,2u);r->open_bus=0x59u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD842u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x59u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D842u:
    if(m==0u&&x==0u&&e==0u){ /* AD 28 0B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D842u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD845u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B28u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D845u:
    if(m==0u&&x==0u&&e==0u){ /* 49 FF FF Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D845u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD848u;
      sc_v11_op_eor(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D848u:
    if(m==0u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D848u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD849u;
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D849u:
    if(m==0u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D849u,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD84Au;
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D84Au:
    if(m==0u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D84Au,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD84Bu;
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D84Bu:
    if(m==0u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D84Bu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD84Cu;
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D84Cu:
    if(m==0u&&x==0u&&e==0u){ /* 2A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D84Cu,1u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD84Du;
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D84Du:
    if(m==0u&&x==0u&&e==0u){ /* 69 38 12 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D84Du,3u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD850u;
      sc_v11_op_adc(r,0x1238u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D850u:
    if(m==0u&&x==0u&&e==0u){ /* 85 5B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D850u,2u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD852u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Bu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D852u:
    if(m==0u&&x==0u&&e==0u){ /* 64 5D Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D852u,2u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD854u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D854u:
    if(m==0u&&x==0u&&e==0u){ /* AD 29 0B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D854u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD857u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B29u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D857u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D857u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD858u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D858u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 28 0B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D858u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD85Bu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B28u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D85Bu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 27 0B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D85Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD85Eu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B27u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D85Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 1F 00 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D85Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD861u;
      sc_v11_op_and(r,0x001Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D861u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D861u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD862u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D862u:
    if(m==0u&&x==0u&&e==0u){ /* 22 4B 82 00 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D862u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD866u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD865u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D866u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D866u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD867u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D867u:
    if(m==0u&&x==0u&&e==0u){ /* 10 F9 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D867u,2u);r->open_bus=0xF9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD869u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD862u;}
      if(c->pc!=0xD869u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD869u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D869u:
    if(m==0u&&x==0u&&e==0u){ /* 22 ED F1 01 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D869u,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD86Du;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD86Cu))return 0;
      c->pbr=0x01u;c->pc=0xF1EDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D86Du:
    if(m==1u&&x==0u&&e==0u){ /* 22 3F 92 02 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D86Du,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD871u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD870u))return 0;
      c->pbr=0x02u;c->pc=0x923Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D871u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D871u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD873u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D873u:
    if(m==1u&&x==1u&&e==0u){ /* AD 27 0B Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D873u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD876u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B27u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D876u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2A 0B Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D876u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD879u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D879u:
    if(m==1u&&x==1u&&e==0u){ /* AD 28 0B Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D879u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD87Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B28u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D87Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2B 0B Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D87Cu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD87Fu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D87Fu:
    if(m==1u&&x==1u&&e==0u){ /* AD 29 0B Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D87Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD882u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B29u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D882u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2C 0B Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D882u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD885u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D885u:
    if(m==1u&&x==1u&&e==0u){ /* A9 16 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D885u,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD887u;
      sc_v11_op_lda(r,0x0016u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D887u:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D887u,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD889u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D889u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D889u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD88Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D88Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1721; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D88Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD88Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D88Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 Mesen corrected gameplay frame 1721; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D88Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD88Fu;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D88Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1721; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D88Fu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD891u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD891u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D891u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D891u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD893u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D893u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D893u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD896u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D896u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D896u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD898u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD898u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D898u:
    if(m==0u&&x==0u&&e==0u){ /* 20 83 DC Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D898u,3u);r->open_bus=0xDCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD89Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD89Au))return 0;c->pc=0xDC83u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D89Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A5 DC Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D89Bu,3u);r->open_bus=0xDCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD89Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD89Du))return 0;c->pc=0xDCA5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D89Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D89Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8A1u;
      sc_v11_op_lda(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8A1u:
    if(m==0u&&x==0u&&e==0u){ /* 85 4E Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8A1u,2u);r->open_bus=0x4Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8A3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x4Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8A3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8A3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8A5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8A5u:
    if(m==1u&&x==0u&&e==0u){ /* A9 48 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8A5u,2u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8A7u;
      sc_v11_op_lda(r,0x0048u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8A7u:
    if(m==1u&&x==0u&&e==0u){ /* 85 62 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8A7u,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8A9u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8A9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 54 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8A9u,2u);r->open_bus=0x54u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8ABu;
      sc_v11_op_lda(r,0x0054u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8ABu:
    if(m==1u&&x==0u&&e==0u){ /* 85 64 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8ABu,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8ADu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8ADu:
    if(m==1u&&x==0u&&e==0u){ /* A9 15 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8ADu,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8AFu;
      sc_v11_op_lda(r,0x0015u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8AFu:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8AFu,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8B1u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8B1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8B1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8B3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8B3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8B3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8B6u;
      sc_v11_op_lda(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8B6u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8B6u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8B8u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD8B8u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8B8u:
    if(m==0u&&x==0u&&e==0u){ /* E6 14 Mesen corrected gameplay frame 1755; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8B8u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8BAu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8BAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1755; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8BAu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8BBu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8BBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8BBu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8BDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8BDu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 53 02 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8BDu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8C0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8C0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D3 DA Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8C0u,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8C3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C2u))return 0;c->pc=0xDAD3u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8C3u:
    if(m==1u&&x==1u&&e==0u){ /* 20 5D DB Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8C3u,3u);r->open_bus=0xDBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8C6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C5u))return 0;c->pc=0xDB5Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8C6u:
    if(m==0u&&x==1u&&e==0u){ /* 20 B6 DB Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8C6u,3u);r->open_bus=0xDBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8C9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C8u))return 0;c->pc=0xDBB6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8C9u:
    if(m==1u&&x==1u&&e==0u){ /* 20 83 DC Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8C9u,3u);r->open_bus=0xDCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8CCu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8CBu))return 0;c->pc=0xDC83u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8CCu:
    if(m==0u&&x==0u&&e==0u){ /* 22 94 9B 05 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8CCu,4u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8D0u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD8CFu))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8D0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D D9 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8D0u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8D3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8D2u))return 0;c->pc=0xD91Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1D D9 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8D0u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8D3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8D2u))return 0;c->pc=0xD91Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8D3u:
    if(m==1u&&x==1u&&e==0u){ /* 20 A5 DC Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8D3u,3u);r->open_bus=0xDCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8D6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8D5u))return 0;c->pc=0xDCA5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8D6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8D6u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8D8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8D8u:
    if(m==0u&&x==0u&&e==0u){ /* A5 4E Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8D8u,2u);r->open_bus=0x4Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8DAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x4Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8DAu:
    if(m==0u&&x==0u&&e==0u){ /* C9 82 00 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8DAu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8DDu;
      sc_v11_op_compare(r,c->a,0x0082u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8DDu:
    if(m==0u&&x==0u&&e==0u){ /* D0 04 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8DDu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8DFu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD8E3u;}
      if(c->pc!=0xD8DFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD8DFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8DFu:
    if(m==0u&&x==0u&&e==0u){ /* E6 14 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8DFu,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8E1u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8E1u:
    if(m==0u&&x==0u&&e==0u){ /* 80 39 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8E1u,2u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8E3u;
      if(1){c->pc=0xD91Cu;}
      if(c->pc!=0xD8E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD8E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8E3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8E3u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8E5u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8E5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 00 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8E5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8E8u;
      sc_v11_op_and(r,0x0040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D8E8u:
    if(m==0u&&x==0u&&e==0u){ /* F0 32 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D8E8u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8EAu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD91Cu;}
      if(c->pc!=0xD8EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD8EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D91Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D91Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD91Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D91Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D91Du,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD91Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D91Du,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD91Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D91Fu:
    if(m==1u&&x==1u&&e==0u){ /* A5 50 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D91Fu,2u);r->open_bus=0x50u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD921u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x50u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D921u:
    if(m==1u&&x==1u&&e==0u){ /* F0 2B Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D921u,2u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD923u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD94Eu;}
      if(c->pc!=0xD923u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD923u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D923u:
    if(m==1u&&x==1u&&e==0u){ /* AC 5B 0B Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D923u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD926u;
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B5Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D926u:
    if(m==1u&&x==1u&&e==0u){ /* A5 4E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D926u,2u);r->open_bus=0x4Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD928u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x4Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D928u:
    if(m==1u&&x==1u&&e==0u){ /* C9 FF Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D928u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD92Au;
      sc_v11_op_compare(r,c->a,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D92Au:
    if(m==1u&&x==1u&&e==0u){ /* F0 22 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D92Au,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD92Cu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD94Eu;}
      if(c->pc!=0xD92Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD92Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D92Cu:
    if(m==1u&&x==1u&&e==0u){ /* C9 82 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D92Cu,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD92Eu;
      sc_v11_op_compare(r,c->a,0x0082u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D92Eu:
    if(m==1u&&x==1u&&e==0u){ /* F0 1E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D92Eu,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD930u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD94Eu;}
      if(c->pc!=0xD930u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD930u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D930u:
    if(m==1u&&x==1u&&e==0u){ /* C9 80 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D930u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD932u;
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D932u:
    if(m==1u&&x==1u&&e==0u){ /* D0 04 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D932u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD934u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD938u;}
      if(c->pc!=0xD934u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD934u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D938u:
    if(m==1u&&x==1u&&e==0u){ /* C9 81 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D938u,2u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD93Au;
      sc_v11_op_compare(r,c->a,0x0081u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D93Au:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D93Au,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD93Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD943u;}
      if(c->pc!=0xD93Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD93Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D943u:
    if(m==1u&&x==1u&&e==0u){ /* C0 08 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D943u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD945u;
      sc_v11_op_compare(r,c->y,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D945u:
    if(m==1u&&x==1u&&e==0u){ /* B0 07 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D945u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD947u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xD94Eu;}
      if(c->pc!=0xD947u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD947u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D947u:
    if(m==1u&&x==1u&&e==0u){ /* 99 5C 0B Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D947u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD94Au;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0B5Cu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D94Au:
    if(m==1u&&x==1u&&e==0u){ /* C8 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D94Au,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD94Bu;
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D94Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8C 5B 0B Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D94Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD94Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B5Bu),(uint8_t)c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D94Eu:
    if(m==1u&&x==1u&&e==0u){ /* 64 50 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D94Eu,2u);r->open_bus=0x50u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD950u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x50u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D950u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D950u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD951u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D951u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D951u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD953u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D953u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D953u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD956u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D956u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D956u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD958u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD958u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D958u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D958u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD95Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D95Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 48 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D95Au,2u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD95Cu;
      sc_v11_op_lda(r,0x0048u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D95Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 62 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D95Cu,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD95Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D95Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 58 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D95Eu,2u);r->open_bus=0x58u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD960u;
      sc_v11_op_lda(r,0x0058u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D960u:
    if(m==1u&&x==0u&&e==0u){ /* 85 64 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D960u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD962u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D962u:
    if(m==1u&&x==0u&&e==0u){ /* E6 14 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D962u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD964u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D964u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D964u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD966u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D964u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD966u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D966u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 53 02 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D966u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD969u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D969u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5D DB Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D969u,3u);r->open_bus=0xDBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD96Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD96Bu))return 0;c->pc=0xDB5Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D96Cu:
    if(m==0u&&x==1u&&e==0u){ /* 20 B6 DB Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D96Cu,3u);r->open_bus=0xDBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD96Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD96Eu))return 0;c->pc=0xDBB6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D96Fu:
    if(m==1u&&x==1u&&e==0u){ /* 20 83 DC Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D96Fu,3u);r->open_bus=0xDCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD972u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD971u))return 0;c->pc=0xDC83u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D972u:
    if(m==0u&&x==0u&&e==0u){ /* 22 94 9B 05 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D972u,4u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD976u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD975u))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D976u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D976u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD978u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D978u:
    if(m==0u&&x==0u&&e==0u){ /* AC 57 0B Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D978u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD97Bu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D97Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D97Bu,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD97Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D97Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 03 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D97Du,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD980u;
      sc_v11_op_and(r,0x0300u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D980u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1E Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D980u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD982u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD9A0u;}
      if(c->pc!=0xD982u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD982u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9A0u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9A0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9A3u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9A3u:
    if(m==0u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9A3u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9A4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9A4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9A4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9A7u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9A7u:
    if(m==0u&&x==0u&&e==0u){ /* CC 57 0B Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9A7u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9AAu;
      sc_v11_op_compare(r,c->y,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9AAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9AAu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9ACu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD9B1u;}
      if(c->pc!=0xD9ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9ACu:
    if(m==0u&&x==0u&&e==0u){ /* A5 2C Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9ACu,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9AEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x2Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9AEu:
    if(m==0u&&x==0u&&e==0u){ /* 29 10 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9AEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9B1u;
      sc_v11_op_and(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9B1u:
    if(m==0u&&x==0u&&e==0u){ /* 22 D7 9A 05 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9B1u,4u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9B5u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD9B4u))return 0;
      c->pbr=0x05u;c->pc=0x9AD7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9B5u:
    if(m==0u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9B5u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9B6u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9B6u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9B6u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9B7u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9B7u:
    if(m==0u&&x==0u&&e==0u){ /* C0 03 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9B7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9BAu;
      sc_v11_op_compare(r,c->y,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9BAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 E7 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9BAu,2u);r->open_bus=0xE7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9BCu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD9A3u;}
      if(c->pc!=0xD9BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9BCu:
    if(m==0u&&x==0u&&e==0u){ /* E6 2C Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9BCu,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9BEu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x2Cu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9BEu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9BEu,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9C0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9C0u:
    if(m==0u&&x==0u&&e==0u){ /* 10 07 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9C0u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9C2u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD9C9u;}
      if(c->pc!=0xD9C2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9C2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9C2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 15 00 Mesen corrected gameplay frame 2300; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9C2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9C5u;
      sc_v11_op_lda(r,0x0015u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9C5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 Mesen corrected gameplay frame 2300; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9C5u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9C7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9C7u:
    if(m==0u&&x==0u&&e==0u){ /* 80 21 Mesen corrected gameplay frame 2300; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9C7u,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9C9u;
      if(1){c->pc=0xD9EAu;}
      if(c->pc!=0xD9C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9C9u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9C9u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9CBu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9CBu:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9CBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9CEu;
      sc_v11_op_and(r,0x0040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9CEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 1A Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9CEu,2u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9D0u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD9EAu;}
      if(c->pc!=0xD9D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9EAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9EAu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9EBu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9EBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9EBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9EDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9EDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 5C Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9EDu,2u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9EFu;
      sc_v11_op_lda(r,0x005Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9EFu:
    if(m==1u&&x==0u&&e==0u){ /* 85 64 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9EFu,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F1u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9F1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9F1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9F3u:
    if(m==0u&&x==0u&&e==0u){ /* 64 36 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9F3u,2u);r->open_bus=0x36u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F5u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x36u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9F5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9F5u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9F8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9F8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F9u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9F9u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9F9u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9FAu;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9FAu:
    if(m==0u&&x==0u&&e==0u){ /* B9 AF DA Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9FAu,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9FDu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDAAFu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D9FDu:
    if(m==0u&&x==0u&&e==0u){ /* 8F D4 41 7E Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03D9FDu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA01u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E41D4u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA01u:
    if(m==0u&&x==0u&&e==0u){ /* B9 B5 DA Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA01u,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA04u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDAB5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA04u:
    if(m==0u&&x==0u&&e==0u){ /* 8F D6 41 7E Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA04u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA08u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E41D6u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA08u:
    if(m==0u&&x==0u&&e==0u){ /* B9 BB DA Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA08u,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA0Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDABBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F D8 41 7E Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA0Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA0Fu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E41D8u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA0Fu:
    if(m==0u&&x==0u&&e==0u){ /* B9 C1 DA Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA0Fu,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA12u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDAC1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA12u:
    if(m==0u&&x==0u&&e==0u){ /* 8F DA 41 7E Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA12u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA16u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E41DAu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA16u:
    if(m==0u&&x==0u&&e==0u){ /* B9 C7 DA Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA16u,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA19u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDAC7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA19u:
    if(m==0u&&x==0u&&e==0u){ /* 8F DE 41 7E Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA19u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA1Du;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E41DEu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA1Du:
    if(m==0u&&x==0u&&e==0u){ /* B9 CD DA Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA1Du,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA20u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDACDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA20u:
    if(m==0u&&x==0u&&e==0u){ /* 8F E0 41 7E Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA20u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA24u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E41E0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA24u:
    if(m==0u&&x==0u&&e==0u){ /* E6 14 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA24u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA26u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA26u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA26u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA28u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA28u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 53 02 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA28u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA2Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 5D DB Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA2Bu,3u);r->open_bus=0xDBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA2Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA2Du))return 0;c->pc=0xDB5Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA2Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 B6 DB Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA2Eu,3u);r->open_bus=0xDBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA31u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA30u))return 0;c->pc=0xDBB6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA31u:
    if(m==1u&&x==1u&&e==0u){ /* 20 83 DC Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA31u,3u);r->open_bus=0xDCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA34u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA33u))return 0;c->pc=0xDC83u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA34u:
    if(m==0u&&x==0u&&e==0u){ /* 22 94 9B 05 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA34u,4u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA38u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA37u))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA38u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA38u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA3Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA3Au:
    if(m==0u&&x==0u&&e==0u){ /* A4 36 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA3Au,2u);r->open_bus=0x36u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA3Cu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x36u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA3Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA3Cu,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA3Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 03 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA3Eu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA41u;
      sc_v11_op_and(r,0x0300u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA41u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1D Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA41u,2u);r->open_bus=0x1Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA43u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDA60u;}
      if(c->pc!=0xDA43u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA43u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA60u:
    if(m==0u&&x==0u&&e==0u){ /* A5 36 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA60u,2u);r->open_bus=0x36u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA62u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x36u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA62u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA62u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA63u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA63u:
    if(m==0u&&x==0u&&e==0u){ /* 69 03 00 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA63u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA66u;
      sc_v11_op_adc(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA66u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA66u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA67u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA67u:
    if(m==0u&&x==0u&&e==0u){ /* A5 2C Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA67u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA69u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x2Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA69u:
    if(m==0u&&x==0u&&e==0u){ /* 29 10 00 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA69u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA6Cu;
      sc_v11_op_and(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA6Cu:
    if(m==0u&&x==0u&&e==0u){ /* 22 D7 9A 05 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA6Cu,4u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA70u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA6Fu))return 0;
      c->pbr=0x05u;c->pc=0x9AD7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA70u:
    if(m==0u&&x==0u&&e==0u){ /* A5 36 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA70u,2u);r->open_bus=0x36u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA72u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x36u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA72u:
    if(m==0u&&x==0u&&e==0u){ /* 49 01 00 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA72u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA75u;
      sc_v11_op_eor(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA75u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA75u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA76u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA76u:
    if(m==0u&&x==0u&&e==0u){ /* 69 03 00 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA76u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA79u;
      sc_v11_op_adc(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA79u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA79u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA7Au;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA7Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA7Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA7Du;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA7Du:
    if(m==0u&&x==0u&&e==0u){ /* 22 D7 9A 05 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA7Du,4u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA81u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA80u))return 0;
      c->pbr=0x05u;c->pc=0x9AD7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA81u:
    if(m==0u&&x==0u&&e==0u){ /* E6 2C Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA81u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA83u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x2Cu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA83u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA83u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA85u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA85u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 80 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA85u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA88u;
      sc_v11_op_and(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA88u:
    if(m==0u&&x==0u&&e==0u){ /* F0 18 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA88u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA8Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDAA2u;}
      if(c->pc!=0xDA8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA8Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 36 Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA8Au,2u);r->open_bus=0x36u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA8Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x36u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA8Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 1B Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA8Cu,2u);r->open_bus=0x1Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA8Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDAA9u;}
      if(c->pc!=0xDA8Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA8Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 E5 Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA8Eu,3u);r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA91u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA90u))return 0;c->pc=0xE574u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA91u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA91u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA93u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA93u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA93u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA96u;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA96u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2450; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA96u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA98u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDA98u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA98u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3D C6 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA98u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA9Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA9Au))return 0;c->pc=0xC63Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA9Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 80 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA9Bu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA9Eu;
      sc_v11_op_lda(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DA9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DA9Eu,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA0u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAA0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0C Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAA0u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA2u;
      if(1){c->pc=0xDAAEu;}
      if(c->pc!=0xDAA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAA2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAA2u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAA4u:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 00 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAA4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA7u;
      sc_v11_op_and(r,0x0040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAA7u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAA7u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA9u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDAAEu;}
      if(c->pc!=0xDAA9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAA9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAAEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAAEu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAAFu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAD3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAD3u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAD5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAD5u:
    if(m==1u&&x==1u&&e==0u){ /* A6 4A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAD5u,2u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAD7u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x4Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAD7u:
    if(m==1u&&x==1u&&e==0u){ /* A4 4C Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAD7u,2u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAD9u;
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x4Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAD9u:
    if(m==1u&&x==1u&&e==0u){ /* AD 24 01 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAD9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDADCu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0124u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DADCu:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DADCu,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDADEu;
      sc_v11_op_and(r,0x000Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DADEu:
    if(m==1u&&x==1u&&e==0u){ /* F0 7C Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DADEu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAE0u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDB5Cu;}
      if(c->pc!=0xDAE0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAE0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAE0u:
    if(m==1u&&x==1u&&e==0u){ /* 4A Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAE0u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAE1u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAE1u:
    if(m==1u&&x==1u&&e==0u){ /* 90 2C Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAE1u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAE3u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xDB0Fu;}
      if(c->pc!=0xDAE3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAE3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAE3u:
    if(m==1u&&x==1u&&e==0u){ /* C0 02 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAE3u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAE5u;
      sc_v11_op_compare(r,c->y,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAE5u:
    if(m==1u&&x==1u&&e==0u){ /* B0 08 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAE5u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAE7u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xDAEFu;}
      if(c->pc!=0xDAE7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAE7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAEFu:
    if(m==1u&&x==1u&&e==0u){ /* C0 02 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAEFu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAF1u;
      sc_v11_op_compare(r,c->y,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAF1u:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAF1u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAF3u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDAFAu;}
      if(c->pc!=0xDAF3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAF3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAFAu:
    if(m==1u&&x==1u&&e==0u){ /* C0 03 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAFAu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAFCu;
      sc_v11_op_compare(r,c->y,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAFCu:
    if(m==1u&&x==1u&&e==0u){ /* D0 11 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAFCu,2u);r->open_bus=0x11u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAFEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB0Fu;}
      if(c->pc!=0xDAFEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAFEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DAFEu:
    if(m==1u&&x==1u&&e==0u){ /* E0 09 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DAFEu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB00u;
      sc_v11_op_compare(r,c->x,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB00u:
    if(m==1u&&x==1u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB00u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB02u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB08u;}
      if(c->pc!=0xDB02u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB02u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB08u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB08u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB09u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB09u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB09u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB0Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB0Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 07 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB0Au,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB0Cu;
      sc_v11_op_lda(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB0Cu:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB0Cu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB0Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB0Eu:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1980; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB0Eu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB0Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB0Fu:
    if(m==1u&&x==1u&&e==0u){ /* 4A Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB0Fu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB10u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB10u:
    if(m==1u&&x==1u&&e==0u){ /* 90 1D Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB10u,2u);r->open_bus=0x1Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB12u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xDB2Fu;}
      if(c->pc!=0xDB12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB2Fu:
    if(m==1u&&x==1u&&e==0u){ /* 4A Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB2Fu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB30u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB30u:
    if(m==1u&&x==1u&&e==0u){ /* 90 18 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB30u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB32u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xDB4Au;}
      if(c->pc!=0xDB32u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB32u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB32u:
    if(m==1u&&x==1u&&e==0u){ /* C0 01 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB32u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB34u;
      sc_v11_op_compare(r,c->y,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB34u:
    if(m==1u&&x==1u&&e==0u){ /* D0 09 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB34u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB36u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB3Fu;}
      if(c->pc!=0xDB36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB36u:
    if(m==1u&&x==1u&&e==0u){ /* E0 0A Mesen corrected gameplay frame 1940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB36u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB38u;
      sc_v11_op_compare(r,c->x,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB38u:
    if(m==1u&&x==1u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 1940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB38u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB3Au;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB3Fu;}
      if(c->pc!=0xDB3Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB3Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB3Fu:
    if(m==1u&&x==1u&&e==0u){ /* C0 04 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB3Fu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB41u;
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB41u:
    if(m==1u&&x==1u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB41u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB43u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDB4Au;}
      if(c->pc!=0xDB43u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB43u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB43u:
    if(m==1u&&x==1u&&e==0u){ /* C8 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB43u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB44u;
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB44u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB44u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB45u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB45u:
    if(m==1u&&x==1u&&e==0u){ /* A9 07 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB45u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB47u;
      sc_v11_op_lda(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB47u:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB47u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB49u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB49u:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB49u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB4Au;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB4Au:
    if(m==1u&&x==1u&&e==0u){ /* 4A Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB4Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB4Bu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB4Bu:
    if(m==1u&&x==1u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB4Bu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB4Du;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xDB58u;}
      if(c->pc!=0xDB4Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB4Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB58u:
    if(m==1u&&x==1u&&e==0u){ /* 86 4A Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB58u,2u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB5Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x4Au),(uint8_t)c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB5Au:
    if(m==1u&&x==1u&&e==0u){ /* 84 4C Mesen corrected gameplay frame 1920; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB5Au,2u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB5Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x4Cu),(uint8_t)c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB5Cu:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB5Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB5Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB5Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB5Du,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB5Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB5Du,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB5Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB5Fu:
    if(m==1u&&x==1u&&e==0u){ /* A5 4C Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB5Fu,2u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB61u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x4Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB61u:
    if(m==1u&&x==1u&&e==0u){ /* C9 04 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB61u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB63u;
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB63u:
    if(m==1u&&x==1u&&e==0u){ /* D0 0C Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB63u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB65u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB71u;}
      if(c->pc!=0xDB65u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB65u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB71u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB71u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB72u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB72u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB72u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB73u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB73u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB73u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB74u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB74u:
    if(m==1u&&x==1u&&e==0u){ /* 85 10 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB74u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB76u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x10u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB76u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB76u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB77u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB77u:
    if(m==1u&&x==1u&&e==0u){ /* 69 78 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB77u,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB79u;
      sc_v11_op_adc(r,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB79u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB79u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB7Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB7Cu:
    if(m==1u&&x==1u&&e==0u){ /* A5 4A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB7Cu,2u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB7Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x4Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB7Eu:
    if(m==1u&&x==1u&&e==0u){ /* C9 09 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB7Eu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB80u;
      sc_v11_op_compare(r,c->a,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB80u:
    if(m==1u&&x==1u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB80u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB82u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB8Au;}
      if(c->pc!=0xDB82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB82u:
    if(m==1u&&x==1u&&e==0u){ /* A6 4C Mesen corrected gameplay frame 2140; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB82u,2u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB84u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x4Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB84u:
    if(m==1u&&x==1u&&e==0u){ /* E0 03 Mesen corrected gameplay frame 2140; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB84u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB86u;
      sc_v11_op_compare(r,c->x,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB86u:
    if(m==1u&&x==1u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2140; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB86u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB88u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDB8Eu;}
      if(c->pc!=0xDB88u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB88u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB8Au:
    if(m==1u&&x==1u&&e==0u){ /* C9 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB8Au,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB8Cu;
      sc_v11_op_compare(r,c->a,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB8Cu:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB8Cu,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB8Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB95u;}
      if(c->pc!=0xDB8Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB8Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB8Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 E0 Mesen corrected gameplay frame 2140; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB8Eu,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB90u;
      sc_v11_op_lda(r,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB90u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 2140; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB90u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB93u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB93u:
    if(m==1u&&x==1u&&e==0u){ /* 80 0B Mesen corrected gameplay frame 2140; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB93u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB95u;
      if(1){c->pc=0xDBA0u;}
      if(c->pc!=0xDB95u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB95u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB95u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB95u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB96u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB96u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB96u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB97u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB97u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB97u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB98u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB98u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB98u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB99u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB99u:
    if(m==1u&&x==1u&&e==0u){ /* 65 10 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB99u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB9Bu;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB9Bu:
    if(m==1u&&x==1u&&e==0u){ /* 69 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB9Bu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDB9Du;
      sc_v11_op_adc(r,0x0030u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DB9Du:
    if(m==1u&&x==1u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DB9Du,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBA0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBA0u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 60 02 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBA0u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBA3u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0260u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBA3u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 5E 02 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBA3u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBA6u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Eu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBA6u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBA6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBA8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBA8u:
    if(m==0u&&x==1u&&e==0u){ /* A9 14 00 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBA8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBABu;
      sc_v11_op_lda(r,0x0014u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBABu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBABu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBAEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBAEu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBAEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBB0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBB0u:
    if(m==0u&&x==1u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBB0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBB3u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBB3u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBB3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBB5u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDBB5u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBB5u:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBB5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBB6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBB6u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBB6u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBB8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBB8u:
    if(m==1u&&x==1u&&e==0u){ /* A5 CA Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBB8u,2u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBBAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xCAu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBBAu:
    if(m==1u&&x==1u&&e==0u){ /* 10 19 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBBAu,2u);r->open_bus=0x19u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBBCu;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xDBD5u;}
      if(c->pc!=0xDBBCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDBBCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBBCu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBBCu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBBEu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBBEu:
    if(m==1u&&x==1u&&e==0u){ /* 85 50 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBBEu,2u);r->open_bus=0x50u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBC0u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x50u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBC0u:
    if(m==1u&&x==1u&&e==0u){ /* A5 4C Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBC0u,2u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBC2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x4Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBC2u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBC2u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBC3u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBC3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBC3u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBC4u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBC4u:
    if(m==1u&&x==1u&&e==0u){ /* 85 10 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBC4u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBC6u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x10u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBC6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBC6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBC7u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBC7u:
    if(m==1u&&x==1u&&e==0u){ /* 65 10 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBC7u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBC9u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBC9u:
    if(m==1u&&x==1u&&e==0u){ /* 65 4A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBC9u,2u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBCBu;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x4Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBCBu:
    if(m==1u&&x==1u&&e==0u){ /* A8 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBCBu,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBCCu;
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBCCu:
    if(m==1u&&x==1u&&e==0u){ /* B9 47 DC Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBCCu,3u);r->open_bus=0xDCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBCFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xDC47u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBCFu:
    if(m==1u&&x==1u&&e==0u){ /* 85 4E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBCFu,2u);r->open_bus=0x4Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBD1u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x4Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBD1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 06 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBD1u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBD3u;
      sc_v11_op_lda(r,0x0006u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBD3u:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBD3u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBD5u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBD5u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBD5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBD6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBD6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBD6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBD8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBD6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBD8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBD8u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBD8u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBDAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBD8u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBDAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBDAu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 44 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBDAu,3u);r->open_bus=0x44u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBDDu;
      sc_v11_op_ldx(r,0x4400u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBDDu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 47 01 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBDDu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBE0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0147u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBE0u:
    if(m==1u&&x==0u&&e==0u){ /* A2 18 00 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBE0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBE3u;
      sc_v11_op_ldx(r,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBE3u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 77 01 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBE3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBE6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0177u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBE6u:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 30 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBE6u,3u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBE9u;
      sc_v11_op_ldx(r,0x3040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBE9u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 67 01 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBE9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBECu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0167u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBECu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 08 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBECu,3u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBEFu;
      sc_v11_op_ldx(r,0x0800u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBEFu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 87 01 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBEFu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBF2u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0187u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBF2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B7 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBF2u,2u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBF4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBF4u:
    if(m==1u&&x==0u&&e==0u){ /* 09 04 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBF4u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBF6u;
      sc_v11_op_ora(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBF6u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B7 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBF6u,2u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBF8u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DBF8u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03DBF8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDBF9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
