/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000F8(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03E349u:
    if(m==0u&&x==0u){ /* C230 REP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E349u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE34Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E34Bu:
    if(m==0u&&x==0u){ /* 200AE4 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E34Bu,3u);
      r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE34Eu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE34Du))return 0;
      c->pc=0xE40Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E34Eu:
    if(m==0u&&x==0u){ /* F00D BEQ rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E34Eu,2u);
      r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE350u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xE35Du;
      if(c->pc!=0xE350u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE350u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E350u:
    if(m==0u&&x==0u){ /* 2046E4 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E350u,3u);
      r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE353u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE352u))return 0;
      c->pc=0xE446u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E353u:
    if(m==0u&&x==0u){ /* 200AE4 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E353u,3u);
      r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE356u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE355u))return 0;
      c->pc=0xE40Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E356u:
    if(m==0u&&x==0u){ /* F008 BEQ rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E356u,2u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE358u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xE360u;
      if(c->pc!=0xE358u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE358u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E358u:
    if(m==0u&&x==0u){ /* 205BE4 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E358u,3u);
      r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE35Bu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE35Au))return 0;
      c->pc=0xE45Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E35Bu:
    if(m==0u&&x==0u){ /* 800B BRA rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E35Bu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE35Du;
      c->pc=0xE368u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(c->emulation&&((0xE35Du^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E35Du:
    if(m==0u&&x==0u){ /* 2084E4 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E35Du,3u);
      r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE360u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE35Fu))return 0;
      c->pc=0xE484u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E360u:
    if(m==0u&&x==0u){ /* 2099E4 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E360u,3u);
      r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE363u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE362u))return 0;
      c->pc=0xE499u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E363u:
    if(m==0u&&x==0u){ /* F003 BEQ rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E363u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE365u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xE368u;
      if(c->pc!=0xE365u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE365u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E365u:
    if(m==0u&&x==0u){ /* 2053E5 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E365u,3u);
      r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE368u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE367u))return 0;
      c->pc=0xE553u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E368u:
    if(m==0u&&x==0u){ /* AF070070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E368u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE36Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x700007u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E36Cu:
    if(m==0u&&x==0u){ /* 8542 STA dp; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E36Cu,2u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE36Eu;
      {uint32_t a=sc_v11_ea_dp(r,0x0042u);sc_v11_bus_write16(r,a,c->a);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E36Eu:
    if(m==0u&&x==0u){ /* AF090070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E36Eu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE372u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x700009u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E372u:
    if(m==0u&&x==0u){ /* 29FF00 AND imm; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E372u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE375u;
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E375u:
    if(m==0u&&x==0u){ /* 8D2504 STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E375u,3u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE378u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0425u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E378u:
    if(m==0u&&x==0u){ /* A00000 LDY imm; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E378u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE37Bu;
      sc_v11_op_ldy(r,0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E37Bu:
    if(m==0u&&x==0u){ /* A544 LDA dp; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E37Bu,2u);
      r->open_bus=0x44u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE37Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0044u)),16u);if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E37Du:
    if(m==0u&&x==0u){ /* D001 BNE rel; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E37Du,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE37Fu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE380u;
      if(c->pc!=0xE37Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE37Fu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E37Fu:
    if(m==0u&&x==0u){ /* C8 INY imp; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E37Fu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE380u;
      c->y=(uint16_t)(c->y+1u);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E380u:
    if(m==0u&&x==0u){ /* 843E STY dp; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E380u,2u);
      r->open_bus=0x3Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE382u;
      {uint32_t a=sc_v11_ea_dp(r,0x003Eu);sc_v11_bus_write16(r,a,c->y);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E382u:
    if(m==0u&&x==0u){ /* A9FFFF LDA imm; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E382u,3u);
      r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE385u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E385u:
    if(m==0u&&x==0u){ /* 8D650B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E385u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE388u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E388u:
    if(m==0u&&x==0u){ /* 8D750B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E388u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE38Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B75u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E38Bu:
    if(m==0u&&x==0u){ /* A544 LDA dp; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E38Bu,2u);
      r->open_bus=0x44u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE38Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0044u)),16u);if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E38Du:
    if(m==0u&&x==0u){ /* 290100 AND imm; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E38Du,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE390u;
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E390u:
    if(m==0u&&x==0u){ /* F038 BEQ rel; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E390u,2u);
      r->open_bus=0x38u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE392u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xE3CAu;
      if(c->pc!=0xE392u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE392u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E392u:
    if(m==0u&&x==0u){ /* AF360070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E392u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE396u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x700036u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E396u:
    if(m==0u&&x==0u){ /* 8D650B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E396u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE399u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E399u:
    if(m==0u&&x==0u){ /* AF300070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E399u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE39Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x700030u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E39Du:
    if(m==0u&&x==0u){ /* 8D670B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E39Du,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3A0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B67u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3A0u:
    if(m==0u&&x==0u){ /* AF320070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3A0u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3A4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x700032u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3A4u:
    if(m==0u&&x==0u){ /* 8D690B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3A4u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3A7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B69u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3A7u:
    if(m==0u&&x==0u){ /* AF760070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3A7u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3ABu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x700076u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3ABu:
    if(m==0u&&x==0u){ /* 8D6B0B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3ABu,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3AEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B6Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3AEu:
    if(m==0u&&x==0u){ /* AF780070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3AEu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3B2u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x700078u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3B2u:
    if(m==0u&&x==0u){ /* 8D6D0B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3B2u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3B5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B6Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3B5u:
    if(m==0u&&x==0u){ /* AF7A0070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3B5u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3B9u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x70007Au)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3B9u:
    if(m==0u&&x==0u){ /* 8D6F0B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3B9u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3BCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B6Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3BCu:
    if(m==0u&&x==0u){ /* AF7C0070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3BCu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3C0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x70007Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3C0u:
    if(m==0u&&x==0u){ /* 8D710B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3C0u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3C3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B71u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3C3u:
    if(m==0u&&x==0u){ /* AF7E0070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3C3u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3C7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x70007Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3C7u:
    if(m==0u&&x==0u){ /* 8D730B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3C7u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3CAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B73u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3CAu:
    if(m==0u&&x==0u){ /* A544 LDA dp; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3CAu,2u);
      r->open_bus=0x44u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3CCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0044u)),16u);if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3CCu:
    if(m==0u&&x==0u){ /* 290200 AND imm; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3CCu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3CFu;
      sc_v11_op_and(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3CFu:
    if(m==0u&&x==0u){ /* F038 BEQ rel; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3CFu,2u);
      r->open_bus=0x38u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3D1u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0xE409u;
      if(c->pc!=0xE3D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE3D1u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3D1u:
    if(m==0u&&x==0u){ /* AF264070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3D1u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3D5u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x704026u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3D5u:
    if(m==0u&&x==0u){ /* 8D750B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3D5u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3D8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B75u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3D8u:
    if(m==0u&&x==0u){ /* AF204070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3D8u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3DCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x704020u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3DCu:
    if(m==0u&&x==0u){ /* 8D770B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3DCu,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3DFu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B77u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3DFu:
    if(m==0u&&x==0u){ /* AF224070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3DFu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3E3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x704022u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3E3u:
    if(m==0u&&x==0u){ /* 8D790B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3E3u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3E6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B79u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3E6u:
    if(m==0u&&x==0u){ /* AF664070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3E6u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3EAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x704066u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3EAu:
    if(m==0u&&x==0u){ /* 8D7B0B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3EAu,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3EDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B7Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3EDu:
    if(m==0u&&x==0u){ /* AF684070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3EDu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3F1u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x704068u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3F1u:
    if(m==0u&&x==0u){ /* 8D7D0B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3F1u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3F4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B7Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3F4u:
    if(m==0u&&x==0u){ /* AF6A4070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3F4u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3F8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x70406Au)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3F8u:
    if(m==0u&&x==0u){ /* 8D7F0B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3F8u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3FBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B7Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3FBu:
    if(m==0u&&x==0u){ /* AF6C4070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3FBu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE3FFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x70406Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E3FFu:
    if(m==0u&&x==0u){ /* 8D810B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E3FFu,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE402u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B81u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E246u:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* C230 REP imm; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E246u,2u);r->open_bus=0x30u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE248u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E248u:
    if(m==0u&&x==0u){ /* A540 LDA dp; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E248u,2u);r->open_bus=0x40u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE24Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0040u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E24Au:
    if(m==0u&&x==0u){ /* 48 PHA imp; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E24Au,1u);r->open_bus=0x48u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE24Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E24Bu:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E24Bu,3u);r->open_bus=0x00u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE24Eu;
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E24Eu:
    if(m==0u&&x==0u){ /* 8540 STA dp; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E24Eu,2u);r->open_bus=0x40u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE250u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0040u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E250u:
    if(m==0u&&x==0u){ /* 2040DF JSR abs; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E250u,3u);r->open_bus=0xDFu;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE253u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE252u))return 0;c->pc=0xDF40u;
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E253u:
    if(m==0u&&x==0u){ /* 68 PLA imp; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E253u,1u);r->open_bus=0x68u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE254u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_op_lda(r,sc_v11_pop16(r),16u);
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E254u:
    if(m==0u&&x==0u){ /* 8540 STA dp; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E254u,2u);r->open_bus=0x40u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE256u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0040u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E256u:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 13 blank-city selection helper */
      sc_v11_scheduler_code_access(r,0x03E256u,1u);r->open_bus=0x60u;r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE257u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();}break;
  case 0x03E000u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E000u,2u,0x0Eu,0xE002u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E002u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E002u,2u,0x20u,0xE004u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E004u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E004u,3u,0x00u,0xE007u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E007u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E007u,2u,0x00u,0xE009u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E009u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E009u,2u,0x20u,0xE00Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E00Bu:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E00Bu,2u,0x10u,0xE00Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E00Du:
    if(m==1u&&x==0u){ /* A2CB87 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E00Du,3u,0x87u,0xE010u);
      sc_v11_op_ldx(r,0x87CBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E010u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E010u,2u,0x09u,0xE012u);
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E012u:
    if(m==1u&&x==0u){ /* A90C LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E012u,2u,0x0Cu,0xE014u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E014u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E014u,2u,0x0Bu,0xE016u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E016u:
    if(m==1u&&x==0u){ /* A20020 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E016u,3u,0x20u,0xE019u);
      sc_v11_op_ldx(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E019u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E019u,2u,0x0Eu,0xE01Bu);
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E01Bu:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E01Bu,2u,0x20u,0xE01Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E01Du:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E01Du,3u,0x00u,0xE020u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E020u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E020u,2u,0x00u,0xE022u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E022u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E022u,2u,0x20u,0xE024u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E024u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E024u,2u,0x10u,0xE026u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E026u:
    if(m==1u&&x==0u){ /* A2B989 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E026u,3u,0x89u,0xE029u);
      sc_v11_op_ldx(r,0x89B9u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E029u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E029u,2u,0x09u,0xE02Bu);
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E02Bu:
    if(m==1u&&x==0u){ /* A90C LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E02Bu,2u,0x0Cu,0xE02Du);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E02Du:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E02Du,2u,0x0Bu,0xE02Fu);
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E02Fu:
    if(m==1u&&x==0u){ /* A20028 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E02Fu,3u,0x28u,0xE032u);
      sc_v11_op_ldx(r,0x2800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E032u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E032u,2u,0x0Eu,0xE034u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E034u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E034u,2u,0x20u,0xE036u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E036u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E036u,3u,0x00u,0xE039u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E039u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E039u,2u,0x00u,0xE03Bu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E03Bu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E03Bu,2u,0x20u,0xE03Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E03Du:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E03Du,2u,0x10u,0xE03Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E03Fu:
    if(m==1u&&x==0u){ /* A20040 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E03Fu,3u,0x40u,0xE042u);
      sc_v11_op_ldx(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E042u:
    if(m==1u&&x==0u){ /* 8E1621 STX abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E042u,3u,0x21u,0xE045u);
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,c->x);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E045u:
    if(m==1u&&x==0u){ /* E230 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E045u,2u,0x30u,0xE047u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E047u:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E047u,2u,0x02u,0xE049u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E049u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E049u,1u,0x0Au,0xE04Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E04Au:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E04Au,1u,0x0Au,0xE04Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E04Bu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E04Bu,1u,0x0Au,0xE04Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E04Cu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E04Cu,1u,0x0Au,0xE04Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E04Du:
    if(m==1u&&x==1u){ /* AA TAX imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E04Du,1u,0xAAu,0xE04Eu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E04Eu:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E04Eu,2u,0x01u,0xE050u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E050u:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E050u,3u,0x43u,0xE053u);
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E053u:
    if(m==1u&&x==1u){ /* A918 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E053u,2u,0x18u,0xE055u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E055u:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E055u,3u,0x43u,0xE058u);
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E058u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E058u,2u,0x00u,0xE05Au);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E05Au:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E05Au,3u,0x43u,0xE05Du);
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E05Du:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E05Du,2u,0x80u,0xE05Fu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E05Fu:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E05Fu,3u,0x43u,0xE062u);
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E062u:
    if(m==1u&&x==1u){ /* A97E LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E062u,2u,0x7Eu,0xE064u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E064u:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E064u,3u,0x43u,0xE067u);
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E067u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E067u,2u,0x00u,0xE069u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E069u:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E069u,3u,0x43u,0xE06Cu);
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E06Cu:
    if(m==1u&&x==1u){ /* A930 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E06Cu,2u,0x30u,0xE06Eu);
      sc_v11_op_lda(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E06Eu:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E06Eu,3u,0x43u,0xE071u);
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E071u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E071u,2u,0x01u,0xE073u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E073u:
    if(m==1u&&x==1u){ /* A202 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E073u,2u,0x02u,0xE075u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E075u:
    if(m==1u&&x==1u){ /* F004 BEQ rel; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E075u,2u,0x04u,0xE077u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE07Bu;}
            if(c->pc!=0xE077u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE077u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E077u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E077u,1u,0x0Au,0xE078u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E078u:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E078u,1u,0xCAu,0xE079u);
      c->x=(uint16_t)((c->x-1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E079u:
    if(m==1u&&x==1u){ /* D0FC BNE rel; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E079u,2u,0xFCu,0xE07Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE077u;}
            if(c->pc!=0xE07Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE07Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E07Bu:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E07Bu,3u,0x42u,0xE07Eu);
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E07Eu:
    if(m==1u&&x==1u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E07Eu,2u,0x20u,0xE080u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E080u:
    if(m==1u&&x==1u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E080u,2u,0x10u,0xE082u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E082u:
    if(m==1u&&x==0u){ /* A260C4 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E082u,3u,0xC4u,0xE085u);
      sc_v11_op_ldx(r,0xC460u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E085u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E085u,2u,0x09u,0xE087u);
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E087u:
    if(m==1u&&x==0u){ /* A90A LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E087u,2u,0x0Au,0xE089u);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E089u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E089u,2u,0x0Bu,0xE08Bu);
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E08Bu:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E08Bu,3u,0x00u,0xE08Eu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E08Eu:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E08Eu,2u,0x0Eu,0xE090u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E090u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E090u,2u,0x20u,0xE092u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E092u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E092u,3u,0x00u,0xE095u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E095u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E095u,2u,0x00u,0xE097u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E097u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E097u,2u,0x20u,0xE099u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E099u:
    if(m==0u&&x==0u){ /* A90060 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E099u,3u,0x60u,0xE09Cu);
      sc_v11_op_lda(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E09Cu:
    if(m==0u&&x==0u){ /* 8D1621 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E09Cu,3u,0x21u,0xE09Fu);
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E09Fu:
    if(m==0u&&x==0u){ /* E230 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E09Fu,2u,0x30u,0xE0A1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0A1u:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0A1u,2u,0x02u,0xE0A3u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0A3u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0A3u,1u,0x0Au,0xE0A4u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0A4u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0A4u,1u,0x0Au,0xE0A5u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0A5u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0A5u,1u,0x0Au,0xE0A6u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0A6u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0A6u,1u,0x0Au,0xE0A7u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0A7u:
    if(m==1u&&x==1u){ /* AA TAX imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0A7u,1u,0xAAu,0xE0A8u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0A8u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0A8u,2u,0x01u,0xE0AAu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0AAu:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0AAu,3u,0x43u,0xE0ADu);
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0ADu:
    if(m==1u&&x==1u){ /* A918 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0ADu,2u,0x18u,0xE0AFu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0AFu:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0AFu,3u,0x43u,0xE0B2u);
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0B2u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0B2u,2u,0x00u,0xE0B4u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0B4u:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0B4u,3u,0x43u,0xE0B7u);
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0B7u:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0B7u,2u,0x80u,0xE0B9u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0B9u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0B9u,3u,0x43u,0xE0BCu);
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0BCu:
    if(m==1u&&x==1u){ /* A97E LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0BCu,2u,0x7Eu,0xE0BEu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0BEu:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0BEu,3u,0x43u,0xE0C1u);
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0C1u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0C1u,2u,0x00u,0xE0C3u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0C3u:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0C3u,3u,0x43u,0xE0C6u);
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0C6u:
    if(m==1u&&x==1u){ /* A910 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0C6u,2u,0x10u,0xE0C8u);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0C8u:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0C8u,3u,0x43u,0xE0CBu);
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0CBu:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0CBu,2u,0x01u,0xE0CDu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0CDu:
    if(m==1u&&x==1u){ /* A202 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0CDu,2u,0x02u,0xE0CFu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0CFu:
    if(m==1u&&x==1u){ /* F004 BEQ rel; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0CFu,2u,0x04u,0xE0D1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE0D5u;}
            if(c->pc!=0xE0D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE0D1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0D1u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0D1u,1u,0x0Au,0xE0D2u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0D2u:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0D2u,1u,0xCAu,0xE0D3u);
      c->x=(uint16_t)((c->x-1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0D3u:
    if(m==1u&&x==1u){ /* D0FC BNE rel; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0D3u,2u,0xFCu,0xE0D5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE0D1u;}
            if(c->pc!=0xE0D5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE0D5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0D5u:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0D5u,3u,0x42u,0xE0D8u);
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0D8u:
    if(m==1u&&x==1u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0D8u,2u,0x20u,0xE0DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0DAu:
    if(m==1u&&x==1u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0DAu,2u,0x10u,0xE0DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0DCu:
    if(m==1u&&x==0u){ /* A2D88E LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0DCu,3u,0x8Eu,0xE0DFu);
      sc_v11_op_ldx(r,0x8ED8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0DFu:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0DFu,2u,0x09u,0xE0E1u);
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0E1u:
    if(m==1u&&x==0u){ /* A90C LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0E1u,2u,0x0Cu,0xE0E3u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0E3u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0E3u,2u,0x0Bu,0xE0E5u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0E5u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0E5u,3u,0x00u,0xE0E8u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0E8u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0E8u,2u,0x0Eu,0xE0EAu);
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0EAu:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0EAu,2u,0x20u,0xE0ECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0ECu:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0ECu,3u,0x00u,0xE0EFu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0EFu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0EFu,2u,0x00u,0xE0F1u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0F1u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0F1u,2u,0x20u,0xE0F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0F3u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0F3u,2u,0x10u,0xE0F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0F5u:
    if(m==1u&&x==0u){ /* 9C2121 STZ abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0F5u,3u,0x21u,0xE0F8u);
      {uint32_t a=sc_v11_ea_abs(r,0x2121u);sc_v11_bus_write8(r,a,0u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0F8u:
    if(m==1u&&x==0u){ /* E230 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0F8u,2u,0x30u,0xE0FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0FAu:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0FAu,2u,0x02u,0xE0FCu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0FCu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0FCu,1u,0x0Au,0xE0FDu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0FDu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0FDu,1u,0x0Au,0xE0FEu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0FEu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0FEu,1u,0x0Au,0xE0FFu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E0FFu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E0FFu,1u,0x0Au,0xE100u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E100u:
    if(m==1u&&x==1u){ /* AA TAX imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E100u,1u,0xAAu,0xE101u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E101u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E101u,2u,0x00u,0xE103u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E103u:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E103u,3u,0x43u,0xE106u);
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E106u:
    if(m==1u&&x==1u){ /* A922 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E106u,2u,0x22u,0xE108u);
      sc_v11_op_lda(r,0x0022u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E108u:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E108u,3u,0x43u,0xE10Bu);
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E10Bu:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E10Bu,2u,0x00u,0xE10Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E10Du:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E10Du,3u,0x43u,0xE110u);
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E110u:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E110u,2u,0x80u,0xE112u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E112u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E112u,3u,0x43u,0xE115u);
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E115u:
    if(m==1u&&x==1u){ /* A97E LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E115u,2u,0x7Eu,0xE117u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E117u:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E117u,3u,0x43u,0xE11Au);
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E11Au:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E11Au,2u,0x00u,0xE11Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E11Cu:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E11Cu,3u,0x43u,0xE11Fu);
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E11Fu:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E11Fu,2u,0x02u,0xE121u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E121u:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E121u,3u,0x43u,0xE124u);
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E124u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E124u,2u,0x01u,0xE126u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E126u:
    if(m==1u&&x==1u){ /* A202 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E126u,2u,0x02u,0xE128u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E128u:
    if(m==1u&&x==1u){ /* F004 BEQ rel; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E128u,2u,0x04u,0xE12Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE12Eu;}
            if(c->pc!=0xE12Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE12Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E12Au:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E12Au,1u,0x0Au,0xE12Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E12Bu:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E12Bu,1u,0xCAu,0xE12Cu);
      c->x=(uint16_t)((c->x-1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E12Cu:
    if(m==1u&&x==1u){ /* D0FC BNE rel; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E12Cu,2u,0xFCu,0xE12Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE12Au;}
            if(c->pc!=0xE12Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE12Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E12Eu:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E12Eu,3u,0x42u,0xE131u);
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E131u:
    if(m==1u&&x==1u){ /* C230 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E131u,2u,0x30u,0xE133u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E133u:
    if(m==0u&&x==0u){ /* 9C5302 STZ abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E133u,3u,0x02u,0xE136u);
      {uint32_t a=sc_v11_ea_abs(r,0x0253u);sc_v11_bus_write16(r,a,0u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E136u:
    if(m==0u&&x==0u){ /* A90801 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E136u,3u,0x01u,0xE139u);
      sc_v11_op_lda(r,0x0108u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E139u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E139u,3u,0x02u,0xE13Cu);
      {uint32_t a=sc_v11_ea_abs(r,0x025Du);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E13Cu:
    if(m==0u&&x==0u){ /* A99F00 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E13Cu,3u,0x00u,0xE13Fu);
      sc_v11_op_lda(r,0x009Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E13Fu:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E13Fu,3u,0x02u,0xE142u);
      {uint32_t a=sc_v11_ea_abs(r,0x025Fu);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E142u:
    if(m==0u&&x==0u){ /* A92500 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E142u,3u,0x00u,0xE145u);
      sc_v11_op_lda(r,0x0025u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E145u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E145u,3u,0x02u,0xE148u);
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E148u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E148u,2u,0x20u,0xE14Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E14Au:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E14Au,3u,0x00u,0xE14Du);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E14Du:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E14Du,2u,0x00u,0xE14Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E14Fu:
    if(m==0u&&x==0u){ /* A93200 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E14Fu,3u,0x00u,0xE152u);
      sc_v11_op_lda(r,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E152u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E152u,3u,0x02u,0xE155u);
      {uint32_t a=sc_v11_ea_abs(r,0x025Du);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E155u:
    if(m==0u&&x==0u){ /* A9CF00 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E155u,3u,0x00u,0xE158u);
      sc_v11_op_lda(r,0x00CFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E158u:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E158u,3u,0x02u,0xE15Bu);
      {uint32_t a=sc_v11_ea_abs(r,0x025Fu);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E15Bu:
    if(m==0u&&x==0u){ /* A92600 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E15Bu,3u,0x00u,0xE15Eu);
      sc_v11_op_lda(r,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E15Eu:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E15Eu,3u,0x02u,0xE161u);
      {uint32_t a=sc_v11_ea_abs(r,0x0261u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E161u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E161u,2u,0x20u,0xE163u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E163u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E163u,3u,0x00u,0xE166u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E166u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E166u,2u,0x00u,0xE168u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E168u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E168u,2u,0x20u,0xE16Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E16Au:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E16Au,2u,0x10u,0xE16Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E16Cu:
    if(m==1u&&x==0u){ /* 2027E2 JSR abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E16Cu,3u,0xE2u,0xE16Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE16Eu))return 0;c->pc=0xE227u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E16Fu:
    if(m==1u&&x==0u){ /* A288FF LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E16Fu,3u,0xFFu,0xE172u);
      sc_v11_op_ldx(r,0xFF88u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E172u:
    if(m==1u&&x==0u){ /* 8618 STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E172u,2u,0x18u,0xE174u);
      {uint32_t a=sc_v11_ea_dp(r,0x0018u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E174u:
    if(m==1u&&x==0u){ /* 861C STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E174u,2u,0x1Cu,0xE176u);
      {uint32_t a=sc_v11_ea_dp(r,0x001Cu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E176u:
    if(m==1u&&x==0u){ /* 6416 STZ dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E176u,2u,0x16u,0xE178u);
      {uint32_t a=sc_v11_ea_dp(r,0x0016u);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E178u:
    if(m==1u&&x==0u){ /* A902 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E178u,2u,0x02u,0xE17Au);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E17Au:
    if(m==1u&&x==0u){ /* 8566 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E17Au,2u,0x66u,0xE17Cu);
      {uint32_t a=sc_v11_ea_dp(r,0x0066u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E17Cu:
    if(m==1u&&x==0u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E17Cu,2u,0x00u,0xE17Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E17Eu:
    if(m==1u&&x==0u){ /* 8567 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E17Eu,2u,0x67u,0xE180u);
      {uint32_t a=sc_v11_ea_dp(r,0x0067u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E180u:
    if(m==1u&&x==0u){ /* A942 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E180u,2u,0x42u,0xE182u);
      sc_v11_op_lda(r,0x0042u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E182u:
    if(m==1u&&x==0u){ /* 8562 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E182u,2u,0x62u,0xE184u);
      {uint32_t a=sc_v11_ea_dp(r,0x0062u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E184u:
    if(m==1u&&x==0u){ /* A94A LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E184u,2u,0x4Au,0xE186u);
      sc_v11_op_lda(r,0x004Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E186u:
    if(m==1u&&x==0u){ /* 8563 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E186u,2u,0x63u,0xE188u);
      {uint32_t a=sc_v11_ea_dp(r,0x0063u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E188u:
    if(m==1u&&x==0u){ /* A950 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E188u,2u,0x50u,0xE18Au);
      sc_v11_op_lda(r,0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E18Au:
    if(m==1u&&x==0u){ /* 8564 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E18Au,2u,0x64u,0xE18Cu);
      {uint32_t a=sc_v11_ea_dp(r,0x0064u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E18Cu:
    if(m==1u&&x==0u){ /* A954 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E18Cu,2u,0x54u,0xE18Eu);
      sc_v11_op_lda(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E18Eu:
    if(m==1u&&x==0u){ /* 8565 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E18Eu,2u,0x65u,0xE190u);
      {uint32_t a=sc_v11_ea_dp(r,0x0065u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E190u:
    if(m==1u&&x==0u){ /* A917 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E190u,2u,0x17u,0xE192u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E192u:
    if(m==1u&&x==0u){ /* 8568 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E192u,2u,0x68u,0xE194u);
      {uint32_t a=sc_v11_ea_dp(r,0x0068u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E194u:
    if(m==1u&&x==0u){ /* A908 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E194u,2u,0x08u,0xE196u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E196u:
    if(m==1u&&x==0u){ /* 8569 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E196u,2u,0x69u,0xE198u);
      {uint32_t a=sc_v11_ea_dp(r,0x0069u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E198u:
    if(m==1u&&x==0u){ /* A902 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E198u,2u,0x02u,0xE19Au);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E19Au:
    if(m==1u&&x==0u){ /* 856C STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E19Au,2u,0x6Cu,0xE19Cu);
      {uint32_t a=sc_v11_ea_dp(r,0x006Cu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E19Cu:
    if(m==1u&&x==0u){ /* A9A7 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E19Cu,2u,0xA7u,0xE19Eu);
      sc_v11_op_lda(r,0x00A7u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E19Eu:
    if(m==1u&&x==0u){ /* 856D STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E19Eu,2u,0x6Du,0xE1A0u);
      {uint32_t a=sc_v11_ea_dp(r,0x006Du);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1A0u:
    if(m==1u&&x==0u){ /* A9E0 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1A0u,2u,0xE0u,0xE1A2u);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1A2u:
    if(m==1u&&x==0u){ /* 856E STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1A2u,2u,0x6Eu,0xE1A4u);
      {uint32_t a=sc_v11_ea_dp(r,0x006Eu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1A4u:
    if(m==1u&&x==0u){ /* A903 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1A4u,2u,0x03u,0xE1A6u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1A6u:
    if(m==1u&&x==0u){ /* 8560 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1A6u,2u,0x60u,0xE1A8u);
      {uint32_t a=sc_v11_ea_dp(r,0x0060u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1A8u:
    if(m==1u&&x==0u){ /* 6461 STZ dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1A8u,2u,0x61u,0xE1AAu);
      {uint32_t a=sc_v11_ea_dp(r,0x0061u);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1AAu:
    if(m==1u&&x==0u){ /* 646A STZ dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1AAu,2u,0x6Au,0xE1ACu);
      {uint32_t a=sc_v11_ea_dp(r,0x006Au);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1ACu:
    if(m==1u&&x==0u){ /* 646B STZ dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1ACu,2u,0x6Bu,0xE1AEu);
      {uint32_t a=sc_v11_ea_dp(r,0x006Bu);sc_v11_bus_write8(r,a,0u);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1AEu:
    if(m==1u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1AEu,2u,0x20u,0xE1B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1B0u:
    if(m==1u&&x==0u){ /* A5B3 LDA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1B0u,2u,0xB3u,0xE1B2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1B2u:
    if(m==1u&&x==0u){ /* 0980 ORA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1B2u,2u,0x80u,0xE1B4u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1B4u:
    if(m==1u&&x==0u){ /* 85B1 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1B4u,2u,0xB1u,0xE1B6u);
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1B6u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1B6u,2u,0x20u,0xE1B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1B8u:
    if(m==0u&&x==0u){ /* A90300 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1B8u,3u,0x00u,0xE1BBu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1BBu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1BBu,2u,0x00u,0xE1BDu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1BDu:
    if(m==0u&&x==0u){ /* E614 INC dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1BDu,2u,0x14u,0xE1BFu);
      if((c->d&0xffu)!=0u){sc_v11_scheduler_internal_cycle(r,1u);}
            sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0014u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1BFu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1BFu,2u,0x20u,0xE1C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1C1u:
    if(m==1u&&x==0u){ /* A90B LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1C1u,2u,0x0Bu,0xE1C3u);
      sc_v11_op_lda(r,0x000Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1C3u:
    if(m==1u&&x==0u){ /* 8505 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1C3u,2u,0x05u,0xE1C5u);
      {uint32_t a=sc_v11_ea_dp(r,0x0005u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1C5u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1C5u,2u,0x20u,0xE1C7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E1C7u:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03E1C7u,1u,0x60u,0xE1C8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E227u:
    if(m==1u&&x==0u){ /* A23FE2 LDX imm; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E227u,3u,0xE2u,0xE22Au);
      sc_v11_op_ldx(r,0xE23Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E22Au:
    if(m==1u&&x==0u){ /* 8E7243 STX abs; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E22Au,3u,0x43u,0xE22Du);
      {uint32_t a=sc_v11_ea_abs(r,0x4372u);sc_v11_bus_write16(r,a,c->x);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E22Du:
    if(m==1u&&x==0u){ /* A903 LDA imm; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E22Du,2u,0x03u,0xE22Fu);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E22Fu:
    if(m==1u&&x==0u){ /* 8D7443 STA abs; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E22Fu,3u,0x43u,0xE232u);
      {uint32_t a=sc_v11_ea_abs(r,0x4374u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E232u:
    if(m==1u&&x==0u){ /* A92C LDA imm; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E232u,2u,0x2Cu,0xE234u);
      sc_v11_op_lda(r,0x002Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E234u:
    if(m==1u&&x==0u){ /* 8D7143 STA abs; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E234u,3u,0x43u,0xE237u);
      {uint32_t a=sc_v11_ea_abs(r,0x4371u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E237u:
    if(m==1u&&x==0u){ /* 9C7043 STZ abs; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E237u,3u,0x43u,0xE23Au);
      {uint32_t a=sc_v11_ea_abs(r,0x4370u);sc_v11_bus_write8(r,a,0u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E23Au:
    if(m==1u&&x==0u){ /* A980 LDA imm; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E23Au,2u,0x80u,0xE23Cu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E23Cu:
    if(m==1u&&x==0u){ /* 85B5 STA dp; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E23Cu,2u,0xB5u,0xE23Eu);
      {uint32_t a=sc_v11_ea_dp(r,0x00B5u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E23Eu:
    if(m==1u&&x==0u){ /* 60 RTS imp; Version 14 new-city HDMA table helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E23Eu,1u,0x60u,0xE23Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E257u:
    if(m==0u&&x==0u){ /* C230 REP imm; Version 14 auxiliary region new-city-cursor-increment-helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E257u,2u,0x30u,0xE259u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E259u:
    if(m==0u&&x==0u){ /* A618 LDX dp; Version 14 auxiliary region new-city-cursor-increment-helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E259u,2u,0x18u,0xE25Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0018u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E25Bu:
    if(m==0u&&x==0u){ /* F006 BEQ rel; Version 14 auxiliary region new-city-cursor-increment-helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E25Bu,2u,0x06u,0xE25Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE263u;}
      if(c->pc!=0xE25Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE25Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E25Du:
    if(m==0u&&x==0u){ /* E8 INX imp; Version 14 auxiliary region new-city-cursor-increment-helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E25Du,1u,0xE8u,0xE25Eu);
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E25Eu:
    if(m==0u&&x==0u){ /* 8618 STX dp; Version 14 auxiliary region new-city-cursor-increment-helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E25Eu,2u,0x18u,0xE260u);
      {uint32_t a=sc_v11_ea_dp(r,0x0018u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E260u:
    if(m==0u&&x==0u){ /* 861C STX dp; Version 14 auxiliary region new-city-cursor-increment-helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E260u,2u,0x1Cu,0xE262u);
      {uint32_t a=sc_v11_ea_dp(r,0x001Cu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E262u:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 14 auxiliary region new-city-cursor-increment-helper */
      SC_STATIC_CONTEXT_BEGIN(0x03E262u,1u,0x60u,0xE263u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E263u:
    if(m==0u&&x==0u){ /* A5C9 LDA dp; Version 14 zero-mode value-set path */
      SC_STATIC_CONTEXT_BEGIN(0x03E263u,2u,0xC9u,0xE265u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00C9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E265u:
    if(m==0u&&x==0u){ /* 290080 AND imm; Version 14 zero-mode value-set path */
      SC_STATIC_CONTEXT_BEGIN(0x03E265u,3u,0x80u,0xE268u);
      sc_v11_op_and(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E268u:
    if(m==0u&&x==0u){ /* F018 BEQ rel; Version 14 zero-mode value-set path */
      SC_STATIC_CONTEXT_BEGIN(0x03E268u,2u,0x18u,0xE26Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE282u;}
      if(c->pc!=0xE26Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE26Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E282u:
    if(m==0u&&x==0u){ /* A5C9 LDA dp; Version 14 zero-mode value-set path */
      SC_STATIC_CONTEXT_BEGIN(0x03E282u,2u,0xC9u,0xE284u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00C9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E284u:
    if(m==0u&&x==0u){ /* 294000 AND imm; Version 14 zero-mode value-set path */
      SC_STATIC_CONTEXT_BEGIN(0x03E284u,3u,0x00u,0xE287u);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E287u:
    if(m==0u&&x==0u){ /* F008 BEQ rel; Version 14 zero-mode value-set path */
      SC_STATIC_CONTEXT_BEGIN(0x03E287u,2u,0x08u,0xE289u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE291u;}
      if(c->pc!=0xE289u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE289u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E291u:
    if((m==0u||m==1u)&&x==0u){ /* 60 RTS imp; Version 14 zero-mode value-set path; Version 15 B-mode exit */
      SC_STATIC_CONTEXT_BEGIN(0x03E291u,1u,0x60u,0xE292u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E26Au:
    if(m==0u&&x==0u){ /* 2074E5 JSR abs; Version 14 observed nonzero mode path */
      SC_STATIC_CONTEXT_BEGIN(0x03E26Au,3u,0xE5u,0xE26Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE26Cu))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E26Du:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 14 observed nonzero mode path */
      SC_STATIC_CONTEXT_BEGIN(0x03E26Du,2u,0x20u,0xE26Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E26Fu:
    if(m==0u&&x==0u){ /* A90400 LDA imm; Version 14 observed nonzero mode path */
      SC_STATIC_CONTEXT_BEGIN(0x03E26Fu,3u,0x00u,0xE272u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E272u:
    if(m==0u&&x==0u){ /* 0200 COP #$00; Version 14 observed nonzero mode path */
      SC_STATIC_CONTEXT_BEGIN(0x03E272u,2u,0x00u,0xE274u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xE274u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E274u:
    if(m==0u&&x==0u){ /* 20EBC5 JSR abs; Version 14 observed nonzero mode path */
      SC_STATIC_CONTEXT_BEGIN(0x03E274u,3u,0xC5u,0xE277u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE276u))return 0;c->pc=0xC5EBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E289u:
    if(m==0u&&x==0u){ /* 2074E5 JSR abs; Version 14 observed nonzero mode path */
      SC_STATIC_CONTEXT_BEGIN(0x03E289u,3u,0xE5u,0xE28Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE28Bu))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E28Cu:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 14 observed nonzero mode path */
      SC_STATIC_CONTEXT_BEGIN(0x03E28Cu,3u,0x00u,0xE28Fu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E28Fu:
    if(m==0u&&x==0u){ /* 8514 STA dp; Version 14 observed nonzero mode path */
      SC_STATIC_CONTEXT_BEGIN(0x03E28Fu,2u,0x14u,0xE291u);
      {uint32_t a=sc_v11_ea_dp(r,0x0014u);sc_v11_bus_write16(r,a,c->a);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E277u:
    if(m==0u&&x==0u){ /* A90080 LDA imm; Version 15 B-mode exit path */
      SC_STATIC_CONTEXT_BEGIN(0x03E277u,3u,0x80u,0xE27Au);
      sc_v11_op_lda(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E27Au:
    if(m==0u&&x==0u){ /* 8514 STA dp; Version 15 B-mode exit path */
      SC_STATIC_CONTEXT_BEGIN(0x03E27Au,2u,0x14u,0xE27Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0014u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E27Cu:
    if(m==0u&&x==0u){ /* E220 SEP; Version 15 B-mode exit path */
      SC_STATIC_CONTEXT_BEGIN(0x03E27Cu,2u,0x20u,0xE27Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E27Eu:
    if(m==1u&&x==0u){ /* 64B5 STZ dp; Version 15 B-mode exit path */
      SC_STATIC_CONTEXT_BEGIN(0x03E27Eu,2u,0xB5u,0xE280u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00B5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E280u:
    if(m==1u&&x==0u){ /* 800F BRA; Version 15 B-mode exit path */
      SC_STATIC_CONTEXT_BEGIN(0x03E280u,2u,0x0Fu,0xE282u);
      c->pc=0xE291u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE282u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
