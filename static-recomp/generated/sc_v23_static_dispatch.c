/* AUTO-GENERATED Version 23 exact-PC/E/M/X route; no opcode decoder. */
#include "sc_v11_runtime.h"
int sc_v24_static_cpu_step(SCV11Runtime*,uint32_t,uint8_t,uint8_t,uint8_t);

int sc_v23_static_cpu_step(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x008076u:
    if(m==0u&&x==0u&&e==0u){ /* 22 C8 C6 01 JSL $01:C6C8; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008076u,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x807Au;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8079u))return 0;
      c->pbr=0x01u;c->pc=0xC6C8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00807Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 1C 96 JSR $961C; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00807Au,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x807Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x807Cu))return 0;c->pc=0x961Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00807Du:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00807Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x807Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00807Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 80 00 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00807Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8082u;
      sc_v11_op_lda(r,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008082u:
    if(m==0u&&x==1u&&e==0u){ /* 8D BF 02 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008082u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8085u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02BFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008085u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 SEP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008085u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8087u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008087u:
    if(m==1u&&x==1u&&e==0u){ /* AD 95 01 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008087u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x808Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0195u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00808Au:
    if(m==1u&&x==1u&&e==0u){ /* 29 08 AND; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00808Au,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x808Cu;
      sc_v11_op_and(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00808Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 BEQ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00808Cu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x808Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8092u;}
      if(c->pc!=0x808Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x808Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00808Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00808Eu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8090u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008090u:
    if(m==1u&&x==1u&&e==0u){ /* 80 02 BRA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008090u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8092u;
      if(1){c->pc=0x8094u;}
      if(c->pc!=0x8092u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8092u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008092u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008092u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8094u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008094u:
    if(m==1u&&x==1u&&e==0u){ /* 85 04 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008094u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8096u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008096u:
    if(m==1u&&x==1u&&e==0u){ /* A9 81 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008096u,2u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8098u;
      sc_v11_op_lda(r,0x0081u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008098u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008098u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x809Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00809Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 B3 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00809Au,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x809Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00809Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 00 42 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00809Cu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x809Fu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00809Fu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00809Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80A1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080A1u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0080A1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80A4u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080A4u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 COP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0080A4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80A6u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x80A6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080A6u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0080A6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80A8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080A8u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0080A8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80ABu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080ABu:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 COP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0080ABu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80ADu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x80ADu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080ADu:
    if(m==0u&&x==1u&&e==0u){ /* 22 07 89 01 JSL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0080ADu,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B1u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x80B0u))return 0;
      c->pbr=0x01u;c->pc=0x8907u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080B1u:
    if(m==0u&&x==1u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0080B1u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B2u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DA6u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 SEP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DA6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DA8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DA8u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DA8u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DAAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DAAu:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DAAu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DACu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DACu:
    if(m==1u&&x==0u&&e==0u){ /* 29 02 AND; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DACu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DAEu;
      sc_v11_op_and(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DAEu:
    if(m==1u&&x==0u&&e==0u){ /* F0 28 BEQ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DAEu,2u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DB0u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8DD8u;}
      if(c->pc!=0x8DB0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DB0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DB0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DB0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DB2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DB2u:
    if(m==0u&&x==0u&&e==0u){ /* A2 40 24 LDX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DB2u,3u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DB5u;
      sc_v11_op_ldx(r,0x2440u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DB5u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 65 01 STX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DB5u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DB8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0165u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DB8u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 LDX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DB8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DBBu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DBBu:
    if(m==0u&&x==0u&&e==0u){ /* 8E 45 01 STX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DBBu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DBEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0145u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DBEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 22 00 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DBEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DC1u;
      sc_v11_op_lda(r,0x0022u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DC1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 75 01 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DC1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DC4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0175u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DC4u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 02 LDX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DC4u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DC7u;
      sc_v11_op_ldx(r,0x0200u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DC7u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 85 01 STX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DC7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DCAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0185u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DCAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 B7 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DCAu,2u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DCCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xB7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DCCu:
    if(m==0u&&x==0u&&e==0u){ /* 09 02 00 ORA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DCCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DCFu;
      sc_v11_op_ora(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DCFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 B7 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DCFu,2u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DD1u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xB7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DD1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 BB LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DD1u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DD3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBBu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DD3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FD FF AND; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DD3u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DD6u;
      sc_v11_op_and(r,0xFFFDu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DD6u:
    if(m==0u&&x==0u&&e==0u){ /* 85 BB STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DD6u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DD8u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008DD8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DD8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DD9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x008DD8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8DD9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094D9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094D9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94DBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094DBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094DBu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094DDu:
    if(m==1u&&x==0u&&e==0u){ /* AD 4B 0B LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094DDu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E0u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B4Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E0u:
    if(m==1u&&x==0u&&e==0u){ /* F0 F2 BEQ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094E0u,2u);r->open_bus=0xF2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E2u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x94D4u;}
      if(c->pc!=0x94E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 3A LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094E2u,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x3Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E4u:
    if(m==1u&&x==0u&&e==0u){ /* F0 15 BEQ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094E4u,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E6u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x94FBu;}
      if(c->pc!=0x94E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E6u:
    if(m==1u&&x==0u&&e==0u){ /* AD 4D 0B LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094E6u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B4Du)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E9u:
    if(m==1u&&x==0u&&e==0u){ /* C9 02 CMP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094E9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94EBu;
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094EBu:
    if(m==1u&&x==0u&&e==0u){ /* F0 0C BEQ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094EBu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94EDu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x94F9u;}
      if(c->pc!=0x94EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094EDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094EDu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94EFu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094EFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4D 0B STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094EFu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94F2u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B4Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094F2u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094F2u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94F4u;
      sc_v11_op_lda(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094F4u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4F 0B STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094F4u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94F7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B4Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094F7u:
    if(m==1u&&x==0u&&e==0u){ /* 80 02 BRA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094F7u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94F9u;
      if(1){c->pc=0x94FBu;}
      if(c->pc!=0x94F9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94F9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094F9u:
    if(m==1u&&x==0u&&e==0u){ /* 64 3A STZ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094F9u,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94FBu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x3Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094FBu:
    if(m==1u&&x==0u&&e==0u){ /* 4B PHK; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094FBu,1u);r->open_bus=0x4Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94FCu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094FCu:
    if(m==1u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094FCu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94FDu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094FDu:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0B LDY; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0094FDu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9500u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B4Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009500u:
    if(m==1u&&x==0u&&e==0u){ /* B9 0E 96 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009500u,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9503u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x960Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009503u:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009503u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9505u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009505u:
    if(m==1u&&x==0u&&e==0u){ /* B9 0F 96 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009505u,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9508u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x960Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009508u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7C STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009508u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x950Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00950Au:
    if(m==1u&&x==0u&&e==0u){ /* B9 13 96 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00950Au,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x950Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9613u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00950Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 7A STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00950Du,2u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x950Fu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00950Fu:
    if(m==1u&&x==0u&&e==0u){ /* B9 14 96 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00950Fu,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9512u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9614u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009512u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7D STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009512u,2u);r->open_bus=0x7Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9514u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009514u:
    if(m==1u&&x==0u&&e==0u){ /* A9 05 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009514u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9516u;
      sc_v11_op_lda(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009516u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7B STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009516u,2u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9518u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009518u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7E STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009518u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x951Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00951Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00951Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x951Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00951Cu:
    if(m==0u&&x==0u&&e==0u){ /* A0 20 00 LDY; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00951Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x951Fu;
      sc_v11_op_ldy(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00951Fu:
    if(m==0u&&x==0u&&e==0u){ /* AE 4F 0B LDX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00951Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9522u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B4Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009522u:
    if(m==0u&&x==0u&&e==0u){ /* E0 FF 00 CPX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009522u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9525u;
      sc_v11_op_compare(r,c->x,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009525u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 BNE; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009525u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9527u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x952Cu;}
      if(c->pc!=0x9527u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9527u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009527u:
    if(m==0u&&x==0u&&e==0u){ /* B7 7C LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009527u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9529u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009529u:
    if(m==0u&&x==0u&&e==0u){ /* 4C C1 95 JMP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009529u,3u);r->open_bus=0x95u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x952Cu;
      c->pc=0x95C1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00952Cu:
    if(m==0u&&x==0u&&e==0u){ /* B7 79 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00952Cu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x952Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00952Eu:
    if(m==0u&&x==0u&&e==0u){ /* D7 7C CMP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00952Eu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9530u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009530u:
    if(m==0u&&x==0u&&e==0u){ /* F0 F7 BEQ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009530u,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9532u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9529u;}
      if(c->pc!=0x9532u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9532u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009532u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009532u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9534u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009534u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009534u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9535u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009535u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009535u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9536u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009536u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009536u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9537u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009537u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009537u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9538u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009538u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009538u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9539u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009539u:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009539u,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00953Bu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Cu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00953Cu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Du;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00953Du,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Eu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00953Eu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Fu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00953Fu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9540u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009540u:
    if(m==0u&&x==0u&&e==0u){ /* 85 85 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009540u,2u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9542u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x85u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009542u:
    if(m==0u&&x==0u&&e==0u){ /* B7 7C LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009542u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9544u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009544u:
    if(m==0u&&x==0u&&e==0u){ /* 85 80 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009544u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9546u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x80u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009546u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009546u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9547u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009547u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009547u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9548u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009548u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009548u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9549u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009549u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009549u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00954Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Bu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 83 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00954Bu,2u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x83u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00954Du,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Eu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00954Eu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Fu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00954Fu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9550u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009550u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009550u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9551u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009551u:
    if(m==0u&&x==0u&&e==0u){ /* 4A LSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009551u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9552u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009552u:
    if(m==0u&&x==0u&&e==0u){ /* 85 86 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009552u,2u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9554u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x86u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009554u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 SEP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009554u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9556u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009556u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 LDX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009556u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9558u;
      sc_v11_op_ldx(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009558u:
    if(m==1u&&x==1u&&e==0u){ /* DA PHX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009558u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9559u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009559u:
    if(m==1u&&x==1u&&e==0u){ /* AD 4F 0B LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009559u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x955Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B4Fu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00955Cu:
    if(m==1u&&x==1u&&e==0u){ /* EB XBA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00955Cu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x955Du;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00955Du:
    if(m==1u&&x==1u&&e==0u){ /* B5 7F LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00955Du,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x955Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00955Fu:
    if(m==1u&&x==1u&&e==0u){ /* 29 1F AND; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00955Fu,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9561u;
      sc_v11_op_and(r,0x001Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009561u:
    if(m==1u&&x==1u&&e==0u){ /* 95 7F STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009561u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9563u;
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009563u:
    if(m==1u&&x==1u&&e==0u){ /* B5 80 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009563u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9565u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x80u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009565u:
    if(m==1u&&x==1u&&e==0u){ /* 29 1F AND; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009565u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9567u;
      sc_v11_op_and(r,0x001Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009567u:
    if(m==1u&&x==1u&&e==0u){ /* 95 80 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009567u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9569u;
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x80u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009569u:
    if(m==1u&&x==1u&&e==0u){ /* 38 SEC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009569u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x956Au;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00956Au:
    if(m==1u&&x==1u&&e==0u){ /* F5 7F SBC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00956Au,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x956Cu;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00956Cu:
    if(m==1u&&x==1u&&e==0u){ /* B0 08 BCS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00956Cu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x956Eu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9576u;}
      if(c->pc!=0x956Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x956Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00956Eu:
    if(m==1u&&x==1u&&e==0u){ /* 49 FF EOR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00956Eu,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9570u;
      sc_v11_op_eor(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009570u:
    if(m==1u&&x==1u&&e==0u){ /* 1A INC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009570u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9571u;
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009571u:
    if(m==1u&&x==1u&&e==0u){ /* EB XBA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009571u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9572u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009572u:
    if(m==1u&&x==1u&&e==0u){ /* 49 FF EOR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009572u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9574u;
      sc_v11_op_eor(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009574u:
    if(m==1u&&x==1u&&e==0u){ /* EB XBA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009574u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9575u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009575u:
    if(m==1u&&x==1u&&e==0u){ /* E8 INX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009575u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9576u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009576u:
    if(m==1u&&x==1u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009576u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9577u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009577u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009577u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9579u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009579u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F AND; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009579u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x957Bu;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00957Bu:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00957Bu,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x957Du;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00957Du:
    if(m==1u&&x==1u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00957Du,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x957Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00957Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 02 42 00 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00957Eu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9582u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009582u:
    if(m==1u&&x==1u&&e==0u){ /* EB XBA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009582u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9583u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009583u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 03 42 00 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009583u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9587u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009587u:
    if(m==1u&&x==1u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009587u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9588u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009588u:
    if(m==1u&&x==1u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009588u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9589u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009589u:
    if(m==1u&&x==1u&&e==0u){ /* EA NOP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009589u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x958Au;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00958Au:
    if(m==1u&&x==1u&&e==0u){ /* AF 17 42 00 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00958Au,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x958Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00958Eu:
    if(m==1u&&x==1u&&e==0u){ /* EB XBA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00958Eu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x958Fu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00958Fu:
    if(m==1u&&x==1u&&e==0u){ /* AF 16 42 00 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00958Fu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9593u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009593u:
    if(m==1u&&x==1u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009593u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9594u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009594u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009594u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9596u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009596u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009596u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9598u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009598u:
    if(m==1u&&x==1u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009598u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9599u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009599u:
    if(m==1u&&x==1u&&e==0u){ /* EB XBA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009599u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x959Au;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00959Au:
    if(m==1u&&x==1u&&e==0u){ /* 18 CLC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00959Au,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x959Bu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00959Bu:
    if(m==1u&&x==1u&&e==0u){ /* 75 7F ADC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00959Bu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x959Du;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00959Du:
    if(m==1u&&x==1u&&e==0u){ /* 29 1F AND; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00959Du,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x959Fu;
      sc_v11_op_and(r,0x001Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00959Fu:
    if(m==1u&&x==1u&&e==0u){ /* FA PLX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00959Fu,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A0u:
    if(m==1u&&x==1u&&e==0u){ /* 95 7F STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095A0u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A2u;
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A2u:
    if(m==1u&&x==1u&&e==0u){ /* E8 INX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095A2u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A3u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A3u:
    if(m==1u&&x==1u&&e==0u){ /* E8 INX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095A3u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A4u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A4u:
    if(m==1u&&x==1u&&e==0u){ /* E8 INX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095A4u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A5u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A5u:
    if(m==1u&&x==1u&&e==0u){ /* E0 09 CPX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095A5u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A7u;
      sc_v11_op_compare(r,c->x,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A7u:
    if(m==1u&&x==1u&&e==0u){ /* D0 AF BNE; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095A7u,2u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9558u;}
      if(c->pc!=0x95A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A9u:
    if(m==1u&&x==1u&&e==0u){ /* 64 80 STZ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095A9u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95ABu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x80u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095ABu:
    if(m==1u&&x==1u&&e==0u){ /* 64 83 STZ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095ABu,2u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95ADu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x83u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095ADu:
    if(m==1u&&x==1u&&e==0u){ /* 64 86 STZ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095ADu,2u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95AFu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x86u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095AFu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095AFu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 85 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095B1u,2u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x85u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095B3u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B4u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B4u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095B4u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B5u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B5u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095B5u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B6u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095B6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B7u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095B7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B8u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B8u:
    if(m==0u&&x==0u&&e==0u){ /* 05 82 ORA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095B8u,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BAu;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x82u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095BAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BBu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BBu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095BBu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BCu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BCu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095BCu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BDu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095BDu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BEu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095BEu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BFu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BFu:
    if(m==0u&&x==0u&&e==0u){ /* 05 7F ORA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095BFu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C1u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C1u:
    if(m==0u&&x==0u&&e==0u){ /* BB TYX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095C1u,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C2u;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C2u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 24 7E STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095C2u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C6u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2440u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C6u:
    if(m==0u&&x==0u&&e==0u){ /* C8 INY; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095C6u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C7u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C7u:
    if(m==0u&&x==0u&&e==0u){ /* C8 INY; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095C7u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C8u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C8u:
    if(m==0u&&x==0u&&e==0u){ /* C0 C0 00 CPY; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095C8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95CBu;
      sc_v11_op_compare(r,c->y,0x00C0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095CBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 BNE; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095CBu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95CDu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x95D3u;}
      if(c->pc!=0x95CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095CDu:
    if(m==0u&&x==0u&&e==0u){ /* 98 TYA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095CDu,1u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95CEu;
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095CEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 CLC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095CEu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95CFu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095CFu:
    if(m==0u&&x==0u&&e==0u){ /* 69 20 00 ADC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095CFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95D2u;
      sc_v11_op_adc(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095D2u:
    if(m==0u&&x==0u&&e==0u){ /* A8 TAY; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095D2u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95D3u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095D3u:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 01 CPY; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095D3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95D6u;
      sc_v11_op_compare(r,c->y,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095D6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 BEQ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095D6u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95D8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x95DBu;}
      if(c->pc!=0x95D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095D8u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 1F 95 JMP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095D8u,3u);r->open_bus=0x95u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95DBu;
      c->pc=0x951Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095DBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 4F 0B LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095DBu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95DEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B4Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095DEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 CLC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095DEu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95DFu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095DFu:
    if(m==0u&&x==0u&&e==0u){ /* 69 05 00 ADC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095DFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95E2u;
      sc_v11_op_adc(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095E2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 01 CMP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095E2u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95E5u;
      sc_v11_op_compare(r,c->a,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095E5u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 BCC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095E5u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95E7u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x95EAu;}
      if(c->pc!=0x95E7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95E7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095E7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 4B 0B STZ; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095E7u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95EAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095EAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4F 0B STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095EAu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95EDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095EDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095EDu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95EFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095EFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 SEP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095EFu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F1u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095F1u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F3u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F AND; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095F3u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F5u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F5u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095F5u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F7u:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095F7u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F9u:
    if(m==1u&&x==0u&&e==0u){ /* 09 02 ORA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095F9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95FBu;
      sc_v11_op_ora(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095FBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095FBu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95FDu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095FDu:
    if(m==1u&&x==0u&&e==0u){ /* 20 A6 8D JSR; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0095FDu,3u);r->open_bus=0x8Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9600u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95FFu))return 0;c->pc=0x8DA6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009600u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009600u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9602u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 SEP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009600u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9602u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009602u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 LDA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009602u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9604u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009604u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ORA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009604u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9606u;
      sc_v11_op_ora(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009606u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 STA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009606u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9608u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009608u:
    if(m==1u&&x==0u&&e==0u){ /* F4 00 00 PEA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009608u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x960Bu;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00960Bu:
    if(m==1u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00960Bu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x960Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00960Cu:
    if(m==1u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00960Cu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x960Du;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00960Du:
    if(m==1u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00960Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x960Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00961Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00961Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x961Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00961Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00961Eu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9620u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009620u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 80 LDX #$8000; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009620u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9623u;
      sc_v11_op_ldx(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009623u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 24 LDY #$2440; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009623u,3u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9626u;
      sc_v11_op_ldy(r,0x2440u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009626u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE 00 LDA #$00FE; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009626u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9629u;
      sc_v11_op_lda(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009629u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 MVN $05,$7E; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009629u,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x962Cu;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x9629u;sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00962Cu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 LDX #$0000; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00962Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x962Fu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00962Fu:
    if(m==0u&&x==0u&&e==0u){ /* DA PHX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00962Fu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9630u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009630u:
    if(m==0u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009630u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9631u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009631u:
    if(m==0u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009631u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9632u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009632u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 PEA $0000; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009632u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9635u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009635u:
    if(m==0u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009635u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9636u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009636u:
    if(m==0u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009636u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9637u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009637u:
    if(m==0u&&x==0u&&e==0u){ /* AE 55 0B LDX $0B55; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009637u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x963Au;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00963Au:
    if(m==0u&&x==0u&&e==0u){ /* CA DEX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00963Au,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x963Bu;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00963Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF AE 96 00 LDA $0096AE,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00963Bu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x963Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0096AEu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00963Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 AND #$00FF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00963Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9642u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009642u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4D 0B STA $0B4D; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009642u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9645u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009645u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 LDA #$0001; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009645u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9648u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009648u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4B 0B STA $0B4B; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009648u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x964Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00964Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 LDA #$00FF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00964Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x964Eu;
      sc_v11_op_lda(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00964Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4F 0B STA $0B4F; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00964Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9651u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009651u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D9 94 JSR $94D9; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009651u,3u);r->open_bus=0x94u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9654u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9653u))return 0;c->pc=0x94D9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009654u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009654u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9656u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 REP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009654u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9656u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009656u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 4B 0B STZ $0B4B; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009656u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9659u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009659u:
    if(m==0u&&x==0u&&e==0u){ /* 64 BB STZ $BB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009659u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x965Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00965Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00965Bu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x965Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00965Du:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 8B LDX #$8B00; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00965Du,3u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9660u;
      sc_v11_op_ldx(r,0x8B00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009660u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 25 LDY #$2540; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009660u,3u);r->open_bus=0x25u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9663u;
      sc_v11_op_ldy(r,0x2540u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009663u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE 00 LDA #$00FE; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009663u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9666u;
      sc_v11_op_lda(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009666u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 MVN $05,$7E; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009666u,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9669u;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x9666u;sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009669u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 LDX #$0000; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009669u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x966Cu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00966Cu:
    if(m==0u&&x==0u&&e==0u){ /* DA PHX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00966Cu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x966Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00966Du:
    if(m==0u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00966Du,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x966Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00966Eu:
    if(m==0u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00966Eu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x966Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00966Fu:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 PEA $0000; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00966Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9672u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009672u:
    if(m==0u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009672u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9673u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009673u:
    if(m==0u&&x==0u&&e==0u){ /* AB PLB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009673u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9674u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009674u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 SEP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009674u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9676u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009676u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 LDA #$01; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009676u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9678u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009678u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009678u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9679u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009679u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009679u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Au;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00967Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Bu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00967Bu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Cu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Cu:
    if(m==1u&&x==1u&&e==0u){ /* AA TAX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00967Cu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Du;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 LDA #$00; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00967Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Fu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 STA $4300,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00967Fu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9682u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009682u:
    if(m==1u&&x==1u&&e==0u){ /* A9 22 LDA #$22; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009682u,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9684u;
      sc_v11_op_lda(r,0x0022u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009684u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 STA $4301,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009684u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9687u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009687u:
    if(m==1u&&x==1u&&e==0u){ /* A9 40 LDA #$40; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009687u,2u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9689u;
      sc_v11_op_lda(r,0x0040u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009689u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 STA $4302,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009689u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x968Cu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00968Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 24 LDA #$24; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00968Cu,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x968Eu;
      sc_v11_op_lda(r,0x0024u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00968Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 STA $4303,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00968Eu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9691u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009691u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E LDA #$7E; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009691u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9693u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009693u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 STA $4304,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009693u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9696u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009696u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 LDA #$00; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009696u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9698u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009698u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 STA $4305,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x009698u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x969Bu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00969Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 LDA #$02; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00969Bu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x969Du;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00969Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 STA $4306,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00969Du,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A0u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 LDA #$01; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0096A0u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A2u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A2u:
    if(m==1u&&x==1u&&e==0u){ /* A2 01 LDX #$01; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0096A2u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A4u;
      sc_v11_op_ldx(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A4u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 BEQ $96AA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0096A4u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A6u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x96AAu;}
      if(c->pc!=0x96A6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96A6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0096A6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A7u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A7u:
    if(m==1u&&x==1u&&e==0u){ /* CA DEX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0096A7u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A8u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A8u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC BNE $96A6; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0096A8u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96AAu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x96A6u;}
      if(c->pc!=0x96AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096AAu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 STA $420B; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0096AAu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96ADu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096ADu:
    if(m==1u&&x==1u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x0096ADu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96AEu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA75u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA75u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA77u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA75u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA77u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA75u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA77u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA75u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA77u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA77u:
    if(m==0u&&x==0u&&e==0u){ /* AE 27 04 LDX $0427; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA77u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA7Au;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0427u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA7Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 CB LDA $CB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA7Au,2u);r->open_bus=0xCBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA7Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xCBu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA7Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 27 BEQ $DAA5; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA7Cu,2u);r->open_bus=0x27u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA7Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDAA5u;}
      if(c->pc!=0xDA7Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA7Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA7Eu:
    if(m==0u&&x==0u&&e==0u){ /* DD 55 DA CMP $DA55,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA7Eu,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA81u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xDA55u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA81u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1F BNE $DAA2; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA81u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA83u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDAA2u;}
      if(c->pc!=0xDA83u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA83u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA83u:
    if(m==0u&&x==0u&&e==0u){ /* E8 INX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA83u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA84u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA84u:
    if(m==0u&&x==0u&&e==0u){ /* E8 INX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA84u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA85u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA85u:
    if(m==0u&&x==0u&&e==0u){ /* E0 20 00 CPX #$0020; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA85u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA88u;
      sc_v11_op_compare(r,c->x,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA88u:
    if(m==0u&&x==0u&&e==0u){ /* F0 04 BEQ $DA8E; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA88u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA8Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDA8Eu;}
      if(c->pc!=0xDA8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA8Au:
    if(m==0u&&x==0u&&e==0u){ /* 8E 27 04 STX $0427; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA8Au,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA8Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0427u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA8Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA8Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA8Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA8Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA8Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA90u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA90u:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 LDA $0425; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA90u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA93u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA93u:
    if(m==1u&&x==0u&&e==0u){ /* 49 80 EOR #$80; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA93u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA95u;
      sc_v11_op_eor(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA95u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 25 04 STA $0425; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA95u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA98u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0425u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA98u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 09 00 70 STA $700009; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA98u,4u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA9Cu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x700009u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA9Cu:
    if(m==1u&&x==0u&&e==0u){ /* 22 4F E5 03 JSL $03:E54F; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DA9Cu,4u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA0u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA9Fu))return 0;
      c->pbr=0x03u;c->pc=0xE54Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DAA0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 REP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DAA0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 REP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DAA0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DAA2u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 27 04 STZ $0427; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DAA2u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0427u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DAA5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x00DAA5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDAA6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6C8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CC C6 JSR $C6CC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6C8u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6CBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC6CAu))return 0;c->pc=0xC6CCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6CBu:
    if(m==1u&&x==0u&&e==0u){ /* 6B RTL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6CBu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6CCu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6CCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6CCu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6CEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6CEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1D 00 LDA #$001D; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6CEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D1u;
      sc_v11_op_lda(r,0x001Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6D1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B1 01 STA $01B1; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6D1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01B1u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6D4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 LDA #$001F; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6D4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D7u;
      sc_v11_op_lda(r,0x001Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6D7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D AF 01 STA $01AF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6D7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01AFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6DAu:
    if(m==0u&&x==0u&&e==0u){ /* AD B1 01 LDA $01B1; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6DAu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DDu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6DDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6DDu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6DFu:
    if(m==1u&&x==0u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6DFu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E0u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 LDA $B3; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6E0u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E2u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F AND #$7F; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6E2u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E4u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E4u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 STA $B1; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6E4u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E6u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E6u:
    if(m==1u&&x==0u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6E6u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E7u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E7u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 STA $004202; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6E7u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6EBu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6EBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 20 LDA #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6EBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6EDu;
      sc_v11_op_lda(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6EDu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 STA $004203; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6EDu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F1u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F1u:
    if(m==1u&&x==0u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6F1u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F2u:
    if(m==1u&&x==0u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6F2u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F3u:
    if(m==1u&&x==0u&&e==0u){ /* EA NOP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6F3u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F4u;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F4u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 LDA $004217; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6F4u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F8u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F8u:
    if(m==1u&&x==0u&&e==0u){ /* EB XBA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6F8u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F9u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F9u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 LDA $004216; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6F9u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6FDu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6FDu:
    if(m==1u&&x==0u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6FDu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6FEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6FEu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 LDA $B3; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C6FEu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC700u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C700u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 STA $B1; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C700u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC702u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C702u:
    if(m==1u&&x==0u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C702u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC703u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C703u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 REP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C703u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC705u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C705u:
    if(m==0u&&x==0u&&e==0u){ /* 18 CLC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C705u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC706u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C706u:
    if(m==0u&&x==0u&&e==0u){ /* 6D AF 01 ADC $01AF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C706u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC709u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01AFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C709u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C709u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC70Au;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C70Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D BB 01 STA $01BB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C70Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC70Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C70Du:
    if(m==0u&&x==0u&&e==0u){ /* AD AF 01 LDA $01AF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C70Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC710u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01AFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C710u:
    if(m==0u&&x==0u&&e==0u){ /* 18 CLC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C710u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC711u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C711u:
    if(m==0u&&x==0u&&e==0u){ /* 6D BD 01 ADC $01BD; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C711u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC714u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C714u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 01 STA $01D3; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C714u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC717u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C717u:
    if(m==0u&&x==0u&&e==0u){ /* AD B1 01 LDA $01B1; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C717u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC71Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C71Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 CLC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C71Au,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC71Bu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C71Bu:
    if(m==0u&&x==0u&&e==0u){ /* 6D BF 01 ADC $01BF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C71Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC71Eu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C71Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 01 STA $01D5; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C71Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC721u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C721u:
    if(m==0u&&x==0u&&e==0u){ /* 20 72 C7 JSR $C772; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C721u,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC724u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC723u))return 0;c->pc=0xC772u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C724u:
    if(m==0u&&x==0u&&e==0u){ /* AE BB 01 LDX $01BB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C724u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC727u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C727u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3D 01 LDA $013D; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C727u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC72Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C72Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E STA $7E2840,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C72Au,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC72Eu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C72Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 3F 01 LDA $013F; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C72Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC731u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C731u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 30 7E STA $7E3040,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C731u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC735u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3040u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C735u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 01 LDA $013B; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C735u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC738u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C738u:
    if(m==0u&&x==0u&&e==0u){ /* 30 1F BMI $C759; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C738u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC73Au;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC759u;}
      if(c->pc!=0xC73Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC73Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C73Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 AND #$03FF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C73Au,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC73Du;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C73Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 84 00 CMP #$0084; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C73Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC740u;
      sc_v11_op_compare(r,c->a,0x0084u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C740u:
    if(m==0u&&x==0u&&e==0u){ /* D0 17 BNE $C759; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C740u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC742u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC759u;}
      if(c->pc!=0xC742u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC742u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C742u:
    if(m==0u&&x==0u&&e==0u){ /* DA PHX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C742u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC743u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C743u:
    if(m==0u&&x==0u&&e==0u){ /* 8A TXA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C743u,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC744u;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C744u:
    if(m==0u&&x==0u&&e==0u){ /* 18 CLC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C744u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC745u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C745u:
    if(m==0u&&x==0u&&e==0u){ /* 69 42 00 ADC #$0042; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C745u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC748u;
      sc_v11_op_adc(r,0x0042u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C748u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 08 CMP #$0800; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C748u,3u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC74Bu;
      sc_v11_op_compare(r,c->a,0x0800u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C74Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 BCC $C750; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C74Bu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC74Du;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC750u;}
      if(c->pc!=0xC74Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC74Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C74Du:
    if(m==0u&&x==0u&&e==0u){ /* E9 00 08 SBC #$0800; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C74Du,3u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC750u;
      sc_v11_op_sbc(r,0x0800u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C750u:
    if(m==0u&&x==0u&&e==0u){ /* AA TAX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C750u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC751u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C751u:
    if(m==0u&&x==0u&&e==0u){ /* A9 76 13 LDA #$1376; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C751u,3u);r->open_bus=0x13u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC754u;
      sc_v11_op_lda(r,0x1376u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C754u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E STA $7E2840,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C754u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC758u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C758u:
    if(m==0u&&x==0u&&e==0u){ /* FA PLX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C758u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC759u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C759u:
    if(m==0u&&x==0u&&e==0u){ /* CE AF 01 DEC $01AF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C759u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC75Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01AFu),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C75Cu:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 BMI $C761; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C75Cu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC75Eu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC761u;}
      if(c->pc!=0xC75Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC75Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C75Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C DA C6 JMP $C6DA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C75Eu,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC761u;
      c->pc=0xC6DAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C761u:
    if(m==0u&&x==0u&&e==0u){ /* CE B1 01 DEC $01B1; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C761u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC764u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01B1u),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C764u:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 BMI $C769; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C764u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC766u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC769u;}
      if(c->pc!=0xC766u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC766u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C766u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D4 C6 JMP $C6D4; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C766u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC769u;
      c->pc=0xC6D4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C769u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C769u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC76Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C76Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB LDA $BB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C76Bu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC76Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C76Du:
    if(m==1u&&x==0u&&e==0u){ /* 09 04 ORA #$04; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C76Du,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC76Fu;
      sc_v11_op_ora(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C76Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB STA $BB; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C76Fu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC771u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C771u:
    if(m==1u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C771u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC772u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C772u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 REP #$10; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C772u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC774u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C774u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C774u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC776u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C776u:
    if(m==1u&&x==0u&&e==0u){ /* AD D3 01 LDA $01D3; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C776u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC779u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01D3u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C779u:
    if(m==1u&&x==0u&&e==0u){ /* 30 5A BMI $C7D5; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C779u,2u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC77Bu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC7D5u;}
      if(c->pc!=0xC77Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC77Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C77Bu:
    if(m==1u&&x==0u&&e==0u){ /* C9 78 CMP #$78; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C77Bu,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC77Du;
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C77Du:
    if(m==1u&&x==0u&&e==0u){ /* B0 56 BCS $C7D5; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C77Du,2u);r->open_bus=0x56u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC77Fu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC7D5u;}
      if(c->pc!=0xC77Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC77Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C77Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD D5 01 LDA $01D5; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C77Fu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC782u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01D5u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C782u:
    if(m==1u&&x==0u&&e==0u){ /* 30 51 BMI $C7D5; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C782u,2u);r->open_bus=0x51u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC784u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC7D5u;}
      if(c->pc!=0xC784u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC784u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C784u:
    if(m==1u&&x==0u&&e==0u){ /* C9 64 CMP #$64; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C784u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC786u;
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C786u:
    if(m==1u&&x==0u&&e==0u){ /* B0 4D BCS $C7D5; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C786u,2u);r->open_bus=0x4Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC788u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC7D5u;}
      if(c->pc!=0xC788u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC788u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C788u:
    if(m==1u&&x==0u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C788u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC789u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C789u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 LDA $B3; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C789u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC78Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C78Bu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F AND #$7F; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C78Bu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC78Du;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C78Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 STA $B1; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C78Du,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC78Fu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C78Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C78Fu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC790u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C790u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 STA $004202; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C790u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC794u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C794u:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 LDA #$78; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C794u,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC796u;
      sc_v11_op_lda(r,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C796u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 STA $004203; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C796u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Au;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C79Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C79Au,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C79Bu:
    if(m==1u&&x==0u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C79Bu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C79Cu:
    if(m==1u&&x==0u&&e==0u){ /* EA NOP; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C79Cu,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Du;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C79Du:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 LDA $004217; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C79Du,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A1u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A1u:
    if(m==1u&&x==0u&&e==0u){ /* EB XBA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7A1u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A2u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A2u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 LDA $004216; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7A2u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A6u:
    if(m==1u&&x==0u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7A6u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A7u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 LDA $B3; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7A7u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A9u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 STA $B1; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7A9u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7ABu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7ABu:
    if(m==1u&&x==0u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7ABu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7ACu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7ACu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 REP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7ACu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7AEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7AEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 CLC; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7AEu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7AFu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7AFu:
    if(m==0u&&x==0u&&e==0u){ /* 6D D3 01 ADC $01D3; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7AFu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B2u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D3u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7B2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7B2u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B3u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7B3u:
    if(m==0u&&x==0u&&e==0u){ /* AA TAX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7B3u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B4u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7B4u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F LDA $7F0200,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7B4u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7B8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 01 STA $013B; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7B8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7BBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7BBu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 AND #$03FF; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7BBu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7BEu;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7BEu:
    if(m==0u&&x==0u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7BEu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7BFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7BFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F6 C7 JSR $C7F6; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7BFu,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7C1u))return 0;c->pc=0xC7F6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7C2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 01 STA $013F; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7C2u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7C5u:
    if(m==0u&&x==0u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7C5u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C6u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7C6u:
    if(m==0u&&x==0u&&e==0u){ /* 48 PHA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7C6u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7C7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 ED C7 JSR $C7ED; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7C7u,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7CAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7C9u))return 0;c->pc=0xC7EDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7CAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 01 STA $013D; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7CAu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7CDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7CDu:
    if(m==0u&&x==0u&&e==0u){ /* 68 PLA; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7CDu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7CEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7CEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FD C7 JSR $C7FD; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7CEu,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7D0u))return 0;c->pc=0xC7FDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7D1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 01 STA $0141; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7D1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0141u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7D4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7D4u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D5u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7D5u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 REP #$30; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7D5u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7D7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3B 01 STZ $013B; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7D7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7DAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7DAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 03 LDA #$0300; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7DAu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7DDu;
      sc_v11_op_lda(r,0x0300u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7DDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 01 STA $013D; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7DDu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7E0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 03 LDA #$0301; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7E0u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E3u;
      sc_v11_op_lda(r,0x0301u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7E3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 01 STA $013F; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7E3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7E6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 4B 01 LDA #$014B; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7E6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E9u;
      sc_v11_op_lda(r,0x014Bu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7E9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 01 STA $0141; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7E9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7ECu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0141u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7ECu:
    if(m==0u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7ECu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7EDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7EDu:
    if(m==0u&&x==0u&&e==0u){ /* DA PHX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7EDu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7EEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7EEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7EEu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7EFu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7EFu:
    if(m==0u&&x==0u&&e==0u){ /* AA TAX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7EFu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F0u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F0u:
    if(m==0u&&x==0u&&e==0u){ /* BF 2D CF 02 LDA $02CF2D,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7F0u,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CF2Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F4u:
    if(m==0u&&x==0u&&e==0u){ /* FA PLX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7F4u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F5u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7F5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7F6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F7u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F7u:
    if(m==0u&&x==0u&&e==0u){ /* AA TAX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7F7u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F8u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F8u:
    if(m==0u&&x==0u&&e==0u){ /* BF A9 D6 02 LDA $02D6A9,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7F8u,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02D6A9u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7FCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7FCu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7FDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ASL A; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7FDu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FEu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7FEu:
    if(m==0u&&x==0u&&e==0u){ /* AA TAX; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7FEu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FFu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7FFu:
    if(m==0u&&x==0u&&e==0u){ /* BF 25 DE 02 LDA $02DE25,X; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C7FFu,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC803u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02DE25u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C803u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 20 ORA #$2000; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C803u,3u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC806u;
      sc_v11_op_ora(r,0x2000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C806u:
    if(m==0u&&x==0u&&e==0u){ /* 60 RTS; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x01C806u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC807u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E54Fu:
    if(m==1u&&x==0u&&e==0u){ /* 20 53 E5 JSR $E553; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x03E54Fu,3u);r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE552u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE551u))return 0;c->pc=0xE553u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E552u:
    if(m==0u&&x==0u&&e==0u){ /* 6B RTL; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x03E552u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE553u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E553u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 REP #$20; Version 23 Goodnight/debug route */
      sc_v11_scheduler_code_access(r,0x03E553u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE555u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return sc_v24_static_cpu_step(r,address,m,x,e);
}
