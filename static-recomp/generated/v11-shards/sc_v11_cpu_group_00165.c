/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_00165(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x059400u:
    if(m==0u&&x==0u){ /* A518 LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059400u,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9402u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0018u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059402u:
    if(m==0u&&x==0u){ /* 29FF01 AND imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059402u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9405u;
      sc_v11_op_and(r,(uint16_t)0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059405u:
    if(m==0u&&x==0u){ /* 8518 STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059405u,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9407u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0018u),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059407u:
    if(m==0u&&x==0u){ /* A51C LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059407u,2u);
      r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9409u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x001Cu)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059409u:
    if(m==0u&&x==0u){ /* 29FF01 AND imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059409u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x940Cu;
      sc_v11_op_and(r,(uint16_t)0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05940Cu:
    if(m==0u&&x==0u){ /* 851C STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05940Cu,2u);
      r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x940Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x001Cu),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05940Eu:
    if(m==0u&&x==0u){ /* A520 LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05940Eu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9410u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0020u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059410u:
    if(m==0u&&x==0u){ /* 29FF01 AND imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059410u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9413u;
      sc_v11_op_and(r,(uint16_t)0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059413u:
    if(m==0u&&x==0u){ /* 8520 STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059413u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9415u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0020u),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059415u:
    if(m==0u&&x==0u){ /* D002 BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059415u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9417u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9419u;
      if(c->pc!=0x9417u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9417u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059417u:
    if(m==0u&&x==0u){ /* E630 INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059417u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9419u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0030u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059419u:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059419u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x941Au;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05941Au:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05941Au,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x941Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05941Cu:
    if(m==0u&&x==0u){ /* A94000 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05941Cu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x941Fu;
      sc_v11_op_lda(r,(uint16_t)0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05941Fu:
    if(m==0u&&x==0u){ /* 852E STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05941Fu,2u);
      r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9421u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x002Eu),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059421u:
    if(m==0u&&x==0u){ /* E630 INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059421u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9423u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0030u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059423u:
    if(m==0u&&x==0u){ /* 20DB94 JSR abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059423u,3u);
      r->open_bus=0x94u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9426u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9425u))return 0;
      c->pc=0x94DBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059426u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059426u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9428u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059428u:
    if(m==0u&&x==0u){ /* A94A01 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059428u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x942Bu;
      sc_v11_op_lda(r,(uint16_t)0x014Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05942Bu:
    if(m==0u&&x==0u){ /* 852C STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05942Bu,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x942Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x002Cu),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05942Du:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05942Du,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x942Eu;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594DBu:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594DBu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594DDu:
    if(m==0u&&x==0u){ /* A9E800 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594DDu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94E0u;
      sc_v11_op_lda(r,(uint16_t)0x00E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594E3u:
    if(m==0u&&x==0u){ /* A97800 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594E3u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94E6u;
      sc_v11_op_lda(r,(uint16_t)0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594E9u:
    if(m==0u&&x==0u){ /* A98700 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594E9u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94ECu;
      sc_v11_op_lda(r,(uint16_t)0x0087u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594EFu:
    if(m==0u&&x==0u){ /* A91800 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594EFu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94F2u;
      sc_v11_op_lda(r,(uint16_t)0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594F7u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594F7u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94FAu;
      sc_v11_op_lda(r,(uint16_t)0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594E0u:
    if(m==0u&&x==0u){ /* 8D5302 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594E0u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94E3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594E6u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594E6u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94E9u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594ECu:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594ECu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94EFu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594F2u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594F2u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94F5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594F5u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594F5u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94F7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594FAu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594FAu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94FCu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x94FCu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594FCu:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594FCu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94FDu;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05942Eu:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05942Eu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9430u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059430u:
    if(m==0u&&x==0u){ /* A9 immediate 16-bit; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059430u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9433u;
      sc_v11_op_lda(r,(uint16_t)0x0180u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059433u:
    if(m==0u&&x==0u){ /* 8D5302 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059433u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9436u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059436u:
    if(m==0u&&x==0u){ /* AD7702 LDA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059436u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9439u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0277u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059439u:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059439u,3u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x943Cu;
      sc_v11_op_and(r,(uint16_t)0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05943Cu:
    if(m==0u&&x==0u){ /* 8D7702 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05943Cu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x943Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0277u),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05943Fu:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05943Fu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9442u;
      sc_v11_op_and(r,(uint16_t)0x0200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059442u:
    if(m==0u&&x==0u){ /* BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059442u,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9444u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x944Du;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9444u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059444u:
    if(m==0u&&x==0u){ /* STZ dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059444u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9446u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0010u),0u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059446u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059446u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9448u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059448u:
    if(m==0u&&x==0u){ /* A9 immediate 16-bit; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059448u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x944Bu;
      sc_v11_op_lda(r,(uint16_t)0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05944Bu:
    if(m==0u&&x==0u){ /* COP #$00; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05944Bu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x944Du;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x944Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05944Du:
    if(m==0u&&x==0u){ /* A52C LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05944Du,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x944Fu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x002Cu)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05944Fu:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05944Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9452u;
      sc_v11_op_and(r,(uint16_t)0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059452u:
    if(m==0u&&x==0u){ /* BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059452u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9454u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9454u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9454u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059454u:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059454u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9457u;
      sc_v11_op_and(r,(uint16_t)0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059457u:
    if(m==0u&&x==0u){ /* BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059457u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9459u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x945Bu;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9459u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059459u:
    if(m==0u&&x==0u){ /* INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059459u,2u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x945Bu;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x001Au),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05945Bu:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05945Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x945Eu;
      sc_v11_op_and(r,(uint16_t)0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05945Eu:
    if(m==0u&&x==0u){ /* BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05945Eu,2u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9460u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9465u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9460u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059460u:
    if(m==0u&&x==0u){ /* INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059460u,2u);
      r->open_bus=0x16u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9462u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0016u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059462u:
    if(m==0u&&x==0u){ /* DEC abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059462u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9465u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0277u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059465u:
    if(m==0u&&x==0u){ /* A516 LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059465u,2u);
      r->open_bus=0x16u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9467u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0016u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059467u:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059467u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x946Au;
      sc_v11_op_and(r,(uint16_t)0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05946Au:
    if(m==0u&&x==0u){ /* 8516 STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05946Au,2u);
      r->open_bus=0x16u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x946Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0016u),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05946Cu:
    if(m==0u&&x==0u){ /* A51A LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05946Cu,2u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x946Eu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x001Au)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05946Eu:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05946Eu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9471u;
      sc_v11_op_and(r,(uint16_t)0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059471u:
    if(m==0u&&x==0u){ /* 851A STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059471u,2u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9473u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x001Au),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059473u:
    if(m==0u&&x==0u){ /* A51E LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059473u,2u);
      r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9475u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x001Eu)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059475u:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059475u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9478u;
      sc_v11_op_and(r,(uint16_t)0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059478u:
    if(m==0u&&x==0u){ /* 851E STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059478u,2u);
      r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x947Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x001Eu),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05947Au:
    if(m==0u&&x==0u){ /* INC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05947Au,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x947Cu;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x002Cu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05947Cu:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05947Cu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x947Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05947Eu:
    if(m==0u&&x==0u){ /* A52C LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05947Eu,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9480u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x002Cu)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059480u:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059480u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9483u;
      sc_v11_op_and(r,(uint16_t)0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059483u:
    if(m==0u&&x==0u){ /* BEQ rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059483u,2u);
      r->open_bus=0x11u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9485u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9496u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9485u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059485u:
    if(m==0u&&x==0u){ /* DEC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059485u,2u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9487u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0028u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059487u:
    if(m==0u&&x==0u){ /* A528 LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059487u,2u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9489u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0028u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059489u:
    if(m==0u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059489u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x948Cu;
      sc_v11_op_and(r,(uint16_t)0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05948Cu:
    if(m==0u&&x==0u){ /* CMP immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05948Cu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x948Fu;
      sc_v11_op_compare(r,c->a,(uint16_t)0x01C1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05948Fu:
    if(m==0u&&x==0u){ /* BCS rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05948Fu,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9491u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9494u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9491u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059491u:
    if(m==0u&&x==0u){ /* A9 immediate 16-bit; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059491u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9494u;
      sc_v11_op_lda(r,(uint16_t)0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059494u:
    if(m==0u&&x==0u){ /* 8528 STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059494u,2u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9496u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0028u),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059496u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059496u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9498u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059498u:
    if(m==0u&&x==0u){ /* DEC dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059498u,2u);
      r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x949Au;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x002Eu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05949Au:
    if(m==0u&&x==0u){ /* BEQ rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05949Au,2u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x949Cu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x94A6u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x949Cu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05949Cu:
    if(m==0u&&x==0u){ /* A52E LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05949Cu,2u);
      r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x949Eu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x002Eu)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05949Eu:
    if(m==0u&&x==0u){ /* CMP immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05949Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94A1u;
      sc_v11_op_compare(r,c->a,(uint16_t)0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594A1u:
    if(m==0u&&x==0u){ /* BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594A1u,2u);
      r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94A3u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x94AFu;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94A3u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594A3u:
    if(m==0u&&x==0u){ /* JMP abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594A3u,3u);
      r->open_bus=0x94u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94FDu;
      c->pc=0x94FDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594A6u:
    if(m==0u&&x==0u){ /* JSR abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594A6u,3u);
      r->open_bus=0x94u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94A9u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94A8u))return 0;
      c->pc=0x94DBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594A9u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594A9u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94ABu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594ABu:
    if(m==1u&&x==0u){ /* A9 immediate 8-bit; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594ABu,2u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94ADu;
      sc_v11_op_lda(r,(uint16_t)0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594ADu:
    if(m==1u&&x==0u){ /* 852E STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594ADu,2u);
      r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94AFu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x002Eu),(uint8_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594AFu:
    if((m==0u||m==1u)&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594AFu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94B1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594B1u:
    if(m==0u&&x==0u){ /* A52E LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594B1u,2u);
      r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94B3u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x002Eu)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594B3u:
    if(m==0u&&x==0u){ /* CMP immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594B3u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94B6u;
      sc_v11_op_compare(r,c->a,(uint16_t)0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594B6u:
    if(m==0u&&x==0u){ /* BCS rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594B6u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94B8u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x94BBu;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94B8u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594B8u:
    if(m==0u&&x==0u){ /* JMP abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594B8u,3u);
      r->open_bus=0x95u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x952Eu;
      c->pc=0x952Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594BBu:
    if(m==0u&&x==0u){ /* JMP abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594BBu,3u);
      r->open_bus=0x95u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x954Fu;
      c->pc=0x954Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594FDu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594FDu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94FFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594FFu:
    if(m==1u&&x==0u){ /* A9 immediate 8-bit; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x0594FFu,2u);
      r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9501u;
      sc_v11_op_lda(r,(uint16_t)0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059501u:
    if(m==1u&&x==0u){ /* 8F STA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059501u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9505u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E20E9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059505u:
    if(m==1u&&x==0u){ /* 8F STA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059505u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9509u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E20EDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059509u:
    if(m==1u&&x==0u){ /* 8F STA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059509u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x950Du;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E20F1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05950Du:
    if(m==1u&&x==0u){ /* 8F STA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05950Du,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9511u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E20F5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059511u:
    if(m==1u&&x==0u){ /* 8F STA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059511u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9515u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E20F9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059515u:
    if(m==1u&&x==0u){ /* AF LDA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059515u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9519u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Eu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059519u:
    if(m==1u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059519u,2u);
      r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x951Bu;
      sc_v11_op_and(r,(uint16_t)0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05951Bu:
    if(m==1u&&x==0u){ /* ORA immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05951Bu,2u);
      r->open_bus=0x50u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x951Du;
      sc_v11_op_ora(r,(uint16_t)0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05951Du:
    if(m==1u&&x==0u){ /* 8F STA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05951Du,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9521u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059521u:
    if(m==1u&&x==0u){ /* AF LDA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059521u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9525u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059525u:
    if(m==1u&&x==0u){ /* AND immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059525u,2u);
      r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9527u;
      sc_v11_op_and(r,(uint16_t)0x00C0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059527u:
    if(m==1u&&x==0u){ /* ORA immediate; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059527u,2u);
      r->open_bus=0x15u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9529u;
      sc_v11_op_ora(r,(uint16_t)0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059529u:
    if(m==1u&&x==0u){ /* 8F STA long; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059529u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x952Du;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05952Du:
    if(m==1u&&x==0u){ /* RTS imp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05952Du,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x952Eu;
      {uint16_t rp;sc_v11_scheduler_internal_cycle(r,2u);rp=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(rp+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05954Fu:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05954Fu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9551u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059551u:
    if(m==0u&&x==0u){ /* A9 immediate 16-bit; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059551u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9554u;
      sc_v11_op_lda(r,(uint16_t)0x00D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059554u:
    if(m==0u&&x==0u){ /* 8D5302 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059554u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9557u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059557u:
    if(m==0u&&x==0u){ /* A528 LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059557u,2u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9559u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0028u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059559u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059559u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x955Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05955Cu:
    if(m==0u&&x==0u){ /* A52A LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05955Cu,2u);
      r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x955Eu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x002Au)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05955Eu:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05955Eu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9561u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059561u:
    if(m==0u&&x==0u){ /* A9 immediate 16-bit; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059561u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9564u;
      sc_v11_op_lda(r,(uint16_t)0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059564u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059564u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9567u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059567u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059567u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9569u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059569u:
    if(m==0u&&x==0u){ /* A9 immediate 16-bit; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059569u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x956Cu;
      sc_v11_op_lda(r,(uint16_t)0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05956Cu:
    if(m==0u&&x==0u){ /* COP #$00; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05956Cu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x956Eu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x956Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05956Eu:
    if(m==0u&&x==0u){ /* RTS imp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05956Eu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x956Fu;
      {uint16_t rp;sc_v11_scheduler_internal_cycle(r,2u);rp=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(rp+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05952Eu:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05952Eu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9530u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059530u:
    if(m==0u&&x==0u){ /* A9D400 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059530u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9533u;
      sc_v11_op_lda(r,(uint16_t)0x00D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059533u:
    if(m==0u&&x==0u){ /* 8D5302 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059533u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9536u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059536u:
    if(m==0u&&x==0u){ /* A528 LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059536u,2u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9538u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0028u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059538u:
    if(m==0u&&x==0u){ /* 3A DEC acc; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059538u,1u);
      r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9539u;
      sc_v11_op_incdec_accumulator(r,16u,-1);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059539u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059539u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x953Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05953Cu:
    if(m==0u&&x==0u){ /* A52A LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05953Cu,2u);
      r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x953Eu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x002Au)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05953Eu:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05953Eu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9541u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059541u:
    if(m==0u&&x==0u){ /* A91900 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059541u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9544u;
      sc_v11_op_lda(r,(uint16_t)0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059544u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059544u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9547u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),(uint16_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059547u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059547u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9549u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059549u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059549u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x954Cu;
      sc_v11_op_lda(r,(uint16_t)0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05954Cu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05954Cu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x954Eu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x954Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05954Eu:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05954Eu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x954Fu;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594BEu:
    if((m==0u||m==1u)&&x==0u){ /* C220 REP imm; Version 12 widened entry */
      sc_v11_scheduler_code_access(r,0x0594BEu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94C0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594C0u:
    if(m==0u&&x==0u){ /* 9C5302 STZ abs */
      sc_v11_scheduler_code_access(r,0x0594C0u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94C3u;
      {uint32_t a=sc_v11_ea_abs(r,0x0253u);sc_v11_bus_write16(r,a,(uint16_t)(0u));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594C3u:
    if(m==0u&&x==0u){ /* A526 LDA dp */
      sc_v11_scheduler_code_access(r,0x0594C3u,2u);
      r->open_bus=0x26u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94C5u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0026u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594C5u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs */
      sc_v11_scheduler_code_access(r,0x0594C5u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94C8u;
      {uint32_t a=sc_v11_ea_abs(r,0x025Du);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594C8u:
    if(m==0u&&x==0u){ /* A524 LDA dp */
      sc_v11_scheduler_code_access(r,0x0594C8u,2u);
      r->open_bus=0x24u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94CAu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0024u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594CAu:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs */
      sc_v11_scheduler_code_access(r,0x0594CAu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94CDu;
      {uint32_t a=sc_v11_ea_abs(r,0x025Fu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594CDu:
    if(m==0u&&x==0u){ /* A91600 LDA imm */
      sc_v11_scheduler_code_access(r,0x0594CDu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94D0u;
      sc_v11_op_lda(r,(uint16_t)(0x0016u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594D0u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs */
      sc_v11_scheduler_code_access(r,0x0594D0u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94D3u;
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594D3u:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x0594D3u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94D5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594D5u:
    if(m==0u&&x==0u){ /* A90200 LDA imm */
      sc_v11_scheduler_code_access(r,0x0594D5u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94D8u;
      sc_v11_op_lda(r,(uint16_t)(0x0002u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594D8u:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x0594D8u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94DAu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x94DAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594DAu:
    if(m==0u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x0594DAu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x94DBu;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059603u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x059603u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9605u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059605u:
    if(m==1u&&x==0u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x059605u,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9606u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059606u:
    if(m==1u&&x==0u){ /* A905 LDA imm */
      sc_v11_scheduler_code_access(r,0x059606u,2u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9608u;
      sc_v11_op_lda(r,(uint16_t)(0x0005u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059608u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x059608u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9609u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059609u:
    if(m==1u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x059609u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x960Au;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05960Au:
    if(m==1u&&x==0u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x05960Au,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x960Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05960Cu:
    if(m==0u&&x==0u){ /* A632 LDX dp */
      sc_v11_scheduler_code_access(r,0x05960Cu,2u);
      r->open_bus=0x32u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x960Eu;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0032u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05960Eu:
    if(m==0u&&x==0u){ /* BD9696 LDA abs,x */
      sc_v11_scheduler_code_access(r,0x05960Eu,3u);
      r->open_bus=0x96u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9611u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x9696u))),16u);
      if(0u==0u||(((0x9696u&0x00FFu)+(c->x&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059611u:
    if(m==0u&&x==0u){ /* 8579 STA dp */
      sc_v11_scheduler_code_access(r,0x059611u,2u);
      r->open_bus=0x79u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9613u;
      {uint32_t a=sc_v11_ea_dp(r,0x0079u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059613u:
    if(m==0u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x059613u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9614u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059614u:
    if(m==0u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x059614u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9615u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059615u:
    if(m==0u&&x==0u){ /* E01800 CPX imm */
      sc_v11_scheduler_code_access(r,0x059615u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9618u;
      sc_v11_op_compare(r,c->x,(uint16_t)(0x0018u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059618u:
    if(m==0u&&x==0u){ /* D010 BNE rel */
      sc_v11_scheduler_code_access(r,0x059618u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x961Au;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x962Au;
      if(c->pc!=0x961Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x961Au^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05961Au:
    if(m==0u&&x==0u){ /* A534 LDA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05961Au,2u);
      r->open_bus=0x34u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x961Cu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0034u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05961Cu:
    if(m==0u&&x==0u){ /* 1A INC acc; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05961Cu,1u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x961Du;
      sc_v11_op_incdec_accumulator(r,16u,1);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05961Du:
    if(m==0u&&x==0u){ /* C90300 CMP imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x05961Du,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9620u;
      sc_v11_op_compare(r,c->a,(uint16_t)0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059620u:
    if(m==0u&&x==0u){ /* D003 BNE rel; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059620u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9622u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9625u;
      if(c->pc!=0x9622u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9622u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059622u:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059622u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9625u;
      sc_v11_op_lda(r,(uint16_t)0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059625u:
    if(m==0u&&x==0u){ /* 8534 STA dp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059625u,2u);
      r->open_bus=0x34u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9627u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0034u),(uint16_t)c->a);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059627u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x059627u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x962Au;
      sc_v11_op_ldx(r,(uint16_t)0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05962Au:
    if(m==0u&&x==0u){ /* 8632 STX dp */
      sc_v11_scheduler_code_access(r,0x05962Au,2u);
      r->open_bus=0x32u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x962Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x0032u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05962Cu:
    if(m==0u&&x==0u){ /* A00000 LDY imm */
      sc_v11_scheduler_code_access(r,0x05962Cu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x962Fu;
      sc_v11_op_ldy(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05962Fu:
    if(m==0u&&x==0u){ /* B179 LDA (dp),y */
      sc_v11_scheduler_code_access(r,0x05962Fu,2u);
      r->open_bus=0x79u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9631u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp_indirect_y(r,0x79u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      {uint16_t b=sc_v11_bus_peek16(r,(uint16_t)(c->d+0x79u));if(0u==0u||(((b&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059631u:
    if(m==0u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x059631u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9632u;
      sc_v11_op_shift_accumulator(r,16u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059632u:
    if(m==0u&&x==0u){ /* 857F STA dp */
      sc_v11_scheduler_code_access(r,0x059632u,2u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9634u;
      {uint32_t a=sc_v11_ea_dp(r,0x007Fu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059634u:
    if(m==0u&&x==0u){ /* E679 INC dp */
      sc_v11_scheduler_code_access(r,0x059634u,2u);
      r->open_bus=0x79u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9636u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0079u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059636u:
    if(m==0u&&x==0u){ /* E679 INC dp */
      sc_v11_scheduler_code_access(r,0x059636u,2u);
      r->open_bus=0x79u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9638u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0079u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059638u:
    if(m==0u&&x==0u){ /* A579 LDA dp */
      sc_v11_scheduler_code_access(r,0x059638u,2u);
      r->open_bus=0x79u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x963Au;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0079u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05963Au:
    if(m==0u&&x==0u){ /* A634 LDX dp */
      sc_v11_scheduler_code_access(r,0x05963Au,2u);
      r->open_bus=0x34u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x963Cu;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0034u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05963Cu:
    if(m==0u&&x==0u){ /* 18 CLC imp */
      sc_v11_scheduler_code_access(r,0x05963Cu,1u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x963Du;
      c->p=(uint8_t)(c->p & (uint8_t)~SC_FLAG_C);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05963Du:
    if(m==0u&&x==0u){ /* 657F ADC dp */
      sc_v11_scheduler_code_access(r,0x05963Du,2u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x963Fu;
      sc_v11_op_adc(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x007Fu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05963Fu:
    if(m==0u&&x==0u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x05963Fu,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9640u;
      c->x=(uint16_t)((c->x+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059640u:
    if(m==0u&&x==0u){ /* 10FA BPL rel */
      sc_v11_scheduler_code_access(r,0x059640u,2u);
      r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9642u;
      if((c->p&SC_FLAG_N)==0u)c->pc=0x963Cu;
      if(c->pc!=0x9642u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9642u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059642u:
    if(m==0u&&x==0u){ /* 857C STA dp */
      sc_v11_scheduler_code_access(r,0x059642u,2u);
      r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9644u;
      {uint32_t a=sc_v11_ea_dp(r,0x007Cu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059644u:
    if(m==0u&&x==0u){ /* A00000 LDY imm */
      sc_v11_scheduler_code_access(r,0x059644u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9647u;
      sc_v11_op_ldy(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059647u:
    if(m==0u&&x==0u){ /* B179 LDA (dp),y */
      sc_v11_scheduler_code_access(r,0x059647u,2u);
      r->open_bus=0x79u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9649u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp_indirect_y(r,0x79u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      {uint16_t b=sc_v11_bus_peek16(r,(uint16_t)(c->d+0x79u));if(0u==0u||(((b&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059649u:
    if(m==0u&&x==0u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x059649u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x964Au;
      c->x=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05964Au:
    if(m==0u&&x==0u){ /* BF40287E LDA long,x */
      sc_v11_scheduler_code_access(r,0x05964Au,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x964Eu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E2840u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05964Eu:
    if(m==0u&&x==0u){ /* 2900FC AND imm */
      sc_v11_scheduler_code_access(r,0x05964Eu,3u);
      r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9651u;
      sc_v11_op_and(r,(uint16_t)(0xFC00u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059651u:
    if(m==0u&&x==0u){ /* 117C ORA (dp),y */
      sc_v11_scheduler_code_access(r,0x059651u,2u);
      r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9653u;
      sc_v11_op_ora(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp_indirect_y(r,0x7Cu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      {uint16_t b=sc_v11_bus_peek16(r,(uint16_t)(c->d+0x7Cu));if(0u==0u||(((b&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059653u:
    if(m==0u&&x==0u){ /* 9F40287E STA long,x */
      sc_v11_scheduler_code_access(r,0x059653u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9657u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E2840u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059657u:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x059657u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9658u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059658u:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x059658u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9659u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059659u:
    if(m==0u&&x==0u){ /* C47F CPY dp */
      sc_v11_scheduler_code_access(r,0x059659u,2u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x965Bu;
      sc_v11_op_compare(r,c->y,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x007Fu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05965Bu:
    if(m==0u&&x==0u){ /* D0EA BNE rel */
      sc_v11_scheduler_code_access(r,0x05965Bu,2u);
      r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x965Du;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9647u;
      if(c->pc!=0x965Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x965Du^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05965Du:
    if(m==0u&&x==0u){ /* A52C LDA dp */
      sc_v11_scheduler_code_access(r,0x05965Du,2u);
      r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x965Fu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x002Cu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05965Fu:
    if(m==0u&&x==0u){ /* 290300 AND imm */
      sc_v11_scheduler_code_access(r,0x05965Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9662u;
      sc_v11_op_and(r,(uint16_t)(0x0003u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059662u:
    if(m==0u&&x==0u){ /* C90300 CMP imm */
      sc_v11_scheduler_code_access(r,0x059662u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9665u;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x0003u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059665u:
    if(m==0u&&x==0u){ /* F021 BEQ rel */
      sc_v11_scheduler_code_access(r,0x059665u,2u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9667u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x9688u;
      if(c->pc!=0x9667u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9667u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059667u:
    if(m==0u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x059667u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9668u;
      sc_v11_op_shift_accumulator(r,16u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059668u:
    if(m==0u&&x==0u){ /* A8 TAY imp */
      sc_v11_scheduler_code_access(r,0x059668u,1u);
      r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9669u;
      c->y=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059669u:
    if(m==0u&&x==0u){ /* BE8A96 LDX abs,y */
      sc_v11_scheduler_code_access(r,0x059669u,3u);
      r->open_bus=0x96u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x966Cu;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x968Au))),16u);
      if(0u==0u||(((0x968Au&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05966Cu:
    if(m==0u&&x==0u){ /* 8E4701 STX abs */
      sc_v11_scheduler_code_access(r,0x05966Cu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x966Fu;
      {uint32_t a=sc_v11_ea_abs(r,0x0147u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05966Fu:
    if(m==0u&&x==0u){ /* A21800 LDX imm */
      sc_v11_scheduler_code_access(r,0x05966Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9672u;
      sc_v11_op_ldx(r,(uint16_t)(0x0018u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059672u:
    if(m==0u&&x==0u){ /* 8E7701 STX abs */
      sc_v11_scheduler_code_access(r,0x059672u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9675u;
      {uint32_t a=sc_v11_ea_abs(r,0x0177u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059675u:
    if(m==0u&&x==0u){ /* BE9096 LDX abs,y */
      sc_v11_scheduler_code_access(r,0x059675u,3u);
      r->open_bus=0x96u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9678u;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x9690u))),16u);
      if(0u==0u||(((0x9690u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059678u:
    if(m==0u&&x==0u){ /* 8E6701 STX abs */
      sc_v11_scheduler_code_access(r,0x059678u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x967Bu;
      {uint32_t a=sc_v11_ea_abs(r,0x0167u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05967Bu:
    if(m==0u&&x==0u){ /* A20008 LDX imm */
      sc_v11_scheduler_code_access(r,0x05967Bu,3u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x967Eu;
      sc_v11_op_ldx(r,(uint16_t)(0x0800u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05967Eu:
    if(m==0u&&x==0u){ /* 8E8701 STX abs */
      sc_v11_scheduler_code_access(r,0x05967Eu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9681u;
      {uint32_t a=sc_v11_ea_abs(r,0x0187u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059681u:
    if(m==0u&&x==0u){ /* A5B7 LDA dp */
      sc_v11_scheduler_code_access(r,0x059681u,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9683u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00B7u))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059683u:
    if(m==0u&&x==0u){ /* 090400 ORA imm */
      sc_v11_scheduler_code_access(r,0x059683u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9686u;
      sc_v11_op_ora(r,(uint16_t)(0x0004u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059686u:
    if(m==0u&&x==0u){ /* 85B7 STA dp */
      sc_v11_scheduler_code_access(r,0x059686u,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9688u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B7u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059688u:
    if(m==0u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x059688u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9689u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059689u:
    if(m==0u&&x==0u){ /* 6B RTL imp */
      sc_v11_scheduler_code_access(r,0x059689u,1u);
      r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x968Au;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->pc=(uint16_t)(sc_v11_pop16(r)+1u);
      c->pbr=sc_v11_pop8(r);
            SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
