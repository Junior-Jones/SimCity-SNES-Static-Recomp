/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00024(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x009001u:
    if(m==1u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009001u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9003u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009003u:
    if(m==1u&&x==0u&&e==0u){ /* D9 39 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009003u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9006u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9039u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009006u:
    if(m==1u&&x==0u&&e==0u){ /* A5 80 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009006u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9008u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x80u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009008u:
    if(m==1u&&x==0u&&e==0u){ /* F9 3E 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009008u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x900Bu;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x903Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00900Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 81 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00900Bu,2u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x900Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x81u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00900Du:
    if(m==1u&&x==0u&&e==0u){ /* F9 43 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00900Du,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9010u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9043u)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009010u:
    if(m==1u&&x==0u&&e==0u){ /* 90 18 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009010u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9012u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x902Au;}
      if(c->pc!=0x9012u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9012u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009012u:
    if(m==1u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009012u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9014u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009014u:
    if(m==1u&&x==0u&&e==0u){ /* F9 39 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009014u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9017u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9039u)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009017u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009017u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9019u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009019u:
    if(m==1u&&x==0u&&e==0u){ /* A5 80 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009019u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x901Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x80u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00901Bu:
    if(m==1u&&x==0u&&e==0u){ /* F9 3E 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00901Bu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x901Eu;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x903Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00901Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 80 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00901Eu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9020u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x80u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009020u:
    if(m==1u&&x==0u&&e==0u){ /* A5 81 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009020u,2u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9022u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x81u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009022u:
    if(m==1u&&x==0u&&e==0u){ /* F9 43 90 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009022u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9025u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9043u)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009025u:
    if(m==1u&&x==0u&&e==0u){ /* 85 81 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009025u,2u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9027u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x81u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009027u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009027u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9028u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009028u:
    if(m==1u&&x==0u&&e==0u){ /* 80 D7 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009028u,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x902Au;
      if(1){c->pc=0x9001u;}
      if(c->pc!=0x902Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x902Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00902Au:
    if(m==1u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00902Au,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x902Bu;
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00902Bu:
    if(m==1u&&x==0u&&e==0u){ /* 99 79 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00902Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x902Eu;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0079u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00902Eu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00902Eu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x902Fu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00902Fu:
    if(m==1u&&x==0u&&e==0u){ /* C0 05 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00902Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9032u;
      sc_v11_op_compare(r,c->y,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009032u:
    if(m==1u&&x==0u&&e==0u){ /* D0 CA Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009032u,2u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9034u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8FFEu;}
      if(c->pc!=0x9034u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9034u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009034u:
    if(m==1u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009034u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9036u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009036u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009036u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9038u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009038u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009038u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9039u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090DDu:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090DDu,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90DEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090DEu:
    if(m==0u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090DEu,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90DFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090DFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090DFu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090E1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090E1u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090E3u:
    if(m==1u&&x==0u&&e==0u){ /* AD 0B 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090E3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090E6u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090E6u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090E7u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090E7u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90E8u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090E8u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 11 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090E8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90EBu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0011u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090EBu:
    if(m==1u&&x==0u&&e==0u){ /* AE 0E 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090EBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90EEu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Eu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090EEu:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090EEu,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90EFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090EFu:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090EFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F2u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090F2u:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090F2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090F5u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090F5u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F6u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090F6u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090F6u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90F8u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x90FBu;}
      if(c->pc!=0x90F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090FBu:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090FBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90FEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090FEu:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090FEu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90FFu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090FFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0090FFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9102u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x000Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009102u:
    if(m==1u&&x==0u&&e==0u){ /* C9 FF Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009102u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9104u;
      sc_v11_op_compare(r,c->a,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009104u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009104u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9106u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9109u;}
      if(c->pc!=0x9106u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9106u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009106u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009106u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9107u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009107u:
    if(m==1u&&x==0u&&e==0u){ /* 28 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009107u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9108u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009108u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009108u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9109u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009109u:
    if(m==1u&&x==0u&&e==0u){ /* 29 E0 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009109u,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x910Bu;
      sc_v11_op_and(r,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00910Bu:
    if(m==1u&&x==0u&&e==0u){ /* C9 E0 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00910Bu,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x910Du;
      sc_v11_op_compare(r,c->a,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00910Du:
    if(m==1u&&x==0u&&e==0u){ /* D0 22 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00910Du,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x910Fu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9131u;}
      if(c->pc!=0x910Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x910Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00910Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00910Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9112u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Cu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009112u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009112u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9113u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009113u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009113u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9114u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009114u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009114u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9115u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009115u:
    if(m==1u&&x==0u&&e==0u){ /* 29 E0 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009115u,2u);r->open_bus=0xE0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9117u;
      sc_v11_op_and(r,0x00E0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009117u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009117u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9118u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009118u:
    if(m==1u&&x==0u&&e==0u){ /* AD 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009118u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x911Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Cu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00911Bu:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00911Bu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x911Du;
      sc_v11_op_and(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00911Du:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00911Du,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x911Eu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00911Eu:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00911Eu,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x911Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00911Fu:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00911Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9122u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009122u:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009122u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9125u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009125u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009125u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9126u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009126u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009126u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9128u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x912Bu;}
      if(c->pc!=0x9128u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9128u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00912Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00912Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x912Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00912Eu:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00912Eu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x912Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00912Fu:
    if(m==1u&&x==0u&&e==0u){ /* 80 09 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00912Fu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9131u;
      if(1){c->pc=0x913Au;}
      if(c->pc!=0x9131u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9131u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009131u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009131u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9132u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009132u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009132u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9134u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009134u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009134u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9135u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009135u:
    if(m==1u&&x==0u&&e==0u){ /* AD 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009135u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9138u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Cu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009138u:
    if(m==1u&&x==0u&&e==0u){ /* 29 1F Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009138u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x913Au;
      sc_v11_op_and(r,0x001Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00913Au:
    if(m==1u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00913Au,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x913Bu;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00913Bu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00913Bu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x913Cu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00913Cu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00913Cu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x913Du;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00913Du:
    if(m==1u&&x==0u&&e==0u){ /* C9 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00913Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x913Fu;
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00913Fu:
    if(m==1u&&x==0u&&e==0u){ /* 10 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00913Fu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9141u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9144u;}
      if(c->pc!=0x9141u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9141u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009141u:
    if(m==1u&&x==0u&&e==0u){ /* 4C E5 91 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009141u,3u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9144u;
      c->pc=0x91E5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009144u:
    if(m==1u&&x==0u&&e==0u){ /* C9 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009144u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9146u;
      sc_v11_op_compare(r,c->a,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009146u:
    if(m==1u&&x==0u&&e==0u){ /* F0 23 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009146u,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9148u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x916Bu;}
      if(c->pc!=0x9148u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9148u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009148u:
    if(m==1u&&x==0u&&e==0u){ /* C9 40 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009148u,2u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x914Au;
      sc_v11_op_compare(r,c->a,0x0040u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00914Au:
    if(m==1u&&x==0u&&e==0u){ /* F0 3B Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00914Au,2u);r->open_bus=0x3Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x914Cu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9187u;}
      if(c->pc!=0x914Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x914Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00914Cu:
    if(m==1u&&x==0u&&e==0u){ /* C9 60 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00914Cu,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x914Eu;
      sc_v11_op_compare(r,c->a,0x0060u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00914Eu:
    if(m==1u&&x==0u&&e==0u){ /* F0 78 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00914Eu,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9150u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x91C8u;}
      if(c->pc!=0x9150u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9150u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009150u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009150u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9151u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009151u:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009151u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9154u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009154u:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009154u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9157u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009157u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009157u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9158u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009158u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009158u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x915Au;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x915Du;}
      if(c->pc!=0x915Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x915Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00915Du:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00915Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9160u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009160u:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009160u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9161u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009161u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009161u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9165u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009165u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009165u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9166u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009166u:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009166u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9167u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009167u:
    if(m==1u&&x==0u&&e==0u){ /* D0 E7 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009167u,2u);r->open_bus=0xE7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9169u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9150u;}
      if(c->pc!=0x9169u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9169u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009169u:
    if(m==1u&&x==0u&&e==0u){ /* F0 83 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009169u,2u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x916Bu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x90EEu;}
      if(c->pc!=0x916Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x916Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00916Bu:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00916Bu,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x916Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00916Cu:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00916Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x916Fu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00916Fu:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00916Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9172u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009172u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009172u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9173u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009173u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009173u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9175u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9178u;}
      if(c->pc!=0x9175u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9175u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009178u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009178u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x917Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00917Bu:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00917Bu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x917Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00917Cu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00917Cu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9180u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009180u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009180u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9181u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009181u:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009181u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9182u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009182u:
    if(m==1u&&x==0u&&e==0u){ /* D0 F8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009182u,2u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9184u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x917Cu;}
      if(c->pc!=0x9184u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9184u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009184u:
    if(m==1u&&x==0u&&e==0u){ /* 4C EE 90 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009184u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9187u;
      c->pc=0x90EEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009187u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009187u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9188u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009188u:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009188u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x918Bu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00918Bu:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00918Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x918Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00918Eu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00918Eu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x918Fu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00918Fu:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00918Fu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9191u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9194u;}
      if(c->pc!=0x9191u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9191u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009194u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009194u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9197u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009197u:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009197u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9198u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009198u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009198u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x919Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x000Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00919Bu:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00919Bu,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x919Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00919Cu:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00919Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x919Fu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00919Fu:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00919Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91A2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091A2u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091A2u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91A3u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091A3u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091A3u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91A5u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x91A8u;}
      if(c->pc!=0x91A5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91A5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091A5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 6D 92 Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091A5u,3u);r->open_bus=0x92u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91A8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x91A7u))return 0;c->pc=0x926Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091A8u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091A8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91ABu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091ABu:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091ABu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91ACu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091ACu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0D 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091ACu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91AFu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x000Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091AFu:
    if(m==1u&&x==0u&&e==0u){ /* AD 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091AFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91B2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Cu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091B2u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091B2u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91B6u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091B6u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091B6u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91B7u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091B7u:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091B7u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91B8u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091B8u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0B Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091B8u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91BAu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x91C5u;}
      if(c->pc!=0x91BAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91BAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091BAu:
    if(m==1u&&x==0u&&e==0u){ /* AD 0D 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091BAu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91BDu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x000Du)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091BDu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091BDu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91C1u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091C1u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091C1u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91C2u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091C2u:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091C2u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91C3u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091C3u:
    if(m==1u&&x==0u&&e==0u){ /* D0 EA Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091C3u,2u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91C5u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x91AFu;}
      if(c->pc!=0x91C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091C5u:
    if(m==1u&&x==0u&&e==0u){ /* 4C EE 90 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091C5u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91C8u;
      c->pc=0x90EEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091C8u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091C8u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91C9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091C9u:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091C9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91CCu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091CCu:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091CCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91CFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091CFu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091CFu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91D0u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091D0u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091D0u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91D2u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x91D5u;}
      if(c->pc!=0x91D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091D5u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091D5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91D8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091D8u:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091D8u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91D9u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091D9u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091D9u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91DDu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091DDu:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091DDu,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91DEu;
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091DEu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091DEu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91DFu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091DFu:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091DFu,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91E0u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091E0u:
    if(m==1u&&x==0u&&e==0u){ /* D0 F7 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091E0u,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91E2u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x91D9u;}
      if(c->pc!=0x91E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091E2u:
    if(m==1u&&x==0u&&e==0u){ /* 4C EE 90 Mesen corrected gameplay frame 2521; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091E2u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91E5u;
      c->pc=0x90EEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091E5u:
    if(m==1u&&x==0u&&e==0u){ /* C9 C0 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091E5u,2u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91E7u;
      sc_v11_op_compare(r,c->a,0x00C0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091E7u:
    if(m==1u&&x==0u&&e==0u){ /* B0 5C Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091E7u,2u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91E9u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9245u;}
      if(c->pc!=0x91E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091E9u:
    if(m==1u&&x==0u&&e==0u){ /* 29 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091E9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91EBu;
      sc_v11_op_and(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091EBu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091EBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91EEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0010u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091EEu:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091EEu,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91EFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091EFu:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091EFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91F2u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091F2u:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091F2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91F5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091F5u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091F5u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91F6u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091F6u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091F6u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91F8u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x91FBu;}
      if(c->pc!=0x91F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x91F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091FBu:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091FBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91FEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091FEu:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091FEu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x91FFu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0091FFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0091FFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9202u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x000Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009202u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009202u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9203u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009203u:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009203u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9206u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009206u:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009206u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9209u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009209u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009209u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x920Au;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00920Au:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00920Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x920Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x920Fu;}
      if(c->pc!=0x920Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x920Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00920Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00920Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9212u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009212u:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009212u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9213u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009213u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0D 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009213u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9216u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x000Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009216u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009216u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9218u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009218u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009218u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x921Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Cu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00921Bu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00921Bu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x921Cu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00921Cu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 0E 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00921Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x921Fu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Eu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00921Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00921Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9222u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x000Cu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009222u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009222u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9224u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009224u:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009224u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9225u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009225u:
    if(m==1u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009225u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9226u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009226u:
    if(m==1u&&x==0u&&e==0u){ /* AE 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009226u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9229u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Cu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009229u:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 80 7E Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009229u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x922Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E8000u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00922Du:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00922Du,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x922Eu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00922Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00922Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9231u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x000Cu),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009231u:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009231u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9232u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009232u:
    if(m==1u&&x==0u&&e==0u){ /* AC 10 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009232u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9235u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0010u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009235u:
    if(m==1u&&x==0u&&e==0u){ /* F0 02 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009235u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9237u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9239u;}
      if(c->pc!=0x9237u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9237u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009237u:
    if(m==1u&&x==0u&&e==0u){ /* 49 FF Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009237u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9239u;
      sc_v11_op_eor(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009239u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 80 7E Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009239u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x923Du;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E8000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00923Du:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00923Du,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x923Eu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00923Eu:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00923Eu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x923Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00923Fu:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00923Fu,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9240u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009240u:
    if(m==1u&&x==0u&&e==0u){ /* D0 E2 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009240u,2u);r->open_bus=0xE2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9242u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9224u;}
      if(c->pc!=0x9242u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9242u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009242u:
    if(m==1u&&x==0u&&e==0u){ /* 4C EE 90 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009242u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9245u;
      c->pc=0x90EEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009245u:
    if(m==1u&&x==0u&&e==0u){ /* 29 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009245u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9247u;
      sc_v11_op_and(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009247u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009247u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x924Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0010u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00924Au:
    if(m==1u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00924Au,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x924Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00924Bu:
    if(m==1u&&x==0u&&e==0u){ /* AC 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00924Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x924Eu;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0009u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00924Eu:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00924Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9251u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009251u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009251u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9252u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009252u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009252u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9254u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9257u;}
      if(c->pc!=0x9254u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9254u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009257u:
    if(m==1u&&x==0u&&e==0u){ /* 8C 09 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009257u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x925Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0009u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00925Au:
    if(m==1u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00925Au,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x925Bu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00925Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00925Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x925Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x000Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00925Eu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 0D 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00925Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9261u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x000Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009261u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009261u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9263u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009263u:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009263u,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9264u;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009264u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009264u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9265u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009265u:
    if(m==0u&&x==0u&&e==0u){ /* ED 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009265u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9268u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x000Cu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009268u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0C 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009268u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x926Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x000Cu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00926Bu:
    if(m==0u&&x==0u&&e==0u){ /* 80 B5 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00926Bu,2u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x926Du;
      if(1){c->pc=0x9222u;}
      if(c->pc!=0x926Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x926Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00926Du:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 80 Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00926Du,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9270u;
      sc_v11_op_ldy(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009270u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009270u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9271u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009271u:
    if(m==1u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009271u,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9272u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009272u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009272u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9273u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009273u:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009273u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9274u;
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009274u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009274u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9275u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009275u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009275u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9276u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009276u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009276u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9277u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009277u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2497; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009277u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9278u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00927Cu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00927Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x927Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00927Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x927Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00927Eu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00927Eu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9280u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009280u:
    if(m==1u&&x==0u&&e==0u){ /* AD 12 42 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009280u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9283u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x4212u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009283u:
    if(m==1u&&x==0u&&e==0u){ /* 29 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009283u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9285u;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009285u:
    if(m==1u&&x==0u&&e==0u){ /* D0 F9 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009285u,2u);r->open_bus=0xF9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9287u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9280u;}
      if(c->pc!=0x9287u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9287u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009287u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009287u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9289u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009289u:
    if(m==0u&&x==0u&&e==0u){ /* A0 04 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009289u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x928Cu;
      sc_v11_op_ldy(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00928Cu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00928Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x928Fu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00928Fu:
    if(m==0u&&x==0u&&e==0u){ /* BD 18 42 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00928Fu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9292u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x4218u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009292u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B 92 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009292u,3u);r->open_bus=0x92u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9295u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9294u))return 0;c->pc=0x929Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009295u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009295u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9296u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009296u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009296u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9297u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009297u:
    if(m==0u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009297u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9298u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009298u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F5 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009298u,2u);r->open_bus=0xF5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x929Au;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x928Fu;}
      if(c->pc!=0x929Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x929Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00929Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00929Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x929Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00929Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00929Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x929Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00929Du:
    if(m==0u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00929Du,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x929Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00929Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 BF Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00929Eu,2u);r->open_bus=0xBFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92A0u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBFu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092A0u:
    if(m==0u&&x==0u&&e==0u){ /* 5D 1B 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092A0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92A3u;
      sc_v11_op_eor(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x011Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092A3u:
    if(m==0u&&x==0u&&e==0u){ /* 25 BF Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092A3u,2u);r->open_bus=0xBFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92A5u;
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBFu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092A5u:
    if(m==0u&&x==0u&&e==0u){ /* 95 C9 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092A5u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92A7u;
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0xC9u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092A7u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 23 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092A7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92AAu;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0123u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092AAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 BF Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092AAu,2u);r->open_bus=0xBFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92ACu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBFu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092ACu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092ACu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92ADu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092ADu:
    if(m==0u&&x==0u&&e==0u){ /* AC 33 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092ADu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B0u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0133u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092B0u:
    if(m==0u&&x==0u&&e==0u){ /* BD 1B 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092B0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x011Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092B3u:
    if(m==0u&&x==0u&&e==0u){ /* C5 BF Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092B3u,2u);r->open_bus=0xBFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B5u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBFu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092B5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092B5u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92B7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92C2u;}
      if(c->pc!=0x92B7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92B7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092B7u:
    if(m==0u&&x==0u&&e==0u){ /* DE 2B 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092B7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92BAu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x012Bu),16u,-1);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092BAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092BAu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92BCu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92C6u;}
      if(c->pc!=0x92BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092BCu:
    if(m==0u&&x==0u&&e==0u){ /* 9D 23 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092BCu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92BFu;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0123u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092BFu:
    if(m==0u&&x==0u&&e==0u){ /* AC 35 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092BFu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92C2u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0135u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092C2u:
    if(m==0u&&x==0u&&e==0u){ /* 98 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092C2u,1u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92C3u;
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092C3u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 2B 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092C3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92C6u;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x012Bu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092C6u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092C6u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92C7u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092C7u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 1B 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092C7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92CAu;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x011Bu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092CAu:
    if(m==0u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092CAu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92CBu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092CBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092CBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92CCu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092CCu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092CCu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92CEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092CEu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092CEu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92D0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092D0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 25 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092D0u,2u);r->open_bus=0x25u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92D2u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92F7u;}
      if(c->pc!=0x92D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092D2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092D2u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92D5u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092D5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 FF Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092D5u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92D8u;
      sc_v11_op_and(r,0xFFF0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092D8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092D8u,2u);r->open_bus=0x1Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92DAu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92F7u;}
      if(c->pc!=0x92DAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92DAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092DAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 06 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092DAu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92DDu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0406u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092DDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF FF Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092DDu,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E0u;
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092E0u:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092E0u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E2u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x92F6u;}
      if(c->pc!=0x92E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092E2u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092E2u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E3u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092E3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 06 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092E3u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0406u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092E6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 B4 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092E6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92E9u;
      sc_v11_op_compare(r,c->a,0x00B4u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092E9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092E9u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92EBu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x92F6u;}
      if(c->pc!=0x92EBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092EBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 08 04 Mesen corrected gameplay frame 2749; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092EBu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92EEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0408u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092EEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 2749; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092EEu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92F0u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x92F6u;}
      if(c->pc!=0x92F0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x92F0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092F6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092F6u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92F7u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092F7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092F7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92FAu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092FAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 06 04 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092FAu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x92FDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0406u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0092FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 08 04 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0092FDu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9300u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0408u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009300u:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009300u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9302u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9309u;}
      if(c->pc!=0x9302u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9302u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009302u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009302u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9305u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009305u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0A 04 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009305u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9308u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x040Au),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009308u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009308u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9309u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00930Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00930Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x930Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00930Fu:
    if(m==1u&&x==0u&&e==0u){ /* 64 B9 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00930Fu,2u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9311u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB9u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009311u:
    if(m==1u&&x==0u&&e==0u){ /* E6 C7 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009311u,2u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9313u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xC7u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009313u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B9 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009313u,2u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9315u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009315u:
    if(m==1u&&x==0u&&e==0u){ /* F0 FA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009315u,2u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9317u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9311u;}
      if(c->pc!=0x9317u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9317u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009317u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009317u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9318u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009318u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009318u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x931Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00931Au:
    if(m==1u&&x==1u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00931Au,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x931Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00931Cu:
    if(m==1u&&x==1u&&e==0u){ /* 10 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00931Cu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x931Eu;
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9321u;}
      if(c->pc!=0x931Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x931Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009321u:
    if(m==1u&&x==1u&&e==0u){ /* C9 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009321u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9323u;
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009323u:
    if(m==1u&&x==1u&&e==0u){ /* F0 4F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009323u,2u);r->open_bus=0x4Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9325u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9374u;}
      if(c->pc!=0x9325u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9325u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009325u:
    if(m==1u&&x==1u&&e==0u){ /* C9 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009325u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9327u;
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009327u:
    if(m==1u&&x==1u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009327u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9329u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x932Cu;}
      if(c->pc!=0x9329u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9329u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00932Cu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00932Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x932Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00932Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 0F 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00932Eu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9331u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009331u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009331u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9333u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9341u;}
      if(c->pc!=0x9333u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9333u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009341u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009341u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9343u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009343u:
    if(m==1u&&x==1u&&e==0u){ /* AD 37 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009343u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9346u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0137u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009346u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 10 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009346u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9349u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009349u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 10 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009349u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x934Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00934Cu:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00934Cu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x934Du;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00934Du:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00934Du,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x934Fu;
      sc_v11_op_adc(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00934Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0E 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00934Fu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9352u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009352u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0E 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009352u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9355u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009355u:
    if(m==1u&&x==1u&&e==0u){ /* AD 39 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009355u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9358u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0139u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009358u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0F 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009358u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x935Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00935Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0F 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00935Bu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x935Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00935Eu:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00935Eu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x935Fu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00935Fu:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00935Fu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9361u;
      sc_v11_op_adc(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009361u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0D 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009361u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9364u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009364u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0D 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009364u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9367u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009367u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 12 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009367u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x936Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00936Au:
    if(m==1u&&x==1u&&e==0u){ /* 9C 12 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00936Au,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x936Du;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00936Du:
    if(m==1u&&x==1u&&e==0u){ /* 9C 11 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00936Du,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9370u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009370u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 11 21 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009370u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9373u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009373u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009373u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9374u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
