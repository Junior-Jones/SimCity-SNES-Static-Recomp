/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0002A(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00AB92u:
    if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00AB92u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAB94u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00AB92u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAB94u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00AB92u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAB94u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00AB94u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00AB94u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAB96u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00AB9Bu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00AB9Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAB9Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00AB9Du:
    if(m==1u&&x==1u&&e==0u){ /* A5 E1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00AB9Du,2u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAB9Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00AB9Fu:
    if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00AB9Fu,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABA1u;
      sc_v11_op_and(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABA1u:
    if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABA1u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABA3u;
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABA3u:
    if(m==1u&&x==1u&&e==0u){ /* F0 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABA3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABA5u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xABA6u;}
      if(c->pc!=0xABA5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABA5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABA5u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABA5u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABA6u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABA6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABA6u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABA8u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABA8u:
    if(m==1u&&x==1u&&e==0u){ /* 8D B7 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABA8u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABABu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AB7u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABABu:
    if(m==1u&&x==1u&&e==0u){ /* A5 E3 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABABu,2u);r->open_bus=0xE3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABADu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABADu:
    if(m==1u&&x==1u&&e==0u){ /* D0 F6 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABADu,2u);r->open_bus=0xF6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABAFu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xABA5u;}
      if(c->pc!=0xABAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABAFu:
    if(m==1u&&x==1u&&e==0u){ /* AD 93 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABAFu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABB2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0193u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABB2u:
    if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABB2u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABB4u;
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABB4u:
    if(m==1u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABB4u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABB6u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xABB9u;}
      if(c->pc!=0xABB6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABB6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABB6u:
    if(m==1u&&x==1u&&e==0u){ /* 4C 24 AD ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABB6u,3u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABB9u;
      c->pc=0xAD24u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABB9u:
    if(m==1u&&x==1u&&e==0u){ /* AD BF 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABB9u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABBCu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0ABFu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABBCu:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABBCu,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABBEu;
      sc_v11_op_and(r,0x000Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABBEu:
    if(m==1u&&x==1u&&e==0u){ /* D0 11 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABBEu,2u);r->open_bus=0x11u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABC0u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xABD1u;}
      if(c->pc!=0xABC0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABC0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABC0u:
    if(m==1u&&x==1u&&e==0u){ /* A5 E1 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABC0u,2u);r->open_bus=0xE1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABC2u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABC2u:
    if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABC2u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABC4u;
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABC4u:
    if(m==1u&&x==1u&&e==0u){ /* D0 21 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABC4u,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABC6u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xABE7u;}
      if(c->pc!=0xABC6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABC6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABC6u:
    if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABC6u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABC7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABC7u:
    if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABC7u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCBu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xABCAu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABCBu:
    if(m==0u&&x==0u&&e==0u){ /* 03 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCBu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCDu;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCBu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCDu;
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCBu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCDu;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCBu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCDu;
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABCDu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCDu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCEu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCDu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCEu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCDu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCEu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCDu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABCEu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABCEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E9 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCEu,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xABD0u))return 0;c->pc=0xACE9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E9 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCEu,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xABD0u))return 0;c->pc=0xACE9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCEu,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xABD0u))return 0;c->pc=0xACE9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 AC ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABCEu,3u);r->open_bus=0xACu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD1u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xABD0u))return 0;c->pc=0xACE9u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABD1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABD3u:
    if(m==1u&&x==1u&&e==0u){ /* AD C1 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD3u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AC1u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABD6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD7u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABD7u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD8u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABD8u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABD9u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABD9u:
    if(m==1u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABD9u,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABDBu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABDBu:
    if(m==1u&&x==1u&&e==0u){ /* AD BF 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABDBu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABDEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0ABFu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABDEu:
    if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABDEu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABE0u;
      sc_v11_op_and(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABE0u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABE0u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABE1u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABE1u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABE1u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABE2u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABE2u:
    if(m==1u&&x==1u&&e==0u){ /* 65 91 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABE2u,2u);r->open_bus=0x91u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABE4u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x91u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABE4u:
    if(m==1u&&x==1u&&e==0u){ /* 8D C3 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABE4u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABE7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AC3u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABE7u:
    if(m==1u&&x==1u&&e==0u){ /* EE BF 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABE7u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABEAu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0ABFu),8u,1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABEAu:
    if(m==1u&&x==1u&&e==0u){ /* AD C1 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABEAu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABEDu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AC1u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABEDu:
    if(m==1u&&x==1u&&e==0u){ /* 29 02 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABEDu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABEFu;
      sc_v11_op_and(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABEFu:
    if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABEFu,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABF0u;
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABF0u:
    if(m==1u&&x==1u&&e==0u){ /* AD C1 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABF0u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABF3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AC1u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABF3u:
    if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABF3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABF5u;
      sc_v11_op_and(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABF5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 1F ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABF5u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABF7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAC16u;}
      if(c->pc!=0xABF7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABF7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABF7u:
    if(m==1u&&x==1u&&e==0u){ /* B9 6B 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABF7u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABFAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A6Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABFAu:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABFAu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABFBu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABFBu:
    if(m==1u&&x==1u&&e==0u){ /* E9 01 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABFBu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABFDu;
      sc_v11_op_sbc(r,0x0001u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABFDu:
    if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABFDu,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xABFFu;
      sc_v11_op_and(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00ABFFu:
    if(m==1u&&x==1u&&e==0u){ /* D9 6B 0A ; generated town route */
      sc_v11_scheduler_code_access(r,0x00ABFFu,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xAC02u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A6Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
