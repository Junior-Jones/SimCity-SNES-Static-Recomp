/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00071(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01C400u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C400u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC403u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C403u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C403u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC406u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C406u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C406u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC409u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C409u:
    if(m==0u&&x==0u&&e==0u){ /* F0 28 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C409u,2u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC40Bu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC433u;}
      if(c->pc!=0xC40Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC40Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C40Bu:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C40Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC40Eu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C40Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 80 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C40Eu,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC412u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018000u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C412u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C412u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC415u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C415u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C415u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC418u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F9u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C418u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C418u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC41Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C41Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C41Bu,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC41Eu;
      sc_v11_op_and(r,0xFFF8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C41Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C41Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC421u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C421u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C421u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC424u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C424u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C424u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC427u;
      sc_v11_op_and(r,0xFFF8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C427u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C427u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC42Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C42Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C F5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C42Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC42Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C42Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C42Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC430u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C430u:
    if(m==0u&&x==0u&&e==0u){ /* 20 75 B3 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C430u,3u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC433u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC432u))return 0;c->pc=0xB375u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C433u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C433u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC434u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C434u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C434u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC436u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C436u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C436u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC438u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C438u:
    if(m==0u&&x==1u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C438u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC43Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C43Bu:
    if(m==0u&&x==1u&&e==0u){ /* F0 52 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C43Bu,2u);r->open_bus=0x52u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC43Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC48Fu;}
      if(c->pc!=0xC43Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC43Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C43Du:
    if(m==0u&&x==1u&&e==0u){ /* AE F9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C43Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC440u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01F9u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C440u:
    if(m==0u&&x==1u&&e==0u){ /* BF C0 80 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C440u,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC444u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C0u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C444u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C444u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC447u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C447u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C447u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC448u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C448u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C448u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC449u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C449u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C449u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC44Au;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C44Au:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C44Au,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC44Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C44Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C44Cu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC44Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C44Fu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C44Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC452u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C452u:
    if(m==0u&&x==1u&&e==0u){ /* C9 10 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C452u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC455u;
      sc_v11_op_compare(r,c->a,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C455u:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C455u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC457u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC45Cu;}
      if(c->pc!=0xC457u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC457u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C45Cu:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C45Cu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC45Du;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C45Du:
    if(m==0u&&x==1u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C45Du,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC45Fu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C45Fu:
    if(m==0u&&x==1u&&e==0u){ /* C9 F1 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C45Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC462u;
      sc_v11_op_compare(r,c->a,0x00F1u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C462u:
    if(m==0u&&x==1u&&e==0u){ /* 90 09 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C462u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC464u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC46Du;}
      if(c->pc!=0xC464u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC464u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C46Du:
    if(m==0u&&x==1u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C46Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC470u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C470u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C470u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC473u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C473u:
    if(m==0u&&x==1u&&e==0u){ /* C9 18 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C473u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC476u;
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C476u:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C476u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC478u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC47Du;}
      if(c->pc!=0xC478u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC478u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C47Du:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C47Du,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC47Eu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C47Eu:
    if(m==0u&&x==1u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C47Eu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC480u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C480u:
    if(m==0u&&x==1u&&e==0u){ /* C9 C9 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C480u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC483u;
      sc_v11_op_compare(r,c->a,0x00C9u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C483u:
    if(m==0u&&x==1u&&e==0u){ /* 90 09 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C483u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC485u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC48Eu;}
      if(c->pc!=0xC485u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC485u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C48Eu:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C48Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC48Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C48Fu:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C48Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC490u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4C7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4C7u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4C9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4C9u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4C9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4CCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4CCu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4CCu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4CDu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4CDu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4CDu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4CFu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4D2u;}
      if(c->pc!=0xC4CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4D2u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4D2u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4D3u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4D3u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4D3u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4D5u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4D8u;}
      if(c->pc!=0xC4D5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4D5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4D8u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4D8u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4D9u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4D9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4D9u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4DBu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4DEu;}
      if(c->pc!=0xC4DBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4DBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4DEu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4DEu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4DFu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4DFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4DFu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4E1u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4E4u;}
      if(c->pc!=0xC4E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4E4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4E4u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4E5u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4E5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4E5u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4E7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4E7u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4E7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4EAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4EAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4EAu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4EBu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4EBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0D Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4EBu,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4EDu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4FAu;}
      if(c->pc!=0xC4EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4FAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4FAu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4FBu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C4FBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0D Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C4FBu,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4FDu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC50Au;}
      if(c->pc!=0xC4FDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4FDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C50Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C50Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC50Bu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C50Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0D Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C50Bu,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC50Du;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC51Au;}
      if(c->pc!=0xC50Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC50Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C51Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C51Au,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC51Bu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C51Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C51Bu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC51Du;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC528u;}
      if(c->pc!=0xC51Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC51Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C528u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C528u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC529u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C529u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C529u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC52Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C52Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C52Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC52Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C52Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 7F Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C52Eu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC530u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC5AFu;}
      if(c->pc!=0xC530u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC530u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C530u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C530u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC532u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C532u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C532u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC534u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C534u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C534u,3u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC537u;
      sc_v11_op_and(r,0x2000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C537u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C537u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC539u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC53Cu;}
      if(c->pc!=0xC539u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC539u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C53Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C53Cu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC53Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C53Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 40 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C53Fu,2u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC541u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC581u;}
      if(c->pc!=0xC541u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC541u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C541u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C541u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC544u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C544u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C544u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC546u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC54Bu;}
      if(c->pc!=0xC546u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC546u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C54Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C54Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC54Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C54Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C54Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC551u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C551u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C551u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC554u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C554u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F1 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C554u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC557u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F1u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C557u:
    if(m==0u&&x==0u&&e==0u){ /* A2 1A 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C557u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC55Au;
      sc_v11_op_ldx(r,0x001Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C55Au:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C55Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC55Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C55Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C55Du,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC55Eu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C55Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C55Eu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC560u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC563u;}
      if(c->pc!=0xC560u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC560u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C560u:
    if(m==0u&&x==0u&&e==0u){ /* A2 2A 00 Mesen corrected gameplay frame 4500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C560u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC563u;
      sc_v11_op_ldx(r,0x002Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C563u:
    if(m==0u&&x==0u&&e==0u){ /* 8E EB 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C563u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC566u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C566u:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C566u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC569u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C569u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C569u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC56Cu;
      sc_v11_op_and(r,0x00FEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C56Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C56Cu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC56Du;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C56Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C56Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC56Eu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C56Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C56Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC56Fu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C56Fu:
    if(m==0u&&x==0u&&e==0u){ /* 69 38 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C56Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC572u;
      sc_v11_op_adc(r,0x0038u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C572u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C572u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC575u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C575u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 02 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C575u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC578u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C578u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C578u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC579u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C579u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C579u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC57Du;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC57Cu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C57Fu:
    if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C57Fu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC580u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C580u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C580u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC581u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C581u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C581u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC584u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C584u:
    if(m==0u&&x==0u&&e==0u){ /* 30 29 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C584u,2u);r->open_bus=0x29u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC586u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC5AFu;}
      if(c->pc!=0xC586u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC586u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C586u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C586u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC587u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C587u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C587u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC58Bu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC58Au))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C58Du:
    if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C58Du,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC58Eu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C58Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C58Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC591u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C591u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 00 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C591u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC594u;
      sc_v11_op_and(r,0x00F8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C594u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C594u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC597u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C597u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C597u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC59Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C59Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 00 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C59Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC59Du;
      sc_v11_op_and(r,0x00F8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C59Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C59Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC5A0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C5A0u:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C5A0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC5A3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C5A3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3B 02 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C5A3u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC5A6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C5A6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C5A6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC5A9u;
      sc_v11_op_lda(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C5A9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 01 02 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C5A9u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC5ACu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C5ACu:
    if(m==0u&&x==0u&&e==0u){ /* 20 75 B3 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C5ACu,3u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC5AFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC5AEu))return 0;c->pc=0xB375u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C5AFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C5AFu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC5B0u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C616u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C616u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC618u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C618u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C618u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC61Bu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C61Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C61Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC61Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C61Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C61Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC621u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C621u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C621u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC623u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC641u;}
      if(c->pc!=0xC623u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC623u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C623u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C623u,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC625u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C625u:
    if(m==0u&&x==0u&&e==0u){ /* D0 19 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C625u,2u);r->open_bus=0x19u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC627u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC640u;}
      if(c->pc!=0xC627u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC627u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C627u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C627u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC62Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C62Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C62Au,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC62Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C62Du:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C62Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC630u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C630u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C630u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC633u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C633u:
    if(m==0u&&x==0u&&e==0u){ /* AD F9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C633u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC636u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F9u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C636u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C636u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC639u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C639u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C639u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC63Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C63Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C63Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC63Eu;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C63Eu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C63Eu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC640u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xC640u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C640u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C640u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC641u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C641u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C641u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC643u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C643u:
    if(m==1u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C643u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC646u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C646u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C646u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC647u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C647u:
    if(m==1u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C647u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC64Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C64Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C64Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC64Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C64Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 00 20 7E Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C64Cu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC650u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2000u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C650u:
    if(m==0u&&x==0u&&e==0u){ /* A9 EC 31 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C650u,3u);r->open_bus=0x31u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC653u;
      sc_v11_op_lda(r,0x31ECu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C653u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 02 20 7E Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C653u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC657u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2002u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C657u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C657u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC659u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C659u:
    if(m==1u&&x==0u&&e==0u){ /* A9 56 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C659u,2u);r->open_bus=0x56u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC65Bu;
      sc_v11_op_lda(r,0x0056u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C65Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 00 22 7E Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C65Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC65Fu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C65Fu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C65Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC660u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C660u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C660u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC662u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C660u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC662u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C662u:
    if(m==0u&&x==0u&&e==0u){ /* AD E5 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C662u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC665u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD E5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C662u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC665u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C665u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C665u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC667u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC668u;}
      if(c->pc!=0xC667u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC667u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C665u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC667u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC668u;}
      if(c->pc!=0xC667u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC667u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C667u:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C667u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC668u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C668u:
    if(m==0u&&x==0u&&e==0u){ /* 9C E5 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C668u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC66Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C66Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C66Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC66Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C66Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 2E Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C66Eu,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC670u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC69Eu;}
      if(c->pc!=0xC670u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC670u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C670u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C670u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC673u;
      sc_v11_op_lda(r,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C673u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C673u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC676u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C676u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C676u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC679u;
      sc_v11_op_lda(r,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C679u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C679u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC67Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C67Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 16 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C67Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC67Fu;
      sc_v11_op_lda(r,0x0016u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C67Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C67Fu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC682u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C682u:
    if(m==0u&&x==0u&&e==0u){ /* A9 06 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C682u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC685u;
      sc_v11_op_lda(r,0x0006u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C685u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C685u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC688u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C688u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C688u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC68Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C68Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C68Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC68Du;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C68Du:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C68Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC68Fu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xC68Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C68Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 07 C8 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C68Fu,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC692u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC691u))return 0;c->pc=0xC807u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C692u:
    if(m==1u&&x==1u&&e==0u){ /* 22 A9 84 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C692u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC696u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC695u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C696u:
    if(m==1u&&x==0u&&e==0u){ /* 22 2A 84 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C696u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC69Au;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC699u))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C69Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 25 8F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C69Au,3u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC69Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Cu))return 0;c->pc=0x8F25u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C69Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C69Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC69Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6C8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CC C6 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6C8u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6CBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC6CAu))return 0;c->pc=0xC6CCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6CBu:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6CBu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6CCu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6CCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6CCu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6CEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6CEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1D 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6CEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D1u;
      sc_v11_op_lda(r,0x001Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6D1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B1 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6D1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01B1u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6D4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6D4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D7u;
      sc_v11_op_lda(r,0x001Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6D7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D AF 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6D7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01AFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6DAu:
    if(m==0u&&x==0u&&e==0u){ /* AD B1 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6DAu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DDu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6DDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6DDu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6DFu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6DFu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E0u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6E0u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E2u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6E2u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E4u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E4u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6E4u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E6u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E6u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6E6u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E7u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6E7u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6E7u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6EBu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6EBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 20 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6EBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6EDu;
      sc_v11_op_lda(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6EDu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6EDu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F1u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F1u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6F1u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F2u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6F2u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F3u:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6F3u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F4u;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F4u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6F4u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F8u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F8u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6F8u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F9u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6F9u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6F9u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6FDu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6FDu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6FDu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6FEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C6FEu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C6FEu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC700u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C700u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C700u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC702u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C702u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C702u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC703u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C703u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C703u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC705u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C705u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C705u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC706u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C706u:
    if(m==0u&&x==0u&&e==0u){ /* 6D AF 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C706u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC709u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01AFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C709u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C709u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC70Au;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C70Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D BB 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C70Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC70Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C70Du:
    if(m==0u&&x==0u&&e==0u){ /* AD AF 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C70Du,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC710u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01AFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C710u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C710u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC711u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C711u:
    if(m==0u&&x==0u&&e==0u){ /* 6D BD 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C711u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC714u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C714u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C714u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC717u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C717u:
    if(m==0u&&x==0u&&e==0u){ /* AD B1 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C717u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC71Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C71Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C71Au,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC71Bu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C71Bu:
    if(m==0u&&x==0u&&e==0u){ /* 6D BF 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C71Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC71Eu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C71Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C71Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC721u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C721u:
    if(m==0u&&x==0u&&e==0u){ /* 20 72 C7 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C721u,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC724u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC723u))return 0;c->pc=0xC772u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C724u:
    if(m==0u&&x==0u&&e==0u){ /* AE BB 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C724u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC727u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C727u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3D 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C727u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC72Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C72Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C72Au,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC72Eu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C72Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 3F 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C72Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC731u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C731u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 30 7E Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C731u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC735u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3040u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C735u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C735u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC738u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C738u:
    if(m==0u&&x==0u&&e==0u){ /* 30 1F Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C738u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC73Au;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC759u;}
      if(c->pc!=0xC73Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC73Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C73Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C73Au,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC73Du;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C73Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 84 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C73Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC740u;
      sc_v11_op_compare(r,c->a,0x0084u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C740u:
    if(m==0u&&x==0u&&e==0u){ /* D0 17 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C740u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC742u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC759u;}
      if(c->pc!=0xC742u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC742u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C759u:
    if(m==0u&&x==0u&&e==0u){ /* CE AF 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C759u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC75Cu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01AFu),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C75Cu:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C75Cu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC75Eu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC761u;}
      if(c->pc!=0xC75Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC75Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C75Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C DA C6 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C75Eu,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC761u;
      c->pc=0xC6DAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C761u:
    if(m==0u&&x==0u&&e==0u){ /* CE B1 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C761u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC764u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01B1u),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C764u:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C764u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC766u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC769u;}
      if(c->pc!=0xC766u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC766u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C766u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D4 C6 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C766u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC769u;
      c->pc=0xC6D4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C769u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C769u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC76Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C76Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C76Bu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC76Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C76Du:
    if(m==1u&&x==0u&&e==0u){ /* 09 04 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C76Du,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC76Fu;
      sc_v11_op_ora(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C76Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C76Fu,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC771u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C771u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C771u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC772u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C772u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C772u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC774u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C774u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C774u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC776u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C776u:
    if(m==1u&&x==0u&&e==0u){ /* AD D3 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C776u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC779u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01D3u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C779u:
    if(m==1u&&x==0u&&e==0u){ /* 30 5A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C779u,2u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC77Bu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC7D5u;}
      if(c->pc!=0xC77Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC77Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C77Bu:
    if(m==1u&&x==0u&&e==0u){ /* C9 78 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C77Bu,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC77Du;
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C77Du:
    if(m==1u&&x==0u&&e==0u){ /* B0 56 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C77Du,2u);r->open_bus=0x56u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC77Fu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC7D5u;}
      if(c->pc!=0xC77Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC77Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C77Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD D5 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C77Fu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC782u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01D5u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C782u:
    if(m==1u&&x==0u&&e==0u){ /* 30 51 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C782u,2u);r->open_bus=0x51u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC784u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC7D5u;}
      if(c->pc!=0xC784u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC784u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C784u:
    if(m==1u&&x==0u&&e==0u){ /* C9 64 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C784u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC786u;
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C786u:
    if(m==1u&&x==0u&&e==0u){ /* B0 4D Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C786u,2u);r->open_bus=0x4Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC788u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC7D5u;}
      if(c->pc!=0xC788u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC788u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C788u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C788u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC789u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C789u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C789u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC78Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C78Bu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C78Bu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC78Du;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C78Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C78Du,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC78Fu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C78Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C78Fu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC790u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C790u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C790u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC794u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C794u:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C794u,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC796u;
      sc_v11_op_lda(r,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C796u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C796u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Au;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C79Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C79Au,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C79Bu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C79Bu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C79Cu:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C79Cu,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Du;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C79Du:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C79Du,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A1u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A1u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7A1u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A2u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A2u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7A2u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A6u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7A6u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A7u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7A7u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7A9u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7A9u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7ABu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7ABu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7ABu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7ACu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7ACu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7ACu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7AEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7AEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7AEu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7AFu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7AFu:
    if(m==0u&&x==0u&&e==0u){ /* 6D D3 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7AFu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B2u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D3u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7B2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7B2u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B3u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7B3u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7B3u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B4u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7B4u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7B4u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7B8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7B8u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7BBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7BBu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7BBu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7BEu;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7BEu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7BEu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7BFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7BFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F6 C7 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7BFu,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7C1u))return 0;c->pc=0xC7F6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7C2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7C2u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7C5u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7C5u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C6u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7C6u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7C6u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7C7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 ED C7 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7C7u,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7CAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7C9u))return 0;c->pc=0xC7EDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7CAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7CAu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7CDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7CDu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7CDu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7CEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7CEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FD C7 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7CEu,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7D0u))return 0;c->pc=0xC7FDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7D1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7D1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0141u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7D4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7D4u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D5u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7D5u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7D5u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7D7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3B 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7D7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7DAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7DAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 03 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7DAu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7DDu;
      sc_v11_op_lda(r,0x0300u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7DDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7DDu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7E0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 03 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7E0u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E3u;
      sc_v11_op_lda(r,0x0301u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7E3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7E3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x013Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7E6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 4B 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7E6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E9u;
      sc_v11_op_lda(r,0x014Bu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7E9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7E9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7ECu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0141u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7ECu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7ECu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7EDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7EDu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7EDu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7EEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7EEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7EEu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7EFu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7EFu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7EFu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F0u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F0u:
    if(m==0u&&x==0u&&e==0u){ /* BF 2D CF 02 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7F0u,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CF2Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F4u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7F4u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F5u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7F5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7F6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F7u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F7u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7F7u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F8u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7F8u:
    if(m==0u&&x==0u&&e==0u){ /* BF A9 D6 02 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7F8u,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02D6A9u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7FCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7FCu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7FDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7FDu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FEu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7FEu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7FEu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FFu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01C7FFu:
    if(m==0u&&x==0u&&e==0u){ /* BF 25 DE 02 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01C7FFu,4u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC803u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02DE25u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
