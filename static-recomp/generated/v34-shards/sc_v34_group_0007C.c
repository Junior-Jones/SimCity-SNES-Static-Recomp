/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0007C(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01F069u:
    if(m==1u&&x==0u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F069u,2u,0x10u,0xF06Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F06Bu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F06Bu,2u,0x20u,0xF06Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F06Du:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F06Du,2u,0xD7u,0xF06Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F06Fu:
    if(m==0u&&x==1u&&e==0u){ /* 30 05 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F06Fu,2u,0x05u,0xF071u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF076u;}
      if(c->pc!=0xF071u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF071u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F071u:
    if(m==0u&&x==1u&&e==0u){ /* AD F1 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F071u,3u,0x0Au,0xF074u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F074u:
    if(m==0u&&x==1u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F074u,2u,0x01u,0xF076u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF077u;}
      if(c->pc!=0xF076u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF076u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F077u:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F077u,2u,0xD7u,0xF079u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F079u:
    if(m==0u&&x==1u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F079u,2u,0x03u,0xF07Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF07Eu;}
      if(c->pc!=0xF07Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF07Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F07Eu:
    if(m==0u&&x==1u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F07Eu,2u,0x10u,0xF080u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F080u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F080u,2u,0x20u,0xF082u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F082u:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F082u,3u,0x01u,0xF085u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F085u:
    if(m==0u&&x==1u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F085u,3u,0x40u,0xF088u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F088u:
    if(m==0u&&x==1u&&e==0u){ /* F0 43 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F088u,2u,0x43u,0xF08Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF0CDu;}
      if(c->pc!=0xF08Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF08Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0CDu:
    if(m==0u&&x==1u&&e==0u){ /* 9C C3 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0CDu,3u,0x01u,0xF0D0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0D0u:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0D0u,1u,0x60u,0xF0D1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1DCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1DCu,2u,0x30u,0xF1DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1DEu:
    if(m==0u&&x==0u&&e==0u){ /* A2 FE 07 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1DEu,3u,0x07u,0xF1E1u);
      sc_v11_op_ldx(r,0x07FEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1E1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 23 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1E1u,3u,0x23u,0xF1E4u);
      sc_v11_op_lda(r,0x2300u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1E4u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1E4u,4u,0x7Eu,0xF1E8u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1E8u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1E8u,1u,0xCAu,0xF1E9u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1E9u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1E9u,1u,0xCAu,0xF1EAu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1EAu:
    if(m==0u&&x==0u&&e==0u){ /* 10 F8 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1EAu,2u,0xF8u,0xF1ECu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF1E4u;}
      if(c->pc!=0xF1ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF1ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1ECu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2556; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1ECu,1u,0x60u,0xF1EDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1EDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F1 F1 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1EDu,3u,0xF1u,0xF1F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF1EFu))return 0;c->pc=0xF1F1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F0u:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F0u,1u,0x6Bu,0xF1F1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F1u,2u,0x20u,0xF1F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F3u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F3u,2u,0x20u,0xF1F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F5u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F5u,2u,0xB3u,0xF1F7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F7u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F7u,2u,0x7Fu,0xF1F9u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F9u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F9u,2u,0xB1u,0xF1FBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1FBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1FBu,2u,0x20u,0xF1FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1FDu:
    if(m==0u&&x==0u&&e==0u){ /* 22 4B 82 00 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1FDu,4u,0x00u,0xF201u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF200u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F201u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F201u,3u,0x00u,0xF204u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F204u:
    if(m==0u&&x==0u&&e==0u){ /* C9 56 00 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F204u,3u,0x00u,0xF207u);
      sc_v11_op_compare(r,c->a,0x0056u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F207u:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F207u,2u,0x05u,0xF209u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF20Eu;}
      if(c->pc!=0xF209u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF209u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F20Eu:
    if(m==0u&&x==0u&&e==0u){ /* 22 BC 94 00 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F20Eu,4u,0x00u,0xF212u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF211u))return 0;
      c->pbr=0x00u;c->pc=0x94BCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F212u:
    if(m==1u&&x==0u&&e==0u){ /* 20 80 F3 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F212u,3u,0xF3u,0xF215u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF214u))return 0;c->pc=0xF380u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F215u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B9 F5 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F215u,3u,0xF5u,0xF218u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF217u))return 0;c->pc=0xF5B9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F218u:
    if(m==0u&&x==0u&&e==0u){ /* 20 11 F3 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F218u,3u,0xF3u,0xF21Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF21Au))return 0;c->pc=0xF311u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F21Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 44 F4 Mesen corrected gameplay frame 1245; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F21Bu,3u,0xF4u,0xF21Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF21Du))return 0;c->pc=0xF444u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F21Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A3 F3 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F21Eu,3u,0xF3u,0xF221u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF220u))return 0;c->pc=0xF3A3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F221u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F221u,2u,0x20u,0xF223u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F223u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F223u,2u,0x20u,0xF225u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F225u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F225u,2u,0xB3u,0xF227u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F227u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F227u,2u,0x80u,0xF229u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F229u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F229u,2u,0xB1u,0xF22Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F22Bu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F22Bu,1u,0x60u,0xF22Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F311u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F311u,2u,0x30u,0xF313u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F313u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F313u,3u,0x00u,0xF316u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F316u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F316u,3u,0xF8u,0xF319u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF318u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F319u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F319u,1u,0x1Au,0xF31Au);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F31Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 45 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F31Au,3u,0x04u,0xF31Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0445u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F31Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 63 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F31Du,3u,0x00u,0xF320u);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F320u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F320u,3u,0xF8u,0xF323u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF322u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F323u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F323u,1u,0x18u,0xF324u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F324u:
    if(m==0u&&x==0u&&e==0u){ /* 69 0A 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F324u,3u,0x00u,0xF327u);
      sc_v11_op_adc(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F327u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F327u,3u,0x04u,0xF32Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F32Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 50 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F32Au,3u,0x00u,0xF32Du);
      sc_v11_op_lda(r,0x0050u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F32Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F32Du,3u,0xF8u,0xF330u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF32Fu))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F330u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F330u,1u,0x18u,0xF331u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F331u:
    if(m==0u&&x==0u&&e==0u){ /* 69 0A 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F331u,3u,0x00u,0xF334u);
      sc_v11_op_adc(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F334u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F334u,3u,0x04u,0xF337u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0441u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F337u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F337u,3u,0x00u,0xF33Au);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F33Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Au,3u,0xF8u,0xF33Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF33Cu))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F33Du:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Du,1u,0x1Au,0xF33Eu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F33Eu:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Eu,1u,0x1Au,0xF33Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F33Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 43 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Fu,3u,0x04u,0xF342u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0443u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F342u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F342u,3u,0x00u,0xF345u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F345u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F345u,3u,0xF8u,0xF348u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF347u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F348u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F348u,1u,0x18u,0xF349u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F349u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 3F 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F349u,3u,0x04u,0xF34Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F34Cu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F34Cu,1u,0x38u,0xF34Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F34Du:
    if(m==0u&&x==0u&&e==0u){ /* E9 06 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F34Du,3u,0x00u,0xF350u);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F350u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F350u,3u,0x04u,0xF353u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F353u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F353u,3u,0x00u,0xF356u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F356u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F356u,3u,0xF8u,0xF359u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF358u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F359u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F359u,1u,0x18u,0xF35Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F35Au:
    if(m==0u&&x==0u&&e==0u){ /* 6D 41 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Au,3u,0x04u,0xF35Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0441u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F35Du:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Du,1u,0x38u,0xF35Eu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F35Eu:
    if(m==0u&&x==0u&&e==0u){ /* E9 06 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Eu,3u,0x00u,0xF361u);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F361u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F361u,3u,0x04u,0xF364u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F364u:
    if(m==0u&&x==0u&&e==0u){ /* 22 4B 82 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F364u,4u,0x00u,0xF368u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF367u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F368u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F368u,3u,0x00u,0xF36Bu);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F36Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F36Bu,2u,0x05u,0xF36Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF372u;}
      if(c->pc!=0xF36Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF36Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F36Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D F7 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F36Du,3u,0xF7u,0xF370u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF36Fu))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F370u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 Mesen corrected gameplay frame 1225; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F370u,2u,0x03u,0xF372u);
      if(1){c->pc=0xF375u;}
      if(c->pc!=0xF372u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF372u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F372u:
    if(m==0u&&x==0u&&e==0u){ /* 20 94 F7 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F372u,3u,0xF7u,0xF375u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF374u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F375u:
    if(m==0u&&x==0u&&e==0u){ /* CE 43 04 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F375u,3u,0x04u,0xF378u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F378u:
    if(m==0u&&x==0u&&e==0u){ /* D0 C8 Mesen corrected gameplay frame 1224; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F378u,2u,0xC8u,0xF37Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF342u;}
      if(c->pc!=0xF37Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF37Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F37Au:
    if(m==0u&&x==0u&&e==0u){ /* CE 45 04 Mesen corrected gameplay frame 1228; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Au,3u,0x04u,0xF37Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0445u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F37Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 9E Mesen corrected gameplay frame 1228; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Du,2u,0x9Eu,0xF37Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF31Du;}
      if(c->pc!=0xF37Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF37Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F37Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1245; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Fu,1u,0x60u,0xF380u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F380u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F380u,2u,0x20u,0xF382u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F382u:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F382u,3u,0x00u,0xF385u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F385u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F385u,3u,0xF8u,0xF388u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF387u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F388u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F388u,1u,0x18u,0xF389u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F389u:
    if(m==0u&&x==0u&&e==0u){ /* 69 28 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F389u,3u,0x00u,0xF38Cu);
      sc_v11_op_adc(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F38Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 57 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F38Cu,3u,0x04u,0xF38Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0457u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F38Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F38Fu,3u,0x04u,0xF392u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F392u:
    if(m==0u&&x==0u&&e==0u){ /* A9 21 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F392u,3u,0x00u,0xF395u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F395u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F395u,3u,0xF8u,0xF398u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF397u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F398u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F398u,1u,0x18u,0xF399u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F399u:
    if(m==0u&&x==0u&&e==0u){ /* 69 21 00 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F399u,3u,0x00u,0xF39Cu);
      sc_v11_op_adc(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F39Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 59 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F39Cu,3u,0x04u,0xF39Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0459u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F39Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 04 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F39Fu,3u,0x04u,0xF3A2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3A2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1105; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3A2u,1u,0x60u,0xF3A3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3A3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3A3u,2u,0x30u,0xF3A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3A5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3A5u,3u,0x00u,0xF3A8u);
      sc_v11_op_lda(r,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3A8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3A8u,3u,0xF8u,0xF3ABu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3AAu))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3ABu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3ABu,1u,0x18u,0xF3ACu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3ACu:
    if(m==0u&&x==0u&&e==0u){ /* 69 32 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3ACu,3u,0x00u,0xF3AFu);
      sc_v11_op_adc(r,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3AFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3AFu,3u,0x04u,0xF3B2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3B2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 77 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B2u,3u,0x00u,0xF3B5u);
      sc_v11_op_lda(r,0x0077u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3B5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B5u,3u,0xF8u,0xF3B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3B7u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3B8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4B 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B8u,3u,0x04u,0xF3BBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3BBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 63 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3BBu,3u,0x00u,0xF3BEu);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3BEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3BEu,3u,0xF8u,0xF3C1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3C0u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3C1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4D 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C1u,3u,0x04u,0xF3C4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3C4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D3 F3 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C4u,3u,0xF3u,0xF3C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3C6u))return 0;c->pc=0xF3D3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3C7u:
    if(m==0u&&x==0u&&e==0u){ /* CE 3F 04 Mesen corrected gameplay frame 1297; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C7u,3u,0x04u,0xF3CAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3CAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 E6 Mesen corrected gameplay frame 1297; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CAu,2u,0xE6u,0xF3CCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF3B2u;}
      if(c->pc!=0xF3CCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF3CCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3CCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 02 F5 Mesen corrected gameplay frame 1359; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CCu,3u,0xF5u,0xF3CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3CEu))return 0;c->pc=0xF502u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3CFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 02 F5 Mesen corrected gameplay frame 1474; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CFu,3u,0xF5u,0xF3D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3D1u))return 0;c->pc=0xF502u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3D2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1574; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D2u,1u,0x60u,0xF3D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3D3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D3u,2u,0x30u,0xF3D5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3D5u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D5u,3u,0x00u,0xF3D8u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3D8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 96 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D8u,3u,0x00u,0xF3DBu);
      sc_v11_op_lda(r,0x0096u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3DBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 F8 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DBu,3u,0xF8u,0xF3DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3DDu))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3DEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DEu,1u,0x18u,0xF3DFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3DFu:
    if(m==0u&&x==0u&&e==0u){ /* 69 32 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DFu,3u,0x00u,0xF3E2u);
      sc_v11_op_adc(r,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3E2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 43 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3E2u,3u,0x04u,0xF3E5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0443u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3E5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 4B 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3E5u,3u,0x04u,0xF3E8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3E8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3E8u,3u,0x04u,0xF3EBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3EBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 4D 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3EBu,3u,0x04u,0xF3EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3EEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3EEu,3u,0x04u,0xF3F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3F1u:
    if(m==0u&&x==0u&&e==0u){ /* 22 4B 82 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F1u,4u,0x00u,0xF3F5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF3F4u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3F5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F5u,3u,0x00u,0xF3F8u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3F8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 AE F6 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F8u,3u,0xF6u,0xF3FBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3FAu))return 0;c->pc=0xF6AEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3FBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3FBu,3u,0x04u,0xF3FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3FEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 04 Mesen corrected gameplay frame 1295; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3FEu,3u,0x04u,0xF401u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0453u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
