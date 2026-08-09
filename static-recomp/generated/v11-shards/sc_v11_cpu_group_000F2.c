/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000F2(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03C802u:
    if(m==0u&&x==0u){ /* 9C830C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C802u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC805u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C83u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C805u:
    if(m==0u&&x==0u){ /* 9C790C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C805u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC808u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C79u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C808u:
    if(m==0u&&x==0u){ /* 9C7B0C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C808u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC80Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C7Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C80Bu:
    if(m==0u&&x==0u){ /* 9C7D0C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C80Bu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC80Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C7Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C80Eu:
    if(m==0u&&x==0u){ /* 9C850C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C80Eu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC811u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C85u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C811u:
    if(m==0u&&x==0u){ /* 9C870C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C811u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC814u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C87u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C814u:
    if(m==0u&&x==0u){ /* 9C890C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C814u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC817u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C89u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C817u:
    if(m==0u&&x==0u){ /* 9C8B0C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C817u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC81Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C8Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C81Au:
    if(m==0u&&x==0u){ /* 9C8D0C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C81Au,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC81Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C8Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C81Du:
    if(m==0u&&x==0u){ /* 9C8F0C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C81Du,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC820u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C8Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C820u:
    if(m==0u&&x==0u){ /* 9C910C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C820u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC823u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C91u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C823u:
    if(m==0u&&x==0u){ /* 9C930C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C823u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC826u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C93u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C826u:
    if(m==0u&&x==0u){ /* 9C950C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C826u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC829u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C95u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C829u:
    if(m==0u&&x==0u){ /* 9C970C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C829u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC82Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C97u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C82Cu:
    if(m==0u&&x==0u){ /* 9C990C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C82Cu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC82Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C99u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C82Fu:
    if(m==0u&&x==0u){ /* 9C9B0C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C82Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC832u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C9Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C832u:
    if(m==0u&&x==0u){ /* 9C9D0C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C832u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC835u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C9Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C835u:
    if(m==0u&&x==0u){ /* 9C9F0C STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C835u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC838u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C9Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C838u:
    if(m==0u&&x==0u){ /* 9C3800 STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C838u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC83Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0038u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C83Bu:
    if(m==0u&&x==0u){ /* 9C210E STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C83Bu,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC83Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E21u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C83Eu:
    if(m==0u&&x==0u){ /* 9CCD0B STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C83Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC841u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCDu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C841u:
    if(m==0u&&x==0u){ /* 9CCF0B STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C841u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC844u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C844u:
    if(m==0u&&x==0u){ /* 9CE30D STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C844u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC847u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C847u:
    if(m==0u&&x==0u){ /* 9CE50D STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C847u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC84Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C84Au:
    if(m==0u&&x==0u){ /* 9CA10D STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C84Au,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC84Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DA1u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C84Du:
    if(m==0u&&x==0u){ /* 9CA30D STZ abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C84Du,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC850u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DA3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C850u:
    if(m==0u&&x==0u){ /* E220 SEP; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C850u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC852u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C852u:
    if(m==1u&&x==0u){ /* A901 LDA imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C852u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC854u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C854u:
    if(m==1u&&x==0u){ /* 8D3A00 STA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C854u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC857u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x003Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C857u:
    if(m==1u&&x==0u){ /* A93C LDA imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C857u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC859u;
      sc_v11_op_lda(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C859u:
    if(m==1u&&x==0u){ /* 8DA90B STA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C859u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC85Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BA9u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C85Cu:
    if(m==1u&&x==0u){ /* 4A LSR acc; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C85Cu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC85Du;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C85Du:
    if(m==1u&&x==0u){ /* 8DAB0B STA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C85Du,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC860u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BABu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C860u:
    if(m==1u&&x==0u){ /* A932 LDA imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C860u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC862u;
      sc_v11_op_lda(r,0x0032u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C862u:
    if(m==1u&&x==0u){ /* 8DAA0B STA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C862u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC865u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BAAu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C865u:
    if(m==1u&&x==0u){ /* 4A LSR acc; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C865u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC866u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C866u:
    if(m==1u&&x==0u){ /* 8DAC0B STA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C866u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC869u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BACu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C869u:
    if(m==1u&&x==0u){ /* C220 REP; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C869u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC86Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C86Bu:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C86Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC86Eu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C86Eu:
    if(m==0u&&x==0u){ /* 8D4D0B STA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C86Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC871u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C871u:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C871u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC874u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C874u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C874u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC877u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C877u:
    if(m==0u&&x==0u){ /* 9F006B7F STA long,x; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C877u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC87Bu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6B00u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C87Bu:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C87Bu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC87Cu;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C87Cu:
    if(m==0u&&x==0u){ /* E0F48D CPX imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C87Cu,3u);r->open_bus=0x8Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC87Fu;
      sc_v11_op_compare(r,c->x,0x8DF4u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C87Fu:
    if(m==0u&&x==0u){ /* D0F6 BNE; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C87Fu,2u);r->open_bus=0xF6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC881u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC877u;}if(c->pc!=0xC881u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC881u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C881u:
    if(m==0u&&x==0u){ /* 2077B4 JSR; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C881u,3u);r->open_bus=0xB4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC884u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC883u))return 0;c->pc=0xB477u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C884u:
    if(m==1u&&x==0u){ /* 223A8200 JSL; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C884u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC888u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;if(!sc_v11_push16(r,0xC887u))return 0;c->pbr=(uint8_t)(0x00823Au>>16);c->pc=(uint16_t)0x823Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C888u:
    if(m==0u&&x==0u){ /* C230 REP; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C888u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC88Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C88Au:
    if(m==0u&&x==0u){ /* AD530B LDA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C88Au,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC88Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C88Du:
    if(m==0u&&x==0u){ /* 38 SEC; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C88Du,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC88Eu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C88Eu:
    if(m==0u&&x==0u){ /* E90A00 SBC imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C88Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC891u;
      sc_v11_op_sbc(r,0x000Au,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C891u:
    if(m==0u&&x==0u){ /* 8DA90D STA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C891u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC894u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DA9u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C894u:
    if(m==0u&&x==0u){ /* 38 SEC; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C894u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC895u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C895u:
    if(m==0u&&x==0u){ /* E96E00 SBC imm; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C895u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC898u;
      sc_v11_op_sbc(r,0x006Eu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C898u:
    if(m==0u&&x==0u){ /* 8DAB0D STA abs; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C898u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC89Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DABu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C89Bu:
    if(m==0u&&x==0u){ /* 60 RTS; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C89Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC89Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C89Cu:
    if(m==0u&&x==0u){ /* 60 RTS; Version 15 B-mode budget defaults island */
      sc_v11_scheduler_code_access(r,0x03C89Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC89Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
