/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000F4(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03D287u:
    if(m==0u&&x==0u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x03D287u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD289u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D289u:
    if(m==0u&&x==0u){ /* A514 LDA dp */
      sc_v11_scheduler_code_access(r,0x03D289u,2u);
      r->open_bus=0x14u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD28Bu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0014u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D28Bu:
    if(m==0u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x03D28Bu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD28Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D28Du:
    if(m==0u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x03D28Du,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD28Eu;
      sc_v11_op_shift_accumulator(r,16u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D28Eu:
    if(m==0u&&x==0u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x03D28Eu,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD28Fu;
      c->x=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D28Fu:
    if(m==0u&&x==0u){ /* FC55D2 JSR (abs,x) */
      sc_v11_scheduler_code_access(r,0x03D28Fu,3u);
      r->open_bus=0xD2u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD292u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD291u))return 0;
      c->pc=sc_v11_bus_read16(r,((uint32_t)c->pbr<<16)|(uint16_t)(0xD255u+c->x));
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D292u:
    if((m==0u||m==1u)&&x==0u){ /* C220 REP imm; Version 12 adds the exact M=0 continuation context */
      sc_v11_scheduler_code_access(r,0x03D292u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD294u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D294u:
    if(m==0u&&x==0u){ /* A90000 LDA imm */
      sc_v11_scheduler_code_access(r,0x03D294u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD297u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D297u:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x03D297u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD299u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD299u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D299u:
    if(m==0u&&x==0u){ /* A514 LDA dp */
      sc_v11_scheduler_code_access(r,0x03D299u,2u);
      r->open_bus=0x14u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD29Bu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0014u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D29Bu:
    if(m==0u&&x==0u){ /* 10EA BPL rel */
      sc_v11_scheduler_code_access(r,0x03D29Bu,2u);
      r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD29Du;
      if((c->p&SC_FLAG_N)==0u)c->pc=0xD287u;
      if(c->pc!=0xD29Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD29Du^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2BCu:
    if(m==1u&&x==0u){ /* A9A0 LDA imm */
      sc_v11_scheduler_code_access(r,0x03D2BCu,2u);
      r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2BEu;
      sc_v11_op_lda(r,(uint16_t)(0x00A0u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2BEu:
    if(m==1u&&x==0u){ /* 853C STA dp */
      sc_v11_scheduler_code_access(r,0x03D2BEu,2u);
      r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2C0u;
      {uint32_t a=sc_v11_ea_dp(r,0x003Cu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2C0u:
    if(m==1u&&x==0u){ /* A9FF LDA imm */
      sc_v11_scheduler_code_access(r,0x03D2C0u,2u);
      r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2C2u;
      sc_v11_op_lda(r,(uint16_t)(0x00FFu),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2C2u:
    if(m==1u&&x==0u){ /* 8D2A0B STA abs */
      sc_v11_scheduler_code_access(r,0x03D2C2u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2C5u;
      {uint32_t a=sc_v11_ea_abs(r,0x0B2Au);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2C5u:
    if(m==1u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x03D2C5u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2C6u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2C6u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x03D2C6u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2C8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2C8u:
    if(m==1u&&x==0u){ /* A56E LDA dp */
      sc_v11_scheduler_code_access(r,0x03D2C8u,2u);
      r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2CAu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x006Eu))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2CAu:
    if(m==1u&&x==0u){ /* C9E0 CMP imm */
      sc_v11_scheduler_code_access(r,0x03D2CAu,2u);
      r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2CCu;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x00E0u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2CCu:
    if(m==1u&&x==0u){ /* F00A BEQ rel */
      sc_v11_scheduler_code_access(r,0x03D2CCu,2u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2CEu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xD2D8u;
      if(c->pc!=0xD2CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD2CEu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2CEu:
    if(m==1u&&x==0u){ /* C63C DEC dp */
      sc_v11_scheduler_code_access(r,0x03D2CEu,2u);
      r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2D0u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x003Cu),8u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2D0u:
    if(m==1u&&x==0u){ /* D006 BNE rel */
      sc_v11_scheduler_code_access(r,0x03D2D0u,2u);
      r->open_bus=0x06u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2D2u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xD2D8u;
      if(c->pc!=0xD2D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD2D2u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2D2u:
    if(m==1u&&x==0u){ /* A90E LDA imm; Version 12 periodic counter rollover */
      sc_v11_scheduler_code_access(r,0x03D2D2u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2D4u;
      sc_v11_op_lda(r,(uint16_t)(0x000Eu),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2D4u:
    if(m==1u&&x==0u){ /* 853C STA dp; Version 12 periodic counter reload */
      sc_v11_scheduler_code_access(r,0x03D2D4u,2u);
      r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2D6u;
      {uint32_t a=sc_v11_ea_dp(r,0x003Cu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2D6u:
    if(m==1u&&x==0u){ /* C66E DEC dp; Version 12 periodic counter decrement */
      sc_v11_scheduler_code_access(r,0x03D2D6u,2u);
      r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2D8u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x006Eu),8u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2D8u:
    if(m==1u&&x==0u){ /* 22AE9305 JSL long */
      sc_v11_scheduler_code_access(r,0x03D2D8u,4u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2DCu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD2DBu))return 0;
      c->pbr=0x05u;
      c->pc=0x93AEu;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2DCu:
    if((m==0u||m==1u)&&x==0u){ /* C230 REP imm; Version 12 widened return context */
      sc_v11_scheduler_code_access(r,0x03D2DCu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2DEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2DEu:
    if(m==0u&&x==0u){ /* AD1B01 LDA abs */
      sc_v11_scheduler_code_access(r,0x03D2DEu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2E1u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu))),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2E1u:
    if(m==0u&&x==0u){ /* 293030 AND imm */
      sc_v11_scheduler_code_access(r,0x03D2E1u,3u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2E4u;
      sc_v11_op_and(r,(uint16_t)(0x3030u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2E4u:
    if(m==0u&&x==0u){ /* C93030 CMP imm */
      sc_v11_scheduler_code_access(r,0x03D2E4u,3u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2E7u;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x3030u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2E7u:
    if(m==0u&&x==0u){ /* D00B BNE rel */
      sc_v11_scheduler_code_access(r,0x03D2E7u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2E9u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xD2F4u;
      if(c->pc!=0xD2E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD2E9u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2F4u:
    if(m==0u&&x==0u){ /* A5C9 LDA dp */
      sc_v11_scheduler_code_access(r,0x03D2F4u,2u);
      r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2F6u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00C9u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2F6u:
    if(m==0u&&x==0u){ /* 290090 AND imm */
      sc_v11_scheduler_code_access(r,0x03D2F6u,3u);
      r->open_bus=0x90u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2F9u;
      sc_v11_op_and(r,(uint16_t)(0x9000u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2F9u:
    if(m==0u&&x==0u){ /* F008 BEQ rel */
      sc_v11_scheduler_code_access(r,0x03D2F9u,2u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2FBu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xD303u;
      if(c->pc!=0xD2FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD2FBu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D303u:
    if(m==0u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x03D303u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD304u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2FBu:
    if(m==0u&&x==0u){ /* 2074E5 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03D2FBu,3u);
      r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD2FEu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD2FDu))return 0;
      c->pc=0xE574u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2FEu:
    if(m==0u&&x==0u){ /* 2049E3 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03D2FEu,3u);
      r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD301u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD300u))return 0;
      c->pc=0xE349u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D301u:
    if(m==0u&&x==0u){ /* E614 INC dp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03D301u,2u);
      r->open_bus=0x14u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD303u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0014u),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D304u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D304u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD306u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D306u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D306u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD308u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D308u:
    if(m==0u&&x==0u){ /* A90400 LDA imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D308u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD30Bu;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D30Bu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D30Bu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD30Du;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,c->pc))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D31Eu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D31Eu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD320u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,c->pc))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D30Du:
    if(m==0u&&x==0u){ /* 64B5 STZ dp; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D30Du,2u);
      r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD30Fu;
      {uint32_t a=sc_v11_ea_dp(r,0x00B5u);sc_v11_bus_write16(r,a,0u);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D30Fu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D30Fu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD311u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D311u:
    if(m==1u&&x==0u){ /* A5B3 LDA dp; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D311u,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD313u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u)),8u);if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D313u:
    if(m==1u&&x==0u){ /* 297F AND imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D313u,2u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD315u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D315u:
    if(m==1u&&x==0u){ /* 85B1 STA dp; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D315u,2u);
      r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD317u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D317u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D317u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD319u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D319u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D319u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD31Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D31Bu:
    if(m==0u&&x==0u){ /* A90100 LDA imm; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D31Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD31Eu;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D320u:
    if(m==0u&&x==0u){ /* 2223BB02 JSL long; Version 13 menu initialization and COP continuation */
      sc_v11_scheduler_code_access(r,0x03D320u,4u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xD324u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD323u))return 0;
      c->pbr=0x02u;
      c->pc=0xBB23u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D324u:
    if(m==1u&&x==1u){ /* 228FBC02 JSL long; Version 13 menu layout and graphics setup islands */
      sc_v11_scheduler_code_access(r,0x03D324u,4u);r->open_bus=0x02u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD328u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD327u))return 0;
      c->pbr=0x02u;c->pc=0xBC8Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D328u:
    if(m==0u&&x==0u){ /* 2248BC02 JSL long; Version 13 menu layout and graphics setup islands */
      sc_v11_scheduler_code_access(r,0x03D328u,4u);r->open_bus=0x02u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD32Cu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD32Bu))return 0;
      c->pbr=0x02u;c->pc=0xBC48u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D32Cu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 menu layout and graphics setup islands */
      sc_v11_scheduler_code_access(r,0x03D32Cu,2u);r->open_bus=0x20u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD32Eu;sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;}break;
  case 0x03D32Eu:
    if(m==1u&&x==0u){ /* 646A STZ dp; Version 13 menu layout and graphics setup islands */
      sc_v11_scheduler_code_access(r,0x03D32Eu,2u);r->open_bus=0x6Au;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD330u;{uint32_t a=sc_v11_ea_dp(r,0x006Au);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;}break;
  case 0x03D330u:
    if(m==1u&&x==0u){ /* 646B STZ dp; Version 13 menu layout and graphics setup islands */
      sc_v11_scheduler_code_access(r,0x03D330u,2u);r->open_bus=0x6Bu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD332u;{uint32_t a=sc_v11_ea_dp(r,0x006Bu);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;}break;
  case 0x03D332u:
    if(m==1u&&x==0u){ /* 60 RTS imp; Version 13 menu layout and graphics setup islands */
      sc_v11_scheduler_code_access(r,0x03D332u,1u);r->open_bus=0x60u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD333u;{uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;}break;
  case 0x03D333u:
    if(m==0u&&x==0u){ /* E230 SEP imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D333u,2u);r->open_bus=0x30u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD335u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D335u:
    if(m==1u&&x==1u){ /* A000 LDY imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D335u,2u);r->open_bus=0x00u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD337u;
      sc_v11_op_ldy(r,0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D337u:
    if(m==1u&&x==1u){ /* A544 LDA dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D337u,2u);r->open_bus=0x44u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD339u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0044u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D33Eu:
    if(m==1u&&x==1u){ /* A5CA LDA dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D33Eu,2u);r->open_bus=0xCAu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD340u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00CAu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D360u:
    if(m==1u&&x==1u){ /* A5CA LDA dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D360u,2u);r->open_bus=0xCAu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD362u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00CAu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D339u:
    if(m==1u&&x==1u){ /* D001 branch; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D339u,2u);r->open_bus=0x01u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD33Bu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xD33Cu;
      if(c->pc!=0xD33Bu)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D33Bu:
    if(m==1u&&x==1u){ /* C8 INY imp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D33Bu,1u);r->open_bus=0xC8u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD33Cu;
      c->y=(uint16_t)((c->y+1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D33Cu:
    if(m==1u&&x==1u){ /* 8479 STY dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D33Cu,2u);r->open_bus=0x79u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD33Eu;
      {uint32_t a=sc_v11_ea_dp(r,0x0079u);sc_v11_bus_write8(r,a,(uint8_t)c->y);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D340u:
    if(m==1u&&x==1u){ /* 290C AND imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D340u,2u);r->open_bus=0x0Cu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD342u;
      sc_v11_op_and(r,0x000Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D342u:
    if(m==1u&&x==1u){ /* F01C branch; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D342u,2u);r->open_bus=0x1Cu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD344u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xD360u;
      if(c->pc!=0xD344u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D344u:
    if(m==1u&&x==1u){ /* A63E LDX dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D344u,2u);r->open_bus=0x3Eu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD346u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x003Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D34Fu:
    if(m==1u&&x==1u){ /* A679 LDX dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D34Fu,2u);r->open_bus=0x79u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD351u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0079u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D369u:
    if(m==1u&&x==1u){ /* A63E LDX dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D369u,2u);r->open_bus=0x3Eu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD36Bu;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x003Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D346u:
    if(m==1u&&x==1u){ /* C904 CMP imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D346u,2u);r->open_bus=0x04u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD348u;
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D348u:
    if(m==1u&&x==1u){ /* D009 branch; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D348u,2u);r->open_bus=0x09u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD34Au;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xD353u;
      if(c->pc!=0xD34Au)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D34Au:
    if(m==1u&&x==1u){ /* E8 INX imp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D34Au,1u);r->open_bus=0xE8u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD34Bu;
      c->x=(uint16_t)((c->x+1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D34Bu:
    if(m==1u&&x==1u){ /* E004 CPX imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D34Bu,2u);r->open_bus=0x04u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD34Du;
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D34Du:
    if(m==1u&&x==1u){ /* D00B branch; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D34Du,2u);r->open_bus=0x0Bu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD34Fu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xD35Au;
      if(c->pc!=0xD34Fu)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D351u:
    if(m==1u&&x==1u){ /* 8007 BRA rel; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D351u,2u);r->open_bus=0x07u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD353u;
      c->pc=0xD35Au;sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D353u:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D353u,1u);r->open_bus=0xCAu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD354u;
      c->x=(uint16_t)((c->x-1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D354u:
    if(m==1u&&x==1u){ /* E479 CPX dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D354u,2u);r->open_bus=0x79u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD356u;
      sc_v11_op_compare(r,c->x,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0079u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D356u:
    if(m==1u&&x==1u){ /* 1002 branch; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D356u,2u);r->open_bus=0x02u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD358u;
      if((c->p&SC_FLAG_N)==0u)c->pc=0xD35Au;
      if(c->pc!=0xD358u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D358u:
    if(m==1u&&x==1u){ /* A203 LDX imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D358u,2u);r->open_bus=0x03u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD35Au;
      sc_v11_op_ldx(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D35Au:
    if(m==1u&&x==1u){ /* 863E STX dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D35Au,2u);r->open_bus=0x3Eu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD35Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x003Eu);sc_v11_bus_write8(r,a,(uint8_t)c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D35Cu:
    if(m==1u&&x==1u){ /* A907 LDA imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D35Cu,2u);r->open_bus=0x07u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD35Eu;
      sc_v11_op_lda(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D35Eu:
    if(m==1u&&x==1u){ /* 8506 STA dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D35Eu,2u);r->open_bus=0x06u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD360u;
      {uint32_t a=sc_v11_ea_dp(r,0x0006u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D362u:
    if(m==1u&&x==1u){ /* 2990 AND imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D362u,2u);r->open_bus=0x90u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD364u;
      sc_v11_op_and(r,0x0090u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D364u:
    if(m==1u&&x==1u){ /* F00A branch; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D364u,2u);r->open_bus=0x0Au;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD366u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xD370u;
      if(c->pc!=0xD366u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D366u:
    if(m==1u&&x==1u){ /* 2074E5 JSR abs; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D366u,3u);r->open_bus=0xE5u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD369u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD368u))return 0;c->pc=0xE574u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D36Bu:
    if(m==1u&&x==1u){ /* BD84D3 LDA abs,x; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D36Bu,3u);r->open_bus=0xD3u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD36Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD384u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D36Eu:
    if(m==1u&&x==1u){ /* 8514 STA dp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D36Eu,2u);r->open_bus=0x14u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD370u;
      {uint32_t a=sc_v11_ea_dp(r,0x0014u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D370u:
    if(m==1u&&x==1u){ /* C220 REP imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D370u,2u);r->open_bus=0x20u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD372u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D372u:
    if(m==0u&&x==1u){ /* A90100 LDA imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D372u,3u);r->open_bus=0x00u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD375u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D375u:
    if(m==0u&&x==1u){ /* 0200 COP imm; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D375u,2u);r->open_bus=0x00u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD377u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,c->pc))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D377u:
    if(m==0u&&x==1u){ /* 228FBC02 JSL long; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D377u,4u);r->open_bus=0x02u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD37Bu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD37Au))return 0;
      c->pbr=0x02u;c->pc=0xBC8Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D37Bu:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 13 slot selection and menu transition */
      sc_v11_scheduler_code_access(r,0x03D37Bu,1u);r->open_bus=0x60u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD37Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D15Fu:
    if(m==0u&&x==0u){ /* 8B PHB; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D15Fu,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD160u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D160u:
    if(m==0u&&x==0u){ /* E220 SEP; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D160u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD162u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D162u:
    if(m==1u&&x==0u){ /* A97E LDA imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D162u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD164u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D164u:
    if(m==1u&&x==0u){ /* 48 PHA; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D164u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD165u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D165u:
    if(m==1u&&x==0u){ /* AB PLB; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D165u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD166u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D166u:
    if(m==1u&&x==0u){ /* C220 REP; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D166u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD168u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D168u:
    if(m==0u&&x==0u){ /* A00000 LDY imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D168u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD16Bu;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D16Bu:
    if(m==0u&&x==0u){ /* BB TYX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D16Bu,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD16Cu;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D16Cu:
    if(m==0u&&x==0u){ /* B90080 LDA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D16Cu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD16Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);if(x==0u||(((0x8000u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D16Fu:
    if(m==0u&&x==0u){ /* C9FFFF CMP imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D16Fu,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD172u;
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D172u:
    if(m==0u&&x==0u){ /* BEQ 45; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D172u,2u);r->open_bus=0x45u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD174u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD1B9u;}if(c->pc!=0xD174u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD174u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D174u:
    if(m==0u&&x==0u){ /* 290040 AND imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D174u,3u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD177u;
      sc_v11_op_and(r,0x4000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D177u:
    if(m==0u&&x==0u){ /* BEQ 33; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D177u,2u);r->open_bus=0x33u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD179u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD1ACu;}if(c->pc!=0xD179u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD179u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D179u:
    if(m==0u&&x==0u){ /* B90080 LDA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D179u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD17Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);if(x==0u||(((0x8000u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D17Cu:
    if(m==0u&&x==0u){ /* 29FF03 AND imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D17Cu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD17Fu;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D17Fu:
    if(m==0u&&x==0u){ /* 8D7900 STA abs; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D17Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD182u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0079u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D182u:
    if(m==0u&&x==0u){ /* B90080 LDA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D182u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD185u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);if(x==0u||(((0x8000u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D185u:
    if(m==0u&&x==0u){ /* 29003C AND imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D185u,3u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD188u;
      sc_v11_op_and(r,0x3C00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D188u:
    if(m==0u&&x==0u){ /* EB XBA; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D188u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD189u;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D189u:
    if(m==0u&&x==0u){ /* 4A LSR acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D189u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD18Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D18Au:
    if(m==0u&&x==0u){ /* 4A LSR acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D18Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD18Bu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D18Bu:
    if(m==0u&&x==0u){ /* 8D7C00 STA abs; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D18Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD18Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x007Cu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D18Eu:
    if(m==0u&&x==0u){ /* 8A TXA; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D18Eu,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD18Fu;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D18Fu:
    if(m==0u&&x==0u){ /* 38 SEC; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D18Fu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD190u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D190u:
    if(m==0u&&x==0u){ /* ED7900 SBC abs; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D190u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD193u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0079u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D193u:
    if(m==0u&&x==0u){ /* 5A PHY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D193u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD194u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D194u:
    if(m==0u&&x==0u){ /* A8 TAY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D194u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD195u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D195u:
    if(m==0u&&x==0u){ /* DA PHX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D195u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD196u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D196u:
    if(m==0u&&x==0u){ /* BB TYX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D196u,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD197u;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D197u:
    if(m==0u&&x==0u){ /* BF00027F LDA long,x; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D197u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD19Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D19Bu:
    if(m==0u&&x==0u){ /* FA PLX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D19Bu,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD19Cu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_op_ldx(r,sc_v11_pop16(r),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D19Cu:
    if(m==0u&&x==0u){ /* 9F00027F STA long,x; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D19Cu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1A0u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1A0u:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1A0u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1A1u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1A1u:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1A1u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1A2u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1A2u:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1A2u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1A3u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1A3u:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1A3u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1A4u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1A4u:
    if(m==0u&&x==0u){ /* CE7C00 DEC abs; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1A4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1A7u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x007Cu),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1A7u:
    if(m==0u&&x==0u){ /* BNE EC; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1A7u,2u);r->open_bus=0xECu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD195u;}if(c->pc!=0xD1A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD1A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1A9u:
    if(m==0u&&x==0u){ /* 7A PLY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1A9u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1AAu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1AAu:
    if(m==0u&&x==0u){ /* BRA 09; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1AAu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1ACu;
      c->pc=0xD1B5u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD1ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1ACu:
    if(m==0u&&x==0u){ /* B90080 LDA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1ACu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1AFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);if(x==0u||(((0x8000u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1AFu:
    if(m==0u&&x==0u){ /* 9F00027F STA long,x; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1AFu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1B3u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1B3u:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1B3u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1B4u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1B4u:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1B4u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1B5u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1B5u:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1B5u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1B6u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1B6u:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1B6u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1B7u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1B7u:
    if(m==0u&&x==0u){ /* BRA B3; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1B7u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1B9u;
      c->pc=0xD16Cu;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD1B9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1B9u:
    if(m==0u&&x==0u){ /* A9FFFF LDA imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1B9u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1BCu;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1BCu:
    if(m==0u&&x==0u){ /* 9F00027F STA long,x; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1BCu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1C0u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1C0u:
    if(m==0u&&x==0u){ /* A00000 LDY imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1C0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1C3u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1C3u:
    if(m==0u&&x==0u){ /* BB TYX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1C3u,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1C4u;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1C4u:
    if(m==0u&&x==0u){ /* BF00027F LDA long,x; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1C4u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1C8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1C8u:
    if(m==0u&&x==0u){ /* C9FFFF CMP imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1C8u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1CBu;
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1CBu:
    if(m==0u&&x==0u){ /* BEQ 2E; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1CBu,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1CDu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD1FBu;}if(c->pc!=0xD1CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD1CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1CDu:
    if(m==0u&&x==0u){ /* 29003C AND imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1CDu,3u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1D0u;
      sc_v11_op_and(r,0x3C00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1D0u:
    if(m==0u&&x==0u){ /* BEQ 19; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1D0u,2u);r->open_bus=0x19u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1D2u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD1EBu;}if(c->pc!=0xD1D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD1D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1D2u:
    if(m==0u&&x==0u){ /* 4A LSR acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1D2u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1D3u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1D3u:
    if(m==0u&&x==0u){ /* 4A LSR acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1D3u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1D4u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1D4u:
    if(m==0u&&x==0u){ /* EB XBA; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1D4u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1D5u;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1D5u:
    if(m==0u&&x==0u){ /* 8D7900 STA abs; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1D5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1D8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0079u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1D8u:
    if(m==0u&&x==0u){ /* BF00027F LDA long,x; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1D8u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1DCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1DCu:
    if(m==0u&&x==0u){ /* 29FF83 AND imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1DCu,3u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1DFu;
      sc_v11_op_and(r,0x83FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1DFu:
    if(m==0u&&x==0u){ /* 990080 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1DFu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1E2u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x8000u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1E2u:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1E2u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1E3u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1E3u:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1E3u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1E4u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1E4u:
    if(m==0u&&x==0u){ /* CE7900 DEC abs; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1E4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1E7u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0079u),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1E7u:
    if(m==0u&&x==0u){ /* BPL F6; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1E7u,2u);r->open_bus=0xF6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1E9u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD1DFu;}if(c->pc!=0xD1E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD1E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1E9u:
    if(m==0u&&x==0u){ /* BRA 0C; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1E9u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1EBu;
      c->pc=0xD1F7u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD1EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1EBu:
    if(m==0u&&x==0u){ /* BF00027F LDA long,x; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1EBu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1EFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1EFu:
    if(m==0u&&x==0u){ /* 29FF83 AND imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1EFu,3u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1F2u;
      sc_v11_op_and(r,0x83FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1F2u:
    if(m==0u&&x==0u){ /* 990080 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1F2u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1F5u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x8000u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1F5u:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1F5u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1F6u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1F6u:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1F6u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1F7u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1F7u:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1F7u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1F8u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1F8u:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1F8u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1F9u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1F9u:
    if(m==0u&&x==0u){ /* BRA C9; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1F9u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1FBu;
      c->pc=0xD1C4u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD1FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1FBu:
    if(m==0u&&x==0u){ /* C230 REP; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1FBu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD1FDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D1FDu:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D1FDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD200u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D200u:
    if(m==0u&&x==0u){ /* 8F00027F STA long; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D200u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD204u;
      sc_v11_bus_write16(r,0x7F0200u,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D204u:
    if(m==0u&&x==0u){ /* A20002 LDX imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D204u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD207u;
      sc_v11_op_ldx(r,0x0200u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D207u:
    if(m==0u&&x==0u){ /* A00102 LDY imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D207u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD20Au;
      sc_v11_op_ldy(r,0x0201u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D20Au:
    if(m==0u&&x==0u){ /* A9BF5D LDA imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D20Au,3u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD20Du;
      sc_v11_op_lda(r,0x5DBFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D20Du:
    if(m==0u&&x==0u){ /* 547F7F MVN; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D20Du,3u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD210u;
      sc_v11_bus_write8(r,((uint32_t)0x7Fu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Fu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Fu;if(c->a!=0xFFFFu)c->pc=0xD20Du;sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D210u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D210u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD213u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D213u:
    if(m==0u&&x==0u){ /* 9B TXY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D213u,1u);r->open_bus=0x9Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD214u;
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D214u:
    if(m==0u&&x==0u){ /* B90002 LDA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D214u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD217u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0200u)),16u);if(x==0u||(((0x0200u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D217u:
    if(m==0u&&x==0u){ /* BNE 33; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D217u,2u);r->open_bus=0x33u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD219u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD24Cu;}if(c->pc!=0xD219u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD219u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D219u:
    if(m==0u&&x==0u){ /* BF00807E LDA long,x; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D219u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD21Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D21Du:
    if(m==0u&&x==0u){ /* BPL 28; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D21Du,2u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD21Fu;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD247u;}if(c->pc!=0xD21Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD21Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D21Fu:
    if(m==0u&&x==0u){ /* 29FF7F AND imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D21Fu,3u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD222u;
      sc_v11_op_and(r,0x7FFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D222u:
    if(m==0u&&x==0u){ /* 990002 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D222u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD225u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0200u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D225u:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D225u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD226u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D226u:
    if(m==0u&&x==0u){ /* 990202 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D226u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD229u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0202u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D229u:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D229u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD22Au;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D22Au:
    if(m==0u&&x==0u){ /* 990402 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D22Au,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD22Du;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0204u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D22Du:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D22Du,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD22Eu;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D22Eu:
    if(m==0u&&x==0u){ /* 99F002 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D22Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD231u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02F0u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D231u:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D231u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD232u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D232u:
    if(m==0u&&x==0u){ /* 99F202 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D232u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD235u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02F2u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D235u:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D235u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD236u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D236u:
    if(m==0u&&x==0u){ /* 99F402 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D236u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD239u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02F4u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D239u:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D239u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD23Au;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D23Au:
    if(m==0u&&x==0u){ /* 99E003 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D23Au,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD23Du;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x03E0u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D23Du:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D23Du,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD23Eu;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D23Eu:
    if(m==0u&&x==0u){ /* 99E203 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D23Eu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD241u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x03E2u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D241u:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D241u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD242u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D242u:
    if(m==0u&&x==0u){ /* 99E403 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D242u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD245u;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x03E4u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D245u:
    if(m==0u&&x==0u){ /* BRA 03; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D245u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD247u;
      c->pc=0xD24Au;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD247u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D247u:
    if(m==0u&&x==0u){ /* 990002 STA abs,y; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D247u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD24Au;
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0200u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D24Au:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D24Au,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD24Bu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D24Bu:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D24Bu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD24Cu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D24Cu:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D24Cu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD24Du;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D24Du:
    if(m==0u&&x==0u){ /* C8 INY; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D24Du,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD24Eu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D24Eu:
    if(m==0u&&x==0u){ /* C0C05D CPY imm; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D24Eu,3u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD251u;
      sc_v11_op_compare(r,c->y,0x5DC0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D251u:
    if(m==0u&&x==0u){ /* BNE C1; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D251u,2u);r->open_bus=0xC1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD253u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD214u;}if(c->pc!=0xD253u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD253u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D253u:
    if(m==0u&&x==0u){ /* AB PLB; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D253u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD254u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D254u:
    if(m==0u&&x==0u){ /* 60 RTS; Version 15 B-mode map-buffer transformation island */
      sc_v11_scheduler_code_access(r,0x03D254u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD255u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D29Du:
    if(m==0u&&x==0u){ /* E220 SEP; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D29Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD29Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D29Fu:
    if(m==1u&&x==0u){ /* A5B3 LDA dp; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D29Fu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2A1u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2A1u:
    if(m==1u&&x==0u){ /* 297F AND imm; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2A1u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2A3u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2A3u:
    if(m==1u&&x==0u){ /* 85B1 STA dp; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2A3u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2A5u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00B1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2A5u:
    if(m==1u&&x==0u){ /* C220 REP; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2A5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2A7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2A7u:
    if(m==0u&&x==0u){ /* A90100 LDA imm; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2A7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2AAu;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2AAu:
    if(m==0u&&x==0u){ /* 8512 STA dp; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2AAu,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2ACu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0012u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2ACu:
    if(m==0u&&x==0u){ /* E220 SEP; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2ACu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2AEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2AEu:
    if(m==1u&&x==0u){ /* A9FF LDA imm; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2AEu,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2B0u;
      sc_v11_op_lda(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2B0u:
    if(m==1u&&x==0u){ /* 8D2A0B STA abs; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2B0u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2B3u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2B3u:
    if(m==1u&&x==0u){ /* A900 LDA imm; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2B3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2B5u;
      sc_v11_op_lda(r,0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2B5u:
    if(m==1u&&x==0u){ /* 48 PHA; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2B5u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2B6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2B6u:
    if(m==1u&&x==0u){ /* AB PLB; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2B6u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2B7u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2B7u:
    if(m==1u&&x==0u){ /* 6B RTL; Version 15 B-mode task return path */
      sc_v11_scheduler_code_access(r,0x03D2B7u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2B8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
