/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0002A(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00AB92u:
    if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB92u,2u,0x10u,0xAB94u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB92u,2u,0x10u,0xAB94u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB92u,2u,0x10u,0xAB94u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AB94u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB94u,2u,0x20u,0xAB96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AB9Bu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB9Bu,2u,0x20u,0xAB9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AB9Du:
    if(m==1u&&x==1u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB9Du,2u,0xE1u,0xAB9Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AB9Fu:
    if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AB9Fu,2u,0x07u,0xABA1u);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABA1u:
    if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABA1u,2u,0x03u,0xABA3u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABA3u:
    if(m==1u&&x==1u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABA3u,2u,0x01u,0xABA5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xABA6u;}
      if(c->pc!=0xABA5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABA5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABA5u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABA5u,1u,0x60u,0xABA6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABA6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABA6u,2u,0x01u,0xABA8u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABA8u:
    if(m==1u&&x==1u&&e==0u){ /* 8D B7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABA8u,3u,0x0Au,0xABABu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AB7u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABABu:
    if(m==1u&&x==1u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABABu,2u,0xE3u,0xABADu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABADu:
    if(m==1u&&x==1u&&e==0u){ /* D0 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABADu,2u,0xF6u,0xABAFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xABA5u;}
      if(c->pc!=0xABAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABAFu:
    if(m==1u&&x==1u&&e==0u){ /* AD 93 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABAFu,3u,0x01u,0xABB2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0193u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABB2u:
    if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABB2u,2u,0x03u,0xABB4u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABB4u:
    if(m==1u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABB4u,2u,0x03u,0xABB6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xABB9u;}
      if(c->pc!=0xABB6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABB6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABB6u:
    if(m==1u&&x==1u&&e==0u){ /* 4C 24 AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABB6u,3u,0xADu,0xABB9u);
      c->pc=0xAD24u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABB9u:
    if(m==1u&&x==1u&&e==0u){ /* AD BF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABB9u,3u,0x0Au,0xABBCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0ABFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABBCu:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABBCu,2u,0x0Fu,0xABBEu);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABBEu:
    if(m==1u&&x==1u&&e==0u){ /* D0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABBEu,2u,0x11u,0xABC0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xABD1u;}
      if(c->pc!=0xABC0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABC0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABC0u:
    if(m==1u&&x==1u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABC0u,2u,0xE1u,0xABC2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABC2u:
    if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABC2u,2u,0x03u,0xABC4u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABC4u:
    if(m==1u&&x==1u&&e==0u){ /* D0 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABC4u,2u,0x21u,0xABC6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xABE7u;}
      if(c->pc!=0xABC6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABC6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABC6u:
    if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABC6u,1u,0x08u,0xABC7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABC7u:
    if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABC7u,4u,0x00u,0xABCBu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xABCAu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABCBu:
    if(m==0u&&x==0u&&e==0u){ /* 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCBu,2u,0x01u,0xABCDu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCBu,2u,0x01u,0xABCDu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCBu,2u,0x01u,0xABCDu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCBu,2u,0x01u,0xABCDu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABCDu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCDu,1u,0x28u,0xABCEu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCDu,1u,0x28u,0xABCEu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCDu,1u,0x28u,0xABCEu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCDu,1u,0x28u,0xABCEu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABCEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E9 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCEu,3u,0xACu,0xABD1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xABD0u))return 0;c->pc=0xACE9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E9 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCEu,3u,0xACu,0xABD1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xABD0u))return 0;c->pc=0xACE9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCEu,3u,0xACu,0xABD1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xABD0u))return 0;c->pc=0xACE9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABCEu,3u,0xACu,0xABD1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xABD0u))return 0;c->pc=0xACE9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABD1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD1u,2u,0x30u,0xABD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD1u,2u,0x30u,0xABD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD1u,2u,0x30u,0xABD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD1u,2u,0x30u,0xABD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABD3u:
    if(m==1u&&x==1u&&e==0u){ /* AD C1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD3u,3u,0x0Au,0xABD6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AC1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABD6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD6u,1u,0x0Au,0xABD7u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABD7u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD7u,1u,0x0Au,0xABD8u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABD8u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD8u,1u,0x0Au,0xABD9u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABD9u:
    if(m==1u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABD9u,2u,0x91u,0xABDBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABDBu:
    if(m==1u&&x==1u&&e==0u){ /* AD BF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABDBu,3u,0x0Au,0xABDEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0ABFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABDEu:
    if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABDEu,2u,0x03u,0xABE0u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABE0u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABE0u,1u,0x0Au,0xABE1u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABE1u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABE1u,1u,0x18u,0xABE2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABE2u:
    if(m==1u&&x==1u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABE2u,2u,0x91u,0xABE4u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x91u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABE4u:
    if(m==1u&&x==1u&&e==0u){ /* 8D C3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABE4u,3u,0x0Au,0xABE7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AC3u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABE7u:
    if(m==1u&&x==1u&&e==0u){ /* EE BF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABE7u,3u,0x0Au,0xABEAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0ABFu),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABEAu:
    if(m==1u&&x==1u&&e==0u){ /* AD C1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABEAu,3u,0x0Au,0xABEDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AC1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABEDu:
    if(m==1u&&x==1u&&e==0u){ /* 29 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABEDu,2u,0x02u,0xABEFu);
      sc_v11_op_and(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABEFu:
    if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABEFu,1u,0xA8u,0xABF0u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABF0u:
    if(m==1u&&x==1u&&e==0u){ /* AD C1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABF0u,3u,0x0Au,0xABF3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AC1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABF3u:
    if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABF3u,2u,0x01u,0xABF5u);
      sc_v11_op_and(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABF5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABF5u,2u,0x1Fu,0xABF7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAC16u;}
      if(c->pc!=0xABF7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xABF7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABF7u:
    if(m==1u&&x==1u&&e==0u){ /* B9 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABF7u,3u,0x0Au,0xABFAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A6Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABFAu:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABFAu,1u,0x38u,0xABFBu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABFBu:
    if(m==1u&&x==1u&&e==0u){ /* E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABFBu,2u,0x01u,0xABFDu);
      sc_v11_op_sbc(r,0x0001u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABFDu:
    if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABFDu,2u,0x07u,0xABFFu);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ABFFu:
    if(m==1u&&x==1u&&e==0u){ /* D9 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ABFFu,3u,0x0Au,0xAC02u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A6Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
