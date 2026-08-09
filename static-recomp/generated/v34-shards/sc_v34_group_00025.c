/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00025(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0094BCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 C0 94 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094BCu,3u);r->open_bus=0x94u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94BFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94BEu))return 0;c->pc=0x94C0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094BFu:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094BFu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94C0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094C0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094C0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94C2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094C2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094C2u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94C4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094C4u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094C4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94C7u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094C7u:
    if(m==1u&&x==0u&&e==0u){ /* A0 C0 5D Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094C7u,3u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94CAu;
      sc_v11_op_ldy(r,0x5DC0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094CAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094CAu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94CCu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094CCu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 02 7F Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094CCu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94D0u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F0200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094D0u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094D0u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94D1u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094D1u:
    if(m==1u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094D1u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94D2u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094D2u:
    if(m==1u&&x==0u&&e==0u){ /* D0 F8 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094D2u,2u);r->open_bus=0xF8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94D4u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x94CCu;}
      if(c->pc!=0x94D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094D4u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094D4u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94D5u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094D5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D9 94 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094D5u,3u);r->open_bus=0x94u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94D8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94D7u))return 0;c->pc=0x94D9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094D8u:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094D8u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94D9u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094D9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094D9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94DBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094DBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094DBu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094DDu:
    if(m==1u&&x==0u&&e==0u){ /* AD 4B 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094DDu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E0u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B4Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E0u:
    if(m==1u&&x==0u&&e==0u){ /* F0 F2 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094E0u,2u);r->open_bus=0xF2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E2u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x94D4u;}
      if(c->pc!=0x94E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 3A Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094E2u,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x3Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E4u:
    if(m==1u&&x==0u&&e==0u){ /* F0 15 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094E4u,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E6u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x94FBu;}
      if(c->pc!=0x94E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E6u:
    if(m==1u&&x==0u&&e==0u){ /* AD 4D 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094E6u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94E9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B4Du)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094E9u:
    if(m==1u&&x==0u&&e==0u){ /* C9 02 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094E9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94EBu;
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094EBu:
    if(m==1u&&x==0u&&e==0u){ /* F0 0C Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094EBu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94EDu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x94F9u;}
      if(c->pc!=0x94EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094EDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094EDu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94EFu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094EFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4D 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094EFu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94F2u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B4Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094F2u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094F2u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94F4u;
      sc_v11_op_lda(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094F4u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4F 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094F4u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94F7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B4Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094F7u:
    if(m==1u&&x==0u&&e==0u){ /* 80 02 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094F7u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94F9u;
      if(1){c->pc=0x94FBu;}
      if(c->pc!=0x94F9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94F9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094F9u:
    if(m==1u&&x==0u&&e==0u){ /* 64 3A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094F9u,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94FBu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x3Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094FBu:
    if(m==1u&&x==0u&&e==0u){ /* 4B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094FBu,1u);r->open_bus=0x4Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94FCu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094FCu:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094FCu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x94FDu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0094FDu:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0094FDu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9500u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B4Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009500u:
    if(m==1u&&x==0u&&e==0u){ /* B9 0E 96 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009500u,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9503u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x960Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009503u:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009503u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9505u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009505u:
    if(m==1u&&x==0u&&e==0u){ /* B9 0F 96 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009505u,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9508u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x960Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009508u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009508u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x950Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00950Au:
    if(m==1u&&x==0u&&e==0u){ /* B9 13 96 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00950Au,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x950Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9613u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00950Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 7A Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00950Du,2u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x950Fu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00950Fu:
    if(m==1u&&x==0u&&e==0u){ /* B9 14 96 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00950Fu,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9512u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x9614u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009512u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7D Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009512u,2u);r->open_bus=0x7Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9514u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009514u:
    if(m==1u&&x==0u&&e==0u){ /* A9 05 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009514u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9516u;
      sc_v11_op_lda(r,0x0005u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009516u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009516u,2u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9518u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009518u:
    if(m==1u&&x==0u&&e==0u){ /* 85 7E Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009518u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x951Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00951Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00951Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x951Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00951Cu:
    if(m==0u&&x==0u&&e==0u){ /* A0 20 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00951Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x951Fu;
      sc_v11_op_ldy(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00951Fu:
    if(m==0u&&x==0u&&e==0u){ /* AE 4F 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00951Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9522u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B4Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009522u:
    if(m==0u&&x==0u&&e==0u){ /* E0 FF 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009522u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9525u;
      sc_v11_op_compare(r,c->x,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009525u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009525u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9527u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x952Cu;}
      if(c->pc!=0x9527u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9527u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009527u:
    if(m==0u&&x==0u&&e==0u){ /* B7 7C Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009527u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9529u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009529u:
    if(m==0u&&x==0u&&e==0u){ /* 4C C1 95 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009529u,3u);r->open_bus=0x95u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x952Cu;
      c->pc=0x95C1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00952Cu:
    if(m==0u&&x==0u&&e==0u){ /* B7 79 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00952Cu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x952Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00952Eu:
    if(m==0u&&x==0u&&e==0u){ /* D7 7C Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00952Eu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9530u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009530u:
    if(m==0u&&x==0u&&e==0u){ /* F0 F7 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009530u,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9532u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9529u;}
      if(c->pc!=0x9532u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9532u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009532u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009532u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9534u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009534u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009534u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9535u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009535u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009535u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9536u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009536u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009536u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9537u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009537u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009537u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9538u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009538u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009538u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9539u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009539u:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009539u,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00953Bu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Cu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00953Cu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Du;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00953Du,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Eu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00953Eu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x953Fu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00953Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00953Fu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9540u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009540u:
    if(m==0u&&x==0u&&e==0u){ /* 85 85 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009540u,2u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9542u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x85u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009542u:
    if(m==0u&&x==0u&&e==0u){ /* B7 7C Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009542u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9544u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_long_y(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009544u:
    if(m==0u&&x==0u&&e==0u){ /* 85 80 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009544u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9546u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x80u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009546u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009546u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9547u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009547u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009547u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9548u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009548u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009548u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9549u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009549u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009549u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00954Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Bu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 83 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00954Bu,2u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x83u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00954Du,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Eu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00954Eu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x954Fu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00954Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00954Fu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9550u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009550u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009550u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9551u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009551u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009551u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9552u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009552u:
    if(m==0u&&x==0u&&e==0u){ /* 85 86 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009552u,2u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9554u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x86u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009554u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009554u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9556u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009556u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009556u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9558u;
      sc_v11_op_ldx(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009558u:
    if(m==1u&&x==1u&&e==0u){ /* DA Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009558u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9559u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009559u:
    if(m==1u&&x==1u&&e==0u){ /* AD 4F 0B Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009559u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x955Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B4Fu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00955Cu:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00955Cu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x955Du;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00955Du:
    if(m==1u&&x==1u&&e==0u){ /* B5 7F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00955Du,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x955Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00955Fu:
    if(m==1u&&x==1u&&e==0u){ /* 29 1F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00955Fu,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9561u;
      sc_v11_op_and(r,0x001Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009561u:
    if(m==1u&&x==1u&&e==0u){ /* 95 7F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009561u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9563u;
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009563u:
    if(m==1u&&x==1u&&e==0u){ /* B5 80 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009563u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9565u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x80u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009565u:
    if(m==1u&&x==1u&&e==0u){ /* 29 1F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009565u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9567u;
      sc_v11_op_and(r,0x001Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009567u:
    if(m==1u&&x==1u&&e==0u){ /* 95 80 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009567u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9569u;
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x80u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009569u:
    if(m==1u&&x==1u&&e==0u){ /* 38 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009569u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x956Au;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00956Au:
    if(m==1u&&x==1u&&e==0u){ /* F5 7F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00956Au,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x956Cu;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00956Cu:
    if(m==1u&&x==1u&&e==0u){ /* B0 08 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00956Cu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x956Eu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9576u;}
      if(c->pc!=0x956Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x956Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00956Eu:
    if(m==1u&&x==1u&&e==0u){ /* 49 FF Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00956Eu,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9570u;
      sc_v11_op_eor(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009570u:
    if(m==1u&&x==1u&&e==0u){ /* 1A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009570u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9571u;
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009571u:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009571u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9572u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009572u:
    if(m==1u&&x==1u&&e==0u){ /* 49 FF Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009572u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9574u;
      sc_v11_op_eor(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009574u:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009574u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9575u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009575u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009575u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9576u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009576u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009576u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9577u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009577u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009577u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9579u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009579u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009579u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x957Bu;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00957Bu:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00957Bu,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x957Du;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00957Du:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00957Du,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x957Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00957Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00957Eu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9582u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009582u:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009582u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9583u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009583u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009583u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9587u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009587u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009587u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9588u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009588u:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009588u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9589u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009589u:
    if(m==1u&&x==1u&&e==0u){ /* EA Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009589u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x958Au;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00958Au:
    if(m==1u&&x==1u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00958Au,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x958Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00958Eu:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00958Eu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x958Fu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00958Fu:
    if(m==1u&&x==1u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00958Fu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9593u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009593u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009593u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9594u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009594u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009594u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9596u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009596u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009596u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9598u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009598u:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009598u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9599u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009599u:
    if(m==1u&&x==1u&&e==0u){ /* EB Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009599u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x959Au;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00959Au:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00959Au,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x959Bu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00959Bu:
    if(m==1u&&x==1u&&e==0u){ /* 75 7F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00959Bu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x959Du;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00959Du:
    if(m==1u&&x==1u&&e==0u){ /* 29 1F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00959Du,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x959Fu;
      sc_v11_op_and(r,0x001Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00959Fu:
    if(m==1u&&x==1u&&e==0u){ /* FA Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00959Fu,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A0u:
    if(m==1u&&x==1u&&e==0u){ /* 95 7F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095A0u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A2u;
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A2u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095A2u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A3u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A3u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095A3u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A4u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A4u:
    if(m==1u&&x==1u&&e==0u){ /* E8 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095A4u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A5u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A5u:
    if(m==1u&&x==1u&&e==0u){ /* E0 09 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095A5u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A7u;
      sc_v11_op_compare(r,c->x,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A7u:
    if(m==1u&&x==1u&&e==0u){ /* D0 AF Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095A7u,2u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9558u;}
      if(c->pc!=0x95A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095A9u:
    if(m==1u&&x==1u&&e==0u){ /* 64 80 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095A9u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95ABu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x80u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095ABu:
    if(m==1u&&x==1u&&e==0u){ /* 64 83 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095ABu,2u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95ADu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x83u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095ADu:
    if(m==1u&&x==1u&&e==0u){ /* 64 86 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095ADu,2u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95AFu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x86u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095AFu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095AFu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 85 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095B1u,2u);r->open_bus=0x85u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B3u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x85u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095B3u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B4u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B4u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095B4u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B5u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B5u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095B5u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B6u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095B6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B7u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095B7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95B8u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095B8u:
    if(m==0u&&x==0u&&e==0u){ /* 05 82 Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095B8u,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BAu;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x82u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095BAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BBu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BBu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095BBu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BCu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BCu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095BCu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BDu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095BDu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BEu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095BEu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95BFu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095BFu:
    if(m==0u&&x==0u&&e==0u){ /* 05 7F Mesen corrected gameplay frame 9731; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095BFu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C1u;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C1u:
    if(m==0u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095C1u,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C2u;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C2u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 24 7E Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095C2u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C6u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2440u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C6u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095C6u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C7u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C7u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095C7u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95C8u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095C8u:
    if(m==0u&&x==0u&&e==0u){ /* C0 C0 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095C8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95CBu;
      sc_v11_op_compare(r,c->y,0x00C0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095CBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095CBu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95CDu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x95D3u;}
      if(c->pc!=0x95CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095CDu:
    if(m==0u&&x==0u&&e==0u){ /* 98 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095CDu,1u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95CEu;
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095CEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095CEu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95CFu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095CFu:
    if(m==0u&&x==0u&&e==0u){ /* 69 20 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095CFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95D2u;
      sc_v11_op_adc(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095D2u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095D2u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95D3u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095D3u:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 01 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095D3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95D6u;
      sc_v11_op_compare(r,c->y,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095D6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095D6u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95D8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x95DBu;}
      if(c->pc!=0x95D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095D8u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 1F 95 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095D8u,3u);r->open_bus=0x95u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95DBu;
      c->pc=0x951Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095DBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 4F 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095DBu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95DEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B4Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095DEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095DEu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95DFu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095DFu:
    if(m==0u&&x==0u&&e==0u){ /* 69 05 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095DFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95E2u;
      sc_v11_op_adc(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095E2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 01 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095E2u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95E5u;
      sc_v11_op_compare(r,c->a,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095E5u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095E5u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95E7u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x95EAu;}
      if(c->pc!=0x95E7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x95E7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095E7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 4B 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095E7u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95EAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095EAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4F 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095EAu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95EDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095EDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095EDu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95EFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095EFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095EFu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F1u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095F1u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F3u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095F3u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F5u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F5u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095F5u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F7u:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095F7u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95F9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095F9u:
    if(m==1u&&x==0u&&e==0u){ /* 09 02 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095F9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95FBu;
      sc_v11_op_ora(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095FBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095FBu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x95FDu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0095FDu:
    if(m==1u&&x==0u&&e==0u){ /* 20 A6 8D Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0095FDu,3u);r->open_bus=0x8Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9600u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x95FFu))return 0;c->pc=0x8DA6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009600u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009600u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9602u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009602u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009602u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9604u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009604u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009604u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9606u;
      sc_v11_op_ora(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009606u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009606u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9608u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009608u:
    if(m==1u&&x==0u&&e==0u){ /* F4 00 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009608u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x960Bu;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00960Bu:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00960Bu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x960Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00960Cu:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00960Cu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x960Du;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00960Du:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00960Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x960Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00961Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00961Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x961Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00961Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00961Eu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9620u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009620u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 80 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009620u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9623u;
      sc_v11_op_ldx(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009623u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 24 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009623u,3u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9626u;
      sc_v11_op_ldy(r,0x2440u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009626u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009626u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9629u;
      sc_v11_op_lda(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009629u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009629u,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x962Cu;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x9629u;sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00962Cu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00962Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x962Fu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00962Fu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00962Fu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9630u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009630u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009630u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9631u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009631u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009631u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9632u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009632u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009632u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9635u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009635u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009635u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9636u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009636u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009636u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9637u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009637u:
    if(m==0u&&x==0u&&e==0u){ /* AE 55 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009637u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x963Au;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00963Au:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00963Au,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x963Bu;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00963Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF AE 96 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00963Bu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x963Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0096AEu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00963Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00963Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9642u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009642u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4D 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009642u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9645u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009645u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009645u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9648u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009648u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4B 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009648u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x964Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00964Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00964Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x964Eu;
      sc_v11_op_lda(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00964Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4F 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00964Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9651u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009651u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D9 94 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009651u,3u);r->open_bus=0x94u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9654u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9653u))return 0;c->pc=0x94D9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009654u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009654u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9656u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009656u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 4B 0B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009656u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9659u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009659u:
    if(m==0u&&x==0u&&e==0u){ /* 64 BB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009659u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x965Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00965Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00965Bu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x965Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00965Du:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 8B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00965Du,3u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9660u;
      sc_v11_op_ldx(r,0x8B00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009660u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 25 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009660u,3u);r->open_bus=0x25u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9663u;
      sc_v11_op_ldy(r,0x2540u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009663u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009663u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9666u;
      sc_v11_op_lda(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009666u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009666u,3u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9669u;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x9666u;sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009669u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009669u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x966Cu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00966Cu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00966Cu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x966Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00966Du:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00966Du,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x966Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00966Eu:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00966Eu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x966Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00966Fu:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00966Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9672u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009672u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009672u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9673u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009673u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009673u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9674u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009674u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009674u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9676u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009676u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009676u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9678u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009678u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009678u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9679u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009679u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009679u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Au;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00967Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Bu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00967Bu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Cu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Cu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00967Cu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Du;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00967Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x967Fu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00967Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00967Fu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9682u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009682u:
    if(m==1u&&x==1u&&e==0u){ /* A9 22 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009682u,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9684u;
      sc_v11_op_lda(r,0x0022u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009684u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009684u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9687u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009687u:
    if(m==1u&&x==1u&&e==0u){ /* A9 40 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009687u,2u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9689u;
      sc_v11_op_lda(r,0x0040u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009689u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009689u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x968Cu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00968Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 24 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00968Cu,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x968Eu;
      sc_v11_op_lda(r,0x0024u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00968Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00968Eu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9691u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009691u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009691u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9693u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009693u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009693u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9696u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009696u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009696u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9698u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009698u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009698u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x969Bu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00969Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00969Bu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x969Du;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00969Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00969Du,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A0u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096A0u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A2u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A2u:
    if(m==1u&&x==1u&&e==0u){ /* A2 01 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096A2u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A4u;
      sc_v11_op_ldx(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A4u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096A4u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A6u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x96AAu;}
      if(c->pc!=0x96A6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96A6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096A6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A7u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A7u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096A7u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96A8u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096A8u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096A8u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96AAu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x96A6u;}
      if(c->pc!=0x96AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096AAu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096AAu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96ADu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096ADu:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096ADu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96AEu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096BEu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096BEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096C0u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C2u:
    if(m==1u&&x==0u&&e==0u){ /* A2 84 E5 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096C2u,3u);r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C5u;
      sc_v11_op_ldx(r,0xE584u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C5u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096C5u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C7u:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096C7u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C9u;
      sc_v11_op_lda(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C9u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096C9u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96CBu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096CBu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096CBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96CEu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096CEu:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096CEu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96D0u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096D0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096D0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96D2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096D2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096D2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96D5u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096D5u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096D5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96D7u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x96D7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096D7u:
    if(m==0u&&x==0u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2525; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096D7u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96DBu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x96DAu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096DBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096DBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096DDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096DDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E0u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 16 21 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096E0u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096E3u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E5u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096E5u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E7u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E7u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096E7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E8u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E8u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096E8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E9u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E9u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096E9u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96EAu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096EAu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096EAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96EBu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096EBu:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096EBu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96ECu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096ECu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096ECu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96EEu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096EEu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096EEu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96F1u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096F1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096F1u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96F3u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096F3u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096F3u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96F6u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096F6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096F6u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96F8u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096F8u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096F8u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96FBu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096FBu:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096FBu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96FDu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096FDu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0096FDu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9700u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009700u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009700u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9702u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009702u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009702u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9705u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009705u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009705u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9707u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009707u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009707u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x970Au;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00970Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00970Au,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x970Cu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00970Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00970Cu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x970Fu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00970Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00970Fu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9711u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009711u:
    if(m==1u&&x==1u&&e==0u){ /* A2 01 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009711u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9713u;
      sc_v11_op_ldx(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009713u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009713u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9715u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9719u;}
      if(c->pc!=0x9715u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9715u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009715u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009715u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9716u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009716u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009716u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9717u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009717u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009717u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9719u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9715u;}
      if(c->pc!=0x9719u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9719u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009719u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009719u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x971Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00971Cu:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00971Cu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9720u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x971Fu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009720u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009720u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9722u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009722u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 60 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009722u,3u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9725u;
      sc_v11_op_lda(r,0x6000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009725u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 16 21 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009725u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9728u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009728u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009728u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00972Au,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Cu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Cu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00972Cu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Du;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00972Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Eu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00972Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Fu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00972Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9730u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009730u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009730u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9731u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009731u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009731u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9733u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009733u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009733u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9736u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009736u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009736u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9738u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009738u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009738u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x973Bu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00973Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00973Bu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x973Du;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00973Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00973Du,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9740u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009740u:
    if(m==1u&&x==1u&&e==0u){ /* A9 C0 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009740u,2u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9742u;
      sc_v11_op_lda(r,0x00C0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009742u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009742u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9745u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009745u:
    if(m==1u&&x==1u&&e==0u){ /* A9 06 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009745u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9747u;
      sc_v11_op_lda(r,0x0006u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009747u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009747u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x974Au;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00974Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00974Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x974Cu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00974Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00974Cu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x974Fu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00974Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 40 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00974Fu,2u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9751u;
      sc_v11_op_lda(r,0x0040u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009751u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009751u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9754u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009754u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009754u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9756u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009756u:
    if(m==1u&&x==1u&&e==0u){ /* A2 01 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009756u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9758u;
      sc_v11_op_ldx(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009758u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009758u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x975Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x975Eu;}
      if(c->pc!=0x975Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x975Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00975Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00975Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x975Bu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00975Bu:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00975Bu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x975Cu;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00975Cu:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00975Cu,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x975Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x975Au;}
      if(c->pc!=0x975Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x975Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00975Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00975Eu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9761u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009761u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009761u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9763u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009763u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009763u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9765u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009765u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009765u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9767u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009767u:
    if(m==1u&&x==0u&&e==0u){ /* A2 FB C0 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009767u,3u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x976Au;
      sc_v11_op_ldx(r,0xC0FBu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00976Au:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00976Au,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x976Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00976Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 09 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00976Cu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x976Eu;
      sc_v11_op_lda(r,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00976Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00976Eu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9770u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009770u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009770u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9773u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009773u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009773u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9775u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009775u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009775u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9777u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009777u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009777u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x977Au;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00977Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2527; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00977Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x977Cu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x977Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00977Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00977Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x977Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00977Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00977Eu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9780u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009780u:
    if(m==1u&&x==0u&&e==0u){ /* A2 BD C7 Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009780u,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9783u;
      sc_v11_op_ldx(r,0xC7BDu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009783u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009783u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9785u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009785u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0B Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009785u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9787u;
      sc_v11_op_lda(r,0x000Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009787u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009787u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9789u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009789u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 28 Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009789u,3u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x978Cu;
      sc_v11_op_ldx(r,0x2800u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00978Cu:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00978Cu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x978Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00978Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00978Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9790u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009790u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009790u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9793u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009793u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2537; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009793u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9795u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9795u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009795u:
    if(m==0u&&x==0u&&e==0u){ /* 22 06 82 00 Mesen corrected gameplay frame 2538; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009795u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9799u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9798u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009799u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x009799u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x979Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00979Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 40 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00979Bu,3u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x979Eu;
      sc_v11_op_lda(r,0x4000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00979Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 16 21 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00979Eu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097A1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097A3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A5u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097A5u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A6u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097A6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A7u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A7u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097A7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A8u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A8u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097A8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A9u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A9u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097A9u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97AAu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097AAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097AAu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97ACu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097ACu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097ACu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97AFu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097AFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097AFu,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97B1u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097B1u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097B1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97B4u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097B4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097B4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97B6u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097B6u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097B6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97B9u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097B9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097B9u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97BBu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097BBu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097BBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97BEu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097BEu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097BEu,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97C0u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097C0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097C0u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97C3u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097C3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097C3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97C5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097C5u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097C5u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97C8u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097C8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 30 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097C8u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97CAu;
      sc_v11_op_lda(r,0x0030u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097CAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097CAu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97CDu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097CDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097CDu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97CFu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097CFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097CFu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D1u;
      sc_v11_op_ldx(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D1u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097D1u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x97D7u;}
      if(c->pc!=0x97D3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97D3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097D3u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D4u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D4u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097D4u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D5u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097D5u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x97D3u;}
      if(c->pc!=0x97D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097D7u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97DAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097DAu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097DAu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97DCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097DCu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 A8 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097DCu,3u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97DFu;
      sc_v11_op_ldx(r,0xA800u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097DFu:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 38 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097DFu,3u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97E2u;
      sc_v11_op_ldy(r,0x3840u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097E2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 07 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097E2u,3u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97E5u;
      sc_v11_op_lda(r,0x07FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097E5u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097E5u,3u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97E8u;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x97E5u;sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097E8u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097E8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97EBu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097EBu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097EBu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97ECu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097ECu:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097ECu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97EDu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097EDu:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097EDu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97EEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097EEu:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097EEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97F1u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097F1u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097F1u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97F2u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097F2u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097F2u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97F3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097F3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0097F3u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97F4u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
