/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000AE(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02BB23u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB23u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB25u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB25u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB25u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB27u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB27u:
    if(m==1u&&x==0u){ /* A271A5 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB27u,3u);
      r->open_bus=0xA5u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB2Au;
      sc_v11_op_ldx(r,0xA571u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB2Au:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB2Au,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB2Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB2Cu:
    if(m==1u&&x==0u){ /* A909 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB2Cu,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB2Eu;
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB2Eu:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB2Eu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB30u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB30u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB30u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB33u;
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB33u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB33u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB35u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB35u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB35u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB37u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB37u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB37u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB3Au;
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB3Au:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB3Au,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB3Cu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB3Cu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB3Cu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB3Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB3Eu:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB3Eu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB40u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB40u:
    if(m==1u&&x==0u){ /* A2F1AB LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB40u,3u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB43u;
      sc_v11_op_ldx(r,0xABF1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB43u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB43u,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB45u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB45u:
    if(m==1u&&x==0u){ /* A90B LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB45u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB47u;
      sc_v11_op_lda(r,0x000Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB47u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB47u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB49u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB49u:
    if(m==1u&&x==0u){ /* A20060 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB49u,3u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB4Cu;
      sc_v11_op_ldx(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB4Cu:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB4Cu,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB4Eu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB4Eu:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB4Eu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB50u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB50u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB50u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB53u;
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB53u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB53u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB55u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB55u:
    if(m==0u&&x==0u){ /* C210 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB55u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB57u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB57u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB57u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB5Au;
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB5Au:
    if(m==0u&&x==0u){ /* 8E1621 STX abs; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB5Au,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB5Du;
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,c->x);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB5Du:
    if(m==0u&&x==0u){ /* E230 SEP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB5Du,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB5Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB5Fu:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB5Fu,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB61u;
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB61u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB61u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB62u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB62u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB62u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB63u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB63u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB63u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB64u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB64u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB64u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB65u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB65u:
    if(m==1u&&x==1u){ /* AA TAX imp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB65u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB66u;
      c->x=(uint16_t)(c->a&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB66u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB66u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB68u;
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB68u:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB68u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB6Bu;
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB6Bu:
    if(m==1u&&x==1u){ /* A918 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB6Bu,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB6Du;
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB6Du:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB6Du,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB70u;
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB70u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB70u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB72u;
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB72u:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB72u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB75u;
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB75u:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB75u,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB77u;
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB77u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB77u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB7Au;
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB7Au:
    if(m==1u&&x==1u){ /* A97E LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB7Au,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB7Cu;
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB7Cu:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB7Cu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB7Fu;
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB7Fu:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB7Fu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB81u;
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB81u:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB81u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB84u;
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB84u:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB84u,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB86u;
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB86u:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB86u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB89u;
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB89u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB89u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB8Bu;
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB8Bu:
    if(m==1u&&x==1u){ /* A202 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB8Bu,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB8Du;
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB8Du:
    if(m==1u&&x==1u){ /* F004 BEQ rel; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB8Du,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB8Fu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xBB93u;
            if(c->pc!=0xBB8Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB8Fu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB8Fu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB8Fu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB90u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB90u:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB90u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB91u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB91u:
    if(m==1u&&x==1u){ /* D0FC BNE rel; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB91u,2u);
      r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB93u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xBB8Fu;
            if(c->pc!=0xBB93u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB93u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB93u:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB93u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB96u;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB96u:
    if(m==1u&&x==1u){ /* E220 SEP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB96u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB98u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB98u:
    if(m==1u&&x==1u){ /* C210 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB98u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB9Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB9Au:
    if(m==1u&&x==0u){ /* A2DBC4 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB9Au,3u);
      r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB9Du;
      sc_v11_op_ldx(r,0xC4DBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB9Du:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB9Du,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBB9Fu;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BB9Fu:
    if(m==1u&&x==0u){ /* A908 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BB9Fu,2u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBA1u;
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBA1u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBA1u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBA3u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBA3u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBA3u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBA6u;
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBA6u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBA6u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBA8u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBA8u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBA8u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBAAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBAAu:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBAAu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBADu;
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBADu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBADu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBAFu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBAFu:
    if(m==0u&&x==0u){ /* C210 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBAFu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBB1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBB1u:
    if(m==0u&&x==0u){ /* A20040 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBB1u,3u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBB4u;
      sc_v11_op_ldx(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBB4u:
    if(m==0u&&x==0u){ /* 8E1621 STX abs; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBB4u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBB7u;
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,c->x);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBB7u:
    if(m==0u&&x==0u){ /* E230 SEP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBB7u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBB9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBB9u:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBB9u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBBBu;
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBBBu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBBBu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBBCu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBBCu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBBCu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBBDu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBBDu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBBDu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBBEu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBBEu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBBEu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBBFu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBBFu:
    if(m==1u&&x==1u){ /* AA TAX imp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBBFu,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBC0u;
      c->x=(uint16_t)(c->a&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBC0u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBC0u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBC2u;
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBC2u:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBC2u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBC5u;
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBC5u:
    if(m==1u&&x==1u){ /* A918 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBC5u,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBC7u;
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBC7u:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBC7u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBCAu;
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBCAu:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBCAu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBCCu;
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBCCu:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBCCu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBCFu;
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBCFu:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBCFu,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBD1u;
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBD1u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBD1u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBD4u;
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBD4u:
    if(m==1u&&x==1u){ /* A97E LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBD4u,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBD6u;
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBD6u:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBD6u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBD9u;
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBD9u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBD9u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBDBu;
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBDBu:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBDBu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBDEu;
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBDEu:
    if(m==1u&&x==1u){ /* A920 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBDEu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBE0u;
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBE0u:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBE0u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBE3u;
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBE3u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBE3u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBE5u;
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBE5u:
    if(m==1u&&x==1u){ /* A202 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBE5u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBE7u;
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBE7u:
    if(m==1u&&x==1u){ /* F004 BEQ rel; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBE7u,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBE9u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xBBEDu;
            if(c->pc!=0xBBE9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBE9u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBE9u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBE9u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBEAu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBEAu:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBEAu,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBEBu;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBEBu:
    if(m==1u&&x==1u){ /* D0FC BNE rel; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBEBu,2u);
      r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBEDu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xBBE9u;
            if(c->pc!=0xBBEDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBEDu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBEDu:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBEDu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBF0u;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBF0u:
    if(m==1u&&x==1u){ /* E220 SEP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBF0u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBF2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBF2u:
    if(m==1u&&x==1u){ /* C210 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBF2u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBF4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBF4u:
    if(m==1u&&x==0u){ /* A2D88A LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBF4u,3u);
      r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBF7u;
      sc_v11_op_ldx(r,0x8AD8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBF7u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBF7u,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBF9u;
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBF9u:
    if(m==1u&&x==0u){ /* A90C LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBF9u,2u);
      r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBFBu;
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBFBu:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBFBu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBBFDu;
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BBFDu:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BBFDu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC00u;
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
