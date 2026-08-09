/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000E6(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0399D2u:
    if(m==0u&&x==0u&&e==0u){ /* A0 48 F4 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399D2u,3u);r->open_bus=0xF4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99D5u;
      sc_v11_op_ldy(r,0xF448u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399D5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399D5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99D8u;
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399D8u:
    if(m==0u&&x==0u&&e==0u){ /* F0 32 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399D8u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99DAu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9A0Cu;}
      if(c->pc!=0x99DAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x99DAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399DAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399DAu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99DCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399DCu:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399DCu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99DFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399DFu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399DFu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99E0u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399E0u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399E0u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99E1u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399E1u:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399E1u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99E4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399E4u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399E4u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99E5u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399E5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399E5u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99E8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x99E7u))return 0;c->pc=0xA29Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399E8u:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 6B 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399E8u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99ECu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F6B00u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399ECu:
    if(m==1u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399ECu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99EDu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399EDu:
    if(m==1u&&x==0u&&e==0u){ /* FF 70 82 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399EDu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99F1u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F8270u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399F1u:
    if(m==1u&&x==0u&&e==0u){ /* B0 02 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399F1u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99F3u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x99F5u;}
      if(c->pc!=0x99F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x99F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399F5u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399F5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99F7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399F7u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399F7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99FAu;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399FAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399FAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99FBu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399FBu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399FBu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99FCu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399FCu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399FCu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99FDu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399FDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399FDu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99FEu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399FEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399FEu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x99FFu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0399FFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 70 17 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0399FFu,3u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A02u;
      sc_v11_op_compare(r,c->a,0x1770u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A02u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A02u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A04u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9A07u;}
      if(c->pc!=0x9A04u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A04u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A04u:
    if(m==0u&&x==0u&&e==0u){ /* A9 70 17 Mesen corrected gameplay frame 5114; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A04u,3u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A07u;
      sc_v11_op_lda(r,0x1770u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A07u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A07u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A08u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A08u:
    if(m==0u&&x==0u&&e==0u){ /* E9 B8 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A08u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A0Bu;
      sc_v11_op_sbc(r,0x0BB8u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A0Bu:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A0Bu,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A0Cu;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 98 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A0Cu,1u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A0Du;
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A0Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A0Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A0Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A3Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A3Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A40u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A40u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A40u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A41u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A41u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A41u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A42u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A42u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A42u,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A43u;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A43u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A43u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A44u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A44u:
    if(m==0u&&x==0u&&e==0u){ /* E9 06 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A44u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A47u;
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A47u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A47u,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A48u;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A48u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A48u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A49u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A49u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A49u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A4Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A4Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A4Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A4Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A4Du:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A4Du,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A50u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A50u:
    if(m==1u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A50u,1u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A51u;
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A51u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A51u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A52u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A52u:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A52u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A55u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A55u:
    if(m==1u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A55u,1u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A56u;
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A56u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9E 84 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A56u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A59u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A58u))return 0;c->pc=0x849Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A59u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A59u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A5Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A5Bu,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A5Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A5Du))return 0;c->pc=0x9A93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A5Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF 02 02 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A5Eu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A62u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0202u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A62u:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A62u,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A65u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A64u))return 0;c->pc=0x9A93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A65u:
    if(m==0u&&x==0u&&e==0u){ /* BF 04 02 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A65u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A69u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0204u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A69u:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A69u,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A6Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A6Bu))return 0;c->pc=0x9A93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A6Cu:
    if(m==0u&&x==0u&&e==0u){ /* BF F0 02 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A6Cu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A70u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F02F0u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A70u:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A70u,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A73u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A72u))return 0;c->pc=0x9A93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A73u:
    if(m==0u&&x==0u&&e==0u){ /* BF F4 02 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A73u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A77u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F02F4u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A77u:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A77u,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A7Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A79u))return 0;c->pc=0x9A93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A7Au:
    if(m==0u&&x==0u&&e==0u){ /* BF E0 03 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A7Au,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A7Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F03E0u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A7Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A7Eu,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A81u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A80u))return 0;c->pc=0x9A93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A81u:
    if(m==0u&&x==0u&&e==0u){ /* BF E2 03 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A81u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A85u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F03E2u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A85u:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A85u,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A88u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A87u))return 0;c->pc=0x9A93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A88u:
    if(m==0u&&x==0u&&e==0u){ /* BF E4 03 7F Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A88u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A8Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F03E4u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 93 9A Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A8Cu,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A8Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A8Eu))return 0;c->pc=0x9A93u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A8Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A8Fu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A91u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A91u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A91u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A92u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A92u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A92u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A93u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A93u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A93u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A96u;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A96u:
    if(m==0u&&x==0u&&e==0u){ /* C9 89 00 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A96u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A99u;
      sc_v11_op_compare(r,c->a,0x0089u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039A99u:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039A99u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9A9Bu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9AA2u;}
      if(c->pc!=0x9A9Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A9Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AA2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AA2u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AA3u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AA3u:
    if(m==1u&&x==0u&&e==0u){ /* 20 4D A1 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AA3u,3u);r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AA6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AA5u))return 0;c->pc=0xA14Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AA6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4D A1 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AA6u,3u);r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AA9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AA8u))return 0;c->pc=0xA14Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AA9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4D A1 Mesen corrected gameplay frame 3216; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AA9u,3u);r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AACu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AABu))return 0;c->pc=0xA14Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AACu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AACu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AAFu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AAFu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AAFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AB2u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AB2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AB2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AB4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AB2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AB4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AB4u:
    if(m==0u&&x==0u&&e==0u){ /* BF 6E B1 7F Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AB4u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AB8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB16Eu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AB8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 01 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AB8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ABBu;
      sc_v11_op_compare(r,c->a,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ABBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ABBu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ABDu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9AC0u;}
      if(c->pc!=0x9ABDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9ABDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AC0u:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AC0u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AC1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AC1u:
    if(m==0u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AC1u,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AC2u;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AC2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AC2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AC4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AC4u:
    if(m==1u&&x==0u&&e==0u){ /* 9F AB B0 7F Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AC4u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AC8u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FB0ABu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AC8u:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AC8u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AC9u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AC9u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AC9u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ACAu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ACAu:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ACAu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ACBu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ACBu:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ACBu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ACCu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ACCu:
    if(m==1u&&x==0u&&e==0u){ /* C0 C3 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ACCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ACFu;
      sc_v11_op_compare(r,c->y,0x00C3u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ACFu:
    if(m==1u&&x==0u&&e==0u){ /* D0 E1 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ACFu,2u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AD1u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9AB2u;}
      if(c->pc!=0x9AD1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9AD1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AD1u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AD1u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AD3u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AD3u:
    if(m==1u&&x==0u&&e==0u){ /* 8D DD 0C Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AD3u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AD6u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0CDDu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AD6u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AD6u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AD7u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AD7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AD7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AD9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AD9u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AD9u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ADAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ADAu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ADAu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ADBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ADBu:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ADBu,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ADCu;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ADCu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ADCu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ADDu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ADDu:
    if(m==0u&&x==0u&&e==0u){ /* E9 14 00 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ADDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AE0u;
      sc_v11_op_sbc(r,0x0014u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AE0u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AE0u,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AE1u;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AE1u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AE1u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AE2u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AE2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AE2u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AE4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AE4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3B A1 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AE4u,3u);r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AE7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AE6u))return 0;c->pc=0xA13Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AE7u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AE7u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AE9u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AE9u:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AE9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AEBu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AEBu:
    if(m==0u&&x==0u&&e==0u){ /* 64 04 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AEBu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AEDu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AEDu:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AEDu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AEFu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AEFu:
    if(m==0u&&x==0u&&e==0u){ /* 64 08 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AEFu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AF1u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AF1u:
    if(m==0u&&x==0u&&e==0u){ /* 64 0A Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AF1u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AF3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AF3u:
    if(m==0u&&x==0u&&e==0u){ /* 64 12 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AF3u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AF5u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AF5u:
    if(m==0u&&x==0u&&e==0u){ /* 64 10 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AF5u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AF7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x10u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 10 Mesen corrected gameplay frame 2827; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AF5u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AF7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x10u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AF7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AF7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AF9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AF7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AF9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AF9u:
    if(m==1u&&x==0u&&e==0u){ /* A5 12 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AF9u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AFBu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AFBu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AFBu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AFCu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AFCu:
    if(m==1u&&x==0u&&e==0u){ /* A5 10 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AFCu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9AFEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039AFEu:
    if(m==1u&&x==0u&&e==0u){ /* 20 9E 84 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039AFEu,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B01u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B00u))return 0;c->pc=0x849Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B01u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B01u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B03u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B03u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B03u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B06u;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B06u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 0B Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B06u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B09u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B89u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B09u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B09u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B0Au;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B0Au:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B0Au,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B0Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B0Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B0Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B10u;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B10u:
    if(m==0u&&x==0u&&e==0u){ /* F0 48 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B10u,2u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B12u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9B5Au;}
      if(c->pc!=0x9B12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B12u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B12u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B14u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B14u:
    if(m==1u&&x==0u&&e==0u){ /* A5 10 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B14u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B16u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B16u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 85 0B Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B16u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B19u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B19u:
    if(m==1u&&x==0u&&e==0u){ /* A5 12 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B19u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B1Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B1Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 86 0B Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B1Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B1Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B1Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B1Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B20u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B20u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D5 9B Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B20u,3u);r->open_bus=0x9Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B23u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B22u))return 0;c->pc=0x9BD5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B23u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B23u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B24u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B24u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B24u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B25u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B25u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B25u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B26u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B26u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FE 00 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B26u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B29u;
      sc_v11_op_compare(r,c->a,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B29u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B29u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B2Bu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9B2Eu;}
      if(c->pc!=0x9B2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B2Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B2Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B30u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B30u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B30u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B31u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B31u:
    if(m==1u&&x==0u&&e==0u){ /* A5 12 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B31u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B33u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B33u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B33u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B34u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B34u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B34u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B35u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B35u:
    if(m==1u&&x==0u&&e==0u){ /* A5 10 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B35u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B37u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B37u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B37u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B38u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B38u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B38u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B3Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B3Au))return 0;c->pc=0xA29Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B3Bu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B3Bu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B3Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B3Cu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 B6 7F Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B3Cu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B40u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FB600u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B40u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B40u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B42u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B42u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B42u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B44u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B44u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B44u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B45u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B45u:
    if(m==0u&&x==0u&&e==0u){ /* 65 10 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B45u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B47u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x10u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B47u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B47u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B49u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B49u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B49u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B4Bu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9B4Du;}
      if(c->pc!=0x9B4Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B4Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B4Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B4Du,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B4Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B4Fu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B4Fu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B50u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B50u:
    if(m==0u&&x==0u&&e==0u){ /* 65 12 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B50u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B52u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x12u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B52u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B52u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B54u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B54u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B54u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B56u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9B58u;}
      if(c->pc!=0x9B56u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B56u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B58u:
    if(m==0u&&x==0u&&e==0u){ /* E6 08 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B58u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B5Au;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B5Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B5Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B5Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B5Cu:
    if(m==1u&&x==0u&&e==0u){ /* E6 10 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B5Cu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B5Eu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x10u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B5Eu:
    if(m==1u&&x==0u&&e==0u){ /* A5 10 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B5Eu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B60u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B60u:
    if(m==1u&&x==0u&&e==0u){ /* C9 78 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B60u,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B62u;
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B62u:
    if(m==1u&&x==0u&&e==0u){ /* D0 93 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B62u,2u);r->open_bus=0x93u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B64u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9AF7u;}
      if(c->pc!=0x9B64u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B64u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B64u:
    if(m==1u&&x==0u&&e==0u){ /* E6 12 Mesen corrected gameplay frame 2827; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B64u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B66u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x12u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B66u:
    if(m==1u&&x==0u&&e==0u){ /* A5 12 Mesen corrected gameplay frame 2827; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B66u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B68u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B68u:
    if(m==1u&&x==0u&&e==0u){ /* C9 64 Mesen corrected gameplay frame 2827; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B68u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B6Au;
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B6Au:
    if(m==1u&&x==0u&&e==0u){ /* D0 89 Mesen corrected gameplay frame 2827; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B6Au,2u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B6Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9AF5u;}
      if(c->pc!=0x9B6Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B6Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B6Cu:
    if(m==1u&&x==0u&&e==0u){ /* 20 2F A0 Mesen corrected gameplay frame 2879; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B6Cu,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B6Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B6Eu))return 0;c->pc=0xA02Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B5 A0 Mesen corrected gameplay frame 2899; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B6Fu,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B72u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B71u))return 0;c->pc=0xA0B5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B72u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2F A0 Mesen corrected gameplay frame 2919; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B72u,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B75u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B74u))return 0;c->pc=0xA02Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B75u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B75u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B77u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B77u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B77u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B7Au;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B7Au:
    if(m==1u&&x==0u&&e==0u){ /* BF B8 C1 7F Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B7Au,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B7Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FC1B8u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B7Eu:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B7Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B7Fu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B7Fu:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B7Fu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B81u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9B83u;}
      if(c->pc!=0x9B81u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B81u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B83u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 28 8E 7F Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B83u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B87u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F8E28u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B87u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B87u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B88u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B88u:
    if(m==1u&&x==0u&&e==0u){ /* E0 B8 0B Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B88u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B8Bu;
      sc_v11_op_compare(r,c->x,0x0BB8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B8Bu:
    if(m==1u&&x==0u&&e==0u){ /* D0 ED Mesen corrected gameplay frame 2939; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B8Bu,2u);r->open_bus=0xEDu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B8Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9B7Au;}
      if(c->pc!=0x9B8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B8Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 4B A2 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B8Du,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B90u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B8Fu))return 0;c->pc=0xA24Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B90u:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B90u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B92u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B92u:
    if(m==1u&&x==0u&&e==0u){ /* 05 0A Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B92u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B94u;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B94u:
    if(m==1u&&x==0u&&e==0u){ /* F0 1E Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B94u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B96u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9BB4u;}
      if(c->pc!=0x9B96u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B96u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B96u:
    if(m==1u&&x==0u&&e==0u){ /* 20 21 A4 Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B96u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B99u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B98u))return 0;c->pc=0xA421u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B9Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B9Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9B9Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039B9Eu:
    if(m==1u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039B9Eu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BA0u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BA0u:
    if(m==1u&&x==0u&&e==0u){ /* 8D A9 0B Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BA0u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BA3u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BA9u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BA3u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BA3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BA5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BA5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BA5u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BA8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BA7u))return 0;c->pc=0xA421u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BABu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BABu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BADu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BADu:
    if(m==1u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BADu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BAFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BAFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D AA 0B Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BAFu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BB2u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BAAu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BB2u:
    if(m==1u&&x==0u&&e==0u){ /* 80 0C Mesen corrected gameplay frame 3698; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BB2u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BB4u;
      if(1){c->pc=0x9BC0u;}
      if(c->pc!=0x9BB4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BB4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BB4u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BB4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BB6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BB6u:
    if(m==1u&&x==0u&&e==0u){ /* A9 3C Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BB6u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BB8u;
      sc_v11_op_lda(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BB8u:
    if(m==1u&&x==0u&&e==0u){ /* 8D A9 0B Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BB8u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BBBu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BA9u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BBBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 32 Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BBBu,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BBDu;
      sc_v11_op_lda(r,0x0032u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BBDu:
    if(m==1u&&x==0u&&e==0u){ /* 8D AA 0B Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BBDu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BC0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BAAu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BC0u:
    if(m==1u&&x==0u&&e==0u){ /* AD A9 0B Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BC0u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BC3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BA9u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BC3u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BC3u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BC4u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BC4u:
    if(m==1u&&x==0u&&e==0u){ /* 8D AB 0B Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BC4u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BC7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BABu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BC7u:
    if(m==1u&&x==0u&&e==0u){ /* AD AA 0B Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BC7u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BCAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BAAu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BCAu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BCAu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BCBu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BCBu:
    if(m==1u&&x==0u&&e==0u){ /* 8D AC 0B Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BCBu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BCEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BACu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BCEu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BCEu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BD0u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BD0u:
    if(m==1u&&x==0u&&e==0u){ /* 8D DE 0C Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BD0u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BD3u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0CDEu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BD3u:
    if(m==1u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BD3u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BD4u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BD4u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BD4u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BD5u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BD5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BD5u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BD7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BD7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BD7u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BDAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BDAu:
    if(m==0u&&x==0u&&e==0u){ /* C9 76 03 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BDAu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BDDu;
      sc_v11_op_compare(r,c->a,0x0376u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BDDu:
    if(m==0u&&x==0u&&e==0u){ /* 90 04 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BDDu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BDFu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9BE3u;}
      if(c->pc!=0x9BDFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BDFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BE3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 84 00 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BE3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BE6u;
      sc_v11_op_compare(r,c->a,0x0084u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BE6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BE6u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BE8u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9BEBu;}
      if(c->pc!=0x9BE8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BE8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BE8u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 3E 9A Mesen corrected gameplay frame 5396; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BE8u,3u);r->open_bus=0x9Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BEBu;
      c->pc=0x9A3Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BEBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 37 01 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BEBu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BEEu;
      sc_v11_op_compare(r,c->a,0x0137u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BEEu:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BEEu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BF0u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9BF3u;}
      if(c->pc!=0x9BF0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BF0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BF3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 F4 01 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BF3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BF6u;
      sc_v11_op_compare(r,c->a,0x01F4u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039BF6u:
    if(m==0u&&x==0u&&e==0u){ /* B0 08 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039BF6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9BF8u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9C00u;}
      if(c->pc!=0x9BF8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BF8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
