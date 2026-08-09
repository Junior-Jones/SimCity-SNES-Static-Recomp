/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0007E(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01F800u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 3D 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F800u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF803u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F803u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 55 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F803u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF806u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0455u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F806u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F806u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF809u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F809u:
    if(m==0u&&x==1u&&e==0u){ /* 20 43 F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F809u,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF80Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF80Bu))return 0;c->pc=0xF843u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F80Cu:
    if(m==0u&&x==1u&&e==0u){ /* B0 33 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F80Cu,2u);r->open_bus=0x33u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF80Eu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF841u;}
      if(c->pc!=0xF80Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF80Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 33 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F80Cu,2u);r->open_bus=0x33u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF80Eu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF841u;}
      if(c->pc!=0xF80Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF80Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 33 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F80Cu,2u);r->open_bus=0x33u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF80Eu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF841u;}
      if(c->pc!=0xF80Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF80Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F80Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F80Eu,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF811u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF810u))return 0;c->pc=0xF8E9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F80Eu,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF811u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF810u))return 0;c->pc=0xF8E9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F80Eu,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF811u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF810u))return 0;c->pc=0xF8E9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F811u:
    if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F811u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF813u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F811u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF813u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F811u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF813u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F813u:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F813u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF814u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F814u:
    if(m==1u&&x==0u&&e==0u){ /* E0 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F814u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF817u;
      sc_v11_op_compare(r,c->x,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F817u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F817u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF819u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF825u;}
      if(c->pc!=0xF819u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF819u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F819u:
    if(m==1u&&x==0u&&e==0u){ /* C9 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F819u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF81Bu;
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F825u:
    if(m==1u&&x==0u&&e==0u){ /* AD 4F 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F825u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF828u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x044Fu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F828u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F828u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF82Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF839u;}
      if(c->pc!=0xF82Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF82Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F82Au:
    if(m==1u&&x==0u&&e==0u){ /* C9 78 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F82Au,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF82Cu;
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F839u:
    if(m==0u&&x==0u&&e==0u){ /* A2 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F839u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF83Cu;
      sc_v11_op_ldx(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F839u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF83Cu;
      sc_v11_op_ldx(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F83Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F83Cu,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF83Du;
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F83Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 AF F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F83Du,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF840u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF83Fu))return 0;c->pc=0xF8AFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F840u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F840u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF841u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F840u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF841u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F840u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF841u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F841u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F841u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF842u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F841u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF842u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F841u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF842u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F842u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F842u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF843u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F842u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF843u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F842u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF843u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F843u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F843u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF845u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F843u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF845u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F843u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF845u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F845u:
    if(m==0u&&x==1u&&e==0u){ /* AD 53 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F845u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF848u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0453u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F848u:
    if(m==0u&&x==1u&&e==0u){ /* 30 11 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F848u,2u);r->open_bus=0x11u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF84Au;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF85Bu;}
      if(c->pc!=0xF84Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF84Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F84Au:
    if(m==0u&&x==1u&&e==0u){ /* C9 78 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F84Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF84Du;
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F84Du:
    if(m==0u&&x==1u&&e==0u){ /* B0 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F84Du,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF84Fu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF85Bu;}
      if(c->pc!=0xF84Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF84Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F84Fu:
    if(m==0u&&x==1u&&e==0u){ /* AD 55 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F84Fu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF852u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0455u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F852u:
    if(m==0u&&x==1u&&e==0u){ /* 30 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F852u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF854u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF85Bu;}
      if(c->pc!=0xF854u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF854u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F854u:
    if(m==0u&&x==1u&&e==0u){ /* C9 64 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F854u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF857u;
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F857u:
    if(m==0u&&x==1u&&e==0u){ /* B0 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F857u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF859u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF85Bu;}
      if(c->pc!=0xF859u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF859u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F859u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F859u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Au;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F85Au:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F85Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F85Bu:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F85Bu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Cu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F85Cu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F85Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F85Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F85Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F85Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF85Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F85Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F85Fu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF860u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F85Fu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF860u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F860u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F860u,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF863u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF862u))return 0;c->pc=0xF877u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F860u,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF863u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF862u))return 0;c->pc=0xF877u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F863u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F863u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF865u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F863u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF865u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F863u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF865u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F863u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF865u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F865u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F865u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF866u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F865u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF866u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F866u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F866u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF867u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F866u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF867u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F867u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F867u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF868u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F867u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF868u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F868u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F868u,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF86Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF86Au))return 0;c->pc=0xF877u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 77 F8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F868u,3u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF86Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF86Au))return 0;c->pc=0xF877u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F86Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F86Bu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF86Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F86Bu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF86Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F86Bu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF86Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F86Bu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF86Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F86Du:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F86Du,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF86Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F86Du,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF86Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F86Eu:
    if(m==0u&&x==0u&&e==0u){ /* 86 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F86Eu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF870u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 86 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F86Eu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF870u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F870u:
    if(m==0u&&x==0u&&e==0u){ /* C5 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F870u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF872u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C5 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F870u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF872u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F872u:
    if(m==0u&&x==0u&&e==0u){ /* B0 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F872u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF874u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF875u;}
      if(c->pc!=0xF874u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF874u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F872u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF874u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF875u;}
      if(c->pc!=0xF874u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF874u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F874u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F874u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF875u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F874u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF875u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F875u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F875u,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF876u;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F875u,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF876u;
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F876u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F876u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF877u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F876u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF877u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F877u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F877u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF879u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F877u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF879u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F879u:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F879u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF87Au;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F87Au:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F87Au,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF87Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F87Cu:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
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
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F880u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF882u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F880u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF882u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F880u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF882u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F882u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F882u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF883u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F883u:
    if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F883u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF885u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F885u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F885u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF886u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F886u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F886u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF888u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F888u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F888u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF88Au;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F88Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F88Au,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF88Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F88Cu:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F88Cu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF88Du;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F88Du:
    if(m==1u&&x==1u&&e==0u){ /* 8F 02 42 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F88Du,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF891u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F891u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F891u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF892u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F892u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 03 42 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F892u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF896u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F896u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F896u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF897u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F897u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F897u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF898u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F898u:
    if(m==1u&&x==1u&&e==0u){ /* EA ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F898u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF899u;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F899u:
    if(m==1u&&x==1u&&e==0u){ /* AF 17 42 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F899u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF89Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F89Du:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F89Du,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF89Eu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F89Eu:
    if(m==1u&&x==1u&&e==0u){ /* AF 16 42 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F89Eu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A2u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8A2u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A3u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8A3u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A5u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8A5u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A7u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8A7u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A8u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A8u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8A8u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8A9u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8A9u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8A9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8ABu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8ABu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8ABu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8AEu;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8AEu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8AEu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8AFu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8AFu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8AFu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8B1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8AFu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8B1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8AFu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8B1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8E9u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8E9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8EBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8E9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8EBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8E9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8EBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01F8EBu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x01F8EBu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xF8EDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
