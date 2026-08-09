/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000F7(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03DF40u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF40u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF42u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF42u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF42u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF44u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF44u:
    if(m==0u&&x==0u){ /* A90400 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF44u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF47u;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF47u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF47u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF49u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF49u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF49u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF4Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF4Bu:
    if(m==1u&&x==0u){ /* A5B3 LDA dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF4Bu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF4Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF4Du:
    if(m==1u&&x==0u){ /* 297F AND imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF4Du,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF4Fu;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF4Fu:
    if(m==1u&&x==0u){ /* 85B1 STA dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF4Fu,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF51u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF51u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF51u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF53u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF53u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF53u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF55u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF55u:
    if(m==0u&&x==0u){ /* A90100 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF55u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF58u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF58u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF58u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF5Au;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF5Au:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF5Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF5Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF5Cu:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF5Cu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF5Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF5Eu:
    if(m==1u&&x==0u){ /* A2DBC4 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF5Eu,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF61u;
      sc_v11_op_ldx(r,0xC4DBu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF61u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF61u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF63u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF63u:
    if(m==1u&&x==0u){ /* A908 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF63u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF65u;
      sc_v11_op_lda(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF65u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF65u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF67u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF67u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF67u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF6Au;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF6Au:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF6Au,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF6Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF6Cu:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF6Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF6Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF6Eu:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF6Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF71u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF71u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF71u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF73u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF73u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF73u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF75u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF75u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF75u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF77u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF77u:
    if(m==1u&&x==0u){ /* A25C87 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF77u,3u);r->open_bus=0x87u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF7Au;
      sc_v11_op_ldx(r,0x875Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF7Au:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF7Au,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF7Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF7Cu:
    if(m==1u&&x==0u){ /* A909 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF7Cu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF7Eu;
      sc_v11_op_lda(r,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF7Eu:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF7Eu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF80u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF80u:
    if(m==1u&&x==0u){ /* A20040 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF80u,3u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF83u;
      sc_v11_op_ldx(r,0x4000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF83u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF83u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF85u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF85u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF85u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF87u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF87u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF87u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF8Au;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF8Au:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF8Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF8Cu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF8Cu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF8Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF8Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF8Eu:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF8Eu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF90u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF90u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF90u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF93u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF93u:
    if(m==1u&&x==0u){ /* 8E1621 STX abs; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF93u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF96u;
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,c->x);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF96u:
    if(m==1u&&x==0u){ /* E230 SEP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF96u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF98u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF98u:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF98u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Au;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF9Au:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF9Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Bu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF9Bu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF9Bu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Cu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF9Cu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF9Cu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Du;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF9Du:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF9Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Eu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF9Eu:
    if(m==1u&&x==1u){ /* AA TAX imp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF9Eu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Fu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DF9Fu:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DF9Fu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFA1u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFA1u:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFA1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFA4u;
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFA4u:
    if(m==1u&&x==1u){ /* A918 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFA4u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFA6u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFA6u:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFA6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFA9u;
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFA9u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFA9u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFABu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFABu:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFABu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFAEu;
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFAEu:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFAEu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFB0u;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFB0u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFB0u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFB3u;
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFB3u:
    if(m==1u&&x==1u){ /* A97E LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFB3u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFB5u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFB5u:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFB5u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFB8u;
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFB8u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFB8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFBAu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFBAu:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFBAu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFBDu;
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFBDu:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFBDu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFBFu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFBFu:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFBFu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC2u;
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFC2u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFC2u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC4u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFC4u:
    if(m==1u&&x==1u){ /* A202 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFC4u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC6u;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFC6u:
    if(m==1u&&x==1u){ /* F004 BEQ rel; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFC6u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDFCCu;}
            if(c->pc!=0xDFC8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDFC8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFC8u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFC8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC9u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFC9u:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFC9u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFCAu;
      c->x=(uint16_t)((c->x-1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFCAu:
    if(m==1u&&x==1u){ /* D0FC BNE rel; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFCAu,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFCCu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDFC8u;}
            if(c->pc!=0xDFCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDFCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFCCu:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFCCu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFCFu;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFCFu:
    if(m==1u&&x==1u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFCFu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFD1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFD1u:
    if(m==1u&&x==1u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFD1u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFD3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFD3u:
    if(m==1u&&x==0u){ /* A440 LDY dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFD3u,2u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFD5u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0040u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFD5u:
    if(m==1u&&x==0u){ /* B9C8E1 LDA abs,y; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFD5u,3u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFD8u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xE1C8u)),8u);if(0u==0u||(((0xE1C8u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFD8u:
    if(m==1u&&x==0u){ /* 8509 STA dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFD8u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDAu;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFDAu:
    if(m==1u&&x==0u){ /* B9D4E1 LDA abs,y; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFDAu,3u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDDu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xE1D4u)),8u);if(0u==0u||(((0xE1D4u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFDDu:
    if(m==1u&&x==0u){ /* 850A STA dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFDDu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDFu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Au);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFDFu:
    if(m==1u&&x==0u){ /* B9E0E1 LDA abs,y; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFDFu,3u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFE2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xE1E0u)),8u);if(0u==0u||(((0xE1E0u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFE2u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFE2u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFE4u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFE4u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFE4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFE7u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFE7u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFE7u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFE9u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFE9u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFE9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFEBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFEBu:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFEBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFEEu;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFEEu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFEEu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF0u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFF0u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFF0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFF2u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFF2u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFF4u:
    if(m==1u&&x==0u){ /* A29D86 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFF4u,3u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF7u;
      sc_v11_op_ldx(r,0x869Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFF7u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFF7u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF9u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFF9u:
    if(m==1u&&x==0u){ /* A90C LDA imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFF9u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFFBu;
      sc_v11_op_lda(r,0x000Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFFBu:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFFBu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFFDu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03DFFDu:
    if(m==1u&&x==0u){ /* A20010 LDX imm; Version 14 new-city graphics and DMA setup island */
      sc_v11_scheduler_code_access(r,0x03DFFDu,3u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE000u;
      sc_v11_op_ldx(r,0x1000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
