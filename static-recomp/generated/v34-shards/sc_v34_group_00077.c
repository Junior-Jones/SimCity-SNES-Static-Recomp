/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00077(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01DF7Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF7Bu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF7Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF7Du:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF7Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF7Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF7Fu:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF7Fu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF81u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF81u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF81u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF83u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF83u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF83u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF85u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF85u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF85u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF89u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF88u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF89u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF89u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF8Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF8Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 60 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF8Cu,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF8Eu;
      sc_v11_op_lda(r,0x0060u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF8Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF8Eu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF91u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF91u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF91u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF93u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF93u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF93u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF95u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF95u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF95u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF96u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF96u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF96u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF97u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF97u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF97u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF98u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF98u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF98u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF99u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF99u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF99u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Au;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF9Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF9Au,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Cu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF9Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF9Cu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDF9Fu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DF9Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DF9Fu,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFA1u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFA1u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFA1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFA4u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFA4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFA4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFA6u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFA6u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFA6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFA9u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFA9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 C0 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFA9u,2u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFABu;
      sc_v11_op_lda(r,0x00C0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFABu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFABu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFAEu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFAEu:
    if(m==1u&&x==1u&&e==0u){ /* A9 06 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFAEu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFB0u;
      sc_v11_op_lda(r,0x0006u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFB0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFB0u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFB3u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFB3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFB3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFB5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFB5u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFB5u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFB8u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFB8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 10 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFB8u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFBAu;
      sc_v11_op_lda(r,0x0010u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFBAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFBAu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFBDu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFBDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFBDu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFBFu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFBFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFBFu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC1u;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFC1u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFC1u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDFC7u;}
      if(c->pc!=0xDFC3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDFC3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFC3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFC3u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC4u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFC4u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFC4u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC5u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFC5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFC5u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFC7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDFC3u;}
      if(c->pc!=0xDFC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDFC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFC7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFC7u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFCAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFCAu:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2557; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFCAu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFCEu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDFCDu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFCEu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFCEu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFD1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFD1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 68 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFD1u,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFD3u;
      sc_v11_op_lda(r,0x0068u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFD3u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFD3u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFD6u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFD6u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFD6u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFD8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFD8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFD8u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDAu;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFDAu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFDAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDBu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFDBu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFDBu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDCu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFDCu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFDCu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDDu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFDDu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFDDu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDEu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFDEu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFDEu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFDFu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFDFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFDFu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFE1u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFE1u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFE1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFE4u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFE4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFE4u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFE6u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFE6u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFE6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFE9u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFE9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFE9u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFEBu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFEBu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFEBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFEEu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFEEu:
    if(m==1u&&x==1u&&e==0u){ /* A9 D0 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFEEu,2u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF0u;
      sc_v11_op_lda(r,0x00D0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFF0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFF0u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF3u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFF3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 06 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFF3u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF5u;
      sc_v11_op_lda(r,0x0006u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFF5u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFF5u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFF8u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFF8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFF8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFFAu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFFAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFFAu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFFDu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFFDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 10 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFFDu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDFFFu;
      sc_v11_op_lda(r,0x0010u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01DFFFu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01DFFFu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE002u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
