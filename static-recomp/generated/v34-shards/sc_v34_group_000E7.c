/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000E7(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x039C00u:
    if(m==0u&&x==0u&&e==0u){ /* C9 49 02 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C00u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C03u;
      sc_v11_op_compare(r,c->a,0x0249u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C03u:
    if(m==0u&&x==0u&&e==0u){ /* B0 08 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C03u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C05u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9C0Du;}
      if(c->pc!=0x9C05u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C05u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C0Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C0Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C10u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C10u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3581; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C10u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C11u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C11u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C11u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C13u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C11u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C13u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C13u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C13u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C14u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C14u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C14u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C15u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C15u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C15u,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C16u;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C16u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C16u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C17u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C17u:
    if(m==0u&&x==0u&&e==0u){ /* E9 24 00 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C17u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C1Au;
      sc_v11_op_sbc(r,0x0024u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C1Au:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C1Au,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C1Bu;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C1Bu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C1Bu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C1Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C1Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C1Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C1Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C1Eu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C1Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C21u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C21u:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C21u,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C22u;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C22u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 70 CD 7F Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C22u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C26u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FCD70u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C26u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C26u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C27u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C27u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C27u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C28u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C28u:
    if(m==0u&&x==0u&&e==0u){ /* E0 EE 02 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C28u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C2Bu;
      sc_v11_op_compare(r,c->x,0x02EEu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C2Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F5 Mesen corrected gameplay frame 2703; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C2Bu,2u);r->open_bus=0xF5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C2Du;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9C22u;}
      if(c->pc!=0x9C2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C2Du:
    if(m==0u&&x==0u&&e==0u){ /* 64 04 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C2Du,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C2Fu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C2Fu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C31u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C31u:
    if(m==0u&&x==0u&&e==0u){ /* 64 18 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C31u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C33u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x18u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C33u:
    if(m==0u&&x==0u&&e==0u){ /* 64 1A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C33u,2u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C35u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C35u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C35u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C37u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C37u:
    if(m==1u&&x==0u&&e==0u){ /* 64 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C37u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C39u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C39u:
    if(m==1u&&x==0u&&e==0u){ /* 64 08 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C39u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C3Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C3Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 DF 9C Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C3Bu,3u);r->open_bus=0x9Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C3Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9C3Du))return 0;c->pc=0x9CDFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C3Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C3Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C40u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C3Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C40u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C40u:
    if(m==1u&&x==0u&&e==0u){ /* E6 08 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C40u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C42u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C42u:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C42u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C44u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C44u:
    if(m==1u&&x==0u&&e==0u){ /* C9 3C Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C44u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C46u;
      sc_v11_op_compare(r,c->a,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C46u:
    if(m==1u&&x==0u&&e==0u){ /* D0 F3 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C46u,2u);r->open_bus=0xF3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C48u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9C3Bu;}
      if(c->pc!=0x9C48u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C48u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C48u:
    if(m==1u&&x==0u&&e==0u){ /* E6 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C48u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C4Au;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0Au),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C4Au:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C4Au,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C4Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C4Cu:
    if(m==1u&&x==0u&&e==0u){ /* C9 32 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C4Cu,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C4Eu;
      sc_v11_op_compare(r,c->a,0x0032u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C4Eu:
    if(m==1u&&x==0u&&e==0u){ /* D0 E9 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C4Eu,2u);r->open_bus=0xE9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C50u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9C39u;}
      if(c->pc!=0x9C50u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C50u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C50u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C50u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C52u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C52u:
    if(m==0u&&x==0u&&e==0u){ /* A5 18 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C52u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C54u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x18u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C54u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C54u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C56u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9C5Eu;}
      if(c->pc!=0x9C56u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C56u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C56u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 Mesen corrected gameplay frame 4084; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C56u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C59u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9C58u))return 0;c->pc=0xA421u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C5Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 20 Mesen corrected gameplay frame 4084; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C5Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C5Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x20u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 03 0C Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C5Eu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C61u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C03u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C61u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2F A0 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C61u,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C64u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9C63u))return 0;c->pc=0xA02Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C64u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B5 A0 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C64u,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C67u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9C66u))return 0;c->pc=0xA0B5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C67u:
    if(m==0u&&x==0u&&e==0u){ /* 64 1C Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C67u,2u);r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C69u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C69u:
    if(m==0u&&x==0u&&e==0u){ /* 64 14 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C69u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C6Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 16 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C6Bu,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C6Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x16u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C6Du:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C6Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C6Fu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C6Fu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C71u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C71u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C71u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C73u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C73u:
    if(m==0u&&x==0u&&e==0u){ /* 64 0A Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C73u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C75u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C75u:
    if(m==0u&&x==0u&&e==0u){ /* 64 08 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C75u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C77u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C77u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C77u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C79u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C79u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C79u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C7Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C7Bu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C7Bu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C7Cu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C7Cu:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C7Cu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C7Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C7Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C7Eu,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C81u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9C80u))return 0;c->pc=0xA29Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C81u:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 B6 7F Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C81u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C85u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FB600u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C85u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 70 82 7F Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C85u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C89u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F8270u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C89u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0C Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C89u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C8Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C8Bu:
    if(m==1u&&x==0u&&e==0u){ /* F0 23 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C8Bu,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C8Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9CB0u;}
      if(c->pc!=0x9C8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C8Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C8Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C8Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C8Fu:
    if(m==0u&&x==0u&&e==0u){ /* E6 14 Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C8Fu,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C91u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C91u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C91u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C93u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C93u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C93u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C94u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C94u:
    if(m==0u&&x==0u&&e==0u){ /* 65 0C Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C94u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C96u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C96u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C96u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C98u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C98u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C98u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C9Au;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9C9Cu;}
      if(c->pc!=0x9C9Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C9Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C9Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C9Cu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9C9Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039C9Eu:
    if(m==0u&&x==0u&&e==0u){ /* C5 1C Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039C9Eu,2u);r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CA0u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CA0u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0E Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CA0u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CA2u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9CB0u;}
      if(c->pc!=0x9CA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9CA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CA2u:
    if(m==0u&&x==0u&&e==0u){ /* 85 1C Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CA2u,2u);r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CA4u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CA4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CA4u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CA6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CA6u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CA6u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CA7u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CA7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 09 0C Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CA7u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CAAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C09u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CAAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CAAu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CACu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CACu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CACu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CADu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CADu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0B 0C Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CADu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CB0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C0Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CB0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4130; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CB0u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CB2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CB0u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CB2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CB2u:
    if(m==0u&&x==0u&&e==0u){ /* E6 08 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CB2u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CB4u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CB4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CB4u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CB6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CB6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CB6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CB9u;
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CB9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 BC Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CB9u,2u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CBBu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9C77u;}
      if(c->pc!=0x9CBBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9CBBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CBBu:
    if(m==0u&&x==0u&&e==0u){ /* E6 0A Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CBBu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CBDu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0Au),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CBDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CBDu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CBFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CBFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 32 00 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CBFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CC2u;
      sc_v11_op_compare(r,c->a,0x0032u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CC2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 B1 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CC2u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CC4u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9C75u;}
      if(c->pc!=0x9CC4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9CC4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CC4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 14 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CC4u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CC6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x14u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CC6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CC6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CC8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9CD0u;}
      if(c->pc!=0x9CC8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9CC8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CC8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 Mesen corrected gameplay frame 4139; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CC8u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CCBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9CCAu))return 0;c->pc=0xA421u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CCEu:
    if(m==0u&&x==0u&&e==0u){ /* A5 20 Mesen corrected gameplay frame 4139; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CCEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CD0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x20u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CD0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 07 0C Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CD0u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CD3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C07u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CD3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 9F Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CD3u,3u);r->open_bus=0x9Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CD6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9CD5u))return 0;c->pc=0x9FA6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CD6u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CD6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CD8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CD8u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CD8u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CDAu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CDAu:
    if(m==1u&&x==0u&&e==0u){ /* 8D E0 0C Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CDAu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CDDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0CE0u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CDDu:
    if(m==1u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CDDu,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CDEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CDEu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CDEu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CDFu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CDFu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CDFu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CE1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CE1u:
    if(m==0u&&x==0u&&e==0u){ /* 64 22 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CE1u,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CE3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x22u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CE3u:
    if(m==0u&&x==0u&&e==0u){ /* 64 0E Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CE3u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CE5u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CE5u:
    if(m==0u&&x==0u&&e==0u){ /* 64 10 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CE5u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CE7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x10u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CE7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CE7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CE9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CE9u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CE9u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CEBu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CEBu:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CEBu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CECu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CECu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CECu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CEDu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CEDu:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CEDu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CEFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CEFu:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CEFu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CF0u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CF0u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9E 84 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CF0u,3u);r->open_bus=0x84u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CF3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9CF2u))return 0;c->pc=0x849Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CF3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CA 9D Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CF3u,3u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CF6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9CF5u))return 0;c->pc=0x9DCAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CF6u:
    if(m==0u&&x==0u&&e==0u){ /* BF 02 02 7F Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CF6u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CFAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0202u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CFAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CA 9D Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CFAu,3u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9CFDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9CFCu))return 0;c->pc=0x9DCAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039CFDu:
    if(m==0u&&x==0u&&e==0u){ /* BF F0 02 7F Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039CFDu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D01u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F02F0u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D01u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CA 9D Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D01u,3u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D04u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9D03u))return 0;c->pc=0x9DCAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D04u:
    if(m==0u&&x==0u&&e==0u){ /* BF F2 02 7F Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D04u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D08u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F02F2u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D08u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CA 9D Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D08u,3u);r->open_bus=0x9Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D0Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9D0Au))return 0;c->pc=0x9DCAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D0Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 22 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D0Bu,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D0Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x22u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D0Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D0Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D10u;
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D10u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D10u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D12u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9D15u;}
      if(c->pc!=0x9D12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9D12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D15u:
    if(m==0u&&x==0u&&e==0u){ /* 85 22 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D15u,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D17u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x22u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D17u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D17u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D19u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D19u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D19u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D1Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D1Bu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D1Bu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D1Cu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D1Cu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D1Cu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D1Du;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D1Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D1Du,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D1Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D1Fu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D1Fu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D20u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D20u:
    if(m==1u&&x==0u&&e==0u){ /* 20 B9 A2 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D20u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D23u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9D22u))return 0;c->pc=0xA2B9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D23u:
    if(m==1u&&x==0u&&e==0u){ /* BF 70 CD 7F Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D23u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D27u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FCD70u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D27u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D27u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D28u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D28u:
    if(m==1u&&x==0u&&e==0u){ /* 65 22 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D28u,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D2Au;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x22u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D2Au:
    if(m==1u&&x==0u&&e==0u){ /* 9F 70 CD 7F Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D2Au,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D2Eu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FCD70u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D2Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D2Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D30u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D30u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0E Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D30u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D32u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D32u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FA 00 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D32u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D35u;
      sc_v11_op_compare(r,c->a,0x00FAu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D35u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D35u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D37u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9D3Au;}
      if(c->pc!=0x9D37u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9D37u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D3Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 0E Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D3Au,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D3Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D3Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D3Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D3Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D3Eu:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D3Eu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D40u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D40u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D40u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D41u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D41u:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D41u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D43u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D43u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D43u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D46u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9D45u))return 0;c->pc=0xA29Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D46u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0E Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D46u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D48u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D48u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 B6 7F Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D48u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D4Cu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FB600u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D4Cu:
    if(m==1u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D4Cu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D4Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D4Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 10 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D4Du,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D4Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D4Fu:
    if(m==1u&&x==0u&&e==0u){ /* F0 71 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D4Fu,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D51u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9DC2u;}
      if(c->pc!=0x9D51u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9D51u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D51u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D51u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D53u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D53u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D53u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D54u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D54u:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D54u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D56u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D56u:
    if(m==1u&&x==0u&&e==0u){ /* 20 61 9E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D56u,3u);r->open_bus=0x9Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D59u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9D58u))return 0;c->pc=0x9E61u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D59u:
    if(m==1u&&x==0u&&e==0u){ /* 85 1E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D59u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D5Bu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x1Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D5Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 22 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D5Bu,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D5Du;
      sc_v11_op_lda(r,0x0022u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D5Du:
    if(m==1u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D5Du,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D5Eu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D5Eu:
    if(m==1u&&x==0u&&e==0u){ /* E5 1E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D5Eu,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D60u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D60u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D60u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D61u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D61u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D61u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D62u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D62u:
    if(m==1u&&x==0u&&e==0u){ /* 85 1E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D62u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D64u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x1Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D64u:
    if(m==1u&&x==0u&&e==0u){ /* 64 1F Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D64u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D66u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x1Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D66u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D66u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D68u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D68u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D68u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D69u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D69u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D69u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D6Au;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D6Au:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D6Au,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D6Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D6Cu:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D6Cu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D6Du;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D6Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 B9 A2 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D6Du,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D70u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9D6Fu))return 0;c->pc=0xA2B9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D70u:
    if(m==1u&&x==0u&&e==0u){ /* A5 1E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D70u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D72u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D72u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D72u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D73u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D73u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 74 AB 7F Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D73u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D77u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FAB74u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D77u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D77u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D79u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9D7Bu;}
      if(c->pc!=0x9D79u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9D79u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D7Bu:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D7Bu,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D7Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D7Cu:
    if(m==1u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D7Cu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D7Du;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D7Du:
    if(m==1u&&x==0u&&e==0u){ /* FF 70 82 7F Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D7Du,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D81u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F8270u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D81u:
    if(m==1u&&x==0u&&e==0u){ /* 85 1E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D81u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D83u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x1Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D83u:
    if(m==1u&&x==0u&&e==0u){ /* B0 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D83u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D85u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9D87u;}
      if(c->pc!=0x9D85u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9D85u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D85u:
    if(m==1u&&x==0u&&e==0u){ /* C6 1F Mesen corrected gameplay frame 4993; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D85u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D87u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x1Fu),8u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D87u:
    if(m==1u&&x==0u&&e==0u){ /* BF B8 76 7F Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D87u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D8Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F76B8u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D8Bu:
    if(m==1u&&x==0u&&e==0u){ /* C9 BE Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D8Bu,2u);r->open_bus=0xBEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D8Du;
      sc_v11_op_compare(r,c->a,0x00BEu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D8Du:
    if(m==1u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D8Du,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D8Fu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9D9Au;}
      if(c->pc!=0x9D8Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9D8Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D9Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D9Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D9Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D9Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 1E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D9Cu,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9D9Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039D9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 10 05 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039D9Eu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DA0u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9DA5u;}
      if(c->pc!=0x9DA0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DA0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DA0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 4993; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DA0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DA3u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DA3u:
    if(m==0u&&x==0u&&e==0u){ /* 80 08 Mesen corrected gameplay frame 4993; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DA3u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DA5u;
      if(1){c->pc=0x9DADu;}
      if(c->pc!=0x9DA5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DA5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DA5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FA 00 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DA5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DA8u;
      sc_v11_op_compare(r,c->a,0x00FAu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DA8u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DA8u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DAAu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9DADu;}
      if(c->pc!=0x9DAAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DAAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DADu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DAFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DAFu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 6B 7F Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DAFu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DB3u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F6B00u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DB3u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DB3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DB5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DB5u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DB5u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DB6u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DB6u:
    if(m==0u&&x==0u&&e==0u){ /* 65 04 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DB6u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DB8u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DB8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DB8u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DBAu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DBAu:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DBAu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DBCu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9DBEu;}
      if(c->pc!=0x9DBCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DBCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DBEu:
    if(m==0u&&x==0u&&e==0u){ /* E6 18 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DBEu,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DC0u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x18u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DC0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 07 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DC0u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DC2u;
      if(1){c->pc=0x9DC9u;}
      if(c->pc!=0x9DC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DC2u:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DC2u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DC3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DC3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DC3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DC5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DC5u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 6B 7F Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DC5u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DC9u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F6B00u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DC9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DC9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DCAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DC9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DCAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DCAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DCAu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DCCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DCCu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DCCu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DCFu;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DCFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 3A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DCFu,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DD1u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9E0Bu;}
      if(c->pc!=0x9DD1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DD1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DD1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 28 00 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DD1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DD4u;
      sc_v11_op_compare(r,c->a,0x0028u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DD4u:
    if(m==0u&&x==0u&&e==0u){ /* B0 09 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DD4u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DD6u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9DDFu;}
      if(c->pc!=0x9DD6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DD6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DD6u:
    if(m==0u&&x==0u&&e==0u){ /* A5 22 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DD6u,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DD8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x22u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DD8u:
    if(m==0u&&x==0u&&e==0u){ /* 69 0F 00 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DD8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DDBu;
      sc_v11_op_adc(r,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DDBu:
    if(m==0u&&x==0u&&e==0u){ /* 85 22 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DDBu,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DDDu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x22u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DDDu:
    if(m==0u&&x==0u&&e==0u){ /* 80 2C Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DDDu,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DDFu;
      if(1){c->pc=0x9E0Bu;}
      if(c->pc!=0x9DDFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DDFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DDFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 BF 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DDFu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DE2u;
      sc_v11_op_compare(r,c->a,0x02BFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DE2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 16 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DE2u,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DE4u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9DFAu;}
      if(c->pc!=0x9DE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DE4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DFAu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DFAu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DFBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DFBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 0C 9E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DFBu,3u);r->open_bus=0x9Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DFEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9DFDu))return 0;c->pc=0x9E0Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DFEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DFEu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9DFFu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039DFFu:
    if(m==0u&&x==0u&&e==0u){ /* 65 0E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039DFFu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E01u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E01u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0E Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E01u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E03u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E03u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E03u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E04u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E04u:
    if(m==0u&&x==0u&&e==0u){ /* C9 30 00 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E04u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E07u;
      sc_v11_op_compare(r,c->a,0x0030u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E07u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E07u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E09u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9E0Bu;}
      if(c->pc!=0x9E09u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E09u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E09u:
    if(m==0u&&x==0u&&e==0u){ /* E6 10 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E09u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E0Bu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x10u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E0Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E0Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E0Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E0Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E0Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E0Eu:
    if(m==0u&&x==0u&&e==0u){ /* A0 3C 00 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E0Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E11u;
      sc_v11_op_ldy(r,0x003Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E11u:
    if(m==0u&&x==0u&&e==0u){ /* C9 7F 00 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E11u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E14u;
      sc_v11_op_compare(r,c->a,0x007Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E14u:
    if(m==0u&&x==0u&&e==0u){ /* F0 49 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E14u,2u);r->open_bus=0x49u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E16u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9E5Fu;}
      if(c->pc!=0x9E16u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E16u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E16u:
    if(m==0u&&x==0u&&e==0u){ /* A0 D8 FF Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E16u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E19u;
      sc_v11_op_ldy(r,0xFFD8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E19u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 03 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E19u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E1Cu;
      sc_v11_op_compare(r,c->a,0x0364u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E1Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 41 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E1Cu,2u);r->open_bus=0x41u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E1Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9E5Fu;}
      if(c->pc!=0x9E1Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E1Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E1Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 60 00 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E1Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E21u;
      sc_v11_op_compare(r,c->a,0x0060u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E21u:
    if(m==0u&&x==0u&&e==0u){ /* B0 12 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E21u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E23u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9E35u;}
      if(c->pc!=0x9E23u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E23u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E35u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E35u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E38u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E38u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FD 01 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E38u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E3Bu;
      sc_v11_op_compare(r,c->a,0x01FDu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 22 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E3Bu,2u);r->open_bus=0x22u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E3Du;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9E5Fu;}
      if(c->pc!=0x9E3Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E3Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E3Du:
    if(m==0u&&x==0u&&e==0u){ /* A0 32 00 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E3Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E40u;
      sc_v11_op_ldy(r,0x0032u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E40u:
    if(m==0u&&x==0u&&e==0u){ /* C9 45 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E40u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E43u;
      sc_v11_op_compare(r,c->a,0x0245u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E43u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1A Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E43u,2u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E45u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9E5Fu;}
      if(c->pc!=0x9E45u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E45u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E45u:
    if(m==0u&&x==0u&&e==0u){ /* A0 3C 00 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E45u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E48u;
      sc_v11_op_ldy(r,0x003Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E48u:
    if(m==0u&&x==0u&&e==0u){ /* C9 67 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E48u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E4Bu;
      sc_v11_op_compare(r,c->a,0x0267u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0F Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E4Bu,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E4Du;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9E5Cu;}
      if(c->pc!=0x9E4Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E4Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E4Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 77 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E4Du,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E50u;
      sc_v11_op_compare(r,c->a,0x0277u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E50u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0D Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E50u,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E52u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9E5Fu;}
      if(c->pc!=0x9E52u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E52u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E52u:
    if(m==0u&&x==0u&&e==0u){ /* C9 87 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E52u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E55u;
      sc_v11_op_compare(r,c->a,0x0287u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E55u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E55u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E57u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9E5Cu;}
      if(c->pc!=0x9E57u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E57u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E57u:
    if(m==0u&&x==0u&&e==0u){ /* C9 BA 02 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E57u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E5Au;
      sc_v11_op_compare(r,c->a,0x02BAu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E5Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E5Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E5Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9E5Fu;}
      if(c->pc!=0x9E5Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E5Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E5Fu:
    if(m==0u&&x==0u&&e==0u){ /* 98 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E5Fu,1u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E60u;
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E60u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4030; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E60u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E61u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E61u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E61u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E63u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E63u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E63u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E64u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E64u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E64u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E65u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E65u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E65u,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E66u;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E66u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E66u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E67u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E67u:
    if(m==0u&&x==0u&&e==0u){ /* E9 01 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E67u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E6Au;
      sc_v11_op_sbc(r,0x0001u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E6Au:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E6Au,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E6Bu;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E6Bu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E6Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E6Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E6Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E6Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E6Eu:
    if(m==1u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E6Eu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E6Fu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E6Fu:
    if(m==1u&&x==0u&&e==0u){ /* ED AB 0B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E6Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E72u;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BABu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E72u:
    if(m==1u&&x==0u&&e==0u){ /* B0 03 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E72u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E74u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9E77u;}
      if(c->pc!=0x9E74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E74u:
    if(m==1u&&x==0u&&e==0u){ /* 49 FF Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E74u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E76u;
      sc_v11_op_eor(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E76u:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E76u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E77u;
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E77u:
    if(m==1u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E77u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E79u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E79u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E79u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E7Au;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E7Au:
    if(m==1u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E7Au,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E7Bu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E7Bu:
    if(m==1u&&x==0u&&e==0u){ /* ED AC 0B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E7Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E7Eu;
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BACu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E7Eu:
    if(m==1u&&x==0u&&e==0u){ /* B0 03 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E7Eu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E80u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9E83u;}
      if(c->pc!=0x9E80u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E80u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E80u:
    if(m==1u&&x==0u&&e==0u){ /* 49 FF Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E80u,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E82u;
      sc_v11_op_eor(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E82u:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E82u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E83u;
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E83u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E83u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E84u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E84u:
    if(m==1u&&x==0u&&e==0u){ /* 65 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E84u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E86u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E86u:
    if(m==1u&&x==0u&&e==0u){ /* C9 20 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E86u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E88u;
      sc_v11_op_compare(r,c->a,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E88u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E88u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E8Au;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9E8Cu;}
      if(c->pc!=0x9E8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E8Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 20 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E8Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E8Cu;
      sc_v11_op_lda(r,0x0020u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E8Cu:
    if(m==1u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E8Cu,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E8Du;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E8Du:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E8Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E8Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E8Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E8Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E90u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E90u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E90u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E91u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E91u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E91u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E92u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E92u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E92u,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E93u;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E93u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E93u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E94u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E94u:
    if(m==0u&&x==0u&&e==0u){ /* E9 14 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E94u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E97u;
      sc_v11_op_sbc(r,0x0014u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E97u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E97u,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E98u;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E98u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E98u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E99u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E99u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CC A1 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E99u,3u);r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E9Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9E9Bu))return 0;c->pc=0xA1CCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CC A1 Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E9Cu,3u);r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9E9Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9E9Eu))return 0;c->pc=0xA1CCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039E9Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CC A1 Mesen corrected gameplay frame 2812; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039E9Fu,3u);r->open_bus=0xA1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EA2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9EA1u))return 0;c->pc=0xA1CCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EA2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EA2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EA4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EA4u:
    if(m==0u&&x==0u&&e==0u){ /* 64 04 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EA4u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EA6u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EA6u:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EA6u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EA8u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EA8u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EA8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EAAu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EAAu:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EAAu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EACu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EACu:
    if(m==0u&&x==0u&&e==0u){ /* 64 0A Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EACu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EAEu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EAEu:
    if(m==0u&&x==0u&&e==0u){ /* 64 08 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EAEu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EB0u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EB0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EB0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EB2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EB2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EB2u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EB4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EB4u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EB4u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EB5u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EB5u:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EB5u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EB7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EB7u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EB7u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EBAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9EB9u))return 0;c->pc=0xA29Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EBAu:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 6B 7F Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EBAu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EBEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F6B00u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EBEu:
    if(m==1u&&x==0u&&e==0u){ /* F0 7F Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EBEu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EC0u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9F3Fu;}
      if(c->pc!=0x9EC0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9EC0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EC0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EC0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EC2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EC2u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EC2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EC5u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EC5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EC5u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EC7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EC7u:
    if(m==0u&&x==0u&&e==0u){ /* E6 00 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EC7u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EC9u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EC9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 00 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EC9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ECCu;
      sc_v11_op_lda(r,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ECCu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ECCu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ECDu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ECDu:
    if(m==0u&&x==0u&&e==0u){ /* E5 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ECDu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ECFu;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ECFu:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ECFu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ED1u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9ED4u;}
      if(c->pc!=0x9ED1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9ED1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ED1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ED1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ED4u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ED4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ED4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ED6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ED6u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ED6u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9ED7u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039ED7u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 28 8E 7F Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039ED7u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EDBu;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F8E28u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EDBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EDBu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EDDu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EDDu:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EDDu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EDFu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9EE1u;}
      if(c->pc!=0x9EDFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9EDFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EE1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EE1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EE3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EE3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EE3u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EE5u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EE5u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EE5u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EE6u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EE6u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 71 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EE6u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EE9u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C71u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EE9u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EE9u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EEBu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EEBu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EEBu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EEDu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EEDu:
    if(m==0u&&x==0u&&e==0u){ /* 30 0A Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EEDu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EEFu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x9EF9u;}
      if(c->pc!=0x9EEFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9EEFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EEFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 2C 01 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EEFu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EF2u;
      sc_v11_op_compare(r,c->a,0x012Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EF2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EF2u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9EF4u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9EFEu;}
      if(c->pc!=0x9EF4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9EF4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039EFEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039EFEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F00u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F00u:
    if(m==1u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F00u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F01u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F01u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F01u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F03u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F03u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F03u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F04u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F04u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F04u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F05u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F05u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F05u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F06u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F06u:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F06u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F08u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F08u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F08u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F09u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F09u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F09u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F0Au;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F0Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 D7 A2 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F0Au,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F0Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9F0Cu))return 0;c->pc=0xA2D7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F0Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F0Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F0Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F0Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F10u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F10u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F10u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F11u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F11u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F11u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F13u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F13u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F13u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F14u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F14u:
    if(m==0u&&x==0u&&e==0u){ /* FF F4 B2 7F Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F14u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F18u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB2F4u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F18u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F18u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F1Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F1Au:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F1Au,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F1Cu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9F21u;}
      if(c->pc!=0x9F1Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F1Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F21u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F21u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F23u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F23u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FA 00 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F23u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F26u;
      sc_v11_op_compare(r,c->a,0x00FAu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F26u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F26u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F28u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9F2Bu;}
      if(c->pc!=0x9F28u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F28u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F2Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F2Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F2Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F2Du:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F2Du,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F2Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F2Eu:
    if(m==1u&&x==0u&&e==0u){ /* 9F B8 76 7F Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F2Eu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F32u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F76B8u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F32u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F32u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F34u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F34u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F34u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F35u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F35u:
    if(m==0u&&x==0u&&e==0u){ /* 65 04 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F35u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F37u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F37u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F37u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F39u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F39u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0C Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F39u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F3Bu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9F47u;}
      if(c->pc!=0x9F3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F3Fu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F3Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F41u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F41u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F41u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F43u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F43u:
    if(m==1u&&x==0u&&e==0u){ /* 9F B8 76 7F Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F43u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F47u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F76B8u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F47u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4287; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F47u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F49u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F47u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F49u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F49u:
    if(m==0u&&x==0u&&e==0u){ /* E6 08 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F49u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F4Bu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F4Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F4Bu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F4Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F4Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F4Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F50u;
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F50u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F50u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F52u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9F55u;}
      if(c->pc!=0x9F52u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F52u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F52u:
    if(m==0u&&x==0u&&e==0u){ /* 4C B0 9E Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F52u,3u);r->open_bus=0x9Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F55u;
      c->pc=0x9EB0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F55u:
    if(m==0u&&x==0u&&e==0u){ /* E6 0A Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F55u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F57u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x0Au),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F57u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0A Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F57u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F59u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F59u:
    if(m==0u&&x==0u&&e==0u){ /* C9 32 00 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F59u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F5Cu;
      sc_v11_op_compare(r,c->a,0x0032u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F5Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F5Cu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F5Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9F61u;}
      if(c->pc!=0x9F5Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F5Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C AE 9E Mesen corrected gameplay frame 2814; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F5Eu,3u);r->open_bus=0x9Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F61u;
      c->pc=0x9EAEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F61u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F61u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F63u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F63u:
    if(m==1u&&x==0u&&e==0u){ /* A4 00 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F63u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F65u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F65u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0D Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F65u,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F67u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9F74u;}
      if(c->pc!=0x9F67u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F67u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F67u:
    if(m==1u&&x==0u&&e==0u){ /* 20 21 A4 Mesen corrected gameplay frame 4298; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F67u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F6Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9F69u))return 0;c->pc=0xA421u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F6Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 0E Mesen corrected gameplay frame 4298; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F6Du,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F6Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 01 0C Mesen corrected gameplay frame 4298; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F6Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F72u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C01u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F72u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 Mesen corrected gameplay frame 4298; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F72u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F74u;
      if(1){c->pc=0x9F77u;}
      if(c->pc!=0x9F74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F74u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 01 0C Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F74u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F77u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0C01u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F77u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 4298; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F77u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F7Au;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F77u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F7Au;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F7Au:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 4298; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F7Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F7Du;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F7Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F7Du;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F7Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4298; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F7Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F7Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F7Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F7Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F7Fu:
    if(m==0u&&x==0u&&e==0u){ /* BF F4 B2 7F Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F7Fu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F83u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB2F4u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F83u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 01 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F83u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F86u;
      sc_v11_op_compare(r,c->a,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F86u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F86u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F88u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9F8Bu;}
      if(c->pc!=0x9F88u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F88u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F8Bu:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F8Bu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F8Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F8Cu:
    if(m==0u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F8Cu,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F8Du;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F8Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F8Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F8Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F8Fu:
    if(m==1u&&x==0u&&e==0u){ /* 9F E8 AF 7F Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F8Fu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F93u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FAFE8u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F93u:
    if(m==1u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F93u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F94u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F94u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F94u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F95u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F95u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F95u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F96u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F96u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F96u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F97u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F97u:
    if(m==1u&&x==0u&&e==0u){ /* C0 C3 00 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F97u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F9Au;
      sc_v11_op_compare(r,c->y,0x00C3u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F9Au:
    if(m==1u&&x==0u&&e==0u){ /* D0 E1 Mesen corrected gameplay frame 2824; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F9Au,2u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F9Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9F7Du;}
      if(c->pc!=0x9F9Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F9Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F9Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F9Cu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9F9Eu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039F9Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D DF 0C Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039F9Eu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FA1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0CDFu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FA1u:
    if(m==1u&&x==0u&&e==0u){ /* 8D DD 0C Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FA1u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FA4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0CDDu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FA4u:
    if(m==1u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FA4u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FA5u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FA5u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FA5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FA6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FA6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FA6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FA8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FA8u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FA8u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FA9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FA9u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FA9u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FAAu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FAAu:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FAAu,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FABu;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FABu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FABu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FACu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FACu:
    if(m==0u&&x==0u&&e==0u){ /* E9 06 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FACu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FAFu;
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FAFu:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FAFu,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FB0u;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FB0u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FB0u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FB1u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FB1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FB1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FB3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FB3u:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FB3u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FB5u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FB5u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FB5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FB7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FB5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FB7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FB7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FB7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FB9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FB7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FB9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FB9u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FB9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FBBu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FBBu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FBBu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FBCu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FBCu:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FBCu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FBEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FBEu:
    if(m==1u&&x==0u&&e==0u){ /* 20 B9 A2 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FBEu,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FC1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9FC0u))return 0;c->pc=0xA2B9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FC1u:
    if(m==1u&&x==0u&&e==0u){ /* 64 05 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FC1u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FC3u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FC3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FC3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FC5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FC5u:
    if(m==1u&&x==0u&&e==0u){ /* A4 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FC5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FC7u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FC7u:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FC7u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FC9u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9FD2u;}
      if(c->pc!=0x9FC9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FC9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FC9u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FC9u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FCAu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FCAu:
    if(m==1u&&x==0u&&e==0u){ /* 7F 6F CD 7F Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FCAu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FCEu;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FCD6Fu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FCEu:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FCEu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FD0u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9FD2u;}
      if(c->pc!=0x9FD0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FD0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FD2u:
    if(m==1u&&x==0u&&e==0u){ /* C0 1D 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FD2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FD5u;
      sc_v11_op_compare(r,c->y,0x001Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FD5u:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FD5u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FD7u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9FE0u;}
      if(c->pc!=0x9FD7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FD7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FD7u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FD7u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FD8u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FD8u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 71 CD 7F Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FD8u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FDCu;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FCD71u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FDCu:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FDCu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FDEu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9FE0u;}
      if(c->pc!=0x9FDEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FDEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FDEu:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FDEu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FE0u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FE0u:
    if(m==1u&&x==0u&&e==0u){ /* A4 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FE0u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FE2u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FE2u:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FE2u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FE4u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9FEDu;}
      if(c->pc!=0x9FE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FE4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FE4u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FE4u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FE5u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FE5u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 52 CD 7F Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FE5u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FE9u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FCD52u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FE9u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FE9u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FEBu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9FEDu;}
      if(c->pc!=0x9FEBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FEBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FEBu:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FEBu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FEDu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FEDu:
    if(m==1u&&x==0u&&e==0u){ /* C0 18 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FEDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FF0u;
      sc_v11_op_compare(r,c->y,0x0018u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FF0u:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FF0u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FF2u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9FFBu;}
      if(c->pc!=0x9FF2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FF2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FF2u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FF2u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FF3u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FF3u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 8E CD 7F Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FF3u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FF7u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FCD8Eu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FF7u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FF7u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FF9u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9FFBu;}
      if(c->pc!=0x9FF9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FF9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FF9u:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FF9u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FFBu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FFBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FFBu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FFDu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FFDu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FFDu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9FFFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x039FFFu:
    if(m==0u&&x==0u&&e==0u){ /* 46 04 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x039FFFu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xA001u;
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x04u),16u,1u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
