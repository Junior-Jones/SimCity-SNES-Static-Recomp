/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000F1(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03C404u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C404u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC405u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C405u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C405u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC407u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C407u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C407u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC409u;
      sc_v11_op_ldy(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C409u:
    if(m==1u&&x==1u&&e==0u){ /* B9 F5 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C409u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC40Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x03F5u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C40Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C40Cu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC40Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC413u;}
      if(c->pc!=0xC40Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC40Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C413u:
    if(m==1u&&x==1u&&e==0u){ /* AD EB 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C413u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC416u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C416u:
    if(m==1u&&x==1u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C416u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC418u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC41Eu;}
      if(c->pc!=0xC418u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC418u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C41Eu:
    if(m==1u&&x==1u&&e==0u){ /* C0 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C41Eu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC420u;
      sc_v11_op_compare(r,c->y,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C420u:
    if(m==1u&&x==1u&&e==0u){ /* B0 02 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C420u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC422u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC424u;}
      if(c->pc!=0xC422u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC422u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C422u:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C422u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC423u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C423u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C423u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC424u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C42Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C42Au,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC42Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C42Cu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C42Cu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC42Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C42Du:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C42Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC430u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C430u:
    if(m==0u&&x==0u&&e==0u){ /* BD ED 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C430u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC433u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0CEDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C433u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF FF Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C433u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC436u;
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C436u:
    if(m==0u&&x==0u&&e==0u){ /* F0 2B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C436u,2u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC438u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC463u;}
      if(c->pc!=0xC438u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC438u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C463u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C463u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC464u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C464u:
    if(m==0u&&x==0u&&e==0u){ /* 9D ED 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C464u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC467u;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CEDu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C467u:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C467u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC46Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C46Au:
    if(m==0u&&x==0u&&e==0u){ /* 9D EF 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C46Au,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC46Du;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CEFu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C46Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C46Du,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC470u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C470u:
    if(m==0u&&x==0u&&e==0u){ /* 9D F1 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C470u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC473u;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CF1u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C473u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C473u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC474u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C474u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C474u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC476u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C476u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C476u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC479u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C479u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C479u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC47Cu;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C47Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 5D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C47Cu,2u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC47Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC4DBu;}
      if(c->pc!=0xC47Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC47Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C4DBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C4DBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC4DCu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C500u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C500u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC502u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C502u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C502u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC505u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C505u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C505u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC508u;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C508u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C508u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC50Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC50Bu;}
      if(c->pc!=0xC50Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC50Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C50Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C50Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC50Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C63Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C63Du,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC63Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C63Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 6C 07 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C63Fu,3u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC642u;
      sc_v11_op_lda(r,0x076Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C642u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C642u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC645u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B53u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C645u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C645u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC648u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C648u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 55 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C648u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC64Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B55u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C64Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C64Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC64Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C64Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C64Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC64Fu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C64Fu:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C64Fu,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC650u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C650u:
    if(m==0u&&x==0u&&e==0u){ /* B9 91 C6 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C650u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC653u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC691u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C653u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9D 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C653u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC656u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C656u:
    if(m==0u&&x==0u&&e==0u){ /* B9 99 C6 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C656u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC659u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC699u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C659u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C659u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC65Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C65Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C65Cu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC65Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C65Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C65Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC662u;
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C662u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C662u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC664u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC667u;}
      if(c->pc!=0xC664u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC664u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C667u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A1 C6 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C667u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC66Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC669u))return 0;c->pc=0xC6A1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C66Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C66Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC66Du;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C66Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C66Du,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC670u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC66Fu))return 0;c->pc=0xC42Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C670u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9D C7 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C670u,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC673u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC672u))return 0;c->pc=0xC79Du;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C673u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C673u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC674u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6A1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6A1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6A3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6A3u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6A3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6A6u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6A6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6A6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6A9u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6A9u:
    if(m==0u&&x==0u&&e==0u){ /* 9F C0 5F 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6A9u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6ADu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F5FC0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6ADu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 60 65 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6ADu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6B1u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6560u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6B1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F B0 60 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6B1u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6B5u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F60B0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6B5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 50 66 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6B5u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6B9u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6650u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6B9u:
    if(m==0u&&x==0u&&e==0u){ /* 9F A0 61 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6B9u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6BDu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F61A0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6BDu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 67 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6BDu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6C1u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6740u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6C1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 70 64 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6C1u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6C5u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6470u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6C5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 10 6A 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6C5u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6C9u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6A10u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6C9u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 90 62 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6C9u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6CDu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6290u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6CDu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 30 68 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6CDu,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D1u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6830u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6D1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6D1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D4u;
      sc_v11_op_lda(r,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6D4u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 63 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6D4u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6D8u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6380u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6D8u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 20 69 7F Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6D8u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DCu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6920u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6DCu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6DCu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DDu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6DDu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6DDu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6DEu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6DEu:
    if(m==0u&&x==0u&&e==0u){ /* E0 F0 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6DEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E1u;
      sc_v11_op_compare(r,c->x,0x00F0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6E1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 C3 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6E1u,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E3u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC6A6u;}
      if(c->pc!=0xC6E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6E3u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6E3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E6u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6E6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6E6u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6E9u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6E9u:
    if(m==0u&&x==0u&&e==0u){ /* 9D ED 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6E9u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6ECu;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CEDu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6ECu:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6ECu,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6EDu;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6EDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6EDu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6EEu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6EEu:
    if(m==0u&&x==0u&&e==0u){ /* 69 06 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6EEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F1u;
      sc_v11_op_adc(r,0x0006u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6F1u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6F1u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F2u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6F2u:
    if(m==0u&&x==0u&&e==0u){ /* E0 3C 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6F2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F5u;
      sc_v11_op_compare(r,c->x,0x003Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6F5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EF Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6F5u,2u);r->open_bus=0xEFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6F7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC6E6u;}
      if(c->pc!=0xC6F7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6F7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6F7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 F4 01 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6F7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6FAu;
      sc_v11_op_lda(r,0x01F4u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6FAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6FAu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC6FDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C6FDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0D 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C6FDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC700u;
      sc_v11_op_lda(r,0x000Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C700u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 01 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C700u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC703u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0195u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C703u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C703u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC706u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C706u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 93 01 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C706u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC709u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0193u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C709u:
    if(m==0u&&x==0u&&e==0u){ /* A9 07 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C709u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC70Cu;
      sc_v11_op_lda(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C70Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C5 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C70Cu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC70Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C70Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8B 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C70Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC712u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B8Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C712u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 93 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C712u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC715u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B93u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C715u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8F 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C715u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC718u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B8Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C718u:
    if(m==0u&&x==0u&&e==0u){ /* 9C AD 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C718u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC71Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BADu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C71Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C AF 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C71Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC71Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BAFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C71Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C B1 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C71Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC721u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB1u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C721u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 6D 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C721u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC724u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C724u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 6F 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C724u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC727u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C727u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 03 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C727u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC72Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C03u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C72Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C72Au,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC72Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C01u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C72Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C 07 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C72Du,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC730u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C07u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C730u:
    if(m==0u&&x==0u&&e==0u){ /* 9C EB 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C730u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC733u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEBu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C733u:
    if(m==0u&&x==0u&&e==0u){ /* 9C C7 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C733u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC736u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C736u:
    if(m==0u&&x==0u&&e==0u){ /* 9C A5 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C736u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC739u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C739u:
    if(m==0u&&x==0u&&e==0u){ /* 9C A7 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C739u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC73Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C73Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C A5 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C73Cu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC73Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C73Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C C9 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C73Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC742u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC9u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C742u:
    if(m==0u&&x==0u&&e==0u){ /* 9C A7 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C742u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC745u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C745u:
    if(m==0u&&x==0u&&e==0u){ /* 9C A9 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C745u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC748u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA9u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C748u:
    if(m==0u&&x==0u&&e==0u){ /* 9C AB 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C748u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC74Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CABu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C74Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C AD 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C74Bu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC74Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CADu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C74Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C AF 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C74Eu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC751u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CAFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C751u:
    if(m==0u&&x==0u&&e==0u){ /* 9C B1 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C751u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC754u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB1u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C754u:
    if(m==0u&&x==0u&&e==0u){ /* 9C B3 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C754u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC757u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C757u:
    if(m==0u&&x==0u&&e==0u){ /* 9C B5 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C757u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC75Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C75Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C B7 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C75Au,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC75Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C75Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C B9 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C75Du,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC760u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB9u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C760u:
    if(m==0u&&x==0u&&e==0u){ /* 9C BB 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C760u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC763u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CBBu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C763u:
    if(m==0u&&x==0u&&e==0u){ /* 9C BD 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C763u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC766u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CBDu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C766u:
    if(m==0u&&x==0u&&e==0u){ /* 9C BF 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C766u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC769u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CBFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C769u:
    if(m==0u&&x==0u&&e==0u){ /* 9C C3 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C769u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC76Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C76Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C C1 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C76Cu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC76Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC1u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C76Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C C5 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C76Fu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC772u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C772u:
    if(m==0u&&x==0u&&e==0u){ /* 9C CB 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C772u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC775u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CCBu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C775u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 99 01 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C775u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC778u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0199u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C778u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 97 01 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C778u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC77Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0197u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C77Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C77Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC77Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B01u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C77Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 51 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C77Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC781u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B51u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C781u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 1D 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C781u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC784u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B1Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C784u:
    if(m==0u&&x==0u&&e==0u){ /* 9C F5 03 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C784u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC787u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C787u:
    if(m==0u&&x==0u&&e==0u){ /* 9C F7 03 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C787u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC78Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C78Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C E7 01 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C78Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC78Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C78Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C78Du,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC790u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C790u:
    if(m==0u&&x==0u&&e==0u){ /* 8D BD 01 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C790u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC793u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C793u:
    if(m==0u&&x==0u&&e==0u){ /* 8D BF 01 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C793u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC796u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C796u:
    if(m==0u&&x==0u&&e==0u){ /* 9C C7 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C796u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC799u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C799u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 95 03 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C799u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C79Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C79Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C79Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C79Du,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC79Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C79Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9C C8 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C79Fu,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7A1u))return 0;c->pc=0xC89Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7A2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7A2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A5u;
      sc_v11_op_lda(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7A5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C5 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7A5u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7A8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7A8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 E8 03 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7A8u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7ABu;
      sc_v11_op_lda(r,0x03E8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7ABu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C7 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7ABu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7AEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC7u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7AEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C9 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7AEu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC9u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7B1u:
    if(m==0u&&x==0u&&e==0u){ /* 9C D3 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7B1u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7B4u:
    if(m==0u&&x==0u&&e==0u){ /* 9C D5 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7B4u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7B7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7B7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C D7 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7B7u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7BAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7BAu:
    if(m==0u&&x==0u&&e==0u){ /* 9C C3 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7BAu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7BDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7BDu:
    if(m==0u&&x==0u&&e==0u){ /* 9C B3 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7BDu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7C0u:
    if(m==0u&&x==0u&&e==0u){ /* 9C B5 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7C0u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB5u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7C3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C B7 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7C3u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7C6u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 91 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7C6u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7C9u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A91u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7C9u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8B 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7C9u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7CCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7CCu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8F 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7CCu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7CFu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7CFu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8D 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7CFu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D2u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7D2u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 93 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7D2u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D5u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A93u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7D5u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 95 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7D5u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7D8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A95u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7D8u:
    if(m==0u&&x==0u&&e==0u){ /* 9C EF 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7D8u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7DBu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AEFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7DBu:
    if(m==0u&&x==0u&&e==0u){ /* 9C F1 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7DBu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7DEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF1u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7DEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 87 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7DEu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D87u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7E1u:
    if(m==0u&&x==0u&&e==0u){ /* 9C C9 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7E1u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC9u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7E4u:
    if(m==0u&&x==0u&&e==0u){ /* 9C CB 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7E4u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7E7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DCBu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7E7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7E7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7EAu;
      sc_v11_op_lda(r,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7EAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 79 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7EAu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7EDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D79u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7EDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7B 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7EDu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D7Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7F0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7D 0D Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7F0u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D7Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7F3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 73 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7F3u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C73u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7F6u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 75 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7F6u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7F9u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C75u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7F9u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 77 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7F9u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C77u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7FCu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 7F 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7FCu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC7FFu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C7Fu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03C7FFu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 81 0C Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03C7FFu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xC802u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C81u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
