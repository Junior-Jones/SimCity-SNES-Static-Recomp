/* AUTO-GENERATED Version 26 exact-PC/E/M/X route; no opcode decoder. */
#include "sc_v11_runtime.h"
int sc_v34_static_cpu_step(SCV11Runtime*,uint32_t,uint8_t,uint8_t,uint8_t);

int sc_v26_static_cpu_step(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00905Cu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00905Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x905Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00905Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 02 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00905Eu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9061u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0253u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009061u:
    if(m==0u&&x==0u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009061u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9062u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009062u:
    if(m==0u&&x==0u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009062u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9063u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009063u:
    if(m==0u&&x==0u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009063u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9064u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009064u:
    if(m==0u&&x==0u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009064u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9065u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009065u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009065u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9068u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0289u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009068u:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 02 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009068u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x906Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0261u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00906Bu:
    if(m==0u&&x==0u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00906Bu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x906Cu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00906Cu:
    if(m==0u&&x==0u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00906Cu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x906Du;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00906Du:
    if(m==0u&&x==0u&&e==0u){ /* BF A6 DA 00 opcode $BF; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00906Du,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9071u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x00DAA6u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009071u:
    if(m==0u&&x==0u&&e==0u){ /* 48 opcode $48; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009071u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9072u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009072u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 opcode $A0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009072u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9075u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009075u:
    if(m==0u&&x==0u&&e==0u){ /* AE 53 02 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009075u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9078u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0253u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009078u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 opcode $B3; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009078u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x907Au;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00907Au:
    if(m==0u&&x==0u&&e==0u){ /* C8 opcode $C8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00907Au,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x907Bu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00907Bu:
    if(m==0u&&x==0u&&e==0u){ /* C8 opcode $C8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00907Bu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x907Cu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00907Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 87 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00907Cu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x907Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0287u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00907Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 opcode $48; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00907Fu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9080u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009080u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009080u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9082u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009082u:
    if(m==1u&&x==0u&&e==0u){ /* B3 03 opcode $B3; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009082u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9084u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x03u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009084u:
    if(m==1u&&x==0u&&e==0u){ /* C8 opcode $C8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009084u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9085u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009085u:
    if(m==1u&&x==0u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009085u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9086u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009086u:
    if(m==1u&&x==0u&&e==0u){ /* 6D 5D 02 opcode $6D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009086u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9089u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x025Du)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009089u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009089u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x908Du;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00908Du:
    if(m==1u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00908Du,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x908Eu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00908Eu:
    if(m==1u&&x==0u&&e==0u){ /* B3 03 opcode $B3; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00908Eu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9090u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x03u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009090u:
    if(m==1u&&x==0u&&e==0u){ /* C8 opcode $C8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009090u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9091u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009091u:
    if(m==1u&&x==0u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009091u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9092u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009092u:
    if(m==1u&&x==0u&&e==0u){ /* 6D 5F 02 opcode $6D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009092u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9095u;
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x025Fu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009095u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009095u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9099u;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009099u:
    if(m==1u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x009099u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x909Au;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00909Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00909Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x909Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00909Cu:
    if(m==0u&&x==0u&&e==0u){ /* B3 03 opcode $B3; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00909Cu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x909Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x03u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00909Eu:
    if(m==0u&&x==0u&&e==0u){ /* C8 opcode $C8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00909Eu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x909Fu;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00909Fu:
    if(m==0u&&x==0u&&e==0u){ /* C8 opcode $C8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00909Fu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A0u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090A0u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090A0u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A4u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090A4u:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090A4u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A5u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090A5u:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090A5u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A6u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090A6u:
    if(m==0u&&x==0u&&e==0u){ /* CE 87 02 opcode $CE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090A6u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90A9u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0287u),16u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090A9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 D5 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090A9u,2u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90ABu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9080u;}
      if(c->pc!=0x90ABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90ABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090ABu:
    if(m==0u&&x==0u&&e==0u){ /* 8E 53 02 opcode $8E; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090ABu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90AEu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090AEu:
    if(m==0u&&x==0u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090AEu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90AFu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090AFu:
    if(m==0u&&x==0u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090AFu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B0u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090B0u:
    if(m==0u&&x==0u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090B0u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B1u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090B1u:
    if(m==0u&&x==0u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090B1u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B2u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090B2u:
    if(m==0u&&x==0u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090B2u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B3u;
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090B3u:
    if(m==0u&&x==0u&&e==0u){ /* A8 opcode $A8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090B3u,1u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B4u;
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090B4u:
    if(m==0u&&x==0u&&e==0u){ /* 8A opcode $8A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090B4u,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B5u;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090B5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090B5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B8u;
      sc_v11_op_and(r,0x0007u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090B8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090B8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90B9u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090B9u:
    if(m==0u&&x==0u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090B9u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90BAu;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090BAu:
    if(m==0u&&x==0u&&e==0u){ /* BD 48 90 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090BAu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90BDu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x9048u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090BDu:
    if(m==0u&&x==0u&&e==0u){ /* AE 89 02 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090BDu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C0u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0289u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090C0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090C0u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0289u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090C3u:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 00 opcode $C0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090C3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C6u;
      sc_v11_op_compare(r,c->y,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090C6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C opcode $F0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090C6u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90C8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x90D4u;}
      if(c->pc!=0x90C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090C8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090C8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90CBu;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090CBu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 22 7E opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090CBu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90CFu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090CFu:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090CFu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D0u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090D0u:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090D0u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D1u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090D1u:
    if(m==0u&&x==0u&&e==0u){ /* 88 opcode $88; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090D1u,1u);r->open_bus=0x88u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D2u;
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090D2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F7 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090D2u,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D4u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x90CBu;}
      if(c->pc!=0x90D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x90D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090D4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 02 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090D4u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90D7u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0289u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090D7u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 22 7E opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090D7u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90DBu;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2200u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090DBu:
    if(m==0u&&x==0u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090DBu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90DCu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0090DCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x0090DCu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x90DDu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2DFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2DFu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2E1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2DFu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2E1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2E1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2E1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2E4u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2E1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2E4u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2E4u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 opcode $02; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2E4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2E6u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD2E6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 opcode $02; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2E4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2E6u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD2E6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2E9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 SEP #$20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2E9u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2EBu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2EBu:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 LDA $0425; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2EBu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2EEu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2EEu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 REP #$20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2EEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2F0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2F0u:
    if(m==0u&&x==0u&&e==0u){ /* 10 07 BPL $D2F9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2F0u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2F2u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD2F9u;}
      if(c->pc!=0xD2F2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD2F2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2F2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 5A 00 LDA #$005A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2F2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2F5u;
      sc_v11_op_lda(r,0x005Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2F5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 75 STA $75; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2F5u,2u);r->open_bus=0x75u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2F7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x75u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2F7u:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 BRA $D2FE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2F7u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2F9u;
      if(1){c->pc=0xD2FEu;}
      if(c->pc!=0xD2F9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD2F9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2F9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 42 00 LDA #$0042; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2F9u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2FCu;
      sc_v11_op_lda(r,0x0042u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2FCu:
    if(m==0u&&x==0u&&e==0u){ /* 85 75 STA $75; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2FCu,2u);r->open_bus=0x75u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD2FEu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x75u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D2FEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 D6 D5 JSR $D5D6; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D2FEu,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD301u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD300u))return 0;c->pc=0xD5D6u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D301u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F4 D8 JSR $D8F4; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D301u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD304u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD303u))return 0;c->pc=0xD8F4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F4 D8 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D301u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD304u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD303u))return 0;c->pc=0xD8F4u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D304u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F2 D9 JSR $D9F2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D304u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD307u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD306u))return 0;c->pc=0xD9F2u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F2 D9 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D304u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD307u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD306u))return 0;c->pc=0xD9F2u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D307u:
    if(m==0u&&x==0u&&e==0u){ /* 80 D6 BRA $D2DF; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D307u,2u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD309u;
      if(1){c->pc=0xD2DFu;}
      if(c->pc!=0xD309u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD309u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 D6 opcode $80; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D307u,2u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD309u;
      if(1){c->pc=0xD2DFu;}
      if(c->pc!=0xD309u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD309u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5D6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E0 D5 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5D6u,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5D9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD5D8u))return 0;c->pc=0xD5E0u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5D9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3A D6 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5D9u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5DCu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD5DBu))return 0;c->pc=0xD63Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5DCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 D6 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5DCu,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5DFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD5DEu))return 0;c->pc=0xD692u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5DFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5DFu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5E0u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5DFu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5E0u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5E0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5E0u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5E2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5E2u:
    if(m==1u&&x==1u&&e==0u){ /* AD 33 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5E2u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5E5u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0433u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5E5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 18 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5E5u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5E7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD5FFu;}
      if(c->pc!=0xD5E7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD5E7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5E7u:
    if(m==1u&&x==1u&&e==0u){ /* AE 31 04 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5E7u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5EAu;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0431u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5EAu:
    if(m==1u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5EAu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5EBu;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5EBu:
    if(m==1u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5EBu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5ECu;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5ECu:
    if(m==1u&&x==1u&&e==0u){ /* BD CD D5 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5ECu,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5EFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD5CDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5EFu:
    if(m==1u&&x==1u&&e==0u){ /* 10 05 opcode $10; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5EFu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5F1u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD5F6u;}
      if(c->pc!=0xD5F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD5F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5F1u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 opcode $A2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5F1u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5F3u;
      sc_v11_op_ldx(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5F3u:
    if(m==1u&&x==1u&&e==0u){ /* BD CD D5 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5F3u,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5F6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD5CDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5F6u:
    if(m==1u&&x==1u&&e==0u){ /* 8E 31 04 opcode $8E; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5F6u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5F9u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0431u),(uint8_t)c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5F9u:
    if(m==1u&&x==1u&&e==0u){ /* BD CE D5 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5F9u,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5FCu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD5CEu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5FCu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 33 04 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5FCu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD5FFu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0433u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D5FFu:
    if(m==1u&&x==1u&&e==0u){ /* CE 33 04 opcode $CE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D5FFu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD602u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0433u),8u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D602u:
    if(m==1u&&x==1u&&e==0u){ /* AE 31 04 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D602u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD605u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0431u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D605u:
    if(m==1u&&x==1u&&e==0u){ /* BD CD D5 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D605u,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD608u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD5CDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D608u:
    if(m==1u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D608u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD609u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D609u:
    if(m==1u&&x==1u&&e==0u){ /* 69 4A opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D609u,2u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD60Bu;
      sc_v11_op_adc(r,0x004Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D60Bu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D60Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD60Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D60Du:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D60Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD610u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D610u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D610u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD613u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D613u:
    if(m==0u&&x==1u&&e==0u){ /* A9 80 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D613u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD616u;
      sc_v11_op_lda(r,0x0080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D616u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D616u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD619u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D619u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D619u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD61Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D61Bu:
    if(m==1u&&x==1u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D61Bu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD61Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D61Eu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D61Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD620u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D620u:
    if(m==0u&&x==1u&&e==0u){ /* 10 08 opcode $10; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D620u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD622u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD62Au;}
      if(c->pc!=0xD622u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD622u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D622u:
    if(m==0u&&x==1u&&e==0u){ /* A9 40 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D622u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD625u;
      sc_v11_op_lda(r,0x0040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D625u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D625u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD628u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D628u:
    if(m==0u&&x==1u&&e==0u){ /* 80 06 opcode $80; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D628u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD62Au;
      if(1){c->pc=0xD630u;}
      if(c->pc!=0xD62Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD62Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D62Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 58 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D62Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD62Du;
      sc_v11_op_lda(r,0x0058u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D62Du:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D62Du,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD630u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D630u:
    if(m==0u&&x==1u&&e==0u){ /* A9 20 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D630u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD633u;
      sc_v11_op_lda(r,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D633u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D633u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD636u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D636u:
    if(m==0u&&x==1u&&e==0u){ /* 20 5C 90 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D636u,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD639u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD638u))return 0;c->pc=0x905Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D639u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D639u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD63Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D639u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD63Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D63Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D63Au,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD63Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D63Cu:
    if(m==1u&&x==1u&&e==0u){ /* AD 37 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D63Cu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD63Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0437u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D63Fu:
    if(m==1u&&x==1u&&e==0u){ /* D0 1B opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D63Fu,2u);r->open_bus=0x1Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD641u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD65Cu;}
      if(c->pc!=0xD641u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD641u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D641u:
    if(m==1u&&x==1u&&e==0u){ /* AE 35 04 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D641u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD644u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0435u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D644u:
    if(m==1u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D644u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD645u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D645u:
    if(m==1u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D645u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD646u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D646u:
    if(m==1u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D646u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD647u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D647u:
    if(m==1u&&x==1u&&e==0u){ /* BD 84 D5 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D647u,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD64Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD584u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D64Au:
    if(m==1u&&x==1u&&e==0u){ /* C9 80 opcode $C9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D64Au,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD64Cu;
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D64Cu:
    if(m==1u&&x==1u&&e==0u){ /* D0 05 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D64Cu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD64Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD653u;}
      if(c->pc!=0xD64Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD64Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D64Eu:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 opcode $A2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D64Eu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD650u;
      sc_v11_op_ldx(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D650u:
    if(m==1u&&x==1u&&e==0u){ /* BD 84 D5 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D650u,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD653u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD584u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D653u:
    if(m==1u&&x==1u&&e==0u){ /* 8E 35 04 opcode $8E; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D653u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD656u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0435u),(uint8_t)c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D656u:
    if(m==1u&&x==1u&&e==0u){ /* BD 86 D5 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D656u,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD659u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD586u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D659u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 37 04 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D659u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD65Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0437u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D65Cu:
    if(m==1u&&x==1u&&e==0u){ /* CE 37 04 opcode $CE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D65Cu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD65Fu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0437u),8u,-1);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D65Fu:
    if(m==1u&&x==1u&&e==0u){ /* AE 35 04 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D65Fu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD662u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0435u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D662u:
    if(m==1u&&x==1u&&e==0u){ /* BD 84 D5 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D662u,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD665u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD584u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D665u:
    if(m==1u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D665u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD666u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D666u:
    if(m==1u&&x==1u&&e==0u){ /* 69 80 opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D666u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD668u;
      sc_v11_op_adc(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D668u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 5D 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D668u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD66Bu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D66Bu:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D66Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD66Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D66Du:
    if(m==1u&&x==1u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D66Du,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD670u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D670u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D670u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD672u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D672u:
    if(m==0u&&x==1u&&e==0u){ /* 30 05 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D672u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD674u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD679u;}
      if(c->pc!=0xD674u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD674u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D674u:
    if(m==0u&&x==1u&&e==0u){ /* A9 58 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D674u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD677u;
      sc_v11_op_lda(r,0x0058u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D677u:
    if(m==0u&&x==1u&&e==0u){ /* 80 03 opcode $80; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D677u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD679u;
      if(1){c->pc=0xD67Cu;}
      if(c->pc!=0xD679u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD679u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D679u:
    if(m==0u&&x==1u&&e==0u){ /* A9 40 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D679u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD67Cu;
      sc_v11_op_lda(r,0x0040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D67Cu:
    if(m==0u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D67Cu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD67Du;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D67Du:
    if(m==0u&&x==1u&&e==0u){ /* 7D 85 D5 opcode $7D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D67Du,3u);r->open_bus=0xD5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD680u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xD585u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D680u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D680u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD683u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D683u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D683u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD685u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D685u:
    if(m==0u&&x==1u&&e==0u){ /* A9 4D 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D685u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD688u;
      sc_v11_op_lda(r,0x004Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D688u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D688u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD68Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D68Bu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 53 02 opcode $9C; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D68Bu,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD68Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D68Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 5C 90 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D68Eu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD691u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD690u))return 0;c->pc=0x905Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D691u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D691u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD692u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D691u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD692u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D692u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F D6 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D692u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD695u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD694u))return 0;c->pc=0xD69Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D695u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC D6 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D695u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD698u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD697u))return 0;c->pc=0xD6ECu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EC D6 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D695u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD698u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD697u))return 0;c->pc=0xD6ECu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D698u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0E D8 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D698u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD69Au))return 0;c->pc=0xD80Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 0E D8 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D698u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD69Au))return 0;c->pc=0xD80Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 0E D8 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D698u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD69Au))return 0;c->pc=0xD80Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D69Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 DE D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D69Bu,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD69Du))return 0;c->pc=0xD7DEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 DE D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D69Bu,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD69Du))return 0;c->pc=0xD7DEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 DE D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D69Bu,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD69Du))return 0;c->pc=0xD7DEu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D69Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D69Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D69Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D69Eu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD69Fu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D69Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D69Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6A1u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6A1u:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6A1u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6A4u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6A4u:
    if(m==1u&&x==0u&&e==0u){ /* 30 07 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6A4u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6A6u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD6ADu;}
      if(c->pc!=0xD6A6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6A6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6A6u:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6A6u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6A8u;
      sc_v11_op_lda(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6A8u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 04 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6A8u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6ACu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2204u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6ACu:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6ACu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6ADu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6ADu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6ADu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6AFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6AFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 40 80 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6AFu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6B2u;
      sc_v11_op_lda(r,0x8040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6B2u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 40 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6B2u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6B6u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2040u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6B6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 30 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6B6u,3u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6B9u;
      sc_v11_op_lda(r,0x3080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6B9u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 42 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6B9u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6BDu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2042u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6BDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 80 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6BDu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6C0u;
      sc_v11_op_lda(r,0x8080u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6C0u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 44 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6C0u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6C4u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2044u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6C4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 88 30 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6C4u,3u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6C7u;
      sc_v11_op_lda(r,0x3088u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6C7u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 46 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6C7u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6CBu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2046u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6CBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6CBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6CDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6CDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 5A opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6CDu,2u);r->open_bus=0x5Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6CFu;
      sc_v11_op_lda(r,0x005Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6CFu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 04 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6CFu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6D3u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2204u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6D3u:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6D3u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6D4u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6ECu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6ECu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6EEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6ECu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6EEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6EEu:
    if(m==1u&&x==1u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6EEu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6F1u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6F1u:
    if(m==1u&&x==1u&&e==0u){ /* 30 12 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6F1u,2u);r->open_bus=0x12u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6F3u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD705u;}
      if(c->pc!=0xD6F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6F3u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6F3u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6F5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6F5u:
    if(m==0u&&x==1u&&e==0u){ /* A9 55 55 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6F5u,3u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6F8u;
      sc_v11_op_lda(r,0x5555u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6F8u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 06 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6F8u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD6FCu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2206u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D6FCu:
    if(m==0u&&x==1u&&e==0u){ /* 8F 08 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D6FCu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD700u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2208u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D700u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 0A 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D700u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD704u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Au),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D704u:
    if(m==0u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D704u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD705u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D705u:
    if(m==1u&&x==1u&&e==0u){ /* 85 79 opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D705u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD707u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D707u:
    if(m==1u&&x==1u&&e==0u){ /* 64 7C opcode $64; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D707u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD709u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D709u:
    if(m==1u&&x==1u&&e==0u){ /* 46 79 opcode $46; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D709u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD70Bu;
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x79u),8u,1u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D70Bu:
    if(m==1u&&x==1u&&e==0u){ /* 90 05 opcode $90; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D70Bu,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD70Du;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD712u;}
      if(c->pc!=0xD70Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD70Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D70Du:
    if(m==1u&&x==1u&&e==0u){ /* 20 40 D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D70Du,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD710u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD70Fu))return 0;c->pc=0xD740u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D710u:
    if(m==1u&&x==1u&&e==0u){ /* 80 03 opcode $80; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D710u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD712u;
      if(1){c->pc=0xD715u;}
      if(c->pc!=0xD712u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD712u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D712u:
    if(m==1u&&x==1u&&e==0u){ /* 20 5E D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D712u,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD715u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD714u))return 0;c->pc=0xD75Eu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D715u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D715u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD717u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D715u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD717u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D717u:
    if(m==1u&&x==1u&&e==0u){ /* A5 7C opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D717u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD719u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D719u:
    if(m==1u&&x==1u&&e==0u){ /* 1A opcode $1A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D719u,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD71Au;
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D71Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 7C opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D71Au,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD71Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D71Cu:
    if(m==1u&&x==1u&&e==0u){ /* C9 04 opcode $C9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D71Cu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD71Eu;
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D71Eu:
    if(m==1u&&x==1u&&e==0u){ /* 90 E9 opcode $90; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D71Eu,2u);r->open_bus=0xE9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD720u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD709u;}
      if(c->pc!=0xD720u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD720u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D720u:
    if(m==1u&&x==1u&&e==0u){ /* 46 79 opcode $46; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D720u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD722u;
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x79u),8u,1u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D722u:
    if(m==1u&&x==1u&&e==0u){ /* 90 05 opcode $90; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D722u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD724u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD729u;}
      if(c->pc!=0xD724u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD724u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D724u:
    if(m==1u&&x==1u&&e==0u){ /* 20 7C D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D724u,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD727u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD726u))return 0;c->pc=0xD77Cu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D727u:
    if(m==1u&&x==1u&&e==0u){ /* 80 03 opcode $80; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D727u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD729u;
      if(1){c->pc=0xD72Cu;}
      if(c->pc!=0xD729u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD729u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D729u:
    if(m==1u&&x==1u&&e==0u){ /* 20 9A D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D729u,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD72Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD72Bu))return 0;c->pc=0xD79Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D72Cu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D72Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD72Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D72Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD72Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D72Eu:
    if(m==0u&&x==1u&&e==0u){ /* A9 40 40 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D72Eu,3u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD731u;
      sc_v11_op_lda(r,0x4040u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D731u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 06 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D731u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD735u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2206u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D735u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 08 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D735u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD739u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2208u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D739u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D739u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD73Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D73Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 0A 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D73Bu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD73Fu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Au),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D73Fu:
    if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D73Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD740u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D740u:
    if(m==1u&&x==1u&&e==0u){ /* A5 7C opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D740u,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD742u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D742u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D742u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD743u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D743u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D743u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD744u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D744u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D744u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD745u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D745u:
    if(m==1u&&x==1u&&e==0u){ /* 48 opcode $48; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D745u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD746u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D746u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D746u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD747u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D747u:
    if(m==1u&&x==1u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D747u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD748u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D748u:
    if(m==1u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D748u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD749u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D749u:
    if(m==1u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D749u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD74Au;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D74Au:
    if(m==1u&&x==1u&&e==0u){ /* 69 98 opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D74Au,2u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD74Cu;
      sc_v11_op_adc(r,0x0098u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D74Cu:
    if(m==1u&&x==1u&&e==0u){ /* 85 7F opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D74Cu,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD74Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D74Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 C0 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D74Eu,2u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD750u;
      sc_v11_op_lda(r,0x00C0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D750u:
    if(m==1u&&x==1u&&e==0u){ /* 85 82 opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D750u,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD752u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x82u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D752u:
    if(m==1u&&x==1u&&e==0u){ /* F4 D4 D6 opcode $F4; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D752u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD755u;
      if(!sc_v11_push16(r,0xD6D4u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D755u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 opcode $A0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D755u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD757u;
      sc_v11_op_ldy(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D757u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D757u,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD75Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD759u))return 0;c->pc=0xD7B8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D75Au:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D75Au,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD75Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D75Cu:
    if(m==0u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D75Cu,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD75Du;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D75Du:
    if(m==0u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D75Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD75Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D75Eu:
    if(m==1u&&x==1u&&e==0u){ /* A5 7C opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D75Eu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD760u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D760u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D760u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD761u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D761u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D761u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD762u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D762u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D762u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD763u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D763u:
    if(m==1u&&x==1u&&e==0u){ /* 48 opcode $48; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D763u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD764u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D764u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D764u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD765u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D765u:
    if(m==1u&&x==1u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D765u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD766u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D766u:
    if(m==1u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D766u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD767u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D767u:
    if(m==1u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D767u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD768u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D768u:
    if(m==1u&&x==1u&&e==0u){ /* 69 98 opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D768u,2u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD76Au;
      sc_v11_op_adc(r,0x0098u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D76Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 7F opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D76Au,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD76Cu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D76Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 C0 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D76Cu,2u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD76Eu;
      sc_v11_op_lda(r,0x00C0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D76Eu:
    if(m==1u&&x==1u&&e==0u){ /* 85 82 opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D76Eu,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD770u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x82u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D770u:
    if(m==1u&&x==1u&&e==0u){ /* F4 DA D6 opcode $F4; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D770u,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD773u;
      if(!sc_v11_push16(r,0xD6DAu))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D773u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 opcode $A0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D773u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD775u;
      sc_v11_op_ldy(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D775u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D775u,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD778u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD777u))return 0;c->pc=0xD7B8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D778u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D778u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD77Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D77Au:
    if(m==0u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D77Au,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD77Bu;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D77Bu:
    if(m==0u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D77Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD77Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D77Cu:
    if(m==1u&&x==1u&&e==0u){ /* A5 7C opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D77Cu,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD77Eu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D77Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D77Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD77Fu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D77Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D77Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD780u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D780u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D780u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD781u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D781u:
    if(m==1u&&x==1u&&e==0u){ /* 48 opcode $48; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D781u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD782u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D782u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D782u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD783u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D783u:
    if(m==1u&&x==1u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D783u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD784u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D784u:
    if(m==1u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D784u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD785u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D785u:
    if(m==1u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D785u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD786u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D786u:
    if(m==1u&&x==1u&&e==0u){ /* 69 98 opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D786u,2u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD788u;
      sc_v11_op_adc(r,0x0098u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D788u:
    if(m==1u&&x==1u&&e==0u){ /* 85 7F opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D788u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD78Au;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D78Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 C0 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D78Au,2u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD78Cu;
      sc_v11_op_lda(r,0x00C0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D78Cu:
    if(m==1u&&x==1u&&e==0u){ /* 85 82 opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D78Cu,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD78Eu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x82u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D78Eu:
    if(m==1u&&x==1u&&e==0u){ /* F4 E0 D6 opcode $F4; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D78Eu,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD791u;
      if(!sc_v11_push16(r,0xD6E0u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D791u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 opcode $A0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D791u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD793u;
      sc_v11_op_ldy(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D793u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D793u,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD796u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD795u))return 0;c->pc=0xD7B8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D796u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D796u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD798u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D798u:
    if(m==0u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D798u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD799u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D799u:
    if(m==0u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D799u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD79Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D79Au:
    if(m==1u&&x==1u&&e==0u){ /* A5 7C opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D79Au,2u);r->open_bus=0x7Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD79Cu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D79Cu:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D79Cu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD79Du;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D79Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D79Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD79Eu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D79Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D79Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD79Fu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D79Fu:
    if(m==1u&&x==1u&&e==0u){ /* 48 opcode $48; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D79Fu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7A0u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7A0u:
    if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7A0u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7A1u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7A1u:
    if(m==1u&&x==1u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7A1u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7A2u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7A2u:
    if(m==1u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7A2u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7A3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7A3u:
    if(m==1u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7A3u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7A4u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7A4u:
    if(m==1u&&x==1u&&e==0u){ /* 69 98 opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7A4u,2u);r->open_bus=0x98u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7A6u;
      sc_v11_op_adc(r,0x0098u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7A6u:
    if(m==1u&&x==1u&&e==0u){ /* 85 7F opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7A6u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7A8u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7A8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 C0 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7A8u,2u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7AAu;
      sc_v11_op_lda(r,0x00C0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7AAu:
    if(m==1u&&x==1u&&e==0u){ /* 85 82 opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7AAu,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7ACu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x82u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7ACu:
    if(m==1u&&x==1u&&e==0u){ /* F4 E6 D6 opcode $F4; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7ACu,3u);r->open_bus=0xD6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7AFu;
      if(!sc_v11_push16(r,0xD6E6u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7AFu:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 opcode $A0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7AFu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7B1u;
      sc_v11_op_ldy(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7B1u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 D7 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7B1u,3u);r->open_bus=0xD7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7B4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD7B3u))return 0;c->pc=0xD7B8u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7B4u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7B4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7B6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7B6u:
    if(m==0u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7B6u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7B7u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7B7u:
    if(m==0u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7B7u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7B8u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7B8u:
    if(m==1u&&x==1u&&e==0u){ /* A5 82 opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7B8u,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7BAu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x82u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7BAu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 60 20 7E opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7BAu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7BEu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2060u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7BEu:
    if(m==1u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7BEu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7BFu;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7BFu:
    if(m==1u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7BFu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7C0u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7C0u:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7C0u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7C2u;
      sc_v11_op_adc(r,0x0008u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7C2u:
    if(m==1u&&x==1u&&e==0u){ /* 85 82 opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7C2u,2u);r->open_bus=0x82u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7C4u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x82u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7C4u:
    if(m==1u&&x==1u&&e==0u){ /* A5 7F opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7C4u,2u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7C6u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7C6u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 60 20 7E opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7C6u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7CAu;
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2060u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7CAu:
    if(m==1u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7CAu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7CBu;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7CBu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7CBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7CDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7CDu:
    if(m==0u&&x==1u&&e==0u){ /* B3 03 opcode $B3; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7CDu,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7CFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x03u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7CFu:
    if(m==0u&&x==1u&&e==0u){ /* C8 opcode $C8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7CFu,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7D0u;
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7D0u:
    if(m==0u&&x==1u&&e==0u){ /* C8 opcode $C8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7D0u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7D1u;
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7D1u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 60 20 7E opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7D1u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7D5u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2060u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7D5u:
    if(m==0u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7D5u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7D6u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7D6u:
    if(m==0u&&x==1u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7D6u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7D7u;
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7D7u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7D7u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7D9u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7D9u:
    if(m==1u&&x==1u&&e==0u){ /* C0 06 opcode $C0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7D9u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7DBu;
      sc_v11_op_compare(r,c->y,0x0006u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7DBu:
    if(m==1u&&x==1u&&e==0u){ /* 90 DB opcode $90; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7DBu,2u);r->open_bus=0xDBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7DDu;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD7B8u;}
      if(c->pc!=0xD7DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD7DDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7DDu:
    if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7DDu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7DEu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7DEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7DEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7DEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7DEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7E0u:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7E0u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7E0u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E3u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7E3u:
    if(m==1u&&x==0u&&e==0u){ /* 30 07 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7E3u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E5u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD7ECu;}
      if(c->pc!=0xD7E5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD7E5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 07 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7E3u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E5u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD7ECu;}
      if(c->pc!=0xD7E5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD7E5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7E5u:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7E5u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E7u;
      sc_v11_op_lda(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 55 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7E5u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7E7u;
      sc_v11_op_lda(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7E7u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 0C 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7E7u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7EBu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 0C 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7E7u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7EBu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7EBu:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7EBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7ECu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7EBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7ECu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7ECu:
    if(m==1u&&x==0u&&e==0u){ /* AD 29 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7ECu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7EFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0429u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 29 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7ECu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7EFu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0429u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7EFu:
    if(m==1u&&x==0u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7EFu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F0u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7EFu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F0u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7F0u:
    if(m==1u&&x==0u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F0u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F1u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F0u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F1u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7F1u:
    if(m==1u&&x==0u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F1u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F2u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A opcode $0A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F1u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F2u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7F2u:
    if(m==1u&&x==0u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F2u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F3u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F2u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F3u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7F3u:
    if(m==1u&&x==0u&&e==0u){ /* 69 90 opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F3u,2u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F5u;
      sc_v11_op_adc(r,0x0090u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 90 opcode $69; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F3u,2u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F5u;
      sc_v11_op_adc(r,0x0090u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7F5u:
    if(m==1u&&x==0u&&e==0u){ /* EB opcode $EB; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F5u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F6u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB opcode $EB; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F5u,1u);r->open_bus=0xEBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F6u;
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7F6u:
    if(m==1u&&x==0u&&e==0u){ /* A9 32 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F6u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F8u;
      sc_v11_op_lda(r,0x0032u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 32 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F6u,2u);r->open_bus=0x32u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7F8u;
      sc_v11_op_lda(r,0x0032u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7F8u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7FAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7F8u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7FAu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7FAu:
    if(m==0u&&x==0u&&e==0u){ /* 8F C0 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7FAu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7FEu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E20C0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F C0 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7FAu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD7FEu;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E20C0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D7FEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 F0 39 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7FEu,3u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD801u;
      sc_v11_op_lda(r,0x39F0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 F0 39 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D7FEu,3u);r->open_bus=0x39u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD801u;
      sc_v11_op_lda(r,0x39F0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D801u:
    if(m==0u&&x==0u&&e==0u){ /* 8F C2 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D801u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD805u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E20C2u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F C2 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D801u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD805u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E20C2u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D805u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D805u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD807u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D805u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD807u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D807u:
    if(m==1u&&x==0u&&e==0u){ /* A9 50 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D807u,2u);r->open_bus=0x50u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD809u;
      sc_v11_op_lda(r,0x0050u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 50 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D807u,2u);r->open_bus=0x50u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD809u;
      sc_v11_op_lda(r,0x0050u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D809u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 0C 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D809u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD80Du;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 0C 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D809u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD80Du;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Cu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D80Du:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D80Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD80Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D80Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD80Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D80Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D80Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD810u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D80Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD810u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D80Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD810u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D810u:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D810u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD813u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D810u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD813u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D813u:
    if(m==1u&&x==0u&&e==0u){ /* 30 07 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D813u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD815u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD81Cu;}
      if(c->pc!=0xD815u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD815u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 07 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D813u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD815u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD81Cu;}
      if(c->pc!=0xD815u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD815u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D815u:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D815u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD817u;
      sc_v11_op_lda(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 55 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D815u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD817u;
      sc_v11_op_lda(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D817u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 0E 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D817u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Bu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 0E 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D817u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Bu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D81Bu:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D81Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D81Bu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Cu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D81Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D81Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D81Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD81Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D81Eu:
    if(m==0u&&x==0u&&e==0u){ /* A2 6A D8 opcode $A2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D81Eu,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD821u;
      sc_v11_op_ldx(r,0xD86Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D821u:
    if(m==0u&&x==0u&&e==0u){ /* A0 E0 20 opcode $A0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D821u,3u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD824u;
      sc_v11_op_ldy(r,0x20E0u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D824u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D824u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD827u;
      sc_v11_op_lda(r,0x000Fu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D827u:
    if(m==0u&&x==0u&&e==0u){ /* 8B opcode $8B; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D827u,1u);r->open_bus=0x8Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD828u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D828u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 00 opcode $54; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D828u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD82Bu;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x00u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xD828u;sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D82Bu:
    if(m==0u&&x==0u&&e==0u){ /* AB opcode $AB; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D82Bu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD82Cu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D82Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D82Cu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD82Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D82Eu:
    if(m==1u&&x==1u&&e==0u){ /* AE 2B 04 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D82Eu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD831u;
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x042Bu)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D831u:
    if(m==1u&&x==1u&&e==0u){ /* BD 5A D8 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D831u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD834u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD85Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D834u:
    if(m==1u&&x==1u&&e==0u){ /* 8F E2 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D834u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD838u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E20E2u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D838u:
    if(m==1u&&x==1u&&e==0u){ /* AD 2D 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D838u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Bu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x042Du)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D83Bu:
    if(m==1u&&x==1u&&e==0u){ /* 48 opcode $48; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D83Bu,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Cu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D83Cu:
    if(m==1u&&x==1u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D83Cu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Du;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D83Du:
    if(m==1u&&x==1u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D83Du,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Eu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D83Eu:
    if(m==1u&&x==1u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D83Eu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD83Fu;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D83Fu:
    if(m==1u&&x==1u&&e==0u){ /* 4A opcode $4A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D83Fu,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD840u;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D840u:
    if(m==1u&&x==1u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D840u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD841u;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D841u:
    if(m==1u&&x==1u&&e==0u){ /* BD 5A D8 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D841u,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD844u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD85Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D844u:
    if(m==1u&&x==1u&&e==0u){ /* 8F EA 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D844u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD848u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E20EAu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D848u:
    if(m==1u&&x==1u&&e==0u){ /* 68 opcode $68; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D848u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD849u;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D849u:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D849u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD84Bu;
      sc_v11_op_and(r,0x000Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D84Bu:
    if(m==1u&&x==1u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D84Bu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD84Cu;
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D84Cu:
    if(m==1u&&x==1u&&e==0u){ /* BD 5A D8 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D84Cu,3u);r->open_bus=0xD8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD84Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD85Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D84Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8F EE 20 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D84Fu,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD853u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E20EEu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D853u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D853u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD855u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D855u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 0E 22 7E opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D855u,4u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD859u;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Eu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D859u:
    if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D859u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD85Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D8F4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8F4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8F6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8F4u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8F6u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D8F6u:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8F6u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8F9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8F6u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8F9u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D8F9u:
    if(m==1u&&x==0u&&e==0u){ /* 30 01 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8F9u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8FBu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD8FCu;}
      if(c->pc!=0xD8FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD8FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 01 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8F9u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8FBu;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD8FCu;}
      if(c->pc!=0xD8FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD8FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D8FBu:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8FBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8FCu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8FBu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8FCu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D8FCu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8FCu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8FEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8FCu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD8FEu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D8FEu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D8FEu,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD900u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D900u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0C opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D900u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD903u;
      sc_v11_op_and(r,0x0C00u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D903u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D903u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD905u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD908u;}
      if(c->pc!=0xD905u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD905u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D905u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2A D9 opcode $4C; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D905u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD908u;
      c->pc=0xD92Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D908u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 08 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D908u,3u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD90Bu;
      sc_v11_op_and(r,0x0800u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D90Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0D opcode $F0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D90Bu,2u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD90Du;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD91Au;}
      if(c->pc!=0xD90Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD90Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D90Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 29 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D90Du,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD910u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0429u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D910u:
    if(m==0u&&x==0u&&e==0u){ /* 3A opcode $3A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D910u,1u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD911u;
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D911u:
    if(m==0u&&x==0u&&e==0u){ /* 10 03 opcode $10; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D911u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD913u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD916u;}
      if(c->pc!=0xD913u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD913u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D913u:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D913u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD916u;
      sc_v11_op_lda(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D916u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 29 04 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D916u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD919u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0429u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D919u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D919u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD91Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D91Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 29 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D91Au,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD91Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0429u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D91Du:
    if(m==0u&&x==0u&&e==0u){ /* 1A opcode $1A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D91Du,1u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD91Eu;
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D91Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 opcode $C9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D91Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD921u;
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D921u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 opcode $90; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D921u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD923u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD926u;}
      if(c->pc!=0xD923u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD923u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D923u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D923u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD926u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D926u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 29 04 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D926u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD929u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0429u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D929u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D929u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD92Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D92Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 29 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D92Au,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD92Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0429u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D92Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 opcode $F0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D92Du,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD92Fu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD935u;}
      if(c->pc!=0xD92Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD92Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D92Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 opcode $C9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D92Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD932u;
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D932u:
    if(m==0u&&x==0u&&e==0u){ /* F0 3A opcode $F0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D932u,2u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD934u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD96Eu;}
      if(c->pc!=0xD934u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD934u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D934u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D934u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD935u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D935u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D935u,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD937u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D937u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 03 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D937u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD93Au;
      sc_v11_op_and(r,0x0300u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D93Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D93Au,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD93Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD93Du;}
      if(c->pc!=0xD93Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD93Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D93Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D93Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD93Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D93Du:
    if(m==0u&&x==0u&&e==0u){ /* AE 2F 04 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D93Du,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD940u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x042Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D940u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 02 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D940u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD943u;
      sc_v11_op_and(r,0x0200u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D943u:
    if(m==0u&&x==0u&&e==0u){ /* F0 09 opcode $F0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D943u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD945u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD94Eu;}
      if(c->pc!=0xD945u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD945u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D945u:
    if(m==0u&&x==0u&&e==0u){ /* CA opcode $CA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D945u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD946u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D946u:
    if(m==0u&&x==0u&&e==0u){ /* CA opcode $CA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D946u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD947u;
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D947u:
    if(m==0u&&x==0u&&e==0u){ /* 10 0F opcode $10; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D947u,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD949u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD958u;}
      if(c->pc!=0xD949u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD949u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D949u:
    if(m==0u&&x==0u&&e==0u){ /* A2 70 00 opcode $A2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D949u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD94Cu;
      sc_v11_op_ldx(r,0x0070u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D94Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 0A opcode $80; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D94Cu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD94Eu;
      if(1){c->pc=0xD958u;}
      if(c->pc!=0xD94Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD94Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D94Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D94Eu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD94Fu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D94Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D94Fu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD950u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D950u:
    if(m==0u&&x==0u&&e==0u){ /* E0 71 00 opcode $E0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D950u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD953u;
      sc_v11_op_compare(r,c->x,0x0071u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D953u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 opcode $90; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D953u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD955u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD958u;}
      if(c->pc!=0xD955u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD955u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D955u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 opcode $A2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D955u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD958u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D958u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 2F 04 opcode $8E; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D958u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD95Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x042Fu),c->x);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D95Bu:
    if(m==0u&&x==0u&&e==0u){ /* BD 80 D9 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D95Bu,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD95Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xD980u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D95Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D95Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD961u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D961u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 2B 04 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D961u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD964u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x042Bu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D964u:
    if(m==0u&&x==0u&&e==0u){ /* BD 81 D9 opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D964u,3u);r->open_bus=0xD9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD967u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xD981u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D967u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D967u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD96Au;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D96Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 2D 04 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D96Au,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD96Du;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x042Du),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D96Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D96Du,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD96Eu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D96Eu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D96Eu,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD970u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D970u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 03 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D970u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD973u;
      sc_v11_op_and(r,0x0300u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D973u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D973u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD975u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD976u;}
      if(c->pc!=0xD975u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD975u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D975u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D975u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD976u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D976u:
    if(m==0u&&x==0u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D976u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD979u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0425u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D979u:
    if(m==0u&&x==0u&&e==0u){ /* 49 10 00 opcode $49; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D979u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD97Cu;
      sc_v11_op_eor(r,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D97Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 25 04 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D97Cu,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD97Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0425u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D97Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D97Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD980u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D9F2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9F2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9F2u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F4u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D9F4u:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9F4u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9F4u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F7u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D9F7u:
    if(m==1u&&x==0u&&e==0u){ /* 30 01 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9F7u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F9u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD9FAu;}
      if(c->pc!=0xD9F9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9F9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 01 opcode $30; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9F7u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9F9u;
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD9FAu;}
      if(c->pc!=0xD9F9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9F9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D9F9u:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9F9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9FAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9F9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9FAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D9FAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9FAu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9FCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9FAu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9FCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D9FCu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 opcode $A5; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9FCu,2u);r->open_bus=0xC9u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xD9FEu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00D9FEu:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 80 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00D9FEu,3u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA01u;
      sc_v11_op_and(r,0x8000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA01u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA01u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA03u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDA04u;}
      if(c->pc!=0xDA03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA03u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA03u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA04u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA04u:
    if(m==0u&&x==0u&&e==0u){ /* AD 29 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA04u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA07u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0429u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA07u:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 opcode $F0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA07u,2u);r->open_bus=0x14u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA09u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDA1Du;}
      if(c->pc!=0xDA09u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA09u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA09u:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 opcode $C9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA09u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA0Cu;
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA0Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 1A opcode $F0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA0Cu,2u);r->open_bus=0x1Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA0Eu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDA28u;}
      if(c->pc!=0xDA0Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA0Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 3A opcode $3A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA0Eu,1u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA0Fu;
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA0Fu:
    if(m==0u&&x==0u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA0Fu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA10u;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA10u:
    if(m==0u&&x==0u&&e==0u){ /* BD 50 DA opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA10u,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA13u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xDA50u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA13u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA13u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA16u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA16u:
    if(m==0u&&x==0u&&e==0u){ /* 4D 25 04 opcode $4D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA16u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA19u;
      sc_v11_op_eor(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0425u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA19u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 25 04 opcode $8D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA19u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA1Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0425u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA1Cu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA1Du;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA1Du:
    if(m==0u&&x==0u&&e==0u){ /* AE 2B 04 opcode $AE; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA1Du,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA20u;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x042Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA20u:
    if(m==0u&&x==0u&&e==0u){ /* AD 2D 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA20u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA23u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x042Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA23u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA23u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA25u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA25u:
    if(m==1u&&x==0u&&e==0u){ /* 95 03 opcode $95; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA25u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA27u;
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA27u:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA27u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA28u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA28u:
    if(m==0u&&x==0u&&e==0u){ /* 3A opcode $3A; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA28u,1u);r->open_bus=0x3Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA29u;
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA29u:
    if(m==0u&&x==0u&&e==0u){ /* AA opcode $AA; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA29u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA2Au;
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA2Au:
    if(m==0u&&x==0u&&e==0u){ /* BD 50 DA opcode $BD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA2Au,3u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA2Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xDA50u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA2Du:
    if(m==0u&&x==0u&&e==0u){ /* 2D 25 04 opcode $2D; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA2Du,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA30u;
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0425u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA30u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0E opcode $F0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA30u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA32u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDA40u;}
      if(c->pc!=0xDA32u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA32u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA32u:
    if(m==0u&&x==0u&&e==0u){ /* AD 25 04 opcode $AD; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA32u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA35u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0425u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA35u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA35u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA37u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA37u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 09 00 70 opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA37u,4u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA3Bu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x700009u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA3Bu:
    if(m==1u&&x==0u&&e==0u){ /* 22 4F E5 03 opcode $22; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA3Bu,4u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA3Fu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA3Eu))return 0;
      c->pbr=0x03u;c->pc=0xE54Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA3Fu:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA3Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA40u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA40u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 25 04 opcode $9C; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA40u,3u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA43u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0425u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA43u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 opcode $E2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA43u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA45u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA45u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 opcode $A9; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA45u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA47u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA47u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 09 00 70 opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA47u,4u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA4Bu;
      sc_v11_bus_write8(r,sc_v11_ea_long(0x700009u),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA4Bu:
    if(m==1u&&x==0u&&e==0u){ /* 22 4F E5 03 opcode $22; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA4Bu,4u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA4Fu;
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA4Eu))return 0;
      c->pbr=0x03u;c->pc=0xE54Fu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00DA4Fu:
    if(m==1u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x00DA4Fu,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xDA50u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E484u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E484u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE486u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E486u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 opcode $A2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E486u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE489u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E489u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 00 70 opcode $BF; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E489u,4u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE48Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x700000u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E48Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F F0 7F 70 opcode $9F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E48Du,4u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE491u;
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x707FF0u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E491u:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E491u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE492u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E492u:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E492u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE493u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E493u:
    if(m==0u&&x==0u&&e==0u){ /* E0 10 00 opcode $E0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E493u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE496u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E496u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E496u,2u);r->open_bus=0xF1u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE498u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE489u;}
      if(c->pc!=0xE498u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE498u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E498u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E498u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE499u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E54Fu:
    if(m==1u&&x==0u&&e==0u){ /* 20 53 E5 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E54Fu,3u);r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE552u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE551u))return 0;c->pc=0xE553u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E552u:
    if(m==1u&&x==0u&&e==0u){ /* 6B opcode $6B; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E552u,1u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE553u;
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E553u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 opcode $C2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E553u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE555u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E555u:
    if(m==0u&&x==0u&&e==0u){ /* 64 46 opcode $64; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E555u,2u);r->open_bus=0x46u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE557u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x46u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E557u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 opcode $A2; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E557u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE55Au;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E55Au:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 00 70 opcode $BF; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E55Au,4u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE55Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x700000u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E55Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 opcode $29; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E55Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE561u;
      sc_v11_op_and(r,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E561u:
    if(m==0u&&x==0u&&e==0u){ /* 18 opcode $18; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E561u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE562u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E562u:
    if(m==0u&&x==0u&&e==0u){ /* 65 46 opcode $65; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E562u,2u);r->open_bus=0x46u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE564u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x46u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E564u:
    if(m==0u&&x==0u&&e==0u){ /* 85 46 opcode $85; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E564u,2u);r->open_bus=0x46u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE566u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x46u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E566u:
    if(m==0u&&x==0u&&e==0u){ /* E8 opcode $E8; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E566u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE567u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E567u:
    if(m==0u&&x==0u&&e==0u){ /* E0 0E 00 opcode $E0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E567u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE56Au;
      sc_v11_op_compare(r,c->x,0x000Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E56Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 EE opcode $D0; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E56Au,2u);r->open_bus=0xEEu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE56Cu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE55Au;}
      if(c->pc!=0xE56Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE56Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E56Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0E 00 70 opcode $8F; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E56Cu,4u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE570u;
      sc_v11_bus_write16(r,sc_v11_ea_long(0x70000Eu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E570u:
    if(m==0u&&x==0u&&e==0u){ /* 20 84 E4 opcode $20; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E570u,3u);r->open_bus=0xE4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE573u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE572u))return 0;c->pc=0xE484u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03E573u:
    if(m==0u&&x==0u&&e==0u){ /* 60 opcode $60; Version 26 post-caller loop route */
      sc_v11_scheduler_code_access(r,0x03E573u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE574u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return sc_v34_static_cpu_step(r,address,m,x,e);
}
