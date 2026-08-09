/* AUTO-GENERATED from ROM-derived Version 01/02 analyses. */
/* Direct PC/E/M/X dispatch; no runtime opcode fetch or decoder. */
#include "sc_v11_runtime.h"

int sc_v11_bootstrap_step(SCV11Runtime *r){
  SCCpuState *c; uint32_t address; uint8_t m,x,e;
  if(!r||r->route_failed)return 0;
  if(!sc_v11_before_instruction(r))return 0;
  c=&r->machine.cpu; address=((uint32_t)c->pbr<<16)|c->pc;
  m=(uint8_t)((c->p&SC_FLAG_M)!=0u); x=(uint8_t)((c->p&SC_FLAG_X)!=0u); e=c->emulation;
  r->current_instruction_address=address;
  sc_v11_trace_cpu_instruction(r,address);
  switch(address){
  case 0x008000u:
    if(m==1u&&x==1u&&e==1u){ /* 18 CLC impl */
      sc_v11_scheduler_code_access(r,0x008000u,1u);
      r->open_bus=0x18u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8001u;
      c->p&=(uint8_t)~SC_FLAG_C; sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008001u:
    if(m==1u&&x==1u&&e==1u){ /* FB XCE impl */
      sc_v11_scheduler_code_access(r,0x008001u,1u);
      r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8002u;
      {uint8_t old_c=(uint8_t)((c->p&SC_FLAG_C)!=0u); if(c->emulation)c->p|=SC_FLAG_C;else c->p&=(uint8_t)~SC_FLAG_C; c->emulation=old_c; if(c->emulation){c->p|=(SC_FLAG_M|SC_FLAG_X);c->x&=0x00FFu;c->y&=0x00FFu;c->sp=(uint16_t)(0x0100u|(c->sp&0x00FFu));}}
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008002u:
    if(m==1u&&x==1u&&e==0u){ /* 78 SEI impl */
      sc_v11_scheduler_code_access(r,0x008002u,1u);
      r->open_bus=0x78u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8003u;
      c->p|=SC_FLAG_I; sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008003u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 REP imm8 */
      sc_v11_scheduler_code_access(r,0x008003u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8005u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&~0x10u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008005u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 SEP imm8 */
      sc_v11_scheduler_code_access(r,0x008005u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8007u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008007u:
    if(m==1u&&x==0u&&e==0u){ /* A2 FF 1F LDX imm_x */
      sc_v11_scheduler_code_access(r,0x008007u,3u);
      r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x800Au;
      sc_v11_op_ldx(r,0x1FFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00800Au:
    if(m==1u&&x==0u&&e==0u){ /* 9A TXS impl */
      sc_v11_scheduler_code_access(r,0x00800Au,1u);
      r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x800Bu;
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->x&0x00FFu)):c->x; sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00800Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x00800Bu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x800Du;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00800Du:
    if(m==1u&&x==0u&&e==0u){ /* 48 PHA impl */
      sc_v11_scheduler_code_access(r,0x00800Du,1u);
      r->open_bus=0x48u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x800Eu;
            sc_v11_scheduler_internal_cycle(r,1u);
            if(!sc_v11_push8(r,(uint8_t)c->a)){return 0;}       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00800Eu:
    if(m==1u&&x==0u&&e==0u){ /* AB PLB impl */
      sc_v11_scheduler_code_access(r,0x00800Eu,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x800Fu;
            sc_v11_scheduler_internal_cycle(r,2u);
            c->dbr=sc_v11_pop8(r); sc_v11_set_nz8(c,c->dbr);       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00800Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 8F LDA imm_m */
      sc_v11_scheduler_code_access(r,0x00800Fu,2u);
      r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8011u;
      sc_v11_op_lda(r,0x008Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008011u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 21 STA abs */
      sc_v11_scheduler_code_access(r,0x008011u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8014u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2100u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008014u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008014u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8016u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008016u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 STA dp */
      sc_v11_scheduler_code_access(r,0x008016u,2u);
      r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8018u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008018u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 42 STA abs */
      sc_v11_scheduler_code_access(r,0x008018u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x801Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00801Bu:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 20 LDY imm_x */
      sc_v11_scheduler_code_access(r,0x00801Bu,3u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x801Eu;
      sc_v11_op_ldy(r,0x2000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00801Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 LDX imm_x */
      sc_v11_scheduler_code_access(r,0x00801Eu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8021u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008021u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008021u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8023u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008023u:
    if(m==1u&&x==0u&&e==0u){ /* 95 00 STA dp_x */
      sc_v11_scheduler_code_access(r,0x008023u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8025u;
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x00u),(uint8_t)c->a); sc_v11_scheduler_internal_cycle(r,1u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008025u:
    if(m==1u&&x==0u&&e==0u){ /* E8 INX impl */
      sc_v11_scheduler_code_access(r,0x008025u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8026u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu); sc_v11_set_nz16(c,c->x); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008026u:
    if(m==1u&&x==0u&&e==0u){ /* 88 DEY impl */
      sc_v11_scheduler_code_access(r,0x008026u,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8027u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu); sc_v11_set_nz16(c,c->y); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008027u:
    if(m==1u&&x==0u&&e==0u){ /* D0 FA BNE rel8 */
      sc_v11_scheduler_code_access(r,0x008027u,2u);
      r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8029u;
      if((c->p&SC_FLAG_Z)==0u){c->pbr=0x00u;c->pc=0x8023u;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8029u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008029u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 60 LDY imm_x */
      sc_v11_scheduler_code_access(r,0x008029u,3u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x802Cu;
      sc_v11_op_ldy(r,0x6000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00802Cu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 LDX imm_x */
      sc_v11_scheduler_code_access(r,0x00802Cu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x802Fu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00802Fu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E STA long_x */
      sc_v11_scheduler_code_access(r,0x00802Fu,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8033u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008033u:
    if(m==1u&&x==0u&&e==0u){ /* E8 INX impl */
      sc_v11_scheduler_code_access(r,0x008033u,1u);
      r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8034u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu); sc_v11_set_nz16(c,c->x); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008034u:
    if(m==1u&&x==0u&&e==0u){ /* 88 DEY impl */
      sc_v11_scheduler_code_access(r,0x008034u,1u);
      r->open_bus=0x88u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8035u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu); sc_v11_set_nz16(c,c->y); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008035u:
    if(m==1u&&x==0u&&e==0u){ /* D0 F8 BNE rel8 */
      sc_v11_scheduler_code_access(r,0x008035u,2u);
      r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8037u;
      if((c->p&SC_FLAG_Z)==0u){c->pbr=0x00u;c->pc=0x802Fu;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8037u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008037u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 REP imm8 */
      sc_v11_scheduler_code_access(r,0x008037u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8039u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&~0x20u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008039u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008039u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x803Cu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00803Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 65 04 STA abs */
      sc_v11_scheduler_code_access(r,0x00803Cu,3u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x803Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0465u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00803Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP imm8 */
      sc_v11_scheduler_code_access(r,0x00803Fu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8041u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008041u:
    if(m==1u&&x==0u&&e==0u){ /* EE 25 0B INC abs */
      sc_v11_scheduler_code_access(r,0x008041u,3u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8044u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B25u),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008044u:
    if(m==1u&&x==0u&&e==0u){ /* A9 81 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008044u,2u);
      r->open_bus=0x81u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8046u;
      sc_v11_op_lda(r,0x0081u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008046u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B3 STA dp */
      sc_v11_scheduler_code_access(r,0x008046u,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8048u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008048u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 STA dp */
      sc_v11_scheduler_code_access(r,0x008048u,2u);
      r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x804Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00804Au:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 42 STA abs */
      sc_v11_scheduler_code_access(r,0x00804Au,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x804Du;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00804Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 12 LDA dp */
      sc_v11_scheduler_code_access(r,0x00804Du,2u);
      r->open_bus=0x12u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x804Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00804Fu:
    if(m==1u&&x==0u&&e==0u){ /* D0 0B BNE rel8 */
      sc_v11_scheduler_code_access(r,0x00804Fu,2u);
      r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8051u;
      if((c->p&SC_FLAG_Z)==0u){c->pbr=0x00u;c->pc=0x805Cu;sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8051u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008051u:
    if(m==1u&&x==0u&&e==0u){ /* 64 B7 STZ dp */
      sc_v11_scheduler_code_access(r,0x008051u,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8053u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),0u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008053u:
    if(m==1u&&x==0u&&e==0u){ /* 20 65 8D JSR abs */
      sc_v11_scheduler_code_access(r,0x008053u,3u);
      r->open_bus=0x8Du;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8056u;
            sc_v11_scheduler_internal_cycle(r,1u);
            if(!sc_v11_push16(r,0x8055u)){return 0;} c->pc=0x8D65u;       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008056u:
    if(m==1u&&x==1u&&e==0u){ /* 22 83 D2 03 JSL long */
      sc_v11_scheduler_code_access(r,0x008056u,4u);
      r->open_bus=0x03u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x805Au;
            sc_v11_scheduler_internal_cycle(r,1u);
            if(!sc_v11_push8(r,0x00u)||!sc_v11_push16(r,0x8059u)){return 0;} c->pbr=0x03u;c->pc=0xD283u;       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D65u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 SEP imm8 */
      sc_v11_scheduler_code_access(r,0x008D65u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D67u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D67u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D67u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D69u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D69u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 21 STA abs */
      sc_v11_scheduler_code_access(r,0x008D69u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D6Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2102u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D6Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 03 21 STA abs */
      sc_v11_scheduler_code_access(r,0x008D6Cu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D6Fu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2103u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D6Fu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 SEP imm8 */
      sc_v11_scheduler_code_access(r,0x008D6Fu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D71u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D71u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D71u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D73u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D73u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008D73u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D74u;
      sc_v11_op_shift_accumulator(r,8u,0u); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D74u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008D74u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D75u;
      sc_v11_op_shift_accumulator(r,8u,0u); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D75u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008D75u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D76u;
      sc_v11_op_shift_accumulator(r,8u,0u); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D76u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x008D76u,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D77u;
      sc_v11_op_shift_accumulator(r,8u,0u); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D77u:
    if(m==1u&&x==1u&&e==0u){ /* AA TAX impl */
      sc_v11_scheduler_code_access(r,0x008D77u,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D78u;
      c->x=(uint16_t)(c->a&0x00FFu);
      sc_v11_set_nz8(c,(uint8_t)c->x); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D78u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D78u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D7Au;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D7Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 STA abs_x */
      sc_v11_scheduler_code_access(r,0x008D7Au,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D7Du;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D7Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 04 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D7Du,2u);
      r->open_bus=0x04u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D7Fu;
      sc_v11_op_lda(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D7Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 STA abs_x */
      sc_v11_scheduler_code_access(r,0x008D7Fu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D82u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D82u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D82u,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D84u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D84u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 STA abs_x */
      sc_v11_scheduler_code_access(r,0x008D84u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D87u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D87u:
    if(m==1u&&x==1u&&e==0u){ /* A9 20 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D87u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D89u;
      sc_v11_op_lda(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D89u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 STA abs_x */
      sc_v11_scheduler_code_access(r,0x008D89u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D8Cu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D8Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D8Cu,2u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D8Eu;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D8Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 STA abs_x */
      sc_v11_scheduler_code_access(r,0x008D8Eu,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D91u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D91u:
    if(m==1u&&x==1u&&e==0u){ /* A9 20 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D91u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D93u;
      sc_v11_op_lda(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D93u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 STA abs_x */
      sc_v11_scheduler_code_access(r,0x008D93u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D96u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D96u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x008D96u,2u);
      r->open_bus=0x02u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D98u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D98u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 STA abs_x */
      sc_v11_scheduler_code_access(r,0x008D98u,3u);
      r->open_bus=0x43u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D9Bu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D9Bu:
    if(m==1u&&x==1u&&e==0u){ /* A5 B7 LDA dp */
      sc_v11_scheduler_code_access(r,0x008D9Bu,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D9Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB7u)),8u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D9Du:
    if(m==1u&&x==1u&&e==0u){ /* 09 01 ORA imm_m */
      sc_v11_scheduler_code_access(r,0x008D9Du,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8D9Fu;
      sc_v11_op_ora(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008D9Fu:
    if(m==1u&&x==1u&&e==0u){ /* 85 B7 STA dp */
      sc_v11_scheduler_code_access(r,0x008D9Fu,2u);
      r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8DA1u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DA1u:
    if(m==1u&&x==1u&&e==0u){ /* 60 RTS impl */
      sc_v11_scheduler_code_access(r,0x008DA1u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x00u; c->pc=0x8DA2u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D283u:
    if(m==1u&&x==1u&&e==0u){ /* 4B PHK impl */
      sc_v11_scheduler_code_access(r,0x03D283u,1u);
      r->open_bus=0x4Bu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD284u;
            sc_v11_scheduler_internal_cycle(r,1u);
            if(!sc_v11_push8(r,c->pbr)){return 0;}       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D284u:
    if(m==1u&&x==1u&&e==0u){ /* AB PLB impl */
      sc_v11_scheduler_code_access(r,0x03D284u,1u);
      r->open_bus=0xABu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD285u;
            sc_v11_scheduler_internal_cycle(r,2u);
            c->dbr=sc_v11_pop8(r); sc_v11_set_nz8(c,c->dbr);       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D285u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 REP imm8 */
      sc_v11_scheduler_code_access(r,0x03D285u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD287u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&~0x20u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D287u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 REP imm8 */
      sc_v11_scheduler_code_access(r,0x03D287u,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD289u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&~0x30u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D289u:
    if(m==0u&&x==0u&&e==0u){ /* A5 14 LDA dp */
      sc_v11_scheduler_code_access(r,0x03D289u,2u);
      r->open_bus=0x14u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD28Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x14u)),16u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D28Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 REP imm8 */
      sc_v11_scheduler_code_access(r,0x03D28Bu,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD28Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&~0x10u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D28Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL acc */
      sc_v11_scheduler_code_access(r,0x03D28Du,1u);
      r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD28Eu;
      sc_v11_op_shift_accumulator(r,16u,0u); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D28Eu:
    if(m==0u&&x==0u&&e==0u){ /* AA TAX impl */
      sc_v11_scheduler_code_access(r,0x03D28Eu,1u);
      r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD28Fu;
      c->x=(uint16_t)(c->a&0xFFFFu);
      sc_v11_set_nz16(c,c->x); sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D28Fu:
    if(m==0u&&x==0u&&e==0u){ /* FC 55 D2 JSR abs_x_ind */
      sc_v11_scheduler_code_access(r,0x03D28Fu,3u);
      r->open_bus=0xD2u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD292u;
            sc_v11_scheduler_internal_cycle(r,1u);
            if(!sc_v11_push16(r,0xD291u)){return 0;} {uint16_t p=(uint16_t)(0xD255u+c->x); uint32_t a=((uint32_t)c->pbr<<16)|p; c->pc=sc_v11_bus_read16(r,a);}       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03D2B8u:
    if(m==0u&&x==0u&&e==0u){ /* 22 80 90 05 JSL long */
      sc_v11_scheduler_code_access(r,0x03D2B8u,4u);
      r->open_bus=0x05u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x03u; c->pc=0xD2BCu;
            sc_v11_scheduler_internal_cycle(r,1u);
            if(!sc_v11_push8(r,0x03u)||!sc_v11_push16(r,0xD2BBu)){return 0;} c->pbr=0x05u;c->pc=0x9080u;       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059080u:
    if(m==0u&&x==0u&&e==0u){ /* 20 6F 95 JSR abs */
      sc_v11_scheduler_code_access(r,0x059080u,3u);
      r->open_bus=0x95u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9083u;
            sc_v11_scheduler_internal_cycle(r,1u);
            if(!sc_v11_push16(r,0x9082u)){return 0;} c->pc=0x956Fu;       if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059083u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 SEP imm8 */
      sc_v11_scheduler_code_access(r,0x059083u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9085u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059085u:
    if(m==1u&&x==1u&&e==0u){ /* A9 81 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x059085u,2u);
      r->open_bus=0x81u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9087u;
      sc_v11_op_lda(r,0x0081u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059087u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B3 STA dp */
      sc_v11_scheduler_code_access(r,0x059087u,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9089u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059089u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 SEP imm8 */
      sc_v11_scheduler_code_access(r,0x059089u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x908Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05908Bu:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 LDA dp */
      sc_v11_scheduler_code_access(r,0x05908Bu,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x908Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05908Du:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F AND imm_m */
      sc_v11_scheduler_code_access(r,0x05908Du,2u);
      r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x908Fu;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05908Fu:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 STA dp */
      sc_v11_scheduler_code_access(r,0x05908Fu,2u);
      r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9091u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059091u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 REP imm8 */
      sc_v11_scheduler_code_access(r,0x059091u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9093u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&~0x20u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059093u:
    if(m==0u&&x==1u&&e==0u){ /* A9 01 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x059093u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9096u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05956Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 SEP imm8 */
      sc_v11_scheduler_code_access(r,0x05956Fu,2u);
      r->open_bus=0x30u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9571u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u)); sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059571u:
    if(m==1u&&x==1u&&e==0u){ /* A9 8F LDA imm_m */
      sc_v11_scheduler_code_access(r,0x059571u,2u);
      r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9573u;
      sc_v11_op_lda(r,0x008Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059573u:
    if(m==1u&&x==1u&&e==0u){ /* 85 5F STA dp */
      sc_v11_scheduler_code_access(r,0x059573u,2u);
      r->open_bus=0x5Fu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9575u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x5Fu),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059575u:
    if(m==1u&&x==1u&&e==0u){ /* 64 60 STZ dp */
      sc_v11_scheduler_code_access(r,0x059575u,2u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9577u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),0u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059577u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 02 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x059577u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x957Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2102u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05957Au:
    if(m==1u&&x==1u&&e==0u){ /* 9C 03 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x05957Au,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x957Du;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2103u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05957Du:
    if(m==1u&&x==1u&&e==0u){ /* 9C 06 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x05957Du,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9580u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2106u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059580u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x059580u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9582u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059582u:
    if(m==1u&&x==1u&&e==0u){ /* 64 61 STZ dp */
      sc_v11_scheduler_code_access(r,0x059582u,2u);
      r->open_bus=0x61u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9584u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),0u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059584u:
    if(m==1u&&x==1u&&e==0u){ /* A9 35 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x059584u,2u);
      r->open_bus=0x35u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9586u;
      sc_v11_op_lda(r,0x0035u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059586u:
    if(m==1u&&x==1u&&e==0u){ /* 85 62 STA dp */
      sc_v11_scheduler_code_access(r,0x059586u,2u);
      r->open_bus=0x62u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9588u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059588u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 07 21 STA abs */
      sc_v11_scheduler_code_access(r,0x059588u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x958Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2107u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05958Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 20 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x05958Bu,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x958Du;
      sc_v11_op_lda(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05958Du:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 21 STA abs */
      sc_v11_scheduler_code_access(r,0x05958Du,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9590u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059590u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 13 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x059590u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9593u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2113u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059593u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 13 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x059593u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9596u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2113u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059596u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 14 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x059596u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9599u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2114u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059599u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 14 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x059599u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x959Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2114u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05959Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x05959Cu,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x959Eu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x05959Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 15 21 STA abs */
      sc_v11_scheduler_code_access(r,0x05959Eu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95A1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2115u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595A1u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 23 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595A1u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95A4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2123u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595A4u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 24 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595A4u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95A7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2124u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595A7u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 25 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595A7u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95AAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2125u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595AAu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2A 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595AAu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95ADu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Au),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595ADu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2B 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595ADu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95B0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595B0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x0595B0u,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95B2u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595B2u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2C 21 STA abs */
      sc_v11_scheduler_code_access(r,0x0595B2u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95B5u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595B5u:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 STA dp */
      sc_v11_scheduler_code_access(r,0x0595B5u,2u);
      r->open_bus=0x68u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95B7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595B7u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2D 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595B7u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95BAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595BAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x0595BAu,2u);
      r->open_bus=0x01u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95BCu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595BCu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 STA abs */
      sc_v11_scheduler_code_access(r,0x0595BCu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95BFu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595BFu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 27 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595BFu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95C2u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595C2u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 28 21 STA abs */
      sc_v11_scheduler_code_access(r,0x0595C2u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95C5u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2128u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595C5u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 29 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595C5u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95C8u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2129u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595C8u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 30 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595C8u,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95CBu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2130u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595CBu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 31 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595CBu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95CEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2131u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595CEu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 33 21 STZ abs */
      sc_v11_scheduler_code_access(r,0x0595CEu,3u);
      r->open_bus=0x21u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95D1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2133u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595D1u:
    if(m==1u&&x==1u&&e==0u){ /* 64 B1 STZ dp */
      sc_v11_scheduler_code_access(r,0x0595D1u,2u);
      r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95D3u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),0u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595D3u:
    if(m==1u&&x==1u&&e==0u){ /* 64 B3 STZ dp */
      sc_v11_scheduler_code_access(r,0x0595D3u,2u);
      r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95D5u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),0u); if((c->d&0x00FFu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595D5u:
    if(m==1u&&x==1u&&e==0u){ /* A9 FF LDA imm_m */
      sc_v11_scheduler_code_access(r,0x0595D5u,2u);
      r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95D7u;
      sc_v11_op_lda(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595D7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 01 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595D7u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95DAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4201u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595DAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x0595DAu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95DCu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595DCu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 02 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595DCu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95DFu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595DFu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 03 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595DFu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95E2u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595E2u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 04 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595E2u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95E5u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4204u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595E5u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 05 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595E5u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95E8u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4205u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595E8u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 06 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595E8u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95EBu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4206u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595EBu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 07 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595EBu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95EEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4207u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595EEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 08 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595EEu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95F1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4208u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595F1u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 09 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595F1u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95F4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4209u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595F4u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0A 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595F4u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95F7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595F7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595F7u,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95FAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595FAu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0C 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595FAu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95FDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595FDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 LDA imm_m */
      sc_v11_scheduler_code_access(r,0x0595FDu,2u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x95FFu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0595FFu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0D 42 STA abs */
      sc_v11_scheduler_code_access(r,0x0595FFu,3u);
      r->open_bus=0x42u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9602u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x059602u:
    if(m==1u&&x==1u&&e==0u){ /* 60 RTS impl */
      sc_v11_scheduler_code_access(r,0x059602u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pbr=0x05u; c->pc=0x9603u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return sc_v11_fail(r,address,"unknown reset/bootstrap PC/E/M/X static context");
}
