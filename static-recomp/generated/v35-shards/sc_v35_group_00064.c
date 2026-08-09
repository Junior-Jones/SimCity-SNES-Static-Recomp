/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00064(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0193A4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 40 A6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193A4u,3u);r->open_bus=0xA6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93A7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93A6u))return 0;c->pc=0xA640u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 40 A6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193A4u,3u);r->open_bus=0xA6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93A7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93A6u))return 0;c->pc=0xA640u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193A7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193A7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93A8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193A7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93A8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193A7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93A8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193A7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93A8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193A8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193A8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93AAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193A8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93AAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193AAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 11 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193AAu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93ADu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0111u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193ADu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 17 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193ADu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93B0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0117u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193B0u:
    if(m==0u&&x==0u&&e==0u){ /* AD FA 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193B0u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93B3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FAu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193B3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FC 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193B3u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93B6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FCu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193B6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193B6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93B9u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x010Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193B9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 19 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193B9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93BCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0119u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193BCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193BCu,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93BFu;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193BFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 79 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193BFu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93C2u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0379u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193C2u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 87 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193C2u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93C5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0387u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193C5u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193C5u,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93C7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193C7u:
    if(m==0u&&x==0u&&e==0u){ /* D0 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193C7u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93C9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x93E1u;}
      if(c->pc!=0x93C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193C9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193C9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93CCu;
      sc_v11_op_lda(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193CCu:
    if(m==0u&&x==0u&&e==0u){ /* 85 E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193CCu,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93CEu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193CEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 39 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193CEu,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93D0u))return 0;c->pc=0xDE39u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193D1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 6D A4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D1u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93D3u))return 0;c->pc=0xA46Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 6D A4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D1u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93D3u))return 0;c->pc=0xA46Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 6D A4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D1u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93D3u))return 0;c->pc=0xA46Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 6D A4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D1u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93D3u))return 0;c->pc=0xA46Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193D4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193D6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D9u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93D9u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193D9u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D9u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93DBu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x93DBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193D9u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93DBu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x93DBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193DBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 2B DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193DBu,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93DEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93DDu))return 0;c->pc=0xDE2Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2B DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193DBu,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93DEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93DDu))return 0;c->pc=0xDE2Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193DEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 05 DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193DEu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93E0u))return 0;c->pc=0xDF05u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 05 DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193DEu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93E0u))return 0;c->pc=0xDF05u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 05 DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193DEu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93E0u))return 0;c->pc=0xDF05u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 05 DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193DEu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x93E0u))return 0;c->pc=0xDF05u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193E1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193E3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 17 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0117u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 17 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0117u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193E6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E6u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x93FAu;}
      if(c->pc!=0x93E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E6u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93E8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x93FAu;}
      if(c->pc!=0x93E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x93E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193E8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 11 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93EBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 11 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193E8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93EBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193EBu:
    if(m==0u&&x==0u&&e==0u){ /* AD FC 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193EBu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93EEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FCu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FC 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193EBu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93EEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FCu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193EEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D FA 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193EEu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93F1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FAu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D FA 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193EEu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93F1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FAu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193F1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 19 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193F1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93F4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0119u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 19 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193F1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93F4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0119u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193F4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0F 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193F4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93F7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0F 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193F4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93F7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193F7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 15 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193F7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93FAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0115u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 15 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193F7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93FAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0115u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193FAu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 95 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193FAu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93FDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 95 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193FAu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93FDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193FDu:
    if(m==0u&&x==0u&&e==0u){ /* 64 E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193FDu,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93FFu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193FDu,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x93FFu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0193FFu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 79 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193FFu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9402u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0379u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 79 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0193FFu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9402u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0379u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
