/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0006B(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01AC00u:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC00u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC03u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC03u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC03u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC05u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC05u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC05u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC06u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC06u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC06u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC07u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC0Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC0Au,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC0Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC0Cu))return 0;c->pc=0xAF9Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9B AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC0Au,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC0Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC0Cu))return 0;c->pc=0xAF9Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC0Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC0Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC0Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC0Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC0Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC0Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC0Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC0Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC0Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC0Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC0Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC10u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC10u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC10u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC13u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC13u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC13u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC16u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC16u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FB E1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC16u,3u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC19u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC18u))return 0;c->pc=0xE1FBu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC19u:
    if(m==0u&&x==0u&&e==0u){ /* 20 23 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC19u,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC1Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC1Bu))return 0;c->pc=0xAC23u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 23 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC19u,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC1Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC1Bu))return 0;c->pc=0xAC23u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 23 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC19u,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC1Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC1Bu))return 0;c->pc=0xAC23u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 23 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC19u,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC1Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC1Bu))return 0;c->pc=0xAC23u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7B DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC1Cu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC1Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC1Eu))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7B DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC1Cu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC1Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC1Eu))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7B DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC1Cu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC1Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC1Eu))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7B DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC1Cu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC1Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC1Eu))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC1Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 11 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC1Fu,3u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC22u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC21u))return 0;c->pc=0xE211u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 11 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC1Fu,3u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC22u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC21u))return 0;c->pc=0xE211u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 11 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC1Fu,3u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC22u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC21u))return 0;c->pc=0xE211u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 11 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC1Fu,3u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC22u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC21u))return 0;c->pc=0xE211u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC22u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC22u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC23u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC22u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC23u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC22u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC23u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC22u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC23u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC23u:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC23u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC26u;
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC23u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC26u;
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC23u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC25u;
      sc_v11_op_compare(r,c->a,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC23u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC25u;
      sc_v11_op_compare(r,c->a,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC26u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC26u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC28u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAC2Bu;}
      if(c->pc!=0xAC28u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC28u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC26u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC28u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAC2Bu;}
      if(c->pc!=0xAC28u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC28u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC28u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D0 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC28u,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC2Bu;
      c->pc=0xACD0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C D0 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC28u,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC2Bu;
      c->pc=0xACD0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC2Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC2Bu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC2Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC2Bu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC2Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC2Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 D9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC2Du,2u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC2Fu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD9u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 D9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC2Du,2u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC2Fu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD9u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 44 D0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC2Fu,3u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC32u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC31u))return 0;c->pc=0xD044u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 44 D0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC2Fu,3u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC32u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC31u))return 0;c->pc=0xD044u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC32u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC32u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC34u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC32u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC34u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC32u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC34u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC32u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC34u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC34u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC34u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC37u;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC34u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC37u;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC37u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC37u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC39u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC39u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC37u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC39u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC39u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC39u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC39u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC3Cu;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC39u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC3Cu;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 D7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC3Cu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC3Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 D7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC3Cu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC3Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC3Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC3Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC40u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC3Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC40u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC40u:
    if(m==1u&&x==0u&&e==0u){ /* A5 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC40u,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC42u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x60u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC40u,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC42u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x60u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC42u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC42u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC43u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC42u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC43u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC43u:
    if(m==1u&&x==0u&&e==0u){ /* A5 61 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC43u,2u);r->open_bus=0x61u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC45u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x61u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 61 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC43u,2u);r->open_bus=0x61u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC45u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x61u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC45u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC45u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC46u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC45u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC46u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC46u:
    if(m==1u&&x==0u&&e==0u){ /* A5 62 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC46u,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC48u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x62u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 62 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC46u,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC48u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x62u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC48u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC48u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC49u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC48u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC49u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC49u:
    if(m==1u&&x==0u&&e==0u){ /* A5 63 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC49u,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC4Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x63u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 63 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC49u,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC4Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x63u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC4Bu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC4Bu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC4Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC4Bu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC4Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC4Cu:
    if(m==1u&&x==0u&&e==0u){ /* A5 64 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC4Cu,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC4Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x64u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 64 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC4Cu,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC4Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x64u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC4Eu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC4Eu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC4Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC4Eu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC4Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC4Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 67 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC4Fu,2u);r->open_bus=0x67u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC51u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x67u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 67 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC4Fu,2u);r->open_bus=0x67u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC51u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x67u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC51u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC51u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC52u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC51u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC52u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC52u:
    if(m==1u&&x==0u&&e==0u){ /* 22 E8 A0 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC52u,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC56u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAC55u))return 0;
      c->pbr=0x02u;c->pc=0xA0E8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 E8 A0 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC52u,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC56u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAC55u))return 0;
      c->pbr=0x02u;c->pc=0xA0E8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC56u:
    if(m==0u&&x==0u&&e==0u){ /* 20 43 B1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC56u,3u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC59u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC58u))return 0;c->pc=0xB143u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 43 B1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC56u,3u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC59u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC58u))return 0;c->pc=0xB143u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 43 B1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC56u,3u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC59u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC58u))return 0;c->pc=0xB143u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 43 B1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC56u,3u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC59u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC58u))return 0;c->pc=0xB143u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC59u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC59u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC5Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC59u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC5Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC59u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC5Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC59u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC5Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC5Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC5Bu,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC5Du;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 17 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC5Bu,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC5Du;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC5Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC5Du,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC5Fu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC5Du,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC5Fu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC5Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC5Fu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC60u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC5Fu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC60u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC60u:
    if(m==1u&&x==0u&&e==0u){ /* 85 67 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC60u,2u);r->open_bus=0x67u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC62u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x67u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 67 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC60u,2u);r->open_bus=0x67u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC62u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x67u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC62u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC62u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC63u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC62u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC63u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC63u:
    if(m==1u&&x==0u&&e==0u){ /* 85 64 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC63u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC65u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 64 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC63u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC65u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC65u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC65u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC66u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC65u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC66u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC66u:
    if(m==1u&&x==0u&&e==0u){ /* 85 63 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC66u,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC68u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x63u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 63 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC66u,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC68u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x63u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC68u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC68u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC69u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC68u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC69u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC69u:
    if(m==1u&&x==0u&&e==0u){ /* 85 62 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC69u,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC6Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 62 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC69u,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC6Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC6Bu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC6Bu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC6Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC6Bu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC6Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC6Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 61 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC6Cu,2u);r->open_bus=0x61u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC6Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 61 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC6Cu,2u);r->open_bus=0x61u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC6Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC6Eu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC6Eu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC6Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC6Eu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC6Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC6Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC6Fu,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC71u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC6Fu,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC71u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC71u:
    if(m==1u&&x==0u&&e==0u){ /* A9 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC71u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC73u;
      sc_v11_op_lda(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC71u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC73u;
      sc_v11_op_lda(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC73u:
    if(m==1u&&x==0u&&e==0u){ /* 85 69 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC73u,2u);r->open_bus=0x69u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC75u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 69 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC73u,2u);r->open_bus=0x69u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC75u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC75u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC75u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC77u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC75u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC77u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC77u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC77u,2u);r->open_bus=0x6Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC79u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC77u,2u);r->open_bus=0x6Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC79u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC79u:
    if(m==1u&&x==0u&&e==0u){ /* A9 B3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC79u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC7Bu;
      sc_v11_op_lda(r,0x00B3u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 B3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC79u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC7Bu;
      sc_v11_op_lda(r,0x00B3u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC7Bu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC7Bu,2u);r->open_bus=0x6Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC7Du;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC7Bu,2u);r->open_bus=0x6Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC7Du;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC7Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC7Du,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC7Fu;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC7Du,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC7Fu;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC7Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 72 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC7Fu,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC81u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 72 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC7Fu,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC81u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC81u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC81u,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC83u;
      sc_v11_op_lda(r,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 E0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC81u,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC83u;
      sc_v11_op_lda(r,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC83u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC83u,2u);r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC85u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC83u,2u);r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC85u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC85u:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC85u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC87u;
      sc_v11_op_lda(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 55 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC85u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC87u;
      sc_v11_op_lda(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC87u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 00 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC87u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC8Bu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 00 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC87u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC8Bu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC8Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 57 D0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC8Bu,3u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC8Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC8Du))return 0;c->pc=0xD057u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 57 D0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC8Bu,3u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC8Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC8Du))return 0;c->pc=0xD057u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC8Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC8Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC90u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC8Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC90u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC8Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC90u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC8Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC90u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC90u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC90u,2u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC92u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 D9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC90u,2u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC92u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC92u:
    if(m==0u&&x==0u&&e==0u){ /* 85 D7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC92u,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC94u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 D7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC92u,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC94u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC94u:
    if(m==0u&&x==0u&&e==0u){ /* AD CB 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC94u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC97u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BCBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD CB 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC94u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC97u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BCBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC97u:
    if(m==0u&&x==0u&&e==0u){ /* D0 36 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC97u,2u);r->open_bus=0x36u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC99u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xACCFu;}
      if(c->pc!=0xAC99u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC99u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 36 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC97u,2u);r->open_bus=0x36u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC99u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xACCFu;}
      if(c->pc!=0xAC99u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC99u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC99u:
    if(m==0u&&x==0u&&e==0u){ /* 20 18 9F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC99u,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC9Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC9Bu))return 0;c->pc=0x9F18u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 18 9F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC99u,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC9Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC9Bu))return 0;c->pc=0x9F18u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 D1 D0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC9Cu,3u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC9Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC9Eu))return 0;c->pc=0xD0D1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D1 D0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC9Cu,3u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC9Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC9Eu))return 0;c->pc=0xD0D1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 D1 D0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC9Cu,3u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC9Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC9Eu))return 0;c->pc=0xD0D1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D1 D0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC9Cu,3u);r->open_bus=0xD0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC9Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC9Eu))return 0;c->pc=0xD0D1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AC9Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CE D6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC9Fu,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA1u))return 0;c->pc=0xD6CEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CE D6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC9Fu,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA1u))return 0;c->pc=0xD6CEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 CE D6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC9Fu,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA1u))return 0;c->pc=0xD6CEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CE D6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AC9Fu,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA1u))return 0;c->pc=0xD6CEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACA2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7B D6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA2u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA4u))return 0;c->pc=0xD67Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7B D6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA2u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA4u))return 0;c->pc=0xD67Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7B D6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA2u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA4u))return 0;c->pc=0xD67Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7B D6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA2u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA4u))return 0;c->pc=0xD67Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACA5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4B D8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA5u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA7u))return 0;c->pc=0xD84Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4B D8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA5u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA7u))return 0;c->pc=0xD84Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4B D8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA5u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA7u))return 0;c->pc=0xD84Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4B D8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA5u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACA8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA7u))return 0;c->pc=0xD84Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACA8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EA D9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA8u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACABu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACAAu))return 0;c->pc=0xD9EAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EA D9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA8u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACABu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACAAu))return 0;c->pc=0xD9EAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EA D9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA8u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACABu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACAAu))return 0;c->pc=0xD9EAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EA D9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACA8u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACABu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACAAu))return 0;c->pc=0xD9EAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACABu:
    if(m==0u&&x==0u&&e==0u){ /* 20 11 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACABu,3u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACAEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACADu))return 0;c->pc=0xE211u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 11 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACABu,3u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACAEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACADu))return 0;c->pc=0xE211u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 11 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACABu,3u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACAEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACADu))return 0;c->pc=0xE211u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 11 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACABu,3u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACAEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACADu))return 0;c->pc=0xE211u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACAEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACAEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACAEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACAEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACAEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACB0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACB0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB3u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACB0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB3u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACB3u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACB3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB5u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACB5u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACB3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB5u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACB5u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACB5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACB5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACB5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACB7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACB7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACB7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACBAu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACB7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACBAu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACBAu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACBAu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACBCu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACBCu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACBAu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACBCu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACBCu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACBCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACBCu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACBEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACBCu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACBEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACBEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACBEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACC1u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACBEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACC1u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACC1u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACC1u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACC3u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACC3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACC1u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACC3u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACC3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACC3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACC3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACC5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACC3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACC5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACC5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACC5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACC8u;
      sc_v11_op_lda(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACC5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACC8u;
      sc_v11_op_lda(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACC8u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACC8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACCAu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACCAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACC8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACCAu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACCAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACCAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACCAu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACCCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACCAu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACCCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACCCu:
    if(m==0u&&x==0u&&e==0u){ /* 4C D5 AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACCCu,3u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACCFu;
      c->pc=0xAAD5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C D5 AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACCCu,3u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACCFu;
      c->pc=0xAAD5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACCFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACCFu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACD0u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACCFu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACD0u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACD0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACD0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACD2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACD0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACD2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACD2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACD2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACD5u;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACD2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACD5u;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACD5u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACD5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACD7u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACD7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACD5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACD7u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACD7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACD7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A4 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACD7u,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACDAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACD9u))return 0;c->pc=0xDEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A4 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACD7u,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACDAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACD9u))return 0;c->pc=0xDEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACDAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 91 9E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACDAu,3u);r->open_bus=0x9Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACDDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACDCu))return 0;c->pc=0x9E91u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 91 9E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACDAu,3u);r->open_bus=0x9Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACDDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACDCu))return 0;c->pc=0x9E91u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 91 9E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACDAu,3u);r->open_bus=0x9Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACDDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACDCu))return 0;c->pc=0x9E91u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 91 9E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACDAu,3u);r->open_bus=0x9Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACDDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACDCu))return 0;c->pc=0x9E91u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACDDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7B DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACDDu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACDFu))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7B DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACDDu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACDFu))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7B DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACDDu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACDFu))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7B DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACDDu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACDFu))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACE0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE0u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACE2u))return 0;c->pc=0xC8B7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B7 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE0u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACE2u))return 0;c->pc=0xC8B7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B7 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE0u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACE2u))return 0;c->pc=0xC8B7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B7 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE0u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACE2u))return 0;c->pc=0xC8B7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACE3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE3u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACE5u))return 0;c->pc=0xC817u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 17 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE3u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACE5u))return 0;c->pc=0xC817u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE3u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACE5u))return 0;c->pc=0xC817u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 17 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE3u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACE5u))return 0;c->pc=0xC817u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACE6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACE8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACE8u:
    if(m==1u&&x==0u&&e==0u){ /* 64 B7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE8u,2u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACEAu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 B7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACE8u,2u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACEAu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACEAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACEAu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACECu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACEAu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACECu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACECu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACECu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACEFu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACECu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACEFu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACEFu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACEFu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF1u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACF1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACEFu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF1u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACF1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACF1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2D 9F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF1u,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACF3u))return 0;c->pc=0x9F2Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2D 9F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF1u,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACF3u))return 0;c->pc=0x9F2Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACF4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACF6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF9u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACF9u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACF9u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF9u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACFBu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACFBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACF9u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACFBu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACFBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACFBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACFBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACFDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACFBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xACFDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ACFDu:
    if(m==0u&&x==0u&&e==0u){ /* 9C B5 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACFDu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD00u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AB5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C B5 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ACFDu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD00u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AB5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD00u:
    if(m==0u&&x==0u&&e==0u){ /* 64 E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD00u,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD02u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD00u,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD02u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD02u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD02u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD03u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD02u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD03u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD03u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD03u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD04u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD03u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD04u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD04u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD04u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD06u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD04u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD06u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD04u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD06u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD04u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD06u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD06u:
    if(m==1u&&x==0u&&e==0u){ /* A9 23 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD06u,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD08u;
      sc_v11_op_lda(r,0x0023u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 23 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD06u,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD08u;
      sc_v11_op_lda(r,0x0023u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD08u:
    if(m==1u&&x==0u&&e==0u){ /* 85 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD08u,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD0Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD08u,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD0Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD0Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD0Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD0Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD0Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD0Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 64 C3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD0Cu,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD0Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 C3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD0Cu,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD0Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 22 96 81 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD0Eu,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD12u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAD11u))return 0;
      c->pbr=0x02u;c->pc=0x8196u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 96 81 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD0Eu,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD12u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAD11u))return 0;
      c->pbr=0x02u;c->pc=0x8196u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD12u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD12u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD14u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD12u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD14u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD12u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD14u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD12u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD14u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD14u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD14u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD17u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD14u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD17u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD17u:
    if(m==0u&&x==0u&&e==0u){ /* 85 C3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD17u,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD19u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 C3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD17u,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD19u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD19u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2E AD ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD19u,3u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD1Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD1Bu))return 0;c->pc=0xAD2Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2E AD ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD19u,3u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD1Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD1Bu))return 0;c->pc=0xAD2Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD1Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD1Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD1Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD1Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD1Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD1Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD1Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD1Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD1Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD1Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD1Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD21u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD1Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD21u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD21u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD21u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD23u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAD23u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD21u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD23u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAD23u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD23u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD23u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD25u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD23u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD25u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD25u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD25u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD27u;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD25u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD27u;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD27u:
    if(m==1u&&x==0u&&e==0u){ /* 85 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD27u,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD29u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD27u,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD29u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD29u:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD29u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD2Bu;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 17 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD29u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD2Bu;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD2Bu:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD2Bu,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD2Du;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD2Bu,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD2Du;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD2Du:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD2Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD2Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD2Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD2Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD2Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD2Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD30u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD2Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD30u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD30u:
    if(m==0u&&x==0u&&e==0u){ /* A9 55 55 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD30u,3u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD33u;
      sc_v11_op_lda(r,0x5555u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 55 55 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD30u,3u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD33u;
      sc_v11_op_lda(r,0x5555u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD33u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD33u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD37u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2201u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD33u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD37u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2201u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD37u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD37u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD3Bu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2203u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD37u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD3Bu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2203u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 05 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD3Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD3Fu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2205u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 05 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD3Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD3Fu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2205u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 07 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD3Fu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD43u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2207u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 07 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD3Fu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD43u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2207u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD43u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 09 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD43u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD47u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2209u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 09 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD43u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD47u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2209u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD47u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0B 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD47u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD4Bu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 0B 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD47u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD4Bu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0D 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD4Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD4Fu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 0D 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD4Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD4Fu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD4Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0F 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD4Fu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD53u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 0F 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD4Fu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD53u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD53u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD53u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD54u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD53u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD54u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD54u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD54u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD56u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD54u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD56u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD54u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD56u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD54u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD56u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD56u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD56u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD58u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD58u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD58u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD5Bu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD5Bu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD5Du;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAD5Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD5Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 26 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD5Du,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD60u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD5Fu))return 0;c->pc=0xAE26u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD60u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CC AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD60u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD63u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD62u))return 0;c->pc=0xAECCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CC AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD60u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD63u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD62u))return 0;c->pc=0xAECCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 CC AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD60u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD63u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD62u))return 0;c->pc=0xAECCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CC AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD60u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD63u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD62u))return 0;c->pc=0xAECCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD63u:
    if(m==0u&&x==0u&&e==0u){ /* 90 EF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD63u,2u);r->open_bus=0xEFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD65u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAD54u;}
      if(c->pc!=0xAD65u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD65u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 EF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD63u,2u);r->open_bus=0xEFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD65u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAD54u;}
      if(c->pc!=0xAD65u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD65u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 EF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD63u,2u);r->open_bus=0xEFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD65u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAD54u;}
      if(c->pc!=0xAD65u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD65u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 EF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD63u,2u);r->open_bus=0xEFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD65u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAD54u;}
      if(c->pc!=0xAD65u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD65u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD65u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD65u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD67u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD65u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD67u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD65u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD67u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD65u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD67u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD67u:
    if(m==0u&&x==0u&&e==0u){ /* C9 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD67u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD6Au;
      sc_v11_op_compare(r,c->a,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD67u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD6Au;
      sc_v11_op_compare(r,c->a,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD6Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 7D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD6Au,2u);r->open_bus=0x7Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD6Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xADE9u;}
      if(c->pc!=0xAD6Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD6Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 7D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD6Au,2u);r->open_bus=0x7Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD6Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xADE9u;}
      if(c->pc!=0xAD6Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD6Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD6Cu:
    if(m==0u&&x==0u&&e==0u){ /* E9 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD6Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD6Fu;
      sc_v11_op_sbc(r,0x0008u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD6Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD6Fu;
      sc_v11_op_sbc(r,0x0008u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 10 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD6Fu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD71u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xAD74u;}
      if(c->pc!=0xAD71u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD71u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD6Fu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD71u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xAD74u;}
      if(c->pc!=0xAD71u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD71u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD71u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 22 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD71u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD74u;
      c->pc=0xAE22u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 22 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD71u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD74u;
      c->pc=0xAE22u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD74u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD74u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD77u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD74u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD77u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD77u:
    if(m==0u&&x==0u&&e==0u){ /* 20 18 A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD77u,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD7Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD79u))return 0;c->pc=0xA918u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 18 A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD77u,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD7Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD79u))return 0;c->pc=0xA918u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD7Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD7Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD7Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD7Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD7Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD7Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD7Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD7Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD7Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD7Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD7Cu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD7Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD7Cu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD7Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD7Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD7Fu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD81u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAD8Fu;}
      if(c->pc!=0xAD81u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD81u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD7Fu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD81u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAD8Fu;}
      if(c->pc!=0xAD81u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD81u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD81u:
    if(m==0u&&x==0u&&e==0u){ /* 22 DA C7 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD81u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD85u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAD84u))return 0;
      c->pbr=0x00u;c->pc=0xC7DAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 DA C7 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD81u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD85u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAD84u))return 0;
      c->pbr=0x00u;c->pc=0xC7DAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD85u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD85u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD87u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD85u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD87u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD85u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD87u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD85u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD87u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD87u:
    if(m==0u&&x==0u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD87u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD8Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD87u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD8Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD8Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 3A A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD8Au,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD8Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD8Cu))return 0;c->pc=0xA93Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 3A A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD8Au,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD8Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD8Cu))return 0;c->pc=0xA93Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD8Du:
    if(m==0u&&x==0u&&e==0u){ /* 80 C5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD8Du,2u);r->open_bus=0xC5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD8Fu;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xAD8Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD8Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 C5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD8Du,2u);r->open_bus=0xC5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD8Fu;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xAD8Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD8Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 C5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD8Du,2u);r->open_bus=0xC5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD8Fu;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xAD8Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD8Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 C5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD8Du,2u);r->open_bus=0xC5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD8Fu;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xAD8Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD8Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD8Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD8Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD92u;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD8Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD92u;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD92u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD92u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD94u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xADA2u;}
      if(c->pc!=0xAD94u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD94u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD92u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD94u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xADA2u;}
      if(c->pc!=0xAD94u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD94u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD94u:
    if(m==0u&&x==0u&&e==0u){ /* 22 DA C8 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD94u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD98u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAD97u))return 0;
      c->pbr=0x00u;c->pc=0xC8DAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 DA C8 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD94u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD98u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAD97u))return 0;
      c->pbr=0x00u;c->pc=0xC8DAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD98u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD98u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD9Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD98u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD9Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD98u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD9Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD98u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD9Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD9Au:
    if(m==0u&&x==0u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD9Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD9Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD9Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAD9Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AD9Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 3A A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD9Du,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD9Fu))return 0;c->pc=0xA93Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 3A A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AD9Du,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD9Fu))return 0;c->pc=0xA93Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADA0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 B2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA0u,2u);r->open_bus=0xB2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA2u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 B2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA0u,2u);r->open_bus=0xB2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA2u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 B2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA0u,2u);r->open_bus=0xB2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA2u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 B2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA0u,2u);r->open_bus=0xB2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA2u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADA2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA5u;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA5u;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADA5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA5u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xADB7u;}
      if(c->pc!=0xADA7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADA7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA5u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADA7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xADB7u;}
      if(c->pc!=0xADA7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADA7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADA7u:
    if(m==0u&&x==0u&&e==0u){ /* 22 EF C9 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA7u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADABu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xADAAu))return 0;
      c->pbr=0x00u;c->pc=0xC9EFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 EF C9 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADA7u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADABu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xADAAu))return 0;
      c->pbr=0x00u;c->pc=0xC9EFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADABu:
    if(m==0u&&x==0u&&e==0u){ /* 90 23 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADABu,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADADu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xADD0u;}
      if(c->pc!=0xADADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 23 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADABu,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADADu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xADD0u;}
      if(c->pc!=0xADADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 23 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADABu,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADADu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xADD0u;}
      if(c->pc!=0xADADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 23 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADABu,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADADu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xADD0u;}
      if(c->pc!=0xADADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADADu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADAFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADAFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADAFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADAFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADAFu:
    if(m==0u&&x==0u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADAFu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADB2u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADAFu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADB2u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADB2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3A A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADB2u,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADB5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADB4u))return 0;c->pc=0xA93Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 3A A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADB2u,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADB5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADB4u))return 0;c->pc=0xA93Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADB5u:
    if(m==0u&&x==0u&&e==0u){ /* 80 9D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADB5u,2u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADB7u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 9D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADB5u,2u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADB7u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 9D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADB5u,2u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADB7u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 9D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADB5u,2u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADB7u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADB7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADB7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADBAu;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADB7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADBAu;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADBAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 98 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADBAu,2u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADBCu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAD54u;}
      if(c->pc!=0xADBCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADBCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 98 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADBAu,2u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADBCu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAD54u;}
      if(c->pc!=0xADBCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADBCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADBCu:
    if(m==0u&&x==0u&&e==0u){ /* 22 41 C9 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADBCu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC0u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xADBFu))return 0;
      c->pbr=0x00u;c->pc=0xC941u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 41 C9 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADBCu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC0u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xADBFu))return 0;
      c->pbr=0x00u;c->pc=0xC941u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADC0u:
    if(m==0u&&x==0u&&e==0u){ /* B0 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC0u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC2u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xADC6u;}
      if(c->pc!=0xADC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC0u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC2u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xADC6u;}
      if(c->pc!=0xADC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC0u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC2u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xADC6u;}
      if(c->pc!=0xADC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC0u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC2u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xADC6u;}
      if(c->pc!=0xADC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADC6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADC8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADC8u:
    if(m==0u&&x==0u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADCBu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADC8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADCBu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADCBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 3A A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADCBu,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADCEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADCDu))return 0;c->pc=0xA93Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 3A A9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADCBu,3u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADCEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADCDu))return 0;c->pc=0xA93Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADCEu:
    if(m==0u&&x==0u&&e==0u){ /* 80 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADCEu,2u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD0u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADD0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADD0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADCEu,2u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD0u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADD0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADD0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADCEu,2u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD0u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADD0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADD0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADCEu,2u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD0u;
      if(1){c->pc=0xAD54u;}
      if(c->pc!=0xADD0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADD0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADD0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADD2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD5u;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD5u;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADD5u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD7u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xADD7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD7u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xADD7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADD7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADD9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADD9u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADDCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0101u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 01 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADD9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADDCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0101u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADDCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 12 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADDCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADDFu;
      sc_v11_op_lda(r,0x0012u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 12 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADDCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADDFu;
      sc_v11_op_lda(r,0x0012u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADDFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADDFu,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE1u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADDFu,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE1u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADE1u:
    if(m==0u&&x==0u&&e==0u){ /* 64 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE1u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE1u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADE3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C D7 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C D7 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADE6u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE6u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE7u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE6u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE7u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADE7u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE7u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE8u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE7u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE8u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADE8u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE8u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE9u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE8u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADE9u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADE9u:
    if(m==0u&&x==0u&&e==0u){ /* CD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADECu;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* CD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADE9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADECu;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADECu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADECu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADEEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xADF1u;}
      if(c->pc!=0xADEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADECu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADEEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xADF1u;}
      if(c->pc!=0xADEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADEEu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 54 AD ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADEEu,3u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF1u;
      c->pc=0xAD54u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 54 AD ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADEEu,3u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF1u;
      c->pc=0xAD54u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADF1u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF1u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF1u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADF2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 9F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF2u,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADF4u))return 0;c->pc=0x9F21u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 21 9F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF2u,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADF4u))return 0;c->pc=0x9F21u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADF5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADF7u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF7u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF8u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF7u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADF8u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADF8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADFBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADF8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADFBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADFBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 18 9F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADFBu,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADFEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADFDu))return 0;c->pc=0x9F18u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 18 9F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADFBu,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xADFEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADFDu))return 0;c->pc=0x9F18u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01ADFEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A4 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADFEu,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE01u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE00u))return 0;c->pc=0xDEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A4 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADFEu,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE01u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE00u))return 0;c->pc=0xDEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A4 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADFEu,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE01u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE00u))return 0;c->pc=0xDEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A4 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01ADFEu,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE01u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE00u))return 0;c->pc=0xDEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE01u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9A E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE01u,3u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE04u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE03u))return 0;c->pc=0xE39Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9A E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE01u,3u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE04u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE03u))return 0;c->pc=0xE39Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9A E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE01u,3u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE04u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE03u))return 0;c->pc=0xE39Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9A E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE01u,3u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE04u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE03u))return 0;c->pc=0xE39Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE04u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE04u,3u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE07u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE06u))return 0;c->pc=0xA8FFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE04u,3u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE07u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE06u))return 0;c->pc=0xA8FFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE04u,3u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE07u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE06u))return 0;c->pc=0xA8FFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE04u,3u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE07u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE06u))return 0;c->pc=0xA8FFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE07u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE07u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE09u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE07u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE09u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE07u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE09u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE07u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE09u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE09u:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE09u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE0Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE0Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE0Cu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE0Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE0Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE0Fu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE0Fu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE0Fu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE10u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE10u:
    if(m==0u&&x==0u&&e==0u){ /* FC 1A 9D ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE10u,3u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE13u;
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x9D1Au+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0xAE12u))return 0;c->pc=t;}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE13u:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE13u,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE16u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE15u))return 0;c->pc=0xDE54u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 54 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE13u,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE16u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE15u))return 0;c->pc=0xDE54u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 54 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE13u,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE16u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE15u))return 0;c->pc=0xDE54u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 54 DE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE13u,3u);r->open_bus=0xDEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE16u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE15u))return 0;c->pc=0xDE54u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE16u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE16u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE18u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE16u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE18u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE16u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE18u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE16u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE18u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE18u:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE18u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE1Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE1Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE1Bu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE1Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE1Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE1Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE1Eu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE1Eu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE1Eu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE1Fu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE22u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE22u,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE25u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE24u))return 0;c->pc=0xAF9Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9B AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE22u,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE25u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE24u))return 0;c->pc=0xAF9Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE25u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE25u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE26u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE25u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE26u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE25u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE26u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE25u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE26u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE26u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE26u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE28u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE26u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE28u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE28u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE28u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE2Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE2Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE2Bu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE2Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAE2Eu;}
      if(c->pc!=0xAE2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE2Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE2Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE2Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE2Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE2Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE31u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE31u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE31u,3u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE34u;
      sc_v11_op_and(r,0x0F00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE34u:
    if(m==0u&&x==0u&&e==0u){ /* D0 26 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE34u,2u);r->open_bus=0x26u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE36u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAE5Cu;}
      if(c->pc!=0xAE36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE36u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE36u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE38u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE38u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE38u,3u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE3Bu;
      sc_v11_op_and(r,0x3000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE3Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 1E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE3Bu,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE3Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAE5Bu;}
      if(c->pc!=0xAE3Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE3Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE3Du:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE3Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE40u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE40u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE40u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE41u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE41u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE41u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE42u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE42u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE42u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE43u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE43u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE43u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE44u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE44u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE44u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE45u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE45u:
    if(m==0u&&x==0u&&e==0u){ /* 69 18 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE45u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE48u;
      sc_v11_op_adc(r,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE48u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE48u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE4Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE4Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE4Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE4Eu;
      sc_v11_op_lda(r,0x001Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE4Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE4Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE51u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE51u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE51u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE52u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE52u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE52u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE56u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAE55u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE56u:
    if(m==0u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE56u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE58u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE56u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE58u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x08u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE56u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE58u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE56u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE58u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x08u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE58u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE58u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE59u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE58u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE59u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE58u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE59u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE58u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE59u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE59u:
    if(m==0u&&x==0u&&e==0u){ /* 80 24 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE59u,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE5Bu;
      if(1){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 24 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE59u,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE5Bu;
      if(1){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 24 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE59u,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE5Bu;
      if(1){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 24 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE59u,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE5Bu;
      if(1){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE5Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE5Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE5Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE5Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE5Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE5Eu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE5Eu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE5Fu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE5Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE5Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE61u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE61u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE61u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE62u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE62u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE62u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE64u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE69u;}
      if(c->pc!=0xAE64u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE64u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE64u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE64u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE65u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE65u:
    if(m==0u&&x==0u&&e==0u){ /* 20 82 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE65u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE68u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE67u))return 0;c->pc=0xAE82u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE68u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE68u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE69u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE68u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE69u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE68u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE69u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE68u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE69u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE69u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE69u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE69u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE69u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Au;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE69u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Au;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE6Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Au,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE71u;}
      if(c->pc!=0xAE6Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE6Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Au,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE71u;}
      if(c->pc!=0xAE6Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE6Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Au,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE71u;}
      if(c->pc!=0xAE6Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE6Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Au,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE71u;}
      if(c->pc!=0xAE6Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE6Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE6Cu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Cu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Cu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Cu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Cu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE6Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE6Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Du,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE70u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE6Fu))return 0;c->pc=0xAE93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 93 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Du,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE70u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE6Fu))return 0;c->pc=0xAE93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 93 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Du,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE70u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE6Fu))return 0;c->pc=0xAE93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 93 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE6Du,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE70u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE6Fu))return 0;c->pc=0xAE93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE70u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE70u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE71u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE70u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE71u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE70u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE71u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE70u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE71u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE71u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE71u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE72u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE71u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE72u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE71u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE72u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE71u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE72u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE72u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE72u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE74u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE79u;}
      if(c->pc!=0xAE74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE72u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE74u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE79u;}
      if(c->pc!=0xAE74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE72u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE74u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE79u;}
      if(c->pc!=0xAE74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE72u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE74u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE79u;}
      if(c->pc!=0xAE74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE74u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A4 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE74u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE77u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE76u))return 0;c->pc=0xAEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A4 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE74u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE77u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE76u))return 0;c->pc=0xAEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A4 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE74u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE77u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE76u))return 0;c->pc=0xAEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A4 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE74u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE77u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE76u))return 0;c->pc=0xAEA4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE77u:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE77u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE79u;
      if(1){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE79u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE79u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE77u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE79u;
      if(1){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE79u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE79u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE77u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE79u;
      if(1){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE79u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE79u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE77u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE79u;
      if(1){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE79u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE79u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE79u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE79u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE79u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE79u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Au;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE79u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Au;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE7Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE7Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE7Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE7Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE7Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE7Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE7Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAE7Fu;}
      if(c->pc!=0xAE7Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE7Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B5 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Cu,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE7Eu))return 0;c->pc=0xAEB5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B5 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Cu,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE7Eu))return 0;c->pc=0xAEB5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B5 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Cu,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE7Eu))return 0;c->pc=0xAEB5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B5 AE ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Cu,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE7Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE7Eu))return 0;c->pc=0xAEB5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 16 C6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Fu,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE82u;
      c->pc=0xC616u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 16 C6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Fu,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE82u;
      c->pc=0xC616u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 16 C6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Fu,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE82u;
      c->pc=0xC616u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 16 C6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE7Fu,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE82u;
      c->pc=0xC616u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE82u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE82u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE85u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE85u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE85u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE86u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE86u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE86u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE89u;
      sc_v11_op_adc(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE89u:
    if(m==0u&&x==0u&&e==0u){ /* C9 F0 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE89u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE8Cu;
      sc_v11_op_compare(r,c->a,0x00F0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 3A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE8Cu,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE8Eu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAEC8u;}
      if(c->pc!=0xAE8Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE8Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE8Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 EE 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE8Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE91u;
      sc_v11_op_lda(r,0x00EEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE91u:
    if(m==0u&&x==0u&&e==0u){ /* 80 35 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE91u,2u);r->open_bus=0x35u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE93u;
      if(1){c->pc=0xAEC8u;}
      if(c->pc!=0xAE93u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE93u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE93u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE93u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE96u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE93u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE96u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE93u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE96u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE93u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE96u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE96u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE96u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE97u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE96u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE97u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE96u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE97u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE96u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE97u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE97u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE97u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE9Au;
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE97u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE9Au;
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE97u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE99u;
      sc_v11_op_sbc(r,0x0002u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE97u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE99u;
      sc_v11_op_sbc(r,0x0002u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE9Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 10 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE9Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE9Du;
      sc_v11_op_compare(r,c->a,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 10 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE9Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE9Du;
      sc_v11_op_compare(r,c->a,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE9Du:
    if(m==0u&&x==0u&&e==0u){ /* B0 29 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE9Du,2u);r->open_bus=0x29u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE9Fu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAEC8u;}
      if(c->pc!=0xAE9Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE9Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 29 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE9Du,2u);r->open_bus=0x29u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAE9Fu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAEC8u;}
      if(c->pc!=0xAE9Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE9Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AE9Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE9Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA2u;
      sc_v11_op_lda(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 10 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AE9Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA2u;
      sc_v11_op_lda(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEA2u:
    if(m==0u&&x==0u&&e==0u){ /* 80 24 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA2u,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA4u;
      if(1){c->pc=0xAEC8u;}
      if(c->pc!=0xAEA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 24 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA2u,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA4u;
      if(1){c->pc=0xAEC8u;}
      if(c->pc!=0xAEA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEA4u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEA7u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA7u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA8u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA7u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA8u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA7u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA8u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA7u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEA8u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEA8u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEABu;
      sc_v11_op_adc(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEABu;
      sc_v11_op_adc(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA8u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEAAu;
      sc_v11_op_adc(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEA8u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEAAu;
      sc_v11_op_adc(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEABu:
    if(m==0u&&x==0u&&e==0u){ /* C9 C8 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEABu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEAEu;
      sc_v11_op_compare(r,c->a,0x00C8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 C8 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEABu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEAEu;
      sc_v11_op_compare(r,c->a,0x00C8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEAEu:
    if(m==0u&&x==0u&&e==0u){ /* 90 14 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEAEu,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB0u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAEC4u;}
      if(c->pc!=0xAEB0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEB0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 14 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEAEu,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB0u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAEC4u;}
      if(c->pc!=0xAEB0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEB0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEB0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 C6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB3u;
      sc_v11_op_lda(r,0x00C6u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 C6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB3u;
      sc_v11_op_lda(r,0x00C6u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEB3u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB3u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB5u;
      if(1){c->pc=0xAEC4u;}
      if(c->pc!=0xAEB5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEB5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB3u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB5u;
      if(1){c->pc=0xAEC4u;}
      if(c->pc!=0xAEB5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEB5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEB5u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB5u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB5u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB5u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB8u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB5u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB8u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEB8u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB8u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB9u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB8u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB9u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB8u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB9u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB8u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEB9u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEB9u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEBCu;
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEBCu;
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEBBu;
      sc_v11_op_sbc(r,0x0002u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEB9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEBBu;
      sc_v11_op_sbc(r,0x0002u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEBCu:
    if(m==0u&&x==0u&&e==0u){ /* C9 18 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEBCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEBFu;
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 18 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEBCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEBFu;
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEBFu:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEBFu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEC1u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAEC4u;}
      if(c->pc!=0xAEC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEBFu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEC1u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAEC4u;}
      if(c->pc!=0xAEC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEC1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 18 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEC1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEC4u;
      sc_v11_op_lda(r,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 18 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEC1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEC4u;
      sc_v11_op_lda(r,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEC4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEC4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEC7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEC4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEC7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEC7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEC7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEC8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEC7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEC8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEC8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEC8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAECBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEC8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAECBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AECBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AECBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAECCu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AECBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAECCu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AECCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AECCu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAECEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AECCu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAECEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AECCu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAECEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AECCu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAECEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AECEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AECEu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAED1u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AED1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AED1u,2u);r->open_bus=0xF9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAED3u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAECCu;}
      if(c->pc!=0xAED3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAED3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AED3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AED3u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAED5u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AED5u:
    if(m==0u&&x==0u&&e==0u){ /* 89 00 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AED5u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAED8u;
      {uint16_t z=(uint16_t)((c->a&0xFFFFu)&0x8000u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AED8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AED8u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEDAu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAEE6u;}
      if(c->pc!=0xAEDAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEDAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEDAu:
    if(m==0u&&x==0u&&e==0u){ /* 89 40 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEDAu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEDDu;
      {uint16_t z=(uint16_t)((c->a&0xFFFFu)&0x0040u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEDDu:
    if(m==0u&&x==0u&&e==0u){ /* D0 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEDDu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEDFu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAEE1u;}
      if(c->pc!=0xAEDFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEDFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEDFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEDFu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE0u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEE0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE0u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE1u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEE1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE1u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE4u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE1u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE4u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE1u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE3u;
      sc_v11_op_lda(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE1u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE3u;
      sc_v11_op_lda(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEE3u:
    if(m==1u&&x==0u&&e==0u){ /* FF 38 60 AD ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE3u,4u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE7u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0xAD6038u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* FF 38 60 AD ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE3u,4u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE7u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0xAD6038u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEE4u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE4u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE5u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE4u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE5u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEE5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEE6u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEE9u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEE7u:
    if(m==1u&&x==0u&&e==0u){ /* ED 01 C9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE7u,3u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEEAu;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0xC901u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* ED 01 C9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE7u,3u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEEAu;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0xC901u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEE9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 16 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEE9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEECu;
      sc_v11_op_compare(r,c->a,0x0016u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEEAu:
    if(m==1u&&x==0u&&e==0u){ /* 16 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEEAu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEECu;
      sc_v11_op_shift_memory(r,sc_v11_ea_dpx(r,0x00u),8u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 16 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEEAu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEECu;
      sc_v11_op_shift_memory(r,sc_v11_ea_dpx(r,0x00u),8u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEECu:
    if(m==0u&&x==0u&&e==0u){ /* 90 49 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEECu,2u);r->open_bus=0x49u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEEEu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF37u;}
      if(c->pc!=0xAEEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 49 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEECu,2u);r->open_bus=0x49u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEEEu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF37u;}
      if(c->pc!=0xAEEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 49 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEECu,2u);r->open_bus=0x49u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEEEu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF37u;}
      if(c->pc!=0xAEEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEEEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 26 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEEEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEF1u;
      sc_v11_op_compare(r,c->a,0x0026u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 26 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEEEu,2u);r->open_bus=0x26u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEF0u;
      sc_v11_op_compare(r,c->a,0x0026u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 26 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEEEu,2u);r->open_bus=0x26u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEF0u;
      sc_v11_op_compare(r,c->a,0x0026u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEF1u:
    if(m==0u&&x==0u&&e==0u){ /* B0 44 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEF1u,2u);r->open_bus=0x44u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEF3u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAF37u;}
      if(c->pc!=0xAEF3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEF3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEF3u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEF3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEF6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEF6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEF6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEF9u;
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEF9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEF9u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEFBu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF37u;}
      if(c->pc!=0xAEFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEFBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 8F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEFBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAEFEu;
      sc_v11_op_compare(r,c->a,0x008Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AEFEu:
    if(m==0u&&x==0u&&e==0u){ /* B0 37 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AEFEu,2u);r->open_bus=0x37u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF00u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAF37u;}
      if(c->pc!=0xAF00u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF00u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF00u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF00u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF01u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF01u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF01u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF04u;
      sc_v11_op_sbc(r,0x000Fu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF04u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF04u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF05u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF05u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF05u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF06u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF06u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF06u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF07u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF07u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF07u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF08u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF08u:
    if(m==0u&&x==0u&&e==0u){ /* CD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF08u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF0Bu;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF0Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF0Bu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF0Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF17u;}
      if(c->pc!=0xAF0Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF0Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF0Du:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF0Du,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF0Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF0Eu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF12u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAF11u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF12u:
    if(m==0u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF12u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF14u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF12u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF14u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF12u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF14u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF12u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF14u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF14u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF14u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF15u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF14u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF15u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF14u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF15u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF14u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF15u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF15u:
    if(m==0u&&x==0u&&e==0u){ /* 80 CA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF15u,2u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF17u;
      if(1){c->pc=0xAEE1u;}
      if(c->pc!=0xAF17u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF17u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 CA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF15u,2u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF17u;
      if(1){c->pc=0xAEE1u;}
      if(c->pc!=0xAF17u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF17u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 CA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF15u,2u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF17u;
      if(1){c->pc=0xAEE1u;}
      if(c->pc!=0xAF17u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF17u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 CA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF15u,2u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF17u;
      if(1){c->pc=0xAEE1u;}
      if(c->pc!=0xAF17u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF17u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF17u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF17u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF18u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF18u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF18u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF19u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF19u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF19u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF1Du;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAF1Cu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF1Du:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF1Du,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF1Fu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF1Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF1Du,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF1Fu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF1Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF1Du,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF1Fu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF1Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF1Du,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF1Fu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF1Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF1Fu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF1Fu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF20u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF1Fu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF20u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF1Fu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF20u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF1Fu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF20u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF20u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF20u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF21u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF20u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF21u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF20u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF21u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF20u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF21u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF21u:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF21u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF24u;
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF21u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF24u;
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF21u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF23u;
      sc_v11_op_compare(r,c->a,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF21u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF23u;
      sc_v11_op_compare(r,c->a,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF24u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF24u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF26u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF35u;}
      if(c->pc!=0xAF26u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF26u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF24u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF26u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF35u;}
      if(c->pc!=0xAF26u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF26u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF26u:
    if(m==0u&&x==0u&&e==0u){ /* AE FA 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF26u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF29u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FAu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE FA 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF26u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF29u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x03FAu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF29u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF29u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF2Bu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF35u;}
      if(c->pc!=0xAF2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF29u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF2Bu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF35u;}
      if(c->pc!=0xAF2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF2Bu,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF2Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF2Bu,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF2Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF2Cu:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF2Cu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF30u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAF2Fu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF2Cu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF30u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAF2Fu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF30u:
    if(m==0u&&x==0u&&e==0u){ /* 02 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF30u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF32u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF32u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF30u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF32u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF32u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF30u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF32u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF32u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF30u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF32u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF32u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF32u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF32u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF33u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF32u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF33u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF32u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF33u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF32u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF33u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF33u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF33u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF34u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF33u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF34u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF33u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF34u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF33u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF34u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF34u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF34u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF35u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF34u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF35u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF34u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF35u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF34u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF35u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF35u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF35u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF36u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF35u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF36u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF36u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF36u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF37u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF36u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF37u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF37u:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF37u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF37u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01DFu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF37u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01DFu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF3Au:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Bu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Bu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Bu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF3Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Bu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Cu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Bu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Cu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Bu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Cu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF3Cu:
    if(m==0u&&x==0u&&e==0u){ /* BD C3 A0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Cu,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xA0C3u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* BD C3 A0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Cu,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xA0C3u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD C3 A0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Cu,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF3Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xA0C3u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Fu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF40u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Fu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF40u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF3Fu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF40u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF40u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF40u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF43u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF40u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF43u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF40u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF42u;
      sc_v11_op_ldy(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF43u:
    if(m==0u&&x==0u&&e==0u){ /* 84 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF43u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF45u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 84 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF43u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF45u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF45u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF45u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF47u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF45u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF47u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF47u:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF47u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF4Au;
      sc_v11_op_compare(r,c->a,0x8080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF47u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF49u;
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF49u:
    if(m==1u&&x==0u&&e==0u){ /* 80 F0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF49u,2u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF4Bu;
      if(1){c->pc=0xAF3Bu;}
      if(c->pc!=0xAF4Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF4Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF4Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 4C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF4Au,2u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF4Cu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAF98u;}
      if(c->pc!=0xAF4Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF4Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF4Cu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF4Cu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF4Du;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF4Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF4Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF50u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF50u:
    if(m==0u&&x==0u&&e==0u){ /* CD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF50u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF53u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF53u:
    if(m==0u&&x==0u&&e==0u){ /* B0 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF53u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF55u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAF91u;}
      if(c->pc!=0xAF55u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF55u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF55u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF55u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF57u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF57u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF57u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF58u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF58u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF58u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF5Bu;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF5Bu:
    if(m==0u&&x==0u&&e==0u){ /* CD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF5Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF5Eu;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 32 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF5Eu,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF60u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF92u;}
      if(c->pc!=0xAF60u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF60u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF60u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF60u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF62u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF62u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF62u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF63u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF63u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF63u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF66u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF66u:
    if(m==0u&&x==0u&&e==0u){ /* CD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF66u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF69u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF69u:
    if(m==0u&&x==0u&&e==0u){ /* B0 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF69u,2u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF6Bu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAF93u;}
      if(c->pc!=0xAF6Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF6Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF6Bu:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF6Bu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF6Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF6Du:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF6Du,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF6Eu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF6Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF6Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF71u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF71u:
    if(m==0u&&x==0u&&e==0u){ /* CD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF71u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF74u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF74u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1E ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF74u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF76u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF94u;}
      if(c->pc!=0xAF76u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF76u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF76u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF76u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF77u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF77u:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF77u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF7Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF7Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF7Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF7Du;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF7Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF7Du,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF7Fu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF89u;}
      if(c->pc!=0xAF7Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF7Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF7Fu,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF80u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF80u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF80u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF84u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAF83u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF84u:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF84u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF86u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF86u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF84u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF86u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF86u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF84u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF86u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF86u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF84u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF86u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF86u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF86u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF86u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF87u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF86u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF87u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF86u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF87u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF86u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF87u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF87u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF87u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF89u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF87u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF89u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF87u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF89u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF87u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF89u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF89u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF89u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF8Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF89u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF8Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF8Bu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF8Bu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF8Cu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF8Bu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF8Cu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF8Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF8Fu;
      sc_v11_op_adc(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF8Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF8Fu;
      sc_v11_op_adc(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF8Fu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF90u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF8Fu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF90u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF90u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF90u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF91u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF90u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF91u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF91u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF91u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF92u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF92u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF92u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF93u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF93u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF93u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF94u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF94u:
    if(m==0u&&x==0u&&e==0u){ /* E6 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF94u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF96u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF96u:
    if(m==0u&&x==0u&&e==0u){ /* 80 AD ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF96u,2u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF98u;
      if(1){c->pc=0xAF45u;}
      if(c->pc!=0xAF98u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF98u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF98u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF98u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF99u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF99u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF99u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF9Au;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF9Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF9Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF9Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF9Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF9Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF9Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF9Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF9Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF9Du:
    if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF9Du,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF9Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF9Du,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAF9Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AF9Eu:
    if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF9Eu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA2u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAFA1u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AF9Eu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA2u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAFA1u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFA2u:
    if(m==0u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA2u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA4u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA2u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA4u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA2u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA4u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA2u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA4u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFA4u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA4u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA5u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA4u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA5u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA4u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA5u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA4u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA5u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFA5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFA7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFA7u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFAAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFA7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFAAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFAAu:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFAAu,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFADu;
      sc_v11_op_and(r,0xFFF8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 F8 FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFAAu,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFADu;
      sc_v11_op_and(r,0xFFF8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFADu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFADu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFB0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFADu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFB0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFB0u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFB0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFB3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFB0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFB3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFB3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFB3u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFB6u;
      sc_v11_op_and(r,0xFFF8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 F8 FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFB3u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFB6u;
      sc_v11_op_and(r,0xFFF8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFB6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFB6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFB9u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFB6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFB9u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFB9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFB9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFB9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFBAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 BE AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBAu,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFBCu))return 0;c->pc=0xAFBEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 BE AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBAu,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFBCu))return 0;c->pc=0xAFBEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 BE AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBAu,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFBCu))return 0;c->pc=0xAFBEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 BE AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBAu,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFBCu))return 0;c->pc=0xAFBEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFBDu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBDu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBDu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBDu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBDu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFBEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFBEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBEu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFC0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBEu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFC0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBEu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFC0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFBEu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFC0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFC0u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFC0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFC3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFC3u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFC3u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFC4u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFC4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFC4u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFC6u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAFC9u;}
      if(c->pc!=0xAFC6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFC6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFC6u:
    if(m==0u&&x==0u&&e==0u){ /* EE BD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFC6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFC9u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01BDu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFC9u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFC9u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFCAu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFCAu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFCAu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFCCu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAFCFu;}
      if(c->pc!=0xAFCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFCCu:
    if(m==0u&&x==0u&&e==0u){ /* CE BD 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFCCu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFCFu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01BDu),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFCFu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFCFu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFD0u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFD0u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFD0u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFD2u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAFD5u;}
      if(c->pc!=0xAFD2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFD2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFD2u:
    if(m==0u&&x==0u&&e==0u){ /* EE BF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFD2u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFD5u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01BFu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFD5u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFD5u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFD6u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFD6u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFD6u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFD8u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAFDBu;}
      if(c->pc!=0xAFD8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFD8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFD8u:
    if(m==0u&&x==0u&&e==0u){ /* CE BF 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFD8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFDBu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01BFu),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFDBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFDCu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFDCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E0 AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDCu,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFDFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFDEu))return 0;c->pc=0xAFE0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E0 AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDCu,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFDFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFDEu))return 0;c->pc=0xAFE0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E0 AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDCu,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFDFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFDEu))return 0;c->pc=0xAFE0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E0 AF ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDCu,3u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFDFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFDEu))return 0;c->pc=0xAFE0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFDFu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDFu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDFu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDFu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFDFu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFE0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE0u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE0u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE0u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE0u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFE2u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE2u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE5u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFE5u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE5u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE6u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFE6u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE6u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE8u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAFF7u;}
      if(c->pc!=0xAFE8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFE8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFE8u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE8u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFE9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFE9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFE9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFECu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFECu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFECu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFEDu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFEDu:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFEDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFF0u;
      sc_v11_op_adc(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFF0u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFF0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFF3u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFF3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 39 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFF3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFF6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0139u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFF6u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFF6u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFF7u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFF7u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFF7u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFF8u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFF8u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFF8u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFFAu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB009u;}
      if(c->pc!=0xAFFAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFFAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFFAu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFFAu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFFBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFFBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFFBu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFFEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFFEu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFFEu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAFFFu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01AFFFu:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01AFFFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB002u;
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
