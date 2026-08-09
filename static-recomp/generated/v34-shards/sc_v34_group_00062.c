/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00062(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01888Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01888Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8890u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018890u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018890u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8893u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018893u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018893u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8896u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018896u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D7 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018896u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8899u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018899u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E5 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018899u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x889Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01889Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4B 0B Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01889Cu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x889Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01889Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 99 03 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01889Fu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88A2u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0399u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188A2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188A2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88A5u;
      sc_v11_op_lda(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188A5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4F 0B Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188A5u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88A8u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188A8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 00 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188A8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88ABu;
      sc_v11_op_lda(r,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188ABu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188ABu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88AEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188AEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188AEu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88B1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188B1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188B1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88B4u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188B4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D9 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188B4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88B7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D9u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188B7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DB 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188B7u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88BAu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188BAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D AB 02 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188BAu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88BDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02ABu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188BDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D F9 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188BDu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88C0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F9u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188C0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E1 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188C0u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88C3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E1u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188C3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0D 02 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188C3u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88C6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x020Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188C6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DD 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188C6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88C9u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188C9u:
    if(m==0u&&x==0u&&e==0u){ /* 85 D7 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188C9u,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88CBu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188CBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 03 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188CBu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88CEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0389u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188CEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 03 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188CEu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88D1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0385u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188D1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 83 03 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188D1u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88D4u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0383u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188D4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 79 03 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188D4u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88D7u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0379u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188D7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188D7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88D9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188D9u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188D9u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88DBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188DBu:
    if(m==1u&&x==0u&&e==0u){ /* A2 0F 00 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188DBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88DEu;
      sc_v11_op_ldx(r,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188DEu:
    if(m==1u&&x==0u&&e==0u){ /* 9D 9B 02 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188DEu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88E1u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x029Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188E1u:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188E1u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88E2u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188E2u:
    if(m==1u&&x==0u&&e==0u){ /* 10 FA Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188E2u,2u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88E4u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0x88DEu;}
      if(c->pc!=0x88E4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x88E4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188E4u:
    if(m==1u&&x==0u&&e==0u){ /* EE 9B 02 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188E4u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88E7u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x029Bu),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188E7u:
    if(m==1u&&x==0u&&e==0u){ /* AF 09 00 70 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188E7u,4u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88EBu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x700009u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188EBu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 25 04 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188EBu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88EEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0425u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0188EEu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0188EEu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x88EFu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018907u:
    if(m==0u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018907u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8909u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018909u:
    if(m==0u&&x==0u&&e==0u){ /* BA Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018909u,1u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x890Au;
      c->x=c->sp;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01890Au:
    if(m==0u&&x==0u&&e==0u){ /* 86 AF Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01890Au,2u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x890Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xAFu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01890Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E7 B3 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01890Cu,3u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x890Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x890Eu))return 0;c->pc=0xB3E7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01890Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01890Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8911u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018911u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018911u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8914u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018914u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 39 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018914u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8917u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0139u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018917u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 37 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018917u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x891Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0137u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01891Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01891Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x891Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0197u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01891Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 E3 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01891Du,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x891Fu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01891Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D B5 0A Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01891Fu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8922u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AB5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018922u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CB 0B Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018922u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8925u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018925u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DC F1 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018925u,3u);r->open_bus=0xF1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8928u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8927u))return 0;c->pc=0xF1DCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018928u:
    if(m==0u&&x==0u&&e==0u){ /* 20 8E 88 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018928u,3u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x892Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x892Au))return 0;c->pc=0x888Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01892Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 8C A0 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01892Bu,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x892Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x892Du))return 0;c->pc=0xA08Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01892Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7B DF Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01892Eu,3u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8931u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8930u))return 0;c->pc=0xDF7Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018931u:
    if(m==1u&&x==0u&&e==0u){ /* 58 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018931u,1u);r->open_bus=0x58u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8932u;
      c->p&=(uint8_t)~SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018932u:
    if(m==1u&&x==0u&&e==0u){ /* 20 B7 C8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018932u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8935u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8934u))return 0;c->pc=0xC8B7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018935u:
    if(m==1u&&x==1u&&e==0u){ /* 20 17 C8 Mesen corrected gameplay frame 2567; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018935u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8938u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8937u))return 0;c->pc=0xC817u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018938u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018938u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x893Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01893Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 44 8A Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01893Au,3u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x893Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x893Cu))return 0;c->pc=0x8A44u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01893Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 60 C6 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01893Du,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8940u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x893Fu))return 0;c->pc=0xC660u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018940u:
    if(m==0u&&x==0u&&e==0u){ /* 20 64 A0 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018940u,3u);r->open_bus=0xA0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8943u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8942u))return 0;c->pc=0xA064u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018943u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018943u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8945u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018945u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018945u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8948u;
      sc_v11_op_lda(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018948u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018948u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x894Au;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x894Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01894Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2645; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01894Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x894Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01894Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2645; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01894Cu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x894Fu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01894Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2645; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01894Fu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8951u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8951u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018951u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018951u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8953u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018953u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018953u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8956u;
      sc_v11_op_lda(r,0xFFFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018956u:
    if(m==0u&&x==0u&&e==0u){ /* 85 C3 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018956u,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8958u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018958u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018958u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x895Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01895Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 F0 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01895Bu,3u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x895Eu;
      sc_v11_op_and(r,0xF0F0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01895Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 16 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01895Eu,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8960u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8976u;}
      if(c->pc!=0x8960u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8960u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018960u:
    if(m==0u&&x==0u&&e==0u){ /* AD 05 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018960u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8963u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0105u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018963u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018963u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8965u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x896Bu;}
      if(c->pc!=0x8965u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8965u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01896Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 11 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01896Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x896Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0111u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01896Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01896Eu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8970u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8976u;}
      if(c->pc!=0x8970u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8970u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018976u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 8A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018976u,3u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8979u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8978u))return 0;c->pc=0x8AF5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018979u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A7 94 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018979u,3u);r->open_bus=0x94u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x897Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x897Bu))return 0;c->pc=0x94A7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01897Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 1F 8B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01897Cu,3u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x897Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x897Eu))return 0;c->pc=0x8B1Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01897Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C5 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01897Fu,2u);r->open_bus=0xC5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8981u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC5u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018981u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018981u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8983u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018983u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018983u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8984u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018984u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018984u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8985u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018985u:
    if(m==0u&&x==0u&&e==0u){ /* FC EF 88 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018985u,3u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8988u;
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x88EFu+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0x8987u))return 0;c->pc=t;}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018988u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018988u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x898Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018988u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x898Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01898Au:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01898Au,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x898Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F1 0A Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01898Au,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x898Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01898Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 55 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01898Du,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x898Fu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89E4u;}
      if(c->pc!=0x898Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x898Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 55 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01898Du,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x898Fu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89E4u;}
      if(c->pc!=0x898Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x898Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01898Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01898Fu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8991u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01898Fu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8991u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018991u:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018991u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8993u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x899Au;}
      if(c->pc!=0x8993u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8993u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 07 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018991u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8993u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x899Au;}
      if(c->pc!=0x8993u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8993u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01899Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 1C C0 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01899Au,3u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x899Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x899Cu))return 0;c->pc=0xC01Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1C C0 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01899Au,3u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x899Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x899Cu))return 0;c->pc=0xC01Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x01899Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 CF C3 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01899Du,3u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89A0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x899Fu))return 0;c->pc=0xC3CFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CF C3 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x01899Du,3u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89A0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x899Fu))return 0;c->pc=0xC3CFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189A0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DD C0 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189A0u,3u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89A3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A2u))return 0;c->pc=0xC0DDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189A3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 34 C4 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189A3u,3u);r->open_bus=0xC4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89A6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A5u))return 0;c->pc=0xC434u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189A6u:
    if(m==0u&&x==1u&&e==0u){ /* 20 16 C6 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189A6u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89A9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A8u))return 0;c->pc=0xC616u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189A9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 8A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189A9u,3u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89ACu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89ABu))return 0;c->pc=0x8A92u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 92 8A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189A9u,3u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89ACu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89ABu))return 0;c->pc=0x8A92u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189ACu:
    if(m==0u&&x==0u&&e==0u){ /* 20 8B 94 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189ACu,3u);r->open_bus=0x94u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89AFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89AEu))return 0;c->pc=0x948Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 8B 94 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189ACu,3u);r->open_bus=0x94u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89AFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89AEu))return 0;c->pc=0x948Bu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189AFu:
    if(m==0u&&x==0u&&e==0u){ /* 22 32 84 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189AFu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B3u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89B2u))return 0;
      c->pbr=0x00u;c->pc=0x8432u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189B3u:
    if(m==0u&&x==0u&&e==0u){ /* 22 D5 94 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189B3u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B7u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89B6u))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189B7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189B7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89B9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189B9u:
    if(m==0u&&x==0u&&e==0u){ /* AD F7 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189B9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89BCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189BCu:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189BCu,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89BEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89C5u;}
      if(c->pc!=0x89BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189BEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F EF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189BEu,3u);r->open_bus=0xEFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89C1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89C0u))return 0;c->pc=0xEF9Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189C1u:
    if(m==0u&&x==0u&&e==0u){ /* 22 EB 85 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189C1u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89C5u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89C4u))return 0;
      c->pbr=0x00u;c->pc=0x85EBu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189C5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 CF EE Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189C5u,3u);r->open_bus=0xEEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89C8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89C7u))return 0;c->pc=0xEECFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189C8u:
    if(m==1u&&x==0u&&e==0u){ /* 20 69 F0 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189C8u,3u);r->open_bus=0xF0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89CBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89CAu))return 0;c->pc=0xF069u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189CBu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189CBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89CDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189CDu:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189CDu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89CFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189CFu:
    if(m==0u&&x==1u&&e==0u){ /* D0 13 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189CFu,2u);r->open_bus=0x13u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89D1u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89E4u;}
      if(c->pc!=0x89D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89D1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189D1u:
    if(m==0u&&x==1u&&e==0u){ /* 20 60 C6 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189D1u,3u);r->open_bus=0xC6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89D4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89D3u))return 0;c->pc=0xC660u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189D4u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189D4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89D6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189D6u:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189D6u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89D9u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189D9u:
    if(m==0u&&x==1u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189D9u,3u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89DCu;
      sc_v11_op_and(r,0x4080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189DCu:
    if(m==0u&&x==1u&&e==0u){ /* 0D F5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189DCu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89DFu;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189DFu:
    if(m==0u&&x==1u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189DFu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89E1u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89E4u;}
      if(c->pc!=0x89E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189E1u:
    if(m==0u&&x==1u&&e==0u){ /* 20 17 C8 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189E1u,3u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89E4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89E3u))return 0;c->pc=0xC817u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189E4u:
    if(m==1u&&x==1u&&e==0u){ /* 20 33 C0 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189E4u,3u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89E7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89E6u))return 0;c->pc=0xC033u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189E7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189E7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89E9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189E9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189E9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89ECu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0103u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189ECu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189ECu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89EEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89F9u;}
      if(c->pc!=0x89EEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89EEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189EEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 05 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189EEu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89F1u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0105u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189F1u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189F1u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89F3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x89F9u;}
      if(c->pc!=0x89F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189F9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189F9u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89FCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x010Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189FCu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189FCu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x89FEu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A09u;}
      if(c->pc!=0x89FEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89FEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0189FEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 11 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0189FEu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A01u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0111u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A01u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A01u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A03u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8A09u;}
      if(c->pc!=0x8A03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A09u:
    if(m==0u&&x==0u&&e==0u){ /* 64 C3 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A09u,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A0Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A0Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 87 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A0Bu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A0Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0387u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A0Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A0Eu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A10u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8A1Eu;}
      if(c->pc!=0x8A10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A10u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 03 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A10u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A13u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x038Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A13u:
    if(m==0u&&x==0u&&e==0u){ /* D0 09 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A13u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A15u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A1Eu;}
      if(c->pc!=0x8A15u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A15u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A15u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 4577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A15u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A18u;
      sc_v11_op_lda(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A18u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 03 Mesen corrected gameplay frame 4577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A18u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A1Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0385u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A1Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 87 03 Mesen corrected gameplay frame 4577; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A1Bu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A1Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0387u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A1Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 87 0D Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A1Eu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A21u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D87u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A21u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A21u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A23u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A26u;}
      if(c->pc!=0x8A23u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A23u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A23u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 4A 89 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A23u,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A26u;
      c->pc=0x894Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A44u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A44u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A46u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A46u:
    if(m==0u&&x==0u&&e==0u){ /* AD FA 03 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A46u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A49u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FAu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A49u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0D Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A49u,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A4Bu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8A58u;}
      if(c->pc!=0x8A4Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A4Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A58u:
    if(m==0u&&x==0u&&e==0u){ /* A9 49 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A58u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A5Bu;
      sc_v11_op_lda(r,0x0249u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F B6 25 7E Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A5Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A5Fu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E25B6u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A5Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 E0 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A5Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A62u;
      sc_v11_op_lda(r,0x00E0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A62u:
    if(m==0u&&x==0u&&e==0u){ /* 8F B8 25 7E Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A62u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A66u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E25B8u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A66u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A66u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A69u;
      sc_v11_op_lda(r,0x0180u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A69u:
    if(m==0u&&x==0u&&e==0u){ /* 8F BA 25 7E Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A69u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A6Du;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E25BAu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A6Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 63 0C Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A6Du,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A70u;
      sc_v11_op_lda(r,0x0C63u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A70u:
    if(m==0u&&x==0u&&e==0u){ /* 8F BE 25 7E Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A70u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A74u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E25BEu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A74u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A74u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A77u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A77u:
    if(m==0u&&x==0u&&e==0u){ /* 85 BB Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A77u,2u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A79u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A79u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A79u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A7Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A7Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A7Bu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A7Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A7Du:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A7Du,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A7Fu;
      sc_v11_op_and(r,0x007Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A7Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A7Fu,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A81u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A81u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A81u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A83u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A83u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A2 8D 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A83u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A87u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8A86u))return 0;
      c->pbr=0x00u;c->pc=0x8DA2u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A87u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A87u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A89u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A89u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A89u,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A8Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A8Bu:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A8Bu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A8Du;
      sc_v11_op_ora(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A8Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A8Du,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A8Fu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A8Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A8Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A91u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A91u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A91u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A92u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A92u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A92u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A94u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A92u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A94u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A94u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0A 04 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A94u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A97u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x040Au)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A97u:
    if(m==0u&&x==0u&&e==0u){ /* 30 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A97u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A99u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x8AA3u;}
      if(c->pc!=0x8A99u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A99u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A99u:
    if(m==0u&&x==0u&&e==0u){ /* AD 08 04 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A99u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A9Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0408u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A9Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A9Cu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8A9Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8AA7u;}
      if(c->pc!=0x8A9Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A9Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018A9Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD B9 0B Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018A9Eu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA1u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BB9u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018AA1u:
    if(m==0u&&x==0u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AA1u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8AA7u;}
      if(c->pc!=0x8AA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018AA3u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A9 84 00 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AA3u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA7u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8AA6u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018AA7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AA7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3273; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AA7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AA8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018AF5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AF5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AF7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018AF7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AF7u,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AF9u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018AF9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 23 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AF9u,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AFBu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B1Eu;}
      if(c->pc!=0x8AFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018AFBu:
    if(m==0u&&x==0u&&e==0u){ /* AF 08 22 7E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AFBu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8AFFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2208u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018AFFu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 3F Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018AFFu,3u);r->open_bus=0x3Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B02u;
      sc_v11_op_and(r,0x3FFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B02u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 40 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B02u,3u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B05u;
      sc_v11_op_ora(r,0x4000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B05u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 08 22 7E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B05u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B09u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2208u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B09u:
    if(m==0u&&x==0u&&e==0u){ /* A9 55 55 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B09u,3u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B0Cu;
      sc_v11_op_lda(r,0x5555u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0A 22 7E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B0Cu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B10u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Au),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B10u:
    if(m==0u&&x==0u&&e==0u){ /* AF 0C 22 7E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B10u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B14u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E220Cu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B14u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 FC Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B14u,3u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B17u;
      sc_v11_op_and(r,0xFC00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B17u:
    if(m==0u&&x==0u&&e==0u){ /* 09 55 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B17u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B1Au;
      sc_v11_op_ora(r,0x0155u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B1Au:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0C 22 7E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B1Au,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B1Eu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Cu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B1Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B1Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B1Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B1Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B21u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B21u:
    if(m==0u&&x==0u&&e==0u){ /* 64 C5 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B21u,2u);r->open_bus=0xC5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B23u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B23u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0C Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B23u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B26u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B26u:
    if(m==0u&&x==0u&&e==0u){ /* D0 23 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B26u,2u);r->open_bus=0x23u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B28u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B4Bu;}
      if(c->pc!=0x8B28u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B28u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B28u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B28u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B2Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B2Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B2Bu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B2Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B30u;}
      if(c->pc!=0x8B2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B30u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B30u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B33u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B33u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B33u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B35u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B3Bu;}
      if(c->pc!=0x8B35u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B35u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B3Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B3Bu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B3Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B3Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B3Du,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B3Fu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B4Eu;}
      if(c->pc!=0x8B3Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B3Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B4Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B4Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B51u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B51u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B51u,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B54u;
      sc_v11_op_and(r,0xFFF0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B54u:
    if(m==0u&&x==0u&&e==0u){ /* D0 14 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B54u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B56u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B6Au;}
      if(c->pc!=0x8B56u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B56u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B56u:
    if(m==0u&&x==0u&&e==0u){ /* AD C3 0D Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B56u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B59u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC3u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B59u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B59u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B5Bu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B6Au;}
      if(c->pc!=0x8B5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B6Au:
    if(m==0u&&x==0u&&e==0u){ /* AD FE 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B6Au,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B6Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FEu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B6Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 2D Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B6Du,2u);r->open_bus=0x2Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B6Fu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B9Cu;}
      if(c->pc!=0x8B6Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B6Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C FE 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B9Cu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8B9Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FEu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018B9Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018B9Fu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BA2u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0395u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BA2u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BA2u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BA4u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BAAu;}
      if(c->pc!=0x8BA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BAAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 83 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BAAu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BADu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0383u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BADu:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BADu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BAFu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BB5u;}
      if(c->pc!=0x8BAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BAFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0B 00 Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BAFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BB2u;
      sc_v11_op_lda(r,0x000Bu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BB2u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 52 8C Mesen corrected gameplay frame 4261; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BB2u,3u);r->open_bus=0x8Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BB5u;
      c->pc=0x8C52u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BB5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 87 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BB5u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BB8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0387u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BB8u:
    if(m==0u&&x==0u&&e==0u){ /* F0 19 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BB8u,2u);r->open_bus=0x19u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BBAu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BD3u;}
      if(c->pc!=0x8BBAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BBAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BBAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 4265; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BBAu,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BBCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BBCu:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 00 Mesen corrected gameplay frame 4265; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BBCu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BBFu;
      sc_v11_op_and(r,0x0040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BBFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 12 Mesen corrected gameplay frame 4265; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BBFu,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BC1u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BD3u;}
      if(c->pc!=0x8BC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BD3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BD3u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BD6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BD6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BD6u,3u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BD9u;
      sc_v11_op_and(r,0x4080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BD9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BD9u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BDBu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BE1u;}
      if(c->pc!=0x8BDBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BDBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BE1u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BE1u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BE4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BE4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BE4u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BE6u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8BF2u;}
      if(c->pc!=0x8BE6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BE6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BE6u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BE6u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BE8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BE8u:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BE8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BEBu;
      sc_v11_op_and(r,0x0040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BEBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BEBu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BEDu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BF2u;}
      if(c->pc!=0x8BEDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BEDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BF2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BF2u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BF4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BF4u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BF4u,3u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BF7u;
      sc_v11_op_and(r,0x3000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BF7u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BF7u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BF9u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BFEu;}
      if(c->pc!=0x8BF9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BF9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BF9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 07 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BF9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BFCu;
      sc_v11_op_lda(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BFCu:
    if(m==0u&&x==0u&&e==0u){ /* 80 54 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BFCu,2u);r->open_bus=0x54u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8BFEu;
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8BFEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BFEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x018BFEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x018BFEu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8C01u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
