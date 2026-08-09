/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0007E(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01F800u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 3D 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F800u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF803u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F803u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 55 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F803u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF806u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0455u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F806u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 51 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F806u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF809u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F809u:
    if(m==0u&&x==0u&&e==0u){ /* 20 43 F8 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F809u,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF80Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF80Bu))return 0;c->pc=0xF843u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F80Cu:
    if(m==0u&&x==0u&&e==0u){ /* B0 33 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F80Cu,2u);r->open_bus=0x33u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF80Eu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF841u;}
      if(c->pc!=0xF80Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF80Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F80Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E9 F8 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F80Eu,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF811u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF810u))return 0;c->pc=0xF8E9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F811u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F811u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF813u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F813u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F813u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF814u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F814u:
    if(m==0u&&x==0u&&e==0u){ /* E0 02 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F814u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF817u;
      sc_v11_op_compare(r,c->x,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F817u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F817u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF819u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF825u;}
      if(c->pc!=0xF819u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF819u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F819u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F819u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF81Cu;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F81Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 22 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F81Cu,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF81Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF840u;}
      if(c->pc!=0xF81Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF81Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F81Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F81Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF821u;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F821u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1D Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F821u,2u);r->open_bus=0x1Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF823u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF840u;}
      if(c->pc!=0xF823u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF823u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F823u:
    if(m==0u&&x==0u&&e==0u){ /* D0 17 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F823u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF825u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF83Cu;}
      if(c->pc!=0xF825u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF825u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F825u:
    if(m==0u&&x==0u&&e==0u){ /* AD 4F 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F825u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF828u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F828u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F828u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF82Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF839u;}
      if(c->pc!=0xF82Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF82Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F82Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F82Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF82Du;
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F82Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F82Du,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF82Fu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF839u;}
      if(c->pc!=0xF82Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF82Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F82Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 51 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F82Fu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF832u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0451u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F832u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F832u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF834u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF839u;}
      if(c->pc!=0xF834u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF834u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F834u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F834u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF837u;
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F837u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F837u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF839u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF83Cu;}
      if(c->pc!=0xF839u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF839u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F83Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F83Cu,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF83Du;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F83Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 AF F8 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F83Du,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF840u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF83Fu))return 0;c->pc=0xF8AFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F840u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F840u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF841u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F841u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F841u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF842u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F842u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F842u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF843u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F843u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F843u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF845u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F845u:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F845u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF848u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0453u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F848u:
    if(m==0u&&x==0u&&e==0u){ /* 30 11 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F848u,2u);r->open_bus=0x11u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF84Au;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF85Bu;}
      if(c->pc!=0xF84Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF84Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F84Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F84Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF84Du;
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F84Du:
    if(m==0u&&x==0u&&e==0u){ /* B0 0C Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F84Du,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF84Fu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF85Bu;}
      if(c->pc!=0xF84Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF84Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F84Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F84Fu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF852u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0455u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F852u:
    if(m==0u&&x==0u&&e==0u){ /* 30 07 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F852u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF854u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF85Bu;}
      if(c->pc!=0xF854u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF854u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F854u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F854u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF857u;
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F857u:
    if(m==0u&&x==0u&&e==0u){ /* B0 02 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F857u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF859u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF85Bu;}
      if(c->pc!=0xF859u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF859u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F859u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F859u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Au;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F85Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F85Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F85Bu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 1169; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F85Bu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Cu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F85Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1169; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F85Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F877u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F877u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF879u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F879u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F879u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF87Au;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F87Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F87Au,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF87Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F87Cu:
    if(m==0u&&x==0u&&e==0u){ /* 22 4B 82 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F87Cu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF880u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF87Fu))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F880u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F880u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF882u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F882u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F882u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF883u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F883u:
    if(m==1u&&x==0u&&e==0u){ /* A5 79 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F883u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF885u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F885u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F885u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF886u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F886u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F886u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF888u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F888u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F888u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF88Au;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F88Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F88Au,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF88Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F88Cu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F88Cu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF88Du;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F88Du:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F88Du,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF891u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F891u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F891u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF892u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F892u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F892u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF896u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F896u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F896u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF897u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F897u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F897u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF898u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F898u:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F898u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF899u;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F899u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F899u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF89Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F89Du:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F89Du,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF89Eu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F89Eu:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F89Eu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A2u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8A2u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A3u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8A3u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A5u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8A5u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A7u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8A7u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A8u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A8u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8A8u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A9u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A9u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8A9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8ABu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8ABu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8ABu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8AEu;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8AEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8AEu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8AFu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8AFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8AFu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8B1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8B1u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8B1u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8B2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8B2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8B2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8B4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8B4u:
    if(m==1u&&x==0u&&e==0u){ /* AD 51 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8B4u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8B7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0451u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8B7u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8B7u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8B8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8B8u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8B8u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8BAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8BAu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8BAu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8BCu;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8BCu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8BCu,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8BEu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8BEu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8BEu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8BFu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8BFu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8BFu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8C3u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8C3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8C3u,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8C5u;
      sc_v11_op_lda(r,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8C5u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8C5u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8C9u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8C9u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8C9u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8CAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8CAu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8CAu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8CBu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8CBu:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8CBu,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8CCu;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8CCu:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8CCu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8D0u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8D0u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8D0u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8D1u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8D1u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8D1u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8D5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8D5u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8D5u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8D6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8D6u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8D6u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8D8u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8D8u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8D8u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8DAu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8DAu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8DAu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8DBu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8DBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8DBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8DDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8DDu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8DEu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8DEu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 4F 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8DEu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8E1u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8E1u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8E1u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8E2u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8E2u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8E2u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8E3u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8E3u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8E3u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8E4u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8E4u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8E4u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8E8u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8E8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8E8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8E9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8E9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8E9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8EBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8EBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8EBu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8EDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8EDu:
    if(m==1u&&x==0u&&e==0u){ /* AD 51 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8EDu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8F0u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0451u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8F0u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8F0u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8F1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8F1u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8F1u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8F3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8F3u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8F3u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8F5u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8F5u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8F5u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8F7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8F7u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8F7u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8F8u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8F8u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8F8u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8FCu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8FCu:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8FCu,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8FEu;
      sc_v11_op_lda(r,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8FEu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F8FEu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF902u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F902u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F902u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF903u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F903u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F903u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF904u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F904u:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F904u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF905u;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F905u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F905u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF909u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F909u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F909u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF90Au;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F90Au:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F90Au,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF90Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F90Eu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F90Eu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF90Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F90Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F90Fu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF911u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F911u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F911u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF913u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F913u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F913u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF914u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F914u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F914u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF916u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F916u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F916u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF917u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F917u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 4F 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F917u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF91Au;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F91Au:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F91Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF91Bu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F91Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F91Bu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF91Cu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F91Cu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F91Cu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF920u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F920u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F920u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF923u;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F923u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01F923u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF924u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
