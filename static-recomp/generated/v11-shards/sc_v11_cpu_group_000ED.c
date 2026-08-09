/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000ED(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03B477u:
    if(m==0u&&x==0u){ /* C230 REP; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B477u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB479u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B479u:
    if(m==0u&&x==0u){ /* 9CDF0D STZ abs; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B479u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB47Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DDFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B47Cu:
    if(m==0u&&x==0u){ /* 9CE10D STZ abs; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B47Cu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB47Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE1u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B47Fu:
    if(m==0u&&x==0u){ /* 9CE30D STZ abs; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B47Fu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB482u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B482u:
    if(m==0u&&x==0u){ /* 9CE70D STZ abs; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B482u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB485u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B485u:
    if(m==0u&&x==0u){ /* A9F401 LDA imm; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B485u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB488u;
      sc_v11_op_lda(r,0x01F4u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B488u:
    if(m==0u&&x==0u){ /* 8DED0D STA abs; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B488u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB48Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B48Bu:
    if(m==0u&&x==0u){ /* 9CEF0D STZ abs; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B48Bu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB48Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B48Eu:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B48Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB491u;
      sc_v11_op_ldx(r,0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B491u:
    if(m==0u&&x==0u){ /* 9EF10B STZ abs,x; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B491u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB494u;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0BF1u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B494u:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B494u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB495u;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B495u:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B495u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB496u;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B496u:
    if(m==0u&&x==0u){ /* E01000 CPX imm; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B496u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB499u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B499u:
    if(m==0u&&x==0u){ /* D0F6 BNE; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B499u,2u);r->open_bus=0xF6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB49Bu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB491u;}if(c->pc!=0xB49Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB49Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B49Bu:
    if(m==0u&&x==0u){ /* E220 SEP; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B49Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB49Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B49Du:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B49Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A0u;
      sc_v11_op_ldx(r,0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A0u:
    if(m==1u&&x==0u){ /* 9EF30D STZ abs,x; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B4A0u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A3u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0DF3u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A3u:
    if(m==1u&&x==0u){ /* E8 INX; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B4A3u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A4u;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A4u:
    if(m==1u&&x==0u){ /* E00400 CPX imm; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B4A4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A7u;
      sc_v11_op_compare(r,c->x,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A7u:
    if(m==1u&&x==0u){ /* D0F7 BNE; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B4A7u,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB4A0u;}if(c->pc!=0xB4A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A9u:
    if(m==1u&&x==0u){ /* 60 RTS; Version 15 B-mode evaluation defaults island */
      sc_v11_scheduler_code_access(r,0x03B4A9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4AAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
