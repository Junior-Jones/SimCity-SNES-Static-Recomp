/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000F6(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03D80Du:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D80Du,2u,0x20u,0xD80Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D80Du,2u,0x20u,0xD80Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D80Du,2u,0x20u,0xD80Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D80Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D80Fu,2u,0x17u,0xD811u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D811u:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D811u,2u,0x68u,0xD813u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D813u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D813u,2u,0x20u,0xD815u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D815u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D815u,3u,0x00u,0xD818u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D818u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D818u,2u,0x00u,0xD81Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD81Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D81Au:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D81Au,2u,0x20u,0xD81Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D81Cu:
    if(m==1u&&x==1u&&e==0u){ /* AD 27 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D81Cu,3u,0x0Bu,0xD81Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B27u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D81Fu:
    if(m==1u&&x==1u&&e==0u){ /* CD 2A 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D81Fu,3u,0x0Bu,0xD822u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Au)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D822u:
    if(m==1u&&x==1u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D822u,2u,0x10u,0xD824u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD834u;}
      if(c->pc!=0xD824u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD824u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D824u:
    if(m==1u&&x==0u&&e==0u){ /* AD 28 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D824u,3u,0x0Bu,0xD827u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B28u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 28 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D824u,3u,0x0Bu,0xD827u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B28u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D827u:
    if(m==1u&&x==0u&&e==0u){ /* CD 2B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D827u,3u,0x0Bu,0xD82Au);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD 2B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D827u,3u,0x0Bu,0xD82Au);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D82Au:
    if(m==1u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D82Au,2u,0x08u,0xD82Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD834u;}
      if(c->pc!=0xD82Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD82Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D82Au,2u,0x08u,0xD82Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD834u;}
      if(c->pc!=0xD82Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD82Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D82Cu:
    if(m==1u&&x==0u&&e==0u){ /* AD 29 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D82Cu,3u,0x0Bu,0xD82Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B29u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 29 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D82Cu,3u,0x0Bu,0xD82Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B29u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D82Fu:
    if(m==1u&&x==0u&&e==0u){ /* CD 2C 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D82Fu,3u,0x0Bu,0xD832u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD 2C 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D82Fu,3u,0x0Bu,0xD832u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D832u:
    if(m==1u&&x==0u&&e==0u){ /* F0 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D832u,2u,0x39u,0xD834u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD86Du;}
      if(c->pc!=0xD834u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD834u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D832u,2u,0x39u,0xD834u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD86Du;}
      if(c->pc!=0xD834u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD834u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D834u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D834u,2u,0x20u,0xD836u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D836u:
    if(m==0u&&x==1u&&e==0u){ /* AD 27 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D836u,3u,0x0Bu,0xD839u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B27u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D839u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D839u,1u,0x18u,0xD83Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D83Au:
    if(m==0u&&x==1u&&e==0u){ /* 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D83Au,1u,0x2Au,0xD83Bu);
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D83Bu:
    if(m==0u&&x==1u&&e==0u){ /* 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D83Bu,1u,0x2Au,0xD83Cu);
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D83Cu:
    if(m==0u&&x==1u&&e==0u){ /* 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D83Cu,1u,0x2Au,0xD83Du);
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D83Du:
    if(m==0u&&x==1u&&e==0u){ /* 69 D6 5C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D83Du,3u,0x5Cu,0xD840u);
      sc_v11_op_adc(r,0x5CD6u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D840u:
    if(m==0u&&x==1u&&e==0u){ /* 85 59 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D840u,2u,0x59u,0xD842u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x59u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D842u:
    if(m==0u&&x==1u&&e==0u){ /* AD 28 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D842u,3u,0x0Bu,0xD845u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B28u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D845u:
    if(m==0u&&x==1u&&e==0u){ /* 49 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D845u,3u,0xFFu,0xD848u);
      sc_v11_op_eor(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D848u:
    if(m==0u&&x==1u&&e==0u){ /* 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D848u,1u,0x2Au,0xD849u);
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D849u:
    if(m==0u&&x==1u&&e==0u){ /* 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D849u,1u,0x2Au,0xD84Au);
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D84Au:
    if(m==0u&&x==1u&&e==0u){ /* 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D84Au,1u,0x2Au,0xD84Bu);
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D84Bu:
    if(m==0u&&x==1u&&e==0u){ /* 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D84Bu,1u,0x2Au,0xD84Cu);
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D84Cu:
    if(m==0u&&x==1u&&e==0u){ /* 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D84Cu,1u,0x2Au,0xD84Du);
      sc_v11_op_shift_accumulator(r,16u,2u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D84Du:
    if(m==0u&&x==1u&&e==0u){ /* 69 38 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D84Du,3u,0x12u,0xD850u);
      sc_v11_op_adc(r,0x1238u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D850u:
    if(m==0u&&x==1u&&e==0u){ /* 85 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D850u,2u,0x5Bu,0xD852u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Bu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D852u:
    if(m==0u&&x==1u&&e==0u){ /* 64 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D852u,2u,0x5Du,0xD854u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D854u:
    if(m==0u&&x==1u&&e==0u){ /* AD 29 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D854u,3u,0x0Bu,0xD857u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B29u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D857u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D857u,1u,0x0Au,0xD858u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D858u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 28 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D858u,3u,0x0Bu,0xD85Bu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B28u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D85Bu:
    if(m==0u&&x==1u&&e==0u){ /* 6D 27 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D85Bu,3u,0x0Bu,0xD85Eu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B27u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D85Eu:
    if(m==0u&&x==1u&&e==0u){ /* 29 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D85Eu,3u,0x00u,0xD861u);
      sc_v11_op_and(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D861u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D861u,1u,0xAAu,0xD862u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D862u:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D862u,4u,0x00u,0xD866u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD865u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D862u,4u,0x00u,0xD866u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD865u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D862u,4u,0x00u,0xD866u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD865u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D866u:
    if(m==0u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D866u,1u,0xCAu,0xD867u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D866u,1u,0xCAu,0xD867u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D866u,1u,0xCAu,0xD867u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D867u:
    if(m==0u&&x==1u&&e==0u){ /* 10 F9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D867u,2u,0xF9u,0xD869u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD862u;}
      if(c->pc!=0xD869u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD869u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 F9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D867u,2u,0xF9u,0xD869u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD862u;}
      if(c->pc!=0xD869u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD869u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 F9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D867u,2u,0xF9u,0xD869u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD862u;}
      if(c->pc!=0xD869u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD869u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D869u:
    if(m==0u&&x==1u&&e==0u){ /* 22 ED F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D869u,4u,0x01u,0xD86Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD86Cu))return 0;
      c->pbr=0x01u;c->pc=0xF1EDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 ED F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D869u,4u,0x01u,0xD86Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD86Cu))return 0;
      c->pbr=0x01u;c->pc=0xF1EDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 ED F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D869u,4u,0x01u,0xD86Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD86Cu))return 0;
      c->pbr=0x01u;c->pc=0xF1EDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D86Du:
    if(m==0u&&x==0u&&e==0u){ /* 22 3F 92 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D86Du,4u,0x02u,0xD871u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD870u))return 0;
      c->pbr=0x02u;c->pc=0x923Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 3F 92 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D86Du,4u,0x02u,0xD871u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD870u))return 0;
      c->pbr=0x02u;c->pc=0x923Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 3F 92 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D86Du,4u,0x02u,0xD871u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD870u))return 0;
      c->pbr=0x02u;c->pc=0x923Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D871u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D871u,2u,0x20u,0xD873u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D871u,2u,0x20u,0xD873u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D871u,2u,0x20u,0xD873u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D873u:
    if(m==1u&&x==0u&&e==0u){ /* AD 27 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D873u,3u,0x0Bu,0xD876u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B27u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D876u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 2A 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D876u,3u,0x0Bu,0xD879u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D879u:
    if(m==1u&&x==0u&&e==0u){ /* AD 28 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D879u,3u,0x0Bu,0xD87Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B28u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D87Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 2B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D87Cu,3u,0x0Bu,0xD87Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D87Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD 29 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D87Fu,3u,0x0Bu,0xD882u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B29u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D882u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 2C 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D882u,3u,0x0Bu,0xD885u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D885u:
    if(m==1u&&x==0u&&e==0u){ /* A9 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D885u,2u,0x16u,0xD887u);
      sc_v11_op_lda(r,0x0016u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D887u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D887u,2u,0x68u,0xD889u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D889u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D889u,1u,0x60u,0xD88Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D89Bu:
    if(m==0u&&x==1u&&e==0u){ /* 20 A5 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D89Bu,3u,0xDCu,0xD89Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD89Du))return 0;c->pc=0xDCA5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A5 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D89Bu,3u,0xDCu,0xD89Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD89Du))return 0;c->pc=0xDCA5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A5 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D89Bu,3u,0xDCu,0xD89Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD89Du))return 0;c->pc=0xDCA5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D89Eu:
    if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D89Eu,3u,0x00u,0xD8A1u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D89Eu,2u,0xFFu,0xD8A0u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D89Eu,2u,0xFFu,0xD8A0u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8A1u:
    if(m==0u&&x==1u&&e==0u){ /* 85 4E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8A1u,2u,0x4Eu,0xD8A3u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x4Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8A3u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8A3u,2u,0x20u,0xD8A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8A5u:
    if(m==1u&&x==1u&&e==0u){ /* A9 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8A5u,2u,0x48u,0xD8A7u);
      sc_v11_op_lda(r,0x0048u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8A7u:
    if(m==1u&&x==1u&&e==0u){ /* 85 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8A7u,2u,0x62u,0xD8A9u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8A9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8A9u,2u,0x54u,0xD8ABu);
      sc_v11_op_lda(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8ABu:
    if(m==1u&&x==1u&&e==0u){ /* 85 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8ABu,2u,0x64u,0xD8ADu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8ADu:
    if(m==1u&&x==1u&&e==0u){ /* A9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8ADu,2u,0x15u,0xD8AFu);
      sc_v11_op_lda(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8AFu:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8AFu,2u,0x68u,0xD8B1u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8B1u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8B1u,2u,0x20u,0xD8B3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8B3u:
    if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8B3u,3u,0x00u,0xD8B6u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8B6u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8B6u,2u,0x00u,0xD8B8u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD8B8u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8B8u:
    if(m==0u&&x==1u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8B8u,2u,0x14u,0xD8BAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8BAu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8BAu,1u,0x60u,0xD8BBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8C3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5D DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C3u,3u,0xDBu,0xD8C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C5u))return 0;c->pc=0xDB5Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5D DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C3u,3u,0xDBu,0xD8C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C5u))return 0;c->pc=0xDB5Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 5D DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C3u,3u,0xDBu,0xD8C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C5u))return 0;c->pc=0xDB5Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8C6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C6u,3u,0xDBu,0xD8C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C8u))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C6u,3u,0xDBu,0xD8C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C8u))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C6u,3u,0xDBu,0xD8C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8C8u))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8C9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C9u,3u,0xDCu,0xD8CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8CBu))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C9u,3u,0xDCu,0xD8CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8CBu))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8C9u,3u,0xDCu,0xD8CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8CBu))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8CCu:
    if(m==0u&&x==1u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8CCu,4u,0x05u,0xD8D0u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD8CFu))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8CCu,4u,0x05u,0xD8D0u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD8CFu))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8CCu,4u,0x05u,0xD8D0u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD8CFu))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8D0u:
    if(m==0u&&x==1u&&e==0u){ /* 20 1D D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8D0u,3u,0xD9u,0xD8D3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8D2u))return 0;c->pc=0xD91Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1D D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8D0u,3u,0xD9u,0xD8D3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8D2u))return 0;c->pc=0xD91Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8D3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A5 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8D3u,3u,0xDCu,0xD8D6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8D5u))return 0;c->pc=0xDCA5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A5 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8D3u,3u,0xDCu,0xD8D6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8D5u))return 0;c->pc=0xDCA5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A5 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8D3u,3u,0xDCu,0xD8D6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8D5u))return 0;c->pc=0xDCA5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8D6u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8D6u,2u,0x30u,0xD8D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8D6u,2u,0x30u,0xD8D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8D6u,2u,0x30u,0xD8D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8EAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8EAu,3u,0xE5u,0xD8EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8ECu))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8EDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8EDu,2u,0x20u,0xD8EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8EDu,2u,0x20u,0xD8EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8EDu,2u,0x20u,0xD8EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8EDu,2u,0x20u,0xD8EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8EFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8EFu,3u,0x00u,0xD8F2u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8EFu,3u,0x00u,0xD8F2u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8F2u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8F2u,2u,0x00u,0xD8F4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD8F4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8F2u,2u,0x00u,0xD8F4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD8F4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8F4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8F4u,2u,0x20u,0xD8F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8F4u,2u,0x20u,0xD8F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8F6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8F6u,3u,0x00u,0xD8F9u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8F6u,3u,0x00u,0xD8F9u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8F9u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8F9u,2u,0x00u,0xD8FBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD8FBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8F9u,2u,0x00u,0xD8FBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD8FBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8FBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8FBu,3u,0xD3u,0xD8FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8FDu))return 0;c->pc=0xD3B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B7 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8FBu,3u,0xD3u,0xD8FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD8FDu))return 0;c->pc=0xD3B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D8FEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8FEu,2u,0x20u,0xD900u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8FEu,2u,0x20u,0xD900u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8FEu,2u,0x20u,0xD900u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D8FEu,2u,0x20u,0xD900u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D900u:
    if(m==1u&&x==0u&&e==0u){ /* A9 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D900u,2u,0x16u,0xD902u);
      sc_v11_op_lda(r,0x0016u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D900u,2u,0x16u,0xD902u);
      sc_v11_op_lda(r,0x0016u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D902u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D902u,2u,0x68u,0xD904u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D902u,2u,0x68u,0xD904u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D904u:
    if(m==1u&&x==0u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D904u,2u,0x40u,0xD906u);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D904u,2u,0x40u,0xD906u);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D906u:
    if(m==1u&&x==0u&&e==0u){ /* 85 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D906u,2u,0x62u,0xD908u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D906u,2u,0x62u,0xD908u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D908u:
    if(m==1u&&x==0u&&e==0u){ /* A9 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D908u,2u,0x44u,0xD90Au);
      sc_v11_op_lda(r,0x0044u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D908u,2u,0x44u,0xD90Au);
      sc_v11_op_lda(r,0x0044u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D90Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D90Au,2u,0x63u,0xD90Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x63u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D90Au,2u,0x63u,0xD90Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x63u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D90Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 50 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D90Cu,2u,0x50u,0xD90Eu);
      sc_v11_op_lda(r,0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 50 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D90Cu,2u,0x50u,0xD90Eu);
      sc_v11_op_lda(r,0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D90Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D90Eu,2u,0x64u,0xD910u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D90Eu,2u,0x64u,0xD910u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D910u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D910u,2u,0x20u,0xD912u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D910u,2u,0x20u,0xD912u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D912u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D912u,3u,0x00u,0xD915u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D912u,3u,0x00u,0xD915u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D915u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D915u,2u,0x00u,0xD917u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD917u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D915u,2u,0x00u,0xD917u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD917u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D917u:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D917u,3u,0x00u,0xD91Au);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D917u,3u,0x00u,0xD91Au);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D91Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D91Au,2u,0x14u,0xD91Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D91Au,2u,0x14u,0xD91Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D91Cu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D91Cu,1u,0x60u,0xD91Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D91Du:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D91Du,2u,0x30u,0xD91Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D91Du,2u,0x30u,0xD91Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D934u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D934u,2u,0x00u,0xD936u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D936u:
    if(m==1u&&x==1u&&e==0u){ /* 80 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D936u,2u,0x13u,0xD938u);
      if(1){c->pc=0xD94Bu;}
      if(c->pc!=0xD938u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD938u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D93Cu:
    if(m==1u&&x==1u&&e==0u){ /* C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D93Cu,2u,0x00u,0xD93Eu);
      sc_v11_op_compare(r,c->y,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D93Eu:
    if(m==1u&&x==1u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D93Eu,2u,0x0Eu,0xD940u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD94Eu;}
      if(c->pc!=0xD940u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD940u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D940u:
    if(m==1u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D940u,1u,0x88u,0xD941u);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D941u:
    if(m==1u&&x==1u&&e==0u){ /* 80 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D941u,2u,0x08u,0xD943u);
      if(1){c->pc=0xD94Bu;}
      if(c->pc!=0xD943u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD943u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D96Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D96Cu,3u,0xDBu,0xD96Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD96Eu))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D96Cu,3u,0xDBu,0xD96Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD96Eu))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D96Cu,3u,0xDBu,0xD96Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD96Eu))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D96Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D96Fu,3u,0xDCu,0xD972u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD971u))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D96Fu,3u,0xDCu,0xD972u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD971u))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D96Fu,3u,0xDCu,0xD972u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD971u))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D972u:
    if(m==0u&&x==1u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D972u,4u,0x05u,0xD976u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD975u))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D972u,4u,0x05u,0xD976u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD975u))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D972u,4u,0x05u,0xD976u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD975u))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D976u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D976u,2u,0x30u,0xD978u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D976u,2u,0x30u,0xD978u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D976u,2u,0x30u,0xD978u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D982u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D982u,3u,0x02u,0xD985u);
      sc_v11_op_compare(r,c->a,0x0200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D985u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D985u,2u,0x08u,0xD987u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD98Fu;}
      if(c->pc!=0xD987u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD987u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D987u:
    if(m==0u&&x==0u&&e==0u){ /* C0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D987u,3u,0x00u,0xD98Au);
      sc_v11_op_compare(r,c->y,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D98Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D98Au,2u,0x14u,0xD98Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD9A0u;}
      if(c->pc!=0xD98Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD98Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D98Cu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D98Cu,1u,0xC8u,0xD98Du);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D98Du:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D98Du,2u,0x06u,0xD98Fu);
      if(1){c->pc=0xD995u;}
      if(c->pc!=0xD98Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD98Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D98Fu:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D98Fu,3u,0x00u,0xD992u);
      sc_v11_op_compare(r,c->y,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D992u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D992u,2u,0x0Cu,0xD994u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD9A0u;}
      if(c->pc!=0xD994u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD994u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D994u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D994u,1u,0x88u,0xD995u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D995u:
    if(m==0u&&x==0u&&e==0u){ /* 8C 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D995u,3u,0x0Bu,0xD998u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B57u),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D998u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D998u,2u,0x20u,0xD99Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D99Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D99Au,2u,0x07u,0xD99Cu);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D99Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D99Cu,2u,0x06u,0xD99Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D99Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D99Eu,2u,0x20u,0xD9A0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9A3u:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9A3u,1u,0x5Au,0xD9A4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9A4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9A4u,2u,0x00u,0xD9A6u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9B5u:
    if(m==0u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B5u,1u,0x7Au,0xD9B6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B5u,1u,0x7Au,0xD9B6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B5u,1u,0x7Au,0xD9B6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9B6u:
    if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B6u,1u,0xC8u,0xD9B7u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B6u,1u,0xC8u,0xD9B7u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B6u,1u,0xC8u,0xD9B7u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9B7u:
    if(m==0u&&x==1u&&e==0u){ /* C0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B7u,2u,0x03u,0xD9B9u);
      sc_v11_op_compare(r,c->y,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B7u,3u,0x00u,0xD9BAu);
      sc_v11_op_compare(r,c->y,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9B7u,2u,0x03u,0xD9B9u);
      sc_v11_op_compare(r,c->y,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9BAu:
    if(m==1u&&x==0u&&e==0u){ /* D0 E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9BAu,2u,0xE7u,0xD9BCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD9A3u;}
      if(c->pc!=0xD9BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9BCu:
    if(m==1u&&x==0u&&e==0u){ /* E6 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9BCu,2u,0x2Cu,0xD9BEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x2Cu),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9BEu:
    if(m==1u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9BEu,2u,0xC9u,0xD9C0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9C0u:
    if(m==1u&&x==0u&&e==0u){ /* 10 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9C0u,2u,0x07u,0xD9C2u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD9C9u;}
      if(c->pc!=0xD9C2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD9C2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9C2u:
    if(m==1u&&x==0u&&e==0u){ /* A9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9C2u,2u,0x15u,0xD9C4u);
      sc_v11_op_lda(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9C9u:
    if(m==1u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9C9u,2u,0xC9u,0xD9CBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9CBu:
    if(m==1u&&x==0u&&e==0u){ /* 29 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9CBu,2u,0x40u,0xD9CDu);
      sc_v11_op_and(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9D0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A5 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D0u,3u,0xDCu,0xD9D3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD9D2u))return 0;c->pc=0xDCA5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9D3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D3u,3u,0x00u,0xD9D6u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D3u,3u,0x00u,0xD9D6u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D3u,2u,0xFFu,0xD9D5u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D3u,2u,0xFFu,0xD9D5u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9D6u:
    if(m==0u&&x==0u&&e==0u){ /* 85 4E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D6u,2u,0x4Eu,0xD9D8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x4Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 4E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D6u,2u,0x4Eu,0xD9D8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x4Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9D8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D8u,2u,0x20u,0xD9DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9D8u,2u,0x20u,0xD9DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9DAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9DAu,2u,0x48u,0xD9DCu);
      sc_v11_op_lda(r,0x0048u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9DAu,2u,0x48u,0xD9DCu);
      sc_v11_op_lda(r,0x0048u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9DCu:
    if(m==1u&&x==0u&&e==0u){ /* 85 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9DCu,2u,0x62u,0xD9DEu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9DCu,2u,0x62u,0xD9DEu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9DEu:
    if(m==1u&&x==0u&&e==0u){ /* A9 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9DEu,2u,0x54u,0xD9E0u);
      sc_v11_op_lda(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9DEu,2u,0x54u,0xD9E0u);
      sc_v11_op_lda(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9E0u:
    if(m==1u&&x==0u&&e==0u){ /* 85 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E0u,2u,0x64u,0xD9E2u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E0u,2u,0x64u,0xD9E2u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9E2u:
    if(m==1u&&x==0u&&e==0u){ /* A9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E2u,2u,0x15u,0xD9E4u);
      sc_v11_op_lda(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E2u,2u,0x15u,0xD9E4u);
      sc_v11_op_lda(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9E4u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E4u,2u,0x68u,0xD9E6u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E4u,2u,0x68u,0xD9E6u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9E6u:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E6u,2u,0x07u,0xD9E8u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E6u,2u,0x07u,0xD9E8u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9E8u:
    if(m==1u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E8u,2u,0x14u,0xD9EAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x14u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9E8u,2u,0x14u,0xD9EAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x14u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D9EAu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9EAu,1u,0x60u,0xD9EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D9EAu,1u,0x60u,0xD9EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA24u:
    if(m==1u&&x==0u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA24u,2u,0x14u,0xDA26u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA24u,2u,0x14u,0xDA26u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA26u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA26u,2u,0x30u,0xDA28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA26u,2u,0x30u,0xDA28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA2Eu,3u,0xDBu,0xDA31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA30u))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA2Eu,3u,0xDBu,0xDA31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA30u))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA2Eu,3u,0xDBu,0xDA31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA30u))return 0;c->pc=0xDBB6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA31u:
    if(m==0u&&x==0u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA31u,3u,0xDCu,0xDA34u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA33u))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA31u,3u,0xDCu,0xDA34u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA33u))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 83 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA31u,3u,0xDCu,0xDA34u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA33u))return 0;c->pc=0xDC83u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA34u:
    if(m==0u&&x==1u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA34u,4u,0x05u,0xDA38u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA37u))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA34u,4u,0x05u,0xDA38u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA37u))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 94 9B 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA34u,4u,0x05u,0xDA38u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA37u))return 0;
      c->pbr=0x05u;c->pc=0x9B94u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA38u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA38u,2u,0x30u,0xDA3Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA38u,2u,0x30u,0xDA3Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA38u,2u,0x30u,0xDA3Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA43u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA43u,3u,0x02u,0xDA46u);
      sc_v11_op_compare(r,c->a,0x0200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA46u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA46u,2u,0x08u,0xDA48u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDA50u;}
      if(c->pc!=0xDA48u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA48u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA48u:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA48u,3u,0x00u,0xDA4Bu);
      sc_v11_op_compare(r,c->y,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA4Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA4Bu,2u,0x13u,0xDA4Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDA60u;}
      if(c->pc!=0xDA4Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA4Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA4Du:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA4Du,1u,0xC8u,0xDA4Eu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA4Eu:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA4Eu,2u,0x06u,0xDA50u);
      if(1){c->pc=0xDA56u;}
      if(c->pc!=0xDA50u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA50u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA50u:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA50u,3u,0x00u,0xDA53u);
      sc_v11_op_compare(r,c->y,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA53u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA53u,2u,0x0Bu,0xDA55u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDA60u;}
      if(c->pc!=0xDA55u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA55u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA55u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA55u,1u,0x88u,0xDA56u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA56u:
    if(m==0u&&x==0u&&e==0u){ /* 84 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA56u,2u,0x36u,0xDA58u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x36u),c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA58u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA58u,2u,0x20u,0xDA5Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA5Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA5Au,2u,0x07u,0xDA5Cu);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA5Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA5Cu,2u,0x06u,0xDA5Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA5Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA5Eu,2u,0x20u,0xDA60u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA70u:
    if(m==0u&&x==1u&&e==0u){ /* A5 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA70u,2u,0x36u,0xDA72u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x36u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA70u,2u,0x36u,0xDA72u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x36u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA70u,2u,0x36u,0xDA72u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x36u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA72u:
    if(m==0u&&x==1u&&e==0u){ /* 49 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA72u,3u,0x00u,0xDA75u);
      sc_v11_op_eor(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 49 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA72u,2u,0x01u,0xDA74u);
      sc_v11_op_eor(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 49 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA72u,2u,0x01u,0xDA74u);
      sc_v11_op_eor(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA75u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA75u,1u,0x18u,0xDA76u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA76u:
    if(m==0u&&x==1u&&e==0u){ /* 69 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA76u,3u,0x00u,0xDA79u);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA79u:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA79u,1u,0xA8u,0xDA7Au);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA79u,1u,0xA8u,0xDA7Au);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA79u,1u,0xA8u,0xDA7Au);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA7Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA7Au,3u,0x00u,0xDA7Du);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA7Au,2u,0x00u,0xDA7Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA7Au,2u,0x00u,0xDA7Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA7Du:
    if(m==0u&&x==1u&&e==0u){ /* 22 D7 9A 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA7Du,4u,0x05u,0xDA81u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDA80u))return 0;
      c->pbr=0x05u;c->pc=0x9AD7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA81u:
    if(m==0u&&x==1u&&e==0u){ /* E6 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA81u,2u,0x2Cu,0xDA83u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x2Cu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA81u,2u,0x2Cu,0xDA83u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x2Cu),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA81u,2u,0x2Cu,0xDA83u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x2Cu),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA83u:
    if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA83u,2u,0xC9u,0xDA85u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA83u,2u,0xC9u,0xDA85u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA83u,2u,0xC9u,0xDA85u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA85u:
    if(m==0u&&x==1u&&e==0u){ /* 29 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA85u,3u,0x80u,0xDA88u);
      sc_v11_op_and(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA85u,2u,0x00u,0xDA87u);
      sc_v11_op_and(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA85u,2u,0x00u,0xDA87u);
      sc_v11_op_and(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA87u:
    if(m==1u&&x==0u&&e==0u){ /* 80 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA87u,2u,0xF0u,0xDA89u);
      if(1){c->pc=0xDA79u;}
      if(c->pc!=0xDA89u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA89u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA87u,2u,0xF0u,0xDA89u);
      if(1){c->pc=0xDA79u;}
      if(c->pc!=0xDA89u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA89u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA88u:
    if(m==0u&&x==1u&&e==0u){ /* F0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA88u,2u,0x18u,0xDA8Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDAA2u;}
      if(c->pc!=0xDA8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA8Au:
    if(m==0u&&x==1u&&e==0u){ /* A5 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA8Au,2u,0x36u,0xDA8Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x36u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA8Cu:
    if(m==0u&&x==1u&&e==0u){ /* D0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA8Cu,2u,0x1Bu,0xDA8Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDAA9u;}
      if(c->pc!=0xDA8Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA8Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA8Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 74 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA8Eu,3u,0xE5u,0xDA91u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA90u))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA91u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA91u,2u,0x20u,0xDA93u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA91u,2u,0x20u,0xDA93u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA91u,2u,0x20u,0xDA93u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA93u:
    if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA93u,3u,0x00u,0xDA96u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA96u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA96u,2u,0x00u,0xDA98u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDA98u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA98u:
    if(m==0u&&x==1u&&e==0u){ /* 20 3D C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA98u,3u,0xC6u,0xDA9Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDA9Au))return 0;c->pc=0xC63Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA9Bu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA9Bu,3u,0x80u,0xDA9Eu);
      sc_v11_op_lda(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA9Bu,2u,0x00u,0xDA9Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA9Bu,2u,0x00u,0xDA9Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA9Du:
    if(m==1u&&x==0u&&e==0u){ /* 80 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA9Du,2u,0x85u,0xDA9Fu);
      if(1){c->pc=0xDA24u;}
      if(c->pc!=0xDA9Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA9Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA9Du,2u,0x85u,0xDA9Fu);
      if(1){c->pc=0xDA24u;}
      if(c->pc!=0xDA9Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDA9Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DA9Eu:
    if(m==0u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DA9Eu,2u,0x14u,0xDAA0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAA0u:
    if(m==0u&&x==1u&&e==0u){ /* 80 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAA0u,2u,0x0Cu,0xDAA2u);
      if(1){c->pc=0xDAAEu;}
      if(c->pc!=0xDAA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAA2u:
    if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAA2u,2u,0xC9u,0xDAA4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAA4u:
    if(m==0u&&x==1u&&e==0u){ /* 29 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAA4u,3u,0x00u,0xDAA7u);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAA7u:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAA7u,2u,0x05u,0xDAA9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDAAEu;}
      if(c->pc!=0xDAA9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAA9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAA9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAA9u,3u,0x00u,0xDAACu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAA9u,3u,0x00u,0xDAACu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAACu:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAACu,2u,0x14u,0xDAAEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAACu,2u,0x14u,0xDAAEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAAEu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAAEu,1u,0x60u,0xDAAFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAE7u:
    if(m==1u&&x==1u&&e==0u){ /* E0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAE7u,2u,0x0Au,0xDAE9u);
      sc_v11_op_compare(r,c->x,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAE9u:
    if(m==1u&&x==1u&&e==0u){ /* D0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAE9u,2u,0x1Du,0xDAEBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB08u;}
      if(c->pc!=0xDAEBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAEBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAEBu:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAEBu,2u,0x00u,0xDAEDu);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAEDu:
    if(m==1u&&x==1u&&e==0u){ /* 80 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAEDu,2u,0x1Au,0xDAEFu);
      if(1){c->pc=0xDB09u;}
      if(c->pc!=0xDAEFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAEFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAF3u:
    if(m==1u&&x==1u&&e==0u){ /* E0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAF3u,2u,0x09u,0xDAF5u);
      sc_v11_op_compare(r,c->x,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAF5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAF5u,2u,0x11u,0xDAF7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB08u;}
      if(c->pc!=0xDAF7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAF7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAF7u:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAF7u,1u,0xC8u,0xDAF8u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DAF8u:
    if(m==1u&&x==1u&&e==0u){ /* 80 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DAF8u,2u,0x0Fu,0xDAFAu);
      if(1){c->pc=0xDB09u;}
      if(c->pc!=0xDAFAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDAFAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB02u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB02u,2u,0x00u,0xDB04u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB04u:
    if(m==1u&&x==1u&&e==0u){ /* A0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB04u,2u,0x02u,0xDB06u);
      sc_v11_op_ldy(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB06u:
    if(m==1u&&x==1u&&e==0u){ /* 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB06u,2u,0x01u,0xDB08u);
      if(1){c->pc=0xDB09u;}
      if(c->pc!=0xDB08u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB08u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB12u:
    if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB12u,2u,0x04u,0xDB14u);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB14u:
    if(m==1u&&x==1u&&e==0u){ /* F0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB14u,2u,0x19u,0xDB16u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDB2Fu;}
      if(c->pc!=0xDB16u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB16u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB16u:
    if(m==1u&&x==1u&&e==0u){ /* E0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB16u,2u,0x00u,0xDB18u);
      sc_v11_op_compare(r,c->x,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB18u:
    if(m==1u&&x==1u&&e==0u){ /* D0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB18u,2u,0x0Eu,0xDB1Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDB28u;}
      if(c->pc!=0xDB1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB1Au:
    if(m==1u&&x==1u&&e==0u){ /* C0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB1Au,2u,0x02u,0xDB1Cu);
      sc_v11_op_compare(r,c->y,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB1Cu:
    if(m==1u&&x==1u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB1Cu,2u,0x06u,0xDB1Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xDB24u;}
      if(c->pc!=0xDB1Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB1Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB1Eu:
    if(m==1u&&x==1u&&e==0u){ /* A2 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB1Eu,2u,0x09u,0xDB20u);
      sc_v11_op_ldx(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB20u:
    if(m==1u&&x==1u&&e==0u){ /* A0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB20u,2u,0x03u,0xDB22u);
      sc_v11_op_ldy(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB22u:
    if(m==1u&&x==1u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB22u,2u,0x05u,0xDB24u);
      if(1){c->pc=0xDB29u;}
      if(c->pc!=0xDB24u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB24u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB24u:
    if(m==1u&&x==1u&&e==0u){ /* A2 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB24u,2u,0x0Au,0xDB26u);
      sc_v11_op_ldx(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB26u:
    if(m==1u&&x==1u&&e==0u){ /* 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB26u,2u,0x01u,0xDB28u);
      if(1){c->pc=0xDB29u;}
      if(c->pc!=0xDB28u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB28u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB28u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB28u,1u,0xCAu,0xDB29u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB29u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB29u,1u,0x48u,0xDB2Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB2Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB2Au,2u,0x07u,0xDB2Cu);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB2Cu:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB2Cu,2u,0x06u,0xDB2Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB2Eu:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB2Eu,1u,0x68u,0xDB2Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB3Au:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB3Au,1u,0xCAu,0xDB3Bu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB3Bu:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB3Bu,1u,0xC8u,0xDB3Cu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB3Cu:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB3Cu,1u,0xC8u,0xDB3Du);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB3Du:
    if(m==1u&&x==1u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB3Du,2u,0x05u,0xDB3Fu);
      if(1){c->pc=0xDB44u;}
      if(c->pc!=0xDB3Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB3Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB4Du:
    if(m==1u&&x==1u&&e==0u){ /* C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB4Du,2u,0x00u,0xDB4Fu);
      sc_v11_op_compare(r,c->y,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB4Fu:
    if(m==1u&&x==1u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB4Fu,2u,0x07u,0xDB51u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDB58u;}
      if(c->pc!=0xDB51u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB51u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB51u:
    if(m==1u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB51u,1u,0x88u,0xDB52u);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB52u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB52u,1u,0x48u,0xDB53u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB53u:
    if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB53u,2u,0x07u,0xDB55u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB55u:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB55u,2u,0x06u,0xDB57u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB57u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB57u,1u,0x68u,0xDB58u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB5Du:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB5Du,2u,0x30u,0xDB5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB5Du,2u,0x30u,0xDB5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB65u:
    if(m==1u&&x==1u&&e==0u){ /* A9 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB65u,2u,0xB8u,0xDB67u);
      sc_v11_op_lda(r,0x00B8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB67u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB67u,3u,0x02u,0xDB6Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB6Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB6Au,2u,0x98u,0xDB6Cu);
      sc_v11_op_lda(r,0x0098u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB6Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB6Cu,3u,0x02u,0xDB6Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB6Fu:
    if(m==1u&&x==1u&&e==0u){ /* 80 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB6Fu,2u,0x2Fu,0xDB71u);
      if(1){c->pc=0xDBA0u;}
      if(c->pc!=0xDB71u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB71u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DB88u:
    if(m==1u&&x==1u&&e==0u){ /* 80 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DB88u,2u,0x0Bu,0xDB8Au);
      if(1){c->pc=0xDB95u;}
      if(c->pc!=0xDB8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDB8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DBB6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DBB6u,2u,0x30u,0xDBB8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DBB6u,2u,0x30u,0xDBB8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03DBB6u,2u,0x30u,0xDBB8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
