/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00020(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00804Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 12 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00804Du,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x804Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00804Fu:
    if(m==1u&&x==0u&&e==0u){ /* D0 0B Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00804Fu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8051u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x805Cu;}
      if(c->pc!=0x8051u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8051u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00805Au:
    if(m==1u&&x==0u&&e==0u){ /* 80 F1 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00805Au,2u);r->open_bus=0xF1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x805Cu;
      if(1){c->pc=0x804Du;}
      if(c->pc!=0x805Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x805Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00805Cu:
    if(m==1u&&x==0u&&e==0u){ /* 20 61 80 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00805Cu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x805Fu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x805Eu))return 0;c->pc=0x8061u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008061u:
    if(m==1u&&x==0u&&e==0u){ /* 20 88 82 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008061u,3u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8064u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8063u))return 0;c->pc=0x8288u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008064u:
    if(m==1u&&x==1u&&e==0u){ /* 20 90 86 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008064u,3u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8067u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8066u))return 0;c->pc=0x8690u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008067u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008067u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8069u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008069u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008069u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x806Cu;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00806Cu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00806Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x806Eu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x806Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00806Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 5F 82 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00806Eu,3u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8071u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8070u))return 0;c->pc=0x825Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008071u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008071u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8073u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008073u:
    if(m==1u&&x==0u&&e==0u){ /* 20 BE 96 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008073u,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8076u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8075u))return 0;c->pc=0x96BEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008076u:
    if(m==0u&&x==0u&&e==0u){ /* 22 C8 C6 01 Mesen corrected gameplay frame 2539; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008076u,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x807Au;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8079u))return 0;
      c->pbr=0x01u;c->pc=0xC6C8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00807Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 1C 96 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00807Au,3u);r->open_bus=0x96u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x807Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x807Cu))return 0;c->pc=0x961Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00807Du:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00807Du,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x807Fu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00807Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 80 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00807Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8082u;
      sc_v11_op_lda(r,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008082u:
    if(m==0u&&x==1u&&e==0u){ /* 8D BF 02 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008082u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8085u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02BFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008085u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008085u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8087u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008087u:
    if(m==1u&&x==1u&&e==0u){ /* AD 95 01 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008087u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x808Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0195u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00808Au:
    if(m==1u&&x==1u&&e==0u){ /* 29 08 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00808Au,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x808Cu;
      sc_v11_op_and(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00808Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00808Cu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x808Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8092u;}
      if(c->pc!=0x808Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x808Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00808Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00808Eu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8090u;
      sc_v11_op_lda(r,0x0002u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008090u:
    if(m==1u&&x==1u&&e==0u){ /* 80 02 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008090u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8092u;
      if(1){c->pc=0x8094u;}
      if(c->pc!=0x8092u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8092u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008094u:
    if(m==1u&&x==1u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008094u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8096u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008096u:
    if(m==1u&&x==1u&&e==0u){ /* A9 81 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008096u,2u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8098u;
      sc_v11_op_lda(r,0x0081u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008098u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008098u,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x809Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00809Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 B3 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00809Au,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x809Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00809Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 00 42 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00809Cu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x809Fu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4200u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00809Fu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00809Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80A1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080A1u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080A1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80A4u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080A4u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2548; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080A4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80A6u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x80A6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080A6u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080A6u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80A8u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080A8u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080A8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80ABu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080ABu:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080ABu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80ADu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x80ADu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080ADu:
    if(m==0u&&x==1u&&e==0u){ /* 22 07 89 01 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080ADu,4u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B1u;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x80B0u))return 0;
      c->pbr=0x01u;c->pc=0x8907u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080B2u:
    if(m==0u&&x==0u&&e==0u){ /* 78 Mesen corrected gameplay frame 1040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B2u,1u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B3u;
      c->p|=SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 78 Mesen corrected gameplay frame 1594; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B2u,1u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B3u;
      c->p|=SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 78 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B2u,1u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B3u;
      c->p|=SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 78 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B2u,1u);r->open_bus=0x78u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B3u;
      c->p|=SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080B3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1040; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1594; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080B5u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B5u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B5u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80B6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080B6u:
    if(m==1u&&x==0u&&e==0u){ /* AF B1 00 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B6u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80BAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x0000B1u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF B1 00 00 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080B6u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80BAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x0000B1u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080BAu:
    if(m==1u&&x==0u&&e==0u){ /* 30 04 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080BAu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80BCu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x80C0u;}
      if(c->pc!=0x80BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 04 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080BAu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80BCu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x80C0u;}
      if(c->pc!=0x80BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080BCu:
    if(m==1u&&x==0u&&e==0u){ /* E6 B9 Mesen corrected gameplay frame 1039; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080BCu,2u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80BEu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xB9u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 B9 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080BCu,2u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80BEu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xB9u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080BEu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1039; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080BEu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80BFu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080BEu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80BFu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080BFu:
    if(m==1u&&x==0u&&e==0u){ /* 40 Mesen corrected gameplay frame 1039; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080BFu,1u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C0u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 40 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080BFu,1u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C0u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C0u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C0u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C1u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1594; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C0u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C1u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1594; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C3u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C3u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C4u:
    if(m==0u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C4u,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C5u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C5u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C6u:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C6u,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C7u:
    if(m==0u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C7u,1u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80C8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080C8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080C8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80CBu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080CBu:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080CBu,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80CCu;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080CCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080CCu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80CEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080CEu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080CEu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80CFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080CFu:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080CFu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80D0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080D0u:
    if(m==1u&&x==0u&&e==0u){ /* AD 10 42 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080D0u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80D3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x4210u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080D3u:
    if(m==1u&&x==0u&&e==0u){ /* A5 12 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080D3u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80D5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080D5u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080D5u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80D7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x80DAu;}
      if(c->pc!=0x80D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x80D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080D7u:
    if(m==1u&&x==0u&&e==0u){ /* 4C B5 81 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080D7u,3u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80DAu;
      c->pc=0x81B5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080DAu:
    if(m==1u&&x==0u&&e==0u){ /* 20 DA BA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080DAu,3u);r->open_bus=0xBAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80DDu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80DCu))return 0;c->pc=0xBADAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080DDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 28 8C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080DDu,3u);r->open_bus=0x8Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80E0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80DFu))return 0;c->pc=0x8C28u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080E0u:
    if(m==1u&&x==0u&&e==0u){ /* 20 DD 8C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080E0u,3u);r->open_bus=0x8Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80E3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E2u))return 0;c->pc=0x8CDDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080E3u:
    if(m==1u&&x==0u&&e==0u){ /* 20 07 87 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080E3u,3u);r->open_bus=0x87u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80E6u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E5u))return 0;c->pc=0x8707u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080E6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3A 83 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080E6u,3u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80E9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E8u))return 0;c->pc=0x833Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 3A 83 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080E6u,3u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80E9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E8u))return 0;c->pc=0x833Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080E9u:
    if(m==1u&&x==0u&&e==0u){ /* 20 18 93 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080E9u,3u);r->open_bus=0x93u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80ECu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EBu))return 0;c->pc=0x9318u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080ECu:
    if(m==1u&&x==1u&&e==0u){ /* 20 14 8A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080ECu,3u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80EFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EEu))return 0;c->pc=0x8A14u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080EFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 42 8C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080EFu,3u);r->open_bus=0x8Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80F2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F1u))return 0;c->pc=0x8C42u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080F2u:
    if(m==1u&&x==0u&&e==0u){ /* 20 97 83 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080F2u,3u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80F5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F4u))return 0;c->pc=0x8397u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080F5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 51 88 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080F5u,3u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80F8u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F7u))return 0;c->pc=0x8851u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080F8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3F BC Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080F8u,3u);r->open_bus=0xBCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80FBu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80FAu))return 0;c->pc=0xBC3Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080FBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080FBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x80FDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0080FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 79 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0080FDu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8100u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0379u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008100u:
    if(m==0u&&x==0u&&e==0u){ /* D0 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008100u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8102u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8122u;}
      if(c->pc!=0x8102u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8102u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008102u:
    if(m==0u&&x==0u&&e==0u){ /* 20 24 89 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008102u,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8105u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8104u))return 0;c->pc=0x8924u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008105u:
    if(m==0u&&x==0u&&e==0u){ /* 20 82 89 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008105u,3u);r->open_bus=0x89u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8108u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8107u))return 0;c->pc=0x8982u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008108u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008108u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x810Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00810Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00810Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x810Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0103u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00810Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00810Du,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x810Fu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8112u;}
      if(c->pc!=0x810Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x810Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008112u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008112u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8115u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x010Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008115u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008115u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8117u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x811Au;}
      if(c->pc!=0x8117u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8117u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00811Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00811Au,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x811Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x038Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00811Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00811Du,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x811Fu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8122u;}
      if(c->pc!=0x811Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x811Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00811Fu:
    if(m==0u&&x==0u&&e==0u){ /* CE 8B 03 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00811Fu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8122u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x038Bu),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008122u:
    if(m==0u&&x==0u&&e==0u){ /* A5 56 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008122u,2u);r->open_bus=0x56u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8124u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x56u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008124u:
    if(m==0u&&x==0u&&e==0u){ /* F0 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008124u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8126u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8128u;}
      if(c->pc!=0x8126u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8126u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008128u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8D 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008128u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x812Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x038Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00812Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00812Bu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x812Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8130u;}
      if(c->pc!=0x812Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x812Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008130u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FA C1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008130u,3u);r->open_bus=0xC1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8133u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8132u))return 0;c->pc=0xC1FAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008133u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008133u,2u);r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8135u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8151u;}
      if(c->pc!=0x8135u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8135u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008135u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008135u,3u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8138u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008138u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008138u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x813Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x813Fu;}
      if(c->pc!=0x813Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00813Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 02 B5 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00813Fu,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8142u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8141u))return 0;c->pc=0xB502u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008142u:
    if(m==0u&&x==0u&&e==0u){ /* 20 43 B7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008142u,3u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8145u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8144u))return 0;c->pc=0xB743u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008145u:
    if(m==0u&&x==0u&&e==0u){ /* 20 AB B1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008145u,3u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8148u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8147u))return 0;c->pc=0xB1ABu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008148u:
    if(m==0u&&x==0u&&e==0u){ /* 20 83 AE Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008148u,3u);r->open_bus=0xAEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x814Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Au))return 0;c->pc=0xAE83u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00814Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 AB Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00814Bu,3u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x814Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Du))return 0;c->pc=0xAB92u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00814Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 C1 B0 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00814Eu,3u);r->open_bus=0xB0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8151u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8150u))return 0;c->pc=0xB0C1u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008151u:
    if(m==0u&&x==1u&&e==0u){ /* 20 7C 92 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008151u,3u);r->open_bus=0x92u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8154u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8153u))return 0;c->pc=0x927Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008154u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F6 86 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008154u,3u);r->open_bus=0x86u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8157u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8156u))return 0;c->pc=0x86F6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008157u:
    if(m==1u&&x==0u&&e==0u){ /* 20 CC 92 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008157u,3u);r->open_bus=0x92u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x815Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8159u))return 0;c->pc=0x92CCu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00815Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 C3 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00815Au,2u);r->open_bus=0xC3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x815Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00815Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 46 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00815Cu,2u);r->open_bus=0x46u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x815Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x81A4u;}
      if(c->pc!=0x815Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x815Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00815Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00815Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8161u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008161u:
    if(m==0u&&x==0u&&e==0u){ /* D0 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008161u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8163u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x8163u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8163u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008163u:
    if(m==0u&&x==0u&&e==0u){ /* A6 AD Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008163u,2u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8165u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xADu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008165u:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008165u,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8167u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x817Cu;}
      if(c->pc!=0x8167u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8167u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008167u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008167u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x816Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00816Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 FF Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00816Au,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x816Du;
      sc_v11_op_and(r,0xFFF0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00816Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 24 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00816Du,2u);r->open_bus=0x24u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x816Fu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x816Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x816Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00816Fu:
    if(m==0u&&x==0u&&e==0u){ /* 3B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00816Fu,1u);r->open_bus=0x3Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8170u;
      c->a=c->sp;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008170u:
    if(m==0u&&x==0u&&e==0u){ /* 85 A9 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008170u,2u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8172u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xA9u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008172u:
    if(m==0u&&x==0u&&e==0u){ /* A5 AB Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008172u,2u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8174u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xABu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008174u:
    if(m==0u&&x==0u&&e==0u){ /* 1B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008174u,1u);r->open_bus=0x1Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8175u;
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008175u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008175u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8178u;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008178u:
    if(m==0u&&x==0u&&e==0u){ /* 85 AD Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008178u,2u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x817Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00817Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 17 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00817Au,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x817Cu;
      if(1){c->pc=0x8193u;}
      if(c->pc!=0x817Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x817Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00817Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00817Cu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x817Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00817Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 FF Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00817Fu,3u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8182u;
      sc_v11_op_and(r,0xFFF0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008182u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008182u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8184u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x818Bu;}
      if(c->pc!=0x8184u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8184u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008184u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D1 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008184u,2u);r->open_bus=0xD1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8186u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008186u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008186u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8189u;
      sc_v11_op_and(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008189u:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008189u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x818Bu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x818Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x818Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00818Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 AD Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00818Bu,2u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x818Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00818Du:
    if(m==0u&&x==0u&&e==0u){ /* 3B Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00818Du,1u);r->open_bus=0x3Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x818Eu;
      c->a=c->sp;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00818Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 AB Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00818Eu,2u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8190u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xABu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008190u:
    if(m==0u&&x==0u&&e==0u){ /* A5 A9 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008190u,2u);r->open_bus=0xA9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8192u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xA9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008192u:
    if(m==0u&&x==0u&&e==0u){ /* 1B Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008192u,1u);r->open_bus=0x1Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8193u;
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008193u:
    if(m==0u&&x==0u&&e==0u){ /* 20 70 98 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008193u,3u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8196u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8195u))return 0;c->pc=0x9870u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008196u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008196u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8198u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008198u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008198u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x819Au;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00819Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 B9 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00819Au,2u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x819Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB9u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00819Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00819Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x819Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00819Eu:
    if(m==0u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00819Eu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x819Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00819Fu:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00819Fu,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81A0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A0u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081A0u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81A1u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A1u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081A1u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81A2u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A2u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081A2u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81A3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A3u:
    if(m==0u&&x==0u&&e==0u){ /* 40 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081A3u,1u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81A4u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 70 98 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081A4u,3u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81A7u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81A6u))return 0;c->pc=0x9870u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081A7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81A9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081A9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081A9u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81ABu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081ABu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B9 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081ABu,2u);r->open_bus=0xB9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81ADu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB9u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081ADu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081ADu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81AFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081AFu:
    if(m==0u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081AFu,1u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81B0u;
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B0u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081B0u,1u);r->open_bus=0xFAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81B1u;
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B1u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081B1u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81B2u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B2u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081B2u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81B3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B3u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081B3u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81B4u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B4u:
    if(m==0u&&x==0u&&e==0u){ /* 40 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081B4u,1u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81B5u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B5u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081B5u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81B7u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B7u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B5 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081B7u,2u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81B9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB5u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081B9u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0C 42 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081B9u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81BCu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081BCu:
    if(m==1u&&x==0u&&e==0u){ /* 20 DD 8C Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081BCu,3u);r->open_bus=0x8Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81BFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81BEu))return 0;c->pc=0x8CDDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081BFu:
    if(m==1u&&x==0u&&e==0u){ /* A5 16 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081BFu,2u);r->open_bus=0x16u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81C1u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x16u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081C1u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0D 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081C1u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81C4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081C4u:
    if(m==1u&&x==0u&&e==0u){ /* A5 17 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081C4u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81C6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x17u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081C6u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0D 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081C6u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81C9u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081C9u:
    if(m==1u&&x==0u&&e==0u){ /* A5 1A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081C9u,2u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81CBu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081CBu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0F 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081CBu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81CEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081CEu:
    if(m==1u&&x==0u&&e==0u){ /* A5 1B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081CEu,2u);r->open_bus=0x1Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81D0u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Bu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081D0u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0F 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081D0u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81D3u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081D3u:
    if(m==1u&&x==0u&&e==0u){ /* A5 1E Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081D3u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81D5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081D5u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081D5u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81D8u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081D8u:
    if(m==1u&&x==0u&&e==0u){ /* A5 1F Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081D8u,2u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81DAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081DAu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081DAu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81DDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081DDu:
    if(m==1u&&x==0u&&e==0u){ /* A5 18 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081DDu,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81DFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x18u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081DFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0E 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081DFu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81E2u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081E2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 19 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081E2u,2u);r->open_bus=0x19u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81E4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x19u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081E4u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0E 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081E4u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81E7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081E7u:
    if(m==1u&&x==0u&&e==0u){ /* A5 1C Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081E7u,2u);r->open_bus=0x1Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81E9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081E9u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081E9u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81ECu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081ECu:
    if(m==1u&&x==0u&&e==0u){ /* A5 1D Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081ECu,2u);r->open_bus=0x1Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81EEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Du)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081EEu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081EEu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81F1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081F1u:
    if(m==1u&&x==0u&&e==0u){ /* A5 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081F1u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81F3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x20u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081F3u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 12 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081F3u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81F6u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081F6u:
    if(m==1u&&x==0u&&e==0u){ /* A5 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081F6u,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81F8u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x21u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081F8u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 12 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081F8u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81FBu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081FBu:
    if(m==1u&&x==0u&&e==0u){ /* 20 3A 83 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081FBu,3u);r->open_bus=0x83u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x81FEu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81FDu))return 0;c->pc=0x833Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0081FEu:
    if(m==1u&&x==0u&&e==0u){ /* 20 65 8D Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0081FEu,3u);r->open_bus=0x8Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8201u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8200u))return 0;c->pc=0x8D65u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008201u:
    if(m==1u&&x==1u&&e==0u){ /* 20 7C 92 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008201u,3u);r->open_bus=0x92u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8204u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8203u))return 0;c->pc=0x927Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008204u:
    if(m==0u&&x==0u&&e==0u){ /* 80 8D Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008204u,2u);r->open_bus=0x8Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8206u;
      if(1){c->pc=0x8193u;}
      if(c->pc!=0x8206u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8206u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008206u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 2525; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008206u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8207u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008206u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8207u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008206u,1u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8207u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008207u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2525; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008207u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8209u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008207u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8209u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008207u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8209u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008209u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008209u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Cu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008209u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Cu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00820Cu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00820Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Eu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x820Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00820Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Eu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x820Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00820Eu:
    if(m==0u&&x==0u&&e==0u){ /* 28 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00820Eu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Fu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00820Eu,1u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x820Fu;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00820Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00820Fu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8210u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00820Fu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8210u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00820Fu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8210u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008211u:
    if(m==0u&&x==0u&&e==0u){ /* 58 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008211u,1u);r->open_bus=0x58u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8212u;
      c->p&=(uint8_t)~SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 58 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008211u,1u);r->open_bus=0x58u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8212u;
      c->p&=(uint8_t)~SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008212u:
    if(m==0u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008212u,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8213u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8B Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008212u,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8213u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008213u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008213u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8216u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* F4 00 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008213u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8216u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008216u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008216u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8217u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008216u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8217u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008217u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008217u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8218u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008217u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8218u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008218u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008218u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x821Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008218u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x821Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00821Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00821Au,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x821Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00821Au,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x821Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00821Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00821Cu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x821Du;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00821Du:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00821Du,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x821Eu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00821Eu:
    if(m==0u&&x==0u&&e==0u){ /* FC 23 82 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00821Eu,3u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8221u;
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x8223u+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0x8220u))return 0;c->pc=t;}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008221u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008221u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8222u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008221u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8222u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008222u:
    if(m==0u&&x==0u&&e==0u){ /* 40 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008222u,1u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8223u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 40 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008222u,1u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8223u;
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00823Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 3E 82 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00823Au,3u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x823Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x823Cu))return 0;c->pc=0x823Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00823Du:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00823Du,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x823Eu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00823Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00823Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8240u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008240u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C7 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008240u,2u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8242u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008242u:
    if(m==0u&&x==0u&&e==0u){ /* 85 59 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008242u,2u);r->open_bus=0x59u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8244u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x59u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008244u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008244u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8245u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008245u:
    if(m==0u&&x==0u&&e==0u){ /* 85 5B Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008245u,2u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8247u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Bu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008247u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008247u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8248u;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008248u:
    if(m==0u&&x==0u&&e==0u){ /* 85 5D Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008248u,2u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x824Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00824Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00824Au,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x824Bu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00824Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 4F 82 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00824Bu,3u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x824Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x824Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00824Eu:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00824Eu,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x824Fu;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00824Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00824Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8251u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008251u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008251u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8252u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008252u:
    if(m==0u&&x==0u&&e==0u){ /* A5 59 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008252u,2u);r->open_bus=0x59u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8254u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x59u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008254u:
    if(m==0u&&x==0u&&e==0u){ /* 85 5D Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008254u,2u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8256u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008256u:
    if(m==0u&&x==0u&&e==0u){ /* 65 5B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008256u,2u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8258u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x5Bu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008258u:
    if(m==0u&&x==0u&&e==0u){ /* 85 59 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008258u,2u);r->open_bus=0x59u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x825Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x59u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00825Au:
    if(m==0u&&x==0u&&e==0u){ /* 65 5D Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00825Au,2u);r->open_bus=0x5Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x825Cu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x5Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00825Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 5B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00825Cu,2u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x825Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Bu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00825Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00825Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x825Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00825Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00825Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8261u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008261u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008261u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8263u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008263u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008263u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8265u;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008265u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 7F 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008265u,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8268u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008268u:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008268u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x826Au;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00826Au:
    if(m==1u&&x==0u&&e==0u){ /* 8D 7E 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00826Au,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x826Du;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00826Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00826Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x826Fu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00826Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 7D 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00826Fu,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8272u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008272u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008272u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8274u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008274u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 7C 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008274u,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8277u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008277u:
    if(m==1u&&x==0u&&e==0u){ /* A2 FF 1E Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008277u,3u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x827Au;
      sc_v11_op_ldx(r,0x1EFFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00827Au:
    if(m==1u&&x==0u&&e==0u){ /* 8E 7A 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00827Au,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x827Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x1F7Au),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00827Du:
    if(m==1u&&x==0u&&e==0u){ /* A2 72 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00827Du,3u);r->open_bus=0x1Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8280u;
      sc_v11_op_ldx(r,0x1F72u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008280u:
    if(m==1u&&x==0u&&e==0u){ /* 86 AB Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008280u,2u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8282u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xABu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008282u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008282u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8285u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008285u:
    if(m==1u&&x==0u&&e==0u){ /* 86 AD Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008285u,2u);r->open_bus=0xADu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8287u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008287u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008287u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8288u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008288u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008288u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x828Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00828Au:
    if(m==1u&&x==0u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00828Au,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x828Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00828Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 8F Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00828Cu,2u);r->open_bus=0x8Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x828Eu;
      sc_v11_op_lda(r,0x008Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00828Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 00 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00828Eu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8291u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2100u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008291u:
    if(m==1u&&x==1u&&e==0u){ /* A9 03 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008291u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8293u;
      sc_v11_op_lda(r,0x0003u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008293u:
    if(m==1u&&x==1u&&e==0u){ /* 85 60 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008293u,2u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8295u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008295u:
    if(m==1u&&x==1u&&e==0u){ /* A9 09 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008295u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8297u;
      sc_v11_op_lda(r,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008297u:
    if(m==1u&&x==1u&&e==0u){ /* 85 61 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008297u,2u);r->open_bus=0x61u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8299u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008299u:
    if(m==1u&&x==1u&&e==0u){ /* A9 58 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008299u,2u);r->open_bus=0x58u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x829Bu;
      sc_v11_op_lda(r,0x0058u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00829Bu:
    if(m==1u&&x==1u&&e==0u){ /* 85 62 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00829Bu,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x829Du;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00829Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 5C Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00829Du,2u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x829Fu;
      sc_v11_op_lda(r,0x005Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00829Fu:
    if(m==1u&&x==1u&&e==0u){ /* 85 63 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00829Fu,2u);r->open_bus=0x63u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A1u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x63u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 54 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082A1u,2u);r->open_bus=0x54u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A3u;
      sc_v11_op_lda(r,0x0054u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A3u:
    if(m==1u&&x==1u&&e==0u){ /* 85 64 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082A3u,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A5u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A5u:
    if(m==1u&&x==1u&&e==0u){ /* 64 65 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082A5u,2u);r->open_bus=0x65u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x65u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A7u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082A7u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82A9u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082A9u:
    if(m==1u&&x==1u&&e==0u){ /* 85 66 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082A9u,2u);r->open_bus=0x66u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82ABu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x66u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082ABu:
    if(m==1u&&x==1u&&e==0u){ /* A9 04 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082ABu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82ADu;
      sc_v11_op_lda(r,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082ADu:
    if(m==1u&&x==1u&&e==0u){ /* 85 67 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082ADu,2u);r->open_bus=0x67u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82AFu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x67u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082AFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082AFu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82B1u;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082B1u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 15 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082B1u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82B4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2115u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082B4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082B4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82B6u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082B6u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1A 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082B6u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82B9u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082B9u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1B 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082B9u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82BCu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082BCu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082BCu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82BEu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082BEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1B 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082BEu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82C1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082C1u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1C 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082C1u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82C4u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Cu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082C4u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1C 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082C4u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82C7u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Cu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082C7u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1D 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082C7u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82CAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082CAu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1D 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082CAu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82CDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082CDu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1E 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082CDu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82D0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Eu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082D0u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1E 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082D0u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82D3u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082D3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082D3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82D5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082D5u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1F 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082D5u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82D8u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082D8u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1F 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082D8u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82DBu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Fu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082DBu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 20 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082DBu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82DEu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2120u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082DEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 20 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082DEu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82E1u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2120u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082E1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082E1u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82E3u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082E3u:
    if(m==1u&&x==1u&&e==0u){ /* 85 71 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082E3u,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82E5u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082E5u:
    if(m==1u&&x==1u&&e==0u){ /* 85 72 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082E5u,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82E7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082E7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082E7u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82EAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082EAu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 27 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082EAu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82EDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082EDu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 29 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082EDu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F0u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2129u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 17 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082F0u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F2u;
      sc_v11_op_lda(r,0x0017u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F2u:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082F2u,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F4u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F4u:
    if(m==1u&&x==1u&&e==0u){ /* 64 69 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082F4u,2u);r->open_bus=0x69u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F6u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F6u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6A Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082F6u,2u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82F8u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082F8u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6B Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082F8u,2u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82FAu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Bu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082FAu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 33 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082FAu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82FDu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2133u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082FDu:
    if(m==1u&&x==1u&&e==0u){ /* 64 6C Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082FDu,2u);r->open_bus=0x6Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x82FFu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0082FFu:
    if(m==1u&&x==1u&&e==0u){ /* 64 6D Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0082FFu,2u);r->open_bus=0x6Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8301u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008301u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6E Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008301u,2u);r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8303u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008303u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6F Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008303u,2u);r->open_bus=0x6Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8305u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008305u:
    if(m==1u&&x==1u&&e==0u){ /* 64 70 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008305u,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8307u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x70u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008307u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2B 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008307u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x830Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Bu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00830Au:
    if(m==1u&&x==1u&&e==0u){ /* 64 B1 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00830Au,2u);r->open_bus=0xB1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x830Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00830Cu:
    if(m==1u&&x==1u&&e==0u){ /* 64 B3 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00830Cu,2u);r->open_bus=0xB3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x830Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00830Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 FF Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00830Eu,2u);r->open_bus=0xFFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8310u;
      sc_v11_op_lda(r,0x00FFu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008310u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 01 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008310u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8313u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4201u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008313u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008313u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8315u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008315u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 02 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008315u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8318u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4202u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008318u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 03 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008318u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x831Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4203u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00831Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 04 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00831Bu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x831Eu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4204u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00831Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 05 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00831Eu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8321u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4205u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008321u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 06 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008321u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8324u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4206u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008324u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 07 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008324u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8327u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4207u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008327u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 08 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008327u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x832Au;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4208u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00832Au:
    if(m==1u&&x==1u&&e==0u){ /* 8D 09 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00832Au,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x832Du;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4209u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00832Du:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0A 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00832Du,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8330u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008330u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008330u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8333u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008333u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0C 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008333u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8336u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008336u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0D 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008336u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8339u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Du),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008339u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008339u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x833Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00833Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00833Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x833Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00833Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x833Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00833Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00833Cu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x833Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00833Eu:
    if(m==1u&&x==0u&&e==0u){ /* A6 5F Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00833Eu,2u);r->open_bus=0x5Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8340u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x5Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008340u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 00 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008340u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8343u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2100u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008343u:
    if(m==1u&&x==0u&&e==0u){ /* A5 61 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008343u,2u);r->open_bus=0x61u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8345u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x61u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008345u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 05 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008345u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8348u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2105u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008348u:
    if(m==1u&&x==0u&&e==0u){ /* A6 62 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008348u,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x834Au;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x62u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00834Au:
    if(m==1u&&x==0u&&e==0u){ /* 8E 07 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00834Au,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x834Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2107u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00834Du:
    if(m==1u&&x==0u&&e==0u){ /* A6 64 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00834Du,2u);r->open_bus=0x64u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x834Fu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x64u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00834Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 09 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00834Fu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8352u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2109u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008352u:
    if(m==1u&&x==0u&&e==0u){ /* A6 66 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008352u,2u);r->open_bus=0x66u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8354u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x66u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008354u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 0B 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008354u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8357u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Bu),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008357u:
    if(m==1u&&x==0u&&e==0u){ /* A6 68 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008357u,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8359u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x68u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008359u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 2C 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008359u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x835Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x212Cu),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00835Cu:
    if(m==1u&&x==0u&&e==0u){ /* A6 6A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00835Cu,2u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x835Eu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x6Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00835Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 2E 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00835Eu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8361u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x212Eu),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008361u:
    if(m==1u&&x==0u&&e==0u){ /* A6 6C Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008361u,2u);r->open_bus=0x6Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8363u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x6Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008363u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 30 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008363u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8366u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2130u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008366u:
    if(m==1u&&x==0u&&e==0u){ /* A5 6E Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008366u,2u);r->open_bus=0x6Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8368u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x6Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008368u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 32 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008368u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x836Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2132u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00836Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 6F Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00836Bu,2u);r->open_bus=0x6Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x836Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x6Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00836Du:
    if(m==1u&&x==0u&&e==0u){ /* 8D 25 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00836Du,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8370u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2125u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008370u:
    if(m==1u&&x==0u&&e==0u){ /* A5 70 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008370u,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8372u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x70u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008372u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 2A 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008372u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8375u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008375u:
    if(m==1u&&x==0u&&e==0u){ /* A6 71 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008375u,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8377u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x71u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008377u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 23 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008377u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x837Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2123u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00837Au:
    if(m==1u&&x==0u&&e==0u){ /* AD 9B 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00837Au,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x837Du;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x019Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00837Du:
    if(m==1u&&x==0u&&e==0u){ /* D0 0D Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00837Du,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x837Fu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x838Cu;}
      if(c->pc!=0x837Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x837Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00837Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00837Fu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8381u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008381u:
    if(m==1u&&x==0u&&e==0u){ /* 30 13 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008381u,2u);r->open_bus=0x13u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8383u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x8396u;}
      if(c->pc!=0x8383u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8383u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008383u:
    if(m==1u&&x==0u&&e==0u){ /* C9 01 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008383u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8385u;
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008385u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0F Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008385u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8387u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8396u;}
      if(c->pc!=0x8387u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8387u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008387u:
    if(m==1u&&x==0u&&e==0u){ /* AD 79 03 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008387u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x838Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0379u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00838Au:
    if(m==1u&&x==0u&&e==0u){ /* D0 0A Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00838Au,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x838Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8396u;}
      if(c->pc!=0x838Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x838Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00838Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00838Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x838Eu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00838Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 28 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00838Eu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8391u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2128u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008391u:
    if(m==1u&&x==0u&&e==0u){ /* A9 F7 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008391u,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8393u;
      sc_v11_op_lda(r,0x00F7u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008393u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 29 21 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008393u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8396u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2129u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008396u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008396u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8397u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008397u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008397u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x8399u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x008399u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9B 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x008399u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x839Cu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x019Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00839Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 1A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00839Cu,2u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x839Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x83B8u;}
      if(c->pc!=0x839Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x839Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00839Eu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x00839Eu,2u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83A0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083A0u:
    if(m==0u&&x==0u&&e==0u){ /* 30 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083A0u,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83A2u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x83ACu;}
      if(c->pc!=0x83A2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83A2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083A2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083A2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83A5u;
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083A5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083A5u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83A7u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83ACu;}
      if(c->pc!=0x83A7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83A7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083A7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 79 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083A7u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83AAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0379u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083AAu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083AAu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83ACu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83ADu;}
      if(c->pc!=0x83ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083ADu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083ADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83AFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083AFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083AFu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83B1u;
      sc_v11_op_lda(r,0x000Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083B1u:
    if(m==1u&&x==0u&&e==0u){ /* 85 71 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083B1u,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83B3u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083B3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083B3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83B5u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083B5u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083B5u,2u);r->open_bus=0x6Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83B7u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0083B7u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x0083B7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x83B8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
