/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000E3(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x038C03u:
    if(m==0u&&x==0u&&e==0u){ /* BF A0 61 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C03u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C07u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F61A0u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C07u:
    if(m==0u&&x==0u&&e==0u){ /* C5 08 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C07u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C09u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C09u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C09u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C0Bu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C0Du;}
      if(c->pc!=0x8C0Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C0Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 08 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C0Bu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C0Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C0Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F A2 61 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C0Du,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C11u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F61A2u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C11u:
    if(m==0u&&x==0u&&e==0u){ /* BF 70 64 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C11u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C15u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6470u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C15u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 72 64 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C15u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C19u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6472u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C19u:
    if(m==0u&&x==0u&&e==0u){ /* BF 80 63 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C19u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C1Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6380u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C1Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 63 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C1Du,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C21u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6382u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C21u:
    if(m==0u&&x==0u&&e==0u){ /* BF 90 62 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C21u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C25u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6290u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C25u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 92 62 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C25u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C29u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6292u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C29u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C29u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C2Au;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C2Au:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C2Au,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C2Bu;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 10 BA Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C2Bu,2u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C2Du;
      if((c->p&SC_FLAG_N)==0u){c->pc=0x8BE7u;}
      if(c->pc!=0x8C2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C2Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C2Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C2Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C2Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C32u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C5Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C32u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C32u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C35u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C63u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C35u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C35u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C37u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C37u:
    if(m==0u&&x==0u&&e==0u){ /* CD 63 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C37u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C3Au;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C63u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C3Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C3Au,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C3Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C3Fu;}
      if(c->pc!=0x8C3Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C3Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C3Cu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C3Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C63u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C3Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C42u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C5Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C42u:
    if(m==0u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C42u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C44u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C44u:
    if(m==0u&&x==0u&&e==0u){ /* CD 63 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C44u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C47u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C63u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C47u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C47u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C49u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C4Cu;}
      if(c->pc!=0x8C49u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C49u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C49u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C49u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C4Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C63u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C4Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C4Cu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C4Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C61u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C4Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C4Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C52u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C52u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C52u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C53u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C53u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C53u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C54u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C54u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C54u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C55u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C55u:
    if(m==0u&&x==0u&&e==0u){ /* CD 6B 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C55u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C58u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C58u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C58u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C5Au;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C5Du;}
      if(c->pc!=0x8C5Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C5Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C5Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C5Au,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C5Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C5Du:
    if(m==0u&&x==0u&&e==0u){ /* 8F C0 5F 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C5Du,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C61u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F5FC0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C61u:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C61u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C64u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B93u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C64u:
    if(m==0u&&x==0u&&e==0u){ /* CD 6B 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C64u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C67u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C67u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C67u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C69u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C6Cu;}
      if(c->pc!=0x8C69u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C69u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C69u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C69u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C6Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C6Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8F B0 60 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C6Cu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C70u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F60B0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C70u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8F 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C70u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C73u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C73u:
    if(m==0u&&x==0u&&e==0u){ /* CD 6B 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C73u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C76u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C76u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C76u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C78u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C7Bu;}
      if(c->pc!=0x8C78u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C78u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C78u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C78u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C7Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C7Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F A0 61 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C7Bu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C7Fu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F61A0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C7Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C7Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C82u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C01u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C82u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C82u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C83u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C83u:
    if(m==0u&&x==0u&&e==0u){ /* ED 6D 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C83u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C86u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Du)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C86u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 80 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C86u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C89u;
      sc_v11_op_compare(r,c->a,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C89u:
    if(m==0u&&x==0u&&e==0u){ /* 6A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C89u,1u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C8Au;
      sc_v11_op_shift_accumulator(r,16u,3u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C8Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 80 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C8Au,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C8Du;
      sc_v11_op_compare(r,c->a,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C8Du:
    if(m==0u&&x==0u&&e==0u){ /* 6A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C8Du,1u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C8Eu;
      sc_v11_op_shift_accumulator(r,16u,3u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C8Eu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C8Fu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 6D 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C8Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C92u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C92u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6D 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C92u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C95u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C95u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C95u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C98u;
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C98u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C98u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C9Au;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C9Du;}
      if(c->pc!=0x8C9Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C9Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038C9Du:
    if(m==0u&&x==0u&&e==0u){ /* 8F 70 64 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038C9Du,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CA1u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6470u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CA1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CA1u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CA4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C07u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CA4u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CA4u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CA5u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CA5u:
    if(m==0u&&x==0u&&e==0u){ /* ED 6F 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CA5u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CA8u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Fu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CA8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 80 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CA8u,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CABu;
      sc_v11_op_compare(r,c->a,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CABu:
    if(m==0u&&x==0u&&e==0u){ /* 6A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CABu,1u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CACu;
      sc_v11_op_shift_accumulator(r,16u,3u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CACu:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 80 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CACu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CAFu;
      sc_v11_op_compare(r,c->a,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CAFu:
    if(m==0u&&x==0u&&e==0u){ /* 6A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CAFu,1u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CB0u;
      sc_v11_op_shift_accumulator(r,16u,3u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CB0u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CB0u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CB1u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CB1u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 6F 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CB1u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CB4u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CB4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6F 0C Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CB4u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CB7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CB7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CB7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CBAu;
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CBAu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CBAu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CBCu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8CBFu;}
      if(c->pc!=0x8CBCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CBCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CBFu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 90 62 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CBFu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CC3u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6290u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CC3u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CC3u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CC6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CC6u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CC6u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CC7u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CC7u:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 0A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CC7u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CCAu;
      sc_v11_op_adc(r,0x0A00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CCAu:
    if(m==0u&&x==0u&&e==0u){ /* 30 19 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CCAu,2u);r->open_bus=0x19u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CCCu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x8CE5u;}
      if(c->pc!=0x8CCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CCCu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CCCu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CCEu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CCEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 14 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CCEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CD1u;
      sc_v11_op_lda(r,0x0014u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CD1u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CD1u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CD3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CD3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CF A3 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CD3u,3u);r->open_bus=0xA3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CD6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8CD5u))return 0;c->pc=0xA3CFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CD9u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CD9u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CDBu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CDBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CDBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CDEu;
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CDEu:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CDEu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CE0u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8CE8u;}
      if(c->pc!=0x8CE0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CE0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CE8u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 80 63 7F Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CE8u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CECu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6380u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CECu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CECu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CEEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CEEu:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CEEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CF1u;
      sc_v11_op_ldy(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CF1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CF1u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CF4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CF4u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CF4u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CF5u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CF5u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CF5u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CF6u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CF6u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CF6u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CF7u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CF7u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CF7u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CF8u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CF8u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CF8u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CF9u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CF9u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CF9u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CFAu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CFAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CFAu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CFBu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CFBu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CFBu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CFCu;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CFCu:
    if(m==0u&&x==0u&&e==0u){ /* CD 03 0E Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CFCu,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8CFFu;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E03u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038CFFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038CFFu,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D01u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8D08u;}
      if(c->pc!=0x8D01u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D01u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D08u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D08u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D0Bu;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 80 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D0Bu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D0Du;
      if(1){c->pc=0x8D0Du;}
      if(c->pc!=0x8D0Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D0Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D0Du:
    if(m==0u&&x==0u&&e==0u){ /* 8C 97 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D0Du,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D10u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B97u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D10u:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D10u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D13u;
      sc_v11_op_ldy(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D13u:
    if(m==0u&&x==0u&&e==0u){ /* CD 05 0E Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D13u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D16u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E05u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D16u:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D16u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D18u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8D1Fu;}
      if(c->pc!=0x8D18u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D18u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D1Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D1Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D22u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D22u:
    if(m==0u&&x==0u&&e==0u){ /* 80 00 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D22u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D24u;
      if(1){c->pc=0x8D24u;}
      if(c->pc!=0x8D24u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D24u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D24u:
    if(m==0u&&x==0u&&e==0u){ /* 8C 99 0B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D24u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D27u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B99u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D27u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D27u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D28u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038D28u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3994; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038D28u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8D29u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038FF4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038FF4u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8FF6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038FF6u:
    if(m==1u&&x==1u&&e==0u){ /* AE 85 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038FF6u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8FF9u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038FF9u:
    if(m==1u&&x==1u&&e==0u){ /* AC 86 0B Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038FF9u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8FFCu;
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038FFCu:
    if(m==1u&&x==1u&&e==0u){ /* C9 00 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038FFCu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8FFEu;
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x038FFEu:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 3834; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x038FFEu,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9000u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9007u;}
      if(c->pc!=0x9000u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9000u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
