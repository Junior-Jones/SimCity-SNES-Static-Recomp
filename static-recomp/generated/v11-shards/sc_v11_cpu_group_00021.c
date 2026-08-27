/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_00021(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0086A4u:
    if(m==0u&&x==0u){ /* E220 SEP imm */
      sc_v11_scheduler_code_access(r,0x0086A4u,2u);
      r->open_bus=0x20u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86A6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086A6u:
    if(m==1u&&x==0u){ /* C210 REP imm */
      sc_v11_scheduler_code_access(r,0x0086A6u,2u);
      r->open_bus=0x10u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86A8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));
      sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086A8u:
    if(m==1u&&x==0u){ /* A2FC00 LDX imm */
      sc_v11_scheduler_code_access(r,0x0086A8u,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86ABu;
      sc_v11_op_ldx(r,(uint16_t)(0x00FCu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086ABu:
    if(m==1u&&x==0u){ /* A980 LDA imm */
      sc_v11_scheduler_code_access(r,0x0086ABu,2u);
      r->open_bus=0x80u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86ADu;
      sc_v11_op_lda(r,(uint16_t)(0x0080u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086ADu:
    if(m==1u&&x==0u){ /* 9F00207E STA long,x */
      sc_v11_scheduler_code_access(r,0x0086ADu,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86B1u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E2000u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086B1u:
    if(m==1u&&x==0u){ /* 9F00217E STA long,x */
      sc_v11_scheduler_code_access(r,0x0086B1u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86B5u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E2100u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086B5u:
    if(m==1u&&x==0u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x0086B5u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86B6u;
      c->x=(uint16_t)((c->x+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086B6u:
    if(m==1u&&x==0u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x0086B6u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86B7u;
      c->x=(uint16_t)((c->x+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086B7u:
    if(m==1u&&x==0u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x0086B7u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86B8u;
      c->x=(uint16_t)((c->x+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086B8u:
    if(m==1u&&x==0u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x0086B8u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86B9u;
      c->x=(uint16_t)((c->x+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086B9u:
    if(m==1u&&x==0u){ /* 10F2 BPL rel */
      sc_v11_scheduler_code_access(r,0x0086B9u,2u);
      r->open_bus=0xF2u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86BBu;
      if((c->p&SC_FLAG_N)==0u)c->pc=0x86ADu;
      if(c->pc!=0x86BBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86BBu^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086BBu:
    if(m==1u&&x==0u){ /* A21F00 LDX imm */
      sc_v11_scheduler_code_access(r,0x0086BBu,3u);
      r->open_bus=0x00u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86BEu;
      sc_v11_op_ldx(r,(uint16_t)(0x001Fu),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086BEu:
    if(m==1u&&x==0u){ /* A955 LDA imm */
      sc_v11_scheduler_code_access(r,0x0086BEu,2u);
      r->open_bus=0x55u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86C0u;
      sc_v11_op_lda(r,(uint16_t)(0x0055u),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086C0u:
    if(m==1u&&x==0u){ /* 9F00227E STA long,x */
      sc_v11_scheduler_code_access(r,0x0086C0u,4u);
      r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86C4u;
      {uint32_t a=sc_v11_ea_longx(r,0x7E2200u);sc_v11_bus_write8(r,a,(uint8_t)(c->a));}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086C4u:
    if(m==1u&&x==0u){ /* CA DEX imp */
      sc_v11_scheduler_code_access(r,0x0086C4u,1u);
      r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86C5u;
      c->x=(uint16_t)((c->x+(-1))&0xFFFFu);
      sc_v11_set_nz16(c,c->x);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086C5u:
    if(m==1u&&x==0u){ /* 10F9 BPL rel */
      sc_v11_scheduler_code_access(r,0x0086C5u,2u);
      r->open_bus=0xF9u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86C7u;
      if((c->p&SC_FLAG_N)==0u)c->pc=0x86C0u;
      if(c->pc!=0x86C7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86C7u^c->pc)&0xFF00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086C7u:
    if(m==1u&&x==0u){ /* 60 RTS imp */
      sc_v11_scheduler_code_access(r,0x0086C7u,1u);
      r->open_bus=0x60u;
      r->scheduler.cpu_instructions++; r->generated_callbacks++; r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;
      c->pc=0x86C8u;
      {uint16_t sc_v11_return_pc; sc_v11_scheduler_internal_cycle(r,2u); sc_v11_return_pc=sc_v11_pop16(r); sc_v11_scheduler_internal_cycle(r,1u); c->pc=(uint16_t)(sc_v11_return_pc+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008690u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* C2 10 REP #$10; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x008690u,2u,0x10u,0x8692u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008692u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* E2 20 SEP #$20; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x008692u,2u,0x20u,0x8694u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008694u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 00 00 LDX #$0000; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x008694u,3u,0x00u,0x8697u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008697u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A0 00 80 LDY #$8000; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x008697u,3u,0x80u,0x869Au);
      sc_v11_op_ldy(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00869Au:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 8E 16 21 STX $2116; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x00869Au,3u,0x21u,0x869Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00869Du:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 8E 18 21 STX $2118; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x00869Du,3u,0x21u,0x86A0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2118u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086A0u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 88 DEY; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x0086A0u,1u,0x88u,0x86A1u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086A1u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* D0 FA BNE $869D; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x0086A1u,2u,0xFAu,0x86A3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x869Du;}
      if(c->pc!=0x86A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0086A3u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 60 RTS; Version 16 main-loop static batch: vram-clear */
      SC_STATIC_CONTEXT_BEGIN(0x0086A3u,1u,0x60u,0x86A4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
