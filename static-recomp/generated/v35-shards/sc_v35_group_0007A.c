/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0007A(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01E801u:
    if(m==0u&&x==0u&&e==0u){ /* A2 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E801u,3u,0x00u,0xE804u);
      sc_v11_op_ldx(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E801u,2u,0x01u,0xE803u);
      sc_v11_op_ldx(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E804u:
    if(m==0u&&x==0u&&e==0u){ /* 20 BC CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E804u,3u,0xCEu,0xE807u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xE806u))return 0;c->pc=0xCEBCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E807u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E807u,2u,0x20u,0xE809u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E807u,2u,0x20u,0xE809u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E807u,2u,0x20u,0xE809u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E807u,2u,0x20u,0xE809u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E809u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E809u,2u,0xB3u,0xE80Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E809u,2u,0xB3u,0xE80Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E80Bu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E80Bu,2u,0x7Fu,0xE80Du);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E80Bu,2u,0x7Fu,0xE80Du);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E80Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E80Du,2u,0xB1u,0xE80Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E80Du,2u,0xB1u,0xE80Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E80Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E80Fu,2u,0x20u,0xE811u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E80Fu,2u,0x20u,0xE811u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E811u:
    if(m==0u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E811u,4u,0x00u,0xE815u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE814u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E811u,4u,0x00u,0xE815u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE814u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E815u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E815u,2u,0x20u,0xE817u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E815u,2u,0x20u,0xE817u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E815u,2u,0x20u,0xE817u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E815u,2u,0x20u,0xE817u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E817u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E817u,2u,0x10u,0xE819u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E817u,2u,0x10u,0xE819u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E819u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E819u,2u,0x01u,0xE81Bu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E81Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E81Bu,3u,0x43u,0xE81Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E81Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E81Eu,2u,0x18u,0xE820u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E820u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E820u,3u,0x43u,0xE823u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E823u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E823u,2u,0x7Eu,0xE825u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E825u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E825u,3u,0x43u,0xE828u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E828u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E828u,3u,0x7Cu,0xE82Bu);
      sc_v11_op_ldx(r,0x7C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E82Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E82Bu,3u,0x21u,0xE82Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E82Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E82Eu,3u,0x80u,0xE831u);
      sc_v11_op_ldx(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E831u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E831u,3u,0x43u,0xE834u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E834u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E834u,3u,0x08u,0xE837u);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E837u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E837u,3u,0x43u,0xE83Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E83Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E83Au,2u,0x02u,0xE83Cu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E83Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E83Cu,3u,0x42u,0xE83Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E83Fu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E83Fu,2u,0x20u,0xE841u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E841u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E841u,2u,0xB3u,0xE843u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E843u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E843u,2u,0x80u,0xE845u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E845u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E845u,2u,0xB1u,0xE847u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E847u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E847u,1u,0x60u,0xE848u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E89Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E89Au,2u,0x30u,0xE89Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E89Au,2u,0x30u,0xE89Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E89Au,2u,0x30u,0xE89Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E89Au,2u,0x30u,0xE89Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E89Cu:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E89Cu,3u,0x03u,0xE89Fu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E89Fu:
    if(m==0u&&x==0u&&e==0u){ /* BF 9B E7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E89Fu,4u,0x01u,0xE8A3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E79Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8A3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8A3u,3u,0x00u,0xE8A6u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8A6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8A6u,2u,0x01u,0xE8A8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE8A9u;}
      if(c->pc!=0xE8A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE8A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8A8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8A8u,1u,0x60u,0xE8A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8A9u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8A9u,1u,0x3Au,0xE8AAu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8AAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8AAu,1u,0x0Au,0xE8ABu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8ABu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8ABu,1u,0xAAu,0xE8ACu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8ACu:
    if(m==0u&&x==0u&&e==0u){ /* BF 48 E8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8ACu,4u,0x01u,0xE8B0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E848u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8B0u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8B0u,1u,0x48u,0xE8B1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8B1u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8B1u,1u,0x4Bu,0xE8B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8B2u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8B2u,1u,0xABu,0xE8B3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8B3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8B3u,2u,0x20u,0xE8B5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8B5u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8B5u,3u,0x00u,0xE8B8u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8B8u:
    if(m==1u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8B8u,1u,0x9Bu,0xE8B9u);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8B9u:
    if(m==1u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8B9u,2u,0x01u,0xE8BBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8BBu:
    if(m==1u&&x==0u&&e==0u){ /* C9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8BBu,2u,0xFFu,0xE8BDu);
      sc_v11_op_compare(r,c->a,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8BDu:
    if(m==1u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8BDu,2u,0x08u,0xE8BFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE8C7u;}
      if(c->pc!=0xE8BFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE8BFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8BFu:
    if(m==1u&&x==0u&&e==0u){ /* 9F E0 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8BFu,4u,0x7Eu,0xE8C3u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E21E0u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8C3u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8C3u,1u,0xE8u,0xE8C4u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8C4u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8C4u,1u,0xC8u,0xE8C5u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8C5u:
    if(m==1u&&x==0u&&e==0u){ /* 80 F2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8C5u,2u,0xF2u,0xE8C7u);
      if(1){c->pc=0xE8B9u;}
      if(c->pc!=0xE8C7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE8C7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8C7u:
    if(m==1u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8C7u,3u,0x00u,0xE8CAu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8CAu:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8CAu,1u,0xABu,0xE8CBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8CBu:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8CBu,1u,0xABu,0xE8CCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8CCu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8CCu,2u,0x20u,0xE8CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8CEu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8CEu,1u,0x68u,0xE8CFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8CFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8CFu,3u,0x03u,0xE8D2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8D2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8D2u,3u,0x00u,0xE8D5u);
      sc_v11_op_compare(r,c->a,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8D5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8D5u,2u,0x08u,0xE8D7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE8DFu;}
      if(c->pc!=0xE8D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE8D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8D7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 AA 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8D7u,3u,0x55u,0xE8DAu);
      sc_v11_op_lda(r,0x55AAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8DAu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 1E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8DAu,4u,0x7Eu,0xE8DEu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E221Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8DEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8DEu,1u,0x60u,0xE8DFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8DFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 AA AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8DFu,3u,0xAAu,0xE8E2u);
      sc_v11_op_lda(r,0xAAAAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8E2u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 1E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8E2u,4u,0x7Eu,0xE8E6u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E221Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8E6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8E6u,1u,0x60u,0xE8E7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8E9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8E9u,2u,0x30u,0xE8EBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8E9u,2u,0x30u,0xE8EBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8E9u,2u,0x30u,0xE8EBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8E9u,2u,0x30u,0xE8EBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8EBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8EBu,3u,0x03u,0xE8EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8EEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8EEu,3u,0x00u,0xE8F1u);
      sc_v11_op_compare(r,c->a,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8F1u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8F1u,2u,0x01u,0xE8F3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE8F4u;}
      if(c->pc!=0xE8F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE8F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8F3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8F3u,1u,0x60u,0xE8F4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8F4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8F4u,2u,0xC9u,0xE8F6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8F6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8F6u,3u,0x0Fu,0xE8F9u);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8F9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8F9u,2u,0x18u,0xE8FBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xE913u;}
      if(c->pc!=0xE8FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE8FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8FBu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8FBu,1u,0x08u,0xE8FCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E8FCu:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E8FCu,4u,0x00u,0xE900u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE8FFu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E900u:
    if(m==0u&&x==0u&&e==0u){ /* 03 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E900u,2u,0x07u,0xE902u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x07u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E900u,2u,0x07u,0xE902u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x07u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E900u,2u,0x07u,0xE902u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x07u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E900u,2u,0x07u,0xE902u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x07u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E902u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E902u,1u,0x28u,0xE903u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E902u,1u,0x28u,0xE903u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E902u,1u,0x28u,0xE903u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E902u,1u,0x28u,0xE903u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E903u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E903u,2u,0x30u,0xE905u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E903u,2u,0x30u,0xE905u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E903u,2u,0x30u,0xE905u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E903u,2u,0x30u,0xE905u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E905u:
    if(m==0u&&x==0u&&e==0u){ /* AD 7F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E905u,3u,0x03u,0xE908u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x037Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E908u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E908u,2u,0x06u,0xE90Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE910u;}
      if(c->pc!=0xE90Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE90Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E90Au:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E90Au,1u,0x1Au,0xE90Bu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E90Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E90Bu,3u,0x03u,0xE90Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E90Eu:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E90Eu,2u,0x03u,0xE910u);
      if(1){c->pc=0xE913u;}
      if(c->pc!=0xE910u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE910u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E910u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 7F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E910u,3u,0x03u,0xE913u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E913u:
    if(m==0u&&x==0u&&e==0u){ /* AE 7F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E913u,3u,0x03u,0xE916u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x037Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E916u:
    if(m==0u&&x==0u&&e==0u){ /* BF E7 E8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E916u,4u,0x01u,0xE91Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E8E7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E91Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E91Au,3u,0x00u,0xE91Du);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E91Du:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E91Du,3u,0x94u,0xE920u);
      sc_v11_op_ora(r,0x9400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E920u:
    if(m==0u&&x==0u&&e==0u){ /* 8F E0 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E920u,4u,0x7Eu,0xE924u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E20E0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E924u:
    if(m==0u&&x==0u&&e==0u){ /* A9 82 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E924u,3u,0x39u,0xE927u);
      sc_v11_op_lda(r,0x3982u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E927u:
    if(m==0u&&x==0u&&e==0u){ /* 8F E2 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E927u,4u,0x7Eu,0xE92Bu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E20E2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E92Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E92Bu,2u,0x20u,0xE92Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E92Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E92Du,2u,0x56u,0xE92Fu);
      sc_v11_op_lda(r,0x0056u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E92Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 0E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E92Fu,4u,0x7Eu,0xE933u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E220Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E933u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E933u,1u,0x60u,0xE934u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E934u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E934u,2u,0x20u,0xE936u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E934u,2u,0x20u,0xE936u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E934u,2u,0x20u,0xE936u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E934u,2u,0x20u,0xE936u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E936u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E936u,3u,0x03u,0xE939u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E936u,3u,0x03u,0xE939u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E939u:
    if(m==0u&&x==0u&&e==0u){ /* C9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E939u,3u,0x00u,0xE93Cu);
      sc_v11_op_compare(r,c->a,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E939u,3u,0x00u,0xE93Cu);
      sc_v11_op_compare(r,c->a,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E93Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E93Cu,2u,0x1Cu,0xE93Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE95Au;}
      if(c->pc!=0xE93Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE93Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E93Cu,2u,0x1Cu,0xE93Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE95Au;}
      if(c->pc!=0xE93Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE93Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E93Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 C8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E93Eu,3u,0x00u,0xE941u);
      sc_v11_op_lda(r,0x00C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 C8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E93Eu,3u,0x00u,0xE941u);
      sc_v11_op_lda(r,0x00C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E941u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E941u,3u,0x02u,0xE944u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E941u,3u,0x02u,0xE944u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E944u:
    if(m==0u&&x==0u&&e==0u){ /* A9 A8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E944u,3u,0x00u,0xE947u);
      sc_v11_op_lda(r,0x00A8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 A8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E944u,3u,0x00u,0xE947u);
      sc_v11_op_lda(r,0x00A8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E947u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E947u,3u,0x02u,0xE94Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E947u,3u,0x02u,0xE94Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E94Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E94Au,3u,0x01u,0xE94Du);
      sc_v11_op_lda(r,0x01C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E94Au,3u,0x01u,0xE94Du);
      sc_v11_op_lda(r,0x01C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E94Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E94Du,3u,0x02u,0xE950u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E94Du,3u,0x02u,0xE950u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E950u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E950u,3u,0x00u,0xE953u);
      sc_v11_op_lda(r,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E950u,3u,0x00u,0xE953u);
      sc_v11_op_lda(r,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E953u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E953u,3u,0x02u,0xE956u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E953u,3u,0x02u,0xE956u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E956u:
    if(m==0u&&x==0u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E956u,4u,0x00u,0xE95Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE959u))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E956u,4u,0x00u,0xE95Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE959u))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E95Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Au,1u,0x60u,0xE95Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Au,1u,0x60u,0xE95Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Au,1u,0x60u,0xE95Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Au,1u,0x60u,0xE95Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E95Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Bu,2u,0x20u,0xE95Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Bu,2u,0x20u,0xE95Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Bu,2u,0x20u,0xE95Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Bu,2u,0x20u,0xE95Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E95Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Du,3u,0x03u,0xE960u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E95Du,3u,0x03u,0xE960u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E960u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E960u,3u,0x00u,0xE963u);
      sc_v11_op_compare(r,c->a,0x002Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 2E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E960u,3u,0x00u,0xE963u);
      sc_v11_op_compare(r,c->a,0x002Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E963u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E963u,2u,0x1Cu,0xE965u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE981u;}
      if(c->pc!=0xE965u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE965u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E963u,2u,0x1Cu,0xE965u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE981u;}
      if(c->pc!=0xE965u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE965u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E965u:
    if(m==0u&&x==0u&&e==0u){ /* A9 44 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E965u,3u,0x00u,0xE968u);
      sc_v11_op_lda(r,0x0044u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 44 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E965u,3u,0x00u,0xE968u);
      sc_v11_op_lda(r,0x0044u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E968u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E968u,3u,0x02u,0xE96Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E968u,3u,0x02u,0xE96Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E96Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 83 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E96Bu,3u,0x00u,0xE96Eu);
      sc_v11_op_lda(r,0x0083u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 83 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E96Bu,3u,0x00u,0xE96Eu);
      sc_v11_op_lda(r,0x0083u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E96Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E96Eu,3u,0x02u,0xE971u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E96Eu,3u,0x02u,0xE971u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E971u:
    if(m==0u&&x==0u&&e==0u){ /* A9 C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E971u,3u,0x01u,0xE974u);
      sc_v11_op_lda(r,0x01C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E971u,3u,0x01u,0xE974u);
      sc_v11_op_lda(r,0x01C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E974u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E974u,3u,0x02u,0xE977u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E974u,3u,0x02u,0xE977u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E977u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E977u,3u,0x00u,0xE97Au);
      sc_v11_op_lda(r,0x003Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 3F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E977u,3u,0x00u,0xE97Au);
      sc_v11_op_lda(r,0x003Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E97Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E97Au,3u,0x02u,0xE97Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E97Au,3u,0x02u,0xE97Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E97Du:
    if(m==0u&&x==0u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E97Du,4u,0x00u,0xE981u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE980u))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E97Du,4u,0x00u,0xE981u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE980u))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E981u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E981u,1u,0x60u,0xE982u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E981u,1u,0x60u,0xE982u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E981u,1u,0x60u,0xE982u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E981u,1u,0x60u,0xE982u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E982u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E982u,2u,0x20u,0xE984u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E982u,2u,0x20u,0xE984u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E982u,2u,0x20u,0xE984u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E982u,2u,0x20u,0xE984u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E984u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E984u,3u,0x03u,0xE987u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E984u,3u,0x03u,0xE987u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E987u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E987u,3u,0x00u,0xE98Au);
      sc_v11_op_compare(r,c->a,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 1C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E987u,3u,0x00u,0xE98Au);
      sc_v11_op_compare(r,c->a,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E98Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E98Au,2u,0x1Cu,0xE98Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE9A8u;}
      if(c->pc!=0xE98Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE98Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E98Au,2u,0x1Cu,0xE98Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xE9A8u;}
      if(c->pc!=0xE98Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xE98Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E98Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E98Cu,3u,0x00u,0xE98Fu);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E98Cu,3u,0x00u,0xE98Fu);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E98Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E98Fu,3u,0x02u,0xE992u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E98Fu,3u,0x02u,0xE992u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E992u:
    if(m==0u&&x==0u&&e==0u){ /* A9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E992u,3u,0x00u,0xE995u);
      sc_v11_op_lda(r,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E992u,3u,0x00u,0xE995u);
      sc_v11_op_lda(r,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E995u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E995u,3u,0x02u,0xE998u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E995u,3u,0x02u,0xE998u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E998u:
    if(m==0u&&x==0u&&e==0u){ /* A9 C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E998u,3u,0x01u,0xE99Bu);
      sc_v11_op_lda(r,0x01C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E998u,3u,0x01u,0xE99Bu);
      sc_v11_op_lda(r,0x01C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E99Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E99Bu,3u,0x02u,0xE99Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E99Bu,3u,0x02u,0xE99Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E99Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 4E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E99Eu,3u,0x00u,0xE9A1u);
      sc_v11_op_lda(r,0x004Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 4E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E99Eu,3u,0x00u,0xE9A1u);
      sc_v11_op_lda(r,0x004Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E9A1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E9A1u,3u,0x02u,0xE9A4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E9A1u,3u,0x02u,0xE9A4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E9A4u:
    if(m==0u&&x==0u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E9A4u,4u,0x00u,0xE9A8u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE9A7u))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E9A4u,4u,0x00u,0xE9A8u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xE9A7u))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01E9A8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E9A8u,1u,0x60u,0xE9A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E9A8u,1u,0x60u,0xE9A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E9A8u,1u,0x60u,0xE9A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01E9A8u,1u,0x60u,0xE9A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA5Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA5Fu,2u,0x30u,0xEA61u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA5Fu,2u,0x30u,0xEA61u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA61u:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA61u,3u,0x03u,0xEA64u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA64u:
    if(m==0u&&x==0u&&e==0u){ /* BF A9 E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA64u,4u,0x01u,0xEA68u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E9A9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA68u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA68u,3u,0x00u,0xEA6Bu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA6Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA6Bu,2u,0x01u,0xEA6Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEA6Eu;}
      if(c->pc!=0xEA6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEA6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA6Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA6Du,1u,0x60u,0xEA6Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA6Eu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA6Eu,1u,0x3Au,0xEA6Fu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA6Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA6Fu,2u,0x03u,0xEA71u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEA74u;}
      if(c->pc!=0xEA71u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEA71u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA71u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D4 EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA71u,3u,0xEAu,0xEA74u);
      c->pc=0xEAD4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA74u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA74u,3u,0x0Cu,0xEA77u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA77u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA77u,1u,0x0Au,0xEA78u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA78u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA78u,1u,0xAAu,0xEA79u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA79u:
    if(m==0u&&x==0u&&e==0u){ /* BF DD E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA79u,4u,0x01u,0xEA7Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01E9DDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA7Du:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA7Du,1u,0x48u,0xEA7Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA7Eu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA7Eu,3u,0x00u,0xEA81u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA81u:
    if(m==0u&&x==0u&&e==0u){ /* A9 C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA81u,3u,0x01u,0xEA84u);
      sc_v11_op_lda(r,0x01C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA84u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA84u,3u,0x02u,0xEA87u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA87u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA87u,1u,0x4Bu,0xEA88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA87u,1u,0x4Bu,0xEA88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA87u,1u,0x4Bu,0xEA88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA87u,1u,0x4Bu,0xEA88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA88u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA88u,1u,0xABu,0xEA89u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA88u,1u,0xABu,0xEA89u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA88u,1u,0xABu,0xEA89u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA88u,1u,0xABu,0xEA89u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA89u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA89u,2u,0x01u,0xEA8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA89u,2u,0x01u,0xEA8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA89u,2u,0x01u,0xEA8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA89u,2u,0x01u,0xEA8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA8Bu:
    if(m==0u&&x==0u&&e==0u){ /* 30 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Bu,2u,0x25u,0xEA8Du);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEAB2u;}
      if(c->pc!=0xEA8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEA8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Bu,2u,0x25u,0xEA8Du);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEAB2u;}
      if(c->pc!=0xEA8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEA8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Bu,2u,0x25u,0xEA8Du);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEAB2u;}
      if(c->pc!=0xEA8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEA8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Bu,2u,0x25u,0xEA8Du);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEAB2u;}
      if(c->pc!=0xEA8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEA8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA8Du:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Du,1u,0xC8u,0xEA8Eu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Du,1u,0xC8u,0xEA8Eu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Du,1u,0xC8u,0xEA8Eu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Du,1u,0xC8u,0xEA8Eu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA8Eu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Eu,1u,0xC8u,0xEA8Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Eu,1u,0xC8u,0xEA8Fu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Eu,1u,0xC8u,0xEA8Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Eu,1u,0xC8u,0xEA8Fu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Fu,3u,0x02u,0xEA92u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Fu,3u,0x02u,0xEA92u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Fu,3u,0x02u,0xEA92u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA8Fu,3u,0x02u,0xEA92u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA92u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA92u,2u,0x01u,0xEA94u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA92u,2u,0x01u,0xEA94u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA92u,2u,0x01u,0xEA94u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA92u,2u,0x01u,0xEA94u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA94u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA94u,1u,0xC8u,0xEA95u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA94u,1u,0xC8u,0xEA95u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA94u,1u,0xC8u,0xEA95u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA94u,1u,0xC8u,0xEA95u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA95u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA95u,1u,0xC8u,0xEA96u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA95u,1u,0xC8u,0xEA96u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA95u,1u,0xC8u,0xEA96u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA95u,1u,0xC8u,0xEA96u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA96u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA96u,3u,0x02u,0xEA99u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA96u,3u,0x02u,0xEA99u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA96u,3u,0x02u,0xEA99u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA96u,3u,0x02u,0xEA99u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA99u:
    if(m==0u&&x==0u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA99u,3u,0x03u,0xEA9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x037Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA99u,3u,0x03u,0xEA9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x037Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA99u,3u,0x03u,0xEA9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x037Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA99u,3u,0x03u,0xEA9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x037Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA9Cu,1u,0x18u,0xEA9Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA9Cu,1u,0x18u,0xEA9Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA9Cu,1u,0x18u,0xEA9Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA9Cu,1u,0x18u,0xEA9Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EA9Du:
    if(m==0u&&x==0u&&e==0u){ /* 69 3B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA9Du,3u,0x00u,0xEAA0u);
      sc_v11_op_adc(r,0x003Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 3B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA9Du,3u,0x00u,0xEAA0u);
      sc_v11_op_adc(r,0x003Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA9Du,2u,0x3Bu,0xEA9Fu);
      sc_v11_op_adc(r,0x003Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EA9Du,2u,0x3Bu,0xEA9Fu);
      sc_v11_op_adc(r,0x003Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAA0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA0u,3u,0x02u,0xEAA3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA0u,3u,0x02u,0xEAA3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAA3u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA3u,3u,0x00u,0xEAA6u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA3u,3u,0x00u,0xEAA6u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAA6u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA6u,1u,0xABu,0xEAA7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA6u,1u,0xABu,0xEAA7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAA7u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA7u,1u,0xABu,0xEAA8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA7u,1u,0xABu,0xEAA8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAA8u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA8u,1u,0xDAu,0xEAA9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA8u,1u,0xDAu,0xEAA9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAA9u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA9u,1u,0x5Au,0xEAAAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAA9u,1u,0x5Au,0xEAAAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAAAu:
    if(m==0u&&x==0u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAAu,4u,0x00u,0xEAAEu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xEAADu))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAAu,4u,0x00u,0xEAAEu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xEAADu))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAAEu:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAEu,1u,0x7Au,0xEAAFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAEu,1u,0x7Au,0xEAAFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAEu,1u,0x7Au,0xEAAFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAEu,1u,0x7Au,0xEAAFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAAFu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAFu,1u,0xFAu,0xEAB0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAFu,1u,0xFAu,0xEAB0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAFu,1u,0xFAu,0xEAB0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAAFu,1u,0xFAu,0xEAB0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAB0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB0u,2u,0xD5u,0xEAB2u);
      if(1){c->pc=0xEA87u;}
      if(c->pc!=0xEAB2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEAB2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB0u,2u,0xD5u,0xEAB2u);
      if(1){c->pc=0xEA87u;}
      if(c->pc!=0xEAB2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEAB2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB0u,2u,0xD5u,0xEAB2u);
      if(1){c->pc=0xEA87u;}
      if(c->pc!=0xEAB2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEAB2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB0u,2u,0xD5u,0xEAB2u);
      if(1){c->pc=0xEA87u;}
      if(c->pc!=0xEAB2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEAB2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAB2u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB2u,1u,0x68u,0xEAB3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB2u,1u,0x68u,0xEAB3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB2u,1u,0x68u,0xEAB3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB2u,1u,0x68u,0xEAB3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAB3u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB3u,3u,0x00u,0xEAB6u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB3u,3u,0x00u,0xEAB6u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB3u,3u,0x00u,0xEAB6u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB3u,3u,0x00u,0xEAB6u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAB6u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB6u,1u,0xABu,0xEAB7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB6u,1u,0xABu,0xEAB7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB6u,1u,0xABu,0xEAB7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB6u,1u,0xABu,0xEAB7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAB7u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB7u,1u,0xABu,0xEAB8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB7u,1u,0xABu,0xEAB8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB7u,1u,0xABu,0xEAB8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB7u,1u,0xABu,0xEAB8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAB8u:
    if(m==0u&&x==0u&&e==0u){ /* CE 7B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB8u,3u,0x03u,0xEABBu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x037Bu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 7B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB8u,3u,0x03u,0xEABBu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x037Bu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 7B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB8u,3u,0x03u,0xEABBu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x037Bu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 7B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAB8u,3u,0x03u,0xEABBu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x037Bu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EABBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABBu,2u,0x01u,0xEABDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEABEu;}
      if(c->pc!=0xEABDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEABDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABBu,2u,0x01u,0xEABDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEABEu;}
      if(c->pc!=0xEABDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEABDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABBu,2u,0x01u,0xEABDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEABEu;}
      if(c->pc!=0xEABDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEABDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABBu,2u,0x01u,0xEABDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEABEu;}
      if(c->pc!=0xEABDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEABDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EABDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABDu,1u,0x60u,0xEABEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABDu,1u,0x60u,0xEABEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABDu,1u,0x60u,0xEABEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABDu,1u,0x60u,0xEABEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EABEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABEu,3u,0x00u,0xEAC1u);
      sc_v11_op_lda(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABEu,3u,0x00u,0xEAC1u);
      sc_v11_op_lda(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABEu,2u,0x0Bu,0xEAC0u);
      sc_v11_op_lda(r,0x000Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EABEu,2u,0x0Bu,0xEAC0u);
      sc_v11_op_lda(r,0x000Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAC1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAC1u,3u,0x03u,0xEAC4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 7B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAC1u,3u,0x03u,0xEAC4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAC4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAC4u,3u,0x03u,0xEAC7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x037Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAC4u,3u,0x03u,0xEAC7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x037Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAC7u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAC7u,1u,0x1Au,0xEAC8u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAC7u,1u,0x1Au,0xEAC8u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAC8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAC8u,3u,0x00u,0xEACBu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAC8u,3u,0x00u,0xEACBu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EACBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EACBu,2u,0x03u,0xEACDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xEAD0u;}
      if(c->pc!=0xEACDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEACDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EACBu,2u,0x03u,0xEACDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xEAD0u;}
      if(c->pc!=0xEACDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEACDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EACDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EACDu,3u,0x00u,0xEAD0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EACDu,3u,0x00u,0xEAD0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAD0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAD0u,3u,0x03u,0xEAD3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAD0u,3u,0x03u,0xEAD3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAD3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAD3u,1u,0x60u,0xEAD4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAD3u,1u,0x60u,0xEAD4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAD4u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAD4u,3u,0x0Cu,0xEAD7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAD7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAD7u,1u,0x0Au,0xEAD8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAD8u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAD8u,1u,0xAAu,0xEAD9u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAD9u:
    if(m==0u&&x==0u&&e==0u){ /* BF 07 EA 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAD9u,4u,0x01u,0xEADDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01EA07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EADDu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EADDu,1u,0x48u,0xEADEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EADEu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EADEu,3u,0x00u,0xEAE1u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAE1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE1u,3u,0x01u,0xEAE4u);
      sc_v11_op_lda(r,0x01C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAE4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE4u,3u,0x02u,0xEAE7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAE7u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE7u,1u,0x4Bu,0xEAE8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE7u,1u,0x4Bu,0xEAE8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE7u,1u,0x4Bu,0xEAE8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE7u,1u,0x4Bu,0xEAE8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAE8u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE8u,1u,0xABu,0xEAE9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE8u,1u,0xABu,0xEAE9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE8u,1u,0xABu,0xEAE9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE8u,1u,0xABu,0xEAE9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAE9u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE9u,2u,0x01u,0xEAEBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE9u,2u,0x01u,0xEAEBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE9u,2u,0x01u,0xEAEBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAE9u,2u,0x01u,0xEAEBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAEBu:
    if(m==0u&&x==0u&&e==0u){ /* 30 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEBu,2u,0xC5u,0xEAEDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEAB2u;}
      if(c->pc!=0xEAEDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEAEDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEBu,2u,0xC5u,0xEAEDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEAB2u;}
      if(c->pc!=0xEAEDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEAEDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEBu,2u,0xC5u,0xEAEDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEAB2u;}
      if(c->pc!=0xEAEDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEAEDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEBu,2u,0xC5u,0xEAEDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEAB2u;}
      if(c->pc!=0xEAEDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEAEDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAEDu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEDu,1u,0xC8u,0xEAEEu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEDu,1u,0xC8u,0xEAEEu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEDu,1u,0xC8u,0xEAEEu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEDu,1u,0xC8u,0xEAEEu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAEEu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEEu,1u,0xC8u,0xEAEFu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEEu,1u,0xC8u,0xEAEFu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEEu,1u,0xC8u,0xEAEFu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEEu,1u,0xC8u,0xEAEFu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAEFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEFu,3u,0x02u,0xEAF2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEFu,3u,0x02u,0xEAF2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEFu,3u,0x02u,0xEAF2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAEFu,3u,0x02u,0xEAF2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAF2u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF2u,2u,0x01u,0xEAF4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF2u,2u,0x01u,0xEAF4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF2u,2u,0x01u,0xEAF4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF2u,2u,0x01u,0xEAF4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAF4u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF4u,1u,0xC8u,0xEAF5u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF4u,1u,0xC8u,0xEAF5u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF4u,1u,0xC8u,0xEAF5u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF4u,1u,0xC8u,0xEAF5u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAF5u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF5u,1u,0xC8u,0xEAF6u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF5u,1u,0xC8u,0xEAF6u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF5u,1u,0xC8u,0xEAF6u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF5u,1u,0xC8u,0xEAF6u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAF6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF6u,3u,0x02u,0xEAF9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF6u,3u,0x02u,0xEAF9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF6u,3u,0x02u,0xEAF9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF6u,3u,0x02u,0xEAF9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x025Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAF9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF9u,3u,0x03u,0xEAFCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x037Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF9u,3u,0x03u,0xEAFCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x037Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF9u,3u,0x03u,0xEAFCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x037Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 7D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAF9u,3u,0x03u,0xEAFCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x037Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAFCu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAFCu,1u,0x18u,0xEAFDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAFCu,1u,0x18u,0xEAFDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAFCu,1u,0x18u,0xEAFDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAFCu,1u,0x18u,0xEAFDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EAFDu:
    if(m==0u&&x==0u&&e==0u){ /* 69 3B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAFDu,3u,0x00u,0xEB00u);
      sc_v11_op_adc(r,0x003Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 3B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAFDu,3u,0x00u,0xEB00u);
      sc_v11_op_adc(r,0x003Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAFDu,2u,0x3Bu,0xEAFFu);
      sc_v11_op_adc(r,0x003Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EAFDu,2u,0x3Bu,0xEAFFu);
      sc_v11_op_adc(r,0x003Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB00u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB00u,3u,0x02u,0xEB03u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB00u,3u,0x02u,0xEB03u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB03u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB03u,3u,0x00u,0xEB06u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB03u,3u,0x00u,0xEB06u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB06u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB06u,1u,0xABu,0xEB07u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB06u,1u,0xABu,0xEB07u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB07u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB07u,1u,0xABu,0xEB08u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB07u,1u,0xABu,0xEB08u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB08u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB08u,1u,0xDAu,0xEB09u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB08u,1u,0xDAu,0xEB09u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB09u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB09u,1u,0x5Au,0xEB0Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB09u,1u,0x5Au,0xEB0Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB0Au:
    if(m==0u&&x==0u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Au,4u,0x00u,0xEB0Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xEB0Du))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Au,4u,0x00u,0xEB0Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xEB0Du))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Eu,1u,0x7Au,0xEB0Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Eu,1u,0x7Au,0xEB0Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Eu,1u,0x7Au,0xEB0Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Eu,1u,0x7Au,0xEB0Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB0Fu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Fu,1u,0xFAu,0xEB10u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Fu,1u,0xFAu,0xEB10u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Fu,1u,0xFAu,0xEB10u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB0Fu,1u,0xFAu,0xEB10u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB10u:
    if(m==0u&&x==0u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB10u,2u,0xD5u,0xEB12u);
      if(1){c->pc=0xEAE7u;}
      if(c->pc!=0xEB12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB10u,2u,0xD5u,0xEB12u);
      if(1){c->pc=0xEAE7u;}
      if(c->pc!=0xEB12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB10u,2u,0xD5u,0xEB12u);
      if(1){c->pc=0xEAE7u;}
      if(c->pc!=0xEB12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB10u,2u,0xD5u,0xEB12u);
      if(1){c->pc=0xEAE7u;}
      if(c->pc!=0xEB12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB12u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB12u,2u,0x30u,0xEB14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB12u,2u,0x30u,0xEB14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB14u:
    if(m==0u&&x==0u&&e==0u){ /* A2 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB14u,3u,0x00u,0xEB17u);
      sc_v11_op_ldx(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB17u:
    if(m==0u&&x==0u&&e==0u){ /* A9 55 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB17u,3u,0x55u,0xEB1Au);
      sc_v11_op_lda(r,0x5555u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB1Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB1Au,4u,0x7Eu,0xEB1Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB1Eu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB1Eu,1u,0xCAu,0xEB1Fu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB1Fu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB1Fu,1u,0xCAu,0xEB20u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB20u:
    if(m==0u&&x==0u&&e==0u){ /* 10 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB20u,2u,0xF8u,0xEB22u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xEB1Au;}
      if(c->pc!=0xEB22u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB22u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB22u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB22u,3u,0x03u,0xEB25u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB25u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB25u,3u,0x00u,0xEB28u);
      sc_v11_op_compare(r,c->a,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB28u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB28u,2u,0x05u,0xEB2Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEB2Fu;}
      if(c->pc!=0xEB2Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB2Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB2Au:
    if(m==0u&&x==0u&&e==0u){ /* 22 AB F2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB2Au,4u,0x03u,0xEB2Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xEB2Du))return 0;
      c->pbr=0x03u;c->pc=0xF2ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB2Eu,1u,0x60u,0xEB2Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB2Eu,1u,0x60u,0xEB2Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB2Eu,1u,0x60u,0xEB2Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB2Eu,1u,0x60u,0xEB2Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB2Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 77 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB2Fu,3u,0x03u,0xEB32u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0377u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB32u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB32u,3u,0x00u,0xEB35u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB35u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB35u,1u,0x0Au,0xEB36u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB36u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB36u,1u,0xA8u,0xEB37u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB37u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB37u,2u,0x20u,0xEB39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB37u,2u,0x20u,0xEB39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB39u:
    if(m==0u&&x==0u&&e==0u){ /* B9 C7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB39u,3u,0x02u,0xEB3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x02C7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 C7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB39u,3u,0x02u,0xEB3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x02C7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB3Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB3Cu,2u,0x03u,0xEB3Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEB41u;}
      if(c->pc!=0xEB3Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB3Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB3Cu,2u,0x03u,0xEB3Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEB41u;}
      if(c->pc!=0xEB3Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB3Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 8D EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB3Eu,3u,0xECu,0xEB41u);
      c->pc=0xEC8Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 8D EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB3Eu,3u,0xECu,0xEB41u);
      c->pc=0xEC8Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB41u:
    if(m==0u&&x==0u&&e==0u){ /* B9 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB41u,3u,0x03u,0xEB44u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0317u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB41u,3u,0x03u,0xEB44u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0317u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB44u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB44u,2u,0x03u,0xEB46u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEB49u;}
      if(c->pc!=0xEB46u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB46u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB44u,2u,0x03u,0xEB46u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEB49u;}
      if(c->pc!=0xEB46u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB46u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB46u:
    if(m==0u&&x==0u&&e==0u){ /* 4C B3 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB46u,3u,0xEBu,0xEB49u);
      c->pc=0xEBB3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C B3 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB46u,3u,0xEBu,0xEB49u);
      c->pc=0xEBB3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB49u:
    if(m==0u&&x==0u&&e==0u){ /* B9 E7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB49u,3u,0x02u,0xEB4Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x02E7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 E7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB49u,3u,0x02u,0xEB4Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x02E7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB4Cu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB4Cu,1u,0x1Au,0xEB4Du);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB4Cu,1u,0x1Au,0xEB4Du);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB4Du:
    if(m==0u&&x==0u&&e==0u){ /* 99 E7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB4Du,3u,0x02u,0xEB50u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02E7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 E7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB4Du,3u,0x02u,0xEB50u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02E7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB50u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB50u,1u,0x0Au,0xEB51u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB50u,1u,0x0Au,0xEB51u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB51u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB51u,1u,0xAAu,0xEB52u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB51u,1u,0xAAu,0xEB52u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB52u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 80 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB52u,4u,0x7Eu,0xEB56u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 80 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB52u,4u,0x7Eu,0xEB56u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB56u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB56u,3u,0xFFu,0xEB59u);
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB56u,3u,0xFFu,0xEB59u);
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB59u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB59u,2u,0x06u,0xEB5Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEB61u;}
      if(c->pc!=0xEB5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB59u,2u,0x06u,0xEB5Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEB61u;}
      if(c->pc!=0xEB5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 99 C7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB5Bu,3u,0x02u,0xEB5Eu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02C7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 C7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB5Bu,3u,0x02u,0xEB5Eu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02C7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C EE EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB5Eu,3u,0xEBu,0xEB61u);
      c->pc=0xEBEEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C EE EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB5Eu,3u,0xEBu,0xEB61u);
      c->pc=0xEBEEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB61u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB61u,3u,0xFFu,0xEB64u);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB61u,3u,0xFFu,0xEB64u);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB64u:
    if(m==0u&&x==0u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB64u,2u,0x12u,0xEB66u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEB78u;}
      if(c->pc!=0xEB66u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB66u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB64u,2u,0x12u,0xEB66u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEB78u;}
      if(c->pc!=0xEB66u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB66u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB66u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB66u,1u,0xE8u,0xEB67u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB66u,1u,0xE8u,0xEB67u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB67u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB67u,1u,0xE8u,0xEB68u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB67u,1u,0xE8u,0xEB68u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB68u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 80 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB68u,4u,0x7Eu,0xEB6Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 80 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB68u,4u,0x7Eu,0xEB6Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB6Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB6Cu,1u,0x0Au,0xEB6Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB6Cu,1u,0x0Au,0xEB6Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB6Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB6Du,2u,0x79u,0xEB6Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB6Du,2u,0x79u,0xEB6Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB6Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB6Fu,1u,0xE8u,0xEB70u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB6Fu,1u,0xE8u,0xEB70u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB70u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB70u,1u,0xE8u,0xEB71u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB70u,1u,0xE8u,0xEB71u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB71u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB71u,1u,0x8Au,0xEB72u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB71u,1u,0x8Au,0xEB72u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB72u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB72u,1u,0x38u,0xEB73u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB72u,1u,0x38u,0xEB73u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB73u:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB73u,2u,0x79u,0xEB75u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB73u,2u,0x79u,0xEB75u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB75u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB75u,1u,0x4Au,0xEB76u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB75u,1u,0x4Au,0xEB76u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB76u:
    if(m==0u&&x==0u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB76u,2u,0xD5u,0xEB78u);
      if(1){c->pc=0xEB4Du;}
      if(c->pc!=0xEB78u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB78u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB76u,2u,0xD5u,0xEB78u);
      if(1){c->pc=0xEB4Du;}
      if(c->pc!=0xEB78u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB78u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB78u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FD FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB78u,3u,0xFFu,0xEB7Bu);
      sc_v11_op_compare(r,c->a,0xFFFDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 FD FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB78u,3u,0xFFu,0xEB7Bu);
      sc_v11_op_compare(r,c->a,0xFFFDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB7Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB7Bu,2u,0x2Cu,0xEB7Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEBA9u;}
      if(c->pc!=0xEB7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB7Bu,2u,0x2Cu,0xEB7Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEBA9u;}
      if(c->pc!=0xEB7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB7Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB7Du,1u,0xE8u,0xEB7Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB7Du,1u,0xE8u,0xEB7Eu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB7Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB7Eu,1u,0xE8u,0xEB7Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB7Eu,1u,0xE8u,0xEB7Fu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB7Fu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 80 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB7Fu,4u,0x7Eu,0xEB83u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 80 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB7Fu,4u,0x7Eu,0xEB83u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB83u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB83u,1u,0x0Au,0xEB84u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB83u,1u,0x0Au,0xEB84u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB84u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB84u,2u,0x79u,0xEB86u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB84u,2u,0x79u,0xEB86u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB86u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB86u,1u,0xE8u,0xEB87u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB86u,1u,0xE8u,0xEB87u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB87u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB87u,1u,0xE8u,0xEB88u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB87u,1u,0xE8u,0xEB88u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB88u:
    if(m==0u&&x==0u&&e==0u){ /* B9 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB88u,3u,0x03u,0xEB8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0357u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB88u,3u,0x03u,0xEB8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0357u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB8Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB8Bu,2u,0x07u,0xEB8Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEB94u;}
      if(c->pc!=0xEB8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB8Bu,2u,0x07u,0xEB8Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEB94u;}
      if(c->pc!=0xEB8Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB8Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB8Du:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 80 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB8Du,4u,0x7Eu,0xEB91u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 80 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB8Du,4u,0x7Eu,0xEB91u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB91u:
    if(m==0u&&x==0u&&e==0u){ /* 99 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB91u,3u,0x03u,0xEB94u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0357u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB91u,3u,0x03u,0xEB94u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0357u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB94u:
    if(m==0u&&x==0u&&e==0u){ /* B9 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB94u,3u,0x03u,0xEB97u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0357u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB94u,3u,0x03u,0xEB97u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0357u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB97u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB97u,1u,0x3Au,0xEB98u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB97u,1u,0x3Au,0xEB98u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB98u:
    if(m==0u&&x==0u&&e==0u){ /* 99 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB98u,3u,0x03u,0xEB9Bu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0357u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 57 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB98u,3u,0x03u,0xEB9Bu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0357u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB9Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB9Bu,2u,0x07u,0xEB9Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEBA4u;}
      if(c->pc!=0xEB9Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB9Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB9Bu,2u,0x07u,0xEB9Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEBA4u;}
      if(c->pc!=0xEB9Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEB9Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB9Du:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB9Du,1u,0x8Au,0xEB9Eu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB9Du,1u,0x8Au,0xEB9Eu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB9Eu,1u,0x38u,0xEB9Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB9Eu,1u,0x38u,0xEB9Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EB9Fu:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB9Fu,2u,0x79u,0xEBA1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EB9Fu,2u,0x79u,0xEBA1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBA1u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA1u,1u,0x4Au,0xEBA2u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA1u,1u,0x4Au,0xEBA2u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBA2u:
    if(m==0u&&x==0u&&e==0u){ /* 80 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA2u,2u,0xA9u,0xEBA4u);
      if(1){c->pc=0xEB4Du;}
      if(c->pc!=0xEBA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA2u,2u,0xA9u,0xEBA4u);
      if(1){c->pc=0xEB4Du;}
      if(c->pc!=0xEBA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBA4u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA4u,1u,0xE8u,0xEBA5u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA4u,1u,0xE8u,0xEBA5u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBA5u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA5u,1u,0xE8u,0xEBA6u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA5u,1u,0xE8u,0xEBA6u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBA6u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA6u,1u,0x8Au,0xEBA7u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA6u,1u,0x8Au,0xEBA7u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBA7u:
    if(m==0u&&x==0u&&e==0u){ /* 80 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA7u,2u,0xA4u,0xEBA9u);
      if(1){c->pc=0xEB4Du;}
      if(c->pc!=0xEBA9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBA9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA7u,2u,0xA4u,0xEBA9u);
      if(1){c->pc=0xEB4Du;}
      if(c->pc!=0xEBA9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBA9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBA9u:
    if(m==0u&&x==0u&&e==0u){ /* 99 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA9u,3u,0x03u,0xEBACu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0317u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBA9u,3u,0x03u,0xEBACu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0317u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBACu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 84 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBACu,4u,0x7Eu,0xEBB0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8400u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 84 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBACu,4u,0x7Eu,0xEBB0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8400u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBB0u:
    if(m==0u&&x==0u&&e==0u){ /* 99 27 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBB0u,3u,0x03u,0xEBB3u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0327u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 27 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBB0u,3u,0x03u,0xEBB3u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0327u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBB3u:
    if(m==0u&&x==0u&&e==0u){ /* B9 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBB3u,3u,0x03u,0xEBB6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0317u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBB3u,3u,0x03u,0xEBB6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0317u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBB6u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBB6u,1u,0x3Au,0xEBB7u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBB6u,1u,0x3Au,0xEBB7u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBB7u:
    if(m==0u&&x==0u&&e==0u){ /* 99 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBB7u,3u,0x03u,0xEBBAu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0317u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 17 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBB7u,3u,0x03u,0xEBBAu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0317u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBBAu:
    if(m==0u&&x==0u&&e==0u){ /* B9 27 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBBAu,3u,0x03u,0xEBBDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0327u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 27 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBBAu,3u,0x03u,0xEBBDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0327u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBBDu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBBDu,1u,0x48u,0xEBBEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBBDu,1u,0x48u,0xEBBEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBBEu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBBEu,1u,0x08u,0xEBBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBBEu,1u,0x08u,0xEBBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBBFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBBFu,2u,0x20u,0xEBC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBBFu,2u,0x20u,0xEBC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBC1u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC1u,1u,0xEBu,0xEBC2u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC1u,1u,0xEBu,0xEBC2u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBC2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC2u,2u,0x20u,0xEBC4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC2u,2u,0x20u,0xEBC4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBC4u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC4u,1u,0x28u,0xEBC5u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC4u,1u,0x28u,0xEBC5u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBC5u:
    if(m==0u&&x==0u&&e==0u){ /* 30 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC5u,2u,0x05u,0xEBC7u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEBCCu;}
      if(c->pc!=0xEBC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC5u,2u,0x05u,0xEBC7u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEBCCu;}
      if(c->pc!=0xEBC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC5u,2u,0x05u,0xEBC7u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEBCCu;}
      if(c->pc!=0xEBC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC5u,2u,0x05u,0xEBC7u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEBCCu;}
      if(c->pc!=0xEBC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBC7u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC7u,3u,0x00u,0xEBCAu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC7u,3u,0x00u,0xEBCAu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC7u,2u,0xFFu,0xEBC9u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBC7u,2u,0xFFu,0xEBC9u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBCAu:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCAu,2u,0x03u,0xEBCCu);
      if(1){c->pc=0xEBCFu;}
      if(c->pc!=0xEBCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCAu,2u,0x03u,0xEBCCu);
      if(1){c->pc=0xEBCFu;}
      if(c->pc!=0xEBCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBCCu:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCCu,3u,0xFFu,0xEBCFu);
      sc_v11_op_ora(r,0xFF00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 09 00 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCCu,3u,0xFFu,0xEBCFu);
      sc_v11_op_ora(r,0xFF00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCCu,2u,0x00u,0xEBCEu);
      sc_v11_op_ora(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCCu,2u,0x00u,0xEBCEu);
      sc_v11_op_ora(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBCEu:
    if(m==1u&&x==0u&&e==0u){ /* FF 18 79 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCEu,4u,0x37u,0xEBD2u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x377918u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FF 18 79 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCEu,4u,0x37u,0xEBD2u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x377918u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBCFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCFu,1u,0x18u,0xEBD0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBCFu,1u,0x18u,0xEBD0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBD0u:
    if(m==0u&&x==0u&&e==0u){ /* 79 37 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD0u,3u,0x03u,0xEBD3u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0337u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 79 37 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD0u,3u,0x03u,0xEBD3u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0337u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBD2u:
    if(m==1u&&x==0u&&e==0u){ /* 03 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD2u,2u,0x99u,0xEBD4u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x99u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD2u,2u,0x99u,0xEBD4u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x99u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBD3u:
    if(m==0u&&x==0u&&e==0u){ /* 99 37 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD3u,3u,0x03u,0xEBD6u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0337u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 37 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD3u,3u,0x03u,0xEBD6u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0337u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBD6u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD6u,1u,0x68u,0xEBD7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD6u,1u,0x68u,0xEBD7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBD7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD7u,2u,0x20u,0xEBD9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD7u,2u,0x20u,0xEBD9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBD9u:
    if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD9u,2u,0xFFu,0xEBDBu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBD9u,2u,0xFFu,0xEBDBu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBDBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBDBu,2u,0x20u,0xEBDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBDBu,2u,0x20u,0xEBDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBDDu:
    if(m==0u&&x==0u&&e==0u){ /* 30 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBDDu,2u,0x05u,0xEBDFu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEBE4u;}
      if(c->pc!=0xEBDFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBDFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBDDu,2u,0x05u,0xEBDFu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEBE4u;}
      if(c->pc!=0xEBDFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBDFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBDFu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBDFu,3u,0x00u,0xEBE2u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBDFu,3u,0x00u,0xEBE2u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBE2u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBE2u,2u,0x03u,0xEBE4u);
      if(1){c->pc=0xEBE7u;}
      if(c->pc!=0xEBE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBE4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBE2u,2u,0x03u,0xEBE4u);
      if(1){c->pc=0xEBE7u;}
      if(c->pc!=0xEBE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBE4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBE4u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBE4u,3u,0xFFu,0xEBE7u);
      sc_v11_op_ora(r,0xFF00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 09 00 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBE4u,3u,0xFFu,0xEBE7u);
      sc_v11_op_ora(r,0xFF00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBE7u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBE7u,1u,0x18u,0xEBE8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBE7u,1u,0x18u,0xEBE8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBE8u:
    if(m==0u&&x==0u&&e==0u){ /* 79 47 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBE8u,3u,0x03u,0xEBEBu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0347u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 79 47 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBE8u,3u,0x03u,0xEBEBu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0347u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBEBu:
    if(m==0u&&x==0u&&e==0u){ /* 99 47 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBEBu,3u,0x03u,0xEBEEu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0347u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 47 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBEBu,3u,0x03u,0xEBEEu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0347u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBEEu:
    if(m==0u&&x==0u&&e==0u){ /* B9 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBEEu,3u,0x03u,0xEBF1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0307u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBEEu,3u,0x03u,0xEBF1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0307u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBF1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBF1u,2u,0x6Bu,0xEBF3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC5Eu;}
      if(c->pc!=0xEBF3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBF3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBF1u,2u,0x6Bu,0xEBF3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC5Eu;}
      if(c->pc!=0xEBF3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEBF3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBF3u:
    if(m==0u&&x==0u&&e==0u){ /* B9 D7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBF3u,3u,0x02u,0xEBF6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x02D7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 D7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBF3u,3u,0x02u,0xEBF6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x02D7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBF6u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBF6u,1u,0x1Au,0xEBF7u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBF6u,1u,0x1Au,0xEBF7u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBF7u:
    if(m==0u&&x==0u&&e==0u){ /* 99 D7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBF7u,3u,0x02u,0xEBFAu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02D7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 D7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBF7u,3u,0x02u,0xEBFAu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02D7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBFAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBFAu,1u,0x0Au,0xEBFBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBFAu,1u,0x0Au,0xEBFBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBFBu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBFBu,1u,0xAAu,0xEBFCu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBFBu,1u,0xAAu,0xEBFCu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EBFCu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 8C 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBFCu,4u,0x7Eu,0xEC00u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8C00u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 8C 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EBFCu,4u,0x7Eu,0xEC00u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8C00u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
