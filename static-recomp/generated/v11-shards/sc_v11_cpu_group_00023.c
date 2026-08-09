/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_00023(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x008CDDu:
    if(m==1u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008CDDu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8CDFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008CDFu:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x008CDFu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8CE1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008CE1u:
    if(m==1u&&x==0u){ /* A5B7 LDA dp */
      sc_v11_scheduler_code_access(r,0x008CE1u,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8CE3u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B7u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008CE3u:
    if(m==1u&&x==0u){ /* 2901 AND imm */
      sc_v11_scheduler_code_access(r,0x008CE3u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8CE5u;
      sc_v11_op_and(r,(uint16_t)(0x0001u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008CE5u:
    if(m==1u&&x==0u){ /* 8D0B42 STA abs */
      sc_v11_scheduler_code_access(r,0x008CE5u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8CE8u;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008CE8u:
    if(m==1u&&x==0u){ /* A5B7 LDA dp */
      sc_v11_scheduler_code_access(r,0x008CE8u,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8CEAu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B7u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008CEAu:
    if(m==1u&&x==0u){ /* 2902 AND imm */
      sc_v11_scheduler_code_access(r,0x008CEAu,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8CECu;
      sc_v11_op_and(r,(uint16_t)(0x0002u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008CECu:
    if(m==1u&&x==0u){ /* F027 BEQ rel */
      sc_v11_scheduler_code_access(r,0x008CECu,2u);
      r->open_bus=0x27u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8CEEu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x8D15u;
      if(c->pc!=0x8CEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CEEu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D15u:
    if(m==1u&&x==0u){ /* A901 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D15u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D17u;
      sc_v11_op_lda(r,(uint16_t)(0x0001u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D17u:
    if(m==1u&&x==0u){ /* 8D1043 STA abs */
      sc_v11_scheduler_code_access(r,0x008D17u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D1Au;
      {uint32_t a=sc_v11_ea_abs(r,0x4310u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D1Au:
    if(m==1u&&x==0u){ /* A97E LDA imm */
      sc_v11_scheduler_code_access(r,0x008D1Au,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D1Cu;
      sc_v11_op_lda(r,(uint16_t)(0x007Eu),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D1Cu:
    if(m==1u&&x==0u){ /* 8D1443 STA abs */
      sc_v11_scheduler_code_access(r,0x008D1Cu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D1Fu;
      {uint32_t a=sc_v11_ea_abs(r,0x4314u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D1Fu:
    if(m==1u&&x==0u){ /* A918 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D1Fu,2u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D21u;
      sc_v11_op_lda(r,(uint16_t)(0x0018u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D21u:
    if(m==1u&&x==0u){ /* 8D1143 STA abs */
      sc_v11_scheduler_code_access(r,0x008D21u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D24u;
      {uint32_t a=sc_v11_ea_abs(r,0x4311u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D24u:
    if(m==1u&&x==0u){ /* A5B7 LDA dp */
      sc_v11_scheduler_code_access(r,0x008D24u,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D26u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B7u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D26u:
    if(m==1u&&x==0u){ /* 4A LSR acc */
      sc_v11_scheduler_code_access(r,0x008D26u,1u);
      r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D27u;
      sc_v11_op_shift_accumulator(r,8u,1u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D27u:
    if(m==1u&&x==0u){ /* 4A LSR acc */
      sc_v11_scheduler_code_access(r,0x008D27u,1u);
      r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D28u;
      sc_v11_op_shift_accumulator(r,8u,1u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D28u:
    if(m==1u&&x==0u){ /* A20400 LDX imm */
      sc_v11_scheduler_code_access(r,0x008D28u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D2Bu;
      sc_v11_op_ldx(r,(uint16_t)(0x0004u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D2Bu:
    if(m==1u&&x==0u){ /* 4A LSR acc */
      sc_v11_scheduler_code_access(r,0x008D2Bu,1u);
      r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D2Cu;
      sc_v11_op_shift_accumulator(r,8u,1u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D2Cu:
    if(m==1u&&x==0u){ /* 9019 BCC rel */
      sc_v11_scheduler_code_access(r,0x008D2Cu,2u);
      r->open_bus=0x19u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D2Eu;
      if((c->p&SC_FLAG_C)==0u)c->pc=0x8D47u;
      if(c->pc!=0x8D2Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D2Eu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D47u:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x008D47u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D48u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D48u:
    if(m==1u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x008D48u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D49u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D49u:
    if(m==1u&&x==0u){ /* E01000 CPX imm */
      sc_v11_scheduler_code_access(r,0x008D49u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D4Cu;
      sc_v11_op_compare(r,c->x,(uint16_t)(0x0010u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D4Cu:
    if(m==1u&&x==0u){ /* D0DD BNE rel */
      sc_v11_scheduler_code_access(r,0x008D4Cu,2u);
      r->open_bus=0xDDu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D4Eu;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x8D2Bu;
      if(c->pc!=0x8D4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D4Eu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D4Eu:
    if(m==1u&&x==0u){ /* 64B7 STZ dp */
      sc_v11_scheduler_code_access(r,0x008D4Eu,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D50u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B7u);sc_v11_bus_write8(r,a,(uint8_t)(0u));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D50u:
    if(m==1u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x008D50u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D51u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D65u:
    if(m==1u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008D65u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D67u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D67u:
    if(m==1u&&x==0u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D67u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D69u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D69u:
    if(m==1u&&x==0u){ /* 8D0221 STA abs */
      sc_v11_scheduler_code_access(r,0x008D69u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D6Cu;
      {uint32_t a=sc_v11_ea_abs(r,0x2102u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D6Cu:
    if(m==1u&&x==0u){ /* 8D0321 STA abs */
      sc_v11_scheduler_code_access(r,0x008D6Cu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D6Fu;
      {uint32_t a=sc_v11_ea_abs(r,0x2103u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D6Fu:
    if(m==1u&&x==0u){ /* E230 SEP imm */
      sc_v11_scheduler_code_access(r,0x008D6Fu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D71u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D71u:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D71u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D73u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D73u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008D73u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D74u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D74u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008D74u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D75u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D75u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008D75u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D76u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D76u:
    if(m==1u&&x==1u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008D76u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D77u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D77u:
    if(m==1u&&x==1u){ /* AA TAX imp */
      sc_v11_scheduler_code_access(r,0x008D77u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D78u;
      c->x=(uint16_t)(c->a&0x00FFu);
      sc_v11_set_nz8(c,(uint8_t)c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D78u:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D78u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D7Au;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D7Au:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x */
      sc_v11_scheduler_code_access(r,0x008D7Au,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D7Du;
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D7Du:
    if(m==1u&&x==1u){ /* A904 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D7Du,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D7Fu;
      sc_v11_op_lda(r,(uint16_t)(0x0004u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D7Fu:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x */
      sc_v11_scheduler_code_access(r,0x008D7Fu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D82u;
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D82u:
    if(m==1u&&x==1u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D82u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D84u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D84u:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x */
      sc_v11_scheduler_code_access(r,0x008D84u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D87u;
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D87u:
    if(m==1u&&x==1u){ /* A920 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D87u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D89u;
      sc_v11_op_lda(r,(uint16_t)(0x0020u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D89u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x */
      sc_v11_scheduler_code_access(r,0x008D89u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D8Cu;
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D8Cu:
    if(m==1u&&x==1u){ /* A97E LDA imm */
      sc_v11_scheduler_code_access(r,0x008D8Cu,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D8Eu;
      sc_v11_op_lda(r,(uint16_t)(0x007Eu),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D8Eu:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x */
      sc_v11_scheduler_code_access(r,0x008D8Eu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D91u;
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D91u:
    if(m==1u&&x==1u){ /* A920 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D91u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D93u;
      sc_v11_op_lda(r,(uint16_t)(0x0020u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D93u:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x */
      sc_v11_scheduler_code_access(r,0x008D93u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D96u;
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D96u:
    if(m==1u&&x==1u){ /* A902 LDA imm */
      sc_v11_scheduler_code_access(r,0x008D96u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D98u;
      sc_v11_op_lda(r,(uint16_t)(0x0002u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D98u:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x */
      sc_v11_scheduler_code_access(r,0x008D98u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D9Bu;
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D9Bu:
    if(m==1u&&x==1u){ /* A5B7 LDA dp */
      sc_v11_scheduler_code_access(r,0x008D9Bu,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D9Du;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B7u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D9Du:
    if(m==1u&&x==1u){ /* 0901 ORA imm */
      sc_v11_scheduler_code_access(r,0x008D9Du,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D9Fu;
      sc_v11_op_ora(r,(uint16_t)(0x0001u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D9Fu:
    if(m==1u&&x==1u){ /* 85B7 STA dp */
      sc_v11_scheduler_code_access(r,0x008D9Fu,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8DA1u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B7u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DA1u:
    if(m==1u&&x==1u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x008DA1u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8DA2u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E43u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008E43u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E45u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E45u:
    if(m==1u&&x==0u){ /* A5B3 LDA dp */
      sc_v11_scheduler_code_access(r,0x008E45u,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E47u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D2Eu:
    if(m==1u&&x==0u){ /* 48 PHA imp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D2Eu,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D2Fu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D2Fu:
    if(m==1u&&x==0u){ /* BC4301 LDY abs,x; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D2Fu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D32u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0143u))),16u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D32u:
    if(m==1u&&x==0u){ /* 8c1621 STY abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D32u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D35u;
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,(uint16_t)c->y);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D35u:
    if(m==1u&&x==0u){ /* bc6301 LDY abs,x; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D35u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D38u;
      sc_v11_op_ldy(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0163u)),16u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D38u:
    if(m==1u&&x==0u){ /* 8c1243 STY abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D38u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D3Bu;
      {uint32_t a=sc_v11_ea_abs(r,0x4312u);sc_v11_bus_write16(r,a,(uint16_t)c->y);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D3Bu:
    if(m==1u&&x==0u){ /* bc8301 LDY abs,x; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D3Bu,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D3Eu;
      sc_v11_op_ldy(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0183u)),16u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D3Eu:
    if(m==1u&&x==0u){ /* 8c1543 STY abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D3Eu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D41u;
      {uint32_t a=sc_v11_ea_abs(r,0x4315u);sc_v11_bus_write16(r,a,(uint16_t)c->y);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D41u:
    if(m==1u&&x==0u){ /* a902 LDA imm; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D41u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D43u;
      sc_v11_op_lda(r,(uint16_t)0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D43u:
    if(m==1u&&x==0u){ /* 8d0b42 STA abs; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D43u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D46u;
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D46u:
    if(m==1u&&x==0u){ /* 68 PLA imp; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008D46u,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8D47u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E47u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x008E47u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E48u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E48u:
    if(m==1u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008E48u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E4Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E4Au:
    if(m==1u&&x==0u){ /* A5B3 LDA dp */
      sc_v11_scheduler_code_access(r,0x008E4Au,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E4Cu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u))),8u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E4Cu:
    if(m==1u&&x==0u){ /* 0980 ORA imm */
      sc_v11_scheduler_code_access(r,0x008E4Cu,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E4Eu;
      sc_v11_op_ora(r,(uint16_t)(0x0080u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E4Eu:
    if(m==1u&&x==0u){ /* 85B1 STA dp */
      sc_v11_scheduler_code_access(r,0x008E4Eu,2u);
      r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E50u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E50u:
    if(m==1u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008E50u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E52u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E52u:
    if(m==1u&&x==0u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x008E52u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E54u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E54u:
    if(m==1u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x008E54u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E55u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E55u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x008E55u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E57u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E57u:
    if(m==0u&&x==0u){ /* A90000 LDA imm */
      sc_v11_scheduler_code_access(r,0x008E57u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E5Au;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E5Au:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x008E5Au,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E5Cu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E5Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E5Cu:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008E5Cu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E5Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E5Eu:
    if(m==1u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x008E5Eu,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E5Fu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E5Fu:
    if(m==1u&&x==0u){ /* 855F STA dp */
      sc_v11_scheduler_code_access(r,0x008E5Fu,2u);
      r->open_bus=0x5Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E61u;
      {uint32_t a=sc_v11_ea_dp(r,0x005Fu);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E61u:
    if(m==1u&&x==0u){ /* 1A INC acc */
      sc_v11_scheduler_code_access(r,0x008E61u,1u);
      r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E62u;
      sc_v11_op_incdec_accumulator(r,8u,1);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E62u:
    if(m==1u&&x==0u){ /* C910 CMP imm */
      sc_v11_scheduler_code_access(r,0x008E62u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E64u;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x0010u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E64u:
    if(m==1u&&x==0u){ /* 90EE BCC rel */
      sc_v11_scheduler_code_access(r,0x008E64u,2u);
      r->open_bus=0xEEu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E66u;
      if((c->p&SC_FLAG_C)==0u)c->pc=0x8E54u;
      if(c->pc!=0x8E66u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E66u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E66u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x008E66u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E68u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E68u:
    if(m==0u&&x==0u){ /* A90000 LDA imm */
      sc_v11_scheduler_code_access(r,0x008E68u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E6Bu;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E6Bu:
    if(m==0u&&x==0u){ /* 0200 COP imm */
      sc_v11_scheduler_code_access(r,0x008E6Bu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E6Du;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E6Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E6Du:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008E6Du,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E6Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E6Fu:
    if(m==1u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x008E6Fu,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E70u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop8(r),8u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E70u:
    if(m==1u&&x==0u){ /* 85B3 STA dp */
      sc_v11_scheduler_code_access(r,0x008E70u,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E72u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B3u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E72u:
    if(m==1u&&x==0u){ /* 85B1 STA dp */
      sc_v11_scheduler_code_access(r,0x008E72u,2u);
      r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E74u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E74u:
    if(m==1u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x008E74u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8E75u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EA9u:
    if(m==0u&&x==0u){ /* C230 REP imm */
      sc_v11_scheduler_code_access(r,0x008EA9u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EABu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EABu:
    if(m==0u&&x==0u){ /* AD6102 LDA abs */
      sc_v11_scheduler_code_access(r,0x008EABu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EAEu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0261u))),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EAEu:
    if(m==0u&&x==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008EAEu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EAFu;
      sc_v11_op_shift_accumulator(r,16u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EAFu:
    if(m==0u&&x==0u){ /* A8 TAY imp */
      sc_v11_scheduler_code_access(r,0x008EAFu,1u);
      r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EB0u;
      c->y=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EB0u:
    if(m==0u&&x==0u){ /* B964A1 LDA abs,y */
      sc_v11_scheduler_code_access(r,0x008EB0u,3u);
      r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EB3u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA164u))),16u);
      if(0u==0u||(((0xA164u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EB3u:
    if(m==0u&&x==0u){ /* 48 PHA imp */
      sc_v11_scheduler_code_access(r,0x008EB3u,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EB4u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->a))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EB4u:
    if(m==0u&&x==0u){ /* A00000 LDY imm */
      sc_v11_scheduler_code_access(r,0x008EB4u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EB7u;
      sc_v11_op_ldy(r,(uint16_t)(0x0000u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EB7u:
    if(m==0u&&x==0u){ /* AE5302 LDX abs */
      sc_v11_scheduler_code_access(r,0x008EB7u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EBAu;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0253u))),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EBAu:
    if(m==0u&&x==0u){ /* A90800 LDA imm */
      sc_v11_scheduler_code_access(r,0x008EBAu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EBDu;
      sc_v11_op_lda(r,(uint16_t)(0x0008u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EBDu:
    if(m==0u&&x==0u){ /* 8D5102 STA abs */
      sc_v11_scheduler_code_access(r,0x008EBDu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EC0u;
      {uint32_t a=sc_v11_ea_abs(r,0x0251u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EC0u:
    if(m==0u&&x==0u){ /* B301 LDA (stk,S),Y */
      sc_v11_scheduler_code_access(r,0x008EC0u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EC2u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u))),16u);
      sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EC2u:
    if(m==0u&&x==0u){ /* 8D5B02 STA abs */
      sc_v11_scheduler_code_access(r,0x008EC2u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EC5u;
      {uint32_t a=sc_v11_ea_abs(r,0x025Bu);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EC5u:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x008EC5u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EC6u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EC6u:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x008EC6u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EC7u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EC7u:
    if(m==0u&&x==0u){ /* 8A TXA imp */
      sc_v11_scheduler_code_access(r,0x008EC7u,1u);
      r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EC8u;
      sc_v11_op_lda(r,(uint16_t)(c->x&0xFFFFu),16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EC8u:
    if(m==0u&&x==0u){ /* 4A LSR acc */
      sc_v11_scheduler_code_access(r,0x008EC8u,1u);
      r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EC9u;
      sc_v11_op_shift_accumulator(r,16u,1u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EC9u:
    if(m==0u&&x==0u){ /* 4A LSR acc */
      sc_v11_scheduler_code_access(r,0x008EC9u,1u);
      r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8ECAu;
      sc_v11_op_shift_accumulator(r,16u,1u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ECAu:
    if(m==0u&&x==0u){ /* 4A LSR acc */
      sc_v11_scheduler_code_access(r,0x008ECAu,1u);
      r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8ECBu;
      sc_v11_op_shift_accumulator(r,16u,1u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ECBu:
    if(m==0u&&x==0u){ /* 4A LSR acc */
      sc_v11_scheduler_code_access(r,0x008ECBu,1u);
      r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8ECCu;
      sc_v11_op_shift_accumulator(r,16u,1u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ECCu:
    if(m==0u&&x==0u){ /* 29FEFF AND imm */
      sc_v11_scheduler_code_access(r,0x008ECCu,3u);
      r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8ECFu;
      sc_v11_op_and(r,(uint16_t)(0xFFFEu),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ECFu:
    if(m==0u&&x==0u){ /* 8D5502 STA abs */
      sc_v11_scheduler_code_access(r,0x008ECFu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8ED2u;
      {uint32_t a=sc_v11_ea_abs(r,0x0255u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ED2u:
    if(m==0u&&x==0u){ /* 8A TXA imp */
      sc_v11_scheduler_code_access(r,0x008ED2u,1u);
      r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8ED3u;
      sc_v11_op_lda(r,(uint16_t)(c->x&0xFFFFu),16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ED3u:
    if(m==0u&&x==0u){ /* 4A LSR acc */
      sc_v11_scheduler_code_access(r,0x008ED3u,1u);
      r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8ED4u;
      sc_v11_op_shift_accumulator(r,16u,1u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ED4u:
    if(m==0u&&x==0u){ /* 290E00 AND imm */
      sc_v11_scheduler_code_access(r,0x008ED4u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8ED7u;
      sc_v11_op_and(r,(uint16_t)(0x000Eu),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ED7u:
    if(m==0u&&x==0u){ /* 8D5702 STA abs */
      sc_v11_scheduler_code_access(r,0x008ED7u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EDAu;
      {uint32_t a=sc_v11_ea_abs(r,0x0257u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EDAu:
    if(m==0u&&x==0u){ /* B301 LDA (stk,S),Y */
      sc_v11_scheduler_code_access(r,0x008EDAu,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EDCu;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u))),16u);
      sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EDCu:
    if(m==0u&&x==0u){ /* 29FF00 AND imm */
      sc_v11_scheduler_code_access(r,0x008EDCu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EDFu;
      sc_v11_op_and(r,(uint16_t)(0x00FFu),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EDFu:
    if(m==0u&&x==0u){ /* 4E5B02 LSR abs */
      sc_v11_scheduler_code_access(r,0x008EDFu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EE2u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x025Bu),16u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EE2u:
    if(m==0u&&x==0u){ /* 9003 BCC rel */
      sc_v11_scheduler_code_access(r,0x008EE2u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EE4u;
      if((c->p&SC_FLAG_C)==0u)c->pc=0x8EE7u;
      if(c->pc!=0x8EE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EE4u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EE4u:
    if(m==0u&&x==0u){ /* 090001 ORA imm */
      sc_v11_scheduler_code_access(r,0x008EE4u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EE7u;
      sc_v11_op_ora(r,(uint16_t)(0x0100u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EE7u:
    if(m==0u&&x==0u){ /* C90001 CMP imm */
      sc_v11_scheduler_code_access(r,0x008EE7u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EEAu;
      sc_v11_op_compare(r,c->a,(uint16_t)(0x0100u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EEAu:
    if(m==0u&&x==0u){ /* F061 BEQ rel */
      sc_v11_scheduler_code_access(r,0x008EEAu,2u);
      r->open_bus=0x61u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EECu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x8F4Du;
      if(c->pc!=0x8EECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EECu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EECu:
    if(m==0u&&x==0u){ /* 18 CLC imp */
      sc_v11_scheduler_code_access(r,0x008EECu,1u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EEDu;
      c->p=(uint8_t)(c->p & (uint8_t)~SC_FLAG_C);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EEDu:
    if(m==0u&&x==0u){ /* 6D5D02 ADC abs */
      sc_v11_scheduler_code_access(r,0x008EEDu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EF0u;
      sc_v11_op_adc(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x025Du))),16u);
      if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EF0u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008EF0u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EF2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EF2u:
    if(m==1u&&x==0u){ /* 9F00207E STA long,x */
      sc_v11_scheduler_code_access(r,0x008EF2u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EF6u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E2000u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EF6u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x008EF6u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EF8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EF8u:
    if(m==0u&&x==0u){ /* 5A PHY imp */
      sc_v11_scheduler_code_access(r,0x008EF8u,1u);
      r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EF9u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->y))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EF9u:
    if(m==0u&&x==0u){ /* DA PHX imp */
      sc_v11_scheduler_code_access(r,0x008EF9u,1u);
      r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EFAu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->x))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EFAu:
    if(m==0u&&x==0u){ /* AE5502 LDX abs */
      sc_v11_scheduler_code_access(r,0x008EFAu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8EFDu;
      sc_v11_op_ldx(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0255u))),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EFDu:
    if(m==0u&&x==0u){ /* AC5702 LDY abs */
      sc_v11_scheduler_code_access(r,0x008EFDu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F00u;
      sc_v11_op_ldy(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0257u))),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F00u:
    if(m==0u&&x==0u){ /* 290001 AND imm */
      sc_v11_scheduler_code_access(r,0x008F00u,3u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F03u;
      sc_v11_op_and(r,(uint16_t)(0x0100u),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F03u:
    if(m==0u&&x==0u){ /* 08 PHP imp */
      sc_v11_scheduler_code_access(r,0x008F03u,1u);
      r->open_bus=0x08u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F04u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push8(r,c->p))return 0;
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F04u:
    if(m==0u&&x==0u){ /* BF00227E LDA long,x */
      sc_v11_scheduler_code_access(r,0x008F04u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F08u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E2200u))),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F08u:
    if(m==0u&&x==0u){ /* 39728F AND abs,y */
      sc_v11_scheduler_code_access(r,0x008F08u,3u);
      r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F0Bu;
      sc_v11_op_and(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8F72u))),16u);
      if(0u==0u||(((0x8F72u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F0Bu:
    if(m==0u&&x==0u){ /* 28 PLP imp */
      sc_v11_scheduler_code_access(r,0x008F0Bu,1u);
      r->open_bus=0x28u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F0Cu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_unpack_p(c,sc_v11_pop8(r));
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F0Cu:
    if(m==0u&&x==0u){ /* F003 BEQ rel */
      sc_v11_scheduler_code_access(r,0x008F0Cu,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F0Eu;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x8F11u;
      if(c->pc!=0x8F0Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F0Eu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F0Eu:
    if(m==0u&&x==0u){ /* 19528F ORA abs,y; Version 12 exact continuation */
      sc_v11_scheduler_code_access(r,0x008F0Eu,3u);
      r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F11u;
      sc_v11_op_ora(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8F52u)),16u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F11u:
    if(m==0u&&x==0u){ /* 4E5B02 LSR abs */
      sc_v11_scheduler_code_access(r,0x008F11u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F14u;
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x025Bu),16u,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F14u:
    if(m==0u&&x==0u){ /* 9003 BCC rel */
      sc_v11_scheduler_code_access(r,0x008F14u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F16u;
      if((c->p&SC_FLAG_C)==0u)c->pc=0x8F19u;
      if(c->pc!=0x8F16u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F16u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F16u:
    if(m==0u&&x==0u){ /* 19628F ORA abs,y */
      sc_v11_scheduler_code_access(r,0x008F16u,3u);
      r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F19u;
      sc_v11_op_ora(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8F62u))),16u);
      if(0u==0u||(((0x8F62u&0x00FFu)+(c->y&0x00FFu))>0x00FFu))sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F19u:
    if(m==0u&&x==0u){ /* 9F00227E STA long,x */
      sc_v11_scheduler_code_access(r,0x008F19u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F1Du;
      {uint32_t a=sc_v11_ea_longx(r,0x7E2200u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F1Du:
    if(m==0u&&x==0u){ /* FA PLX imp */
      sc_v11_scheduler_code_access(r,0x008F1Du,1u);
      r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F1Eu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldx(r,sc_v11_pop16(r),16u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F1Eu:
    if(m==0u&&x==0u){ /* 7A PLY imp */
      sc_v11_scheduler_code_access(r,0x008F1Eu,1u);
      r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F1Fu;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldy(r,sc_v11_pop16(r),16u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F1Fu:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x008F1Fu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F20u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F20u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008F20u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F22u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F22u:
    if(m==1u&&x==0u){ /* A900 LDA imm */
      sc_v11_scheduler_code_access(r,0x008F22u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F24u;
      sc_v11_op_lda(r,(uint16_t)(0x0000u),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F24u:
    if(m==1u&&x==0u){ /* EB XBA imp */
      sc_v11_scheduler_code_access(r,0x008F24u,1u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F25u;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));
      sc_v11_set_nz8(c,(uint8_t)c->a);
      sc_v11_scheduler_idle_or_read(r); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F25u:
    if(m==1u&&x==0u){ /* B301 LDA (stk,S),Y */
      sc_v11_scheduler_code_access(r,0x008F25u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F27u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u))),8u);
      sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F27u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x008F27u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F29u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F29u:
    if(m==0u&&x==0u){ /* 18 CLC imp */
      sc_v11_scheduler_code_access(r,0x008F29u,1u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F2Au;
      c->p=(uint8_t)(c->p & (uint8_t)~SC_FLAG_C);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F2Au:
    if(m==0u&&x==0u){ /* 6D5F02 ADC abs */
      sc_v11_scheduler_code_access(r,0x008F2Au,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F2Du;
      sc_v11_op_adc(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x025Fu))),16u);
      if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F2Du:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x008F2Du,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F2Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F2Fu:
    if(m==1u&&x==0u){ /* 9F01207E STA long,x */
      sc_v11_scheduler_code_access(r,0x008F2Fu,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F33u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E2001u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F33u:
    if(m==1u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x008F33u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F34u;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F34u:
    if(m==1u&&x==0u){ /* C220 REP imm */
      sc_v11_scheduler_code_access(r,0x008F34u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F36u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F36u:
    if(m==0u&&x==0u){ /* B301 LDA (stk,S),Y */
      sc_v11_scheduler_code_access(r,0x008F36u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F38u;
      sc_v11_op_lda(r,(uint16_t)(sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u))),16u);
      sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F38u:
    if(m==0u&&x==0u){ /* 9F02207E STA long,x */
      sc_v11_scheduler_code_access(r,0x008F38u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F3Cu;
      {uint32_t a=sc_v11_ea_longx(r,0x7E2002u);sc_v11_bus_write16(r,a,(uint16_t)(c->a));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F3Cu:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x008F3Cu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F3Du;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F3Du:
    if(m==0u&&x==0u){ /* C8 INY imp */
      sc_v11_scheduler_code_access(r,0x008F3Du,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F3Eu;
      c->y=(uint16_t)((c->y+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F3Eu:
    if(m==0u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x008F3Eu,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F3Fu;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F3Fu:
    if(m==0u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x008F3Fu,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F40u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F40u:
    if(m==0u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x008F40u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F41u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F41u:
    if(m==0u&&x==0u){ /* E8 INX imp */
      sc_v11_scheduler_code_access(r,0x008F41u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F42u;
      c->x=(uint16_t)((c->x+(1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F42u:
    if(m==0u&&x==0u){ /* CE5102 DEC abs */
      sc_v11_scheduler_code_access(r,0x008F42u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F45u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0251u),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F45u:
    if(m==0u&&x==0u){ /* F003 BEQ rel */
      sc_v11_scheduler_code_access(r,0x008F45u,2u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F47u;
      if((c->p&SC_FLAG_Z)!=0u)c->pc=0x8F4Au;
      if(c->pc!=0x8F47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F47u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F47u:
    if(m==0u&&x==0u){ /* 4CC78E JMP abs */
      sc_v11_scheduler_code_access(r,0x008F47u,3u);
      r->open_bus=0x8Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F4Au;
      c->pc=0x8EC7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F4Au:
    if(m==0u&&x==0u){ /* 4CBA8E JMP abs */
      sc_v11_scheduler_code_access(r,0x008F4Au,3u);
      r->open_bus=0x8Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F4Du;
      c->pc=0x8EBAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F4Du:
    if(m==0u&&x==0u){ /* 8E5302 STX abs */
      sc_v11_scheduler_code_access(r,0x008F4Du,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F50u;
      {uint32_t a=sc_v11_ea_abs(r,0x0253u);sc_v11_bus_write16(r,a,(uint16_t)(c->x));}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F50u:
    if(m==0u&&x==0u){ /* 68 PLA imp */
      sc_v11_scheduler_code_access(r,0x008F50u,1u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F51u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_lda(r,sc_v11_pop16(r),16u);
            if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F51u:
    if(m==0u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x008F51u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F52u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F82u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F82u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F84u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F84u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F84u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F86u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F86u:
    if(m==1u&&x==0u){ /* A610 LDX dp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F86u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F88u;
      sc_v11_op_ldx(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0010u)),16u);
      if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F88u:
    if(m==1u&&x==0u){ /* BD6702 LDA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F88u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F8Bu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0267u)),8u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F8Bu:
    if(m==1u&&x==0u){ /* D03C BNE rel; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F8Bu,2u);
      r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F8Du;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x8FC9u;
      if(c->pc!=0x8F8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F8Du^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F8Du:
    if(m==1u&&x==0u){ /* DA PHX imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F8Du,1u);
      r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F8Eu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F8Eu:
    if(m==1u&&x==0u){ /* A900 LDA imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F8Eu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F90u;
      sc_v11_op_lda(r,(uint16_t)0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F90u:
    if(m==1u&&x==0u){ /* EB XBA imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F90u,1u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F91u;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));
      sc_v11_set_nz8(c,(uint8_t)c->a);
      sc_v11_scheduler_idle_or_read(r);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F91u:
    if(m==1u&&x==0u){ /* BD6302 LDA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F91u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F94u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0263u)),8u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F94u:
    if(m==1u&&x==0u){ /* 0A ASL acc; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F94u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F95u;
      sc_v11_op_shift_accumulator(r,8u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F95u:
    if(m==1u&&x==0u){ /* A8 TAY imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F95u,1u);
      r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F96u;
      sc_v11_op_ldy(r,(uint16_t)(c->a&0xFFFFu),16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F96u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F96u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F98u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F98u:
    if(m==0u&&x==0u){ /* B921A1 LDA abs,y; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F98u,3u);
      r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F9Bu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA121u)),16u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F9Bu:
    if(m==0u&&x==0u){ /* 48 PHA imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F9Bu,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F9Cu;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F9Cu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F9Cu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8F9Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008F9Eu:
    if(m==1u&&x==0u){ /* A900 LDA imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008F9Eu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FA0u;
      sc_v11_op_lda(r,(uint16_t)0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FA0u:
    if(m==1u&&x==0u){ /* EB XBA imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FA0u,1u);
      r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FA1u;
      c->a=(uint16_t)(((c->a&0x00FFu)<<8)|((c->a>>8)&0x00FFu));
      sc_v11_set_nz8(c,(uint8_t)c->a);
      sc_v11_scheduler_idle_or_read(r);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FA1u:
    if(m==1u&&x==0u){ /* BD6B02 LDA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FA1u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FA4u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x026Bu)),8u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FA4u:
    if(m==1u&&x==0u){ /* A8 TAY imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FA4u,1u);
      r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FA5u;
      sc_v11_op_ldy(r,(uint16_t)(c->a&0xFFFFu),16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FA5u:
    if(m==1u&&x==0u){ /* B301 LDA (stk,S),Y; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FA5u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FA7u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);
      sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FA7u:
    if(m==1u&&x==0u){ /* D005 BNE rel; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FA7u,2u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FA9u;
      if((c->p&SC_FLAG_Z)==0u)c->pc=0x8FAEu;
      if(c->pc!=0x8FA9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8FA9u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FA9u:
    if(m==1u&&x==0u){ /* 9E6B02 STZ abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FA9u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FACu;
      sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x026Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FACu:
    if(m==1u&&x==0u){ /* 80F3 BRA rel; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FACu,2u);
      r->open_bus=0xF3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FAEu;
      c->pc=0x8FA1u;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(c->emulation&&((0x8FAEu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FAEu:
    if(m==1u&&x==0u){ /* 9D6702 STA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FAEu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FB1u;
      sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0267u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FB1u:
    if(m==1u&&x==0u){ /* C8 INY imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FB1u,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FB2u;
      c->y=(uint16_t)(c->y+1u);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FB2u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FB2u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FB4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FB4u:
    if(m==0u&&x==0u){ /* 8A TXA imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FB4u,1u);
      r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FB5u;
      sc_v11_op_lda(r,(uint16_t)c->x,16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FB5u:
    if(m==0u&&x==0u){ /* 0A ASL acc; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FB5u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FB6u;
      sc_v11_op_shift_accumulator(r,16u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FB6u:
    if(m==0u&&x==0u){ /* AA TAX imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FB6u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FB7u;
      sc_v11_op_ldx(r,(uint16_t)c->a,16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FB7u:
    if(m==0u&&x==0u){ /* B301 LDA (stk,S),Y; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FB7u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FB9u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);
      sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FB9u:
    if(m==0u&&x==0u){ /* 29FF00 AND imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FB9u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FBCu;
      sc_v11_op_and(r,(uint16_t)0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FBCu:
    if(m==0u&&x==0u){ /* 9D6F02 STA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FBCu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FBFu;
      sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x026Fu),(uint16_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FBFu:
    if(m==0u&&x==0u){ /* C8 INY imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FBFu,1u);
      r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FC0u;
      c->y=(uint16_t)(c->y+1u);
      sc_v11_set_nz16(c,c->y);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FC0u:
    if(m==0u&&x==0u){ /* 98 TYA imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FC0u,1u);
      r->open_bus=0x98u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FC1u;
      sc_v11_op_lda(r,(uint16_t)c->y,16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FC1u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FC1u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FC3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FC3u:
    if(m==1u&&x==0u){ /* FA PLX imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FC3u,1u);
      r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FC4u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldx(r,sc_v11_pop16(r),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FC4u:
    if(m==1u&&x==0u){ /* FA PLX imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FC4u,1u);
      r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FC5u;
      sc_v11_scheduler_internal_cycle(r,2u);
      sc_v11_op_ldx(r,sc_v11_pop16(r),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FC5u:
    if(m==1u&&x==0u){ /* 98 TYA imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FC5u,1u);
      r->open_bus=0x98u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FC6u;
      sc_v11_op_lda(r,(uint16_t)c->y,8u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FC6u:
    if(m==1u&&x==0u){ /* 9D6B02 STA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FC6u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FC9u;
      sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x026Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FC9u:
    if(m==1u&&x==0u){ /* DE6702 DEC abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FC9u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FCCu;
      sc_v11_scheduler_internal_cycle(r,1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0267u),8u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FCCu:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FCCu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FCEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FCEu:
    if(m==0u&&x==0u){ /* 8A TXA imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FCEu,1u);
      r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FCFu;
      sc_v11_op_lda(r,(uint16_t)c->x,16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FCFu:
    if(m==0u&&x==0u){ /* 0A ASL acc; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FCFu,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FD0u;
      sc_v11_op_shift_accumulator(r,16u,0u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FD0u:
    if(m==0u&&x==0u){ /* AA TAX imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FD0u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FD1u;
      sc_v11_op_ldx(r,(uint16_t)c->a,16u);
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FD1u:
    if(m==0u&&x==0u){ /* BD7702 LDA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FD1u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FD4u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0277u)),16u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FD4u:
    if(m==0u&&x==0u){ /* 8D5D02 STA abs; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FD4u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FD7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),(uint16_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FD7u:
    if(m==0u&&x==0u){ /* BD7F02 LDA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FD7u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FDAu;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x027Fu)),16u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FDAu:
    if(m==0u&&x==0u){ /* 8D5F02 STA abs; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FDAu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FDDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),(uint16_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FDDu:
    if(m==0u&&x==0u){ /* BD6F02 LDA abs,x; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FDDu,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FE0u;
      sc_v11_op_lda(r,(uint16_t)sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x026Fu)),16u);
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FE0u:
    if(m==0u&&x==0u){ /* 8D6102 STA abs; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FE0u,3u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FE3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),(uint16_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FE3u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FE3u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FE5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FE5u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FE5u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FE8u;
      sc_v11_op_lda(r,(uint16_t)0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FE8u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FE8u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FEAu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8FEAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;
      c->p&=(uint8_t)~SC_FLAG_D;
      c->pbr=0u;
      c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008FEAu:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 12 COP #$09 closure */
      sc_v11_scheduler_code_access(r,0x008FEAu,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x8FEBu;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E75u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E75u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E77u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E77u:
    if(m==1u&&x==0u){ /* A5B3 LDA dp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E77u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E79u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E79u:
    if(m==1u&&x==0u){ /* 48 PHA imp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E79u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E7Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E7Au:
    if(m==1u&&x==0u){ /* E220 SEP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E7Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E7Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E7Cu:
    if(m==1u&&x==0u){ /* A5B3 LDA dp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E7Cu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E7Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E7Eu:
    if(m==1u&&x==0u){ /* 0980 ORA imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E7Eu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E80u;
      sc_v11_op_ora(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E80u:
    if(m==1u&&x==0u){ /* 85B1 STA dp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E80u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E82u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E82u:
    if(m==1u&&x==0u){ /* E220 SEP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E82u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E84u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E84u:
    if(m==1u&&x==0u){ /* A90F LDA imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E84u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E86u;
      sc_v11_op_lda(r,0x000Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E86u:
    if(m==1u&&x==0u){ /* 48 PHA imp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E86u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E87u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E87u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E87u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E89u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E89u:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E89u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E8Cu;
      sc_v11_op_lda(r,0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E8Cu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E8Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E8Eu;
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
  case 0x008E9Fu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E9Fu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8EA1u;
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
  case 0x008E8Eu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E8Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E90u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E90u:
    if(m==1u&&x==0u){ /* 68 PLA imp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E90u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E91u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_op_lda(r,sc_v11_pop8(r),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E91u:
    if(m==1u&&x==0u){ /* 855F STA dp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E91u,2u);r->open_bus=0x5Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E93u;
      {uint32_t a=sc_v11_ea_dp(r,0x005Fu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E93u:
    if(m==1u&&x==0u){ /* 3A DEC acc; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E93u,1u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E94u;
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E94u:
    if(m==1u&&x==0u){ /* 10F0 BPL rel; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E94u,2u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E96u;
      if((c->p&SC_FLAG_N)==0u)c->pc=0x8E86u;
      if(c->pc!=0x8E96u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E96u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E96u:
    if(m==1u&&x==0u){ /* A98F LDA imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E96u,2u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E98u;
      sc_v11_op_lda(r,0x008Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E98u:
    if(m==1u&&x==0u){ /* 855F STA dp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E98u,2u);r->open_bus=0x5Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E9Au;
      {uint32_t a=sc_v11_ea_dp(r,0x005Fu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E9Au:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E9Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E9Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008E9Cu:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008E9Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8E9Fu;
      sc_v11_op_lda(r,0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EA1u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008EA1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8EA3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EA3u:
    if(m==1u&&x==0u){ /* 68 PLA imp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008EA3u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8EA4u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_op_lda(r,sc_v11_pop8(r),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EA4u:
    if(m==1u&&x==0u){ /* 85B3 STA dp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008EA4u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8EA6u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B3u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EA6u:
    if(m==1u&&x==0u){ /* 85B1 STA dp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008EA6u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8EA8u;
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008EA8u:
    if(m==1u&&x==0u){ /* 60 RTS imp; Version 13 reverse-fade COP service */
      sc_v11_scheduler_code_access(r,0x008EA8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8EA9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
