/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_00164(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x059096u:
    if(m==0u&&x==1u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x059096u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9098u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9098u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059098u:
    if(m==0u&&x==1u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059098u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x909Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05909Au:
    if(m==1u&&x==1u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x05909Au,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x909Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05909Cu:
    if(m==1u&&x==0u){ /* A2E0C9 LDX imm */
      sc_v11_scheduler_code_access(r,0x05909Cu,3u);
      r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x909Fu;
      sc_v11_op_ldx(r,(uint16_t)(0xC9E0u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05909Fu:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x05909Fu,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90A1u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590A1u:
    if(m==1u&&x==0u){ /* A907 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590A1u,2u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90A3u;
      sc_v11_op_lda(r,(uint16_t)(0x0007u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590A3u:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x0590A3u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90A5u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590A5u:
    if(m==1u&&x==0u){ /* A20000 LDX imm */
      sc_v11_scheduler_code_access(r,0x0590A5u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90A8u;
      sc_v11_op_ldx(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590A8u:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x0590A8u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90AAu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590AAu:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0590AAu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90ACu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590ACu:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590ACu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90AFu;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590AFu:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x0590AFu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90B1u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x90B1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590B1u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0590B1u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90B3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590B3u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x0590B3u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590B5u:
    if(m==1u&&x==0u){ /* A280A6 LDX imm */
      sc_v11_scheduler_code_access(r,0x0590B5u,3u);
      r->open_bus=0xA6u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90B8u;
      sc_v11_op_ldx(r,(uint16_t)(0xA680u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590B8u:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x0590B8u,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90BAu;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590BAu:
    if(m==1u&&x==0u){ /* A907 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590BAu,2u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90BCu;
      sc_v11_op_lda(r,(uint16_t)(0x0007u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590BCu:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x0590BCu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90BEu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590BEu:
    if(m==1u&&x==0u){ /* A20040 LDX imm */
      sc_v11_scheduler_code_access(r,0x0590BEu,3u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90C1u;
      sc_v11_op_ldx(r,(uint16_t)(0x4000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590C1u:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x0590C1u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90C3u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590C3u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0590C3u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90C5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590C5u:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590C5u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90C8u;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590C8u:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x0590C8u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90CAu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x90CAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590CAu:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0590CAu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90CCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590CCu:
    if(m==0u&&x==0u){ /* 9C1621 STZ abs */
      sc_v11_scheduler_code_access(r,0x0590CCu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90CFu;
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,(uint16_t)(0u));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590CFu:
    if(m==0u&&x==0u){ /* E230 SEP imm */
      sc_v11_scheduler_code_access(r,0x0590CFu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90D1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590D1u:
    if(m==1u&&x==1u){ /* A902 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590D1u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90D3u;
      sc_v11_op_lda(r,(uint16_t)(0x0002u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590D3u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0590D3u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90D4u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590D4u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0590D4u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90D5u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590D5u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0590D5u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90D6u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590D6u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0590D6u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90D7u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590D7u:
    if(m==1u&&x==1u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x0590D7u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90D8u;
      c->x=(uint16_t)(c->a&0x00FFu);
      sc_v11_set_nz8(c,(uint8_t)c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590D8u:
    if(m==1u&&x==1u){ /* A901 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590D8u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90DAu;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590DAu:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0590DAu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90DDu;
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590DDu:
    if(m==1u&&x==1u){ /* A918 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590DDu,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90DFu;
      sc_v11_op_lda(r,(uint16_t)(0x0018u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590DFu:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0590DFu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E2u;
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590E2u:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590E2u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E4u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590E4u:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0590E4u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E7u;
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590E7u:
    if(m==1u&&x==1u){ /* A980 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590E7u,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E9u;
      sc_v11_op_lda(r,(uint16_t)(0x0080u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590E9u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0590E9u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90ECu;
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590ECu:
    if(m==1u&&x==1u){ /* A97E LDA imm */
      sc_v11_scheduler_code_access(r,0x0590ECu,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90EEu;
      sc_v11_op_lda(r,(uint16_t)(0x007Eu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590EEu:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0590EEu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90F1u;
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590F1u:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590F1u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90F3u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590F3u:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0590F3u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90F6u;
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590F6u:
    if(m==1u&&x==1u){ /* A980 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590F6u,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90F8u;
      sc_v11_op_lda(r,(uint16_t)(0x0080u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590F8u:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0590F8u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90FBu;
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590FBu:
    if(m==1u&&x==1u){ /* A901 LDA imm */
      sc_v11_scheduler_code_access(r,0x0590FBu,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90FDu;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590FDu:
    if(m==1u&&x==1u){ /* A202 LDX imm */
      sc_v11_scheduler_code_access(r,0x0590FDu,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90FFu;
      sc_v11_op_ldx(r,(uint16_t)(0x0002u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0590FFu:
    if(m==1u&&x==1u){ /* F004 BEQ rel */
      sc_v11_scheduler_code_access(r,0x0590FFu,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9101u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x9105u;
      if(c->pc!=0x9101u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9101u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059101u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x059101u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9102u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059102u:
    if(m==1u&&x==1u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x059102u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9103u;
      c->x=(uint16_t)((c->x+(-1))&0x00FFu);
      sc_v11_set_nz8(c,(uint8_t)c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059103u:
    if(m==1u&&x==1u){ /* D0FC BNE rel */
      sc_v11_scheduler_code_access(r,0x059103u,2u);
      r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9105u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9101u;
      if(c->pc!=0x9105u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9105u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059105u:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs */
      sc_v11_scheduler_code_access(r,0x059105u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9108u;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059108u:
    if(m==1u&&x==1u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059108u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x910Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05910Au:
    if(m==1u&&x==1u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x05910Au,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x910Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05910Cu:
    if(m==1u&&x==0u){ /* A230C9 LDX imm */
      sc_v11_scheduler_code_access(r,0x05910Cu,3u);
      r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x910Fu;
      sc_v11_op_ldx(r,(uint16_t)(0xC930u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05910Fu:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x05910Fu,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9111u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059111u:
    if(m==1u&&x==0u){ /* A907 LDA imm */
      sc_v11_scheduler_code_access(r,0x059111u,2u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9113u;
      sc_v11_op_lda(r,(uint16_t)(0x0007u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059113u:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x059113u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9115u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059115u:
    if(m==1u&&x==0u){ /* A20000 LDX imm */
      sc_v11_scheduler_code_access(r,0x059115u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9118u;
      sc_v11_op_ldx(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059118u:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x059118u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x911Au;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05911Au:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x05911Au,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x911Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05911Cu:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x05911Cu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x911Fu;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05911Fu:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x05911Fu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9121u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9121u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059121u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059121u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9123u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059123u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x059123u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9125u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059125u:
    if(m==1u&&x==0u){ /* A22492 LDX imm */
      sc_v11_scheduler_code_access(r,0x059125u,3u);
      r->open_bus=0x92u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9128u;
      sc_v11_op_ldx(r,(uint16_t)(0x9224u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059128u:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x059128u,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x912Au;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05912Au:
    if(m==1u&&x==0u){ /* A90B LDA imm */
      sc_v11_scheduler_code_access(r,0x05912Au,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x912Cu;
      sc_v11_op_lda(r,(uint16_t)(0x000Bu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05912Cu:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x05912Cu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x912Eu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05912Eu:
    if(m==1u&&x==0u){ /* A20020 LDX imm */
      sc_v11_scheduler_code_access(r,0x05912Eu,3u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9131u;
      sc_v11_op_ldx(r,(uint16_t)(0x2000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059131u:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x059131u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9133u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059133u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059133u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9135u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059135u:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x059135u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9138u;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059138u:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x059138u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x913Au;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x913Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05913Au:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x05913Au,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x913Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05913Cu:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x05913Cu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x913Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05913Eu:
    if(m==1u&&x==0u){ /* A22B94 LDX imm */
      sc_v11_scheduler_code_access(r,0x05913Eu,3u);
      r->open_bus=0x94u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9141u;
      sc_v11_op_ldx(r,(uint16_t)(0x942Bu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059141u:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x059141u,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9143u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059143u:
    if(m==1u&&x==0u){ /* A90B LDA imm */
      sc_v11_scheduler_code_access(r,0x059143u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9145u;
      sc_v11_op_lda(r,(uint16_t)(0x000Bu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059145u:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x059145u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9147u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059147u:
    if(m==1u&&x==0u){ /* A20030 LDX imm */
      sc_v11_scheduler_code_access(r,0x059147u,3u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x914Au;
      sc_v11_op_ldx(r,(uint16_t)(0x3000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05914Au:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x05914Au,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x914Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05914Cu:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x05914Cu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x914Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05914Eu:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x05914Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9151u;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059151u:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x059151u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9153u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9153u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059153u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059153u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9155u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059155u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x059155u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9157u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059157u:
    if(m==1u&&x==0u){ /* A26B96 LDX imm */
      sc_v11_scheduler_code_access(r,0x059157u,3u);
      r->open_bus=0x96u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x915Au;
      sc_v11_op_ldx(r,(uint16_t)(0x966Bu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05915Au:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x05915Au,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x915Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05915Cu:
    if(m==1u&&x==0u){ /* A90B LDA imm */
      sc_v11_scheduler_code_access(r,0x05915Cu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x915Eu;
      sc_v11_op_lda(r,(uint16_t)(0x000Bu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05915Eu:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x05915Eu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9160u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059160u:
    if(m==1u&&x==0u){ /* A20040 LDX imm */
      sc_v11_scheduler_code_access(r,0x059160u,3u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9163u;
      sc_v11_op_ldx(r,(uint16_t)(0x4000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059163u:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x059163u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9165u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059165u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059165u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9167u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059167u:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x059167u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x916Au;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05916Au:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x05916Au,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x916Cu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x916Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05916Cu:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x05916Cu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x916Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05916Eu:
    if(m==0u&&x==0u){ /* A90040 LDA imm */
      sc_v11_scheduler_code_access(r,0x05916Eu,3u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9171u;
      sc_v11_op_lda(r,(uint16_t)(0x4000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059171u:
    if(m==0u&&x==0u){ /* 8D1621 STA abs */
      sc_v11_scheduler_code_access(r,0x059171u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9174u;
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059174u:
    if(m==0u&&x==0u){ /* E230 SEP imm */
      sc_v11_scheduler_code_access(r,0x059174u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9176u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059176u:
    if(m==1u&&x==1u){ /* A902 LDA imm */
      sc_v11_scheduler_code_access(r,0x059176u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9178u;
      sc_v11_op_lda(r,(uint16_t)(0x0002u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059178u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x059178u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9179u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059179u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x059179u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x917Au;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05917Au:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x05917Au,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x917Bu;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05917Bu:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x05917Bu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x917Cu;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05917Cu:
    if(m==1u&&x==1u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x05917Cu,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x917Du;
      c->x=(uint16_t)(c->a&0x00FFu);
      sc_v11_set_nz8(c,(uint8_t)c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05917Du:
    if(m==1u&&x==1u){ /* A901 LDA imm */
      sc_v11_scheduler_code_access(r,0x05917Du,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x917Fu;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05917Fu:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x */
      sc_v11_scheduler_code_access(r,0x05917Fu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9182u;
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059182u:
    if(m==1u&&x==1u){ /* A918 LDA imm */
      sc_v11_scheduler_code_access(r,0x059182u,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9184u;
      sc_v11_op_lda(r,(uint16_t)(0x0018u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059184u:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x */
      sc_v11_scheduler_code_access(r,0x059184u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9187u;
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059187u:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x059187u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9189u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059189u:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x */
      sc_v11_scheduler_code_access(r,0x059189u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x918Cu;
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05918Cu:
    if(m==1u&&x==1u){ /* A980 LDA imm */
      sc_v11_scheduler_code_access(r,0x05918Cu,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x918Eu;
      sc_v11_op_lda(r,(uint16_t)(0x0080u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05918Eu:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x */
      sc_v11_scheduler_code_access(r,0x05918Eu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9191u;
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059191u:
    if(m==1u&&x==1u){ /* A97E LDA imm */
      sc_v11_scheduler_code_access(r,0x059191u,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9193u;
      sc_v11_op_lda(r,(uint16_t)(0x007Eu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059193u:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x */
      sc_v11_scheduler_code_access(r,0x059193u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9196u;
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059196u:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x059196u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9198u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059198u:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x */
      sc_v11_scheduler_code_access(r,0x059198u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x919Bu;
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05919Bu:
    if(m==1u&&x==1u){ /* A960 LDA imm */
      sc_v11_scheduler_code_access(r,0x05919Bu,2u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x919Du;
      sc_v11_op_lda(r,(uint16_t)(0x0060u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05919Du:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x */
      sc_v11_scheduler_code_access(r,0x05919Du,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A0u;
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591A0u:
    if(m==1u&&x==1u){ /* A901 LDA imm */
      sc_v11_scheduler_code_access(r,0x0591A0u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A2u;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591A2u:
    if(m==1u&&x==1u){ /* A202 LDX imm */
      sc_v11_scheduler_code_access(r,0x0591A2u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A4u;
      sc_v11_op_ldx(r,(uint16_t)(0x0002u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591A4u:
    if(m==1u&&x==1u){ /* F004 BEQ rel */
      sc_v11_scheduler_code_access(r,0x0591A4u,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A6u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x91AAu;
      if(c->pc!=0x91A6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91A6u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591A6u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0591A6u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A7u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591A7u:
    if(m==1u&&x==1u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x0591A7u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A8u;
      c->x=(uint16_t)((c->x+(-1))&0x00FFu);
      sc_v11_set_nz8(c,(uint8_t)c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591A8u:
    if(m==1u&&x==1u){ /* D0FC BNE rel */
      sc_v11_scheduler_code_access(r,0x0591A8u,2u);
      r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91AAu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x91A6u;
      if(c->pc!=0x91AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91AAu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591AAu:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs */
      sc_v11_scheduler_code_access(r,0x0591AAu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91ADu;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591ADu:
    if(m==1u&&x==1u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x0591ADu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91AFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591AFu:
    if(m==0u&&x==0u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x0591AFu,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91B0u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591B0u:
    if(m==0u&&x==0u){ /* A200B0 LDX imm */
      sc_v11_scheduler_code_access(r,0x0591B0u,3u);
      r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91B3u;
      sc_v11_op_ldx(r,(uint16_t)(0xB000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591B3u:
    if(m==0u&&x==0u){ /* A04028 LDY imm */
      sc_v11_scheduler_code_access(r,0x0591B3u,3u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91B6u;
      sc_v11_op_ldy(r,(uint16_t)(0x2840u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591B6u:
    if(m==0u&&x==0u){ /* A9FF07 LDA imm */
      sc_v11_scheduler_code_access(r,0x0591B6u,3u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91B9u;
      sc_v11_op_lda(r,(uint16_t)(0x07FFu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591B9u:
    if(m==0u&&x==0u){ /* 547E7E MVN imm */
      sc_v11_scheduler_code_access(r,0x0591B9u,3u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91BCu;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));
      c->x=(uint16_t)(c->x+1u);
      c->y=(uint16_t)(c->y+1u);
      c->a=(uint16_t)(c->a-1u);
      c->dbr=0x7Eu;
      if(c->a!=0xFFFFu)c->pc=0x91B9u;
      sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591BCu:
    if(m==0u&&x==0u){ /* A200C0 LDX imm */
      sc_v11_scheduler_code_access(r,0x0591BCu,3u);
      r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91BFu;
      sc_v11_op_ldx(r,(uint16_t)(0xC000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591BFu:
    if(m==0u&&x==0u){ /* A04030 LDY imm */
      sc_v11_scheduler_code_access(r,0x0591BFu,3u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C2u;
      sc_v11_op_ldy(r,(uint16_t)(0x3040u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591C2u:
    if(m==0u&&x==0u){ /* A9FF0F LDA imm */
      sc_v11_scheduler_code_access(r,0x0591C2u,3u);
      r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C5u;
      sc_v11_op_lda(r,(uint16_t)(0x0FFFu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591C5u:
    if(m==0u&&x==0u){ /* 547E7E MVN imm */
      sc_v11_scheduler_code_access(r,0x0591C5u,3u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C8u;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));
      c->x=(uint16_t)(c->x+1u);
      c->y=(uint16_t)(c->y+1u);
      c->a=(uint16_t)(c->a-1u);
      c->dbr=0x7Eu;
      if(c->a!=0xFFFFu)c->pc=0x91C5u;
      sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591C8u:
    if(m==0u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x0591C8u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C9u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591C9u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0591C9u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91CBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591CBu:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x0591CBu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91CDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591CDu:
    if(m==1u&&x==0u){ /* A2D889 LDX imm */
      sc_v11_scheduler_code_access(r,0x0591CDu,3u);
      r->open_bus=0x89u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D0u;
      sc_v11_op_ldx(r,(uint16_t)(0x89D8u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591D0u:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x0591D0u,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D2u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591D2u:
    if(m==1u&&x==0u){ /* A90C LDA imm */
      sc_v11_scheduler_code_access(r,0x0591D2u,2u);
      r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D4u;
      sc_v11_op_lda(r,(uint16_t)(0x000Cu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591D4u:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x0591D4u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D6u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591D6u:
    if(m==1u&&x==0u){ /* A20000 LDX imm */
      sc_v11_scheduler_code_access(r,0x0591D6u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D9u;
      sc_v11_op_ldx(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591D9u:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x0591D9u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91DBu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591DBu:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0591DBu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591DDu:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x0591DDu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E0u;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591E0u:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x0591E0u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E2u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x91E2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591E2u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0591E2u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591E4u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x0591E4u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591E6u:
    if(m==1u&&x==0u){ /* 9C2121 STZ abs */
      sc_v11_scheduler_code_access(r,0x0591E6u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E9u;
      {uint32_t a=sc_v11_ea_abs(r,0x2121u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591E9u:
    if(m==1u&&x==0u){ /* E230 SEP imm */
      sc_v11_scheduler_code_access(r,0x0591E9u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91EBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591EBu:
    if(m==1u&&x==1u){ /* A902 LDA imm */
      sc_v11_scheduler_code_access(r,0x0591EBu,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91EDu;
      sc_v11_op_lda(r,(uint16_t)(0x0002u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591EDu:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0591EDu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91EEu;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591EEu:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0591EEu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91EFu;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591EFu:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0591EFu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F0u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591F0u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0591F0u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F1u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591F1u:
    if(m==1u&&x==1u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x0591F1u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F2u;
      c->x=(uint16_t)(c->a&0x00FFu);
      sc_v11_set_nz8(c,(uint8_t)c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591F2u:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x0591F2u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F4u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591F4u:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0591F4u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F7u;
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591F7u:
    if(m==1u&&x==1u){ /* A922 LDA imm */
      sc_v11_scheduler_code_access(r,0x0591F7u,2u);
      r->open_bus=0x22u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F9u;
      sc_v11_op_lda(r,(uint16_t)(0x0022u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591F9u:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0591F9u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91FCu;
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591FCu:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x0591FCu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91FEu;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0591FEu:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0591FEu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9201u;
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059201u:
    if(m==1u&&x==1u){ /* A980 LDA imm */
      sc_v11_scheduler_code_access(r,0x059201u,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9203u;
      sc_v11_op_lda(r,(uint16_t)(0x0080u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059203u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x */
      sc_v11_scheduler_code_access(r,0x059203u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9206u;
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059206u:
    if(m==1u&&x==1u){ /* A97E LDA imm */
      sc_v11_scheduler_code_access(r,0x059206u,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9208u;
      sc_v11_op_lda(r,(uint16_t)(0x007Eu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059208u:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x */
      sc_v11_scheduler_code_access(r,0x059208u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x920Bu;
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05920Bu:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x05920Bu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x920Du;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05920Du:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x */
      sc_v11_scheduler_code_access(r,0x05920Du,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9210u;
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059210u:
    if(m==1u&&x==1u){ /* A902 LDA imm */
      sc_v11_scheduler_code_access(r,0x059210u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9212u;
      sc_v11_op_lda(r,(uint16_t)(0x0002u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059212u:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x */
      sc_v11_scheduler_code_access(r,0x059212u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9215u;
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059215u:
    if(m==1u&&x==1u){ /* A901 LDA imm */
      sc_v11_scheduler_code_access(r,0x059215u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9217u;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059217u:
    if(m==1u&&x==1u){ /* A202 LDX imm */
      sc_v11_scheduler_code_access(r,0x059217u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9219u;
      sc_v11_op_ldx(r,(uint16_t)(0x0002u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059219u:
    if(m==1u&&x==1u){ /* F004 BEQ rel */
      sc_v11_scheduler_code_access(r,0x059219u,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x921Bu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x921Fu;
      if(c->pc!=0x921Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x921Bu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05921Bu:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x05921Bu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x921Cu;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05921Cu:
    if(m==1u&&x==1u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x05921Cu,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x921Du;
      c->x=(uint16_t)((c->x+(-1))&0x00FFu);
      sc_v11_set_nz8(c,(uint8_t)c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05921Du:
    if(m==1u&&x==1u){ /* D0FC BNE rel */
      sc_v11_scheduler_code_access(r,0x05921Du,2u);
      r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x921Fu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x921Bu;
      if(c->pc!=0x921Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x921Fu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05921Fu:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs */
      sc_v11_scheduler_code_access(r,0x05921Fu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9222u;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059222u:
    if(m==1u&&x==1u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x059222u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9224u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059224u:
    if(m==0u&&x==0u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x059224u,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9225u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059225u:
    if(m==0u&&x==0u){ /* A20080 LDX imm */
      sc_v11_scheduler_code_access(r,0x059225u,3u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9228u;
      sc_v11_op_ldx(r,(uint16_t)(0x8000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059228u:
    if(m==0u&&x==0u){ /* A04024 LDY imm */
      sc_v11_scheduler_code_access(r,0x059228u,3u);
      r->open_bus=0x24u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x922Bu;
      sc_v11_op_ldy(r,(uint16_t)(0x2440u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05922Bu:
    if(m==0u&&x==0u){ /* A9FF01 LDA imm */
      sc_v11_scheduler_code_access(r,0x05922Bu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x922Eu;
      sc_v11_op_lda(r,(uint16_t)(0x01FFu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05922Eu:
    if(m==0u&&x==0u){ /* 547E7E MVN imm */
      sc_v11_scheduler_code_access(r,0x05922Eu,3u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9231u;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));
      c->x=(uint16_t)(c->x+1u);
      c->y=(uint16_t)(c->y+1u);
      c->a=(uint16_t)(c->a-1u);
      c->dbr=0x7Eu;
      if(c->a!=0xFFFFu)c->pc=0x922Eu;
      sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059231u:
    if(m==0u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x059231u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9232u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059232u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059232u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9234u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059234u:
    if(m==1u&&x==0u){ /* 6428 STZ dp */
      sc_v11_scheduler_code_access(r,0x059234u,2u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9236u;
      {uint32_t a=sc_v11_ea_dp(r,0x0028u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059236u:
    if(m==1u&&x==0u){ /* A95F LDA imm */
      sc_v11_scheduler_code_access(r,0x059236u,2u);
      r->open_bus=0x5Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9238u;
      sc_v11_op_lda(r,(uint16_t)(0x005Fu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059238u:
    if(m==1u&&x==0u){ /* 852A STA dp */
      sc_v11_scheduler_code_access(r,0x059238u,2u);
      r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x923Au;
      {uint32_t a=sc_v11_ea_dp(r,0x002Au);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05923Au:
    if(m==1u&&x==0u){ /* A980 LDA imm */
      sc_v11_scheduler_code_access(r,0x05923Au,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x923Cu;
      sc_v11_op_lda(r,(uint16_t)(0x0080u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05923Cu:
    if(m==1u&&x==0u){ /* 8526 STA dp */
      sc_v11_scheduler_code_access(r,0x05923Cu,2u);
      r->open_bus=0x26u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x923Eu;
      {uint32_t a=sc_v11_ea_dp(r,0x0026u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05923Eu:
    if(m==1u&&x==0u){ /* A95C LDA imm */
      sc_v11_scheduler_code_access(r,0x05923Eu,2u);
      r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9240u;
      sc_v11_op_lda(r,(uint16_t)(0x005Cu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059240u:
    if(m==1u&&x==0u){ /* 8524 STA dp */
      sc_v11_scheduler_code_access(r,0x059240u,2u);
      r->open_bus=0x24u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9242u;
      {uint32_t a=sc_v11_ea_dp(r,0x0024u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059242u:
    if(m==1u&&x==0u){ /* 20BE94 JSR abs */
      sc_v11_scheduler_code_access(r,0x059242u,3u);
      r->open_bus=0x94u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9245u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9244u))return 0;
      c->pc=0x94BEu;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059245u:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059245u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9247u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059247u:
    if(m==0u&&x==0u){ /* A99001 LDA imm */
      sc_v11_scheduler_code_access(r,0x059247u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x924Au;
      sc_v11_op_lda(r,(uint16_t)(0x0190u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05924Au:
    if(m==0u&&x==0u){ /* 8D7702 STA abs */
      sc_v11_scheduler_code_access(r,0x05924Au,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x924Du;
      {uint32_t a=sc_v11_ea_abs(r,0x0277u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05924Du:
    if(m==0u&&x==0u){ /* A9B700 LDA imm */
      sc_v11_scheduler_code_access(r,0x05924Du,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9250u;
      sc_v11_op_lda(r,(uint16_t)(0x00B7u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059250u:
    if(m==0u&&x==0u){ /* 8D7F02 STA abs */
      sc_v11_scheduler_code_access(r,0x059250u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9253u;
      {uint32_t a=sc_v11_ea_abs(r,0x027Fu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059253u:
    if(m==0u&&x==0u){ /* 6440 STZ dp */
      sc_v11_scheduler_code_access(r,0x059253u,2u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9255u;
      {uint32_t a=sc_v11_ea_dp(r,0x0040u);sc_v11_bus_write16(r,a,(uint16_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059255u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059255u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9257u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059257u:
    if(m==1u&&x==0u){ /* 6452 STZ dp */
      sc_v11_scheduler_code_access(r,0x059257u,2u);
      r->open_bus=0x52u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9259u;
      {uint32_t a=sc_v11_ea_dp(r,0x0052u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059259u:
    if(m==1u&&x==0u){ /* 6454 STZ dp */
      sc_v11_scheduler_code_access(r,0x059259u,2u);
      r->open_bus=0x54u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x925Bu;
      {uint32_t a=sc_v11_ea_dp(r,0x0054u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05925Bu:
    if(m==1u&&x==0u){ /* A901 LDA imm */
      sc_v11_scheduler_code_access(r,0x05925Bu,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x925Du;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05925Du:
    if(m==1u&&x==0u){ /* 8561 STA dp */
      sc_v11_scheduler_code_access(r,0x05925Du,2u);
      r->open_bus=0x61u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x925Fu;
      {uint32_t a=sc_v11_ea_dp(r,0x0061u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05925Fu:
    if(m==1u&&x==0u){ /* 6466 STZ dp */
      sc_v11_scheduler_code_access(r,0x05925Fu,2u);
      r->open_bus=0x66u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9261u;
      {uint32_t a=sc_v11_ea_dp(r,0x0066u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059261u:
    if(m==1u&&x==0u){ /* A904 LDA imm */
      sc_v11_scheduler_code_access(r,0x059261u,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9263u;
      sc_v11_op_lda(r,(uint16_t)(0x0004u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059263u:
    if(m==1u&&x==0u){ /* 8567 STA dp */
      sc_v11_scheduler_code_access(r,0x059263u,2u);
      r->open_bus=0x67u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9265u;
      {uint32_t a=sc_v11_ea_dp(r,0x0067u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059265u:
    if(m==1u&&x==0u){ /* A963 LDA imm */
      sc_v11_scheduler_code_access(r,0x059265u,2u);
      r->open_bus=0x63u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9267u;
      sc_v11_op_lda(r,(uint16_t)(0x0063u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059267u:
    if(m==1u&&x==0u){ /* 8562 STA dp */
      sc_v11_scheduler_code_access(r,0x059267u,2u);
      r->open_bus=0x62u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9269u;
      {uint32_t a=sc_v11_ea_dp(r,0x0062u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059269u:
    if(m==1u&&x==0u){ /* A95A LDA imm */
      sc_v11_scheduler_code_access(r,0x059269u,2u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x926Bu;
      sc_v11_op_lda(r,(uint16_t)(0x005Au),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05926Bu:
    if(m==1u&&x==0u){ /* 8563 STA dp */
      sc_v11_scheduler_code_access(r,0x05926Bu,2u);
      r->open_bus=0x63u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x926Du;
      {uint32_t a=sc_v11_ea_dp(r,0x0063u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05926Du:
    if(m==1u&&x==0u){ /* A952 LDA imm */
      sc_v11_scheduler_code_access(r,0x05926Du,2u);
      r->open_bus=0x52u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x926Fu;
      sc_v11_op_lda(r,(uint16_t)(0x0052u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05926Fu:
    if(m==1u&&x==0u){ /* 8564 STA dp */
      sc_v11_scheduler_code_access(r,0x05926Fu,2u);
      r->open_bus=0x64u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9271u;
      {uint32_t a=sc_v11_ea_dp(r,0x0064u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059271u:
    if(m==1u&&x==0u){ /* A981 LDA imm */
      sc_v11_scheduler_code_access(r,0x059271u,2u);
      r->open_bus=0x81u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9273u;
      sc_v11_op_lda(r,(uint16_t)(0x0081u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059273u:
    if(m==1u&&x==0u){ /* 8560 STA dp */
      sc_v11_scheduler_code_access(r,0x059273u,2u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9275u;
      {uint32_t a=sc_v11_ea_dp(r,0x0060u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059275u:
    if(m==1u&&x==0u){ /* A98F LDA imm */
      sc_v11_scheduler_code_access(r,0x059275u,2u);
      r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9277u;
      sc_v11_op_lda(r,(uint16_t)(0x008Fu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059277u:
    if(m==1u&&x==0u){ /* 856D STA dp */
      sc_v11_scheduler_code_access(r,0x059277u,2u);
      r->open_bus=0x6Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9279u;
      {uint32_t a=sc_v11_ea_dp(r,0x006Du);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059279u:
    if(m==1u&&x==0u){ /* A9FF LDA imm */
      sc_v11_scheduler_code_access(r,0x059279u,2u);
      r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x927Bu;
      sc_v11_op_lda(r,(uint16_t)(0x00FFu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05927Bu:
    if(m==1u&&x==0u){ /* 856E STA dp */
      sc_v11_scheduler_code_access(r,0x05927Bu,2u);
      r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x927Du;
      {uint32_t a=sc_v11_ea_dp(r,0x006Eu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05927Du:
    if(m==1u&&x==0u){ /* A917 LDA imm */
      sc_v11_scheduler_code_access(r,0x05927Du,2u);
      r->open_bus=0x17u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x927Fu;
      sc_v11_op_lda(r,(uint16_t)(0x0017u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05927Fu:
    if(m==1u&&x==0u){ /* 8568 STA dp */
      sc_v11_scheduler_code_access(r,0x05927Fu,2u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9281u;
      {uint32_t a=sc_v11_ea_dp(r,0x0068u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059281u:
    if(m==1u&&x==0u){ /* 646C STZ dp */
      sc_v11_scheduler_code_access(r,0x059281u,2u);
      r->open_bus=0x6Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9283u;
      {uint32_t a=sc_v11_ea_dp(r,0x006Cu);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059283u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059283u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9285u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059285u:
    if(m==0u&&x==0u){ /* A9D001 LDA imm */
      sc_v11_scheduler_code_access(r,0x059285u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9288u;
      sc_v11_op_lda(r,(uint16_t)(0x01D0u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059288u:
    if(m==0u&&x==0u){ /* 8520 STA dp */
      sc_v11_scheduler_code_access(r,0x059288u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x928Au;
      {uint32_t a=sc_v11_ea_dp(r,0x0020u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05928Au:
    if(m==0u&&x==0u){ /* A9A101 LDA imm */
      sc_v11_scheduler_code_access(r,0x05928Au,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x928Du;
      sc_v11_op_lda(r,(uint16_t)(0x01A1u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05928Du:
    if(m==0u&&x==0u){ /* 851C STA dp */
      sc_v11_scheduler_code_access(r,0x05928Du,2u);
      r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x928Fu;
      {uint32_t a=sc_v11_ea_dp(r,0x001Cu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05928Fu:
    if(m==0u&&x==0u){ /* A94301 LDA imm */
      sc_v11_scheduler_code_access(r,0x05928Fu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9292u;
      sc_v11_op_lda(r,(uint16_t)(0x0143u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059292u:
    if(m==0u&&x==0u){ /* 8518 STA dp */
      sc_v11_scheduler_code_access(r,0x059292u,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9294u;
      {uint32_t a=sc_v11_ea_dp(r,0x0018u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059294u:
    if(m==0u&&x==0u){ /* A90100 LDA imm */
      sc_v11_scheduler_code_access(r,0x059294u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9297u;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059297u:
    if(m==0u&&x==0u){ /* 852C STA dp */
      sc_v11_scheduler_code_access(r,0x059297u,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9299u;
      {uint32_t a=sc_v11_ea_dp(r,0x002Cu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059299u:
    if(m==0u&&x==0u){ /* 6416 STZ dp */
      sc_v11_scheduler_code_access(r,0x059299u,2u);
      r->open_bus=0x16u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x929Bu;
      {uint32_t a=sc_v11_ea_dp(r,0x0016u);sc_v11_bus_write16(r,a,(uint16_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05929Bu:
    if(m==0u&&x==0u){ /* 641A STZ dp */
      sc_v11_scheduler_code_access(r,0x05929Bu,2u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x929Du;
      {uint32_t a=sc_v11_ea_dp(r,0x001Au);sc_v11_bus_write16(r,a,(uint16_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05929Du:
    if(m==0u&&x==0u){ /* 641E STZ dp */
      sc_v11_scheduler_code_access(r,0x05929Du,2u);
      r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x929Fu;
      {uint32_t a=sc_v11_ea_dp(r,0x001Eu);sc_v11_bus_write16(r,a,(uint16_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05929Fu:
    if(m==0u&&x==0u){ /* 6430 STZ dp */
      sc_v11_scheduler_code_access(r,0x05929Fu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92A1u;
      {uint32_t a=sc_v11_ea_dp(r,0x0030u);sc_v11_bus_write16(r,a,(uint16_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592A1u:
    if(m==0u&&x==0u){ /* A90A00 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592A1u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92A4u;
      sc_v11_op_lda(r,(uint16_t)(0x000Au),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592A4u:
    if(m==0u&&x==0u){ /* 8D3301 STA abs */
      sc_v11_scheduler_code_access(r,0x0592A4u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92A7u;
      {uint32_t a=sc_v11_ea_abs(r,0x0133u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592A7u:
    if(m==0u&&x==0u){ /* A90400 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592A7u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92AAu;
      sc_v11_op_lda(r,(uint16_t)(0x0004u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592AAu:
    if(m==0u&&x==0u){ /* 8D3501 STA abs */
      sc_v11_scheduler_code_access(r,0x0592AAu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92ADu;
      {uint32_t a=sc_v11_ea_abs(r,0x0135u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592ADu:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0592ADu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92AFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592AFu:
    if(m==0u&&x==0u){ /* A9FC00 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592AFu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92B2u;
      sc_v11_op_lda(r,(uint16_t)(0x00FCu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592B2u:
    if(m==0u&&x==0u){ /* 8D5302 STA abs */
      sc_v11_scheduler_code_access(r,0x0592B2u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92B5u;
      {uint32_t a=sc_v11_ea_abs(r,0x0253u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592B5u:
    if(m==0u&&x==0u){ /* A9B000 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592B5u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92B8u;
      sc_v11_op_lda(r,(uint16_t)(0x00B0u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592B8u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs */
      sc_v11_scheduler_code_access(r,0x0592B8u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92BBu;
      {uint32_t a=sc_v11_ea_abs(r,0x025Du);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592BBu:
    if(m==0u&&x==0u){ /* A9B700 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592BBu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92BEu;
      sc_v11_op_lda(r,(uint16_t)(0x00B7u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592BEu:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs */
      sc_v11_scheduler_code_access(r,0x0592BEu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92C1u;
      {uint32_t a=sc_v11_ea_abs(r,0x025Fu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592C1u:
    if(m==0u&&x==0u){ /* A91700 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592C1u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92C4u;
      sc_v11_op_lda(r,(uint16_t)(0x0017u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592C4u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs */
      sc_v11_scheduler_code_access(r,0x0592C4u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92C7u;
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592C7u:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0592C7u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92C9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592C9u:
    if(m==0u&&x==0u){ /* A90200 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592C9u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92CCu;
      sc_v11_op_lda(r,(uint16_t)(0x0002u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592CCu:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x0592CCu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92CEu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x92CEu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592CEu:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0592CEu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92D0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592D0u:
    if(m==1u&&x==0u){ /* A5B3 LDA dp */
      sc_v11_scheduler_code_access(r,0x0592D0u,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92D2u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592D2u:
    if(m==1u&&x==0u){ /* 0980 ORA imm */
      sc_v11_scheduler_code_access(r,0x0592D2u,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92D4u;
      sc_v11_op_ora(r,(uint16_t)(0x0080u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592D4u:
    if(m==1u&&x==0u){ /* 85B1 STA dp */
      sc_v11_scheduler_code_access(r,0x0592D4u,2u);
      r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92D6u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592D6u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0592D6u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92D8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592D8u:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0592D8u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92DAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592DAu:
    if(m==0u&&x==0u){ /* A90300 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592DAu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92DDu;
      sc_v11_op_lda(r,(uint16_t)(0x0003u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592DDu:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x0592DDu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92DFu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x92DFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592DFu:
    if(m==0u&&x==0u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x0592DFu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92E1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592E1u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0592E1u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92E3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592E3u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x0592E3u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92E5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592E5u:
    if(m==1u&&x==0u){ /* A27CD7 LDX imm */
      sc_v11_scheduler_code_access(r,0x0592E5u,3u);
      r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92E8u;
      sc_v11_op_ldx(r,(uint16_t)(0xD77Cu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592E8u:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x0592E8u,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92EAu;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592EAu:
    if(m==1u&&x==0u){ /* A90D LDA imm */
      sc_v11_scheduler_code_access(r,0x0592EAu,2u);
      r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92ECu;
      sc_v11_op_lda(r,(uint16_t)(0x000Du),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592ECu:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x0592ECu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92EEu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592EEu:
    if(m==1u&&x==0u){ /* A20000 LDX imm */
      sc_v11_scheduler_code_access(r,0x0592EEu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92F1u;
      sc_v11_op_ldx(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592F1u:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x0592F1u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92F3u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592F3u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0592F3u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92F5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592F5u:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x0592F5u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92F8u;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592F8u:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x0592F8u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92FAu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x92FAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592FAu:
    if(m==0u&&x==0u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x0592FAu,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92FBu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592FBu:
    if(m==0u&&x==0u){ /* A20080 LDX imm */
      sc_v11_scheduler_code_access(r,0x0592FBu,3u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92FEu;
      sc_v11_op_ldx(r,(uint16_t)(0x8000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0592FEu:
    if(m==0u&&x==0u){ /* A00000 LDY imm */
      sc_v11_scheduler_code_access(r,0x0592FEu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9301u;
      sc_v11_op_ldy(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059301u:
    if(m==0u&&x==0u){ /* A9FF7F LDA imm */
      sc_v11_scheduler_code_access(r,0x059301u,3u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9304u;
      sc_v11_op_lda(r,(uint16_t)(0x7FFFu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059304u:
    if(m==0u&&x==0u){ /* 547F7E MVN imm */
      sc_v11_scheduler_code_access(r,0x059304u,3u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9307u;
      sc_v11_bus_write8(r,((uint32_t)0x7Fu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));
      c->x=(uint16_t)(c->x+1u);
      c->y=(uint16_t)(c->y+1u);
      c->a=(uint16_t)(c->a-1u);
      c->dbr=0x7Fu;
      if(c->a!=0xFFFFu)c->pc=0x9304u;
      sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059307u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059307u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9309u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059309u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x059309u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x930Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05930Bu:
    if(m==1u&&x==0u){ /* A242C2 LDX imm */
      sc_v11_scheduler_code_access(r,0x05930Bu,3u);
      r->open_bus=0xC2u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x930Eu;
      sc_v11_op_ldx(r,(uint16_t)(0xC242u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05930Eu:
    if(m==1u&&x==0u){ /* 8609 STX dp */
      sc_v11_scheduler_code_access(r,0x05930Eu,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9310u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059310u:
    if(m==1u&&x==0u){ /* A90E LDA imm */
      sc_v11_scheduler_code_access(r,0x059310u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9312u;
      sc_v11_op_lda(r,(uint16_t)(0x000Eu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059312u:
    if(m==1u&&x==0u){ /* 850B STA dp */
      sc_v11_scheduler_code_access(r,0x059312u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9314u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059314u:
    if(m==1u&&x==0u){ /* A20000 LDX imm */
      sc_v11_scheduler_code_access(r,0x059314u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9317u;
      sc_v11_op_ldx(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059317u:
    if(m==1u&&x==0u){ /* 860E STX dp */
      sc_v11_scheduler_code_access(r,0x059317u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9319u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059319u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059319u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x931Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05931Bu:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x05931Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x931Eu;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05931Eu:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x05931Eu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9320u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9320u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059320u:
    if(m==0u&&x==0u){ /* A20080 LDX imm */
      sc_v11_scheduler_code_access(r,0x059320u,3u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9323u;
      sc_v11_op_ldx(r,(uint16_t)(0x8000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059323u:
    if(m==0u&&x==0u){ /* A00080 LDY imm */
      sc_v11_scheduler_code_access(r,0x059323u,3u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9326u;
      sc_v11_op_ldy(r,(uint16_t)(0x8000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059326u:
    if(m==0u&&x==0u){ /* A9FF7F LDA imm */
      sc_v11_scheduler_code_access(r,0x059326u,3u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9329u;
      sc_v11_op_lda(r,(uint16_t)(0x7FFFu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059329u:
    if(m==0u&&x==0u){ /* 547F7E MVN imm */
      sc_v11_scheduler_code_access(r,0x059329u,3u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x932Cu;
      sc_v11_bus_write8(r,((uint32_t)0x7Fu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));
      c->x=(uint16_t)(c->x+1u);
      c->y=(uint16_t)(c->y+1u);
      c->a=(uint16_t)(c->a-1u);
      c->dbr=0x7Fu;
      if(c->a!=0xFFFFu)c->pc=0x9329u;
      sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05932Cu:
    if(m==0u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x05932Cu,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x932Du;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05932Du:
    if(m==0u&&x==0u){ /* 204793 JSR abs */
      sc_v11_scheduler_code_access(r,0x05932Du,3u);
      r->open_bus=0x93u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9330u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x932Fu))return 0;
      c->pc=0x9347u;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059330u:
    if(m==1u&&x==0u){ /* E614 INC dp */
      sc_v11_scheduler_code_access(r,0x059330u,2u);
      r->open_bus=0x14u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9332u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0014u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059332u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059332u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9334u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059334u:
    if(m==0u&&x==0u){ /* A90000 LDA imm */
      sc_v11_scheduler_code_access(r,0x059334u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9337u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059337u:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x059337u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9339u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9339u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059339u:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059339u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x933Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05933Bu:
    if(m==0u&&x==0u){ /* A90000 LDA imm */
      sc_v11_scheduler_code_access(r,0x05933Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x933Eu;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05933Eu:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x05933Eu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9340u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9340u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059340u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059340u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9342u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059342u:
    if(m==1u&&x==0u){ /* A907 LDA imm */
      sc_v11_scheduler_code_access(r,0x059342u,2u);
      r->open_bus=0x07u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9344u;
      sc_v11_op_lda(r,(uint16_t)(0x0007u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059344u:
    if(m==1u&&x==0u){ /* 8503 STA dp */
      sc_v11_scheduler_code_access(r,0x059344u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9346u;
      {uint32_t a=sc_v11_ea_dp(r,0x0003u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059346u:
    if(m==1u&&x==0u){ /* 6B RTL imp */
      sc_v11_scheduler_code_access(r,0x059346u,1u);
      r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9347u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->pc=(uint16_t)(sc_v11_pop16(r)+1u);
      c->pbr=sc_v11_pop8(r);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059347u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059347u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9349u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059349u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x059349u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x934Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05934Bu:
    if(m==1u&&x==0u){ /* A00000 LDY imm */
      sc_v11_scheduler_code_access(r,0x05934Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x934Eu;
      sc_v11_op_ldy(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05934Eu:
    if(m==1u&&x==0u){ /* 8400 STY dp */
      sc_v11_scheduler_code_access(r,0x05934Eu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9350u;
      {uint32_t a=sc_v11_ea_dp(r,0x0000u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059350u:
    if(m==1u&&x==0u){ /* A97F LDA imm */
      sc_v11_scheduler_code_access(r,0x059350u,2u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9352u;
      sc_v11_op_lda(r,(uint16_t)(0x007Fu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059352u:
    if(m==1u&&x==0u){ /* 8502 STA dp */
      sc_v11_scheduler_code_access(r,0x059352u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9354u;
      {uint32_t a=sc_v11_ea_dp(r,0x0002u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059354u:
    if(m==1u&&x==0u){ /* A2AABB LDX imm */
      sc_v11_scheduler_code_access(r,0x059354u,3u);
      r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9357u;
      sc_v11_op_ldx(r,(uint16_t)(0xBBAAu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059357u:
    if(m==1u&&x==0u){ /* EC4021 CPX abs */
      sc_v11_scheduler_code_access(r,0x059357u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x935Au;
      sc_v11_op_compare(r,c->x,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x2140u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05935Au:
    if(m==1u&&x==0u){ /* D0FB BNE rel */
      sc_v11_scheduler_code_access(r,0x05935Au,2u);
      r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x935Cu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9357u;
      if(c->pc!=0x935Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x935Cu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05935Cu:
    if(m==1u&&x==0u){ /* A9CC LDA imm */
      sc_v11_scheduler_code_access(r,0x05935Cu,2u);
      r->open_bus=0xCCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x935Eu;
      sc_v11_op_lda(r,(uint16_t)(0x00CCu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05935Eu:
    if(m==1u&&x==0u){ /* 8026 BRA rel */
      sc_v11_scheduler_code_access(r,0x05935Eu,2u);
      r->open_bus=0x26u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9360u;
      c->pc=0x9386u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(c->emulation&&((0x9360u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059360u:
    if(m==1u&&x==0u){ /* B700 LDA [dp],y */
      sc_v11_scheduler_code_access(r,0x059360u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9362u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp_long_y(r,0x00u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059362u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x059362u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9363u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059363u:
    if(m==1u&&x==0u){ /* EB XBA imp */
      sc_v11_scheduler_code_access(r,0x059363u,1u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9364u;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));
      sc_v11_set_nz8(c,(uint8_t)c->a);
      sc_v11_scheduler_idle_or_read(r); sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059364u:
    if(m==1u&&x==0u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x059364u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9366u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059366u:
    if(m==1u&&x==0u){ /* 800B BRA rel */
      sc_v11_scheduler_code_access(r,0x059366u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9368u;
      c->pc=0x9373u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(c->emulation&&((0x9368u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059368u:
    if(m==1u&&x==0u){ /* EB XBA imp */
      sc_v11_scheduler_code_access(r,0x059368u,1u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9369u;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));
      sc_v11_set_nz8(c,(uint8_t)c->a);
      sc_v11_scheduler_idle_or_read(r); sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059369u:
    if(m==1u&&x==0u){ /* B700 LDA [dp],y */
      sc_v11_scheduler_code_access(r,0x059369u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x936Bu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp_long_y(r,0x00u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05936Bu:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x05936Bu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x936Cu;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05936Cu:
    if(m==1u&&x==0u){ /* EB XBA imp */
      sc_v11_scheduler_code_access(r,0x05936Cu,1u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x936Du;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));
      sc_v11_set_nz8(c,(uint8_t)c->a);
      sc_v11_scheduler_idle_or_read(r); sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05936Du:
    if(m==1u&&x==0u){ /* CD4021 CMP abs */
      sc_v11_scheduler_code_access(r,0x05936Du,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9370u;
      sc_v11_op_compare(r,c->a,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x2140u))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059370u:
    if(m==1u&&x==0u){ /* D0FB BNE rel */
      sc_v11_scheduler_code_access(r,0x059370u,2u);
      r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9372u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x936Du;
      if(c->pc!=0x9372u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9372u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059372u:
    if(m==1u&&x==0u){ /* 1A INC acc */
      sc_v11_scheduler_code_access(r,0x059372u,1u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9373u;
      sc_v11_op_incdec_accumulator(r,8u,1);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059373u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059373u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9375u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059375u:
    if(m==0u&&x==0u){ /* 8D4021 STA abs */
      sc_v11_scheduler_code_access(r,0x059375u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9378u;
      {uint32_t a=sc_v11_ea_abs(r,0x2140u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059378u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059378u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x937Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05937Au:
    if(m==1u&&x==0u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x05937Au,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x937Bu;
      c->x=(uint16_t)((c->x+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05937Bu:
    if(m==1u&&x==0u){ /* D0EB BNE rel */
      sc_v11_scheduler_code_access(r,0x05937Bu,2u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x937Du;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9368u;
      if(c->pc!=0x937Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x937Du^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05937Du:
    if(m==1u&&x==0u){ /* CD4021 CMP abs */
      sc_v11_scheduler_code_access(r,0x05937Du,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9380u;
      sc_v11_op_compare(r,c->a,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x2140u))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059380u:
    if(m==1u&&x==0u){ /* D0FB BNE rel */
      sc_v11_scheduler_code_access(r,0x059380u,2u);
      r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9382u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x937Du;
      if(c->pc!=0x9382u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9382u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059382u:
    if(m==1u&&x==0u){ /* 6903 ADC imm */
      sc_v11_scheduler_code_access(r,0x059382u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9384u;
      sc_v11_op_adc(r,(uint16_t)(0x0003u),8u);
      if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059384u:
    if(m==1u&&x==0u){ /* F0FC BEQ rel */
      sc_v11_scheduler_code_access(r,0x059384u,2u);
      r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9386u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x9382u;
      if(c->pc!=0x9386u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9386u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059386u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x059386u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9387u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059387u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x059387u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9389u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059389u:
    if(m==0u&&x==0u){ /* B700 LDA [dp],y */
      sc_v11_scheduler_code_access(r,0x059389u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x938Bu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x00u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05938Bu:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x05938Bu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x938Cu;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05938Cu:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x05938Cu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x938Du;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05938Du:
    if(m==0u&&x==0u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x05938Du,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x938Eu;
      c->x=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05938Eu:
    if(m==0u&&x==0u){ /* B700 LDA [dp],y */
      sc_v11_scheduler_code_access(r,0x05938Eu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9390u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x00u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059390u:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x059390u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9391u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059391u:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x059391u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9392u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059392u:
    if(m==0u&&x==0u){ /* 8D4221 STA abs */
      sc_v11_scheduler_code_access(r,0x059392u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9395u;
      {uint32_t a=sc_v11_ea_abs(r,0x2142u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059395u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059395u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9397u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059397u:
    if(m==1u&&x==0u){ /* E00100 CPX imm */
      sc_v11_scheduler_code_access(r,0x059397u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x939Au;
      sc_v11_op_compare(r,c->x,(uint16_t)(0x0001u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05939Au:
    if(m==1u&&x==0u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x05939Au,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x939Cu;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05939Cu:
    if(m==1u&&x==0u){ /* 2A ROL acc */
      sc_v11_scheduler_code_access(r,0x05939Cu,1u);
      r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x939Du;
      sc_v11_op_shift_accumulator(r,8u,2u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05939Du:
    if(m==1u&&x==0u){ /* 8D4121 STA abs */
      sc_v11_scheduler_code_access(r,0x05939Du,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93A0u;
      {uint32_t a=sc_v11_ea_abs(r,0x2141u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593A0u:
    if(m==1u&&x==0u){ /* 697F ADC imm */
      sc_v11_scheduler_code_access(r,0x0593A0u,2u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93A2u;
      sc_v11_op_adc(r,(uint16_t)(0x007Fu),8u);
      if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593A2u:
    if(m==1u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x0593A2u,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93A3u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593A3u:
    if(m==1u&&x==0u){ /* 8D4021 STA abs */
      sc_v11_scheduler_code_access(r,0x0593A3u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93A6u;
      {uint32_t a=sc_v11_ea_abs(r,0x2140u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593A6u:
    if(m==1u&&x==0u){ /* CD4021 CMP abs */
      sc_v11_scheduler_code_access(r,0x0593A6u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93A9u;
      sc_v11_op_compare(r,c->a,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x2140u))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593A9u:
    if(m==1u&&x==0u){ /* D0FB BNE rel */
      sc_v11_scheduler_code_access(r,0x0593A9u,2u);
      r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93ABu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x93A6u;
      if(c->pc!=0x93ABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93ABu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593ABu:
    if(m==1u&&x==0u){ /* 70B3 BVS rel */
      sc_v11_scheduler_code_access(r,0x0593ABu,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93ADu;
      if((c->p&SC_FLAG_V)!=0u)c->pc=0x9360u;
      if(c->pc!=0x93ADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93ADu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593ADu:
    if(m==1u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x0593ADu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93AEu;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593AEu:
    if(m==1u&&x==0u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x0593AEu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93B0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593B0u:
    if(m==0u&&x==0u){ /* 22039605 JSL long */
      sc_v11_scheduler_code_access(r,0x0593B0u,4u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93B4u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x93B3u))return 0;
      c->pbr=0x05u;
      c->pc=0x9603u;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593B4u:
    if(m==0u&&x==0u){ /* 9C5302 STZ abs */
      sc_v11_scheduler_code_access(r,0x0593B4u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93B7u;
      {uint32_t a=sc_v11_ea_abs(r,0x0253u);sc_v11_bus_write16(r,a,(uint16_t)(0u));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593B7u:
    if(m==0u&&x==0u){ /* A530 LDA dp */
      sc_v11_scheduler_code_access(r,0x0593B7u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93B9u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0030u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593B9u:
    if(m==0u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x0593B9u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93BBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593BBu:
    if(m==0u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x0593BBu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93BCu;
      sc_v11_op_shift_accumulator(r,16u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593BCu:
    if(m==0u&&x==0u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x0593BCu,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93BDu;
      c->x=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593BDu:
    if(m==0u&&x==0u){ /* FCC193 JSR (abs,x) */
      sc_v11_scheduler_code_access(r,0x0593BDu,3u);
      r->open_bus=0x93u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93C0u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x93BFu))return 0;
      c->pc=sc_v11_bus_read16(r,((uint32_t)c->pbr<<16)|(uint16_t)(0x93C1u+c->x));
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593C0u:
    if((m==0u||m==1u)&&x==0u){ /* 6B RTL imp; Version 12 accepts both return widths */
      sc_v11_scheduler_code_access(r,0x0593C0u,1u);
      r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93C1u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->pc=(uint16_t)(sc_v11_pop16(r)+1u);
      c->pbr=sc_v11_pop8(r);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593CBu:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0593CBu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93CDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593CDu:
    if(m==0u&&x==0u){ /* C62C DEC dp */
      sc_v11_scheduler_code_access(r,0x0593CDu,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93CFu;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x002Cu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593CFu:
    if(m==0u&&x==0u){ /* D002 BNE rel */
      sc_v11_scheduler_code_access(r,0x0593CFu,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93D1u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x93D3u;
      if(c->pc!=0x93D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93D1u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593D1u:
    if(m==0u&&x==0u){ /* E630 INC dp */
      sc_v11_scheduler_code_access(r,0x0593D1u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93D3u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0030u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593D3u:
    if(m==0u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x0593D3u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93D4u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593D4u:
    if(m==0u&&x==0u){ /* C230 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593D4u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93D6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593D6u:
    if(m==0u&&x==0u){ /* A52C LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593D6u,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93D8u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x002Cu)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593D8u:
    if(m==0u&&x==0u){ /* 290700 AND imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593D8u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93DBu;
      sc_v11_op_and(r,(uint16_t)0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593DBu:
    if(m==0u&&x==0u){ /* D004 BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593DBu,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93DDu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x93E1u;
      if(c->pc!=0x93DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93DDu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593DDu:
    if(m==0u&&x==0u){ /* C624 DEC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593DDu,2u);
      r->open_bus=0x24u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93DFu;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0024u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593DFu:
    if(m==0u&&x==0u){ /* E620 INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593DFu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93E1u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0020u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593E1u:
    if(m==0u&&x==0u){ /* 290300 AND imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593E1u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93E4u;
      sc_v11_op_and(r,(uint16_t)0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593E4u:
    if(m==0u&&x==0u){ /* D002 BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593E4u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93E6u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x93E8u;
      if(c->pc!=0x93E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93E6u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593E6u:
    if(m==0u&&x==0u){ /* E61C INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593E6u,2u);
      r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93E8u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x001Cu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593E8u:
    if(m==0u&&x==0u){ /* 290100 AND imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593E8u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93EBu;
      sc_v11_op_and(r,(uint16_t)0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593EBu:
    if(m==0u&&x==0u){ /* D00B BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593EBu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93EDu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x93F8u;
      if(c->pc!=0x93EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93EDu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593EDu:
    if(m==0u&&x==0u){ /* E618 INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593EDu,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93EFu;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0018u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593EFu:
    if(m==0u&&x==0u){ /* A518 LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593EFu,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93F1u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0018u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593F1u:
    if(m==0u&&x==0u){ /* C9E601 CMP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593F1u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93F4u;
      sc_v11_op_compare(r,c->a,(uint16_t)0x01E6u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593F4u:
    if(m==0u&&x==0u){ /* 9002 BCC rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593F4u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93F6u;
      if((c->p&SC_FLAG_C)==0u)c->pc=0x93F8u;
      if(c->pc!=0x93F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93F6u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593F6u:
    if(m==0u&&x==0u){ /* C62A DEC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593F6u,2u);
      r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93F8u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x002Au),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593F8u:
    if(m==0u&&x==0u){ /* E62C INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593F8u,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93FAu;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x002Cu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593FAu:
    if(m==0u&&x==0u){ /* 20BE94 JSR abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593FAu,3u);
      r->open_bus=0x94u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x93FDu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x93FCu))return 0;
      c->pc=0x94BEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0593FDu:
    if(m==0u&&x==0u){ /* 202E95 JSR abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0593FDu,3u);
      r->open_bus=0x95u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9400u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x93FFu))return 0;
      c->pc=0x952Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
