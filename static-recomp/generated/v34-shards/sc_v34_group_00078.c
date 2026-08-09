/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00078(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01E002u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E002u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE004u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E004u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E004u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE006u;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E006u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E006u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE008u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE00Cu;}
      if(c->pc!=0xE008u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE008u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E008u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E008u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE009u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E009u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E009u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE00Au;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E00Au:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E00Au,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE00Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE008u;}
      if(c->pc!=0xE00Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE00Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E00Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E00Cu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE00Fu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E00Fu:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2558; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E00Fu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE013u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE012u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E013u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E013u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE016u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E016u:
    if(m==1u&&x==1u&&e==0u){ /* A9 70 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E016u,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE018u;
      sc_v11_op_lda(r,0x0070u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E018u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E018u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE01Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E01Bu:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E01Bu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE01Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E01Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E01Du,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE01Fu;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E01Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E01Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE020u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E020u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E020u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE021u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E021u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E021u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE022u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E022u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E022u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE023u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E023u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E023u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE024u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E024u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E024u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE026u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E026u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E026u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE029u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E029u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E029u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE02Bu;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E02Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E02Bu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE02Eu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E02Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E02Eu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE030u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E030u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E030u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE033u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E033u:
    if(m==1u&&x==1u&&e==0u){ /* A9 E0 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E033u,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE035u;
      sc_v11_op_lda(r,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E035u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E035u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE038u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E038u:
    if(m==1u&&x==1u&&e==0u){ /* A9 06 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E038u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE03Au;
      sc_v11_op_lda(r,0x0006u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E03Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E03Au,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE03Du;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E03Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E03Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE03Fu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E03Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E03Fu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE042u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E042u:
    if(m==1u&&x==1u&&e==0u){ /* A9 10 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E042u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE044u;
      sc_v11_op_lda(r,0x0010u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E044u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E044u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE047u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E047u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E047u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE049u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E049u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E049u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE04Bu;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E04Bu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E04Bu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE04Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE051u;}
      if(c->pc!=0xE04Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE04Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E04Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E04Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE04Eu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E04Eu:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E04Eu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE04Fu;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E04Fu:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E04Fu,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE051u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE04Du;}
      if(c->pc!=0xE051u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE051u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E051u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E051u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE054u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E054u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2559; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E054u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE058u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE057u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E058u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E058u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE05Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E05Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 78 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E05Bu,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE05Du;
      sc_v11_op_lda(r,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E05Du:
    if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E05Du,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE060u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E060u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E060u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE062u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E062u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E062u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE064u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E064u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E064u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE065u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E065u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E065u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE066u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E066u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E066u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE067u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E067u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E067u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE068u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E068u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E068u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE069u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E069u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E069u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE06Bu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E06Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E06Bu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE06Eu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E06Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E06Eu,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE070u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E070u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E070u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE073u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E073u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E073u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE075u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E075u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E075u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE078u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E078u:
    if(m==1u&&x==1u&&e==0u){ /* A9 F0 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E078u,2u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE07Au;
      sc_v11_op_lda(r,0x00F0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E07Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E07Au,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE07Du;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E07Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 06 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E07Du,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE07Fu;
      sc_v11_op_lda(r,0x0006u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E07Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E07Fu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE082u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E082u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E082u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE084u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E084u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E084u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE087u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E087u:
    if(m==1u&&x==1u&&e==0u){ /* A9 10 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E087u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE089u;
      sc_v11_op_lda(r,0x0010u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E089u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E089u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE08Cu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E08Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E08Cu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE08Eu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E08Eu:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E08Eu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE090u;
      sc_v11_op_ldx(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E090u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E090u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE092u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE096u;}
      if(c->pc!=0xE092u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE092u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E092u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E092u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE093u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E093u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E093u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE094u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E094u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E094u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE096u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE092u;}
      if(c->pc!=0xE096u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE096u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E096u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E096u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE099u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E099u:
    if(m==1u&&x==1u&&e==0u){ /* 22 DC CA 00 Mesen corrected gameplay frame 2560; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E099u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE09Du;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE09Cu))return 0;
      c->pbr=0x00u;c->pc=0xCADCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E09Du:
    if(m==0u&&x==0u&&e==0u){ /* 22 9D CA 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E09Du,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0A1u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0A0u))return 0;
      c->pbr=0x00u;c->pc=0xCA9Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0A1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0A1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0A3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0A3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 5B 0B Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0A3u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0A6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B5Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0A6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0A6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0A9u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0A9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 2A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0A9u,2u);r->open_bus=0x2Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0ABu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE0D5u;}
      if(c->pc!=0xE0ABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE0ABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0ABu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1F 04 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0ABu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0AEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x041Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0AEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0AEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0B1u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0B1u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0B1u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0B2u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0B2u:
    if(m==0u&&x==0u&&e==0u){ /* ED 1F 04 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0B2u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0B5u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x041Fu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0B5u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0B5u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0B6u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0B6u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0B6u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0B7u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0B7u:
    if(m==0u&&x==0u&&e==0u){ /* A2 01 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0B7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0BAu;
      sc_v11_op_ldx(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0BAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0BAu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0BCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0BCu:
    if(m==1u&&x==0u&&e==0u){ /* BD 5B 0B Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0BCu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0BFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0B5Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0BFu:
    if(m==1u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0BFu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0C0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0C0u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0C0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0C3u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0C3u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0C3u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0C4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0C4u:
    if(m==1u&&x==0u&&e==0u){ /* 22 98 CD 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0C4u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0C8u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0C7u))return 0;
      c->pbr=0x00u;c->pc=0xCD98u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0C8u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0C8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0CAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0CAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0CAu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0CCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0CCu:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0CCu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0CDu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0CDu:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0CDu,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0CEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0CEu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0CEu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0CFu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0CFu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0CFu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0D0u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0D0u:
    if(m==1u&&x==0u&&e==0u){ /* CE 1F 04 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0D0u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0D3u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x041Fu),8u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0D3u:
    if(m==1u&&x==0u&&e==0u){ /* D0 E7 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0D3u,2u);r->open_bus=0xE7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0D5u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE0BCu;}
      if(c->pc!=0xE0D5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE0D5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0D5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 6C E1 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0D5u,3u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0D8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE0D7u))return 0;c->pc=0xE16Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0D8u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0D8u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0DCu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0DBu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0DCu:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0DCu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0DEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0DEu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0DEu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0E0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0E0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0E0u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0E2u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0E2u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0E2u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0E5u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0E5u:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0E5u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0E7u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0E7u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0E7u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0EAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0EAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0EAu,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0ECu;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0ECu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0ECu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0EFu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0EFu:
    if(m==1u&&x==0u&&e==0u){ /* A2 70 76 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0EFu,3u);r->open_bus=0x76u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0F2u;
      sc_v11_op_ldx(r,0x7670u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0F2u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0F2u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0F5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0F5u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 80 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0F5u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0F8u;
      sc_v11_op_ldx(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0F8u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0F8u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0FBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0FBu:
    if(m==1u&&x==0u&&e==0u){ /* A2 80 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0FBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE0FEu;
      sc_v11_op_ldx(r,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E0FEu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E0FEu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE101u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E101u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E101u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE103u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E103u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E103u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE106u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E106u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E106u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE108u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E108u:
    if(m==0u&&x==0u&&e==0u){ /* A5 3E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E108u,2u);r->open_bus=0x3Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE10Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x3Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E10Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E10Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE10Bu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E10Bu:
    if(m==0u&&x==0u&&e==0u){ /* B0 56 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E10Bu,2u);r->open_bus=0x56u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE10Du;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xE163u;}
      if(c->pc!=0xE10Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE10Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E10Du:
    if(m==0u&&x==0u&&e==0u){ /* 22 9D CA 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E10Du,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE111u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE110u))return 0;
      c->pbr=0x00u;c->pc=0xCA9Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E111u:
    if(m==0u&&x==0u&&e==0u){ /* A2 02 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E111u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE114u;
      sc_v11_op_ldx(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E114u:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E114u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE117u;
      sc_v11_op_ldy(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E117u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E117u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE119u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E119u:
    if(m==1u&&x==0u&&e==0u){ /* BD 27 0B Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E119u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE11Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0B27u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E11Cu:
    if(m==1u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E11Cu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE11Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E11Du:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E11Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE120u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E120u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E120u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE121u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E121u:
    if(m==1u&&x==0u&&e==0u){ /* 22 98 CD 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E121u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE125u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE124u))return 0;
      c->pbr=0x00u;c->pc=0xCD98u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E125u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E125u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE127u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E127u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E127u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE129u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E129u:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E129u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE12Au;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E12Au:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E12Au,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE12Bu;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E12Bu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E12Bu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE12Cu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E12Cu:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E12Cu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE12Du;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E12Du:
    if(m==1u&&x==0u&&e==0u){ /* 10 EA Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E12Du,2u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE12Fu;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xE119u;}
      if(c->pc!=0xE12Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE12Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E12Fu:
    if(m==1u&&x==0u&&e==0u){ /* 20 A1 E1 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E12Fu,3u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE132u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE131u))return 0;c->pc=0xE1A1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E132u:
    if(m==1u&&x==1u&&e==0u){ /* 20 D8 E1 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E132u,3u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE135u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE134u))return 0;c->pc=0xE1D8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E135u:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E135u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE139u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE138u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E139u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E139u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE13Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E13Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E13Bu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE13Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E13Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E13Du,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE13Fu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E13Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E13Fu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE142u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E142u:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E142u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE144u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E144u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E144u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE147u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E147u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E147u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE149u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E149u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E149u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE14Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E14Cu:
    if(m==1u&&x==0u&&e==0u){ /* A2 90 79 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E14Cu,3u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE14Fu;
      sc_v11_op_ldx(r,0x7990u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E14Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E14Fu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE152u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E152u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 80 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E152u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE155u;
      sc_v11_op_ldx(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E155u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E155u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE158u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E158u:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 00 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E158u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE15Bu;
      sc_v11_op_ldx(r,0x0040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E15Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E15Bu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE15Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E15Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E15Eu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE160u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E160u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E160u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE163u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E163u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E163u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE165u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E165u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E165u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE167u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E167u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E167u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE169u;
      sc_v11_op_ora(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E169u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E169u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE16Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E16Bu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E16Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE16Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E16Cu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E16Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE16Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E16Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E16Eu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE170u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E170u:
    if(m==1u&&x==1u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E170u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE172u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E172u:
    if(m==1u&&x==1u&&e==0u){ /* A5 79 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E172u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE174u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E174u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E174u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE175u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E175u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E175u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE176u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E176u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E176u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE177u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E177u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E177u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE178u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E178u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E178u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE179u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E179u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E179u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE17Au;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E17Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E17Au,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE17Cu;
      sc_v11_op_lda(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E17Cu:
    if(m==1u&&x==1u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E17Cu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE17Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E17Eu:
    if(m==1u&&x==1u&&e==0u){ /* BF 01 80 7E Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E17Eu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE182u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E8001u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E182u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 10 80 7E Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E182u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE186u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8010u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E186u:
    if(m==1u&&x==1u&&e==0u){ /* 49 FF Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E186u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE188u;
      sc_v11_op_eor(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E188u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E188u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE18Cu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E18Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E18Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE18Eu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E18Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 01 80 7E Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E18Eu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE192u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8001u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E192u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E192u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE193u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E193u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E193u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE194u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E194u:
    if(m==1u&&x==1u&&e==0u){ /* C6 7C Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E194u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE196u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Cu),8u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E196u:
    if(m==1u&&x==1u&&e==0u){ /* D0 E6 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E196u,2u);r->open_bus=0xE6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE198u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE17Eu;}
      if(c->pc!=0xE198u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE198u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E198u:
    if(m==1u&&x==1u&&e==0u){ /* E6 79 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E198u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE19Au;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E19Au:
    if(m==1u&&x==1u&&e==0u){ /* A5 79 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E19Au,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE19Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E19Cu:
    if(m==1u&&x==1u&&e==0u){ /* C9 04 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E19Cu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE19Eu;
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E19Eu:
    if(m==1u&&x==1u&&e==0u){ /* 90 D2 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E19Eu,2u);r->open_bus=0xD2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1A0u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xE172u;}
      if(c->pc!=0xE1A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE1A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1A0u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1A0u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1A1u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1A1u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1A1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1A3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1A3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1A3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1A5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1A5u:
    if(m==1u&&x==1u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1A5u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1A7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1A7u:
    if(m==1u&&x==1u&&e==0u){ /* A5 79 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1A7u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1A9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1A9u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1A9u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1AAu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1AAu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1AAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1ABu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1ABu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1ABu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1ACu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1ACu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1ACu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1ADu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1ADu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1ADu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1AEu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1AEu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1AEu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1AFu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1AFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1AFu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1B1u;
      sc_v11_op_lda(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1B1u:
    if(m==1u&&x==1u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1B1u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1B3u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1B3u:
    if(m==1u&&x==1u&&e==0u){ /* BF 01 80 7E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1B3u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1B7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E8001u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1B7u:
    if(m==1u&&x==1u&&e==0u){ /* 1F 10 80 7E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1B7u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1BBu;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E8010u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1BBu:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1BBu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1BCu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1BCu:
    if(m==1u&&x==1u&&e==0u){ /* BF 10 80 7E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1BCu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1C0u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E8010u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1C0u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 01 80 7E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1C0u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1C4u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8001u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1C4u:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1C4u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1C5u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1C5u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 10 80 7E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1C5u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1C9u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8010u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1C9u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1C9u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1CAu;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1CAu:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1CAu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1CBu;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1CBu:
    if(m==1u&&x==1u&&e==0u){ /* C6 7C Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1CBu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1CDu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Cu),8u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1CDu:
    if(m==1u&&x==1u&&e==0u){ /* D0 E4 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1CDu,2u);r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1CFu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE1B3u;}
      if(c->pc!=0xE1CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE1CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1CFu:
    if(m==1u&&x==1u&&e==0u){ /* E6 79 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1CFu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1D1u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1D1u:
    if(m==1u&&x==1u&&e==0u){ /* A5 79 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1D1u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1D3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1D3u:
    if(m==1u&&x==1u&&e==0u){ /* C9 02 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1D3u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1D5u;
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1D5u:
    if(m==1u&&x==1u&&e==0u){ /* 90 D0 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1D5u,2u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1D7u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xE1A7u;}
      if(c->pc!=0xE1D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE1D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1D7u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1D7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1D8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1D8u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1D8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1DAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1DAu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1DAu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1DCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1DCu:
    if(m==1u&&x==0u&&e==0u){ /* A0 20 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1DCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1DFu;
      sc_v11_op_ldy(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1DFu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1DFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1E2u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1E2u:
    if(m==1u&&x==0u&&e==0u){ /* BF 20 F3 06 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1E2u,4u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1E6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x06F320u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1E6u:
    if(m==1u&&x==0u&&e==0u){ /* 29 F0 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1E6u,2u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1E8u;
      sc_v11_op_and(r,0x00F0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1E8u:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1E8u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1EAu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1EAu:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 80 7E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1EAu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1EEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E8000u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1EEu:
    if(m==1u&&x==0u&&e==0u){ /* 29 0F Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1EEu,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1F0u;
      sc_v11_op_and(r,0x000Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1F0u:
    if(m==1u&&x==0u&&e==0u){ /* 05 79 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1F0u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1F2u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1F2u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1F2u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1F6u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1F6u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1F6u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1F7u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1F7u:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1F7u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1F8u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1F8u:
    if(m==1u&&x==0u&&e==0u){ /* D0 E8 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1F8u,2u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1FAu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE1E2u;}
      if(c->pc!=0xE1FAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE1FAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01E1FAu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2566; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01E1FAu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE1FBu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
