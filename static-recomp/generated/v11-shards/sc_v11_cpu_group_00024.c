/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_00024(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0090DDu:
    if(m==0u&&x==0u){ /* 08 PHP imp */
      sc_v11_scheduler_code_access(r,0x0090DDu,1u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90DEu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->p))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090DEu:
    if(m==0u&&x==0u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x0090DEu,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90DFu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090DFu:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0090DFu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090E1u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x0090E1u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090E3u:
    if(m==1u&&x==0u){ /* AD0B00 LDA abs */
      sc_v11_scheduler_code_access(r,0x0090E3u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E6u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Bu))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090E6u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x0090E6u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E7u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090E7u:
    if(m==1u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x0090E7u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90E8u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090E8u:
    if(m==1u&&x==0u){ /* 9C1100 STZ abs */
      sc_v11_scheduler_code_access(r,0x0090E8u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90EBu;
      {uint32_t a=sc_v11_ea_abs(r,0x0011u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090EBu:
    if(m==1u&&x==0u){ /* AE0E00 LDX abs */
      sc_v11_scheduler_code_access(r,0x0090EBu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90EEu;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Eu))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090EEu:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x0090EEu,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90EFu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090EFu:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x0090EFu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90F2u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090F2u:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x0090F2u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90F5u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090F5u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x0090F5u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90F6u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090F6u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x0090F6u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90F8u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x90FBu;
      if(c->pc!=0x90F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90F8u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090FBu:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x0090FBu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90FEu;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090FEu:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x0090FEu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x90FFu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090FFu:
    if(m==1u&&x==0u){ /* 8D0C00 STA abs */
      sc_v11_scheduler_code_access(r,0x0090FFu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9102u;
      {uint32_t a=sc_v11_ea_abs(r,0x000Cu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009102u:
    if(m==1u&&x==0u){ /* C9FF CMP imm */
      sc_v11_scheduler_code_access(r,0x009102u,2u);
      r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9104u;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x00FFu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009104u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x009104u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9106u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9109u;
      if(c->pc!=0x9106u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9106u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009106u:
    if(m==1u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x009106u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9107u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009107u:
    if(m==1u&&x==0u){ /* 28 PLP imp */
      sc_v11_scheduler_code_access(r,0x009107u,1u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9108u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009108u:
    if(m==0u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x009108u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9109u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009109u:
    if(m==1u&&x==0u){ /* 29E0 AND imm */
      sc_v11_scheduler_code_access(r,0x009109u,2u);
      r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x910Bu;
      sc_v11_op_and(r,(uint16_t)(0x00E0u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00910Bu:
    if(m==1u&&x==0u){ /* C9E0 CMP imm */
      sc_v11_scheduler_code_access(r,0x00910Bu,2u);
      r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x910Du;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x00E0u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00910Du:
    if(m==1u&&x==0u){ /* D022 BNE rel */
      sc_v11_scheduler_code_access(r,0x00910Du,2u);
      r->open_bus=0x22u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x910Fu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9131u;
      if(c->pc!=0x910Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x910Fu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00910Fu:
    if(m==1u&&x==0u){ /* AD0C00 LDA abs */
      sc_v11_scheduler_code_access(r,0x00910Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9112u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Cu))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009112u:
    if(m==1u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x009112u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9113u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009113u:
    if(m==1u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x009113u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9114u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009114u:
    if(m==1u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x009114u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9115u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009115u:
    if(m==1u&&x==0u){ /* 29E0 AND imm */
      sc_v11_scheduler_code_access(r,0x009115u,2u);
      r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9117u;
      sc_v11_op_and(r,(uint16_t)(0x00E0u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009117u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x009117u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9118u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009118u:
    if(m==1u&&x==0u){ /* AD0C00 LDA abs */
      sc_v11_scheduler_code_access(r,0x009118u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x911Bu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Cu))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00911Bu:
    if(m==1u&&x==0u){ /* 2903 AND imm */
      sc_v11_scheduler_code_access(r,0x00911Bu,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x911Du;
      sc_v11_op_and(r,(uint16_t)(0x0003u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00911Du:
    if(m==1u&&x==0u){ /* EB XBA imp */
      sc_v11_scheduler_code_access(r,0x00911Du,1u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x911Eu;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));
      sc_v11_set_nz8(c,(uint8_t)c->a);
      sc_v11_scheduler_idle_or_read(r); sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00911Eu:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x00911Eu,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x911Fu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00911Fu:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x00911Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9122u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009122u:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x009122u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9125u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009125u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x009125u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9126u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009126u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x009126u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9128u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x912Bu;
      if(c->pc!=0x9128u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9128u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00912Bu:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x00912Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x912Eu;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00912Eu:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x00912Eu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x912Fu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00912Fu:
    if(m==1u&&x==0u){ /* 8009 BRA rel */
      sc_v11_scheduler_code_access(r,0x00912Fu,2u);
      r->open_bus=0x09u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9131u;
      c->pc=0x913Au;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(c->emulation&&((0x9131u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009131u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x009131u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9132u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009132u:
    if(m==1u&&x==0u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x009132u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9134u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009134u:
    if(m==1u&&x==0u){ /* EB XBA imp */
      sc_v11_scheduler_code_access(r,0x009134u,1u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9135u;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));
      sc_v11_set_nz8(c,(uint8_t)c->a);
      sc_v11_scheduler_idle_or_read(r); sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009135u:
    if(m==1u&&x==0u){ /* AD0C00 LDA abs */
      sc_v11_scheduler_code_access(r,0x009135u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9138u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Cu))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009138u:
    if(m==1u&&x==0u){ /* 291F AND imm */
      sc_v11_scheduler_code_access(r,0x009138u,2u);
      r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x913Au;
      sc_v11_op_and(r,(uint16_t)(0x001Fu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00913Au:
    if(m==1u&&x==0u){ /* A8 TAY imp */
      sc_v11_scheduler_code_access(r,0x00913Au,1u);
      r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x913Bu;
      c->y=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00913Bu:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x00913Bu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x913Cu;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00913Cu:
    if(m==1u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x00913Cu,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x913Du;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00913Du:
    if(m==1u&&x==0u){ /* C900 CMP imm */
      sc_v11_scheduler_code_access(r,0x00913Du,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x913Fu;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x0000u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00913Fu:
    if(m==1u&&x==0u){ /* 1003 BPL rel */
      sc_v11_scheduler_code_access(r,0x00913Fu,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9141u;
      if((c->p&SC_FLAG_N)==0u)c->pc=0x9144u;
      if(c->pc!=0x9141u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9141u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009141u:
    if(m==1u&&x==0u){ /* 4CE591 JMP abs */
      sc_v11_scheduler_code_access(r,0x009141u,3u);
      r->open_bus=0x91u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9144u;
      c->pc=0x91E5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009144u:
    if(m==1u&&x==0u){ /* C920 CMP imm */
      sc_v11_scheduler_code_access(r,0x009144u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9146u;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x0020u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009146u:
    if(m==1u&&x==0u){ /* F023 BEQ rel */
      sc_v11_scheduler_code_access(r,0x009146u,2u);
      r->open_bus=0x23u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9148u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x916Bu;
      if(c->pc!=0x9148u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9148u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009148u:
    if(m==1u&&x==0u){ /* C940 CMP imm */
      sc_v11_scheduler_code_access(r,0x009148u,2u);
      r->open_bus=0x40u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x914Au;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x0040u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00914Au:
    if(m==1u&&x==0u){ /* F03B BEQ rel */
      sc_v11_scheduler_code_access(r,0x00914Au,2u);
      r->open_bus=0x3Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x914Cu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x9187u;
      if(c->pc!=0x914Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x914Cu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00914Cu:
    if(m==1u&&x==0u){ /* C960 CMP imm */
      sc_v11_scheduler_code_access(r,0x00914Cu,2u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x914Eu;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x0060u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00914Eu:
    if(m==1u&&x==0u){ /* F078 BEQ rel */
      sc_v11_scheduler_code_access(r,0x00914Eu,2u);
      r->open_bus=0x78u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9150u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x91C8u;
      if(c->pc!=0x9150u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9150u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009150u:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x009150u,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9151u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009151u:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x009151u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9154u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009154u:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x009154u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9157u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009157u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x009157u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9158u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009158u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x009158u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x915Au;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x915Du;
      if(c->pc!=0x915Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x915Au^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00915Au:
    if(m==1u&&x==0u){ /* 206D92 JSR abs */
      sc_v11_scheduler_code_access(r,0x00915Au,3u);
      r->open_bus=0x92u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x915Du;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x915Cu))return 0;
      c->pc=0x926Du;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00915Du:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x00915Du,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9160u;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009160u:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x009160u,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9161u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009161u:
    if(m==1u&&x==0u){ /* 9F00807E STA long,x */
      sc_v11_scheduler_code_access(r,0x009161u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9165u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E8000u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009165u:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x009165u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9166u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009166u:
    if(m==1u&&x==0u){ /* 88 DEY imp */
      sc_v11_scheduler_code_access(r,0x009166u,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9167u;
      c->y=(uint16_t)((c->y+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009167u:
    if(m==1u&&x==0u){ /* D0E7 BNE rel */
      sc_v11_scheduler_code_access(r,0x009167u,2u);
      r->open_bus=0xE7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9169u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9150u;
      if(c->pc!=0x9169u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9169u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009169u:
    if(m==1u&&x==0u){ /* F083 BEQ rel */
      sc_v11_scheduler_code_access(r,0x009169u,2u);
      r->open_bus=0x83u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x916Bu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x90EEu;
      if(c->pc!=0x916Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x916Bu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00916Bu:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x00916Bu,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x916Cu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00916Cu:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x00916Cu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x916Fu;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00916Fu:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x00916Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9172u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009172u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x009172u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9173u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009173u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x009173u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9175u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9178u;
      if(c->pc!=0x9175u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9175u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009178u:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x009178u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x917Bu;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00917Bu:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x00917Bu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x917Cu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00917Cu:
    if(m==1u&&x==0u){ /* 9F00807E STA long,x */
      sc_v11_scheduler_code_access(r,0x00917Cu,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9180u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E8000u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009180u:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x009180u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9181u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009181u:
    if(m==1u&&x==0u){ /* 88 DEY imp */
      sc_v11_scheduler_code_access(r,0x009181u,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9182u;
      c->y=(uint16_t)((c->y+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009182u:
    if(m==1u&&x==0u){ /* D0F8 BNE rel */
      sc_v11_scheduler_code_access(r,0x009182u,2u);
      r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9184u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x917Cu;
      if(c->pc!=0x9184u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9184u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009184u:
    if(m==1u&&x==0u){ /* 4CEE90 JMP abs */
      sc_v11_scheduler_code_access(r,0x009184u,3u);
      r->open_bus=0x90u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9187u;
      c->pc=0x90EEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009187u:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x009187u,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9188u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009188u:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x009188u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x918Bu;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00918Bu:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x00918Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x918Eu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00918Eu:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x00918Eu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x918Fu;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00918Fu:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x00918Fu,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9191u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9194u;
      if(c->pc!=0x9191u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9191u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009194u:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x009194u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9197u;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009197u:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x009197u,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9198u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009198u:
    if(m==1u&&x==0u){ /* 8D0C00 STA abs */
      sc_v11_scheduler_code_access(r,0x009198u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x919Bu;
      {uint32_t a=sc_v11_ea_abs(r,0x000Cu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00919Bu:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x00919Bu,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x919Cu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00919Cu:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x00919Cu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x919Fu;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00919Fu:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x00919Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A2u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091A2u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x0091A2u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A3u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091A3u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x0091A3u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91A5u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x91A8u;
      if(c->pc!=0x91A5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91A5u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091A8u:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x0091A8u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91ABu;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091ABu:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x0091ABu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91ACu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091ACu:
    if(m==1u&&x==0u){ /* 8D0D00 STA abs */
      sc_v11_scheduler_code_access(r,0x0091ACu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91AFu;
      {uint32_t a=sc_v11_ea_abs(r,0x000Du);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091AFu:
    if(m==1u&&x==0u){ /* AD0C00 LDA abs */
      sc_v11_scheduler_code_access(r,0x0091AFu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91B2u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Cu))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091B2u:
    if(m==1u&&x==0u){ /* 9F00807E STA long,x */
      sc_v11_scheduler_code_access(r,0x0091B2u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91B6u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E8000u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091B6u:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x0091B6u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91B7u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091B7u:
    if(m==1u&&x==0u){ /* 88 DEY imp */
      sc_v11_scheduler_code_access(r,0x0091B7u,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91B8u;
      c->y=(uint16_t)((c->y+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091B8u:
    if(m==1u&&x==0u){ /* F00B BEQ rel */
      sc_v11_scheduler_code_access(r,0x0091B8u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91BAu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x91C5u;
      if(c->pc!=0x91BAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91BAu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091BAu:
    if(m==1u&&x==0u){ /* AD0D00 LDA abs */
      sc_v11_scheduler_code_access(r,0x0091BAu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91BDu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Du))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091BDu:
    if(m==1u&&x==0u){ /* 9F00807E STA long,x */
      sc_v11_scheduler_code_access(r,0x0091BDu,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C1u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E8000u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091C1u:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x0091C1u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C2u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091C2u:
    if(m==1u&&x==0u){ /* 88 DEY imp */
      sc_v11_scheduler_code_access(r,0x0091C2u,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C3u;
      c->y=(uint16_t)((c->y+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091C3u:
    if(m==1u&&x==0u){ /* D0EA BNE rel */
      sc_v11_scheduler_code_access(r,0x0091C3u,2u);
      r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C5u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x91AFu;
      if(c->pc!=0x91C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91C5u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091C5u:
    if(m==1u&&x==0u){ /* 4CEE90 JMP abs */
      sc_v11_scheduler_code_access(r,0x0091C5u,3u);
      r->open_bus=0x90u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C8u;
      c->pc=0x90EEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091C8u:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x0091C8u,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91C9u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091C9u:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x0091C9u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91CCu;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091CCu:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x0091CCu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91CFu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091CFu:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x0091CFu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D0u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091D0u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x0091D0u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D2u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x91D5u;
      if(c->pc!=0x91D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91D2u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091D5u:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x0091D5u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D8u;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091D8u:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x0091D8u,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91D9u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091D9u:
    if(m==1u&&x==0u){ /* 9F00807E STA long,x */
      sc_v11_scheduler_code_access(r,0x0091D9u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91DDu;
      {uint32_t a=sc_v11_ea_longx(r,0x7E8000u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091DDu:
    if(m==1u&&x==0u){ /* 1A INC acc */
      sc_v11_scheduler_code_access(r,0x0091DDu,1u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91DEu;
      sc_v11_op_incdec_accumulator(r,8u,1);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091DEu:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x0091DEu,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91DFu;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091DFu:
    if(m==1u&&x==0u){ /* 88 DEY imp */
      sc_v11_scheduler_code_access(r,0x0091DFu,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E0u;
      c->y=(uint16_t)((c->y+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091E0u:
    if(m==1u&&x==0u){ /* D0F7 BNE rel */
      sc_v11_scheduler_code_access(r,0x0091E0u,2u);
      r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E2u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x91D9u;
      if(c->pc!=0x91E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91E2u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091E2u:
    if(m==1u&&x==0u){ /* 4CEE90 JMP abs */
      sc_v11_scheduler_code_access(r,0x0091E2u,3u);
      r->open_bus=0x90u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E5u;
      c->pc=0x90EEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091E5u:
    if(m==1u&&x==0u){ /* C9C0 CMP imm */
      sc_v11_scheduler_code_access(r,0x0091E5u,2u);
      r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E7u;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x00C0u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091E7u:
    if(m==1u&&x==0u){ /* B05C BCS rel */
      sc_v11_scheduler_code_access(r,0x0091E7u,2u);
      r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91E9u;
      if((c->p&SC_FLAG_C)!=0u)c->pc=0x9245u;
      if(c->pc!=0x91E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91E9u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091E9u:
    if(m==1u&&x==0u){ /* 2920 AND imm */
      sc_v11_scheduler_code_access(r,0x0091E9u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91EBu;
      sc_v11_op_and(r,(uint16_t)(0x0020u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091EBu:
    if(m==1u&&x==0u){ /* 8D1000 STA abs */
      sc_v11_scheduler_code_access(r,0x0091EBu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91EEu;
      {uint32_t a=sc_v11_ea_abs(r,0x0010u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091EEu:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x0091EEu,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91EFu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091EFu:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x0091EFu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F2u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091F2u:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x0091F2u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F5u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091F5u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x0091F5u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F6u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091F6u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x0091F6u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91F8u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x91FBu;
      if(c->pc!=0x91F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91F8u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091FBu:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x0091FBu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91FEu;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091FEu:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x0091FEu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x91FFu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091FFu:
    if(m==1u&&x==0u){ /* 8D0C00 STA abs */
      sc_v11_scheduler_code_access(r,0x0091FFu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9202u;
      {uint32_t a=sc_v11_ea_abs(r,0x000Cu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009202u:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x009202u,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9203u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009203u:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x009203u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9206u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009206u:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x009206u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9209u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009209u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x009209u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x920Au;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00920Au:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x00920Au,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x920Cu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x920Fu;
      if(c->pc!=0x920Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x920Cu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00920Fu:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x00920Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9212u;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009212u:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x009212u,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9213u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009213u:
    if(m==1u&&x==0u){ /* 8D0D00 STA abs */
      sc_v11_scheduler_code_access(r,0x009213u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9216u;
      {uint32_t a=sc_v11_ea_abs(r,0x000Du);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009216u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x009216u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9218u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009218u:
    if(m==0u&&x==0u){ /* AD0C00 LDA abs */
      sc_v11_scheduler_code_access(r,0x009218u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x921Bu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Cu))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00921Bu:
    if(m==0u&&x==0u){ /* 18 CLC imp */
      sc_v11_scheduler_code_access(r,0x00921Bu,1u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x921Cu;
      c->p=(uint8_t)(c->p & (uint8_t)~SC_FLAG_C);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00921Cu:
    if(m==0u&&x==0u){ /* 6D0E00 ADC abs */
      sc_v11_scheduler_code_access(r,0x00921Cu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x921Fu;
      sc_v11_op_adc(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Eu))),16u);
      if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00921Fu:
    if(m==0u&&x==0u){ /* 8D0C00 STA abs */
      sc_v11_scheduler_code_access(r,0x00921Fu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9222u;
      {uint32_t a=sc_v11_ea_abs(r,0x000Cu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009222u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x009222u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9224u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009224u:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x009224u,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9225u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009225u:
    if(m==1u&&x==0u){ /* DA PHX imp */
      sc_v11_scheduler_code_access(r,0x009225u,1u);
      r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9226u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->x))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009226u:
    if(m==1u&&x==0u){ /* AE0C00 LDX abs */
      sc_v11_scheduler_code_access(r,0x009226u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9229u;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Cu))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009229u:
    if(m==1u&&x==0u){ /* BF00807E LDA long,x */
      sc_v11_scheduler_code_access(r,0x009229u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x922Du;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E8000u))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00922Du:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x00922Du,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x922Eu;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00922Eu:
    if(m==1u&&x==0u){ /* 8E0C00 STX abs */
      sc_v11_scheduler_code_access(r,0x00922Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9231u;
      {uint32_t a=sc_v11_ea_abs(r,0x000Cu);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009231u:
    if(m==1u&&x==0u){ /* FA PLX imp */
      sc_v11_scheduler_code_access(r,0x009231u,1u);
      r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9232u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldx(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009232u:
    if(m==1u&&x==0u){ /* AC1000 LDY abs */
      sc_v11_scheduler_code_access(r,0x009232u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9235u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0010u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009235u:
    if(m==1u&&x==0u){ /* F002 BEQ rel */
      sc_v11_scheduler_code_access(r,0x009235u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9237u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x9239u;
      if(c->pc!=0x9237u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9237u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009237u:
    if(m==1u&&x==0u){ /* 49FF EOR imm */
      sc_v11_scheduler_code_access(r,0x009237u,2u);
      r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9239u;
      sc_v11_op_eor(r,(uint16_t)(0x00FFu),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009239u:
    if(m==1u&&x==0u){ /* 9F00807E STA long,x */
      sc_v11_scheduler_code_access(r,0x009239u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x923Du;
      {uint32_t a=sc_v11_ea_longx(r,0x7E8000u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00923Du:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x00923Du,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x923Eu;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00923Eu:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x00923Eu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x923Fu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00923Fu:
    if(m==1u&&x==0u){ /* 88 DEY imp */
      sc_v11_scheduler_code_access(r,0x00923Fu,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9240u;
      c->y=(uint16_t)((c->y+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009240u:
    if(m==1u&&x==0u){ /* D0E2 BNE rel */
      sc_v11_scheduler_code_access(r,0x009240u,2u);
      r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9242u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9224u;
      if(c->pc!=0x9242u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9242u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009242u:
    if(m==1u&&x==0u){ /* 4CEE90 JMP abs */
      sc_v11_scheduler_code_access(r,0x009242u,3u);
      r->open_bus=0x90u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9245u;
      c->pc=0x90EEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009245u:
    if(m==1u&&x==0u){ /* 2920 AND imm */
      sc_v11_scheduler_code_access(r,0x009245u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9247u;
      sc_v11_op_and(r,(uint16_t)(0x0020u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009247u:
    if(m==1u&&x==0u){ /* 8D1000 STA abs */
      sc_v11_scheduler_code_access(r,0x009247u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x924Au;
      {uint32_t a=sc_v11_ea_abs(r,0x0010u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00924Au:
    if(m==1u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x00924Au,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x924Bu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00924Bu:
    if(m==1u&&x==0u){ /* AC0900 LDY abs */
      sc_v11_scheduler_code_access(r,0x00924Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x924Eu;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00924Eu:
    if(m==1u&&x==0u){ /* B90000 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x00924Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9251u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u))),8u);
      if(0u==0u||(((0x0000u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009251u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x009251u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9252u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009252u:
    if(m==1u&&x==0u){ /* D003 BNE rel */
      sc_v11_scheduler_code_access(r,0x009252u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9254u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9257u;
      if(c->pc!=0x9254u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9254u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009257u:
    if(m==1u&&x==0u){ /* 8C0900 STY abs */
      sc_v11_scheduler_code_access(r,0x009257u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x925Au;
      {uint32_t a=sc_v11_ea_abs(r,0x0009u);sc_v11_bus_write16(r,a,(uint16_t)(c->y));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00925Au:
    if(m==1u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x00925Au,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x925Bu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00925Bu:
    if(m==1u&&x==0u){ /* 8D0C00 STA abs */
      sc_v11_scheduler_code_access(r,0x00925Bu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x925Eu;
      {uint32_t a=sc_v11_ea_abs(r,0x000Cu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00925Eu:
    if(m==1u&&x==0u){ /* 9C0D00 STZ abs */
      sc_v11_scheduler_code_access(r,0x00925Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9261u;
      {uint32_t a=sc_v11_ea_abs(r,0x000Du);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009261u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x009261u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9263u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009263u:
    if(m==0u&&x==0u){ /* 8A TXA imp */
      sc_v11_scheduler_code_access(r,0x009263u,1u);
      r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9264u;
      sc_v11_op_lda(r,(uint16_t)(c->x&0xFFFFu),16u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009264u:
    if(m==0u&&x==0u){ /* 38 SEC imp */
      sc_v11_scheduler_code_access(r,0x009264u,1u);
      r->open_bus=0x38u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9265u;
      c->p=(uint8_t)(c->p | SC_FLAG_C);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009265u:
    if(m==0u&&x==0u){ /* ED0C00 SBC abs */
      sc_v11_scheduler_code_access(r,0x009265u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9268u;
      sc_v11_op_sbc(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Cu))),16u);
      if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009268u:
    if(m==0u&&x==0u){ /* 8D0C00 STA abs */
      sc_v11_scheduler_code_access(r,0x009268u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x926Bu;
      {uint32_t a=sc_v11_ea_abs(r,0x000Cu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00926Bu:
    if(m==0u&&x==0u){ /* 80B5 BRA rel */
      sc_v11_scheduler_code_access(r,0x00926Bu,2u);
      r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x926Du;
      c->pc=0x9222u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(c->emulation&&((0x926Du^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00926Du:
    if(m==1u&&x==0u){ /* A00080 LDY imm */
      sc_v11_scheduler_code_access(r,0x00926Du,3u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9270u;
      sc_v11_op_ldy(r,(uint16_t)(0x8000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009270u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x009270u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9271u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009271u:
    if(m==1u&&x==0u){ /* 8B PHB imp */
      sc_v11_scheduler_code_access(r,0x009271u,1u);
      r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9272u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->dbr))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009272u:
    if(m==1u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x009272u,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9273u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009273u:
    if(m==1u&&x==0u){ /* 1A INC acc */
      sc_v11_scheduler_code_access(r,0x009273u,1u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9274u;
      sc_v11_op_incdec_accumulator(r,8u,1);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009274u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x009274u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9275u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009275u:
    if(m==1u&&x==0u){ /* AB PLB imp */
      sc_v11_scheduler_code_access(r,0x009275u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9276u;
      sc_v11_scheduler_internal_cycle(r,2u);
      c->dbr=sc_v11_pop8(r);
      sc_v11_set_nz8(c,c->dbr);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009276u:
    if(m==1u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x009276u,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9277u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009277u:
    if(m==1u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x009277u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9278u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00927Cu:
    if(m==1u&&x==1u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x00927Cu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x927Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00927Eu:
    if(m==1u&&x==1u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x00927Eu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9280u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009280u:
    if(m==1u&&x==0u){ /* AD1242 LDA abs */
      sc_v11_scheduler_code_access(r,0x009280u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9283u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x4212u))),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009283u:
    if(m==1u&&x==0u){ /* 2901 AND imm */
      sc_v11_scheduler_code_access(r,0x009283u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9285u;
      sc_v11_op_and(r,(uint16_t)(0x0001u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009285u:
    if(m==1u&&x==0u){ /* D0F9 BNE rel */
      sc_v11_scheduler_code_access(r,0x009285u,2u);
      r->open_bus=0xF9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9287u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x9280u;
      if(c->pc!=0x9287u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9287u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009287u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x009287u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9289u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009289u:
    if(m==0u&&x==0u){ /* A00400 LDY imm */
      sc_v11_scheduler_code_access(r,0x009289u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x928Cu;
      sc_v11_op_ldy(r,(uint16_t)(0x0004u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00928Cu:
    if(m==0u&&x==0u){ /* A20000 LDX imm */
      sc_v11_scheduler_code_access(r,0x00928Cu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x928Fu;
      sc_v11_op_ldx(r,(uint16_t)(0x0000u),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00928Fu:
    if(m==0u&&x==0u){ /* BD1842 LDA abs,x */
      sc_v11_scheduler_code_access(r,0x00928Fu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9292u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x4218u))),16u);
      if(0u==0u||(((0x4218u&0x00FFu)+(c->x&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009292u:
    if(m==0u&&x==0u){ /* 209B92 JSR abs */
      sc_v11_scheduler_code_access(r,0x009292u,3u);
      r->open_bus=0x92u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9295u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9294u))return 0;
      c->pc=0x929Bu;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009295u:
    if(m==0u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x009295u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9296u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009296u:
    if(m==0u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x009296u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9297u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009297u:
    if(m==0u&&x==0u){ /* 88 DEY imp */
      sc_v11_scheduler_code_access(r,0x009297u,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9298u;
      c->y=(uint16_t)((c->y+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009298u:
    if(m==0u&&x==0u){ /* D0F5 BNE rel */
      sc_v11_scheduler_code_access(r,0x009298u,2u);
      r->open_bus=0xF5u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x929Au;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x928Fu;
      if(c->pc!=0x929Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x929Au^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00929Au:
    if(m==0u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x00929Au,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x929Bu;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00929Bu:
    if(m==0u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x00929Bu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x929Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00929Du:
    if(m==0u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x00929Du,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x929Eu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00929Eu:
    if(m==0u&&x==0u){ /* 85BF STA dp */
      sc_v11_scheduler_code_access(r,0x00929Eu,2u);
      r->open_bus=0xBFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92A0u;
      {uint32_t a=sc_v11_ea_dp(r,0x00BFu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092A0u:
    if(m==0u&&x==0u){ /* 5D1B01 EOR abs,x */
      sc_v11_scheduler_code_access(r,0x0092A0u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92A3u;
      sc_v11_op_eor(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x011Bu))),16u);
      if(0u==0u||(((0x011Bu&0x00FFu)+(c->x&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092A3u:
    if(m==0u&&x==0u){ /* 25BF AND dp */
      sc_v11_scheduler_code_access(r,0x0092A3u,2u);
      r->open_bus=0xBFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92A5u;
      sc_v11_op_and(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00BFu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092A5u:
    if(m==0u&&x==0u){ /* 95C9 STA dp,x */
      sc_v11_scheduler_code_access(r,0x0092A5u,2u);
      r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92A7u;
      {uint32_t a=sc_v11_ea_dpx(r,0x00C9u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092A7u:
    if(m==0u&&x==0u){ /* 9D2301 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0092A7u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92AAu;
      {uint32_t a=sc_v11_ea_absx(r,0x0123u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092AAu:
    if(m==0u&&x==0u){ /* A5BF LDA dp */
      sc_v11_scheduler_code_access(r,0x0092AAu,2u);
      r->open_bus=0xBFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92ACu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00BFu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092ACu:
    if(m==0u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x0092ACu,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92ADu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->a))return 0;
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092ADu:
    if(m==0u&&x==0u){ /* AC3301 LDY abs */
      sc_v11_scheduler_code_access(r,0x0092ADu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92B0u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0133u))),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092B0u:
    if(m==0u&&x==0u){ /* BD1B01 LDA abs,x */
      sc_v11_scheduler_code_access(r,0x0092B0u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92B3u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x011Bu))),16u);
      if(0u==0u||(((0x011Bu&0x00FFu)+(c->x&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092B3u:
    if(m==0u&&x==0u){ /* C5BF CMP dp */
      sc_v11_scheduler_code_access(r,0x0092B3u,2u);
      r->open_bus=0xBFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92B5u;
      sc_v11_op_compare(r,c->a,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00BFu))),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092B5u:
    if(m==0u&&x==0u){ /* D00B BNE rel */
      sc_v11_scheduler_code_access(r,0x0092B5u,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92B7u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x92C2u;
      if(c->pc!=0x92B7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92B7u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092B7u:
    if(m==0u&&x==0u){ /* DE2B01 DEC abs,x */
      sc_v11_scheduler_code_access(r,0x0092B7u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92BAu;
      sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x012Bu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092BAu:
    if(m==0u&&x==0u){ /* D00A BNE rel */
      sc_v11_scheduler_code_access(r,0x0092BAu,2u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92BCu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x92C6u;
      if(c->pc!=0x92BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92BCu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092BCu:
    if(m==0u&&x==0u){ /* 9D2301 STA abs,x; Version 12 controller-input closure */
      sc_v11_scheduler_code_access(r,0x0092BCu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92BFu;
      {uint32_t a=sc_v11_ea_absx(r,0x0123u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092BFu:
    if(m==0u&&x==0u){ /* AC3501 LDY abs; Version 12 controller-input closure */
      sc_v11_scheduler_code_access(r,0x0092BFu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92C2u;
      sc_v11_op_ldy(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0135u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092C2u:
    if(m==0u&&x==0u){ /* 98 TYA imp; Version 12 controller-input closure */
      sc_v11_scheduler_code_access(r,0x0092C2u,1u);
      r->open_bus=0x98u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92C3u;
      sc_v11_op_lda(r,(uint16_t)c->y,16u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092C3u:
    if(m==0u&&x==0u){ /* 9D2B01 STA abs,x; Version 12 controller-input closure */
      sc_v11_scheduler_code_access(r,0x0092C3u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92C6u;
      {uint32_t a=sc_v11_ea_absx(r,0x012Bu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092C6u:
    if(m==0u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x0092C6u,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92C7u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092C7u:
    if(m==0u&&x==0u){ /* 9D1B01 STA abs,x */
      sc_v11_scheduler_code_access(r,0x0092C7u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92CAu;
      {uint32_t a=sc_v11_ea_absx(r,0x011Bu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092CAu:
    if(m==0u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x0092CAu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92CBu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0092CBu:
    if(m==0u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x0092CBu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x92CCu;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00930Du:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x00930Du,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x930Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00930Fu:
    if(m==1u&&x==0u){ /* 64B9 STZ dp */
      sc_v11_scheduler_code_access(r,0x00930Fu,2u);
      r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9311u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B9u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009311u:
    if(m==1u&&x==0u){ /* E6C7 INC dp */
      sc_v11_scheduler_code_access(r,0x009311u,2u);
      r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9313u;
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);

      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00C7u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009313u:
    if(m==1u&&x==0u){ /* A5B9 LDA dp */
      sc_v11_scheduler_code_access(r,0x009313u,2u);
      r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9315u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B9u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009315u:
    if(m==1u&&x==0u){ /* F0FA BEQ rel */
      sc_v11_scheduler_code_access(r,0x009315u,2u);
      r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9317u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x9311u;
      if(c->pc!=0x9317u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9317u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009317u:
    if(m==1u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x009317u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x9318u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0090F8u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x0090F8u,3u,0x92u,0x90FBu);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x90FAu)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009128u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x009128u,3u,0x92u,0x912Bu);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x912Au)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009175u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x009175u,3u,0x92u,0x9178u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9177u)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009191u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x009191u,3u,0x92u,0x9194u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9193u)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091A5u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x0091A5u,3u,0x92u,0x91A8u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x91A7u)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091D2u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x0091D2u,3u,0x92u,0x91D5u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x91D4u)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0091F8u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x0091F8u,3u,0x92u,0x91FBu);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x91FAu)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00920Cu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x00920Cu,3u,0x92u,0x920Fu);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x920Eu)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009254u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 20 6D 92 JSR $926D; Version 16 decompressor callsite batch */
      SC_STATIC_CONTEXT_BEGIN(0x009254u,3u,0x92u,0x9257u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9256u)) return 0;
      c->pc=0x926Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
