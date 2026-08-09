/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0006E(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01B800u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B800u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB801u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B801u:
    if(m==1u&&x==0u&&e==0u){ /* AD 0B 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B801u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB804u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x020Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B804u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B804u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB806u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B806u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3F BA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B806u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB809u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB808u))return 0;c->pc=0xBA3Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B809u:
    if(m==0u&&x==0u&&e==0u){ /* 20 29 B8 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B809u,3u);r->open_bus=0xB8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB80Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB80Bu))return 0;c->pc=0xB829u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B80Cu:
    if(m==0u&&x==0u&&e==0u){ /* B0 12 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B80Cu,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB80Eu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB820u;}
      if(c->pc!=0xB80Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB80Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B80Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 05 B7 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B80Eu,3u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB811u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB810u))return 0;c->pc=0xB705u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B811u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B811u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB813u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B813u:
    if(m==0u&&x==0u&&e==0u){ /* AD 4B 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B813u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB816u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x024Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B816u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B816u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB818u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B818u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B818u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB819u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B819u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B819u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB81Au;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B81Au:
    if(m==0u&&x==0u&&e==0u){ /* FC 0C 83 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B81Au,3u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB81Du;
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x830Cu+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0xB81Cu))return 0;c->pc=t;}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B81Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 C9 BC Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B81Du,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB820u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB81Fu))return 0;c->pc=0xBCC9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B820u:
    if(m==0u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B820u,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB821u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B821u:
    if(m==0u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B821u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB822u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B822u:
    if(m==0u&&x==0u&&e==0u){ /* 10 95 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B822u,2u);r->open_bus=0x95u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB824u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB7B9u;}
      if(c->pc!=0xB824u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB824u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B824u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B824u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB826u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B826u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B826u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB827u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B827u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B827u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB828u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B828u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B828u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB829u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B829u:
    if(m==0u&&x==0u&&e==0u){ /* C9 30 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B829u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB82Cu;
      sc_v11_op_compare(r,c->a,0x0030u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B82Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 29 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B82Cu,2u);r->open_bus=0x29u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB82Eu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB857u;}
      if(c->pc!=0xB82Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB82Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B82Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B82Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB831u;
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B831u:
    if(m==0u&&x==0u&&e==0u){ /* B0 24 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B831u,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB833u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB857u;}
      if(c->pc!=0xB833u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB833u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B833u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B833u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB834u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B834u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B834u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB837u;
      sc_v11_op_and(r,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B837u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B837u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Au;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B83Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 1A Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B83Au,2u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Cu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB856u;}
      if(c->pc!=0xB83Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB83Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B83Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0D 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B83Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB83Fu;
      sc_v11_op_compare(r,c->a,0x000Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B83Fu:
    if(m==0u&&x==0u&&e==0u){ /* B0 15 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B83Fu,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB841u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB856u;}
      if(c->pc!=0xB841u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB841u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B841u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B841u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB842u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B842u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B842u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB845u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B845u:
    if(m==0u&&x==0u&&e==0u){ /* C9 60 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B845u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB848u;
      sc_v11_op_compare(r,c->a,0x0060u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B848u:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B848u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Au;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB851u;}
      if(c->pc!=0xB84Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB84Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B84Au:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B84Au,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Bu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B84Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 70 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B84Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB84Eu;
      sc_v11_op_compare(r,c->a,0x0070u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B84Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 01 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B84Eu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB850u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB851u;}
      if(c->pc!=0xB850u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB850u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B850u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B850u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB851u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B851u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 4B 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B851u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB854u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x024Bu),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B854u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B854u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB855u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B855u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B855u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB856u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B857u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B857u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB858u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B858u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B858u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB859u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B90Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B90Au,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B90Au,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B90Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 21 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B90Cu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB90Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0221u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B90Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 27 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B90Fu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB912u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0227u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B912u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 23 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B912u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB915u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0223u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B915u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 25 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B915u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB918u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0225u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B918u:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B918u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB91Bu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B91Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF 62 80 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B91Bu,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB91Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018062u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B91Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B91Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB922u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B922u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0F 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B922u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB925u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x020Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B925u:
    if(m==0u&&x==0u&&e==0u){ /* 20 24 BA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B925u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB928u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB927u))return 0;c->pc=0xBA24u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B928u:
    if(m==0u&&x==0u&&e==0u){ /* AE 0F 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B928u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB92Bu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B92Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B92Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB92Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B92Du:
    if(m==1u&&x==0u&&e==0u){ /* BF 72 80 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B92Du,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB931u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018072u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B931u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B931u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB932u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B932u:
    if(m==1u&&x==0u&&e==0u){ /* 6D 05 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B932u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB935u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0205u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B935u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B935u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB936u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B936u:
    if(m==1u&&x==0u&&e==0u){ /* BF 96 80 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B936u,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018096u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B93Au:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B93Au,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Bu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B93Bu:
    if(m==1u&&x==0u&&e==0u){ /* 6D 07 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B93Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB93Eu;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0207u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B93Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B93Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB940u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B940u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3F BA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B940u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB943u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB942u))return 0;c->pc=0xBA3Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B943u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B943u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB946u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x024Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B946u:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 BA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B946u,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB949u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB948u))return 0;c->pc=0xBA80u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B949u:
    if(m==0u&&x==0u&&e==0u){ /* B0 06 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B949u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB94Bu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB951u;}
      if(c->pc!=0xB94Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB94Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B94Bu:
    if(m==0u&&x==0u&&e==0u){ /* CE 0F 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B94Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB94Eu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x020Fu),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B94Eu:
    if(m==0u&&x==0u&&e==0u){ /* 10 D8 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B94Eu,2u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB950u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB928u;}
      if(c->pc!=0xB950u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB950u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B950u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B950u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB951u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B951u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B951u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB952u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B952u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B952u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB955u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B955u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B955u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB958u;
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B958u:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B958u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB96Au;}
      if(c->pc!=0xB95Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB95Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B95Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B95Au,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB95Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B95Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B95Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB960u;
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B960u:
    if(m==0u&&x==0u&&e==0u){ /* D0 25 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B960u,2u);r->open_bus=0x25u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB962u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB987u;}
      if(c->pc!=0xB962u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB962u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B987u:
    if(m==0u&&x==0u&&e==0u){ /* 28 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B987u,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB988u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01B988u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01B988u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB989u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA24u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA24u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA27u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA27u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA27u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA28u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA28u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA28u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA29u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA29u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA29u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA2Au;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA2Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA2Au,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA2Bu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 6D BD 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA2Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA2Eu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 05 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA2Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA31u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0205u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA31u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA31u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA34u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA34u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA34u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA35u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA35u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA35u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA36u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA36u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA36u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA37u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA37u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA37u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA38u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA38u:
    if(m==0u&&x==0u&&e==0u){ /* 6D BF 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA38u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Bu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 07 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA3Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0207u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA3Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA3Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA3Fu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA40u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA40u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA40u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA42u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA42u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA42u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA43u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA43u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA43u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA45u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA45u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA45u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA47u;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA47u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA47u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA49u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA49u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA49u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA4Au;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA4Au:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA4Au,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA4Eu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA4Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA4Eu,2u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA50u;
      sc_v11_op_lda(r,0x0078u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA50u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA50u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA54u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA54u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA54u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA55u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA55u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA55u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA56u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA56u:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA56u,1u);r->open_bus=0xEAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA57u;
      sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA57u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA57u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA5Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA5Bu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA5Bu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA5Cu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA5Cu:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA5Cu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA60u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA60u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA60u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA61u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA61u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA61u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA63u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA63u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA63u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA65u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA65u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA65u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA66u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA66u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA66u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA68u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA68u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA68u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA6Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA6Au:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA6Au,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA6Bu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA6Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA6Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA6Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA6Du:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA6Du,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA6Eu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA6Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA6Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA70u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA70u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA70u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA73u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA73u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA73u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA74u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA74u:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA74u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA76u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA76u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA76u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA77u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA77u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA77u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA78u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA78u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA78u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA7Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA7Cu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA7Fu;
      sc_v11_op_and(r,0x03FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA7Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA80u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA80u:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA80u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA83u;
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA83u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA83u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA85u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBA88u;}
      if(c->pc!=0xBA85u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBA85u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA88u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA88u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA8Bu;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA8Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 5F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA8Bu,2u);r->open_bus=0x5Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA8Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBAECu;}
      if(c->pc!=0xBA8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBA8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA8Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA8Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA90u;
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA90u:
    if(m==0u&&x==0u&&e==0u){ /* F0 5A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA90u,2u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA92u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBAECu;}
      if(c->pc!=0xBA92u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBA92u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA92u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA92u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA95u;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA95u:
    if(m==0u&&x==0u&&e==0u){ /* F0 55 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA95u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA97u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBAECu;}
      if(c->pc!=0xBA97u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBA97u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA97u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA97u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA9Au;
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA9Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 2D Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA9Au,2u);r->open_bus=0x2Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA9Cu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBAC9u;}
      if(c->pc!=0xBA9Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBA9Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA9Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 62 00 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA9Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBA9Fu;
      sc_v11_op_compare(r,c->a,0x0062u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BA9Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BA9Fu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAA1u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBAA9u;}
      if(c->pc!=0xBAA1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAA1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAA9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 30 00 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAA9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAACu;
      sc_v11_op_compare(r,c->a,0x0030u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAACu:
    if(m==0u&&x==0u&&e==0u){ /* B0 1D Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAACu,2u);r->open_bus=0x1Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAAEu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBACBu;}
      if(c->pc!=0xBAAEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAAEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAAEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAAEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAB1u;
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAB1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 14 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAB1u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAB3u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBAC7u;}
      if(c->pc!=0xBAB3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAB3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAB3u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAB3u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAB4u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAB4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 01 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAB4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAB7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0195u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAB7u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAB7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBABAu;
      sc_v11_op_and(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BABAu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0B Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BABAu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBABCu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBAC7u;}
      if(c->pc!=0xBABCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBABCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BABCu:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BABCu,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBABDu;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BABDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 2E 00 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BABDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC0u;
      sc_v11_op_compare(r,c->a,0x002Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAC0u:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAC0u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC2u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBAC7u;}
      if(c->pc!=0xBAC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAC2u:
    if(m==0u&&x==0u&&e==0u){ /* EE 27 02 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAC2u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC5u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0227u),16u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAC5u:
    if(m==0u&&x==0u&&e==0u){ /* 80 02 Mesen corrected gameplay frame 4860; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAC5u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBAC7u;
      if(1){c->pc=0xBAC9u;}
      if(c->pc!=0xBAC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBAC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BAC9u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BAC9u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBACAu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BACAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BACAu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBACBu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB78u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB78u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB7Au:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB7Au,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB7Du:
    if(m==1u&&x==0u&&e==0u){ /* 29 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB7Du,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB7Fu;
      sc_v11_op_and(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB7Fu:
    if(m==1u&&x==0u&&e==0u){ /* D0 4E Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB7Fu,2u);r->open_bus=0x4Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB81u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBBCFu;}
      if(c->pc!=0xBB81u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB81u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB81u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB81u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB83u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB83u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB83u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB86u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB86u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB86u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB88u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBB8Bu;}
      if(c->pc!=0xBB88u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB88u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB8Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB8Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB8Eu;
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BB8Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BB8Eu,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBB90u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBBA5u;}
      if(c->pc!=0xBB90u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBB90u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBA5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBA5u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBA8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBA8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBA9u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBA9u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBA9u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBAAu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBAAu:
    if(m==0u&&x==0u&&e==0u){ /* BF 58 BB 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBAAu,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBAEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01BB58u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBAEu:
    if(m==0u&&x==0u&&e==0u){ /* AE 21 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBAEu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB1u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0221u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBB1u:
    if(m==0u&&x==0u&&e==0u){ /* 30 1C Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBB1u,2u);r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB3u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xBBCFu;}
      if(c->pc!=0xBBB3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBB3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBB3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBB3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB5u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBBB6u;}
      if(c->pc!=0xBBB5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBBB5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBB6u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBB6u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBB7u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBB7u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 27 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBB7u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBBAu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0227u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBBAu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBBAu,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBBCu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBBCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBBCu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBBFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBBFu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBBFu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC0u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBC0u:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBC0u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC2u;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBC2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9D 0B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBC2u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBC5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBC5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBC7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBC7u:
    if(m==1u&&x==0u&&e==0u){ /* AD 9F 0B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBC7u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B9Fu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBCAu:
    if(m==1u&&x==0u&&e==0u){ /* E9 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBCAu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCCu;
      sc_v11_op_sbc(r,0x0000u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBCCu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 9F 0B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBCCu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBCFu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B9Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBCFu:
    if(m==1u&&x==0u&&e==0u){ /* 22 2E 84 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBCFu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBD3u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xBBD2u))return 0;
      c->pbr=0x00u;c->pc=0x842Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBD3u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBD3u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBD4u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBF9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBF9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBFBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBFBu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBBFDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01BBFDu:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01BBFDu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBC00u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
