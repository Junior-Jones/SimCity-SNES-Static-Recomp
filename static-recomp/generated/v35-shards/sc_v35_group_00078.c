/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00078(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01E013u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E013u,3u,0x21u,0xE016u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E013u,3u,0x21u,0xE016u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E013u,3u,0x21u,0xE016u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E016u:
    if(m==0u&&x==0u&&e==0u){ /* A9 70 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E016u,3u,0x8Du,0xE019u);
      sc_v11_op_lda(r,0x8D70u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 70 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E016u,3u,0x8Du,0xE019u);
      sc_v11_op_lda(r,0x8D70u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E016u,2u,0x70u,0xE018u);
      sc_v11_op_lda(r,0x0070u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E018u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E018u,3u,0x21u,0xE01Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E01Bu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E01Bu,2u,0x30u,0xE01Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E058u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E058u,3u,0x21u,0xE05Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E058u,3u,0x21u,0xE05Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E058u,3u,0x21u,0xE05Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E05Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 78 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E05Bu,3u,0x8Du,0xE05Eu);
      sc_v11_op_lda(r,0x8D78u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 78 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E05Bu,3u,0x8Du,0xE05Eu);
      sc_v11_op_lda(r,0x8D78u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E05Bu,2u,0x78u,0xE05Du);
      sc_v11_op_lda(r,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E05Du:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E05Du,3u,0x21u,0xE060u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E060u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E060u,2u,0x30u,0xE062u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E09Du:
    if(m==0u&&x==1u&&e==0u){ /* 22 9D CA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E09Du,4u,0x00u,0xE0A1u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0A0u))return 0;
      c->pbr=0x00u;c->pc=0xCA9Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 9D CA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E09Du,4u,0x00u,0xE0A1u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0A0u))return 0;
      c->pbr=0x00u;c->pc=0xCA9Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 9D CA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E09Du,4u,0x00u,0xE0A1u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0A0u))return 0;
      c->pbr=0x00u;c->pc=0xCA9Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E0A1u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0A1u,2u,0x30u,0xE0A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0A1u,2u,0x30u,0xE0A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0A1u,2u,0x30u,0xE0A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E0C8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0C8u,2u,0x20u,0xE0CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0C8u,2u,0x20u,0xE0CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0C8u,2u,0x20u,0xE0CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E0CAu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0CAu,2u,0x10u,0xE0CCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E0D5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 6C E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0D5u,3u,0xE1u,0xE0D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE0D7u))return 0;c->pc=0xE16Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E0D8u:
    if(m==0u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0D8u,4u,0x00u,0xE0DCu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0DBu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0D8u,4u,0x00u,0xE0DCu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0DBu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0D8u,4u,0x00u,0xE0DCu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE0DBu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E0DCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0DCu,2u,0x20u,0xE0DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0DCu,2u,0x20u,0xE0DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0DCu,2u,0x20u,0xE0DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E0DEu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E0DEu,2u,0x10u,0xE0E0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E111u:
    if(m==0u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E111u,2u,0x02u,0xE113u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E111u,3u,0x00u,0xE114u);
      sc_v11_op_ldx(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E111u,2u,0x02u,0xE113u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E114u:
    if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E114u,3u,0x00u,0xE117u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E117u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E117u,2u,0x20u,0xE119u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E125u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E125u,2u,0x20u,0xE127u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E125u,2u,0x20u,0xE127u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E125u,2u,0x20u,0xE127u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E127u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E127u,2u,0x10u,0xE129u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E132u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D8 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E132u,3u,0xE1u,0xE135u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE134u))return 0;c->pc=0xE1D8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D8 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E132u,3u,0xE1u,0xE135u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE134u))return 0;c->pc=0xE1D8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 D8 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E132u,3u,0xE1u,0xE135u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE134u))return 0;c->pc=0xE1D8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E135u:
    if(m==0u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E135u,4u,0x00u,0xE139u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE138u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E135u,4u,0x00u,0xE139u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE138u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E135u,4u,0x00u,0xE139u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE138u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E139u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E139u,2u,0x20u,0xE13Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E139u,2u,0x20u,0xE13Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E139u,2u,0x20u,0xE13Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E13Bu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E13Bu,2u,0x10u,0xE13Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E163u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E163u,2u,0x20u,0xE165u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E16Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E16Cu,2u,0x30u,0xE16Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E1D8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E1D8u,2u,0x20u,0xE1DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E1D8u,2u,0x20u,0xE1DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E1D8u,2u,0x20u,0xE1DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E1DAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E1DAu,2u,0x10u,0xE1DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E1FBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E1FBu,2u,0x30u,0xE1FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E1FBu,2u,0x30u,0xE1FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E1FDu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E1FDu,3u,0x00u,0xE200u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E200u:
    if(m==0u&&x==0u&&e==0u){ /* A0 10 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E200u,3u,0x01u,0xE203u);
      sc_v11_op_ldy(r,0x0110u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E203u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E203u,4u,0x7Eu,0xE207u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E2000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E207u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 20 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E207u,4u,0x7Eu,0xE20Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2220u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E20Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E20Bu,1u,0xE8u,0xE20Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E20Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E20Cu,1u,0xE8u,0xE20Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E20Du:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E20Du,1u,0x88u,0xE20Eu);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E20Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E20Eu,2u,0xF3u,0xE210u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE203u;}
      if(c->pc!=0xE210u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE210u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E210u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E210u,1u,0x60u,0xE211u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E211u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E211u,2u,0x30u,0xE213u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E211u,2u,0x30u,0xE213u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E211u,2u,0x30u,0xE213u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E211u,2u,0x30u,0xE213u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E213u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E213u,3u,0x00u,0xE216u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E216u:
    if(m==0u&&x==0u&&e==0u){ /* A0 10 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E216u,3u,0x01u,0xE219u);
      sc_v11_op_ldy(r,0x0110u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E219u:
    if(m==0u&&x==0u&&e==0u){ /* BF 20 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E219u,4u,0x7Eu,0xE21Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E2220u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E21Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E21Du,4u,0x7Eu,0xE221u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E221u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E221u,1u,0xE8u,0xE222u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E222u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E222u,1u,0xE8u,0xE223u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E223u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E223u,1u,0x88u,0xE224u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E224u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E224u,2u,0xF3u,0xE226u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE219u;}
      if(c->pc!=0xE226u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE226u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E226u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E226u,1u,0x60u,0xE227u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E347u:
    if(m==0u&&x==0u&&e==0u){ /* 20 17 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E347u,3u,0xB4u,0xE34Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE349u))return 0;c->pc=0xB417u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 17 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E347u,3u,0xB4u,0xE34Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE349u))return 0;c->pc=0xB417u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E34Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E34Au,2u,0x30u,0xE34Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E34Au,2u,0x30u,0xE34Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E34Au,2u,0x30u,0xE34Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E34Au,2u,0x30u,0xE34Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E34Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E34Cu,3u,0x00u,0xE34Fu);
      sc_v11_op_lda(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E34Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E34Fu,2u,0x79u,0xE351u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E351u:
    if(m==0u&&x==0u&&e==0u){ /* A9 27 E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E351u,3u,0xE2u,0xE354u);
      sc_v11_op_lda(r,0xE227u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E354u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E354u,2u,0x7Cu,0xE356u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E356u:
    if(m==0u&&x==0u&&e==0u){ /* A9 63 E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E356u,3u,0xE2u,0xE359u);
      sc_v11_op_lda(r,0xE263u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E359u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E359u,2u,0x7Fu,0xE35Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E35Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 9F E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E35Bu,3u,0xE2u,0xE35Eu);
      sc_v11_op_lda(r,0xE29Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E35Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E35Eu,2u,0x82u,0xE360u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E360u:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E360u,1u,0x8Bu,0xE361u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E361u:
    if(m==0u&&x==0u&&e==0u){ /* A6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E361u,2u,0x7Cu,0xE363u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E363u:
    if(m==0u&&x==0u&&e==0u){ /* A0 82 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E363u,3u,0x38u,0xE366u);
      sc_v11_op_ldy(r,0x3882u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E366u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E366u,2u,0x79u,0xE368u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E368u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E368u,1u,0x3Au,0xE369u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E369u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E369u,3u,0x01u,0xE36Cu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE369u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E36Cu:
    if(m==0u&&x==0u&&e==0u){ /* A6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E36Cu,2u,0x7Fu,0xE36Eu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E36Eu:
    if(m==0u&&x==0u&&e==0u){ /* A0 C2 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E36Eu,3u,0x38u,0xE371u);
      sc_v11_op_ldy(r,0x38C2u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E371u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E371u,2u,0x79u,0xE373u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E373u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E373u,1u,0x3Au,0xE374u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E374u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E374u,3u,0x01u,0xE377u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE374u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E377u:
    if(m==0u&&x==0u&&e==0u){ /* A6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E377u,2u,0x7Fu,0xE379u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E379u:
    if(m==0u&&x==0u&&e==0u){ /* A0 02 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E379u,3u,0x39u,0xE37Cu);
      sc_v11_op_ldy(r,0x3902u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E37Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E37Cu,2u,0x79u,0xE37Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E37Eu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E37Eu,1u,0x3Au,0xE37Fu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E37Fu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E37Fu,3u,0x01u,0xE382u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE37Fu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E382u:
    if(m==0u&&x==0u&&e==0u){ /* A6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E382u,2u,0x7Fu,0xE384u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E384u:
    if(m==0u&&x==0u&&e==0u){ /* A0 42 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E384u,3u,0x39u,0xE387u);
      sc_v11_op_ldy(r,0x3942u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E387u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E387u,2u,0x79u,0xE389u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E389u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E389u,1u,0x3Au,0xE38Au);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E38Au:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E38Au,3u,0x01u,0xE38Du);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE38Au;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E38Du:
    if(m==0u&&x==0u&&e==0u){ /* A6 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E38Du,2u,0x82u,0xE38Fu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x82u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E38Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 82 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E38Fu,3u,0x39u,0xE392u);
      sc_v11_op_ldy(r,0x3982u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E392u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E392u,2u,0x79u,0xE394u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E394u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E394u,1u,0x3Au,0xE395u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E395u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E395u,3u,0x01u,0xE398u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE395u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E398u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E398u,1u,0xABu,0xE399u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E399u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E399u,1u,0x60u,0xE39Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E39Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 17 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Au,3u,0xB4u,0xE39Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE39Cu))return 0;c->pc=0xB417u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 17 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Au,3u,0xB4u,0xE39Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE39Cu))return 0;c->pc=0xB417u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 17 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Au,3u,0xB4u,0xE39Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE39Cu))return 0;c->pc=0xB417u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 17 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Au,3u,0xB4u,0xE39Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE39Cu))return 0;c->pc=0xB417u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E39Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Du,2u,0x30u,0xE39Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Du,2u,0x30u,0xE39Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Du,2u,0x30u,0xE39Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Du,2u,0x30u,0xE39Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E39Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E39Fu,3u,0x00u,0xE3A2u);
      sc_v11_op_lda(r,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3A2u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3A2u,2u,0x79u,0xE3A4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3A4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 DB E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3A4u,3u,0xE2u,0xE3A7u);
      sc_v11_op_lda(r,0xE2DBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3A7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3A7u,2u,0x7Cu,0xE3A9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3A9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3A9u,3u,0xE2u,0xE3ACu);
      sc_v11_op_lda(r,0xE2FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3ACu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3ACu,2u,0x7Fu,0xE3AEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3AEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 23 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3AEu,3u,0xE3u,0xE3B1u);
      sc_v11_op_lda(r,0xE323u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3B1u:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3B1u,2u,0x82u,0xE3B3u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3B3u:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3B3u,1u,0x8Bu,0xE3B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3B4u:
    if(m==0u&&x==0u&&e==0u){ /* A6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3B4u,2u,0x7Cu,0xE3B6u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3B6u:
    if(m==0u&&x==0u&&e==0u){ /* A0 C2 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3B6u,3u,0x38u,0xE3B9u);
      sc_v11_op_ldy(r,0x38C2u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3B9u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3B9u,2u,0x79u,0xE3BBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3BBu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3BBu,1u,0x3Au,0xE3BCu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3BCu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3BCu,3u,0x01u,0xE3BFu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE3BCu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3BFu:
    if(m==0u&&x==0u&&e==0u){ /* A6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3BFu,2u,0x7Fu,0xE3C1u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3C1u:
    if(m==0u&&x==0u&&e==0u){ /* A0 02 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3C1u,3u,0x39u,0xE3C4u);
      sc_v11_op_ldy(r,0x3902u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3C4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3C4u,2u,0x79u,0xE3C6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3C6u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3C6u,1u,0x3Au,0xE3C7u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3C7u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3C7u,3u,0x01u,0xE3CAu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE3C7u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3CAu:
    if(m==0u&&x==0u&&e==0u){ /* A6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3CAu,2u,0x7Fu,0xE3CCu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3CCu:
    if(m==0u&&x==0u&&e==0u){ /* A0 42 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3CCu,3u,0x39u,0xE3CFu);
      sc_v11_op_ldy(r,0x3942u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3CFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3CFu,2u,0x79u,0xE3D1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3D1u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3D1u,1u,0x3Au,0xE3D2u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3D2u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3D2u,3u,0x01u,0xE3D5u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE3D2u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3D5u:
    if(m==0u&&x==0u&&e==0u){ /* A6 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3D5u,2u,0x82u,0xE3D7u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x82u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3D7u:
    if(m==0u&&x==0u&&e==0u){ /* A0 82 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3D7u,3u,0x39u,0xE3DAu);
      sc_v11_op_ldy(r,0x3982u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3DAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3DAu,2u,0x79u,0xE3DCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3DCu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3DCu,1u,0x3Au,0xE3DDu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3DDu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3DDu,3u,0x01u,0xE3E0u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xE3DDu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3E0u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3E0u,1u,0xABu,0xE3E1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3E1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3E1u,1u,0x60u,0xE3E2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3F0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3F0u,2u,0x20u,0xE3F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3F0u,2u,0x20u,0xE3F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3F2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3F2u,2u,0x10u,0xE3F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3F2u,2u,0x10u,0xE3F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3F4u:
    if(m==1u&&x==0u&&e==0u){ /* A2 50 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3F4u,3u,0xD6u,0xE3F7u);
      sc_v11_op_ldx(r,0xD650u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3F7u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3F7u,2u,0x09u,0xE3F9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3F9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3F9u,2u,0x09u,0xE3FBu);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3FBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3FBu,2u,0x0Bu,0xE3FDu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E3FDu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E3FDu,3u,0x00u,0xE400u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
