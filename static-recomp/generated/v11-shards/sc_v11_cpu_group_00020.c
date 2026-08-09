/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_00020(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0080B2u:
    if(m==0u&&x==0u){ /* 78 SEI imp */
      sc_v11_scheduler_code_access(r,0x0080B2u,1u);
      r->open_bus=0x78u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80B3u;
      c->p=(uint8_t)(c->p | SC_FLAG_I);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u){ /* 78 SEI imp */
      sc_v11_scheduler_code_access(r,0x0080B2u,1u);
      r->open_bus=0x78u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80B3u;
      c->p=(uint8_t)(c->p | SC_FLAG_I);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u){ /* 78 SEI imp */
      sc_v11_scheduler_code_access(r,0x0080B2u,1u);
      r->open_bus=0x78u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80B3u;
      c->p=(uint8_t)(c->p | SC_FLAG_I);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080B3u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0080B3u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0080B3u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0080B3u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080B5u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x0080B5u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80B6u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x0080B5u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80B6u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080B6u:
    if(m==1u&&x==0u){ /* AFB10000 LDA long */
      sc_v11_scheduler_code_access(r,0x0080B6u,4u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80BAu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_long(0x0000B1u))),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u){ /* AFB10000 LDA long */
      sc_v11_scheduler_code_access(r,0x0080B6u,4u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80BAu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_long(0x0000B1u))),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080BAu:
    if(m==1u&&x==0u){ /* 3004 BMI rel */
      sc_v11_scheduler_code_access(r,0x0080BAu,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80BCu;
      if((c->p&SC_FLAG_N)!=0u)c->pc=0x80C0u;
      if(c->pc!=0x80BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80BCu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u){ /* 3004 BMI rel */
      sc_v11_scheduler_code_access(r,0x0080BAu,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80BCu;
      if((c->p&SC_FLAG_N)!=0u)c->pc=0x80C0u;
      if(c->pc!=0x80BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80BCu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080BCu:
    if(m==1u&&x==0u){ /* E6B9 INC dp */
      sc_v11_scheduler_code_access(r,0x0080BCu,2u);
      r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80BEu;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00B9u),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u){ /* E6B9 INC dp */
      sc_v11_scheduler_code_access(r,0x0080BCu,2u);
      r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80BEu;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00B9u),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080BEu:
    if(m==1u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x0080BEu,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80BFu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x0080BEu,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80BFu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080BFu:
    if(m==1u&&x==0u){ /* 40 RTI imp */
      sc_v11_scheduler_code_access(r,0x0080BFu,1u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C0u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
      c->pc=sc_v11_pop16(r);
      c->pbr=sc_v11_pop8(r);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u){ /* 40 RTI imp */
      sc_v11_scheduler_code_access(r,0x0080BFu,1u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C0u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
      c->pc=sc_v11_pop16(r);
      c->pbr=sc_v11_pop8(r);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C0u:
    if(m==1u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x0080C0u,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C1u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C1u:
    if(m==1u&&x==0u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x0080C1u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C3u:
    if(m==0u&&x==0u){ /* 0B PHD imp */
      sc_v11_scheduler_code_access(r,0x0080C3u,1u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C4u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->d))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C4u:
    if(m==0u&&x==0u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x0080C4u,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C5u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C5u:
    if(m==0u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x0080C5u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C6u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->a))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C6u:
    if(m==0u&&x==0u){ /* DA PHX imp */
      sc_v11_scheduler_code_access(r,0x0080C6u,1u);
      r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C7u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->x))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C7u:
    if(m==0u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x0080C7u,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80C8u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C8u:
    if(m==0u&&x==0u){ /* A90000 LDA imm */
      sc_v11_scheduler_code_access(r,0x0080C8u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80CBu;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080CBu:
    if(m==0u&&x==0u){ /* 5B TCD imp */
      sc_v11_scheduler_code_access(r,0x0080CBu,1u);
      r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80CCu;
      c->d=c->a;
      sc_v11_set_nz16(c,c->d);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080CCu:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0080CCu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80CEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080CEu:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x0080CEu,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80CFu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080CFu:
    if(m==1u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x0080CFu,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80D0u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080D0u:
    if(m==1u&&x==0u){ /* AD1042 LDA abs */
      sc_v11_scheduler_code_access(r,0x0080D0u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80D3u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x4210u))),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080D3u:
    if(m==1u&&x==0u){ /* A512 LDA dp */
      sc_v11_scheduler_code_access(r,0x0080D3u,2u);
      r->open_bus=0x12u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80D5u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0012u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080D5u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x0080D5u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80D7u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x80DAu;
      if(c->pc!=0x80D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80D7u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080D7u:
    if(m==1u&&x==0u){ /* 4CB581 JMP abs */
      sc_v11_scheduler_code_access(r,0x0080D7u,3u);
      r->open_bus=0x81u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x80DAu;
      c->pc=0x81B5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008193u:
    if(m==0u&&x==0u){ /* 207098 JSR abs */
      sc_v11_scheduler_code_access(r,0x008193u,3u);
      r->open_bus=0x98u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8196u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8195u))return 0;
      c->pc=0x9870u;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008196u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008196u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8198u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008198u:
    if(m==1u&&x==0u){ /* A901 LDA imm */
      sc_v11_scheduler_code_access(r,0x008198u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x819Au;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00819Au:
    if(m==1u&&x==0u){ /* 85B9 STA dp */
      sc_v11_scheduler_code_access(r,0x00819Au,2u);
      r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x819Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x00B9u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00819Cu:
    if(m==1u&&x==0u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x00819Cu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x819Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00819Eu:
    if(m==0u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x00819Eu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x819Fu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00819Fu:
    if(m==0u&&x==0u){ /* FA PLX imp */
      sc_v11_scheduler_code_access(r,0x00819Fu,1u);
      r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81A0u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldx(r,sc_v11_pop16(r),16u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A0u:
    if(m==0u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x0081A0u,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81A1u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop16(r),16u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A1u:
    if(m==0u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x0081A1u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81A2u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A2u:
    if(m==0u&&x==0u){ /* 2B PLD imp */
      sc_v11_scheduler_code_access(r,0x0081A2u,1u);
      r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81A3u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->d=sc_v11_pop16(r);
      sc_v11_set_nz16(c,c->d);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A3u:
    if(m==0u&&x==0u){ /* 40 RTI imp */
      sc_v11_scheduler_code_access(r,0x0081A3u,1u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81A4u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
      c->pc=sc_v11_pop16(r);
      c->pbr=sc_v11_pop8(r);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B5u:
    if(m==1u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0081B5u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81B7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B7u:
    if(m==1u&&x==0u){ /* A5B5 LDA dp */
      sc_v11_scheduler_code_access(r,0x0081B7u,2u);
      r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81B9u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B5u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B9u:
    if(m==1u&&x==0u){ /* 8D0C42 STA abs */
      sc_v11_scheduler_code_access(r,0x0081B9u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81BCu;
      {uint32_t a=sc_v11_ea_abs(r,0x420Cu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081BCu:
    if(m==1u&&x==0u){ /* 20DD8C JSR abs */
      sc_v11_scheduler_code_access(r,0x0081BCu,3u);
      r->open_bus=0x8Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81BFu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x81BEu))return 0;
      c->pc=0x8CDDu;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081BFu:
    if(m==1u&&x==0u){ /* A516 LDA dp */
      sc_v11_scheduler_code_access(r,0x0081BFu,2u);
      r->open_bus=0x16u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81C1u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0016u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081C1u:
    if(m==1u&&x==0u){ /* 8D0D21 STA abs */
      sc_v11_scheduler_code_access(r,0x0081C1u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81C4u;
      {uint32_t a=sc_v11_ea_abs(r,0x210Du);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081C4u:
    if(m==1u&&x==0u){ /* A517 LDA dp */
      sc_v11_scheduler_code_access(r,0x0081C4u,2u);
      r->open_bus=0x17u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81C6u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0017u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081C6u:
    if(m==1u&&x==0u){ /* 8D0D21 STA abs */
      sc_v11_scheduler_code_access(r,0x0081C6u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81C9u;
      {uint32_t a=sc_v11_ea_abs(r,0x210Du);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081C9u:
    if(m==1u&&x==0u){ /* A51A LDA dp */
      sc_v11_scheduler_code_access(r,0x0081C9u,2u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81CBu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x001Au))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081CBu:
    if(m==1u&&x==0u){ /* 8D0F21 STA abs */
      sc_v11_scheduler_code_access(r,0x0081CBu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81CEu;
      {uint32_t a=sc_v11_ea_abs(r,0x210Fu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081CEu:
    if(m==1u&&x==0u){ /* A51B LDA dp */
      sc_v11_scheduler_code_access(r,0x0081CEu,2u);
      r->open_bus=0x1Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81D0u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x001Bu))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081D0u:
    if(m==1u&&x==0u){ /* 8D0F21 STA abs */
      sc_v11_scheduler_code_access(r,0x0081D0u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81D3u;
      {uint32_t a=sc_v11_ea_abs(r,0x210Fu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081D3u:
    if(m==1u&&x==0u){ /* A51E LDA dp */
      sc_v11_scheduler_code_access(r,0x0081D3u,2u);
      r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81D5u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x001Eu))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081D5u:
    if(m==1u&&x==0u){ /* 8D1121 STA abs */
      sc_v11_scheduler_code_access(r,0x0081D5u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81D8u;
      {uint32_t a=sc_v11_ea_abs(r,0x2111u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081D8u:
    if(m==1u&&x==0u){ /* A51F LDA dp */
      sc_v11_scheduler_code_access(r,0x0081D8u,2u);
      r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81DAu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x001Fu))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081DAu:
    if(m==1u&&x==0u){ /* 8D1121 STA abs */
      sc_v11_scheduler_code_access(r,0x0081DAu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81DDu;
      {uint32_t a=sc_v11_ea_abs(r,0x2111u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081DDu:
    if(m==1u&&x==0u){ /* A518 LDA dp */
      sc_v11_scheduler_code_access(r,0x0081DDu,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81DFu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0018u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081DFu:
    if(m==1u&&x==0u){ /* 8D0E21 STA abs */
      sc_v11_scheduler_code_access(r,0x0081DFu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81E2u;
      {uint32_t a=sc_v11_ea_abs(r,0x210Eu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081E2u:
    if(m==1u&&x==0u){ /* A519 LDA dp */
      sc_v11_scheduler_code_access(r,0x0081E2u,2u);
      r->open_bus=0x19u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81E4u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0019u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081E4u:
    if(m==1u&&x==0u){ /* 8D0E21 STA abs */
      sc_v11_scheduler_code_access(r,0x0081E4u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81E7u;
      {uint32_t a=sc_v11_ea_abs(r,0x210Eu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081E7u:
    if(m==1u&&x==0u){ /* A51C LDA dp */
      sc_v11_scheduler_code_access(r,0x0081E7u,2u);
      r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81E9u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x001Cu))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081E9u:
    if(m==1u&&x==0u){ /* 8D1021 STA abs */
      sc_v11_scheduler_code_access(r,0x0081E9u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81ECu;
      {uint32_t a=sc_v11_ea_abs(r,0x2110u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081ECu:
    if(m==1u&&x==0u){ /* A51D LDA dp */
      sc_v11_scheduler_code_access(r,0x0081ECu,2u);
      r->open_bus=0x1Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81EEu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x001Du))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081EEu:
    if(m==1u&&x==0u){ /* 8D1021 STA abs */
      sc_v11_scheduler_code_access(r,0x0081EEu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81F1u;
      {uint32_t a=sc_v11_ea_abs(r,0x2110u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081F1u:
    if(m==1u&&x==0u){ /* A520 LDA dp */
      sc_v11_scheduler_code_access(r,0x0081F1u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81F3u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0020u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081F3u:
    if(m==1u&&x==0u){ /* 8D1221 STA abs */
      sc_v11_scheduler_code_access(r,0x0081F3u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81F6u;
      {uint32_t a=sc_v11_ea_abs(r,0x2112u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081F6u:
    if(m==1u&&x==0u){ /* A521 LDA dp */
      sc_v11_scheduler_code_access(r,0x0081F6u,2u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81F8u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0021u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081F8u:
    if(m==1u&&x==0u){ /* 8D1221 STA abs */
      sc_v11_scheduler_code_access(r,0x0081F8u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81FBu;
      {uint32_t a=sc_v11_ea_abs(r,0x2112u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081FBu:
    if(m==1u&&x==0u){ /* 203A83 JSR abs */
      sc_v11_scheduler_code_access(r,0x0081FBu,3u);
      r->open_bus=0x83u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x81FEu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x81FDu))return 0;
      c->pc=0x833Au;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081FEu:
    if(m==1u&&x==0u){ /* 20658D JSR abs */
      sc_v11_scheduler_code_access(r,0x0081FEu,3u);
      r->open_bus=0x8Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8201u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8200u))return 0;
      c->pc=0x8D65u;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008201u:
    if(m==1u&&x==1u){ /* 207C92 JSR abs */
      sc_v11_scheduler_code_access(r,0x008201u,3u);
      r->open_bus=0x92u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8204u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8203u))return 0;
      c->pc=0x927Cu;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008204u:
    if(m==0u&&x==0u){ /* 808D BRA rel */
      sc_v11_scheduler_code_access(r,0x008204u,2u);
      r->open_bus=0x8Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8206u;
      c->pc=0x8193u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(c->emulation&&((0x8206u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008211u:
    if(m==0u&&x==0u){ /* 58 CLI imp */
      sc_v11_scheduler_code_access(r,0x008211u,1u);
      r->open_bus=0x58u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8212u;
      c->p=(uint8_t)(c->p & (uint8_t)~SC_FLAG_I);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u){ /* 58 CLI imp */
      sc_v11_scheduler_code_access(r,0x008211u,1u);
      r->open_bus=0x58u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8212u;
      c->p=(uint8_t)(c->p & (uint8_t)~SC_FLAG_I);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008212u:
    if(m==0u&&x==0u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x008212u,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8213u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x008212u,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8213u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008213u:
    if(m==0u&&x==0u){ /* F40000 PEA abs */
      sc_v11_scheduler_code_access(r,0x008213u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8216u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u){ /* F40000 PEA abs */
      sc_v11_scheduler_code_access(r,0x008213u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8216u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008216u:
    if(m==0u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x008216u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8217u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x008216u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8217u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008217u:
    if(m==0u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x008217u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8218u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x008217u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8218u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008218u:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x008218u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x821Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x008218u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x821Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00821Au:
    if(m==0u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x00821Au,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x821Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x00821Au,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x821Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00821Cu:
    if(m==0u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x00821Cu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x821Du;
      sc_v11_op_shift_accumulator(r,16u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00821Du:
    if(m==0u&&x==0u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x00821Du,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x821Eu;
      c->x=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00821Eu:
    if(m==0u&&x==0u){ /* FC2382 JSR (abs,x) */
      sc_v11_scheduler_code_access(r,0x00821Eu,3u);
      r->open_bus=0x82u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8221u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8220u))return 0;
      c->pc=sc_v11_bus_read16(r,((uint32_t)c->pbr<<16)|(uint16_t)(0x8223u+c->x));
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008221u:
    if(m==0u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x008221u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8222u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x008221u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8222u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008222u:
    if(m==0u&&x==0u){ /* 40 RTI imp */
      sc_v11_scheduler_code_access(r,0x008222u,1u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8223u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
      c->pc=sc_v11_pop16(r);
      c->pbr=sc_v11_pop8(r);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u){ /* 40 RTI imp */
      sc_v11_scheduler_code_access(r,0x008222u,1u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8223u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
      c->pc=sc_v11_pop16(r);
      c->pbr=sc_v11_pop8(r);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00833Au:
    if(m==1u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x00833Au,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x833Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00833Cu:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x00833Cu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x833Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00833Eu:
    if(m==1u&&x==0u){ /* A65F LDX dp */
      sc_v11_scheduler_code_access(r,0x00833Eu,2u);
      r->open_bus=0x5Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8340u;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x005Fu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008340u:
    if(m==1u&&x==0u){ /* 8E0021 STX abs */
      sc_v11_scheduler_code_access(r,0x008340u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8343u;
      {uint32_t a=sc_v11_ea_abs(r,0x2100u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008343u:
    if(m==1u&&x==0u){ /* A561 LDA dp */
      sc_v11_scheduler_code_access(r,0x008343u,2u);
      r->open_bus=0x61u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8345u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0061u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008345u:
    if(m==1u&&x==0u){ /* 8D0521 STA abs */
      sc_v11_scheduler_code_access(r,0x008345u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8348u;
      {uint32_t a=sc_v11_ea_abs(r,0x2105u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008348u:
    if(m==1u&&x==0u){ /* A662 LDX dp */
      sc_v11_scheduler_code_access(r,0x008348u,2u);
      r->open_bus=0x62u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x834Au;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0062u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00834Au:
    if(m==1u&&x==0u){ /* 8E0721 STX abs */
      sc_v11_scheduler_code_access(r,0x00834Au,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x834Du;
      {uint32_t a=sc_v11_ea_abs(r,0x2107u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00834Du:
    if(m==1u&&x==0u){ /* A664 LDX dp */
      sc_v11_scheduler_code_access(r,0x00834Du,2u);
      r->open_bus=0x64u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x834Fu;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0064u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00834Fu:
    if(m==1u&&x==0u){ /* 8E0921 STX abs */
      sc_v11_scheduler_code_access(r,0x00834Fu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8352u;
      {uint32_t a=sc_v11_ea_abs(r,0x2109u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008352u:
    if(m==1u&&x==0u){ /* A666 LDX dp */
      sc_v11_scheduler_code_access(r,0x008352u,2u);
      r->open_bus=0x66u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8354u;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0066u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008354u:
    if(m==1u&&x==0u){ /* 8E0B21 STX abs */
      sc_v11_scheduler_code_access(r,0x008354u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8357u;
      {uint32_t a=sc_v11_ea_abs(r,0x210Bu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008357u:
    if(m==1u&&x==0u){ /* A668 LDX dp */
      sc_v11_scheduler_code_access(r,0x008357u,2u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8359u;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0068u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008359u:
    if(m==1u&&x==0u){ /* 8E2C21 STX abs */
      sc_v11_scheduler_code_access(r,0x008359u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x835Cu;
      {uint32_t a=sc_v11_ea_abs(r,0x212Cu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00835Cu:
    if(m==1u&&x==0u){ /* A66A LDX dp */
      sc_v11_scheduler_code_access(r,0x00835Cu,2u);
      r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x835Eu;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x006Au))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00835Eu:
    if(m==1u&&x==0u){ /* 8E2E21 STX abs */
      sc_v11_scheduler_code_access(r,0x00835Eu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8361u;
      {uint32_t a=sc_v11_ea_abs(r,0x212Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008361u:
    if(m==1u&&x==0u){ /* A66C LDX dp */
      sc_v11_scheduler_code_access(r,0x008361u,2u);
      r->open_bus=0x6Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8363u;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x006Cu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008363u:
    if(m==1u&&x==0u){ /* 8E3021 STX abs */
      sc_v11_scheduler_code_access(r,0x008363u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8366u;
      {uint32_t a=sc_v11_ea_abs(r,0x2130u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008366u:
    if(m==1u&&x==0u){ /* A56E LDA dp */
      sc_v11_scheduler_code_access(r,0x008366u,2u);
      r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8368u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x006Eu))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008368u:
    if(m==1u&&x==0u){ /* 8D3221 STA abs */
      sc_v11_scheduler_code_access(r,0x008368u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x836Bu;
      {uint32_t a=sc_v11_ea_abs(r,0x2132u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00836Bu:
    if(m==1u&&x==0u){ /* A56F LDA dp */
      sc_v11_scheduler_code_access(r,0x00836Bu,2u);
      r->open_bus=0x6Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x836Du;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x006Fu))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00836Du:
    if(m==1u&&x==0u){ /* 8D2521 STA abs */
      sc_v11_scheduler_code_access(r,0x00836Du,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8370u;
      {uint32_t a=sc_v11_ea_abs(r,0x2125u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008370u:
    if(m==1u&&x==0u){ /* A570 LDA dp */
      sc_v11_scheduler_code_access(r,0x008370u,2u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8372u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0070u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008372u:
    if(m==1u&&x==0u){ /* 8D2A21 STA abs */
      sc_v11_scheduler_code_access(r,0x008372u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8375u;
      {uint32_t a=sc_v11_ea_abs(r,0x212Au);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008375u:
    if(m==1u&&x==0u){ /* A671 LDX dp */
      sc_v11_scheduler_code_access(r,0x008375u,2u);
      r->open_bus=0x71u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8377u;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0071u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008377u:
    if(m==1u&&x==0u){ /* 8E2321 STX abs */
      sc_v11_scheduler_code_access(r,0x008377u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x837Au;
      {uint32_t a=sc_v11_ea_abs(r,0x2123u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00837Au:
    if(m==1u&&x==0u){ /* AD9B01 LDA abs */
      sc_v11_scheduler_code_access(r,0x00837Au,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x837Du;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x019Bu))),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00837Du:
    if(m==1u&&x==0u){ /* D00D BNE rel */
      sc_v11_scheduler_code_access(r,0x00837Du,2u);
      r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x837Fu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x838Cu;
      if(c->pc!=0x837Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x837Fu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00837Fu:
    if(m==1u&&x==0u){ /* A5D7 LDA dp */
      sc_v11_scheduler_code_access(r,0x00837Fu,2u);
      r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8381u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00D7u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008381u:
    if(m==1u&&x==0u){ /* 3013 BMI rel */
      sc_v11_scheduler_code_access(r,0x008381u,2u);
      r->open_bus=0x13u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8383u;
      if((c->p&SC_FLAG_N)!=0u)c->pc=0x8396u;
      if(c->pc!=0x8383u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8383u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008383u:
    if(m==1u&&x==0u){ /* C901 CMP imm */
      sc_v11_scheduler_code_access(r,0x008383u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8385u;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x0001u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008385u:
    if(m==1u&&x==0u){ /* F00F BEQ rel */
      sc_v11_scheduler_code_access(r,0x008385u,2u);
      r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8387u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x8396u;
      if(c->pc!=0x8387u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8387u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008387u:
    if(m==1u&&x==0u){ /* AD7903 LDA abs */
      sc_v11_scheduler_code_access(r,0x008387u,3u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x838Au;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0379u))),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00838Au:
    if(m==1u&&x==0u){ /* D00A BNE rel */
      sc_v11_scheduler_code_access(r,0x00838Au,2u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x838Cu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x8396u;
      if(c->pc!=0x838Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x838Cu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00838Cu:
    if(m==1u&&x==0u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x00838Cu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x838Eu;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00838Eu:
    if(m==1u&&x==0u){ /* 8D2821 STA abs */
      sc_v11_scheduler_code_access(r,0x00838Eu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8391u;
      {uint32_t a=sc_v11_ea_abs(r,0x2128u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008391u:
    if(m==1u&&x==0u){ /* A9F7 LDA imm */
      sc_v11_scheduler_code_access(r,0x008391u,2u);
      r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8393u;
      sc_v11_op_lda(r,(uint16_t)(0x00F7u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008393u:
    if(m==1u&&x==0u){ /* 8D2921 STA abs */
      sc_v11_scheduler_code_access(r,0x008393u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8396u;
      {uint32_t a=sc_v11_ea_abs(r,0x2129u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008396u:
    if(m==1u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x008396u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8397u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00823Au:
    if(m==1u&&x==0u){ /* 203E82 JSR; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x00823Au,3u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x823Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x823Cu))return 0;c->pc=0x823Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00823Du:
    if(m==0u&&x==0u){ /* 6B RTL; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x00823Du,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x823Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00823Eu:
    if(m==1u&&x==0u){ /* C220 REP; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x00823Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8240u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008240u:
    if(m==0u&&x==0u){ /* A5C7 LDA dp; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x008240u,2u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8242u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00C7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008242u:
    if(m==0u&&x==0u){ /* 8559 STA dp; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x008242u,2u);r->open_bus=0x59u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8244u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0059u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008244u:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x008244u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8245u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008245u:
    if(m==0u&&x==0u){ /* 855B STA dp; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x008245u,2u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8247u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x005Bu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008247u:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x008247u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8248u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008248u:
    if(m==0u&&x==0u){ /* 855D STA dp; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x008248u,2u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x824Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x005Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00824Au:
    if(m==0u&&x==0u){ /* 60 RTS; Version 15 reached seed helper */
      sc_v11_scheduler_code_access(r,0x00824Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x824Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00805Au:
    if(m==1u&&x==0u){ /* 80 F1 BRA $804D; Version 16 main-loop entry */
      sc_v11_scheduler_code_access(r,0x00805Au,2u);
      r->open_bus=0xF1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u;c->pc=0x804Du;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00804Du:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A5 12 LDA $12; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x00804Du,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x804Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00804Fu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* D0 0B BNE $805C; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x00804Fu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8051u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x805Cu;}
      if(c->pc!=0x8051u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8051u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00805Cu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 61 80 JSR $8061; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x00805Cu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x805Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x805Eu))return 0;c->pc=0x8061u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008061u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 88 82 JSR $8288; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x008061u,3u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8064u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8063u))return 0;c->pc=0x8288u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008064u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 20 90 86 JSR $8690; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x008064u,3u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8067u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8066u))return 0;c->pc=0x8690u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008067u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x008067u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8069u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008069u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A9 01 00 LDA #$0001; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x008069u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x806Cu;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00806Cu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 02 00 COP #$00; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x00806Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x806Eu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x806Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00806Eu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 20 5F 82 JSR $825F; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x00806Eu,3u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8071u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8070u))return 0;c->pc=0x825Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008071u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* E2 20 SEP #$20; Version 16 main-loop static batch: main-loop-corridor */
      sc_v11_scheduler_code_access(r,0x008071u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8073u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00825Fu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* E2 20 SEP #$20; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x00825Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8261u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008261u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* C2 10 REP #$10; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008261u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8263u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008263u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A9 03 LDA #$03; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008263u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8265u;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008265u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 8D 7F 1F STA $1F7F; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008265u,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8268u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008268u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A9 80 LDA #$80; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008268u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x826Au;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00826Au:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 8D 7E 1F STA $1F7E; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x00826Au,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x826Du;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00826Du:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x00826Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x826Fu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00826Fu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 8D 7D 1F STA $1F7D; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x00826Fu,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8272u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008272u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008272u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8274u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008274u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 8D 7C 1F STA $1F7C; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008274u,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8277u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008277u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 FF 1E LDX #$1EFF; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008277u,3u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x827Au;
      sc_v11_op_ldx(r,0x1EFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00827Au:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 8E 7A 1F STX $1F7A; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x00827Au,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x827Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x1F7Au),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00827Du:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 72 1F LDX #$1F72; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x00827Du,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8280u;
      sc_v11_op_ldx(r,0x1F72u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008280u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 86 AB STX $AB; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008280u,2u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8282u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xABu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008282u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 00 00 LDX #$0000; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008282u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8285u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008285u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 86 AD STX $AD; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008285u,2u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8287u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008287u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 60 RTS; Version 16 main-loop static batch: heap-init */
      sc_v11_scheduler_code_access(r,0x008287u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8288u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008288u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* E2 20 SEP #$20; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008288u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x828Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00828Au:
    if(m==1u&&x==0u&&c->emulation==0u){ /* E2 10 SEP #$10; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00828Au,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x828Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00828Cu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 8F LDA #$8F; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00828Cu,2u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x828Eu;
      sc_v11_op_lda(r,0x008Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00828Eu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 00 21 STA $2100; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00828Eu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8291u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2100u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008291u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 03 LDA #$03; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008291u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8293u;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008293u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 60 STA $60; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008293u,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8295u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008295u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 09 LDA #$09; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008295u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8297u;
      sc_v11_op_lda(r,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008297u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 61 STA $61; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008297u,2u);r->open_bus=0x61u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8299u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008299u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 58 LDA #$58; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008299u,2u);r->open_bus=0x58u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x829Bu;
      sc_v11_op_lda(r,0x0058u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00829Bu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 62 STA $62; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00829Bu,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x829Du;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00829Du:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 5C LDA #$5C; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00829Du,2u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x829Fu;
      sc_v11_op_lda(r,0x005Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00829Fu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 63 STA $63; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00829Fu,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A1u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x63u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A1u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 54 LDA #$54; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082A1u,2u);r->open_bus=0x54u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A3u;
      sc_v11_op_lda(r,0x0054u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A3u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 64 STA $64; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082A3u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A5u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A5u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 65 STZ $65; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082A5u,2u);r->open_bus=0x65u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x65u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A7u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082A7u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A9u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A9u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 66 STA $66; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082A9u,2u);r->open_bus=0x66u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82ABu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x66u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082ABu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 04 LDA #$04; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082ABu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82ADu;
      sc_v11_op_lda(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082ADu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 67 STA $67; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082ADu,2u);r->open_bus=0x67u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82AFu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x67u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082AFu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 80 LDA #$80; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082AFu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82B1u;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082B1u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 15 21 STA $2115; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082B1u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82B4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2115u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082B4u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082B4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82B6u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082B6u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 1A 21 STA $211A; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082B6u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82B9u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082B9u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 1B 21 STA $211B; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082B9u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82BCu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082BCu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082BCu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82BEu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082BEu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 1B 21 STA $211B; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082BEu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82C1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082C1u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9C 1C 21 STZ $211C; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082C1u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82C4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Cu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082C4u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9C 1C 21 STZ $211C; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082C4u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82C7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Cu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082C7u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9C 1D 21 STZ $211D; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082C7u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82CAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082CAu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9C 1D 21 STZ $211D; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082CAu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82CDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082CDu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9C 1E 21 STZ $211E; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082CDu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82D0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Eu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082D0u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 1E 21 STA $211E; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082D0u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82D3u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082D3u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082D3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82D5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082D5u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 1F 21 STA $211F; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082D5u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82D8u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082D8u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 1F 21 STA $211F; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082D8u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82DBu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082DBu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 20 21 STA $2120; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082DBu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82DEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2120u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082DEu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 20 21 STA $2120; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082DEu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82E1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2120u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082E1u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082E1u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82E3u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082E3u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 71 STA $71; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082E3u,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82E5u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082E5u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 72 STA $72; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082E5u,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82E7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082E7u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 26 21 STA $2126; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082E7u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82EAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082EAu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 27 21 STA $2127; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082EAu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82EDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082EDu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 29 21 STA $2129; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082EDu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2129u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F0u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 17 LDA #$17; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082F0u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F2u;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F2u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 85 68 STA $68; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082F2u,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F4u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F4u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 69 STZ $69; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082F4u,2u);r->open_bus=0x69u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F6u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F6u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 6A STZ $6A; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082F6u,2u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F8u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F8u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 6B STZ $6B; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082F8u,2u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82FAu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Bu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082FAu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9C 33 21 STZ $2133; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082FAu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82FDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2133u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082FDu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 6C STZ $6C; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082FDu,2u);r->open_bus=0x6Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82FFu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082FFu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 6D STZ $6D; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x0082FFu,2u);r->open_bus=0x6Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8301u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008301u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 6E STZ $6E; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008301u,2u);r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8303u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008303u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 6F STZ $6F; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008303u,2u);r->open_bus=0x6Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8305u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008305u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 70 STZ $70; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008305u,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8307u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x70u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008307u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9C 2B 21 STZ $212B; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008307u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x830Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00830Au:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 B1 STZ $B1; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00830Au,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x830Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00830Cu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 64 B3 STZ $B3; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00830Cu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x830Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00830Eu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 FF LDA #$FF; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00830Eu,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8310u;
      sc_v11_op_lda(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008310u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 01 42 STA $4201; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008310u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8313u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4201u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008313u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008313u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8315u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008315u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 02 42 STA $4202; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008315u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8318u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008318u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 03 42 STA $4203; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008318u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x831Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00831Bu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 04 42 STA $4204; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00831Bu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x831Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4204u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00831Eu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 05 42 STA $4205; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00831Eu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8321u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4205u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008321u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 06 42 STA $4206; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008321u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8324u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4206u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008324u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 07 42 STA $4207; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008324u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8327u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4207u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008327u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 08 42 STA $4208; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008327u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x832Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4208u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00832Au:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 09 42 STA $4209; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00832Au,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x832Du;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4209u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00832Du:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 0A 42 STA $420A; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x00832Du,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8330u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008330u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 0B 42 STA $420B; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008330u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8333u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008333u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 0C 42 STA $420C; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008333u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8336u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008336u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9C 0D 42 STZ $420D; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008336u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8339u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008339u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 60 RTS; Version 16 main-loop static batch: ppu-cpu-reset */
      sc_v11_scheduler_code_access(r,0x008339u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x833Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008073u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 BE 96 JSR $96BE; Version 16 graphics decompression static batch: graphics-driver */
      sc_v11_scheduler_code_access(r,0x008073u,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8076u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8075u))return 0;c->pc=0x96BEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008206u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 08 PHP; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x008206u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8207u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&c->emulation==0u){ /* 08 PHP; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x008206u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8207u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008207u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x008207u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8209u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x008207u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8209u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008209u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A9 00 00 LDA #$0000; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x008209u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Cu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&c->emulation==0u){ /* A9 00 00 LDA #$0000; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x008209u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Cu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00820Cu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 02 00 COP #$00; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x00820Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Eu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x820Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&c->emulation==0u){ /* 02 00 COP #$00; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x00820Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Eu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x820Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00820Eu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 28 PLP; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x00820Eu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Fu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&c->emulation==0u){ /* 28 PLP; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x00820Eu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Fu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00820Fu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 6B RTL; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x00820Fu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8210u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&c->emulation==0u){ /* 6B RTL; Version 16 graphics decompression static batch: nmi-wait-helper */
      sc_v11_scheduler_code_access(r,0x00820Fu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8210u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
