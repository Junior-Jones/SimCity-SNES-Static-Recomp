/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000F9(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03E574u:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* 08 PHP imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E574u,1u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE575u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E575u:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* E220 SEP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E575u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE577u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E577u:
    if(m==1u&&(x==0u||x==1u)){ /* 48 PHA imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E577u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE578u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E578u:
    if(m==1u&&(x==0u||x==1u)){ /* A906 LDA imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E578u,2u);
      r->open_bus=0x06u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE57Au;
      sc_v11_op_lda(r,(uint16_t)0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E57Au:
    if(m==1u&&(x==0u||x==1u)){ /* 8505 STA dp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E57Au,2u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE57Cu;
      {uint32_t a=sc_v11_ea_dp(r,0x0005u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E57Cu:
    if(m==1u&&(x==0u||x==1u)){ /* 68 PLA imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E57Cu,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE57Du;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E57Du:
    if(m==1u&&(x==0u||x==1u)){ /* 28 PLP imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E57Du,1u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE57Eu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E57Eu:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* 60 RTS imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E57Eu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE57Fu;
      {uint16_t ret;sc_v11_scheduler_internal_cycle(r,2u);ret=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(ret+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E40Au:
    if(m==0u&&x==0u){ /* C230 REP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E40Au,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE40Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E40Cu:
    if(m==0u&&x==0u){ /* 6446 STZ dp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E40Cu,2u);
      r->open_bus=0x46u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE40Eu;
      {uint32_t a=sc_v11_ea_dp(r,0x0046u);sc_v11_bus_write16(r,a,0u);}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E40Eu:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E40Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE411u;
      sc_v11_op_ldx(r,0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E411u:
    if(m==0u&&x==0u){ /* BF000070 LDA long,x; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E411u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE415u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x700000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E415u:
    if(m==0u&&x==0u){ /* 29FF00 AND imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E415u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE418u;
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E418u:
    if(m==0u&&x==0u){ /* 18 CLC imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E418u,1u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE419u;
      c->p=(uint8_t)(c->p&((uint8_t)~SC_FLAG_C));
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E419u:
    if(m==0u&&x==0u){ /* 6546 ADC dp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E419u,2u);
      r->open_bus=0x46u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE41Bu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0046u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E41Bu:
    if(m==0u&&x==0u){ /* 8546 STA dp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E41Bu,2u);
      r->open_bus=0x46u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE41Du;
      {uint32_t a=sc_v11_ea_dp(r,0x0046u);sc_v11_bus_write16(r,a,c->a);}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E41Du:
    if(m==0u&&x==0u){ /* E8 INX imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E41Du,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE41Eu;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E41Eu:
    if(m==0u&&x==0u){ /* E00E00 CPX imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E41Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE421u;
      sc_v11_op_compare(r,c->x,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E421u:
    if(m==0u&&x==0u){ /* D0EE BNE rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E421u,2u);
      r->open_bus=0xEEu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE423u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE411u;
      if(c->pc!=0xE423u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE423u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E423u:
    if(m==0u&&x==0u){ /* CF0E0070 CMP long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E423u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE427u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_long(0x70000Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E427u:
    if(m==0u&&x==0u){ /* D01A BNE rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E427u,2u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE429u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE443u;
      if(c->pc!=0xE429u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE429u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E429u:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* E220 SEP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E429u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE42Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E42Bu:
    if(m==1u&&x==0u){ /* AF000070 LDA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E42Bu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE42Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x700000u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E42Fu:
    if(m==1u&&x==0u){ /* C953 CMP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E42Fu,2u);
      r->open_bus=0x53u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE431u;
      sc_v11_op_compare(r,c->a,0x0053u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E431u:
    if(m==1u&&x==0u){ /* D010 BNE rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E431u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE433u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE443u;
      if(c->pc!=0xE433u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE433u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E433u:
    if(m==1u&&x==0u){ /* AF010070 LDA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E433u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE437u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x700001u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E437u:
    if(m==1u&&x==0u){ /* C949 CMP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E437u,2u);
      r->open_bus=0x49u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE439u;
      sc_v11_op_compare(r,c->a,0x0049u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E439u:
    if(m==1u&&x==0u){ /* D008 BNE rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E439u,2u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE43Bu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE443u;
      if(c->pc!=0xE43Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE43Bu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E43Bu:
    if(m==1u&&x==0u){ /* AF020070 LDA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E43Bu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE43Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x700002u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E43Fu:
    if(m==1u&&x==0u){ /* C94D CMP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E43Fu,2u);
      r->open_bus=0x4Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE441u;
      sc_v11_op_compare(r,c->a,0x004Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E441u:
    if(m==1u&&x==0u){ /* D000 BNE rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E441u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE443u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE443u;
      if(c->pc!=0xE443u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE443u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E443u:
    if((m==0u||m==1u)&&x==0u){ /* C220 REP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E443u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE445u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E445u:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* 60 RTS imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E445u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE446u;
      {uint16_t ret;sc_v11_scheduler_internal_cycle(r,2u);ret=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(ret+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E446u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E446u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE448u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E448u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E448u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE44Bu;
      sc_v11_op_ldx(r,0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E44Bu:
    if(m==0u&&x==0u){ /* BFF07F70 LDA long,x; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E44Bu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE44Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x707FF0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E44Fu:
    if(m==0u&&x==0u){ /* 9F000070 STA long,x; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E44Fu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE453u;
      {uint32_t a=sc_v11_ea_longx(r,0x700000u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E453u:
    if(m==0u&&x==0u){ /* E8 INX imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E453u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE454u;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E454u:
    if(m==0u&&x==0u){ /* E8 INX imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E454u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE455u;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E455u:
    if(m==0u&&x==0u){ /* E01000 CPX imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E455u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE458u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E458u:
    if(m==0u&&x==0u){ /* D0F1 BNE rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E458u,2u);
      r->open_bus=0xF1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE45Au;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE44Bu;
      if(c->pc!=0xE45Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE45Au^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E45Au:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* 60 RTS imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E45Au,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE45Bu;
      {uint16_t ret;sc_v11_scheduler_internal_cycle(r,2u);ret=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(ret+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E45Bu:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* E220 SEP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E45Bu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE45Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E45Du:
    if(m==1u&&x==0u){ /* A953 LDA imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E45Du,2u);
      r->open_bus=0x53u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE45Fu;
      sc_v11_op_lda(r,0x0053u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E45Fu:
    if(m==1u&&x==0u){ /* 8F000070 STA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E45Fu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE463u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x700000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E463u:
    if(m==1u&&x==0u){ /* A949 LDA imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E463u,2u);
      r->open_bus=0x49u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE465u;
      sc_v11_op_lda(r,0x0049u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E465u:
    if(m==1u&&x==0u){ /* 8F010070 STA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E465u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE469u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x700001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E469u:
    if(m==1u&&x==0u){ /* A94D LDA imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E469u,2u);
      r->open_bus=0x4Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE46Bu;
      sc_v11_op_lda(r,0x004Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E46Bu:
    if(m==1u&&x==0u){ /* 8F020070 STA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E46Bu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE46Fu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x700002u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E46Fu:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E46Fu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE471u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E471u:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E471u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE474u;
      sc_v11_op_lda(r,0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E474u:
    if(m==0u&&x==0u){ /* 8F050070 STA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E474u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE478u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x700005u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E478u:
    if(m==0u&&x==0u){ /* 8F070070 STA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E478u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE47Cu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x700007u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E47Cu:
    if(m==0u&&x==0u){ /* 8F090070 STA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E47Cu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE480u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x700009u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E480u:
    if(m==0u&&x==0u){ /* 2053E5 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E480u,3u);
      r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE483u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE482u))return 0;c->pc=0xE553u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E483u:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* 60 RTS imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E483u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE484u;
      {uint16_t ret;sc_v11_scheduler_internal_cycle(r,2u);ret=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(ret+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E553u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E553u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE555u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E555u:
    if(m==0u&&x==0u){ /* 6446 STZ dp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E555u,2u);
      r->open_bus=0x46u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE557u;
      {uint32_t a=sc_v11_ea_dp(r,0x0046u);sc_v11_bus_write16(r,a,0u);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E557u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E557u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE55Au;
      sc_v11_op_ldx(r,0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E55Au:
    if(m==0u&&x==0u){ /* BF000070 LDA long,x; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E55Au,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE55Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x700000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E55Eu:
    if(m==0u&&x==0u){ /* 29FF00 AND imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E55Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE561u;
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E561u:
    if(m==0u&&x==0u){ /* 18 CLC imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E561u,1u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE562u;
      c->p=(uint8_t)(c->p&((uint8_t)~SC_FLAG_C));sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E562u:
    if(m==0u&&x==0u){ /* 6546 ADC dp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E562u,2u);
      r->open_bus=0x46u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE564u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0046u)),16u);if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E564u:
    if(m==0u&&x==0u){ /* 8546 STA dp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E564u,2u);
      r->open_bus=0x46u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE566u;
      {uint32_t a=sc_v11_ea_dp(r,0x0046u);sc_v11_bus_write16(r,a,c->a);}if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E566u:
    if(m==0u&&x==0u){ /* E8 INX imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E566u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE567u;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E567u:
    if(m==0u&&x==0u){ /* E00E00 CPX imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E567u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE56Au;
      sc_v11_op_compare(r,c->x,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E56Au:
    if(m==0u&&x==0u){ /* D0EE BNE rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E56Au,2u);
      r->open_bus=0xEEu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE56Cu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE55Au;
      if(c->pc!=0xE56Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE56Cu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E56Cu:
    if(m==0u&&x==0u){ /* 8F0E0070 STA long; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E56Cu,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE570u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x70000Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E570u:
    if(m==0u&&x==0u){ /* 2084E4 JSR abs; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E570u,3u);
      r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE573u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE572u))return 0;c->pc=0xE484u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E573u:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* 60 RTS imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E573u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE574u;
      {uint16_t ret;sc_v11_scheduler_internal_cycle(r,2u);ret=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(ret+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E484u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E484u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE486u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E486u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E486u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE489u;
      sc_v11_op_ldx(r,0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E489u:
    if(m==0u&&x==0u){ /* BF000070 LDA long,x; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E489u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE48Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x700000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E48Du:
    if(m==0u&&x==0u){ /* 9FF07F70 STA long,x; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E48Du,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE491u;
      {uint32_t a=sc_v11_ea_longx(r,0x707FF0u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E491u:
    if(m==0u&&x==0u){ /* E8 INX imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E491u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE492u;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E492u:
    if(m==0u&&x==0u){ /* E8 INX imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E492u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE493u;
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E493u:
    if(m==0u&&x==0u){ /* E01000 CPX imm; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E493u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE496u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E496u:
    if(m==0u&&x==0u){ /* D0F1 BNE rel; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E496u,2u);
      r->open_bus=0xF1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE498u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0xE489u;
      if(c->pc!=0xE498u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE498u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E498u:
    if((m==0u||m==1u)&&(x==0u||x==1u)){ /* 60 RTS imp; Version 13 Start/B and blank-SRAM route */
      sc_v11_scheduler_code_access(r,0x03E498u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE499u;
      {uint16_t ret;sc_v11_scheduler_internal_cycle(r,2u);ret=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(ret+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E402u:
    if(m==0u&&x==0u){ /* AF6E4070 LDA long; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E402u,4u);
      r->open_bus=0x70u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE406u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x70406Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E406u:
    if(m==0u&&x==0u){ /* 8D830B STA abs; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E406u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE409u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B83u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03E409u:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 13 SRAM header and slot-summary continuation */
      sc_v11_scheduler_code_access(r,0x03E409u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0xE40Au;
      {uint16_t ret;sc_v11_scheduler_internal_cycle(r,2u);ret=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(ret+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
