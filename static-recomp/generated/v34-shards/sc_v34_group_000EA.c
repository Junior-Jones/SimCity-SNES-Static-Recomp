/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000EA(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03AA9Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AA9Fu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAA1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAA1u:
    if(m==0u&&x==0u&&e==0u){ /* EE 1F 0E Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAA1u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAA4u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0E1Fu),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAA4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAA4u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAA7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAA7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 8C 02 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAA7u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAAAu;
      sc_v11_op_compare(r,c->a,0x028Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAAAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0D Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAAAu,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAACu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAAB9u;}
      if(c->pc!=0xAAACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAAACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAACu:
    if(m==0u&&x==0u&&e==0u){ /* EE 0D 0E Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAACu,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAAFu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0E0Du),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAAFu:
    if(m==0u&&x==0u&&e==0u){ /* A0 04 00 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAAFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAB2u;
      sc_v11_op_ldy(r,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAB2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A1 AE Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAB2u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAB5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAAB4u))return 0;c->pc=0xAEA1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAB5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 BE B0 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAB5u,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAB8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAAB7u))return 0;c->pc=0xB0BEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03AAB8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3716; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03AAB8u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAAB9u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
