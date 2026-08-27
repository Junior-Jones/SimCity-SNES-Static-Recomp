/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000A2(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x028801u:
    if(m==0u&&x==0u&&e==0u){ /* 64 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028801u,2u,0xC3u,0x8803u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028801u,2u,0xC3u,0x8803u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028803u:
    if(m==0u&&x==0u&&e==0u){ /* 9C DD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028803u,3u,0x0Cu,0x8806u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CDDu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C DD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028803u,3u,0x0Cu,0x8806u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CDDu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028806u:
    if(m==0u&&x==0u&&e==0u){ /* 9C DF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028806u,3u,0x0Cu,0x8809u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CDFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C DF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028806u,3u,0x0Cu,0x8809u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CDFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028809u:
    if(m==0u&&x==0u&&e==0u){ /* 9C E0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028809u,3u,0x0Cu,0x880Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CE0u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C E0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028809u,3u,0x0Cu,0x880Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CE0u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02880Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02880Cu,1u,0x60u,0x880Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02880Cu,1u,0x60u,0x880Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028829u:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028829u,3u,0x98u,0x882Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x882Bu))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028829u,3u,0x98u,0x882Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x882Bu))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02882Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02882Cu,3u,0x89u,0x882Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x882Eu))return 0;c->pc=0x899Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9B 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02882Cu,3u,0x89u,0x882Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x882Eu))return 0;c->pc=0x899Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9B 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02882Cu,3u,0x89u,0x882Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x882Eu))return 0;c->pc=0x899Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9B 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02882Cu,3u,0x89u,0x882Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x882Eu))return 0;c->pc=0x899Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02882Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02882Fu,2u,0x20u,0x8831u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02882Fu,2u,0x20u,0x8831u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02882Fu,2u,0x20u,0x8831u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02882Fu,2u,0x20u,0x8831u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028831u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028831u,2u,0x20u,0x8833u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028831u,2u,0x20u,0x8833u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028833u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028833u,2u,0xB3u,0x8835u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028833u,2u,0xB3u,0x8835u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028835u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028835u,2u,0x7Fu,0x8837u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028835u,2u,0x7Fu,0x8837u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028837u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028837u,2u,0xB1u,0x8839u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028837u,2u,0xB1u,0x8839u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028839u:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028839u,4u,0x00u,0x883Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x883Cu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028839u,4u,0x00u,0x883Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x883Cu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02883Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02883Du,3u,0x21u,0x8840u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02883Du,3u,0x21u,0x8840u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02883Du,3u,0x21u,0x8840u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02883Du,3u,0x21u,0x8840u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028840u:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028840u,3u,0x8Du,0x8843u);
      sc_v11_op_lda(r,0x8D64u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 64 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028840u,3u,0x8Du,0x8843u);
      sc_v11_op_lda(r,0x8D64u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028840u,2u,0x64u,0x8842u);
      sc_v11_op_lda(r,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028840u,2u,0x64u,0x8842u);
      sc_v11_op_lda(r,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028842u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028842u,3u,0x21u,0x8845u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028842u,3u,0x21u,0x8845u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028845u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028845u,2u,0x30u,0x8847u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028845u,2u,0x30u,0x8847u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028847u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028847u,2u,0x02u,0x8849u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028849u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028849u,1u,0x0Au,0x884Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02884Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02884Au,1u,0x0Au,0x884Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02884Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02884Bu,1u,0x0Au,0x884Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02884Cu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02884Cu,1u,0x0Au,0x884Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02884Du:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02884Du,1u,0xAAu,0x884Eu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02884Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02884Eu,2u,0x01u,0x8850u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028850u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028850u,3u,0x43u,0x8853u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028853u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028853u,2u,0x18u,0x8855u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028855u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028855u,3u,0x43u,0x8858u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028858u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028858u,2u,0x00u,0x885Au);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02885Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02885Au,3u,0x43u,0x885Du);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02885Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02885Du,2u,0x88u,0x885Fu);
      sc_v11_op_lda(r,0x0088u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02885Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02885Fu,3u,0x43u,0x8862u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028862u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028862u,2u,0x7Eu,0x8864u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028864u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028864u,3u,0x43u,0x8867u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028867u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028867u,2u,0x00u,0x8869u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028869u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028869u,3u,0x43u,0x886Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02886Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02886Cu,2u,0x08u,0x886Eu);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02886Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02886Eu,3u,0x43u,0x8871u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028871u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028871u,2u,0x01u,0x8873u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028873u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028873u,2u,0x02u,0x8875u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028875u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028875u,2u,0x04u,0x8877u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x887Bu;}
      if(c->pc!=0x8877u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8877u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028877u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028877u,1u,0x0Au,0x8878u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028878u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028878u,1u,0xCAu,0x8879u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028879u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028879u,2u,0xFCu,0x887Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8877u;}
      if(c->pc!=0x887Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x887Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02887Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02887Bu,3u,0x42u,0x887Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02887Eu:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02887Eu,4u,0x00u,0x8882u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8881u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028882u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028882u,3u,0x21u,0x8885u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028882u,3u,0x21u,0x8885u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028882u,3u,0x21u,0x8885u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028882u,3u,0x21u,0x8885u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028885u:
    if(m==0u&&x==0u&&e==0u){ /* A9 70 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028885u,3u,0x8Du,0x8888u);
      sc_v11_op_lda(r,0x8D70u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 70 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028885u,3u,0x8Du,0x8888u);
      sc_v11_op_lda(r,0x8D70u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028885u,2u,0x70u,0x8887u);
      sc_v11_op_lda(r,0x0070u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028885u,2u,0x70u,0x8887u);
      sc_v11_op_lda(r,0x0070u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028887u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028887u,3u,0x21u,0x888Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028887u,3u,0x21u,0x888Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02888Au:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02888Au,2u,0x30u,0x888Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02888Au,2u,0x30u,0x888Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02888Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02888Cu,2u,0x02u,0x888Eu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02888Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02888Eu,1u,0x0Au,0x888Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02888Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02888Fu,1u,0x0Au,0x8890u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028890u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028890u,1u,0x0Au,0x8891u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028891u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028891u,1u,0x0Au,0x8892u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028892u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028892u,1u,0xAAu,0x8893u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028893u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028893u,2u,0x01u,0x8895u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028895u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028895u,3u,0x43u,0x8898u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028898u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028898u,2u,0x18u,0x889Au);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02889Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02889Au,3u,0x43u,0x889Du);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02889Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02889Du,2u,0x00u,0x889Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02889Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02889Fu,3u,0x43u,0x88A2u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288A2u:
    if(m==1u&&x==1u&&e==0u){ /* A9 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288A2u,2u,0xA0u,0x88A4u);
      sc_v11_op_lda(r,0x00A0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288A4u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288A4u,3u,0x43u,0x88A7u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288A7u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288A7u,2u,0x7Eu,0x88A9u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288A9u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288A9u,3u,0x43u,0x88ACu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288ACu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288ACu,2u,0x00u,0x88AEu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288AEu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288AEu,3u,0x43u,0x88B1u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288B1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288B1u,2u,0x08u,0x88B3u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288B3u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288B3u,3u,0x43u,0x88B6u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288B6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288B6u,2u,0x01u,0x88B8u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288B8u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288B8u,2u,0x02u,0x88BAu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288BAu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288BAu,2u,0x04u,0x88BCu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x88C0u;}
      if(c->pc!=0x88BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x88BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288BCu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288BCu,1u,0x0Au,0x88BDu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288BDu:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288BDu,1u,0xCAu,0x88BEu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288BEu:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288BEu,2u,0xFCu,0x88C0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x88BCu;}
      if(c->pc!=0x88C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x88C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288C0u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288C0u,3u,0x42u,0x88C3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288C3u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288C3u,4u,0x00u,0x88C7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x88C6u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288C7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288C7u,3u,0x21u,0x88CAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288C7u,3u,0x21u,0x88CAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288C7u,3u,0x21u,0x88CAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288C7u,3u,0x21u,0x88CAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288CAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 74 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288CAu,3u,0x8Du,0x88CDu);
      sc_v11_op_lda(r,0x8D74u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 74 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288CAu,3u,0x8Du,0x88CDu);
      sc_v11_op_lda(r,0x8D74u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288CAu,2u,0x74u,0x88CCu);
      sc_v11_op_lda(r,0x0074u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288CAu,2u,0x74u,0x88CCu);
      sc_v11_op_lda(r,0x0074u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288CCu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288CCu,3u,0x21u,0x88CFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288CCu,3u,0x21u,0x88CFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288CFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288CFu,2u,0x30u,0x88D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288CFu,2u,0x30u,0x88D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288D1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288D1u,2u,0x02u,0x88D3u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288D3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288D3u,1u,0x0Au,0x88D4u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288D4u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288D4u,1u,0x0Au,0x88D5u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288D5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288D5u,1u,0x0Au,0x88D6u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288D6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288D6u,1u,0x0Au,0x88D7u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288D7u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288D7u,1u,0xAAu,0x88D8u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288D8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288D8u,2u,0x01u,0x88DAu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288DAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288DAu,3u,0x43u,0x88DDu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288DDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288DDu,2u,0x18u,0x88DFu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288DFu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288DFu,3u,0x43u,0x88E2u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288E2u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288E2u,2u,0x00u,0x88E4u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288E4u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288E4u,3u,0x43u,0x88E7u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288E7u:
    if(m==1u&&x==1u&&e==0u){ /* A9 A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288E7u,2u,0xA8u,0x88E9u);
      sc_v11_op_lda(r,0x00A8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288E9u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288E9u,3u,0x43u,0x88ECu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288ECu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288ECu,2u,0x7Eu,0x88EEu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288EEu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288EEu,3u,0x43u,0x88F1u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288F1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288F1u,2u,0x00u,0x88F3u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288F3u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288F3u,3u,0x43u,0x88F6u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288F6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288F6u,2u,0x08u,0x88F8u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288F8u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288F8u,3u,0x43u,0x88FBu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288FBu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288FBu,2u,0x01u,0x88FDu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288FDu:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288FDu,2u,0x02u,0x88FFu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0288FFu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0288FFu,2u,0x04u,0x8901u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8905u;}
      if(c->pc!=0x8901u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8901u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028901u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028901u,1u,0x0Au,0x8902u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028902u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028902u,1u,0xCAu,0x8903u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028903u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028903u,2u,0xFCu,0x8905u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8901u;}
      if(c->pc!=0x8905u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8905u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028905u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028905u,3u,0x42u,0x8908u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028908u:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028908u,4u,0x00u,0x890Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x890Bu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02890Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02890Cu,3u,0x21u,0x890Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02890Cu,3u,0x21u,0x890Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02890Cu,3u,0x21u,0x890Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02890Cu,3u,0x21u,0x890Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02890Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 78 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02890Fu,3u,0x8Du,0x8912u);
      sc_v11_op_lda(r,0x8D78u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 78 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02890Fu,3u,0x8Du,0x8912u);
      sc_v11_op_lda(r,0x8D78u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02890Fu,2u,0x78u,0x8911u);
      sc_v11_op_lda(r,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02890Fu,2u,0x78u,0x8911u);
      sc_v11_op_lda(r,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028911u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028911u,3u,0x21u,0x8914u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028911u,3u,0x21u,0x8914u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028914u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028914u,2u,0x30u,0x8916u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028914u,2u,0x30u,0x8916u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028916u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028916u,2u,0x02u,0x8918u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028918u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028918u,1u,0x0Au,0x8919u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028919u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028919u,1u,0x0Au,0x891Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02891Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02891Au,1u,0x0Au,0x891Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02891Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02891Bu,1u,0x0Au,0x891Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02891Cu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02891Cu,1u,0xAAu,0x891Du);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02891Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02891Du,2u,0x01u,0x891Fu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02891Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02891Fu,3u,0x43u,0x8922u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028922u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028922u,2u,0x18u,0x8924u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028924u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028924u,3u,0x43u,0x8927u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028927u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028927u,2u,0x00u,0x8929u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028929u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028929u,3u,0x43u,0x892Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02892Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02892Cu,2u,0xB0u,0x892Eu);
      sc_v11_op_lda(r,0x00B0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02892Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02892Eu,3u,0x43u,0x8931u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028931u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028931u,2u,0x7Eu,0x8933u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028933u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028933u,3u,0x43u,0x8936u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028936u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028936u,2u,0x00u,0x8938u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028938u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028938u,3u,0x43u,0x893Bu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02893Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02893Bu,2u,0x08u,0x893Du);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02893Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02893Du,3u,0x43u,0x8940u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028940u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028940u,2u,0x01u,0x8942u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028942u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028942u,2u,0x02u,0x8944u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028944u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028944u,2u,0x04u,0x8946u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x894Au;}
      if(c->pc!=0x8946u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8946u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028946u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028946u,1u,0x0Au,0x8947u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028947u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028947u,1u,0xCAu,0x8948u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028948u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028948u,2u,0xFCu,0x894Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8946u;}
      if(c->pc!=0x894Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x894Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02894Au:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02894Au,3u,0x42u,0x894Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02894Du:
    if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02894Du,4u,0x00u,0x8951u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8950u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028951u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028951u,3u,0x21u,0x8954u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028951u,3u,0x21u,0x8954u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028951u,3u,0x21u,0x8954u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028951u,3u,0x21u,0x8954u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028954u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7C 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028954u,3u,0x8Du,0x8957u);
      sc_v11_op_lda(r,0x8D7Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 7C 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028954u,3u,0x8Du,0x8957u);
      sc_v11_op_lda(r,0x8D7Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028954u,2u,0x7Cu,0x8956u);
      sc_v11_op_lda(r,0x007Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028954u,2u,0x7Cu,0x8956u);
      sc_v11_op_lda(r,0x007Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028956u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028956u,3u,0x21u,0x8959u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028956u,3u,0x21u,0x8959u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028959u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028959u,2u,0x30u,0x895Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028959u,2u,0x30u,0x895Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02895Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02895Bu,2u,0x02u,0x895Du);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02895Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02895Du,1u,0x0Au,0x895Eu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02895Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02895Eu,1u,0x0Au,0x895Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02895Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02895Fu,1u,0x0Au,0x8960u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028960u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028960u,1u,0x0Au,0x8961u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028961u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028961u,1u,0xAAu,0x8962u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028962u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028962u,2u,0x01u,0x8964u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028964u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028964u,3u,0x43u,0x8967u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028967u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028967u,2u,0x18u,0x8969u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028969u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028969u,3u,0x43u,0x896Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02896Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02896Cu,2u,0x00u,0x896Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02896Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02896Eu,3u,0x43u,0x8971u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028971u:
    if(m==1u&&x==1u&&e==0u){ /* A9 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028971u,2u,0xB8u,0x8973u);
      sc_v11_op_lda(r,0x00B8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028973u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028973u,3u,0x43u,0x8976u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028976u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028976u,2u,0x7Eu,0x8978u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028978u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028978u,3u,0x43u,0x897Bu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02897Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02897Bu,2u,0x00u,0x897Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02897Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02897Du,3u,0x43u,0x8980u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028980u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028980u,2u,0x08u,0x8982u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028982u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028982u,3u,0x43u,0x8985u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028985u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028985u,2u,0x01u,0x8987u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028987u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028987u,2u,0x02u,0x8989u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028989u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028989u,2u,0x04u,0x898Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x898Fu;}
      if(c->pc!=0x898Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x898Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02898Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02898Bu,1u,0x0Au,0x898Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02898Cu:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02898Cu,1u,0xCAu,0x898Du);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02898Du:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02898Du,2u,0xFCu,0x898Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x898Bu;}
      if(c->pc!=0x898Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x898Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02898Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02898Fu,3u,0x42u,0x8992u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028992u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028992u,2u,0x20u,0x8994u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028994u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028994u,2u,0xB3u,0x8996u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028996u:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028996u,2u,0x80u,0x8998u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028998u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028998u,2u,0xB1u,0x899Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02899Au:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02899Au,1u,0x60u,0x899Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02899Bu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02899Bu,2u,0x30u,0x899Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02899Bu,2u,0x30u,0x899Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02899Bu,2u,0x30u,0x899Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289A3u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289A3u,3u,0x0Du,0x89A6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289A6u:
    if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289A6u,2u,0x00u,0x89A8u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B4u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B4u,2u,0x20u,0x89B6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B4u,2u,0x20u,0x89B6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B4u,2u,0x20u,0x89B6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B6u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B6u,1u,0xABu,0x89B7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B7u:
    if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B7u,1u,0x7Au,0x89B8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289B8u:
    if(m==1u&&x==1u&&e==0u){ /* 99 57 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289B8u,3u,0x0Du,0x89BBu);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0D57u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289BBu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289BBu,2u,0x20u,0x89BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289BDu:
    if(m==0u&&x==1u&&e==0u){ /* AD 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289BDu,3u,0x0Du,0x89C0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C0u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C0u,1u,0x18u,0x89C1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C1u:
    if(m==0u&&x==1u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C1u,3u,0x00u,0x89C4u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C4u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C4u,3u,0x0Du,0x89C7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C7u:
    if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C7u,1u,0xC8u,0x89C8u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289C8u:
    if(m==0u&&x==1u&&e==0u){ /* C0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289C8u,2u,0x08u,0x89CAu);
      sc_v11_op_compare(r,c->y,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D0u,2u,0x20u,0x89D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D0u,2u,0x20u,0x89D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D0u,2u,0x20u,0x89D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D2u:
    if(m==0u&&x==1u&&e==0u){ /* AD 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D2u,3u,0x0Du,0x89D5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D5u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D5u,1u,0x18u,0x89D6u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D6u:
    if(m==0u&&x==1u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D6u,3u,0x00u,0x89D9u);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289D9u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289D9u,3u,0x0Du,0x89DCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289DCu:
    if(m==0u&&x==1u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289DCu,3u,0x00u,0x89DFu);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289DFu:
    if(m==0u&&x==1u&&e==0u){ /* 90 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289DFu,2u,0xC5u,0x89E1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89A6u;}
      if(c->pc!=0x89E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289E1u:
    if(m==0u&&x==1u&&e==0u){ /* EE 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289E1u,3u,0x0Du,0x89E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0D61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289E4u:
    if(m==0u&&x==1u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289E4u,3u,0x0Du,0x89E7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289E7u:
    if(m==0u&&x==1u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289E7u,3u,0x00u,0x89EAu);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289EAu:
    if(m==0u&&x==1u&&e==0u){ /* 90 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289EAu,2u,0xB7u,0x89ECu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89A3u;}
      if(c->pc!=0x89ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289ECu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289ECu,1u,0x60u,0x89EDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289EDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289EDu,3u,0x98u,0x89F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89EFu))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289EDu,3u,0x98u,0x89F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89EFu))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289F0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289F0u,2u,0x30u,0x89F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289F0u,2u,0x30u,0x89F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289F0u,2u,0x30u,0x89F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289F0u,2u,0x30u,0x89F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289F2u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289F2u,3u,0x0Du,0x89F5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289F5u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289F5u,3u,0x0Du,0x89F8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D65u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289F8u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289F8u,3u,0x0Du,0x89FBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D61u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289FBu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289FBu,3u,0x0Du,0x89FEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289FBu,3u,0x0Du,0x89FEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0289FEu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289FEu,3u,0x00u,0x8A01u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0289FEu,2u,0x00u,0x8A00u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A01u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A01u,1u,0x5Au,0x8A02u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A02u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EF 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A02u,3u,0x91u,0x8A05u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A04u))return 0;c->pc=0x91EFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A05u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A05u,2u,0x0Du,0x8A07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A14u;}
      if(c->pc!=0x8A07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A05u,2u,0x0Du,0x8A07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A14u;}
      if(c->pc!=0x8A07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A05u,2u,0x0Du,0x8A07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A14u;}
      if(c->pc!=0x8A07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A05u,2u,0x0Du,0x8A07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A14u;}
      if(c->pc!=0x8A07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A07u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A07u,2u,0x20u,0x8A09u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A07u,2u,0x20u,0x8A09u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A07u,2u,0x20u,0x8A09u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A07u,2u,0x20u,0x8A09u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A09u:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A09u,1u,0x8Bu,0x8A0Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A09u,1u,0x8Bu,0x8A0Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A0Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A0Au,2u,0x02u,0x8A0Cu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A0Au,2u,0x02u,0x8A0Cu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A0Cu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A0Cu,1u,0x48u,0x8A0Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A0Cu,1u,0x48u,0x8A0Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A0Du:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A0Du,1u,0xABu,0x8A0Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A0Du,1u,0xABu,0x8A0Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A0Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 11 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A0Eu,3u,0x8Fu,0x8A11u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A10u))return 0;c->pc=0x8F11u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 11 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A0Eu,3u,0x8Fu,0x8A11u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A10u))return 0;c->pc=0x8F11u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A11u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A11u,2u,0x20u,0x8A13u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A11u,2u,0x20u,0x8A13u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A11u,2u,0x20u,0x8A13u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A11u,2u,0x20u,0x8A13u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A13u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A13u,1u,0xABu,0x8A14u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A13u,1u,0xABu,0x8A14u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A14u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A14u,2u,0x20u,0x8A16u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A14u,2u,0x20u,0x8A16u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A14u,2u,0x20u,0x8A16u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A14u,2u,0x20u,0x8A16u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A16u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A16u,2u,0x10u,0x8A18u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A16u,2u,0x10u,0x8A18u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A18u:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A18u,1u,0x7Au,0x8A19u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A19u:
    if(m==1u&&x==0u&&e==0u){ /* 99 57 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A19u,3u,0x0Du,0x8A1Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0D57u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A1Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A1Cu,2u,0x20u,0x8A1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A1Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A1Eu,3u,0x0Du,0x8A21u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A21u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A21u,1u,0x18u,0x8A22u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A22u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A22u,3u,0x00u,0x8A25u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A25u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A25u,3u,0x0Du,0x8A28u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A28u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A28u,1u,0xC8u,0x8A29u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A29u:
    if(m==0u&&x==0u&&e==0u){ /* C0 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A29u,3u,0x00u,0x8A2Cu);
      sc_v11_op_compare(r,c->y,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A2Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A2Cu,2u,0xD3u,0x8A2Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A01u;}
      if(c->pc!=0x8A2Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A2Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9D 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A2Eu,3u,0x90u,0x8A31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A30u))return 0;c->pc=0x909Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A31u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A31u,2u,0x20u,0x8A33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A31u,2u,0x20u,0x8A33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A31u,2u,0x20u,0x8A33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A31u,2u,0x20u,0x8A33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A33u:
    if(m==0u&&x==0u&&e==0u){ /* AD 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A33u,3u,0x0Du,0x8A36u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A33u,3u,0x0Du,0x8A36u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A36u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A36u,1u,0x18u,0x8A37u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A36u,1u,0x18u,0x8A37u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A37u:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A37u,3u,0x00u,0x8A3Au);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A37u,3u,0x00u,0x8A3Au);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A3Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A3Au,3u,0x0Du,0x8A3Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A3Au,3u,0x0Du,0x8A3Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A3Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A3Du,3u,0x00u,0x8A40u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A3Du,3u,0x00u,0x8A40u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A40u:
    if(m==0u&&x==0u&&e==0u){ /* 90 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A40u,2u,0xBCu,0x8A42u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89FEu;}
      if(c->pc!=0x8A42u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A42u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A40u,2u,0xBCu,0x8A42u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89FEu;}
      if(c->pc!=0x8A42u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A42u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A42u:
    if(m==0u&&x==0u&&e==0u){ /* EE 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A42u,3u,0x0Du,0x8A45u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0D61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A42u,3u,0x0Du,0x8A45u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0D61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A45u:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A45u,3u,0x0Du,0x8A48u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A45u,3u,0x0Du,0x8A48u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A48u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A48u,3u,0x00u,0x8A4Bu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A48u,3u,0x00u,0x8A4Bu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A4Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A4Bu,2u,0x0Au,0x8A4Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A57u;}
      if(c->pc!=0x8A4Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A4Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A4Bu,2u,0x0Au,0x8A4Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A57u;}
      if(c->pc!=0x8A4Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A4Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A4Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A4Du,3u,0x0Du,0x8A50u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D65u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A4Du,3u,0x0Du,0x8A50u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D65u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A50u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A50u,1u,0x18u,0x8A51u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A50u,1u,0x18u,0x8A51u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A51u:
    if(m==0u&&x==0u&&e==0u){ /* 69 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A51u,3u,0x00u,0x8A54u);
      sc_v11_op_adc(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A51u,3u,0x00u,0x8A54u);
      sc_v11_op_adc(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A54u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A54u,3u,0x0Du,0x8A57u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A54u,3u,0x0Du,0x8A57u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A57u:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A57u,3u,0x0Du,0x8A5Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A57u,3u,0x0Du,0x8A5Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A5Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A5Au,3u,0x00u,0x8A5Du);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A5Au,3u,0x00u,0x8A5Du);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A5Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 9C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A5Du,2u,0x9Cu,0x8A5Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89FBu;}
      if(c->pc!=0x8A5Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A5Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 9C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A5Du,2u,0x9Cu,0x8A5Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x89FBu;}
      if(c->pc!=0x8A5Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A5Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A5Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2F 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A5Fu,3u,0x88u,0x8A62u);
      c->pc=0x882Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 2F 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A5Fu,3u,0x88u,0x8A62u);
      c->pc=0x882Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A62u:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A62u,3u,0x98u,0x8A65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A64u))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A62u,3u,0x98u,0x8A65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A64u))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A65u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A65u,2u,0x30u,0x8A67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A65u,2u,0x30u,0x8A67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A65u,2u,0x30u,0x8A67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A65u,2u,0x30u,0x8A67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A67u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A67u,3u,0x0Du,0x8A6Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A6Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A6Au,3u,0x0Du,0x8A6Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D65u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A6Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A6Du,3u,0x0Du,0x8A70u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D61u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A70u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A70u,3u,0x0Du,0x8A73u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A70u,3u,0x0Du,0x8A73u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A73u:
    if(m==0u&&x==0u&&e==0u){ /* 64 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A73u,2u,0x79u,0x8A75u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A73u,2u,0x79u,0x8A75u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A75u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A75u,3u,0x00u,0x8A78u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A75u,2u,0x00u,0x8A77u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A78u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A78u,1u,0x5Au,0x8A79u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A79u:
    if(m==0u&&x==0u&&e==0u){ /* 20 8F 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A79u,3u,0x91u,0x8A7Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A7Bu))return 0;c->pc=0x918Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A7Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A7Cu,2u,0x0Du,0x8A7Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A8Bu;}
      if(c->pc!=0x8A7Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A7Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A7Cu,2u,0x0Du,0x8A7Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A8Bu;}
      if(c->pc!=0x8A7Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A7Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A7Cu,2u,0x0Du,0x8A7Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A8Bu;}
      if(c->pc!=0x8A7Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A7Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A7Cu,2u,0x0Du,0x8A7Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A8Bu;}
      if(c->pc!=0x8A7Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A7Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A7Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A7Eu,2u,0x20u,0x8A80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A7Eu,2u,0x20u,0x8A80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A7Eu,2u,0x20u,0x8A80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A7Eu,2u,0x20u,0x8A80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A80u:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A80u,1u,0x8Bu,0x8A81u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A80u,1u,0x8Bu,0x8A81u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A81u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A81u,2u,0x02u,0x8A83u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A81u,2u,0x02u,0x8A83u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A83u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A83u,1u,0x48u,0x8A84u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A83u,1u,0x48u,0x8A84u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A84u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A84u,1u,0xABu,0x8A85u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A84u,1u,0xABu,0x8A85u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A85u:
    if(m==1u&&x==0u&&e==0u){ /* 20 11 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A85u,3u,0x8Fu,0x8A88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A87u))return 0;c->pc=0x8F11u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 11 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A85u,3u,0x8Fu,0x8A88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8A87u))return 0;c->pc=0x8F11u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A88u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A88u,2u,0x20u,0x8A8Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A88u,2u,0x20u,0x8A8Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A88u,2u,0x20u,0x8A8Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A88u,2u,0x20u,0x8A8Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A8Au:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Au,1u,0xABu,0x8A8Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Au,1u,0xABu,0x8A8Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A8Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Bu,2u,0x20u,0x8A8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Bu,2u,0x20u,0x8A8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Bu,2u,0x20u,0x8A8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Bu,2u,0x20u,0x8A8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A8Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Du,2u,0x10u,0x8A8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Du,2u,0x10u,0x8A8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A8Fu:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A8Fu,1u,0x7Au,0x8A90u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A90u:
    if(m==1u&&x==0u&&e==0u){ /* 99 57 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A90u,3u,0x0Du,0x8A93u);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0D57u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A93u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A93u,2u,0x20u,0x8A95u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A95u:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A95u,3u,0x0Du,0x8A98u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A98u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A98u,1u,0x18u,0x8A99u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A99u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A99u,3u,0x00u,0x8A9Cu);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A9Cu,3u,0x0Du,0x8A9Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028A9Fu:
    if(m==0u&&x==0u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028A9Fu,2u,0x79u,0x8AA1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AA1u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AA1u,1u,0xC8u,0x8AA2u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AA2u:
    if(m==0u&&x==0u&&e==0u){ /* C0 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AA2u,3u,0x00u,0x8AA5u);
      sc_v11_op_compare(r,c->y,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AA5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AA5u,2u,0xD1u,0x8AA7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A78u;}
      if(c->pc!=0x8AA7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AA7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AA7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9D 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AA7u,3u,0x90u,0x8AAAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8AA9u))return 0;c->pc=0x909Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AAAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AAAu,2u,0x20u,0x8AACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AAAu,2u,0x20u,0x8AACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AAAu,2u,0x20u,0x8AACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AAAu,2u,0x20u,0x8AACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AACu:
    if(m==0u&&x==0u&&e==0u){ /* AD 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AACu,3u,0x0Du,0x8AAFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AACu,3u,0x0Du,0x8AAFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AAFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AAFu,1u,0x18u,0x8AB0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AAFu,1u,0x18u,0x8AB0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AB0u:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AB0u,3u,0x00u,0x8AB3u);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AB0u,3u,0x00u,0x8AB3u);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AB3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AB3u,3u,0x0Du,0x8AB6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AB3u,3u,0x0Du,0x8AB6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AB6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AB6u,3u,0x00u,0x8AB9u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AB6u,3u,0x00u,0x8AB9u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AB9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AB9u,2u,0xB8u,0x8ABBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8A73u;}
      if(c->pc!=0x8ABBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8ABBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AB9u,2u,0xB8u,0x8ABBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8A73u;}
      if(c->pc!=0x8ABBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8ABBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028ABBu:
    if(m==0u&&x==0u&&e==0u){ /* EE 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ABBu,3u,0x0Du,0x8ABEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0D61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ABBu,3u,0x0Du,0x8ABEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0D61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028ABEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ABEu,3u,0x0Du,0x8AC1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ABEu,3u,0x0Du,0x8AC1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AC1u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC1u,1u,0x4Au,0x8AC2u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC1u,1u,0x4Au,0x8AC2u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AC2u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC2u,2u,0x0Au,0x8AC4u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8ACEu;}
      if(c->pc!=0x8AC4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AC4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC2u,2u,0x0Au,0x8AC4u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8ACEu;}
      if(c->pc!=0x8AC4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AC4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AC4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC4u,3u,0x0Du,0x8AC7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D65u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC4u,3u,0x0Du,0x8AC7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D65u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AC7u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC7u,1u,0x18u,0x8AC8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC7u,1u,0x18u,0x8AC8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AC8u:
    if(m==0u&&x==0u&&e==0u){ /* 69 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC8u,3u,0x00u,0x8ACBu);
      sc_v11_op_adc(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AC8u,3u,0x00u,0x8ACBu);
      sc_v11_op_adc(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028ACBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ACBu,3u,0x0Du,0x8ACEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 65 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ACBu,3u,0x0Du,0x8ACEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028ACEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ACEu,3u,0x0Du,0x8AD1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ACEu,3u,0x0Du,0x8AD1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AD1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AD1u,3u,0x00u,0x8AD4u);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AD1u,3u,0x00u,0x8AD4u);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AD4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AD4u,2u,0x9Au,0x8AD6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8A70u;}
      if(c->pc!=0x8AD6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AD6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AD4u,2u,0x9Au,0x8AD6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8A70u;}
      if(c->pc!=0x8AD6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AD6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AD6u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2F 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AD6u,3u,0x88u,0x8AD9u);
      c->pc=0x882Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 2F 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AD6u,3u,0x88u,0x8AD9u);
      c->pc=0x882Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AD9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AD9u,3u,0x98u,0x8ADCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8ADBu))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 92 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AD9u,3u,0x98u,0x8ADCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8ADBu))return 0;c->pc=0x9892u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028ADCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ADCu,2u,0x30u,0x8ADEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ADCu,2u,0x30u,0x8ADEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ADCu,2u,0x30u,0x8ADEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ADCu,2u,0x30u,0x8ADEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028ADEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028ADEu,3u,0x0Du,0x8AE1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AE1u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AE1u,3u,0x0Du,0x8AE4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D61u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AE4u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AE4u,3u,0x0Du,0x8AE7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AE4u,3u,0x0Du,0x8AE7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AE7u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AE7u,3u,0x00u,0x8AEAu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AE7u,2u,0x00u,0x8AE9u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AEAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AEAu,2u,0x20u,0x8AECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AECu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AECu,2u,0x10u,0x8AEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AEEu:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AEEu,1u,0x5Au,0x8AEFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AEFu:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AEFu,1u,0x8Bu,0x8AF0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AF0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF0u,2u,0x02u,0x8AF2u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AF2u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF2u,1u,0x48u,0x8AF3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AF3u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF3u,1u,0xABu,0x8AF4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AF4u:
    if(m==1u&&x==0u&&e==0u){ /* 20 11 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF4u,3u,0x8Fu,0x8AF7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8AF6u))return 0;c->pc=0x8F11u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AF7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF7u,2u,0x20u,0x8AF9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF7u,2u,0x20u,0x8AF9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF7u,2u,0x20u,0x8AF9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF7u,2u,0x20u,0x8AF9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AF9u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF9u,2u,0x10u,0x8AFBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AF9u,2u,0x10u,0x8AFBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AFBu:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AFBu,1u,0xABu,0x8AFCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AFCu:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AFCu,1u,0x7Au,0x8AFDu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028AFDu:
    if(m==1u&&x==0u&&e==0u){ /* 99 57 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028AFDu,3u,0x0Du,0x8B00u);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0D57u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B00u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B00u,2u,0x20u,0x8B02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B02u:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B02u,3u,0x0Du,0x8B05u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B05u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B05u,1u,0x18u,0x8B06u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B06u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B06u,3u,0x00u,0x8B09u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B09u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B09u,3u,0x0Du,0x8B0Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D63u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B0Cu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B0Cu,1u,0xC8u,0x8B0Du);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B0Du:
    if(m==0u&&x==0u&&e==0u){ /* C0 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B0Du,3u,0x00u,0x8B10u);
      sc_v11_op_compare(r,c->y,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B10u:
    if(m==0u&&x==0u&&e==0u){ /* D0 D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B10u,2u,0xD8u,0x8B12u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8AEAu;}
      if(c->pc!=0x8B12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B12u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9D 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B12u,3u,0x90u,0x8B15u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8B14u))return 0;c->pc=0x909Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B15u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B15u,2u,0x20u,0x8B17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B15u,2u,0x20u,0x8B17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B15u,2u,0x20u,0x8B17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B15u,2u,0x20u,0x8B17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B17u:
    if(m==0u&&x==0u&&e==0u){ /* AD 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B17u,3u,0x0Du,0x8B1Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B17u,3u,0x0Du,0x8B1Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B1Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B1Au,1u,0x18u,0x8B1Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B1Au,1u,0x18u,0x8B1Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B1Bu:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B1Bu,3u,0x00u,0x8B1Eu);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B1Bu,3u,0x00u,0x8B1Eu);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B1Eu,3u,0x0Du,0x8B21u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B1Eu,3u,0x0Du,0x8B21u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D5Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B21u:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B21u,3u,0x00u,0x8B24u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B21u,3u,0x00u,0x8B24u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B24u:
    if(m==0u&&x==0u&&e==0u){ /* 90 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B24u,2u,0xC1u,0x8B26u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8AE7u;}
      if(c->pc!=0x8B26u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B26u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B24u,2u,0xC1u,0x8B26u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8AE7u;}
      if(c->pc!=0x8B26u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B26u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B26u:
    if(m==0u&&x==0u&&e==0u){ /* EE 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B26u,3u,0x0Du,0x8B29u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0D61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B26u,3u,0x0Du,0x8B29u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0D61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B29u:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B29u,3u,0x0Du,0x8B2Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 61 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B29u,3u,0x0Du,0x8B2Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B2Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B2Cu,3u,0x00u,0x8B2Fu);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B2Cu,3u,0x00u,0x8B2Fu);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B2Fu,2u,0xB3u,0x8B31u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8AE4u;}
      if(c->pc!=0x8B31u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B31u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B2Fu,2u,0xB3u,0x8B31u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8AE4u;}
      if(c->pc!=0x8B31u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B31u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B31u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2F 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B31u,3u,0x88u,0x8B34u);
      c->pc=0x882Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 2F 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B31u,3u,0x88u,0x8B34u);
      c->pc=0x882Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B46u:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B46u,3u,0x00u,0x8B49u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B49u:
    if(m==0u&&x==0u&&e==0u){ /* E0 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B49u,3u,0x00u,0x8B4Cu);
      sc_v11_op_compare(r,c->x,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B4Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B4Cu,2u,0x17u,0x8B4Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B65u;}
      if(c->pc!=0x8B4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B4Eu:
    if(m==0u&&x==0u&&e==0u){ /* E0 64 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B4Eu,3u,0x03u,0x8B51u);
      sc_v11_op_compare(r,c->x,0x0364u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B51u:
    if(m==0u&&x==0u&&e==0u){ /* F0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B51u,2u,0x12u,0x8B53u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B65u;}
      if(c->pc!=0x8B53u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B53u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B53u:
    if(m==0u&&x==0u&&e==0u){ /* E0 65 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B53u,3u,0x03u,0x8B56u);
      sc_v11_op_compare(r,c->x,0x0365u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B56u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B56u,2u,0x0Du,0x8B58u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B65u;}
      if(c->pc!=0x8B58u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B58u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B58u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B58u,3u,0x00u,0x8B5Bu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B5Bu:
    if(m==0u&&x==0u&&e==0u){ /* E0 54 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B5Bu,3u,0x03u,0x8B5Eu);
      sc_v11_op_compare(r,c->x,0x0354u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B5Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B5Eu,2u,0x05u,0x8B60u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B65u;}
      if(c->pc!=0x8B60u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B60u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B60u:
    if(m==0u&&x==0u&&e==0u){ /* E0 55 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B60u,3u,0x03u,0x8B63u);
      sc_v11_op_compare(r,c->x,0x0355u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B63u:
    if(m==0u&&x==0u&&e==0u){ /* D0 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B63u,2u,0x32u,0x8B65u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B97u;}
      if(c->pc!=0x8B65u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B65u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B77u:
    if(m==0u&&x==0u&&e==0u){ /* A5 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B77u,2u,0x40u,0x8B79u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x40u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B79u:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B79u,3u,0x00u,0x8B7Cu);
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B7Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B7Cu,2u,0x05u,0x8B7Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B83u;}
      if(c->pc!=0x8B7Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B7Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B7Eu:
    if(m==0u&&x==0u&&e==0u){ /* A2 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B7Eu,3u,0x00u,0x8B81u);
      sc_v11_op_ldx(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B81u:
    if(m==0u&&x==0u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B81u,2u,0x10u,0x8B83u);
      if(1){c->pc=0x8B93u;}
      if(c->pc!=0x8B83u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B83u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B83u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B83u,3u,0x0Bu,0x8B86u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B86u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B86u,1u,0x1Au,0x8B87u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B87u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B87u,3u,0x00u,0x8B8Au);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B8Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B8Au,3u,0x0Bu,0x8B8Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B8Du:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B8Du,1u,0x8Au,0x8B8Eu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B8Eu,1u,0x18u,0x8B8Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 3B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B8Fu,3u,0x0Bu,0x8B92u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B92u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B92u,1u,0xAAu,0x8B93u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B97u:
    if(m==0u&&x==0u&&e==0u){ /* E0 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B97u,3u,0x00u,0x8B9Au);
      sc_v11_op_compare(r,c->x,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B9Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B9Au,2u,0x11u,0x8B9Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8BADu;}
      if(c->pc!=0x8B9Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B9Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B9Cu:
    if(m==0u&&x==0u&&e==0u){ /* E0 56 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B9Cu,3u,0x03u,0x8B9Fu);
      sc_v11_op_compare(r,c->x,0x0356u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028B9Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 35 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028B9Fu,2u,0x35u,0x8BA1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8BD6u;}
      if(c->pc!=0x8BA1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BA1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BA1u:
    if(m==0u&&x==0u&&e==0u){ /* E0 64 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BA1u,3u,0x03u,0x8BA4u);
      sc_v11_op_compare(r,c->x,0x0364u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BA4u:
    if(m==0u&&x==0u&&e==0u){ /* B0 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BA4u,2u,0x30u,0x8BA6u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8BD6u;}
      if(c->pc!=0x8BA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BA6u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BA6u,1u,0x8Au,0x8BA7u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BA7u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BA7u,1u,0x38u,0x8BA8u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BA8u:
    if(m==0u&&x==0u&&e==0u){ /* E9 26 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BA8u,3u,0x03u,0x8BABu);
      sc_v11_op_sbc(r,0x0326u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BABu:
    if(m==0u&&x==0u&&e==0u){ /* 80 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BABu,2u,0x20u,0x8BADu);
      if(1){c->pc=0x8BCDu;}
      if(c->pc!=0x8BADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BADu:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BADu,3u,0x0Du,0x8BB0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BB0u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BB0u,3u,0x00u,0x8BB3u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BB3u:
    if(m==0u&&x==0u&&e==0u){ /* D0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BB3u,2u,0x17u,0x8BB5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8BCCu;}
      if(c->pc!=0x8BB5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BB5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BB5u:
    if(m==0u&&x==0u&&e==0u){ /* E0 3D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BB5u,3u,0x00u,0x8BB8u);
      sc_v11_op_compare(r,c->x,0x003Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BB8u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BB8u,2u,0x0Fu,0x8BBAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BC9u;}
      if(c->pc!=0x8BBAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BBAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BBAu:
    if(m==0u&&x==0u&&e==0u){ /* E0 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BBAu,3u,0x00u,0x8BBDu);
      sc_v11_op_compare(r,c->x,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BBDu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BBDu,2u,0x0Au,0x8BBFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BC9u;}
      if(c->pc!=0x8BBFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BBFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BBFu:
    if(m==0u&&x==0u&&e==0u){ /* E0 60 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BBFu,3u,0x00u,0x8BC2u);
      sc_v11_op_compare(r,c->x,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BC2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BC2u,2u,0x08u,0x8BC4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8BCCu;}
      if(c->pc!=0x8BC4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BC4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BC4u:
    if(m==0u&&x==0u&&e==0u){ /* E0 70 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BC4u,3u,0x00u,0x8BC7u);
      sc_v11_op_compare(r,c->x,0x0070u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BC7u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BC7u,2u,0x03u,0x8BC9u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8BCCu;}
      if(c->pc!=0x8BC9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BC9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BC9u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 93 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BC9u,3u,0x8Cu,0x8BCCu);
      c->pc=0x8C93u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BCCu:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BCCu,1u,0x8Au,0x8BCDu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BCDu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BCDu,1u,0x4Au,0x8BCEu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BCEu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BCEu,1u,0x4Au,0x8BCFu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BCFu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BCFu,1u,0x4Au,0x8BD0u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BD0u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BD0u,1u,0x4Au,0x8BD1u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BD1u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BD1u,1u,0xAAu,0x8BD2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BD2u:
    if(m==0u&&x==0u&&e==0u){ /* BD 7D 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BD2u,3u,0x93u,0x8BD5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x937Du)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BD5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BD5u,1u,0x60u,0x8BD6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BD6u:
    if(m==0u&&x==0u&&e==0u){ /* E0 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BD6u,3u,0x01u,0x8BD9u);
      sc_v11_op_compare(r,c->x,0x0137u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BD9u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BD9u,2u,0x03u,0x8BDBu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8BDEu;}
      if(c->pc!=0x8BDBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BDBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BDBu:
    if(m==0u&&x==0u&&e==0u){ /* 4C FC 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BDBu,3u,0x8Cu,0x8BDEu);
      c->pc=0x8CFCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BDEu:
    if(m==0u&&x==0u&&e==0u){ /* E0 76 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BDEu,3u,0x03u,0x8BE1u);
      sc_v11_op_compare(r,c->x,0x0376u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BE1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BE1u,2u,0x08u,0x8BE3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8BEBu;}
      if(c->pc!=0x8BE3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BE3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BE3u:
    if(m==0u&&x==0u&&e==0u){ /* E0 9A 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BE3u,3u,0x03u,0x8BE6u);
      sc_v11_op_compare(r,c->x,0x039Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BE6u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BE6u,2u,0x03u,0x8BE8u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8BEBu;}
      if(c->pc!=0x8BE8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BE8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BE8u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 5A 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BE8u,3u,0x8Du,0x8BEBu);
      c->pc=0x8D5Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BEBu:
    if(m==0u&&x==0u&&e==0u){ /* E0 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BEBu,3u,0x01u,0x8BEEu);
      sc_v11_op_compare(r,c->x,0x01F4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BEEu:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BEEu,2u,0x03u,0x8BF0u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8BF3u;}
      if(c->pc!=0x8BF0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BF0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BF0u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 9D 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BF0u,3u,0x8Du,0x8BF3u);
      c->pc=0x8D9Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BF3u:
    if(m==0u&&x==0u&&e==0u){ /* E0 9A 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BF3u,3u,0x03u,0x8BF6u);
      sc_v11_op_compare(r,c->x,0x039Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BF6u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BF6u,2u,0x08u,0x8BF8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C00u;}
      if(c->pc!=0x8BF8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BF8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BF8u:
    if(m==0u&&x==0u&&e==0u){ /* E0 BE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BF8u,3u,0x03u,0x8BFBu);
      sc_v11_op_compare(r,c->x,0x03BEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BFBu:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BFBu,2u,0x03u,0x8BFDu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8C00u;}
      if(c->pc!=0x8BFDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BFDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028BFDu:
    if(m==0u&&x==0u&&e==0u){ /* 4C EC 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028BFDu,3u,0x8Du,0x8C00u);
      c->pc=0x8DECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
