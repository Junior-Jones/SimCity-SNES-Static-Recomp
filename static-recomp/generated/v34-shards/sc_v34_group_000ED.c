/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000ED(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03B42Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B42Fu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB431u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B431u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B431u,1u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB432u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B432u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B432u,1u);r->open_bus=0x48u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB433u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B433u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B433u,1u);r->open_bus=0x7Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB434u;
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B434u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B434u,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB435u;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B435u:
    if(m==0u&&x==0u&&e==0u){ /* E9 10 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B435u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB438u;
      sc_v11_op_sbc(r,0x0010u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B438u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B438u,1u);r->open_bus=0x5Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB439u;
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B439u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B439u,1u);r->open_bus=0x68u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB43Au;
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B43Au:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0D Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B43Au,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB43Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFBu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B43Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B43Du,2u);r->open_bus=0x11u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB43Fu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB450u;}
      if(c->pc!=0xB43Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB43Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B43Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 AA B4 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B43Fu,3u);r->open_bus=0xB4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB442u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB441u))return 0;c->pc=0xB4AAu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B442u:
    if(m==0u&&x==0u&&e==0u){ /* 20 62 B5 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B442u,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB445u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB444u))return 0;c->pc=0xB562u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B445u:
    if(m==0u&&x==0u&&e==0u){ /* 20 73 B5 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B445u,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB448u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB447u))return 0;c->pc=0xB573u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B448u:
    if(m==0u&&x==0u&&e==0u){ /* 20 08 B7 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B448u,3u);r->open_bus=0xB7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB44Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB44Au))return 0;c->pc=0xB708u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B44Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 24 B8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B44Bu,3u);r->open_bus=0xB8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB44Eu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB44Du))return 0;c->pc=0xB824u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B44Eu:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B44Eu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB450u;
      if(1){c->pc=0xB456u;}
      if(c->pc!=0xB450u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB450u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B456u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B456u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB458u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B458u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B458u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB45Bu;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B45Bu:
    if(m==1u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B45Bu,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB45Cu;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B45Cu:
    if(m==1u&&x==0u&&e==0u){ /* BD F7 0D Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B45Cu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB45Fu;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0DF7u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B45Fu:
    if(m==1u&&x==0u&&e==0u){ /* 99 A1 0D Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B45Fu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB462u;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0DA1u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B462u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B462u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB463u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B463u:
    if(m==1u&&x==0u&&e==0u){ /* BD F3 0D Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B463u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB466u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0DF3u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B466u:
    if(m==1u&&x==0u&&e==0u){ /* 99 A1 0D Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B466u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB469u;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0DA1u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B469u:
    if(m==1u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B469u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB46Au;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B46Au:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B46Au,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB46Bu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B46Bu:
    if(m==1u&&x==0u&&e==0u){ /* E0 04 00 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B46Bu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB46Eu;
      sc_v11_op_compare(r,c->x,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B46Eu:
    if(m==1u&&x==0u&&e==0u){ /* D0 EC Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B46Eu,2u);r->open_bus=0xECu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB470u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB45Cu;}
      if(c->pc!=0xB470u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB470u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B470u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B470u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB472u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B472u:
    if(m==1u&&x==0u&&e==0u){ /* 8D EB 0C Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B472u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB475u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0CEBu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B475u:
    if(m==1u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B475u,1u);r->open_bus=0x2Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB476u;
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B476u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3272; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B476u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB477u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B477u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B477u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB479u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B479u:
    if(m==0u&&x==0u&&e==0u){ /* 9C DF 0D Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B479u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB47Cu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DDFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B47Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C E1 0D Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B47Cu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB47Fu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE1u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B47Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C E3 0D Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B47Fu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB482u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE3u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B482u:
    if(m==0u&&x==0u&&e==0u){ /* 9C E7 0D Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B482u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB485u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE7u),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B485u:
    if(m==0u&&x==0u&&e==0u){ /* A9 F4 01 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B485u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB488u;
      sc_v11_op_lda(r,0x01F4u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B488u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 0D Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B488u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB48Bu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B48Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C EF 0D Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B48Bu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB48Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B48Eu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B48Eu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB491u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B491u:
    if(m==0u&&x==0u&&e==0u){ /* 9E F1 0B Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B491u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB494u;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0BF1u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B494u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B494u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB495u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B495u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B495u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB496u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B496u:
    if(m==0u&&x==0u&&e==0u){ /* E0 10 00 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B496u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB499u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B499u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F6 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B499u,2u);r->open_bus=0xF6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB49Bu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB491u;}
      if(c->pc!=0xB49Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB49Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B49Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B49Bu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB49Du;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B49Du:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B49Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A0u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A0u:
    if(m==1u&&x==0u&&e==0u){ /* 9E F3 0D Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4A0u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A3u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0DF3u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A3u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4A3u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A4u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A4u:
    if(m==1u&&x==0u&&e==0u){ /* E0 04 00 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4A4u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A7u;
      sc_v11_op_compare(r,c->x,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A7u:
    if(m==1u&&x==0u&&e==0u){ /* D0 F7 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4A7u,2u);r->open_bus=0xF7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4A9u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB4A0u;}
      if(c->pc!=0xB4A9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4A9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4A9u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4A9u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4AAu;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4AAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4AAu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4ACu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4ACu:
    if(m==0u&&x==0u&&e==0u){ /* AD 15 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4ACu,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4AFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4AFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4AFu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4B1u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4B1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4B1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4B4u;
      sc_v11_op_lda(r,0x0005u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4B4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4B4u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4B6u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4B6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4B6u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4B9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4B8u))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4BCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 17 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4BCu,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4BFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E17u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4BFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4BFu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4C1u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4C1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4C1u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4C4u;
      sc_v11_op_lda(r,0x000Au,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4C4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4C4u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4C6u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4C6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4C6u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4C9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4C8u))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4CCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 B5 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4CCu,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4CFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4CEu))return 0;c->pc=0xB554u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4CFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4CFu,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4D2u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E03u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4D2u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4D2u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4D4u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4D4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 90 01 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4D4u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4D7u;
      sc_v11_op_lda(r,0x0190u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4D7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4D7u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4D9u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4D9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4D9u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4DCu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4DBu))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4DFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 B5 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4DFu,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4E2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4E1u))return 0;c->pc=0xB554u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4E2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4E2u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4E5u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E07u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4E5u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4E5u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4E6u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4E6u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 09 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4E6u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4E9u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E09u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4E9u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4E9u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4EBu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4EBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 E8 03 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4EBu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4EEu;
      sc_v11_op_lda(r,0x03E8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4EEu:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4EEu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4F0u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4F0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4F0u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4F3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4F2u))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4F6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 B5 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4F6u,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4F9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4F8u))return 0;c->pc=0xB554u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4F9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4F9u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4FCu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Bu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4FCu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4FCu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB4FDu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B4FDu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 0D 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B4FDu,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB500u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Du)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B500u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B500u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB502u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B502u:
    if(m==0u&&x==0u&&e==0u){ /* A9 B8 0B Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B502u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB505u;
      sc_v11_op_lda(r,0x0BB8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B505u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B505u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB507u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B507u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B507u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB50Au;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB509u))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B50Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 B5 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B50Du,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB510u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB50Fu))return 0;c->pc=0xB554u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B510u:
    if(m==0u&&x==0u&&e==0u){ /* AD 11 0E Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B510u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB513u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E11u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B513u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B513u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB515u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B515u:
    if(m==0u&&x==0u&&e==0u){ /* A9 88 13 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B515u,3u);r->open_bus=0x13u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB518u;
      sc_v11_op_lda(r,0x1388u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B518u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B518u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB51Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B51Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B51Au,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB51Du;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB51Cu))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B520u:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 B5 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B520u,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB523u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB522u))return 0;c->pc=0xB554u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B523u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0E Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B523u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB526u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B526u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B526u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB528u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B528u:
    if(m==0u&&x==0u&&e==0u){ /* A9 70 17 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B528u,3u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB52Bu;
      sc_v11_op_lda(r,0x1770u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B52Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B52Bu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB52Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B52Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B52Du,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB530u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB52Fu))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B533u:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 B5 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B533u,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB536u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB535u))return 0;c->pc=0xB554u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B536u:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 0E Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B536u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB539u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E13u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B539u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B539u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB53Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B53Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 27 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B53Bu,3u);r->open_bus=0x27u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB53Eu;
      sc_v11_op_lda(r,0x2710u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B53Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B53Eu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB540u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B540u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B540u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB543u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB542u))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B546u:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 B5 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B546u,3u);r->open_bus=0xB5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB549u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB548u))return 0;c->pc=0xB554u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B549u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B549u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB54Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B54Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D E7 0D Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B54Bu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB54Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE7u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B54Eu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0E Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B54Eu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB550u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B550u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E9 0D Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B550u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB553u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE9u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B553u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B553u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB554u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B554u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B554u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB556u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B556u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B556u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB557u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B557u:
    if(m==0u&&x==0u&&e==0u){ /* 65 08 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B557u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB559u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B559u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0C Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B559u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB55Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B55Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B55Bu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB55Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B55Du:
    if(m==0u&&x==0u&&e==0u){ /* 65 0A Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B55Du,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB55Fu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B55Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 0E Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B55Fu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB561u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B561u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3218; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B561u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB562u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B562u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B562u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB564u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B564u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B564u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB567u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B567u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CD 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B567u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB56Au;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B56Au:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B56Au,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB56Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B56Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B56Du,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB570u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCFu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B570u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 96 81 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B570u,3u);r->open_bus=0x81u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB573u;
      c->pc=0x8196u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B573u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B573u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB575u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B575u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B575u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB578u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B578u:
    if(m==0u&&x==0u&&e==0u){ /* 9E D1 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B578u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB57Bu;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0BD1u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B57Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B57Bu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB57Cu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B57Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B57Cu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB57Du;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B57Du:
    if(m==0u&&x==0u&&e==0u){ /* E0 10 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B57Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB580u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B580u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F6 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B580u,2u);r->open_bus=0xF6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB582u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB578u;}
      if(c->pc!=0xB582u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB582u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B582u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0C Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B582u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB585u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C01u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B585u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D1 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B585u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB588u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BD1u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B588u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0C Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B588u,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB58Bu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C07u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B58Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B58Bu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB58Eu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BD3u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B58Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 0C Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B58Eu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB591u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C03u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B591u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B591u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB593u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B593u:
    if(m==0u&&x==0u&&e==0u){ /* A9 B3 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B593u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB596u;
      sc_v11_op_lda(r,0x00B3u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B596u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B596u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB598u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B598u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B598u,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB59Bu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB59Au))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B59Eu:
    if(m==0u&&x==0u&&e==0u){ /* A5 01 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B59Eu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5A0u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x01u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5A0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5A0u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5A3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BD5u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5A3u:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 0D Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5A3u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5A6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5A6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5A6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5A7u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5A7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5A7u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5A9u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5A9u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5A9u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5AAu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5AAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5AAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5ABu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5ABu:
    if(m==0u&&x==0u&&e==0u){ /* 65 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5ABu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5ADu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5ADu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D7 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5ADu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5B0u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BD7u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5B0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 6A B6 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5B0u,3u);r->open_bus=0xB6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5B3u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5B2u))return 0;c->pc=0xB66Au;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5B3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D9 0B Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5B3u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5B6u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BD9u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5B6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 BD B6 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5B6u,3u);r->open_bus=0xB6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5B9u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5B8u))return 0;c->pc=0xB6BDu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5B9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DB 0B Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5B9u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5BCu;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BDBu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5BCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F7 B6 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5BCu,3u);r->open_bus=0xB6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5BFu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5BEu))return 0;c->pc=0xB6F7u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5BFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D DD 0B Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5BFu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5C2u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BDDu),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5C2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 27 B6 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5C2u,3u);r->open_bus=0xB6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5C5u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5C4u))return 0;c->pc=0xB627u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5C5u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5C5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5C8u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5C8u:
    if(m==0u&&x==0u&&e==0u){ /* 9E E1 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5C8u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5CBu;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0BE1u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5CBu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5CBu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5CCu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5CCu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5CCu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5CDu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5CDu:
    if(m==0u&&x==0u&&e==0u){ /* E0 10 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5CDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5D0u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5D0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F6 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5D0u,2u);r->open_bus=0xF6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5D2u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5C8u;}
      if(c->pc!=0xB5D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5D2u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5D2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5D5u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5D5u:
    if(m==0u&&x==0u&&e==0u){ /* 64 0C Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5D5u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5D7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5D7u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5D7u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5DAu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5DAu:
    if(m==0u&&x==0u&&e==0u){ /* BD F1 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5DAu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5DDu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0BF1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5DDu:
    if(m==0u&&x==0u&&e==0u){ /* C5 0C Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5DDu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5DFu;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5DFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0C Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5DFu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5E1u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB5EDu;}
      if(c->pc!=0xB5E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5E1u:
    if(m==0u&&x==0u&&e==0u){ /* BD E1 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5E1u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5E4u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0BE1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5E4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5E4u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5E6u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5EDu;}
      if(c->pc!=0xB5E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5E6u:
    if(m==0u&&x==0u&&e==0u){ /* 86 08 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5E6u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5E8u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5E8u:
    if(m==0u&&x==0u&&e==0u){ /* BD F1 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5E8u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5EBu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0BF1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5EBu:
    if(m==0u&&x==0u&&e==0u){ /* 85 0C Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5EBu,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5EDu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5EDu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5EDu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5EEu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5EEu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5EEu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5EFu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5EFu:
    if(m==0u&&x==0u&&e==0u){ /* E0 0E 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5EFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5F2u;
      sc_v11_op_compare(r,c->x,0x000Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5F2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 E6 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5F2u,2u);r->open_bus=0xE6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5F4u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5DAu;}
      if(c->pc!=0xB5F4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5F4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5F4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5F4u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5F6u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5F6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 17 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5F6u,2u);r->open_bus=0x17u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5F8u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB60Fu;}
      if(c->pc!=0xB5F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5F8u:
    if(m==0u&&x==0u&&e==0u){ /* A6 08 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5F8u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5FAu;
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5FAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5FAu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB5FDu;
      sc_v11_op_lda(r,0x0001u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B5FDu:
    if(m==0u&&x==0u&&e==0u){ /* 9D E1 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B5FDu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB600u;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0BE1u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B600u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B600u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB602u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B602u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0C Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B602u,2u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB604u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B604u:
    if(m==1u&&x==0u&&e==0u){ /* 99 F7 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B604u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB607u;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0DF7u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B607u:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B607u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB609u;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B609u:
    if(m==1u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B609u,1u);r->open_bus=0x4Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB60Au;
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B60Au:
    if(m==1u&&x==0u&&e==0u){ /* 99 F3 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B60Au,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB60Du;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0DF3u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B60Du:
    if(m==1u&&x==0u&&e==0u){ /* 80 0F Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B60Du,2u);r->open_bus=0x0Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB60Fu;
      if(1){c->pc=0xB61Eu;}
      if(c->pc!=0xB60Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB60Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B60Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C DF 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B60Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB612u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BDFu),0u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B612u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B612u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB614u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B614u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B614u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB616u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B616u:
    if(m==1u&&x==0u&&e==0u){ /* 99 F7 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B616u,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB619u;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0DF7u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B619u:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B619u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB61Bu;
      sc_v11_op_lda(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B61Bu:
    if(m==1u&&x==0u&&e==0u){ /* 99 F3 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B61Bu,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB61Eu;
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0DF3u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B61Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B61Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB620u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B620u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B620u,1u);r->open_bus=0xC8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB621u;
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B621u:
    if(m==0u&&x==0u&&e==0u){ /* C0 04 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B621u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB624u;
      sc_v11_op_compare(r,c->y,0x0004u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B624u:
    if(m==0u&&x==0u&&e==0u){ /* D0 AF Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B624u,2u);r->open_bus=0xAFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB626u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5D5u;}
      if(c->pc!=0xB626u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB626u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B626u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B626u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB627u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B627u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B627u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB629u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B629u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B629u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB62Cu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B62Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9E F1 0B Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B62Cu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB62Fu;
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0BF1u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B62Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B62Fu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB630u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B630u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B630u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB631u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B631u:
    if(m==0u&&x==0u&&e==0u){ /* E0 10 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B631u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB634u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B634u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F6 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B634u,2u);r->open_bus=0xF6u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB636u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB62Cu;}
      if(c->pc!=0xB636u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB636u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B636u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B636u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB639u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B639u:
    if(m==0u&&x==0u&&e==0u){ /* 64 04 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B639u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB63Bu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B63Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 08 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B63Bu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB63Du;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B63Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B63Du,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB63Fu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B63Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B63Fu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB642u;
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B642u:
    if(m==0u&&x==0u&&e==0u){ /* B0 25 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B642u,2u);r->open_bus=0x25u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB644u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB669u;}
      if(c->pc!=0xB644u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB644u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B644u:
    if(m==0u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B644u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB646u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B646u:
    if(m==0u&&x==0u&&e==0u){ /* C9 58 02 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B646u,3u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB649u;
      sc_v11_op_compare(r,c->a,0x0258u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B649u:
    if(m==0u&&x==0u&&e==0u){ /* B0 1E Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B649u,2u);r->open_bus=0x1Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB64Bu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB669u;}
      if(c->pc!=0xB64Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB64Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B64Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 2C 01 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B64Bu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB64Eu;
      sc_v11_op_lda(r,0x012Cu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B64Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B64Eu,3u);r->open_bus=0x90u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB651u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB650u))return 0;c->pc=0x9035u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B651u:
    if(m==0u&&x==0u&&e==0u){ /* DD D1 0B Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B651u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB654u;
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0BD1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B654u:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B654u,2u);r->open_bus=0x05u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB656u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB65Bu;}
      if(c->pc!=0xB656u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB656u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B656u:
    if(m==0u&&x==0u&&e==0u){ /* FE F1 0B Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B656u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB659u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0BF1u),16u,1);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B659u:
    if(m==0u&&x==0u&&e==0u){ /* E6 04 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B659u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB65Bu;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B65Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B65Bu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB65Cu;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B65Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B65Cu,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB65Du;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B65Du:
    if(m==0u&&x==0u&&e==0u){ /* E0 10 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B65Du,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB660u;
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B660u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B660u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB662u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB665u;}
      if(c->pc!=0xB662u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB662u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B662u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B662u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB665u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B665u:
    if(m==0u&&x==0u&&e==0u){ /* E6 08 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B665u,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB667u;
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B667u:
    if(m==0u&&x==0u&&e==0u){ /* 80 D4 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B667u,2u);r->open_bus=0xD4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB669u;
      if(1){c->pc=0xB63Du;}
      if(c->pc!=0xB669u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB669u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B669u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B669u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB66Au;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B66Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B66Au,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB66Cu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B66Cu:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B66Cu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB66Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B66Eu:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B66Eu,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB670u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B670u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B670u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB673u;
      sc_v11_op_ldy(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B673u:
    if(m==0u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B673u,1u);r->open_bus=0xBBu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB674u;
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B674u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B674u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB676u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B676u:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 6B 7F Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B676u,4u);r->open_bus=0x7Fu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB67Au;
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F6B00u)),8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B67Au:
    if(m==1u&&x==0u&&e==0u){ /* F0 15 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B67Au,2u);r->open_bus=0x15u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB67Cu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB691u;}
      if(c->pc!=0xB67Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB67Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B691u:
    if(m==1u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B691u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB692u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B692u:
    if(m==1u&&x==0u&&e==0u){ /* E0 B8 0B Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B692u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB695u;
      sc_v11_op_compare(r,c->x,0x0BB8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B695u:
    if(m==1u&&x==0u&&e==0u){ /* D0 DF Mesen corrected gameplay frame 3219; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B695u,2u);r->open_bus=0xDFu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB697u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB676u;}
      if(c->pc!=0xB697u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB697u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B697u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B697u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB699u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B699u:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B699u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB69Cu;
      sc_v11_op_compare(r,c->y,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B69Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 04 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B69Cu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB69Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB6A2u;}
      if(c->pc!=0xB69Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB69Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B69Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8C 05 0C Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B69Eu,3u);r->open_bus=0x0Cu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6A1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C05u),c->y);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6A1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6A1u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6A2u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6BDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6BDu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6BFu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6BFu:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6BFu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6C1u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6C1u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6C1u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6C3u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6C3u:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6C3u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6C5u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6C5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 0B Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6C5u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6C8u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B93u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6C8u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6C8u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6C9u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6C9u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 8F 0B Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6C9u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6CCu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Fu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6CCu:
    if(m==0u&&x==0u&&e==0u){ /* F0 25 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6CCu,2u);r->open_bus=0x25u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6CEu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB6F3u;}
      if(c->pc!=0xB6CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6F3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6F3u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6F6u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6F6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6F6u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6F7u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6F7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0E Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6F7u,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6FAu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E01u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6FAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6FAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6FBu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6FBu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6FBu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6FCu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6FCu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 01 0E Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6FCu,3u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB6FFu;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E01u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B6FFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B6FFu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB702u;
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B702u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B702u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB704u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB707u;}
      if(c->pc!=0xB704u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB704u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B707u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3224; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B707u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB708u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B708u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B708u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB70Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B70Au:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B70Au,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB70Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B70Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D F1 0D Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B70Du,3u);r->open_bus=0x0Du;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB710u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DF1u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B710u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B710u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB713u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B713u:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B713u,1u);r->open_bus=0x8Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB714u;
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B714u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B714u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB715u;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B715u:
    if(m==0u&&x==0u&&e==0u){ /* 7D D1 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B715u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB718u;
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0BD1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B718u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B718u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB719u;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B719u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B719u,1u);r->open_bus=0xE8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB71Au;
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B71Au:
    if(m==0u&&x==0u&&e==0u){ /* E0 0E 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B71Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB71Du;
      sc_v11_op_compare(r,c->x,0x000Eu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B71Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 F5 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B71Du,2u);r->open_bus=0xF5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB71Fu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB714u;}
      if(c->pc!=0xB71Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB71Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B71Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B71Fu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB721u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B721u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B721u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB724u;
      sc_v11_op_lda(r,0x0003u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B724u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B724u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB726u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B726u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CF A3 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B726u,3u);r->open_bus=0xA3u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB729u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB728u))return 0;c->pc=0xA3CFu;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B72Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B72Cu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB72Eu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B72Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 01 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B72Eu,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB731u;
      sc_v11_op_compare(r,c->a,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B731u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B731u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB733u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB736u;}
      if(c->pc!=0xB733u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB733u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B736u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B736u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB738u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B738u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B738u,3u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB73Bu;
      sc_v11_op_lda(r,0x0100u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B73Bu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B73Bu,1u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB73Cu;
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B73Cu:
    if(m==0u&&x==0u&&e==0u){ /* E5 04 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B73Cu,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB73Eu;
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B73Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B73Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB73Fu;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B73Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B73Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB740u;
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B740u:
    if(m==0u&&x==0u&&e==0u){ /* C9 E8 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B740u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB743u;
      sc_v11_op_compare(r,c->a,0x03E8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B743u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B743u,2u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB745u;
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB748u;}
      if(c->pc!=0xB745u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB745u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B748u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B748u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB74Au;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B74Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 DA 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B74Au,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB74Du;
      sc_v11_op_lda(r,0x00DAu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B74Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B74Du,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB74Fu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B74Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD B3 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B74Fu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB752u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BB3u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B752u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B752u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB754u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB75Au;}
      if(c->pc!=0xB754u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB754u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B75Au:
    if(m==0u&&x==0u&&e==0u){ /* AD B5 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B75Au,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB75Du;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BB5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B75Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B75Du,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB75Fu;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB765u;}
      if(c->pc!=0xB75Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB75Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B765u:
    if(m==0u&&x==0u&&e==0u){ /* AD B7 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B765u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB768u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BB7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B768u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B768u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB76Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB770u;}
      if(c->pc!=0xB76Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB76Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B770u:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B770u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB773u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B773u:
    if(m==0u&&x==0u&&e==0u){ /* C9 20 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B773u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB776u;
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B776u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B776u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB778u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB783u;}
      if(c->pc!=0xB778u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB778u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B783u:
    if(m==0u&&x==0u&&e==0u){ /* AD C7 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B783u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB786u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC7u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B786u:
    if(m==0u&&x==0u&&e==0u){ /* C9 E8 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B786u,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB789u;
      sc_v11_op_compare(r,c->a,0x03E8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B789u:
    if(m==0u&&x==0u&&e==0u){ /* B0 21 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B789u,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB78Bu;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB7ACu;}
      if(c->pc!=0xB78Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB78Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7ACu:
    if(m==0u&&x==0u&&e==0u){ /* AD C9 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7ACu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7AFu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC9u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7AFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 10 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7AFu,3u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7B2u;
      sc_v11_op_compare(r,c->a,0x1000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7B2u:
    if(m==0u&&x==0u&&e==0u){ /* B0 21 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7B2u,2u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7B4u;
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB7D5u;}
      if(c->pc!=0xB7B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7B4u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7B4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7B6u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7B6u:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7B6u,2u);r->open_bus=0x02u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7B8u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7B8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 01 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7B8u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7BAu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x01u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7BAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 27 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7BAu,3u);r->open_bus=0x27u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7BDu;
      sc_v11_op_lda(r,0x2710u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7BDu:
    if(m==0u&&x==0u&&e==0u){ /* 85 08 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7BDu,2u);r->open_bus=0x08u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7BFu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7BFu:
    if(m==0u&&x==0u&&e==0u){ /* 64 0A Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7BFu,2u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7C1u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7C1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7C1u,3u);r->open_bus=0xA4u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7C4u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB7C3u))return 0;c->pc=0xA421u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7C7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7C7u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7C9u;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7C9u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7C9u,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7CAu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7CAu:
    if(m==0u&&x==0u&&e==0u){ /* 69 E6 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7CAu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7CDu;
      sc_v11_op_adc(r,0x00E6u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7CDu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7CDu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7CFu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7CFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7CFu,3u);r->open_bus=0xA2u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7D2u;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB7D1u))return 0;c->pc=0xA2F5u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7D5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 DA 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7D5u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7D8u;
      sc_v11_op_lda(r,0x00DAu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7D8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7D8u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7DAu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7DAu:
    if(m==0u&&x==0u&&e==0u){ /* AD AD 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7DAu,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7DDu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BADu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7DDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7DDu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7DEu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7DEu:
    if(m==0u&&x==0u&&e==0u){ /* 69 E8 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7DEu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7E1u;
      sc_v11_op_adc(r,0x03E8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7E1u:
    if(m==0u&&x==0u&&e==0u){ /* 10 06 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7E1u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7E3u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB7E9u;}
      if(c->pc!=0xB7E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7E9u:
    if(m==0u&&x==0u&&e==0u){ /* AD AF 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7E9u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7ECu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BAFu)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7ECu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7ECu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7EDu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7EDu:
    if(m==0u&&x==0u&&e==0u){ /* 69 E8 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7EDu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7F0u;
      sc_v11_op_adc(r,0x03E8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7F0u:
    if(m==0u&&x==0u&&e==0u){ /* 10 06 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7F0u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7F2u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB7F8u;}
      if(c->pc!=0xB7F2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7F2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7F8u:
    if(m==0u&&x==0u&&e==0u){ /* AD B1 0B Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7F8u,3u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7FBu;
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BB1u)),16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7FBu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7FBu,1u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7FCu;
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7FCu:
    if(m==0u&&x==0u&&e==0u){ /* 69 E8 03 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7FCu,3u);r->open_bus=0x03u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB7FFu;
      sc_v11_op_adc(r,0x03E8u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x03B7FFu:
    if(m==0u&&x==0u&&e==0u){ /* 10 06 Mesen corrected gameplay frame 3267; Version 34 gameplay route */
      sc_v11_scheduler_code_access(r,0x03B7FFu,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0xB801u;
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB807u;}
      if(c->pc!=0xB801u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB801u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
