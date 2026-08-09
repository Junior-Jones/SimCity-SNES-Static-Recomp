/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00022(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x008851u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008851u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8853u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008851u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8853u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008851u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8853u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008853u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008853u,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8855u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008855u:
    if(m==0u&&x==0u&&e==0u){ /* 0D 01 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008855u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8858u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0101u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008858u:
    if(m==0u&&x==0u&&e==0u){ /* D0 59 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008858u,2u);r->open_bus=0x59u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x885Au;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x88B3u;}
      if(c->pc!=0x885Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x885Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00885Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00885Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x885Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00885Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00885Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8860u;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008860u:
    if(m==0u&&x==0u&&e==0u){ /* F0 51 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008860u,2u);r->open_bus=0x51u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8862u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x88B3u;}
      if(c->pc!=0x8862u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8862u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008862u:
    if(m==0u&&x==0u&&e==0u){ /* A2 D0 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008862u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8865u;
      sc_v11_op_ldx(r,0x00D0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008865u:
    if(m==0u&&x==0u&&e==0u){ /* A5 FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x008865u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8867u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xFFu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008867u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008867u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8868u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008868u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0C 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008868u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x886Bu;
      sc_v11_op_compare(r,c->a,0x000Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00886Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00886Bu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x886Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x887Du;}
      if(c->pc!=0x886Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x886Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00886Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 FD ; generated town route */
      sc_v11_scheduler_code_access(r,0x00886Du,2u);r->open_bus=0xFDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x886Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xFDu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00886Fu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00886Fu,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8870u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008870u:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008870u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8873u;
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008873u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008873u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8875u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8878u;}
      if(c->pc!=0x8875u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8875u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008875u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008875u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8878u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008878u:
    if(m==0u&&x==0u&&e==0u){ /* 85 FD ; generated town route */
      sc_v11_scheduler_code_access(r,0x008878u,2u);r->open_bus=0xFDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x887Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xFDu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00887Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00887Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x887Du;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00887Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x00887Du,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x887Fu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xFFu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00887Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 32 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00887Fu,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8881u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x88B3u;}
      if(c->pc!=0x8881u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8881u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008881u:
    if(m==0u&&x==0u&&e==0u){ /* A5 FD ; generated town route */
      sc_v11_scheduler_code_access(r,0x008881u,2u);r->open_bus=0xFDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8883u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xFDu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008883u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008883u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8884u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008884u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008884u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8885u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008885u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008885u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8886u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008886u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008886u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8887u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008887u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008887u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8888u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008888u:
    if(m==0u&&x==0u&&e==0u){ /* B9 B4 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008888u,3u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x888Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x88B4u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00888Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 24 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x00888Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x888Fu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2440u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00888Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00888Fu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8890u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008890u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008890u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8891u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008891u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008891u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8892u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008892u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008892u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8893u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008893u:
    if(m==0u&&x==0u&&e==0u){ /* E0 D8 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008893u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8896u;
      sc_v11_op_compare(r,c->x,0x00D8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008896u:
    if(m==0u&&x==0u&&e==0u){ /* 90 F0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008896u,2u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8898u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8888u;}
      if(c->pc!=0x8898u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8898u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008898u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008898u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8899u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008899u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008899u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x889Au;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00889Au:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00889Au,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x889Bu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00889Bu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00889Bu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x889Cu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00889Cu:
    if(m==0u&&x==0u&&e==0u){ /* B9 B4 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00889Cu,3u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x889Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x88B4u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00889Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 24 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x00889Fu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88A3u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2440u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088A3u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088A3u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88A4u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088A4u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088A4u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88A5u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088A5u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088A5u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88A6u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088A6u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088A6u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88A7u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088A7u:
    if(m==0u&&x==0u&&e==0u){ /* E0 E0 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088A7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88AAu;
      sc_v11_op_compare(r,c->x,0x00E0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088AAu:
    if(m==0u&&x==0u&&e==0u){ /* 90 F0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088AAu,2u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88ACu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x889Cu;}
      if(c->pc!=0x88ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x88ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088ACu:
    if(m==0u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088ACu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88AEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBBu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088AEu:
    if(m==0u&&x==0u&&e==0u){ /* 09 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088AEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88B1u;
      sc_v11_op_ora(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088B1u:
    if(m==0u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088B1u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88B3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0088B3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0088B3u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88B4u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008924u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008924u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8926u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008934u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008934u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8937u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0107u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008937u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008937u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x893Au;
      sc_v11_op_and(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00893Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 19 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00893Au,2u);r->open_bus=0x19u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x893Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8955u;}
      if(c->pc!=0x893Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x893Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00893Cu:
    if(m==0u&&x==0u&&e==0u){ /* AE 07 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00893Cu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x893Fu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0107u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00893Fu:
    if(m==0u&&x==0u&&e==0u){ /* BD 6A 89 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00893Fu,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8942u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x896Au)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008942u:
    if(m==0u&&x==0u&&e==0u){ /* 8F A4 25 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x008942u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8946u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E25A4u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008946u:
    if(m==0u&&x==0u&&e==0u){ /* BD 6C 89 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008946u,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8949u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x896Cu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008949u:
    if(m==0u&&x==0u&&e==0u){ /* 8F BC 25 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x008949u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x894Du;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E25BCu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00894Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00894Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x894Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00894Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x00894Fu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8951u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008951u:
    if(m==1u&&x==0u&&e==0u){ /* 09 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008951u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8953u;
      sc_v11_op_ora(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008953u:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x008953u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8955u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008955u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008955u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8957u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008955u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8957u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008957u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008957u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x895Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0107u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00895Au:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00895Au,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x895Bu;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00895Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 18 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00895Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x895Eu;
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00895Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00895Eu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8960u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8963u;}
      if(c->pc!=0x8960u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8960u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008960u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008960u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8963u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008963u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 07 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008963u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8966u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0107u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008966u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 09 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008966u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8969u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0109u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008969u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008969u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x896Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008982u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008982u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8984u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008982u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8984u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008982u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8984u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008992u:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008992u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8995u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0113u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008995u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008995u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8998u;
      sc_v11_op_and(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008998u:
    if(m==0u&&x==0u&&e==0u){ /* D0 19 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008998u,2u);r->open_bus=0x19u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x899Au;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89B3u;}
      if(c->pc!=0x899Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x899Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00899Au:
    if(m==0u&&x==0u&&e==0u){ /* AE 13 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00899Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x899Du;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0113u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00899Du:
    if(m==0u&&x==0u&&e==0u){ /* BD C8 89 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00899Du,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89A0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x89C8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089A0u:
    if(m==0u&&x==0u&&e==0u){ /* 8F BA 25 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089A0u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89A4u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E25BAu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089A4u:
    if(m==0u&&x==0u&&e==0u){ /* BD CA 89 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089A4u,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89A7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x89CAu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089A7u:
    if(m==0u&&x==0u&&e==0u){ /* 8F BE 25 7E ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089A7u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89ABu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E25BEu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089ABu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089ABu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89ADu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089ADu:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089ADu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89AFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089AFu:
    if(m==1u&&x==0u&&e==0u){ /* 09 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089AFu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B1u;
      sc_v11_op_ora(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089B1u:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089B1u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B3u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089B3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089B3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089B3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089B5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089B5u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0113u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089B8u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089B8u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B9u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089B9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 18 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089B9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89BCu;
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089BCu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089BCu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89BEu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89C1u;}
      if(c->pc!=0x89BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089BEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089BEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89C1u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089C1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 13 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089C1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89C4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0113u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089C4u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 15 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089C4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89C7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0115u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0089C7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x0089C7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89C8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A14u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A14u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A16u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A14u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A16u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A14u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A16u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A1Au:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A1Au,1u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A1Bu;
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A1Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A1Bu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A1Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A20u;}
      if(c->pc!=0x8A1Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A1Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A1Du:
    if(m==0u&&x==0u&&e==0u){ /* 4C 5C 8A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A1Du,3u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A20u;
      c->pc=0x8A5Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A20u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A20u,1u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A21u;
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A21u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A21u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A23u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A26u;}
      if(c->pc!=0x8A23u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A23u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A23u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 21 8B ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A23u,3u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A26u;
      c->pc=0x8B21u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A26u:
    if(m==0u&&x==0u&&e==0u){ /* 64 B5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A26u,2u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A28u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xB5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A28u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A28u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A29u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A2Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 4B 8A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A2Eu,3u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A31u;
      sc_v11_op_lda(r,0x8A4Bu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A31u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 72 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A31u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A34u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4372u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A34u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A34u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A36u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A36u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 74 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A36u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A39u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4374u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A39u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 77 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A39u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A3Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4377u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A3Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 41 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A3Cu,2u);r->open_bus=0x41u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A3Eu;
      sc_v11_op_lda(r,0x0041u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A3Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 70 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A3Eu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A41u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4370u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A41u:
    if(m==1u&&x==0u&&e==0u){ /* A9 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A41u,2u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A43u;
      sc_v11_op_lda(r,0x0028u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A43u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 71 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A43u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A46u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4371u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A46u:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A46u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A48u;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A48u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A48u,2u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A4Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB5u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A4Au:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A4Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A4Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A5Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A5Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A5Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A5Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A5Eu,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A60u;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A60u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A60u,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A62u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A62u:
    if(m==1u&&x==0u&&e==0u){ /* 64 6D ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A62u,2u);r->open_bus=0x6Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A64u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A64u:
    if(m==1u&&x==0u&&e==0u){ /* A9 C3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A64u,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A66u;
      sc_v11_op_lda(r,0x00C3u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A66u:
    if(m==1u&&x==0u&&e==0u){ /* 85 71 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A66u,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A68u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A68u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A68u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A6Au;
      sc_v11_op_lda(r,0x000Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A6Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 72 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A6Au,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A6Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A6Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A6Cu,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A6Eu;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A6Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A6Eu,2u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A70u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A70u:
    if(m==1u&&x==0u&&e==0u){ /* A9 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A70u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A72u;
      sc_v11_op_lda(r,0x0010u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A72u:
    if(m==1u&&x==0u&&e==0u){ /* 85 70 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A72u,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A74u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x70u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A74u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A74u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A76u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A76u:
    if(m==0u&&x==0u&&e==0u){ /* 64 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A76u,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A78u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A78u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0C ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A78u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A7Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A7Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 13 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A7Bu,2u);r->open_bus=0x13u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A7Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8A90u;}
      if(c->pc!=0x8A7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A7Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 D1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A7Du,2u);r->open_bus=0xD1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A7Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A7Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A82u;
      sc_v11_op_and(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A82u:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A82u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A84u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8A8Bu;}
      if(c->pc!=0x8A84u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A84u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A84u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A84u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A87u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A87u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A87u,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A89u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A89u:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A89u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A8Bu;
      if(1){c->pc=0x8A90u;}
      if(c->pc!=0x8A8Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A8Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A8Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE FF ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A8Bu,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A8Eu;
      sc_v11_op_lda(r,0xFFFEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A8Eu,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A90u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A90u:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A90u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A93u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A93u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A93u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A94u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A94u:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A94u,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A96u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A96u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A96u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A97u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A97u:
    if(m==0u&&x==0u&&e==0u){ /* E9 03 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A97u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A9Au;
      sc_v11_op_sbc(r,0x0003u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A9Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A9Au,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A9Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A9Cu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A9Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A9Fu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008A9Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 38 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008A9Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA2u;
      sc_v11_op_ldy(r,0x0038u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AA2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AA2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AA4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AA4u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA6u;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AA6u:
    if(m==1u&&x==0u&&e==0u){ /* 80 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AA6u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA8u;
      if(1){c->pc=0x8AACu;}
      if(c->pc!=0x8AA8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AA8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AA8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AA8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AAAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AAAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AAAu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AACu;
      sc_v11_op_lda(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AACu:
    if(m==1u&&x==0u&&e==0u){ /* 9D 67 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AACu,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AAFu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0567u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AAFu:
    if(m==1u&&x==0u&&e==0u){ /* 9D B8 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AAFu,3u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AB2u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x06B8u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AB2u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AB2u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AB3u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AB3u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AB3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AB5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AB5u:
    if(m==0u&&x==0u&&e==0u){ /* A5 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AB5u,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AB7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AB7u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 67 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AB7u,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ABAu;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0567u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ABAu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ABAu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ABBu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ABBu:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ABBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ABEu;
      sc_v11_op_adc(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ABEu:
    if(m==0u&&x==0u&&e==0u){ /* 9D B8 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ABEu,3u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AC1u;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x06B8u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AC1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AC1u,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AC3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AC3u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AC3u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AC4u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AC4u:
    if(m==0u&&x==0u&&e==0u){ /* 69 01 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AC4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AC7u;
      sc_v11_op_adc(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AC7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AC7u,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AC9u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AC9u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AC9u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ACAu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ACAu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ACAu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ACBu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ACBu:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ACBu,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ACCu;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ACCu:
    if(m==0u&&x==0u&&e==0u){ /* D0 DA ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ACCu,2u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ACEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8AA8u;}
      if(c->pc!=0x8ACEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8ACEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ACEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ACEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AD0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AD0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AD0u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AD2u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AD2u:
    if(m==1u&&x==0u&&e==0u){ /* 9D 67 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AD2u,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AD5u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0567u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AD5u:
    if(m==1u&&x==0u&&e==0u){ /* 9D B8 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AD5u,3u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AD8u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x06B8u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AD8u:
    if(m==1u&&x==0u&&e==0u){ /* A2 B8 06 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AD8u,3u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ADBu;
      sc_v11_op_ldx(r,0x06B8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ADBu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 62 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ADBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8ADEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4362u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008ADEu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008ADEu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AE0u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AE0u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 60 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AE0u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AE3u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4360u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AE3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0D ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AE3u,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AE5u;
      sc_v11_op_lda(r,0x000Du,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AE5u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 61 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AE5u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AE8u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4361u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AE8u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 64 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AE8u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AEBu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4364u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AEBu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 67 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AEBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AEEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4367u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AEEu:
    if(m==1u&&x==0u&&e==0u){ /* A2 67 05 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AEEu,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AF1u;
      sc_v11_op_ldx(r,0x0567u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AF1u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 72 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AF1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AF4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4372u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AF4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AF4u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AF6u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AF6u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 70 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AF6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AF9u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4370u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AF9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AF9u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AFBu;
      sc_v11_op_lda(r,0x000Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AFBu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 71 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AFBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AFEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4371u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008AFEu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 74 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008AFEu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B01u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4374u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B01u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 77 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B01u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B04u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4377u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B04u:
    if(m==1u&&x==0u&&e==0u){ /* A2 4C 8B ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B04u,3u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B07u;
      sc_v11_op_ldx(r,0x8B4Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B07u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 52 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B07u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B0Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4352u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B0Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B0Au,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B0Cu;
      sc_v11_op_lda(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B0Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 50 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B0Cu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B0Fu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4350u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B0Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 26 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B0Fu,2u);r->open_bus=0x26u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B11u;
      sc_v11_op_lda(r,0x0026u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B11u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 51 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B11u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B14u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4351u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B14u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 54 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B14u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B17u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4354u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B17u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 77 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B17u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B1Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4377u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B1Au:
    if(m==1u&&x==0u&&e==0u){ /* A5 B5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B1Au,2u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B1Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB5u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B1Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 E0 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B1Cu,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B1Eu;
      sc_v11_op_ora(r,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B1Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B1Eu,2u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B20u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB5u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B20u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B20u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B21u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B21u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B21u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B23u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B23u:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B23u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B26u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0463u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B26u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B26u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B27u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B27u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B27u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B28u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B28u:
    if(m==0u&&x==0u&&e==0u){ /* BD E0 89 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B28u,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B2Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x89E0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 72 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B2Bu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B2Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4372u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B2Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B2Eu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B30u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B30u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B30u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B32u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B32u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 74 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B32u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B35u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4374u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B35u:
    if(m==1u&&x==1u&&e==0u){ /* AE 63 04 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B35u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B38u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0463u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B38u:
    if(m==1u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B38u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B3Au;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B3Du;}
      if(c->pc!=0x8B3Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B3Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B3Au:
    if(m==1u&&x==1u&&e==0u){ /* 8D 77 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B3Au,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B3Du;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4377u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B3Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 41 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B3Du,2u);r->open_bus=0x41u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B3Fu;
      sc_v11_op_lda(r,0x0041u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B3Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 70 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B3Fu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B42u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4370u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B42u:
    if(m==1u&&x==1u&&e==0u){ /* A9 26 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B42u,2u);r->open_bus=0x26u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B44u;
      sc_v11_op_lda(r,0x0026u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B44u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 71 43 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B44u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B47u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4371u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B47u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B47u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B49u;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B49u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B5 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B49u,2u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B4Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB5u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008B4Bu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x008B4Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B4Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
