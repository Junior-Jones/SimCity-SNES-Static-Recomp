/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000EE(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03B801u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B801u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB804u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB803u))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B80Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 E8 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B80Eu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB811u;
      sc_v11_op_lda(r,0x03E8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B824u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B824u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB826u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B824u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB826u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B824u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB826u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B82Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B82Cu,2u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB82Eu;
      sc_v11_op_lda(r,0x00E8u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B82Eu:
    if(m==1u&&x==0u&&e==0u){ /* 03 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B82Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB830u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x20u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B832u:
    if(m==0u&&x==1u&&e==0u){ /* CD ED 0D ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B832u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB835u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* CD ED 0D ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B832u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB835u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEDu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD ED 0D ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B832u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB835u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEDu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B835u:
    if(m==0u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B835u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB837u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB83Au;}
      if(c->pc!=0xB837u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB837u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B835u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB837u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB83Au;}
      if(c->pc!=0xB837u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB837u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B835u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB837u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB83Au;}
      if(c->pc!=0xB837u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB837u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B837u:
    if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B837u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB838u;
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B837u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB838u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B837u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB838u;
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B838u:
    if(m==0u&&x==1u&&e==0u){ /* 80 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B838u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Au;
      if(1){c->pc=0xB83Cu;}
      if(c->pc!=0xB83Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB83Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B838u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Au;
      if(1){c->pc=0xB83Cu;}
      if(c->pc!=0xB83Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB83Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B838u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Au;
      if(1){c->pc=0xB83Cu;}
      if(c->pc!=0xB83Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB83Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B83Au:
    if(m==0u&&x==1u&&e==0u){ /* E6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B83Cu:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Cu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Du;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Cu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Du;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Cu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Du;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B83Du:
    if(m==0u&&x==1u&&e==0u){ /* E0 64 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Du,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Fu;
      sc_v11_op_compare(r,c->x,0x0064u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 64 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB840u;
      sc_v11_op_compare(r,c->x,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E0 64 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B83Du,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Fu;
      sc_v11_op_compare(r,c->x,0x0064u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B840u:
    if(m==1u&&x==0u&&e==0u){ /* D0 EA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B840u,2u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB842u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB82Cu;}
      if(c->pc!=0xB842u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB842u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B842u:
    if(m==1u&&x==0u&&e==0u){ /* 8C DF 0D ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B842u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB845u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DDFu),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B845u:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B845u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB847u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B847u:
    if(m==1u&&x==0u&&e==0u){ /* 8D E1 0D ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B847u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DE1u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B84Au:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B84Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B84Bu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B84Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B84Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B84Du:
    if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B84Du,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B84Eu:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B84Eu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B84Fu:
    if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B84Fu,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB850u;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B850u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B850u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB851u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B851u:
    if(m==0u&&x==1u&&e==0u){ /* E9 10 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B851u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB854u;
      sc_v11_op_sbc(r,0x0010u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B854u:
    if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B854u,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB855u;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B855u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B855u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB856u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B856u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B856u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB858u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B860u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 14 B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B860u,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB863u;
      c->pc=0xB914u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B86Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 6F B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B86Bu,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB86Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB86Du))return 0;c->pc=0xB96Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B86Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B86Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB871u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0199u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B86Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB871u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0199u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B86Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB871u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0199u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B871u:
    if(m==0u&&x==1u&&e==0u){ /* F0 2E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B871u,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB873u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8A1u;}
      if(c->pc!=0xB873u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB873u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 2E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B871u,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB873u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8A1u;}
      if(c->pc!=0xB873u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB873u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 2E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B871u,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB873u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8A1u;}
      if(c->pc!=0xB873u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB873u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B873u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B873u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB876u;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B873u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB876u;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B873u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB875u;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B873u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB875u;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B876u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B876u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB878u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB87Du;}
      if(c->pc!=0xB878u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB878u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B876u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB878u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB87Du;}
      if(c->pc!=0xB878u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB878u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B878u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B878u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB87Bu;
      sc_v11_op_lda(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FE 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B878u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB87Bu;
      sc_v11_op_lda(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B87Bu:
    if(m==0u&&x==0u&&e==0u){ /* 80 1E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B87Bu,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB87Du;
      if(1){c->pc=0xB89Bu;}
      if(c->pc!=0xB87Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB87Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 1E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B87Bu,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB87Du;
      if(1){c->pc=0xB89Bu;}
      if(c->pc!=0xB87Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB87Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B87Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B87Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB880u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0199u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B87Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB880u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0199u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B880u:
    if(m==0u&&x==0u&&e==0u){ /* 29 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B880u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB883u;
      sc_v11_op_and(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B880u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB883u;
      sc_v11_op_and(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B883u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B883u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB885u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB88Du;}
      if(c->pc!=0xB885u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB885u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B883u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB885u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB88Du;}
      if(c->pc!=0xB885u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB885u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B885u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DB B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B885u,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB888u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB887u))return 0;c->pc=0xB9DBu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 DB B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B885u,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB888u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB887u))return 0;c->pc=0xB9DBu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B888u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FD 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B888u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB88Bu;
      sc_v11_op_lda(r,0x00FDu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FD 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B888u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB88Bu;
      sc_v11_op_lda(r,0x00FDu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FD ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B888u,2u);r->open_bus=0xFDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB88Au;
      sc_v11_op_lda(r,0x00FDu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FD ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B888u,2u);r->open_bus=0xFDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB88Au;
      sc_v11_op_lda(r,0x00FDu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B88Bu:
    if(m==0u&&x==0u&&e==0u){ /* 80 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B88Bu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB88Du;
      if(1){c->pc=0xB89Bu;}
      if(c->pc!=0xB88Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB88Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B88Bu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB88Du;
      if(1){c->pc=0xB89Bu;}
      if(c->pc!=0xB88Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB88Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B88Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B88Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB890u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0199u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B88Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB890u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0199u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B890u:
    if(m==0u&&x==0u&&e==0u){ /* 29 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B890u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB893u;
      sc_v11_op_and(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B890u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB893u;
      sc_v11_op_and(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B893u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B893u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB895u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8A1u;}
      if(c->pc!=0xB895u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB895u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B893u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB895u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8A1u;}
      if(c->pc!=0xB895u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB895u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B895u:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B895u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB898u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB897u))return 0;c->pc=0xBA47u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 47 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B895u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB898u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB897u))return 0;c->pc=0xBA47u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B898u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FB 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B898u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB89Bu;
      sc_v11_op_lda(r,0x00FBu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FB 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B898u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB89Bu;
      sc_v11_op_lda(r,0x00FBu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B898u,2u);r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB89Au;
      sc_v11_op_lda(r,0x00FBu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B898u,2u);r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB89Au;
      sc_v11_op_lda(r,0x00FBu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B89Bu:
    if(m==0u&&x==0u&&e==0u){ /* 2D 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B89Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB89Eu;
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0199u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2D 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B89Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB89Eu;
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0199u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B89Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B89Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0199u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 99 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B89Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0199u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8A1u:
    if(m==0u&&x==1u&&e==0u){ /* AD D7 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x00D7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD D7 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x00D7u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD D7 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x00D7u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8A4u:
    if(m==0u&&x==1u&&e==0u){ /* 0D B5 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A4u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A7u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0D B5 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A4u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A7u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AB5u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0D B5 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A4u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A7u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AB5u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8A7u:
    if(m==0u&&x==1u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A7u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB8AEu;}
      if(c->pc!=0xB8A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A7u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB8AEu;}
      if(c->pc!=0xB8A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A7u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB8AEu;}
      if(c->pc!=0xB8A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8A9u:
    if(m==0u&&x==1u&&e==0u){ /* AD 95 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A9u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8ACu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0395u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 95 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A9u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8ACu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0395u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 95 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8A9u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8ACu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0395u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8ACu:
    if(m==0u&&x==1u&&e==0u){ /* D0 66 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8ACu,2u);r->open_bus=0x66u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8AEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB914u;}
      if(c->pc!=0xB8AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 66 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8ACu,2u);r->open_bus=0x66u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8AEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB914u;}
      if(c->pc!=0xB8AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 66 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8ACu,2u);r->open_bus=0x66u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8AEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB914u;}
      if(c->pc!=0xB8AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8AEu:
    if(m==0u&&x==1u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8AEu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B1u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8AEu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B1u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0197u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8AEu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B1u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0197u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8B1u:
    if(m==0u&&x==1u&&e==0u){ /* F0 63 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B1u,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB916u;}
      if(c->pc!=0xB8B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 63 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B1u,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB916u;}
      if(c->pc!=0xB8B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 63 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B1u,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB916u;}
      if(c->pc!=0xB8B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8B3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B6u;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B6u;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B5u;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B5u;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8B6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8C0u;}
      if(c->pc!=0xB8B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8B8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8C0u;}
      if(c->pc!=0xB8B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8B8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B9 BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B8u,3u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8BBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8BAu))return 0;c->pc=0xBBB9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B9 BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8B8u,3u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8BBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8BAu))return 0;c->pc=0xBBB9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8BBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8BBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8BEu;
      sc_v11_op_lda(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FE 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8BBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8BEu;
      sc_v11_op_lda(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8BBu,2u);r->open_bus=0xFEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8BDu;
      sc_v11_op_lda(r,0x00FEu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8BBu,2u);r->open_bus=0xFEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8BDu;
      sc_v11_op_lda(r,0x00FEu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8BEu:
    if(m==0u&&x==0u&&e==0u){ /* 80 4E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8BEu,2u);r->open_bus=0x4Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8C0u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB8C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 4E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8BEu,2u);r->open_bus=0x4Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8C0u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB8C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8C0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8C0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8C3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8C0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8C3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8C3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8C3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8C6u;
      sc_v11_op_and(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8C3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8C6u;
      sc_v11_op_and(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8C6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8C6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8C8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8D0u;}
      if(c->pc!=0xB8C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8C6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8C8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8D0u;}
      if(c->pc!=0xB8C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8C8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0B BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8C8u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8CBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8CAu))return 0;c->pc=0xBC0Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0B BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8C8u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8CBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8CAu))return 0;c->pc=0xBC0Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8CBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FD 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8CBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8CEu;
      sc_v11_op_lda(r,0x00FDu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FD 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8CBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8CEu;
      sc_v11_op_lda(r,0x00FDu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FD ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8CBu,2u);r->open_bus=0xFDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8CDu;
      sc_v11_op_lda(r,0x00FDu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FD ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8CBu,2u);r->open_bus=0xFDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8CDu;
      sc_v11_op_lda(r,0x00FDu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8CEu:
    if(m==0u&&x==0u&&e==0u){ /* 80 3E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8CEu,2u);r->open_bus=0x3Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8D0u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB8D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 3E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8CEu,2u);r->open_bus=0x3Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8D0u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB8D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8D0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8D0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8D3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8D0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8D3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8D3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8D3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8D6u;
      sc_v11_op_and(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8D3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8D6u;
      sc_v11_op_and(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8D6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8D6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8D8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8E0u;}
      if(c->pc!=0xB8D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8D6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8D8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8E0u;}
      if(c->pc!=0xB8D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8D8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CD B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8D8u,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8DBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8DAu))return 0;c->pc=0xB9CDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CD B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8D8u,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8DBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8DAu))return 0;c->pc=0xB9CDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8DBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FB 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8DBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8DEu;
      sc_v11_op_lda(r,0x00FBu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FB 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8DBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8DEu;
      sc_v11_op_lda(r,0x00FBu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8DBu,2u);r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8DDu;
      sc_v11_op_lda(r,0x00FBu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8DBu,2u);r->open_bus=0xFBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8DDu;
      sc_v11_op_lda(r,0x00FBu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8DEu:
    if(m==0u&&x==0u&&e==0u){ /* 80 2E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8DEu,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8E0u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB8E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 2E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8DEu,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8E0u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB8E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8E0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8E0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8E3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8E0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8E3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8E3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8E3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8E6u;
      sc_v11_op_and(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8E3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8E6u;
      sc_v11_op_and(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8E6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8E6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8E8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8F0u;}
      if(c->pc!=0xB8E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8E6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8E8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB8F0u;}
      if(c->pc!=0xB8E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8E8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DB B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8E8u,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8EBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8EAu))return 0;c->pc=0xB9DBu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 DB B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8E8u,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8EBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8EAu))return 0;c->pc=0xB9DBu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8EBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 F7 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8EBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8EEu;
      sc_v11_op_lda(r,0x00F7u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 F7 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8EBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8EEu;
      sc_v11_op_lda(r,0x00F7u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 F7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8EBu,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8EDu;
      sc_v11_op_lda(r,0x00F7u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 F7 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8EBu,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8EDu;
      sc_v11_op_lda(r,0x00F7u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8EEu:
    if(m==0u&&x==0u&&e==0u){ /* 80 1E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8EEu,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8F0u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB8F0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8F0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 1E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8EEu,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8F0u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB8F0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8F0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8F0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8F0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8F3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8F0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8F3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8F3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 10 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8F3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8F6u;
      sc_v11_op_and(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 10 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8F3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8F6u;
      sc_v11_op_and(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8F6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8F6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8F8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB900u;}
      if(c->pc!=0xB8F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8F6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8F8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB900u;}
      if(c->pc!=0xB8F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB8F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8F8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8F8u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8FBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8FAu))return 0;c->pc=0xBAF5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F5 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8F8u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8FBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB8FAu))return 0;c->pc=0xBAF5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8FBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 EF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8FBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8FEu;
      sc_v11_op_lda(r,0x00EFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 EF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8FBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8FEu;
      sc_v11_op_lda(r,0x00EFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 EF ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8FBu,2u);r->open_bus=0xEFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8FDu;
      sc_v11_op_lda(r,0x00EFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 EF ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8FBu,2u);r->open_bus=0xEFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB8FDu;
      sc_v11_op_lda(r,0x00EFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B8FEu:
    if(m==0u&&x==0u&&e==0u){ /* 80 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8FEu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB900u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB900u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB900u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B8FEu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB900u;
      if(1){c->pc=0xB90Eu;}
      if(c->pc!=0xB900u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB900u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B900u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B900u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB903u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B900u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB903u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B903u:
    if(m==0u&&x==0u&&e==0u){ /* 29 20 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B903u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB906u;
      sc_v11_op_and(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 20 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B903u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB906u;
      sc_v11_op_and(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B906u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B906u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB908u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB914u;}
      if(c->pc!=0xB908u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB908u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B906u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB908u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB914u;}
      if(c->pc!=0xB908u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB908u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B908u:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B908u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB90Au))return 0;c->pc=0xBA47u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 47 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B908u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB90Au))return 0;c->pc=0xBA47u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B90Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 DF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B90Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Eu;
      sc_v11_op_lda(r,0x00DFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 DF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B90Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Eu;
      sc_v11_op_lda(r,0x00DFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B90Bu,2u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Du;
      sc_v11_op_lda(r,0x00DFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B90Bu,2u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Du;
      sc_v11_op_lda(r,0x00DFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B90Eu:
    if(m==0u&&x==0u&&e==0u){ /* 2D 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B90Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB911u;
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2D 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B90Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB911u;
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B911u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B911u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB914u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0197u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B911u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB914u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0197u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B914u:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B914u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB915u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B914u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB915u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B914u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB915u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B914u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB915u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B915u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B915u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB916u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B915u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB916u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B915u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB916u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B915u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB916u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B916u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3E 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B916u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB919u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3E 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B916u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB919u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x003Eu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3E 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B916u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB919u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x003Eu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B919u:
    if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B919u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB91Cu;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B919u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB91Bu;
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B919u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB91Bu;
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B91Cu:
    if(m==0u&&x==1u&&e==0u){ /* F0 49 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B91Cu,2u);r->open_bus=0x49u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB91Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB967u;}
      if(c->pc!=0xB91Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB91Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B91Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 57 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B91Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB921u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B921u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B921u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB922u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B922u:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B922u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB923u;
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B923u:
    if(m==0u&&x==1u&&e==0u){ /* B9 69 B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B923u,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB926u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xB969u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B926u:
    if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B926u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB929u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB928u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B929u:
    if(m==0u&&x==1u&&e==0u){ /* C9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B929u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB92Cu;
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B929u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB92Bu;
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B929u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB92Bu;
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B92Cu:
    if(m==0u&&x==1u&&e==0u){ /* D0 39 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B92Cu,2u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB92Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB967u;}
      if(c->pc!=0xB92Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB92Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B92Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B92Eu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB931u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB930u))return 0;c->pc=0x907Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7E 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B92Eu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB931u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB930u))return 0;c->pc=0x907Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B931u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B931u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB934u;
      sc_v11_op_and(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B931u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB934u;
      sc_v11_op_and(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B931u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB933u;
      sc_v11_op_and(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B931u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB933u;
      sc_v11_op_and(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B934u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B934u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB937u;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B934u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB937u;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B937u:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B937u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB939u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB93Eu;}
      if(c->pc!=0xB939u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB939u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B937u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB939u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB93Eu;}
      if(c->pc!=0xB939u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB939u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B939u:
    if(m==0u&&x==0u&&e==0u){ /* 20 6A BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B939u,3u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB93Bu))return 0;c->pc=0xBB6Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 6A BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B939u,3u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB93Bu))return 0;c->pc=0xBB6Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B93Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 29 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B93Cu,2u);r->open_bus=0x29u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Eu;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB93Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB93Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 29 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B93Cu,2u);r->open_bus=0x29u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Eu;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB93Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB93Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 29 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B93Cu,2u);r->open_bus=0x29u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Eu;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB93Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB93Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 29 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B93Cu,2u);r->open_bus=0x29u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Eu;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB93Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB93Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B93Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B93Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB941u;
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B93Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB941u;
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B941u:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B941u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB943u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB948u;}
      if(c->pc!=0xB943u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB943u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B941u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB943u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB948u;}
      if(c->pc!=0xB943u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB943u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B943u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0B BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B943u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB946u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB945u))return 0;c->pc=0xBC0Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0B BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B943u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB946u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB945u))return 0;c->pc=0xBC0Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B946u:
    if(m==0u&&x==0u&&e==0u){ /* 80 1F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B946u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB948u;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB948u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB948u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 1F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B946u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB948u;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB948u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB948u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 1F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B946u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB948u;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB948u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB948u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 1F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B946u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB948u;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB948u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB948u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B948u:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B948u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB94Bu;
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B948u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB94Bu;
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B94Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B94Bu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB94Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB952u;}
      if(c->pc!=0xB94Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB94Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B94Bu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB94Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB952u;}
      if(c->pc!=0xB94Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB94Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B94Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 DB B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B94Du,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB950u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB94Fu))return 0;c->pc=0xB9DBu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 DB B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B94Du,3u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB950u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB94Fu))return 0;c->pc=0xB9DBu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B950u:
    if(m==0u&&x==0u&&e==0u){ /* 80 15 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B950u,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB952u;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB952u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB952u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 15 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B950u,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB952u;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB952u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB952u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 15 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B950u,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB952u;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB952u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB952u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 15 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B950u,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB952u;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB952u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB952u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B952u:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B952u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB955u;
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B952u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB955u;
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B955u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B955u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB957u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB95Cu;}
      if(c->pc!=0xB957u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB957u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B955u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB957u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB95Cu;}
      if(c->pc!=0xB957u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB957u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B957u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B957u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB959u))return 0;c->pc=0xBAF5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F5 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B957u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB959u))return 0;c->pc=0xBAF5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B95Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B95Au,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Cu;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB95Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB95Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B95Au,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Cu;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB95Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB95Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B95Au,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Cu;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB95Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB95Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B95Au,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Cu;
      if(1){c->pc=0xB967u;}
      if(c->pc!=0xB95Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB95Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B95Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B95Cu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C07u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 07 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B95Cu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C07u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B95Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 50 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B95Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB962u;
      sc_v11_op_compare(r,c->a,0x0050u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 50 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B95Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB962u;
      sc_v11_op_compare(r,c->a,0x0050u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B962u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B962u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB964u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB967u;}
      if(c->pc!=0xB964u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB964u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B962u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB964u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB967u;}
      if(c->pc!=0xB964u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB964u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B964u:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B964u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB967u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB966u))return 0;c->pc=0xBA47u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 47 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B964u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB967u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB966u))return 0;c->pc=0xBA47u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B967u:
    if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B967u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB968u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B967u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB968u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B967u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB968u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B968u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B968u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB969u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B968u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB969u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B968u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB969u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B96Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B96Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB972u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B972u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B972u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB975u;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B975u:
    if(m==0u&&x==0u&&e==0u){ /* D0 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B975u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB977u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB997u;}
      if(c->pc!=0xB977u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB977u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B977u:
    if(m==0u&&x==0u&&e==0u){ /* AC 40 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B977u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB97Au;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0040u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B97Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B97Au,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB97Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB981u;}
      if(c->pc!=0xB97Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB97Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B97Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B97Cu,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB97Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB97Eu))return 0;c->pc=0xBAF5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B97Fu:
    if(m==0u&&x==0u&&e==0u){ /* 80 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B97Fu,2u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB981u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB981u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB981u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B97Fu,2u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB981u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB981u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB981u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B97Fu,2u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB981u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB981u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB981u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B97Fu,2u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB981u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB981u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB981u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B981u:
    if(m==0u&&x==0u&&e==0u){ /* C0 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B981u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB984u;
      sc_v11_op_compare(r,c->y,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B984u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B984u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB986u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB98Bu;}
      if(c->pc!=0xB986u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB986u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B986u:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B986u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB989u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB988u))return 0;c->pc=0xBA47u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B989u:
    if(m==0u&&x==0u&&e==0u){ /* 80 39 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B989u,2u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB98Bu;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB98Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB98Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 39 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B989u,2u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB98Bu;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB98Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB98Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 39 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B989u,2u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB98Bu;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB98Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB98Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 39 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B989u,2u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB98Bu;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB98Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB98Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B98Bu:
    if(m==0u&&x==0u&&e==0u){ /* C0 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B98Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB98Eu;
      sc_v11_op_compare(r,c->y,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B98Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B98Eu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB990u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB995u;}
      if(c->pc!=0xB990u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB990u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B990u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C1 BA ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B990u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB993u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB992u))return 0;c->pc=0xBAC1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B993u:
    if(m==0u&&x==0u&&e==0u){ /* 80 2F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B993u,2u);r->open_bus=0x2Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB995u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB995u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB995u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 2F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B993u,2u);r->open_bus=0x2Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB995u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB995u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB995u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 2F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B993u,2u);r->open_bus=0x2Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB995u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB995u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB995u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 2F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B993u,2u);r->open_bus=0x2Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB995u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB995u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB995u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B995u:
    if(m==0u&&x==0u&&e==0u){ /* 80 2D ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B995u,2u);r->open_bus=0x2Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB997u;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB997u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB997u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B997u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B997u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB99Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B99Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B99Au,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB99Cu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9CCu;}
      if(c->pc!=0xB99Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB99Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B99Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B99Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB99Fu;
      sc_v11_op_and(r,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B99Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 23 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B99Fu,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9A1u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB9C4u;}
      if(c->pc!=0xB9A1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9A1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9A1u:
    if(m==0u&&x==0u&&e==0u){ /* AC 40 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9A1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9A4u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0040u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9A4u:
    if(m==0u&&x==0u&&e==0u){ /* C0 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9A4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9A7u;
      sc_v11_op_compare(r,c->y,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9A7u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9A7u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB9AEu;}
      if(c->pc!=0xB9A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9A9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0B BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9A9u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9ACu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB9ABu))return 0;c->pc=0xBC0Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9ACu:
    if(m==0u&&x==0u&&e==0u){ /* 80 16 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9ACu,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9AEu;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB9AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 16 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9ACu,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9AEu;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB9AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 16 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9ACu,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9AEu;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB9AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 16 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9ACu,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9AEu;
      if(1){c->pc=0xB9C4u;}
      if(c->pc!=0xB9AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9AEu:
    if(m==0u&&x==0u&&e==0u){ /* C0 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9AEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9B1u;
      sc_v11_op_compare(r,c->y,0x0006u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9B1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 11 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9B1u,2u);r->open_bus=0x11u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9B3u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB9C4u;}
      if(c->pc!=0xB9B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9B3u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9B3u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9B6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9B6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 08 4C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9B6u,3u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9B9u;
      sc_v11_op_compare(r,c->a,0x4C08u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9B9u:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9B9u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9BCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9BCu:
    if(m==0u&&x==0u&&e==0u){ /* E9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9BCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9BFu;
      sc_v11_op_sbc(r,0x0001u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9BFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9BFu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C1u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB9C4u;}
      if(c->pc!=0xB9C1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9C1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9C1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B8 BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C1u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB9C3u))return 0;c->pc=0xBCB8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9C4u:
    if(m==0u&&x==0u&&e==0u){ /* AC 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C4u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C7u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AC 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C4u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C7u;
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C0Du)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AC 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C4u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C7u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C4u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C7u;
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C0Du)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9C7u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C7u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C9u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9CCu;}
      if(c->pc!=0xB9C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C7u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C9u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9CCu;}
      if(c->pc!=0xB9C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C7u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C9u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9CCu;}
      if(c->pc!=0xB9C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C7u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9C9u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9CCu;}
      if(c->pc!=0xB9C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9C9u:
    if(m==0u&&x==0u&&e==0u){ /* CE 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C9u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CCu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C0Du),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C9u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CCu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C0Du),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C9u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CCu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C0Du),8u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 0D 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9C9u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CCu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C0Du),8u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9CCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9CCu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9CCu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9CCu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9CCu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9CDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9CDu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9CDu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9CFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9CFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 8D 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9CFu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9D2u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9D2u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9D2u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9D4u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB9DAu;}
      if(c->pc!=0xB9D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9D4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9D4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9D7u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9D7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 15 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9D7u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9DAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B15u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9DAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9DAu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9DBu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9DBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9DBu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9DBu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9DDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9DDu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9E0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9E0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 64 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E0u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9E2u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBA46u;}
      if(c->pc!=0xB9E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB9E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9E2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9E5u;
      sc_v11_op_lda(r,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9E5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E5u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9E8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB9E7u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9E8u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E8u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9E9u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E8u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9E9u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E8u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9E9u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E8u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9E9u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9E9u:
    if(m==0u&&x==0u&&e==0u){ /* 69 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9ECu;
      sc_v11_op_adc(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9ECu;
      sc_v11_op_adc(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E9u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9EBu;
      sc_v11_op_adc(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9E9u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9EBu;
      sc_v11_op_adc(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9ECu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 59 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9ECu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9EFu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A59u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 59 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9ECu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9EFu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A59u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9EFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 5A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9EFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F2u;
      sc_v11_op_lda(r,0x005Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 5A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9EFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F2u;
      sc_v11_op_lda(r,0x005Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9F2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F2u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB9F4u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F2u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB9F4u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9F5u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F5u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F6u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F5u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F6u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F5u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F6u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F5u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F6u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9F6u:
    if(m==0u&&x==0u&&e==0u){ /* 69 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F9u;
      sc_v11_op_adc(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F9u;
      sc_v11_op_adc(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F6u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F8u;
      sc_v11_op_adc(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F6u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9F8u;
      sc_v11_op_adc(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9F9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D A5 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F9u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9FCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AA5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D A5 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9F9u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9FCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AA5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9FCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9FCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9FFu;
      sc_v11_op_lda(r,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 64 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9FCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB9FFu;
      sc_v11_op_lda(r,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B9FFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9FFu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA02u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA01u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03B9FFu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA02u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA01u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA02u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA02u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA03u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA02u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA03u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA02u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA03u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA02u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA03u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA03u:
    if(m==0u&&x==0u&&e==0u){ /* 69 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA03u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA06u;
      sc_v11_op_adc(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA03u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA06u;
      sc_v11_op_adc(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA03u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA05u;
      sc_v11_op_adc(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA03u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA05u;
      sc_v11_op_adc(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA06u:
    if(m==0u&&x==0u&&e==0u){ /* 8D A3 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA06u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA09u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AA3u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D A3 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA06u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA09u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AA3u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA09u:
    if(m==0u&&x==0u&&e==0u){ /* A9 5A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA09u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA0Cu;
      sc_v11_op_lda(r,0x005Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 5A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA09u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA0Cu;
      sc_v11_op_lda(r,0x005Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA0Cu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA0Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA0Eu))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA0Cu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA0Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA0Eu))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA0Fu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA10u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA0Fu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA10u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA0Fu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA10u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA0Fu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA10u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA10u:
    if(m==0u&&x==0u&&e==0u){ /* 69 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA10u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA13u;
      sc_v11_op_adc(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA10u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA13u;
      sc_v11_op_adc(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA10u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA12u;
      sc_v11_op_adc(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA10u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA12u;
      sc_v11_op_adc(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA13u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 57 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA13u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA16u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A57u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 57 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA13u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA16u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A57u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA16u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA16u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA19u;
      sc_v11_op_lda(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA16u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA19u;
      sc_v11_op_lda(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA19u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 8B 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA19u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA1Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 8B 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA19u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA1Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 75 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA1Cu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA1Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A75u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 75 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA1Cu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA1Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A75u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA1Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 73 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA1Fu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA22u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A73u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 73 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA1Fu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA22u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A73u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA22u:
    if(m==0u&&x==0u&&e==0u){ /* AD 59 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA22u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA25u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A59u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 59 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA22u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA25u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A59u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA25u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA25u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA28u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0400u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 00 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA25u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA28u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0400u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA28u:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA28u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA2Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 57 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA28u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA2Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA2Bu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA2Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0402u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 02 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA2Bu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA2Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0402u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA2Eu:
    if(m==0u&&x==0u&&e==0u){ /* EE FE 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA2Eu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA31u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE FE 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA2Eu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA31u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA31u:
    if(m==0u&&x==0u&&e==0u){ /* A9 23 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA31u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA34u;
      sc_v11_op_lda(r,0x0023u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 23 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA31u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA34u;
      sc_v11_op_lda(r,0x0023u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA34u:
    if(m==0u&&x==0u&&e==0u){ /* 20 04 BE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA34u,3u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA37u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA36u))return 0;c->pc=0xBE04u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 04 BE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA34u,3u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA37u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA36u))return 0;c->pc=0xBE04u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA37u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA37u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Au;
      sc_v11_op_lda(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA37u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Au;
      sc_v11_op_lda(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA37u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA39u;
      sc_v11_op_lda(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA37u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA39u;
      sc_v11_op_lda(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA3Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA3Au,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA3Cu))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA3Au,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA3Cu))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA3Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA3Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA3Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA3Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA3Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA3Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 22 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA3Fu,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA41u;
      sc_v11_op_lda(r,0x0022u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 22 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA3Fu,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA41u;
      sc_v11_op_lda(r,0x0022u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA41u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA41u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA44u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA41u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA44u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA44u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA44u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA46u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA44u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA46u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA46u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA46u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA47u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA46u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA47u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA47u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA47u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA49u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA47u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA49u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA49u:
    if(m==0u&&x==0u&&e==0u){ /* AD 91 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA49u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA4Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A91u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA4Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 72 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA4Cu,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA4Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBAC0u;}
      if(c->pc!=0xBA4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBA4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA4Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA4Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA51u;
      sc_v11_op_lda(r,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA51u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA51u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA54u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA53u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA54u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA54u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA55u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA54u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA55u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA54u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA55u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA54u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA55u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA55u:
    if(m==0u&&x==0u&&e==0u){ /* 69 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA55u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA58u;
      sc_v11_op_adc(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA55u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA58u;
      sc_v11_op_adc(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA55u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA57u;
      sc_v11_op_adc(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA55u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA57u;
      sc_v11_op_adc(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA58u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 51 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA58u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA5Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A51u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 51 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA58u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA5Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A51u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA5Bu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA5Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0400u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 00 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA5Bu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA5Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0400u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA5Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 5A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA5Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA61u;
      sc_v11_op_lda(r,0x005Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 5A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA5Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA61u;
      sc_v11_op_lda(r,0x005Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA61u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA61u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA64u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA63u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA61u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA64u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA63u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA64u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA64u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA65u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA64u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA65u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA64u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA65u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA64u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA65u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA65u:
    if(m==0u&&x==0u&&e==0u){ /* 69 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA65u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA68u;
      sc_v11_op_adc(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 05 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA65u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA68u;
      sc_v11_op_adc(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA65u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA67u;
      sc_v11_op_adc(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA65u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA67u;
      sc_v11_op_adc(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA68u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4F 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA68u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA6Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A4Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 4F 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA68u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA6Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A4Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA6Bu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA6Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0402u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 02 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA6Bu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA6Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0402u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA6Eu:
    if(m==0u&&x==0u&&e==0u){ /* EE FE 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA6Eu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA71u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE FE 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA6Eu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA71u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA71u:
    if(m==0u&&x==0u&&e==0u){ /* A9 09 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA71u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA74u;
      sc_v11_op_lda(r,0x0009u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 09 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA71u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA74u;
      sc_v11_op_lda(r,0x0009u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA74u:
    if(m==0u&&x==0u&&e==0u){ /* 20 04 BE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA74u,3u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA77u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA76u))return 0;c->pc=0xBE04u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 04 BE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA74u,3u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA77u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA76u))return 0;c->pc=0xBE04u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA77u:
    if(m==0u&&x==0u&&e==0u){ /* A9 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA77u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA7Au;
      sc_v11_op_lda(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA77u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA7Au;
      sc_v11_op_lda(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA77u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA79u;
      sc_v11_op_lda(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA77u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA79u;
      sc_v11_op_lda(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA7Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA7Au,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA7Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA7Cu))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA7Au,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA7Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBA7Cu))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA7Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 09 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA7Du,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA80u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C09u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 09 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA7Du,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA80u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C09u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 09 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA7Du,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA80u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C09u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 09 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA7Du,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA80u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C09u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA80u:
    if(m==0u&&x==0u&&e==0u){ /* 8D BD 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA80u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA83u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D BD 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA80u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA83u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D BD 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA80u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA83u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0ABDu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D BD 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA80u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA83u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0ABDu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA83u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA83u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA86u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 0B 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA83u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA86u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 0B 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA83u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA86u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C0Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 0B 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA83u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA86u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C0Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA86u:
    if(m==0u&&x==0u&&e==0u){ /* 8D BB 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA86u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA89u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D BB 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA86u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA89u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D BB 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA86u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA89u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0ABBu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D BB 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA86u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA89u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0ABBu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA89u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA89u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA8Cu;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA89u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA8Cu;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA89u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA8Bu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA89u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA8Bu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 91 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA8Cu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA8Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A91u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 91 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA8Cu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA8Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A91u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C BF 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA8Fu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA92u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C BF 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA8Fu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA92u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA92u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 6D 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA92u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA95u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A6Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 6D 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA92u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA95u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A6Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA95u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 6B 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA95u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA98u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A6Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 6B 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA95u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA98u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A6Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA98u:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA98u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA9Bu;
      sc_v11_op_ldy(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA98u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA9Au;
      sc_v11_op_ldy(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA9Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD BB 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA9Bu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA9Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ABBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA9Eu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA9Fu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BA9Fu:
    if(m==0u&&x==0u&&e==0u){ /* ED 4F 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BA9Fu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAA2u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A4Fu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAA2u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAA2u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAA4u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAA4u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAA4u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAA6u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBAA9u;}
      if(c->pc!=0xBAA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAA6u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAA6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAA9u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAA9u:
    if(m==0u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAA9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAACu;
      sc_v11_op_ldx(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAACu:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAACu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAAFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ABDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAAFu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAAFu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAB0u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAB0u:
    if(m==0u&&x==0u&&e==0u){ /* ED 51 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAB0u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAB3u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A51u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAB3u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAB3u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAB5u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBAB8u;}
      if(c->pc!=0xBAB5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAB5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAB5u:
    if(m==0u&&x==0u&&e==0u){ /* A2 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAB5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAB8u;
      sc_v11_op_ldx(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAB8u:
    if(m==0u&&x==0u&&e==0u){ /* C5 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAB8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBABAu;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BABAu:
    if(m==0u&&x==0u&&e==0u){ /* 90 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BABAu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBABCu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBABDu;}
      if(c->pc!=0xBABCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBABCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BABCu:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BABCu,1u);r->open_bus=0x9Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBABDu;
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BABDu:
    if(m==0u&&x==0u&&e==0u){ /* 8C C1 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BABDu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AC1u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAC0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAC0u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC1u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAC1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAC1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAC3u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAC3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC6u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAC6u:
    if(m==0u&&x==0u&&e==0u){ /* 64 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAC6u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC8u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAC8u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAC8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBACAu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BACAu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BACAu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBACEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BACEu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BACEu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAD1u;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAD1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 7C 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAD1u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAD4u;
      sc_v11_op_compare(r,c->a,0x027Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAD4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAD4u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAD6u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBAE0u;}
      if(c->pc!=0xBAD6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAD6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAD6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAD6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAD8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAD8u:
    if(m==1u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAD8u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBADAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BADAu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BADAu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBADBu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BADBu:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BADBu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBADDu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BADDu:
    if(m==1u&&x==0u&&e==0u){ /* 4C 61 BD ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BADDu,3u);r->open_bus=0xBDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE0u;
      c->pc=0xBD61u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAE0u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAE0u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE1u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAE1u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAE1u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE2u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAE2u:
    if(m==0u&&x==0u&&e==0u){ /* E6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAE2u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE4u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAE4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAE4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAE6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAE6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAE9u;
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAE9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DF ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAE9u,2u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAEBu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBACAu;}
      if(c->pc!=0xBAEBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAEBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAEBu:
    if(m==0u&&x==0u&&e==0u){ /* E6 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAEBu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAEDu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAEDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAEDu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAEFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAEFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAEFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAF2u;
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAF2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 D4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAF2u,2u);r->open_bus=0xD4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAF4u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBAC8u;}
      if(c->pc!=0xBAF4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAF4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAF4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAF4u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAF5u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAF5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAF5u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAF7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAF5u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAF7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAF7u:
    if(m==0u&&x==0u&&e==0u){ /* AD A9 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAF7u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAFAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA9u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAFAu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAFAu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAFDu;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BAFDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BAFDu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB00u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0400u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB00u:
    if(m==0u&&x==0u&&e==0u){ /* AD AA 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB00u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB03u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BAAu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB03u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB03u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB06u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB06u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB06u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB09u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0402u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB09u:
    if(m==0u&&x==0u&&e==0u){ /* EE FE 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB09u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB0Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB0Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB0Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB0Fu;
      sc_v11_op_lda(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 04 BE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB0Fu,3u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB12u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB11u))return 0;c->pc=0xBE04u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB12u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0E 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB12u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB15u;
      sc_v11_op_lda(r,0x000Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0E 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB12u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB15u;
      sc_v11_op_lda(r,0x000Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB12u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB14u;
      sc_v11_op_lda(r,0x000Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB12u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB14u;
      sc_v11_op_lda(r,0x000Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB15u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB15u,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB18u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB17u))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB15u,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB18u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB17u))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB18u:
    if(m==0u&&x==0u&&e==0u){ /* A9 5E 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB18u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Bu;
      sc_v11_op_lda(r,0x015Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 5E 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB18u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Bu;
      sc_v11_op_lda(r,0x015Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 5E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB18u,2u);r->open_bus=0x5Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Au;
      sc_v11_op_lda(r,0x005Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 5E ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB18u,2u);r->open_bus=0x5Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Au;
      sc_v11_op_lda(r,0x005Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB1Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Bu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB1Du))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Bu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB1Du))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Eu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Fu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Eu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Fu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Eu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Fu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Eu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB1Fu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB1Fu:
    if(m==0u&&x==0u&&e==0u){ /* 69 C8 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB22u;
      sc_v11_op_adc(r,0x00C8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 C8 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB22u;
      sc_v11_op_adc(r,0x00C8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Fu,2u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB21u;
      sc_v11_op_adc(r,0x00C8u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB1Fu,2u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB21u;
      sc_v11_op_adc(r,0x00C8u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB22u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB22u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB24u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB22u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB24u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB24u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB24u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB27u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C0Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB24u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB27u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C0Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB27u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB27u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB29u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB27u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB29u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB29u:
    if(m==1u&&x==0u&&e==0u){ /* A9 09 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB29u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB2Bu;
      sc_v11_op_lda(r,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 09 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB29u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB2Bu;
      sc_v11_op_lda(r,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB2Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB2Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB2Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB2Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB2Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB2Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB2Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB30u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB2Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB30u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB30u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB30u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB33u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB32u))return 0;c->pc=0xBC9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9F BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB30u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB33u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB32u))return 0;c->pc=0xBC9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9F BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB30u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB33u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB32u))return 0;c->pc=0xBC9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9F BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB30u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB33u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB32u))return 0;c->pc=0xBC9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB33u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4F BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB33u,3u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB36u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB35u))return 0;c->pc=0xBB4Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4F BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB33u,3u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB36u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB35u))return 0;c->pc=0xBB4Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4F BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB33u,3u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB36u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB35u))return 0;c->pc=0xBB4Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4F BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB33u,3u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB36u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB35u))return 0;c->pc=0xBB4Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB36u:
    if(m==0u&&x==0u&&e==0u){ /* F0 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB36u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB38u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBB4Au;}
      if(c->pc!=0xBB38u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB38u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB36u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB38u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBB4Au;}
      if(c->pc!=0xBB38u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB38u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB36u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB38u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBB4Au;}
      if(c->pc!=0xBB38u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB38u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB36u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB38u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBB4Au;}
      if(c->pc!=0xBB38u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB38u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB38u:
    if(m==0u&&x==0u&&e==0u){ /* A0 28 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB38u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB3Bu;
      sc_v11_op_ldy(r,0x0028u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB38u,2u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB3Au;
      sc_v11_op_ldy(r,0x0028u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 28 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB38u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB3Bu;
      sc_v11_op_ldy(r,0x0028u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB38u,2u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB3Au;
      sc_v11_op_ldy(r,0x0028u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB3Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB3Bu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB3Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB3Bu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB3Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB3Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB3Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB40u;
      sc_v11_op_and(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB3Du,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB3Fu;
      sc_v11_op_and(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB40u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB40u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB42u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB45u;}
      if(c->pc!=0xBB42u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB42u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB42u:
    if(m==0u&&x==0u&&e==0u){ /* A0 7F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB42u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB45u;
      sc_v11_op_ldy(r,0x007Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB45u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB45u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB47u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB47u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C4 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB47u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB49u))return 0;c->pc=0x84C4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB4Au:
    if(m==0u&&x==0u&&e==0u){ /* C6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB4Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Cu,2u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB30u;}
      if(c->pc!=0xBB4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Cu,2u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB30u;}
      if(c->pc!=0xBB4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Cu,2u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB30u;}
      if(c->pc!=0xBB4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 E2 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Cu,2u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB30u;}
      if(c->pc!=0xBB4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB4Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB4Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB4Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB52u;
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 80 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB52u;
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Fu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB51u;
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB4Fu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB51u;
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB52u:
    if(m==0u&&x==0u&&e==0u){ /* 90 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB52u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB54u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBB66u;}
      if(c->pc!=0xBB54u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB54u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 12 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB52u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB54u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBB66u;}
      if(c->pc!=0xBB54u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB54u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB54u:
    if(m==0u&&x==0u&&e==0u){ /* C9 BC 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB54u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB57u;
      sc_v11_op_compare(r,c->a,0x02BCu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 BC 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB54u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB57u;
      sc_v11_op_compare(r,c->a,0x02BCu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB57u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0D ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB57u,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB59u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBB66u;}
      if(c->pc!=0xBB59u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB59u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 0D ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB57u,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB59u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBB66u;}
      if(c->pc!=0xBB59u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB59u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB59u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB59u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB5Au;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB59u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB5Au;
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB5Au:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB5Au,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB5Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB5Au,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB5Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB5Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB5Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB60u;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB5Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB60u;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB60u:
    if(m==0u&&x==0u&&e==0u){ /* D0 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB60u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB62u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB66u;}
      if(c->pc!=0xBB62u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB62u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB60u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB62u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB66u;}
      if(c->pc!=0xBB62u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB62u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB62u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB62u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB65u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB62u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB65u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB65u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB65u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB66u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB65u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB66u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB66u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB66u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB69u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB66u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB69u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB69u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB69u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB6Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB69u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB6Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB6Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB6Au,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB6Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB6Au,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB6Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB6Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 14 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB6Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB6Fu;
      sc_v11_op_lda(r,0x0014u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB6Fu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB71u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB71u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB71u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB74u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB73u))return 0;c->pc=0xBC9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9F BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB71u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB74u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB73u))return 0;c->pc=0xBC9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB74u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB74u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB75u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB74u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB75u;
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB74u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB75u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB74u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB75u;
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB75u:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB75u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB78u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB75u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB78u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB75u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB78u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB75u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB78u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB78u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB78u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Bu;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB78u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Bu;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB78u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Au;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB78u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Au;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB7Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 37 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB7Bu,2u);r->open_bus=0x37u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBBB4u;}
      if(c->pc!=0xBB7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 37 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB7Bu,2u);r->open_bus=0x37u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBBB4u;}
      if(c->pc!=0xBB7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB7Du:
    if(m==0u&&x==0u&&e==0u){ /* C0 88 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB7Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB80u;
      sc_v11_op_compare(r,c->y,0x0088u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C0 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB7Du,2u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Fu;
      sc_v11_op_compare(r,c->y,0x0088u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB80u:
    if(m==0u&&x==0u&&e==0u){ /* 90 32 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB80u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB82u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBBB4u;}
      if(c->pc!=0xBB82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB82u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB82u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB85u;
      sc_v11_op_lda(r,0x007Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB85u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB85u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB89u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB89u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB89u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB8Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB8Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB8Bu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB8Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB8Du:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB8Du,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB90u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB90u:
    if(m==1u&&x==0u&&e==0u){ /* A5 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB90u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB92u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x05u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB92u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB92u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB95u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB95u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB95u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB97u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB97u:
    if(m==0u&&x==0u&&e==0u){ /* EE FE 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB97u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB9Au;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB9Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB9Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB9Du;
      sc_v11_op_lda(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BB9Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 04 BE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BB9Du,3u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBB9Fu))return 0;c->pc=0xBE04u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBA0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0B 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA3u;
      sc_v11_op_lda(r,0x000Bu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0B 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA3u;
      sc_v11_op_lda(r,0x000Bu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA0u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA2u;
      sc_v11_op_lda(r,0x000Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA0u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA2u;
      sc_v11_op_lda(r,0x000Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBA3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA3u,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBBA5u))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA3u,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBBA5u))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBA6u:
    if(m==0u&&x==0u&&e==0u){ /* EE 9F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA6u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA9u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C9Fu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 9F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA6u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA9u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C9Fu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE 9F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA6u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA9u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C9Fu),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE 9F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA6u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA9u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C9Fu),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBA9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBABu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBABu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBABu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBA9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBABu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBABu:
    if(m==1u&&x==0u&&e==0u){ /* A9 21 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBABu,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBADu;
      sc_v11_op_lda(r,0x0021u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 21 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBABu,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBADu;
      sc_v11_op_lda(r,0x0021u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBADu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBADu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBADu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBB0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBB2u:
    if(m==0u&&x==0u&&e==0u){ /* 80 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB2u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB4u;
      if(1){c->pc=0xBBB8u;}
      if(c->pc!=0xBBB4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBB4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB2u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB4u;
      if(1){c->pc=0xBBB8u;}
      if(c->pc!=0xBBB4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBB4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBB4u:
    if(m==0u&&x==0u&&e==0u){ /* C6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB6u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB6u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBB6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB6u,2u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB8u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB71u;}
      if(c->pc!=0xBBB8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBB8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 B9 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB6u,2u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB8u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB71u;}
      if(c->pc!=0xBBB8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBB8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBB8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBB9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB9u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBBBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBB9u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBBBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBBBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBBBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBBEu;
      sc_v11_op_lda(r,0x0028u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBBEu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBBEu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC0u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBC0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC0u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBBC2u))return 0;c->pc=0xBC9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9F BC ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC0u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBBC2u))return 0;c->pc=0xBC9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBC3u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC3u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC4u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC3u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC4u;
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC3u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC4u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC3u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC4u;
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBC4u:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC4u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC4u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC4u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC4u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBC7u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCAu;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCAu;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC7u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC9u;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBC7u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC9u;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBCAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 3A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBCAu,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCCu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC06u;}
      if(c->pc!=0xBBCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 3A ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBCAu,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCCu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC06u;}
      if(c->pc!=0xBBCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBCCu:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBCCu,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBCCu,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBCFu:
    if(m==0u&&x==0u&&e==0u){ /* 29 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBCFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBD2u;
      sc_v11_op_and(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 04 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBCFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBD2u;
      sc_v11_op_and(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBD2u:
    if(m==0u&&x==0u&&e==0u){ /* F0 32 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBD2u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBD4u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC06u;}
      if(c->pc!=0xBBD4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBD4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 32 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBD2u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBD4u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC06u;}
      if(c->pc!=0xBBD4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBD4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBD4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBD4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBD7u;
      sc_v11_op_lda(r,0x007Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 7F 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBD4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBD7u;
      sc_v11_op_lda(r,0x007Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBD7u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBD7u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBDBu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBD7u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBDBu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBDBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBDBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBDDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBDBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBDDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBDDu:
    if(m==1u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBDDu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBDFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBDDu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBDFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBDFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBDFu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBE2u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 00 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBDFu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBE2u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBE2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBE2u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBE4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x05u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBE2u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBE4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x05u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBE4u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBE4u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBE7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 02 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBE4u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBE7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBE7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBE7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBE9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBE7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBE9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBE9u:
    if(m==0u&&x==0u&&e==0u){ /* EE FE 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBE9u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBECu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE FE 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBE9u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBECu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBECu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBECu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBEFu;
      sc_v11_op_lda(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 20 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBECu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBEFu;
      sc_v11_op_lda(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBEFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 04 BE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBEFu,3u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBBF1u))return 0;c->pc=0xBE04u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 04 BE ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBEFu,3u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBBF1u))return 0;c->pc=0xBE04u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBF2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0B 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF5u;
      sc_v11_op_lda(r,0x000Bu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0B 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF5u;
      sc_v11_op_lda(r,0x000Bu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF2u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF4u;
      sc_v11_op_lda(r,0x000Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0B ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF2u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF4u;
      sc_v11_op_lda(r,0x000Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBF5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF5u,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBBF7u))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF5u,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBF8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBBF7u))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBF8u:
    if(m==0u&&x==0u&&e==0u){ /* EE 9F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF8u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFBu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C9Fu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 9F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF8u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFBu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C9Fu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE 9F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF8u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFBu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C9Fu),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE 9F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBF8u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFBu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C9Fu),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBFBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBFBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBFBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBFBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBFBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBFDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 21 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBFDu,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFFu;
      sc_v11_op_lda(r,0x0021u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 21 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBFDu,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFFu;
      sc_v11_op_lda(r,0x0021u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03BBFFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBFFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBC02u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 06 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x03BBFFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBC02u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
