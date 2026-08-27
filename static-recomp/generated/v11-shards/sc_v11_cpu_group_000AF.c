/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000AF(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02BC00u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC00u,2u);
      r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC02u;
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC02u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC02u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC04u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC04u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC04u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC07u;
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC07u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC07u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC09u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC09u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC09u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC0Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC0Bu:
    if(m==1u&&x==0u){ /* 9C2121 STZ abs; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC0Bu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC0Eu;
      {uint32_t a=sc_v11_ea_abs(r,0x2121u);sc_v11_bus_write8(r,a,0u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC0Eu:
    if(m==1u&&x==0u){ /* E230 SEP imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC0Eu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC10u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC10u:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC10u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC12u;
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC12u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC12u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC13u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC13u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC13u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC14u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC14u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC14u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC15u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC15u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC15u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC16u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC16u:
    if(m==1u&&x==1u){ /* AA TAX imp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC16u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC17u;
      c->x=(uint16_t)(c->a&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC17u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC17u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC19u;
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC19u:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC19u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC1Cu;
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC1Cu:
    if(m==1u&&x==1u){ /* A922 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC1Cu,2u);
      r->open_bus=0x22u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC1Eu;
      sc_v11_op_lda(r,0x0022u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC1Eu:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC1Eu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC21u;
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC21u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC21u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC23u;
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC23u:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC23u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC26u;
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC26u:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC26u,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC28u;
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC28u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC28u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC2Bu;
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC2Bu:
    if(m==1u&&x==1u){ /* A97E LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC2Bu,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC2Du;
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC2Du:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC2Du,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC30u;
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC30u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC30u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC32u;
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC32u:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC32u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC35u;
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC35u:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC35u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC37u;
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC37u:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC37u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC3Au;
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC3Au:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC3Au,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC3Cu;
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC3Cu:
    if(m==1u&&x==1u){ /* A202 LDX imm; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC3Cu,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC3Eu;
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC3Eu:
    if(m==1u&&x==1u){ /* F004 BEQ rel; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC3Eu,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC40u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xBC44u;
            if(c->pc!=0xBC40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC40u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC40u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC40u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC41u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC41u:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC41u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC42u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC42u:
    if(m==1u&&x==1u){ /* D0FC BNE rel; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC42u,2u);
      r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC44u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xBC40u;
            if(c->pc!=0xBC44u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC44u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC44u:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC44u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC47u;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC47u:
    if(m==1u&&x==1u){ /* 6B RTL imp; Version 13 bank-$02 menu asset and DMA island */
      sc_v11_scheduler_code_access(r,0x02BC47u,1u);
      r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xBC48u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC48u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC48u,2u,0x20u,0xBC4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC4Au:
    if(m==0u&&x==0u){ /* 6416 STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Au,2u,0x16u,0xBC4Cu);
      {uint32_t a=sc_v11_ea_dp(r,0x0016u);sc_v11_bus_write16(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC4Cu:
    if(m==0u&&x==0u){ /* 641A STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Cu,2u,0x1Au,0xBC4Eu);
      {uint32_t a=sc_v11_ea_dp(r,0x001Au);sc_v11_bus_write16(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC4Eu:
    if(m==0u&&x==0u){ /* 641E STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Eu,2u,0x1Eu,0xBC50u);
      {uint32_t a=sc_v11_ea_dp(r,0x001Eu);sc_v11_bus_write16(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC50u:
    if(m==0u&&x==0u){ /* 6418 STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC50u,2u,0x18u,0xBC52u);
      {uint32_t a=sc_v11_ea_dp(r,0x0018u);sc_v11_bus_write16(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC52u:
    if(m==0u&&x==0u){ /* 641C STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC52u,2u,0x1Cu,0xBC54u);
      {uint32_t a=sc_v11_ea_dp(r,0x001Cu);sc_v11_bus_write16(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC54u:
    if(m==0u&&x==0u){ /* 6420 STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC54u,2u,0x20u,0xBC56u);
      {uint32_t a=sc_v11_ea_dp(r,0x0020u);sc_v11_bus_write16(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC56u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC56u,2u,0x20u,0xBC58u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC58u:
    if(m==1u&&x==0u){ /* A901 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC58u,2u,0x01u,0xBC5Au);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC5Au:
    if(m==1u&&x==0u){ /* 8561 STA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Au,2u,0x61u,0xBC5Cu);
      {uint32_t a=sc_v11_ea_dp(r,0x0061u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC5Cu:
    if(m==1u&&x==0u){ /* A930 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Cu,2u,0x30u,0xBC5Eu);
      sc_v11_op_lda(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC5Eu:
    if(m==1u&&x==0u){ /* 8564 STA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Eu,2u,0x64u,0xBC60u);
      {uint32_t a=sc_v11_ea_dp(r,0x0064u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC60u:
    if(m==1u&&x==0u){ /* A904 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC60u,2u,0x04u,0xBC62u);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC62u:
    if(m==1u&&x==0u){ /* 8567 STA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC62u,2u,0x67u,0xBC64u);
      {uint32_t a=sc_v11_ea_dp(r,0x0067u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC64u:
    if(m==1u&&x==0u){ /* 6460 STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC64u,2u,0x60u,0xBC66u);
      {uint32_t a=sc_v11_ea_dp(r,0x0060u);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC66u:
    if(m==1u&&x==0u){ /* A914 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC66u,2u,0x14u,0xBC68u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC68u:
    if(m==1u&&x==0u){ /* 8568 STA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC68u,2u,0x68u,0xBC6Au);
      {uint32_t a=sc_v11_ea_dp(r,0x0068u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC6Au:
    if(m==1u&&x==0u){ /* 6469 STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Au,2u,0x69u,0xBC6Cu);
      {uint32_t a=sc_v11_ea_dp(r,0x0069u);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC6Cu:
    if(m==1u&&x==0u){ /* A9E0 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Cu,2u,0xE0u,0xBC6Eu);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC6Eu:
    if(m==1u&&x==0u){ /* 856E STA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Eu,2u,0x6Eu,0xBC70u);
      {uint32_t a=sc_v11_ea_dp(r,0x006Eu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC70u:
    if(m==1u&&x==0u){ /* 646D STZ dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC70u,2u,0x6Du,0xBC72u);
      {uint32_t a=sc_v11_ea_dp(r,0x006Du);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC72u:
    if(m==1u&&x==0u){ /* A908 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC72u,2u,0x08u,0xBC74u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC74u:
    if(m==1u&&x==0u){ /* C508 CMP dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC74u,2u,0x08u,0xBC76u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0008u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC76u:
    if(m==1u&&x==0u){ /* F002 BEQ rel; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC76u,2u,0x02u,0xBC78u);
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xBC7Au;
      if(c->pc!=0xBC78u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC78u:
    if(m==1u&&x==0u){ /* 8503 STA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC78u,2u,0x03u,0xBC7Au);
      {uint32_t a=sc_v11_ea_dp(r,0x0003u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC7Au:
    if(m==1u&&x==0u){ /* E220 SEP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Au,2u,0x20u,0xBC7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC7Cu:
    if(m==1u&&x==0u){ /* A5B3 LDA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Cu,2u,0xB3u,0xBC7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC7Eu:
    if(m==1u&&x==0u){ /* 0980 ORA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Eu,2u,0x80u,0xBC80u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC80u:
    if(m==1u&&x==0u){ /* 85B1 STA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC80u,2u,0xB1u,0xBC82u);
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC82u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC82u,2u,0x20u,0xBC84u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC84u:
    if(m==0u&&x==0u){ /* A90300 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC84u,3u,0x00u,0xBC87u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC87u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC87u,2u,0x00u,0xBC89u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC89u:
    if(m==0u&&x==0u){ /* A90300 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC89u,3u,0x00u,0xBC8Cu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC8Cu:
    if(m==0u&&x==0u){ /* 8514 STA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Cu,2u,0x14u,0xBC8Eu);
      {uint32_t a=sc_v11_ea_dp(r,0x0014u);sc_v11_bus_write16(r,a,c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC8Eu:
    if(m==0u&&x==0u){ /* 6B RTL imp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Eu,1u,0x00u,0xBC8Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC8Fu:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* C230 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Fu,2u,0x30u,0xBC91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC91u:
    if(m==0u&&x==0u){ /* 9C5302 STZ abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC91u,3u,0x02u,0xBC94u);
      {uint32_t a=sc_v11_ea_abs(r,0x0253u);sc_v11_bus_write16(r,a,0u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC94u:
    if(m==0u&&x==0u){ /* A98000 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC94u,3u,0x00u,0xBC97u);
      sc_v11_op_lda(r,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC97u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC97u,3u,0x02u,0xBC9Au);
      {uint32_t a=sc_v11_ea_abs(r,0x025Du);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC9Au:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC9Au,3u,0x02u,0xBC9Du);
      {uint32_t a=sc_v11_ea_abs(r,0x025Fu);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC9Du:
    if(m==0u&&x==0u){ /* A90D00 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BC9Du,3u,0x00u,0xBCA0u);
      sc_v11_op_lda(r,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCA0u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCA0u,3u,0x02u,0xBCA3u);
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCA3u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCA3u,2u,0x20u,0xBCA5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCA5u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCA5u,3u,0x00u,0xBCA8u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCA8u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCA8u,2u,0x00u,0xBCAAu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCAAu:
    if(m==0u&&x==0u){ /* A91000 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCAAu,3u,0x00u,0xBCADu);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCADu:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCADu,3u,0x02u,0xBCB0u);
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCB0u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCB0u,2u,0x20u,0xBCB2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCB2u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCB2u,3u,0x00u,0xBCB5u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCB5u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCB5u,2u,0x00u,0xBCB7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCB7u:
    if(m==0u&&x==0u){ /* A98800 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCB7u,3u,0x00u,0xBCBAu);
      sc_v11_op_lda(r,0x0088u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCBAu:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCBAu,3u,0x02u,0xBCBDu);
      {uint32_t a=sc_v11_ea_abs(r,0x025Du);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCBDu:
    if(m==0u&&x==0u){ /* A544 LDA dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCBDu,2u,0x44u,0xBCBFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0044u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCBFu:
    if(m==0u&&x==0u){ /* F00F BEQ rel; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCBFu,2u,0x0Fu,0xBCC1u);
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xBCD0u;
      if(c->pc!=0xBCC1u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCC1u:
    if(m==0u&&x==0u){ /* A90E00 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCC1u,3u,0x00u,0xBCC4u);
      sc_v11_op_lda(r,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCC4u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCC4u,3u,0x02u,0xBCC7u);
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCC7u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCC7u,2u,0x20u,0xBCC9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCC9u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCC9u,3u,0x00u,0xBCCCu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCCCu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCCCu,2u,0x00u,0xBCCEu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCCEu:
    if(m==0u&&x==0u){ /* 8006 BRA rel; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCCEu,2u,0x06u,0xBCD0u);
      c->pc=0xBCD6u;sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCD0u:
    if(m==0u&&x==0u){ /* A97400 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCD0u,3u,0x00u,0xBCD3u);
      sc_v11_op_lda(r,0x0074u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCD3u:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCD3u,3u,0x02u,0xBCD6u);
      {uint32_t a=sc_v11_ea_abs(r,0x025Fu);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCD6u:
    if(m==0u&&x==0u){ /* A90F00 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCD6u,3u,0x00u,0xBCD9u);
      sc_v11_op_lda(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCD9u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCD9u,3u,0x02u,0xBCDCu);
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCDCu:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCDCu,2u,0x20u,0xBCDEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCDEu:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCDEu,3u,0x00u,0xBCE1u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCE1u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCE1u,2u,0x00u,0xBCE3u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCE3u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCE3u,2u,0x20u,0xBCE5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCE5u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCE5u,2u,0x10u,0xBCE7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCE7u:
    if(m==1u&&x==0u){ /* A932 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCE7u,2u,0x32u,0xBCE9u);
      sc_v11_op_lda(r,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCE9u:
    if(m==1u&&x==0u){ /* 8D5D02 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCE9u,3u,0x02u,0xBCECu);
      {uint32_t a=sc_v11_ea_abs(r,0x025Du);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCECu:
    if(m==1u&&x==0u){ /* A900 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCECu,2u,0x00u,0xBCEEu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCEEu:
    if(m==1u&&x==0u){ /* EB XBA imp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCEEu,1u,0x00u,0xBCEFu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCEFu:
    if(m==1u&&x==0u){ /* A900 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCEFu,2u,0x00u,0xBCF1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCF1u:
    if(m==1u&&x==0u){ /* A444 LDY dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCF1u,2u,0x44u,0xBCF3u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0044u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCF3u:
    if(m==1u&&x==0u){ /* F001 BEQ rel; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCF3u,2u,0x01u,0xBCF5u);
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xBCF6u;
      if(c->pc!=0xBCF5u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCF5u:
    if(m==1u&&x==0u){ /* 1A INC acc; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCF5u,1u,0x00u,0xBCF6u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCF6u:
    if(m==1u&&x==0u){ /* 0A ASL acc; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCF6u,1u,0x00u,0xBCF7u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCF7u:
    if(m==1u&&x==0u){ /* 0A ASL acc; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCF7u,1u,0x00u,0xBCF8u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCF8u:
    if(m==1u&&x==0u){ /* 653E ADC dp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCF8u,2u,0x3Eu,0xBCFAu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x003Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCFAu:
    if(m==1u&&x==0u){ /* AA TAX imp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCFAu,1u,0x00u,0xBCFBu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCFBu:
    if(m==1u&&x==0u){ /* BD7CD3 LDA abs,x; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCFBu,3u,0xD3u,0xBCFEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD37Cu)),8u);if(0u==0u||(((0xD37Cu&0xffu)+(c->x&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BCFEu:
    if(m==1u&&x==0u){ /* 8D5F02 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BCFEu,3u,0x02u,0xBD01u);
      {uint32_t a=sc_v11_ea_abs(r,0x025Fu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD01u:
    if(m==1u&&x==0u){ /* A90C LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BD01u,2u,0x0Cu,0xBD03u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD03u:
    if(m==1u&&x==0u){ /* 8D6102 STA abs; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BD03u,3u,0x02u,0xBD06u);
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD06u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BD06u,2u,0x20u,0xBD08u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD08u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BD08u,3u,0x00u,0xBD0Bu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD0Bu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BD0Bu,2u,0x00u,0xBD0Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD0Du:
    if(m==0u&&x==0u){ /* 6B RTL imp; Version 13 menu layout and graphics setup islands */
      SC_STATIC_CONTEXT_BEGIN(0x02BD0Du,1u,0x00u,0xBD0Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
