/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00033(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00CD98u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9C CD Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CD98u,3u);r->open_bus=0xCDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCD9Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCD9Au))return 0;c->pc=0xCD9Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CD9Bu:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CD9Bu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCD9Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CD9Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CD9Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCD9Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CD9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CD9Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDA1u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDA1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDA1u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDA2u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDA2u:
    if(m==0u&&x==0u&&e==0u){ /* 69 60 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDA2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDA5u;
      sc_v11_op_adc(r,0x0060u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDA5u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDA5u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDA6u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDA6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDA6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDA7u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDA7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDA7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDA8u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDA8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDA8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDA9u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDA9u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDA9u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDAAu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDAAu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDAAu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDABu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDABu:
    if(m==0u&&x==0u&&e==0u){ /* 98 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDABu,1u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDACu;
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDACu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDACu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDADu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDADu:
    if(m==0u&&x==0u&&e==0u){ /* 64 79 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDADu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDAFu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDAFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDAFu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDB1u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCDB3u;}
      if(c->pc!=0xCDB1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCDB1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDB1u:
    if(m==0u&&x==0u&&e==0u){ /* C6 79 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDB1u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDB3u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDB3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDB3u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDB4u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDB4u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDB4u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDB5u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDB5u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDB5u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDB6u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDB6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDB6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDB7u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDB7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDB7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDB8u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDB8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDB8u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDBAu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDBAu:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDBAu,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDBBu;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDBBu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDBBu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDBCu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDBCu:
    if(m==0u&&x==0u&&e==0u){ /* 65 7C Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDBCu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDBEu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDBEu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDBEu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDBFu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDBFu:
    if(m==0u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDBFu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDC0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDC0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDC0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDC3u;
      sc_v11_op_lda(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDC3u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDC3u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDC5u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDC5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDC5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDC7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDC7u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDC7u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDC9u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDC9u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDC9u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDCAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDCAu:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDCAu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDCBu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDCBu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDCBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDCDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDCDu:
    if(m==1u&&x==0u&&e==0u){ /* B9 00 90 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDCDu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDD0u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDD0u:
    if(m==1u&&x==0u&&e==0u){ /* 29 F0 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDD0u,2u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDD2u;
      sc_v11_op_and(r,0x00F0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDD2u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDD2u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDD4u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDD4u:
    if(m==1u&&x==0u&&e==0u){ /* A5 79 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDD4u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDD6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDD6u:
    if(m==1u&&x==0u&&e==0u){ /* 10 08 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDD6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDD8u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xCDE0u;}
      if(c->pc!=0xCDD8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCDD8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDD8u:
    if(m==1u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDD8u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDDAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDDAu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDDAu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDDBu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDDBu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDDBu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDDCu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDDCu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDDCu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDDDu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDDDu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDDDu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDDEu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDDEu:
    if(m==1u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDDEu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDE0u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDE0u:
    if(m==1u&&x==0u&&e==0u){ /* BD 00 80 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDE0u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDE3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x8000u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDE3u:
    if(m==1u&&x==0u&&e==0u){ /* 05 7F Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDE3u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDE5u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDE5u:
    if(m==1u&&x==0u&&e==0u){ /* 9D 00 80 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDE5u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDE8u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x8000u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDE8u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDE8u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDE9u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDE9u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDE9u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDEAu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDEAu:
    if(m==1u&&x==0u&&e==0u){ /* C6 7C Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDEAu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDECu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Cu),8u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDECu:
    if(m==1u&&x==0u&&e==0u){ /* D0 DF Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDECu,2u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDEEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCDCDu;}
      if(c->pc!=0xCDEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCDEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDEEu:
    if(m==1u&&x==0u&&e==0u){ /* F4 00 00 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDEEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDF1u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDF1u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDF1u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDF2u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDF2u:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDF2u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDF3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00CDF3u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2565; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00CDF3u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xCDF4u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
