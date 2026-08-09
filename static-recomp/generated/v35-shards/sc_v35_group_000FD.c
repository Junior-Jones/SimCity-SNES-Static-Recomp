/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000FD(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03F400u:
    if(m==0u&&x==0u&&e==0u){ /* AD C3 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F400u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF403u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x02C3u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD C3 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F400u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF403u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x02C3u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F403u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F403u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF405u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF40Bu;}
      if(c->pc!=0xF405u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF405u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F403u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF405u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF40Bu;}
      if(c->pc!=0xF405u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF405u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F405u:
    if(m==0u&&x==0u&&e==0u){ /* BF 41 EB 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F405u,4u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF409u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x03EB41u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 41 EB 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F405u,4u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF409u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x03EB41u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F409u:
    if(m==0u&&x==0u&&e==0u){ /* 80 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F409u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF40Bu;
      if(1){c->pc=0xF40Fu;}
      if(c->pc!=0xF40Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF40Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F409u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF40Bu;
      if(1){c->pc=0xF40Fu;}
      if(c->pc!=0xF40Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF40Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F40Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF 31 EB 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F40Bu,4u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF40Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x03EB31u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 31 EB 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F40Bu,4u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF40Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x03EB31u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F40Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F40Fu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF412u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F40Fu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF412u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F412u:
    if(m==0u&&x==0u&&e==0u){ /* B9 37 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F412u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF415u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0337u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 37 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F412u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF415u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0337u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F415u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F415u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF418u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F415u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF418u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F418u:
    if(m==0u&&x==0u&&e==0u){ /* B9 47 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F418u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF41Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0347u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 47 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F418u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF41Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0347u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F41Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F41Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF41Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F41Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF41Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F41Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8C C5 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F41Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF421u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02C5u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8C C5 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F41Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF421u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x02C5u),(uint8_t)c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F421u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F421u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF422u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F421u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF422u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F422u:
    if(m==0u&&x==0u&&e==0u){ /* 20 30 F4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F422u,3u);r->open_bus=0xF4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF425u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF424u))return 0;c->pc=0xF430u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 30 F4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F422u,3u);r->open_bus=0xF4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF425u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF424u))return 0;c->pc=0xF430u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F425u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F425u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF427u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F425u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF427u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F425u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF427u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F425u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF427u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F427u:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F427u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF428u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F428u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F428u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF429u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F428u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF429u;
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F429u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F429u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF42Au;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F429u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF42Au;
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F42Au:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F42Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF42Cu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF42Fu;}
      if(c->pc!=0xF42Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF42Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F42Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF42Cu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF42Fu;}
      if(c->pc!=0xF42Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF42Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F42Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4C B3 F2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F42Cu,3u);r->open_bus=0xF2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF42Fu;
      c->pc=0xF2B3u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C B3 F2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F42Cu,3u);r->open_bus=0xF2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF42Fu;
      c->pc=0xF2B3u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F42Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F42Fu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF430u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F42Fu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF430u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F430u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F430u,1u);r->open_bus=0x4Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF431u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F430u,1u);r->open_bus=0x4Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF431u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F431u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F431u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF432u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F431u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF432u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F432u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F432u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF434u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F432u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF434u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F434u:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F434u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF437u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0253u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F437u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F437u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF438u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F438u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F438u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF439u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F439u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F439u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF43Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F43Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F43Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF43Bu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F43Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F43Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF43Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0289u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F43Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F43Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF441u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0261u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F441u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F441u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF442u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F442u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F442u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF443u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F443u:
    if(m==0u&&x==0u&&e==0u){ /* BD CC F4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F443u,3u);r->open_bus=0xF4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF446u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xF4CCu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F446u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F446u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF447u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F447u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F447u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF44Au;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F44Au:
    if(m==0u&&x==0u&&e==0u){ /* AE 53 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F44Au,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF44Du;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0253u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F44Du:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F44Du,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF44Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F44Fu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F44Fu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF450u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F450u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F450u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF451u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F451u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 87 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F451u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF454u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0287u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F454u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F454u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF455u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F455u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F455u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF457u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F457u:
    if(m==1u&&x==0u&&e==0u){ /* B3 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F457u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF459u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x03u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F459u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F459u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF45Au;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F45Au:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F45Au,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF45Bu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F45Bu:
    if(m==1u&&x==0u&&e==0u){ /* 6D 5D 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F45Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF45Eu;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x025Du)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F45Eu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F45Eu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF462u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F462u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F462u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF463u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F463u:
    if(m==1u&&x==0u&&e==0u){ /* B3 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F463u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF465u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x03u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F465u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F465u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF466u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F466u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F466u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF467u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F467u:
    if(m==1u&&x==0u&&e==0u){ /* 6D 5F 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F467u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF46Au;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x025Fu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F46Au:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F46Au,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF46Eu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F46Eu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F46Eu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF46Fu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F46Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F46Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF471u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F471u:
    if(m==0u&&x==0u&&e==0u){ /* B3 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F471u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF473u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x03u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F473u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F473u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF476u;
      sc_v11_op_and(r,0x0E00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F476u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F476u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF478u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF484u;}
      if(c->pc!=0xF478u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF478u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F478u:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F478u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF47Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x02C5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F47Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F47Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF47Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F47Du:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F47Du,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF47Eu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F47Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F47Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF480u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F484u:
    if(m==0u&&x==0u&&e==0u){ /* B3 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F484u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF486u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x03u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F486u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F486u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF487u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F487u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F487u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF488u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F488u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F488u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF48Cu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F48Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F48Cu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF48Du;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F48Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F48Du,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF48Eu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F48Eu:
    if(m==0u&&x==0u&&e==0u){ /* CE 87 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F48Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF491u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0287u),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F491u:
    if(m==0u&&x==0u&&e==0u){ /* D0 C2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F491u,2u);r->open_bus=0xC2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF493u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF455u;}
      if(c->pc!=0xF493u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF493u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F493u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 53 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F493u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF496u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F496u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F496u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF497u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F497u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F497u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF498u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F498u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F498u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF499u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F499u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F499u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF49Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F49Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F49Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF49Bu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F49Bu:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F49Bu,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF49Cu;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F49Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F49Cu,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF49Du;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F49Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F49Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4A0u;
      sc_v11_op_and(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4A0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4A0u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4A1u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4A1u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4A1u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4A3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4A3u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4A3u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4A4u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4A4u:
    if(m==0u&&x==0u&&e==0u){ /* BF 48 90 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4A4u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4A8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x009048u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4A8u:
    if(m==0u&&x==0u&&e==0u){ /* AE 89 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4A8u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4ABu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0289u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4ABu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4ABu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4AEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0289u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4AEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4AEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4B1u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4B1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4B1u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4B5u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4B5u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4B5u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4B6u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4B6u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4B6u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4B7u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4B7u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4B7u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4B8u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4B8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4B8u,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4BAu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF4B1u;}
      if(c->pc!=0xF4BAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4BAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4BAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4BAu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4BCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4BCu:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4BCu,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4BEu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF4C5u;}
      if(c->pc!=0xF4BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4BEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4BEu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4C1u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0289u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4C1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4C1u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4C5u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4C5u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4C5u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4C6u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4C6u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4C6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4C9u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4C9u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4C9u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4CAu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4CAu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4CAu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4CBu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03F4CBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03F4CBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF4CCu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
