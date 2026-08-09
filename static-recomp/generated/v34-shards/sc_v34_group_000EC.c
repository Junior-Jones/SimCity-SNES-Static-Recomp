/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000EC(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03B000u:
    if(m==0u&&x==0u&&e==0u){ /* CD 59 0C Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B000u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB003u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C59u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B003u:
    if(m==0u&&x==0u&&e==0u){ /* F0 65 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B003u,2u);r->open_bus=0x65u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB005u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB06Au;}
      if(c->pc!=0xB005u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB005u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B005u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A3 B0 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B005u,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB008u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB007u))return 0;c->pc=0xB0A3u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B008u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B008u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB00Bu;
      sc_v11_op_lda(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B00Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B00Bu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB00Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B00Du:
    if(m==0u&&x==0u&&e==0u){ /* E6 12 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B00Du,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB00Fu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x12u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B00Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 02 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B00Fu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB011u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB013u;}
      if(c->pc!=0xB011u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB011u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B013u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0E Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B013u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB015u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B015u:
    if(m==0u&&x==0u&&e==0u){ /* C5 12 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B015u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB017u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x12u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B017u:
    if(m==0u&&x==0u&&e==0u){ /* A5 10 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B017u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB019u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x10u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B019u:
    if(m==0u&&x==0u&&e==0u){ /* E5 14 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B019u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB01Bu;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x14u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B01Bu:
    if(m==0u&&x==0u&&e==0u){ /* B0 14 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B01Bu,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB01Du;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB031u;}
      if(c->pc!=0xB01Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB01Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B031u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B031u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB033u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B033u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F4 8F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B033u,3u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB036u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB035u))return 0;c->pc=0x8FF4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B036u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E5 B0 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B036u,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB039u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB038u))return 0;c->pc=0xB0E5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B039u:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B039u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB03Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B03Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 04 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B03Bu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB03Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B03Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B03Du,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB03Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B03Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B03Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB042u;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B042u:
    if(m==0u&&x==0u&&e==0u){ /* B0 16 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B042u,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB044u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB05Au;}
      if(c->pc!=0xB044u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB044u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B044u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B044u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB046u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B046u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B046u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB049u;
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B049u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B049u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB04Bu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB05Au;}
      if(c->pc!=0xB04Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB04Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B04Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 6C B0 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B04Bu,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB04Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB04Du))return 0;c->pc=0xB06Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B04Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B04Eu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB050u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB056u;}
      if(c->pc!=0xB050u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB050u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B050u:
    if(m==0u&&x==0u&&e==0u){ /* E6 02 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B050u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB052u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B052u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B052u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB054u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B054u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B054u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB056u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B056u:
    if(m==0u&&x==0u&&e==0u){ /* E6 04 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B056u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB058u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B058u:
    if(m==0u&&x==0u&&e==0u){ /* 80 E3 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B058u,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB05Au;
      if(1){c->pc=0xB03Du;}
      if(c->pc!=0xB05Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB05Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B05Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B05Au,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB05Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B05Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B05Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB05Fu;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B05Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B05Fu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB061u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB064u;}
      if(c->pc!=0xB061u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB061u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B061u:
    if(m==0u&&x==0u&&e==0u){ /* 20 BE B0 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B061u,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB064u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB063u))return 0;c->pc=0xB0BEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B064u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B064u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB066u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B066u:
    if(m==0u&&x==0u&&e==0u){ /* D0 A5 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B066u,2u);r->open_bus=0xA5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB068u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB00Du;}
      if(c->pc!=0xB068u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB068u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B068u:
    if(m==0u&&x==0u&&e==0u){ /* 80 93 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B068u,2u);r->open_bus=0x93u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB06Au;
      if(1){c->pc=0xAFFDu;}
      if(c->pc!=0xB06Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB06Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B06Au:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B06Au,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB06Bu;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B06Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B06Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB06Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B06Cu:
    if(m==0u&&x==0u&&e==0u){ /* AE 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B06Cu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB06Fu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B06Fu:
    if(m==0u&&x==0u&&e==0u){ /* 86 16 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B06Fu,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB071u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x16u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B071u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F4 8F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B071u,3u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB074u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB073u))return 0;c->pc=0x8FF4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B074u:
    if(m==0u&&x==0u&&e==0u){ /* F0 24 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B074u,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB076u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB09Au;}
      if(c->pc!=0xB076u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB076u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B076u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F8 B0 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B076u,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB079u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB078u))return 0;c->pc=0xB0F8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B079u:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B079u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB07Cu;
      sc_v11_op_compare(r,c->y,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B07Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 1C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B07Cu,2u);r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB07Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB09Au;}
      if(c->pc!=0xB07Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB07Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B07Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B07Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB081u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B081u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9E 84 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B081u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB084u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB083u))return 0;c->pc=0x849Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B084u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B084u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB087u;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B087u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B087u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB088u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B088u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B088u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB08Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B08Au:
    if(m==1u&&x==0u&&e==0u){ /* BD EB 84 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B08Au,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB08Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B08Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B08Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB08Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B08Fu:
    if(m==0u&&x==0u&&e==0u){ /* 10 09 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B08Fu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB091u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB09Au;}
      if(c->pc!=0xB091u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB091u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B091u:
    if(m==0u&&x==0u&&e==0u){ /* A5 16 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B091u,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB093u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x16u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B093u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B093u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB096u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B096u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B096u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB099u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B099u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B099u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB09Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B09Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 16 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B09Au,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB09Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x16u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B09Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B09Cu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB09Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B09Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B09Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0A2u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0A2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0A2u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0A3u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0A3u:
    if(m==0u&&x==0u&&e==0u){ /* AE 57 0C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0A3u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0A6u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0A6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 15 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0A6u,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0A8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB0BDu;}
      if(c->pc!=0xB0A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0A8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0A8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0AAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0AAu:
    if(m==1u&&x==0u&&e==0u){ /* BF E4 D1 7F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0AAu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0AEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FD1E4u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0AEu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0AEu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0B1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0B1u:
    if(m==1u&&x==0u&&e==0u){ /* BF 6C E5 7F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0B1u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0B5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FE56Cu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0B5u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 86 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0B5u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0B8u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0B8u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0B8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0BAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0BAu:
    if(m==0u&&x==0u&&e==0u){ /* CE 57 0C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0BAu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0BDu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C57u),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0BDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0BDu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0BEu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0BEu:
    if(m==0u&&x==0u&&e==0u){ /* AE 57 0C Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0BEu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0C1u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0C1u:
    if(m==0u&&x==0u&&e==0u){ /* E0 88 13 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0C1u,3u);r->open_bus=0x13u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0C4u;
      sc_v11_op_compare(r,c->x,0x1388u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0C4u:
    if(m==0u&&x==0u&&e==0u){ /* B0 16 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0C4u,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0C6u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB0DCu;}
      if(c->pc!=0xB0C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0C6u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0C6u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0C7u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0C7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0C7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0C9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0C9u:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0C9u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0CCu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0CCu:
    if(m==1u&&x==0u&&e==0u){ /* 9F E4 D1 7F Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0CCu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0D0u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FD1E4u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0D0u:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0D0u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0D3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0D3u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 6C E5 7F Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0D3u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0D7u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FE56Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0D7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0D7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0D9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0D9u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 57 0C Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0D9u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0DCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C57u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0DCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0DCu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0DDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0E5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 20 B1 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0E5u,3u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0E8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0E7u))return 0;c->pc=0xB120u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0E8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0E8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0EAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0EAu:
    if(m==1u&&x==0u&&e==0u){ /* BF 98 A5 7F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0EAu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0EEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FA598u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0EEu:
    if(m==1u&&x==0u&&e==0u){ /* 19 DD B0 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0EEu,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0F1u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xB0DDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0F1u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 98 A5 7F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0F1u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0F5u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FA598u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0F5u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0F5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0F7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0F7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0F7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0F8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0F8u:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0F8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0FBu;
      sc_v11_op_ldy(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0FBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0FBu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB0FEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B0FEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 7C 02 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B0FEu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB101u;
      sc_v11_op_compare(r,c->a,0x027Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B101u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B101u,2u);r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB103u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB11Fu;}
      if(c->pc!=0xB103u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB103u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B103u:
    if(m==0u&&x==0u&&e==0u){ /* C9 8C 02 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B103u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB106u;
      sc_v11_op_compare(r,c->a,0x028Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B106u:
    if(m==0u&&x==0u&&e==0u){ /* F0 17 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B106u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB108u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB11Fu;}
      if(c->pc!=0xB108u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB108u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B108u:
    if(m==0u&&x==0u&&e==0u){ /* 20 20 B1 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B108u,3u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB10Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB10Au))return 0;c->pc=0xB120u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B10Bu:
    if(m==0u&&x==0u&&e==0u){ /* E0 DC 05 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B10Bu,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB10Eu;
      sc_v11_op_compare(r,c->x,0x05DCu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B10Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B10Eu,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB110u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB11Fu;}
      if(c->pc!=0xB110u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB110u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B110u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B110u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB112u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B112u:
    if(m==1u&&x==0u&&e==0u){ /* BF 98 A5 7F Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B112u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB116u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FA598u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B116u:
    if(m==1u&&x==0u&&e==0u){ /* 39 DD B0 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B116u,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB119u;
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xB0DDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B119u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B119u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB11Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B11Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B11Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB11Eu;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B11Eu:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B11Eu,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB11Fu;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B11Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B11Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB120u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B120u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B120u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB122u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B122u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B122u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB124u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B124u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B124u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB125u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B125u:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B125u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB128u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B128u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B128u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB12Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B12Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5B 0C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B12Au,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB12Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C5Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B12Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B12Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB12Eu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B12Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B12Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB12Fu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B12Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B12Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB130u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B130u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B130u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB131u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B131u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B131u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB132u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B132u:
    if(m==0u&&x==0u&&e==0u){ /* ED 5B 0C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B132u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB135u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C5Bu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B135u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5B 0C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B135u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB138u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C5Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B138u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B138u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB13Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B13Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B13Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB13Cu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B13Cu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B13Cu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB13Du;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B13Du:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B13Du,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB140u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B140u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B140u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB142u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B142u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B142u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB143u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B143u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B143u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB144u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B144u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B144u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB145u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B145u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B145u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB146u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B146u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 5B 0C Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B146u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB149u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C5Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B149u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B149u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB14Au;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B14Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B14Au,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB14Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B14Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B14Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB150u;
      sc_v11_op_and(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B150u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B150u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB151u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B151u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B151u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB152u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B152u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B152u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB154u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B154u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B154u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB155u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B155u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B155u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB156u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B156u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B156u,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB157u;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B157u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B157u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB158u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B158u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B158u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB15Bu;
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B15Bu:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B15Bu,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB15Cu;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B15Cu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B15Cu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB15Du;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B15Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B15Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB15Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B15Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B15Fu,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB160u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B160u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7F Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B160u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB162u;
      sc_v11_op_lda(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B162u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B162u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB163u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B163u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B163u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB164u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B164u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B164u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB166u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B166u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B166u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB169u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B169u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B169u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB16Cu;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B16Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B16Cu,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB16Du;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B16Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 1E 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B16Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB170u;
      sc_v11_op_and(r,0x001Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B170u:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B170u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB172u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB17Au;}
      if(c->pc!=0xB172u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB172u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B172u:
    if(m==0u&&x==0u&&e==0u){ /* B9 98 A5 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B172u,3u);r->open_bus=0xA5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB175u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA598u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B175u:
    if(m==0u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B175u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB176u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B176u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B176u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB178u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B178u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B178u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB179u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B179u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B179u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB17Au;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B17Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B17Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB17Du;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B17Du:
    if(m==0u&&x==0u&&e==0u){ /* 8F 3F 02 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B17Du,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB181u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x00023Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B181u:
    if(m==0u&&x==0u&&e==0u){ /* BD 00 02 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B181u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB184u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0200u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B184u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 7F Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B184u,3u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB187u;
      sc_v11_op_and(r,0x7FFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B187u:
    if(m==0u&&x==0u&&e==0u){ /* 06 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B187u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB189u;
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x00u),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B189u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B189u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB18Bu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB18Eu;}
      if(c->pc!=0xB18Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB18Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B18Bu:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 80 Mesen corrected gameplay frame 3838; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B18Bu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB18Eu;
      sc_v11_op_ora(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B18Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9D 00 02 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B18Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB191u;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0200u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B191u:
    if(m==0u&&x==0u&&e==0u){ /* AF 3F 02 00 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B191u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB195u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x00023Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B195u:
    if(m==0u&&x==0u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B195u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB197u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB19Bu;}
      if(c->pc!=0xB197u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB197u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B19Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B19Bu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB19Cu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B19Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B19Cu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB19Du;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B19Du:
    if(m==0u&&x==0u&&e==0u){ /* E0 C0 5D Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B19Du,3u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB1A0u;
      sc_v11_op_compare(r,c->x,0x5DC0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B1A0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 CA Mesen corrected gameplay frame 2679; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B1A0u,2u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB1A2u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB16Cu;}
      if(c->pc!=0xB1A2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1A2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B1A2u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B1A2u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB1A3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B1A3u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B1A3u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB1A4u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B1A4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B1A4u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB1A5u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
