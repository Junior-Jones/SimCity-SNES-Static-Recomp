/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_00026(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x009870u:
    if(m==0u&&x==0u){ /* 08 PHP imp */
      sc_v11_scheduler_code_access(r,0x009870u,1u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9871u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->p))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009871u:
    if(m==0u&&x==0u){ /* E230 SEP imm */
      sc_v11_scheduler_code_access(r,0x009871u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9873u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009873u:
    if(m==1u&&x==1u){ /* A503 LDA dp */
      sc_v11_scheduler_code_access(r,0x009873u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9875u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0003u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009875u:
    if(m==1u&&x==1u){ /* F004 BEQ rel */
      sc_v11_scheduler_code_access(r,0x009875u,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9877u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x987Bu;
      if(c->pc!=0x9877u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9877u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009877u:
    if(m==1u&&x==1u){ /* 8508 STA dp */
      sc_v11_scheduler_code_access(r,0x009877u,2u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9879u;
      {uint32_t a=sc_v11_ea_dp(r,0x0008u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009879u:
    if(m==1u&&x==1u){ /* 8007 BRA rel */
      sc_v11_scheduler_code_access(r,0x009879u,2u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x987Bu;
      c->pc=0x9882u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(c->emulation&&((0x987Bu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00987Bu:
    if(m==1u&&x==1u){ /* AC4021 LDY abs */
      sc_v11_scheduler_code_access(r,0x00987Bu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x987Eu;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x2140u))),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00987Eu:
    if(m==1u&&x==1u){ /* C407 CPY dp */
      sc_v11_scheduler_code_access(r,0x00987Eu,2u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9880u;
      sc_v11_op_compare(r,c->y,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0007u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009880u:
    if(m==1u&&x==1u){ /* D007 BNE rel */
      sc_v11_scheduler_code_access(r,0x009880u,2u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9882u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9889u;
      if(c->pc!=0x9882u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9882u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009882u:
    if(m==1u&&x==1u){ /* 8D4021 STA abs */
      sc_v11_scheduler_code_access(r,0x009882u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9885u;
      {uint32_t a=sc_v11_ea_abs(r,0x2140u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009885u:
    if(m==1u&&x==1u){ /* 8507 STA dp */
      sc_v11_scheduler_code_access(r,0x009885u,2u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9887u;
      {uint32_t a=sc_v11_ea_dp(r,0x0007u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009887u:
    if(m==1u&&x==1u){ /* 6403 STZ dp */
      sc_v11_scheduler_code_access(r,0x009887u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9889u;
      {uint32_t a=sc_v11_ea_dp(r,0x0003u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009889u:
    if(m==1u&&x==1u){ /* A504 LDA dp */
      sc_v11_scheduler_code_access(r,0x009889u,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x988Bu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0004u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00988Bu:
    if(m==1u&&x==1u){ /* 8D4121 STA abs */
      sc_v11_scheduler_code_access(r,0x00988Bu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x988Eu;
      {uint32_t a=sc_v11_ea_abs(r,0x2141u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00988Eu:
    if(m==1u&&x==1u){ /* 6404 STZ dp */
      sc_v11_scheduler_code_access(r,0x00988Eu,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9890u;
      {uint32_t a=sc_v11_ea_dp(r,0x0004u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009890u:
    if(m==1u&&x==1u){ /* A505 LDA dp */
      sc_v11_scheduler_code_access(r,0x009890u,2u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9892u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0005u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009892u:
    if(m==1u&&x==1u){ /* 8D4221 STA abs */
      sc_v11_scheduler_code_access(r,0x009892u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9895u;
      {uint32_t a=sc_v11_ea_abs(r,0x2142u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009895u:
    if(m==1u&&x==1u){ /* 6405 STZ dp */
      sc_v11_scheduler_code_access(r,0x009895u,2u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9897u;
      {uint32_t a=sc_v11_ea_dp(r,0x0005u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009897u:
    if(m==1u&&x==1u){ /* A506 LDA dp */
      sc_v11_scheduler_code_access(r,0x009897u,2u);
      r->open_bus=0x06u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9899u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0006u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009899u:
    if(m==1u&&x==1u){ /* 8D4321 STA abs */
      sc_v11_scheduler_code_access(r,0x009899u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x989Cu;
      {uint32_t a=sc_v11_ea_abs(r,0x2143u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00989Cu:
    if(m==1u&&x==1u){ /* 6406 STZ dp */
      sc_v11_scheduler_code_access(r,0x00989Cu,2u);
      r->open_bus=0x06u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x989Eu;
      {uint32_t a=sc_v11_ea_dp(r,0x0006u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00989Eu:
    if(m==1u&&x==1u){ /* 28 PLP imp */
      sc_v11_scheduler_code_access(r,0x00989Eu,1u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x989Fu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00989Fu:
    if(m==0u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x00989Fu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x98A0u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
