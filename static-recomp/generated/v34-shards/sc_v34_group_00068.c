/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00068(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01A064u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A064u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA066u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A066u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A066u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA068u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A068u:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A068u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA06Au;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A06Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A06Au,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA06Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A06Cu:
    if(m==1u&&x==0u&&e==0u){ /* 64 6A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A06Cu,2u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA06Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A06Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 B3 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A06Eu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA070u;
      sc_v11_op_lda(r,0x00B3u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A070u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6D Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A070u,2u);r->open_bus=0x6Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA072u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A072u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A072u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA074u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A074u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6C Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A074u,2u);r->open_bus=0x6Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA076u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A076u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E0 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A076u,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA078u;
      sc_v11_op_lda(r,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A078u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A078u,2u);r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA07Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A07Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A07Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA07Cu;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A07Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A07Cu,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA07Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A07Eu:
    if(m==1u&&x==0u&&e==0u){ /* 64 6F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A07Eu,2u);r->open_bus=0x6Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA080u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A080u:
    if(m==1u&&x==0u&&e==0u){ /* A9 04 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A080u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA082u;
      sc_v11_op_lda(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A082u:
    if(m==1u&&x==0u&&e==0u){ /* AE D7 01 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A082u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA085u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A085u:
    if(m==1u&&x==0u&&e==0u){ /* D0 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A085u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA087u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA089u;}
      if(c->pc!=0xA087u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA087u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A089u:
    if(m==1u&&x==0u&&e==0u){ /* 85 69 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A089u,2u);r->open_bus=0x69u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA08Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A08Bu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A08Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA08Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A08Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A08Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA08Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A08Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 5F 00 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A08Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA091u;
      sc_v11_op_lda(r,0x005Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A091u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C5 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A091u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA094u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A094u:
    if(m==0u&&x==0u&&e==0u){ /* A9 F9 FF Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A094u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA097u;
      sc_v11_op_lda(r,0xFFF9u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A097u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C7 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A097u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA09Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C7u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A09Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 4E 00 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A09Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA09Du;
      sc_v11_op_lda(r,0x004Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A09Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D C9 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A09Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA0A0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C9u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A0A0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FA FF Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A0A0u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA0A3u;
      sc_v11_op_lda(r,0xFFFAu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A0A3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CB 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A0A3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA0A6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01A0A6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01A0A6u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA0A7u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
