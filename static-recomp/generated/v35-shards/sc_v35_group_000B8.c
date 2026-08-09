/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000B8(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02E220u:
    if(m==0u&&x==0u&&e==0u){ /* 09 2D 09 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E220u,3u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE223u;
      sc_v11_op_ora(r,0x092Du,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 09 2D ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E220u,2u);r->open_bus=0x2Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE222u;
      sc_v11_op_ora(r,0x002Du,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E222u:
    if(m==1u&&x==0u&&e==0u){ /* 09 52 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E222u,2u);r->open_bus=0x52u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE224u;
      sc_v11_op_ora(r,0x0052u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E224u:
    if(m==1u&&x==0u&&e==0u){ /* 09 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E224u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE226u;
      sc_v11_op_ora(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E226u:
    if(m==1u&&x==0u&&e==0u){ /* 09 5C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E226u,2u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE228u;
      sc_v11_op_ora(r,0x005Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E228u:
    if(m==1u&&x==0u&&e==0u){ /* 09 62 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E228u,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE22Au;
      sc_v11_op_ora(r,0x0062u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E22Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 70 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E22Au,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE22Cu;
      sc_v11_op_ora(r,0x0070u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E22Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 71 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E22Cu,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE22Eu;
      sc_v11_op_ora(r,0x0071u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E22Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 72 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E22Eu,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE230u;
      sc_v11_op_ora(r,0x0072u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E230u:
    if(m==1u&&x==0u&&e==0u){ /* 09 2C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E230u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE232u;
      sc_v11_op_ora(r,0x002Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E232u:
    if(m==1u&&x==0u&&e==0u){ /* 09 2E ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E232u,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE234u;
      sc_v11_op_ora(r,0x002Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E234u:
    if(m==1u&&x==0u&&e==0u){ /* 09 55 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E234u,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE236u;
      sc_v11_op_ora(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E236u:
    if(m==1u&&x==0u&&e==0u){ /* 09 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E236u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE238u;
      sc_v11_op_ora(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E238u:
    if(m==1u&&x==0u&&e==0u){ /* 09 3E ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E238u,2u);r->open_bus=0x3Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE23Au;
      sc_v11_op_ora(r,0x003Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E23Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 65 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E23Au,2u);r->open_bus=0x65u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE23Cu;
      sc_v11_op_ora(r,0x0065u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E23Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 70 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E23Cu,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE23Eu;
      sc_v11_op_ora(r,0x0070u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E23Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 71 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E23Eu,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE240u;
      sc_v11_op_ora(r,0x0071u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E240u:
    if(m==1u&&x==0u&&e==0u){ /* 09 72 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E240u,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE242u;
      sc_v11_op_ora(r,0x0072u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E242u:
    if(m==1u&&x==0u&&e==0u){ /* 09 2C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E242u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE244u;
      sc_v11_op_ora(r,0x002Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E244u:
    if(m==1u&&x==0u&&e==0u){ /* 09 2F ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E244u,2u);r->open_bus=0x2Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE246u;
      sc_v11_op_ora(r,0x002Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E246u:
    if(m==1u&&x==0u&&e==0u){ /* 09 58 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E246u,2u);r->open_bus=0x58u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE248u;
      sc_v11_op_ora(r,0x0058u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E248u:
    if(m==1u&&x==0u&&e==0u){ /* 09 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E248u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE24Au;
      sc_v11_op_ora(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E24Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 3F ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E24Au,2u);r->open_bus=0x3Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE24Cu;
      sc_v11_op_ora(r,0x003Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E24Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E24Cu,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE24Eu;
      sc_v11_op_ora(r,0x0068u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E24Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 70 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E24Eu,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE250u;
      sc_v11_op_ora(r,0x0070u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E250u:
    if(m==1u&&x==0u&&e==0u){ /* 09 71 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E250u,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE252u;
      sc_v11_op_ora(r,0x0071u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E252u:
    if(m==1u&&x==0u&&e==0u){ /* 09 72 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E252u,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE254u;
      sc_v11_op_ora(r,0x0072u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E254u:
    if(m==1u&&x==0u&&e==0u){ /* 09 2C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E254u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE256u;
      sc_v11_op_ora(r,0x002Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E256u:
    if(m==1u&&x==0u&&e==0u){ /* 09 4C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E256u,2u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE258u;
      sc_v11_op_ora(r,0x004Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E258u:
    if(m==1u&&x==0u&&e==0u){ /* 09 5B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E258u,2u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE25Au;
      sc_v11_op_ora(r,0x005Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E25Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E25Au,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE25Cu;
      sc_v11_op_ora(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E25Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 5C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E25Cu,2u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE25Eu;
      sc_v11_op_ora(r,0x005Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E25Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E25Eu,2u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE260u;
      sc_v11_op_ora(r,0x006Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E260u:
    if(m==0u&&x==0u&&e==0u){ /* 09 70 09 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E260u,3u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE263u;
      sc_v11_op_ora(r,0x0970u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    else if(m==1u&&x==0u&&e==0u){ /* 09 70 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E260u,2u);r->open_bus=0x70u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE262u;
      sc_v11_op_ora(r,0x0070u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E262u:
    if(m==1u&&x==0u&&e==0u){ /* 09 71 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E262u,2u);r->open_bus=0x71u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE264u;
      sc_v11_op_ora(r,0x0071u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E264u:
    if(m==1u&&x==0u&&e==0u){ /* 09 72 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E264u,2u);r->open_bus=0x72u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE266u;
      sc_v11_op_ora(r,0x0072u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E266u:
    if(m==1u&&x==0u&&e==0u){ /* 09 2C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E266u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE268u;
      sc_v11_op_ora(r,0x002Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E268u:
    if(m==1u&&x==0u&&e==0u){ /* 09 2D ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E268u,2u);r->open_bus=0x2Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE26Au;
      sc_v11_op_ora(r,0x002Du,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E26Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 52 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E26Au,2u);r->open_bus=0x52u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE26Cu;
      sc_v11_op_ora(r,0x0052u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E26Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E26Cu,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE26Eu;
      sc_v11_op_ora(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E26Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 5C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E26Eu,2u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE270u;
      sc_v11_op_ora(r,0x005Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E270u:
    if(m==1u&&x==0u&&e==0u){ /* 09 62 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E270u,2u);r->open_bus=0x62u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE272u;
      sc_v11_op_ora(r,0x0062u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E272u:
    if(m==1u&&x==0u&&e==0u){ /* 09 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E272u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE274u;
      sc_v11_op_ora(r,0x0079u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E274u:
    if(m==1u&&x==0u&&e==0u){ /* 09 7A ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E274u,2u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE276u;
      sc_v11_op_ora(r,0x007Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E276u:
    if(m==1u&&x==0u&&e==0u){ /* 09 7B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E276u,2u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE278u;
      sc_v11_op_ora(r,0x007Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E278u:
    if(m==1u&&x==0u&&e==0u){ /* 09 2C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E278u,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE27Au;
      sc_v11_op_ora(r,0x002Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E27Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 2E ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E27Au,2u);r->open_bus=0x2Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE27Cu;
      sc_v11_op_ora(r,0x002Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E27Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 55 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E27Cu,2u);r->open_bus=0x55u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE27Eu;
      sc_v11_op_ora(r,0x0055u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E27Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E27Eu,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE280u;
      sc_v11_op_ora(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E280u:
    if(m==1u&&x==0u&&e==0u){ /* 09 3E ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E280u,2u);r->open_bus=0x3Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE282u;
      sc_v11_op_ora(r,0x003Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E282u:
    if(m==1u&&x==0u&&e==0u){ /* 09 65 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E282u,2u);r->open_bus=0x65u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE284u;
      sc_v11_op_ora(r,0x0065u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E284u:
    if(m==1u&&x==0u&&e==0u){ /* 09 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E284u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE286u;
      sc_v11_op_ora(r,0x0079u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E286u:
    if(m==1u&&x==0u&&e==0u){ /* 09 7A ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E286u,2u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE288u;
      sc_v11_op_ora(r,0x007Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E288u:
    if(m==1u&&x==0u&&e==0u){ /* 09 7B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E288u,2u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE28Au;
      sc_v11_op_ora(r,0x007Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E28Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 2C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E28Au,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE28Cu;
      sc_v11_op_ora(r,0x002Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E28Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 2F ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E28Cu,2u);r->open_bus=0x2Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE28Eu;
      sc_v11_op_ora(r,0x002Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E28Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 58 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E28Eu,2u);r->open_bus=0x58u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE290u;
      sc_v11_op_ora(r,0x0058u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E290u:
    if(m==1u&&x==0u&&e==0u){ /* 09 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E290u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE292u;
      sc_v11_op_ora(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E292u:
    if(m==1u&&x==0u&&e==0u){ /* 09 3F ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E292u,2u);r->open_bus=0x3Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE294u;
      sc_v11_op_ora(r,0x003Fu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E294u:
    if(m==1u&&x==0u&&e==0u){ /* 09 68 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E294u,2u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE296u;
      sc_v11_op_ora(r,0x0068u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E296u:
    if(m==1u&&x==0u&&e==0u){ /* 09 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E296u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE298u;
      sc_v11_op_ora(r,0x0079u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E298u:
    if(m==1u&&x==0u&&e==0u){ /* 09 7A ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E298u,2u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE29Au;
      sc_v11_op_ora(r,0x007Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E29Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 7B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E29Au,2u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE29Cu;
      sc_v11_op_ora(r,0x007Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E29Cu:
    if(m==1u&&x==0u&&e==0u){ /* 09 2C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E29Cu,2u);r->open_bus=0x2Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE29Eu;
      sc_v11_op_ora(r,0x002Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E29Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 4C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E29Eu,2u);r->open_bus=0x4Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2A0u;
      sc_v11_op_ora(r,0x004Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E2A0u:
    if(m==1u&&x==0u&&e==0u){ /* 09 5B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E2A0u,2u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2A2u;
      sc_v11_op_ora(r,0x005Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E2A2u:
    if(m==1u&&x==0u&&e==0u){ /* 09 3C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E2A2u,2u);r->open_bus=0x3Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2A4u;
      sc_v11_op_ora(r,0x003Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E2A4u:
    if(m==1u&&x==0u&&e==0u){ /* 09 5C ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E2A4u,2u);r->open_bus=0x5Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2A6u;
      sc_v11_op_ora(r,0x005Cu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E2A6u:
    if(m==1u&&x==0u&&e==0u){ /* 09 6B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E2A6u,2u);r->open_bus=0x6Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2A8u;
      sc_v11_op_ora(r,0x006Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E2A8u:
    if(m==1u&&x==0u&&e==0u){ /* 09 79 ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E2A8u,2u);r->open_bus=0x79u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2AAu;
      sc_v11_op_ora(r,0x0079u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E2AAu:
    if(m==1u&&x==0u&&e==0u){ /* 09 7A ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E2AAu,2u);r->open_bus=0x7Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2ACu;
      sc_v11_op_ora(r,0x007Au,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E2ACu:
    if(m==1u&&x==0u&&e==0u){ /* 09 7B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E2ACu,2u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2AEu;
      sc_v11_op_ora(r,0x007Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x02E2AEu:
    if(m==1u&&x==0u&&e==0u){ /* 09 4B ; generated town route */
      sc_v11_scheduler_code_access(r,0x02E2AEu,2u);r->open_bus=0x4Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xE2B0u;
      sc_v11_op_ora(r,0x004Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
