/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000F3(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03CE2Eu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE2Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE30u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE30u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE30u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE32u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE32u:
    if(m==1u&&x==0u){ /* E220 SEP imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE32u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE34u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE34u:
    if(m==1u&&x==0u){ /* ADB300 LDA abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE34u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE37u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x00B3u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE37u:
    if(m==1u&&x==0u){ /* 297F AND imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE37u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE39u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE39u:
    if(m==1u&&x==0u){ /* 8DB100 STA abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE39u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE3Cu;
      {uint32_t q=sc_v11_ea_abs(r,0x00B1u);sc_v11_bus_write8(r,q,(uint8_t)c->a);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE3Cu:
    if(m==1u&&x==0u){ /* AC4000 LDY abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE3Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE3Fu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0040u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE3Fu:
    if(m==1u&&x==0u){ /* B970CE LDA abs,y; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE3Fu,3u);r->open_bus=0xCEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE42u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xCE70u)),8u);if(((c->p&SC_FLAG_X)==0u)||(((0xCE70u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE42u:
    if(m==1u&&x==0u){ /* 8D0900 STA abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE42u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE45u;
      {uint32_t q=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write8(r,q,(uint8_t)c->a);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE45u:
    if(m==1u&&x==0u){ /* B979CE LDA abs,y; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE45u,3u);r->open_bus=0xCEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE48u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xCE79u)),8u);if(((c->p&SC_FLAG_X)==0u)||(((0xCE79u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE48u:
    if(m==1u&&x==0u){ /* 8D0A00 STA abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE48u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE4Bu;
      {uint32_t q=sc_v11_ea_abs(r,0x000Au);sc_v11_bus_write8(r,q,(uint8_t)c->a);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE4Bu:
    if(m==1u&&x==0u){ /* B982CE LDA abs,y; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE4Bu,3u);r->open_bus=0xCEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE4Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xCE82u)),8u);if(((c->p&SC_FLAG_X)==0u)||(((0xCE82u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE4Eu:
    if(m==1u&&x==0u){ /* 8D0B00 STA abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE4Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE51u;
      {uint32_t q=sc_v11_ea_abs(r,0x000Bu);sc_v11_bus_write8(r,q,(uint8_t)c->a);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE51u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE51u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE54u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE54u:
    if(m==1u&&x==0u){ /* 8E0E00 STX abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE54u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE57u;
      {uint32_t q=sc_v11_ea_abs(r,0x000Eu);sc_v11_bus_write16(r,q,c->x);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE57u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE57u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE59u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE59u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE59u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE5Cu;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE5Cu:
    if(m==0u&&x==0u){ /* 0200 COP #$00; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE5Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE5Eu;
      if(c->emulation){return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");}
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCE5Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE5Eu:
    if(m==0u&&x==0u){ /* 205FD1 JSR abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE5Eu,3u);r->open_bus=0xD1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE61u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCE60u))return 0;c->pc=0xD15Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE61u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE61u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE63u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE63u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE63u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE65u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE65u:
    if(m==1u&&x==0u){ /* E220 SEP imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE65u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE67u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE67u:
    if(m==1u&&x==0u){ /* ADB300 LDA abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE67u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE6Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x00B3u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE6Au:
    if(m==1u&&x==0u){ /* 0980 ORA imm; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE6Au,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE6Cu;
      sc_v11_op_ora(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE6Cu:
    if(m==1u&&x==0u){ /* 8DB100 STA abs; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE6Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE6Fu;
      {uint32_t q=sc_v11_ea_abs(r,0x00B1u);sc_v11_bus_write8(r,q,(uint8_t)c->a);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CE6Fu:
    if(m==1u&&x==0u){ /* 60 RTS imp; Version 15 B-mode preset routine */
      sc_v11_scheduler_code_access(r,0x03CE6Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCE70u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF19u:
    if(m==0u&&x==0u){ /* B932CF LDA abs,y; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF19u,3u);r->open_bus=0xCFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF1Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCF32u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF1Cu:
    if(m==0u&&x==0u){ /* 8D7900 STA abs; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF1Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF1Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0079u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF1Fu:
    if(m==0u&&x==0u){ /* E230 SEP; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF1Fu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF21u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF21u:
    if(m==1u&&x==1u){ /* A000 LDY imm; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF21u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF23u;
      sc_v11_op_ldy(r,0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF23u:
    if(m==1u&&x==1u){ /* B179 LDA (dp),y; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF23u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF25u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp_indirect_y(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);{uint16_t b=sc_v11_bus_peek16(r,(uint16_t)(c->d+0x79u));if((((b&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF25u:
    if(m==1u&&x==1u){ /* AA TAX; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF25u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF26u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF26u:
    if(m==1u&&x==1u){ /* B179 LDA (dp),y; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF26u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF28u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp_indirect_y(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);{uint16_t b=sc_v11_bus_peek16(r,(uint16_t)(c->d+0x79u));if((((b&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF28u:
    if(m==1u&&x==1u){ /* 995B0B STA abs,y; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF28u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF2Bu;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0B5Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF2Bu:
    if(m==1u&&x==1u){ /* C8 INY; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF2Bu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF2Cu;
      c->y=(uint16_t)((c->y+1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF2Cu:
    if(m==1u&&x==1u){ /* CA DEX; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF2Cu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF2Du;
      c->x=(uint16_t)((c->x-1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF2Du:
    if(m==1u&&x==1u){ /* 10F7 BPL; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF2Du,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF2Fu;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xCF26u;}if(c->pc!=0xCF2Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCF2Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF2Fu:
    if(m==1u&&x==1u){ /* C230 REP; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF2Fu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF31u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03CF31u:
    if(m==0u&&x==0u){ /* 60 RTS; Version 15 B-mode text copy island */
      sc_v11_scheduler_code_access(r,0x03CF31u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCF32u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
