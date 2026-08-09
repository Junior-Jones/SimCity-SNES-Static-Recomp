/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000AF(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02BC8Fu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BC8Fu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBC91u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BC91u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 53 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BC91u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBC94u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BC94u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BC94u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBC97u;
      sc_v11_op_lda(r,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BC97u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BC97u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBC9Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BC9Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BC9Au,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBC9Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BC9Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 0D 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BC9Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCA0u;
      sc_v11_op_lda(r,0x000Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCA0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCA0u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCA3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCA3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCA3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCA5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCA5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCA5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCA8u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCA8u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCA8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCAAu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBCAAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCAAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCAAu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCADu;
      sc_v11_op_lda(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCADu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCADu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCB0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCB0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCB0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCB2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCB2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCB2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCB5u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCB5u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCB5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCB7u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBCB7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCB7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 88 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCB7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCBAu;
      sc_v11_op_lda(r,0x0088u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCBAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCBAu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCBDu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCBDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 44 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCBDu,2u);r->open_bus=0x44u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCBFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x44u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCBFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCBFu,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCC1u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBCD0u;}
      if(c->pc!=0xBCC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCD0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 74 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCD0u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCD3u;
      sc_v11_op_lda(r,0x0074u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCD3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCD3u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCD6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCD6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCD6u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCD9u;
      sc_v11_op_lda(r,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCD9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCD9u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCDCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCDCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCDCu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCDEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCDEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCDEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCE1u;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCE1u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCE1u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCE3u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBCE3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCE3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCE3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCE5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCE5u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCE5u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCE7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCE7u:
    if(m==1u&&x==0u&&e==0u){ /* A9 32 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCE7u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCE9u;
      sc_v11_op_lda(r,0x0032u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCE9u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCE9u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCECu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCECu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCECu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCEEu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCEEu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCEEu,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCEFu;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCEFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCEFu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCF1u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCF1u:
    if(m==1u&&x==0u&&e==0u){ /* A4 44 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCF1u,2u);r->open_bus=0x44u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCF3u;
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x44u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCF3u:
    if(m==1u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCF3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCF5u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBCF6u;}
      if(c->pc!=0xBCF5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCF5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCF6u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCF6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCF7u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCF7u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCF7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCF8u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCF8u:
    if(m==1u&&x==0u&&e==0u){ /* 65 3E Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCF8u,2u);r->open_bus=0x3Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCFAu;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x3Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCFAu:
    if(m==1u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCFAu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCFBu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCFBu:
    if(m==1u&&x==0u&&e==0u){ /* BD 7C D3 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCFBu,3u);r->open_bus=0xD3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBCFEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD37Cu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BCFEu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BCFEu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBD01u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BD01u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0C Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BD01u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBD03u;
      sc_v11_op_lda(r,0x000Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BD03u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BD03u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBD06u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0261u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BD06u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BD06u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBD08u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BD08u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BD08u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBD0Bu;
      sc_v11_op_lda(r,0x0002u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BD0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BD0Bu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBD0Du;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBD0Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02BD0Du:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x02BD0Du,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xBD0Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
