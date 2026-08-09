/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00026(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x009870u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009870u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9871u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009871u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009871u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9873u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009873u:
    if(m==1u&&x==1u&&e==0u){ /* A5 03 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009873u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9875u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x03u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009875u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009875u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9877u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x987Bu;}
      if(c->pc!=0x9877u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9877u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009877u:
    if(m==1u&&x==1u&&e==0u){ /* 85 08 Mesen corrected gameplay frame 2578; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009877u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9879u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x08u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009879u:
    if(m==1u&&x==1u&&e==0u){ /* 80 07 Mesen corrected gameplay frame 2578; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009879u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x987Bu;
      if(1){c->pc=0x9882u;}
      if(c->pc!=0x987Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x987Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00987Bu:
    if(m==1u&&x==1u&&e==0u){ /* AC 40 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00987Bu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x987Eu;
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x2140u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00987Eu:
    if(m==1u&&x==1u&&e==0u){ /* C4 07 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00987Eu,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9880u;
      sc_v11_op_compare(r,c->y,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x07u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009880u:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009880u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9882u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9889u;}
      if(c->pc!=0x9882u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9882u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009882u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 40 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009882u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9885u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2140u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009885u:
    if(m==1u&&x==1u&&e==0u){ /* 85 07 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009885u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9887u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x07u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009887u:
    if(m==1u&&x==1u&&e==0u){ /* 64 03 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009887u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9889u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009889u:
    if(m==1u&&x==1u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009889u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x988Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00988Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 41 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00988Bu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x988Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2141u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00988Eu:
    if(m==1u&&x==1u&&e==0u){ /* 64 04 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00988Eu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9890u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009890u:
    if(m==1u&&x==1u&&e==0u){ /* A5 05 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009890u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9892u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x05u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009892u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 42 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009892u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9895u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2142u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009895u:
    if(m==1u&&x==1u&&e==0u){ /* 64 05 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009895u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9897u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009897u:
    if(m==1u&&x==1u&&e==0u){ /* A5 06 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009897u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9899u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x06u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009899u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 43 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009899u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x989Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2143u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00989Cu:
    if(m==1u&&x==1u&&e==0u){ /* 64 06 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00989Cu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x989Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00989Eu:
    if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00989Eu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x989Fu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00989Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00989Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A0u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098A0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098A2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A2u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A2u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098A4u:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A4u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A5u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098A5u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A5u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A6u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098A6u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A6u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098A7u:
    if(m==1u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A7u,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098A8u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A8u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98A9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098A9u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098A9u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98AAu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098AAu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098AAu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98ABu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098ABu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098ABu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98ADu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098ADu:
    if(m==0u&&x==0u&&e==0u){ /* BD 00 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098ADu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98B0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098B0u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098B0u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98B1u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098B1u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098B1u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98B2u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098B2u:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098B2u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98B3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098B3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098B3u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098B5u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098B5u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98B6u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098B6u:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098B6u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98B7u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098B7u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098B7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98BAu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0003u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0098BAu:
    if(m==1u&&x==1u&&e==0u){ /* 6B Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0098BAu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x98BBu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
