/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00165(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x059400u:
    if(m==0u&&x==1u&&e==0u){ /* A5 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059400u,2u,0x18u,0x9402u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x18u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059400u,2u,0x18u,0x9402u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x18u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059400u,2u,0x18u,0x9402u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x18u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059402u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059402u,3u,0x01u,0x9405u);
      sc_v11_op_and(r,0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059402u,2u,0xFFu,0x9404u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059402u,2u,0xFFu,0x9404u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059405u:
    if(m==0u&&x==1u&&e==0u){ /* 85 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059405u,2u,0x18u,0x9407u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x18u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059407u:
    if(m==0u&&x==1u&&e==0u){ /* A5 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059407u,2u,0x1Cu,0x9409u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059409u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059409u,3u,0x01u,0x940Cu);
      sc_v11_op_and(r,0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05940Cu:
    if(m==0u&&x==1u&&e==0u){ /* 85 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05940Cu,2u,0x1Cu,0x940Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05940Eu:
    if(m==0u&&x==1u&&e==0u){ /* A5 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05940Eu,2u,0x20u,0x9410u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x20u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059410u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059410u,3u,0x01u,0x9413u);
      sc_v11_op_and(r,0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059413u:
    if(m==0u&&x==1u&&e==0u){ /* 85 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059413u,2u,0x20u,0x9415u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x20u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059415u:
    if(m==0u&&x==1u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059415u,2u,0x02u,0x9417u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9419u;}
      if(c->pc!=0x9417u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9417u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059417u:
    if(m==0u&&x==1u&&e==0u){ /* E6 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059417u,2u,0x30u,0x9419u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x30u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059419u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059419u,1u,0x60u,0x941Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05941Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05941Au,2u,0x20u,0x941Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059426u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059426u,2u,0x20u,0x9428u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059426u,2u,0x20u,0x9428u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059426u,2u,0x20u,0x9428u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059428u:
    if(m==0u&&x==1u&&e==0u){ /* A9 4A 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059428u,3u,0x01u,0x942Bu);
      sc_v11_op_lda(r,0x014Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05942Bu:
    if(m==0u&&x==1u&&e==0u){ /* 85 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05942Bu,2u,0x2Cu,0x942Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x2Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05942Du:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05942Du,1u,0x60u,0x942Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05942Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05942Eu,2u,0x20u,0x9430u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594A9u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594A9u,2u,0x20u,0x94ABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594A9u,2u,0x20u,0x94ABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594A9u,2u,0x20u,0x94ABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594ABu:
    if(m==1u&&x==1u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594ABu,2u,0x40u,0x94ADu);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594ADu:
    if(m==1u&&x==1u&&e==0u){ /* 85 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594ADu,2u,0x2Eu,0x94AFu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x2Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594AFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594AFu,2u,0x20u,0x94B1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594AFu,2u,0x20u,0x94B1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594AFu,2u,0x20u,0x94B1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594B1u:
    if(m==0u&&x==1u&&e==0u){ /* A5 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594B1u,2u,0x2Eu,0x94B3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x2Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594B3u:
    if(m==0u&&x==1u&&e==0u){ /* C9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594B3u,3u,0x00u,0x94B6u);
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594B6u:
    if(m==0u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594B6u,2u,0x03u,0x94B8u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x94BBu;}
      if(c->pc!=0x94B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x94B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594B8u:
    if(m==0u&&x==1u&&e==0u){ /* 4C 2E 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594B8u,3u,0x95u,0x94BBu);
      c->pc=0x952Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594BBu:
    if(m==0u&&x==1u&&e==0u){ /* 4C 4F 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594BBu,3u,0x95u,0x94BEu);
      c->pc=0x954Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0594BEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594BEu,2u,0x20u,0x94C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0594BEu,2u,0x20u,0x94C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05952Eu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05952Eu,2u,0x20u,0x9530u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05952Eu,2u,0x20u,0x9530u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05952Eu,2u,0x20u,0x9530u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059530u:
    if(m==0u&&x==1u&&e==0u){ /* A9 D4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059530u,3u,0x00u,0x9533u);
      sc_v11_op_lda(r,0x00D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059533u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059533u,3u,0x02u,0x9536u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059536u:
    if(m==0u&&x==1u&&e==0u){ /* A5 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059536u,2u,0x28u,0x9538u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x28u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059538u:
    if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059538u,1u,0x3Au,0x9539u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059539u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059539u,3u,0x02u,0x953Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05953Cu:
    if(m==0u&&x==1u&&e==0u){ /* A5 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05953Cu,2u,0x2Au,0x953Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x2Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05953Eu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05953Eu,3u,0x02u,0x9541u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059541u:
    if(m==0u&&x==1u&&e==0u){ /* A9 19 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059541u,3u,0x00u,0x9544u);
      sc_v11_op_lda(r,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059544u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059544u,3u,0x02u,0x9547u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059547u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059547u,2u,0x20u,0x9549u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059549u:
    if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059549u,3u,0x00u,0x954Cu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05954Cu:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05954Cu,2u,0x00u,0x954Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x954Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05954Eu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05954Eu,1u,0x60u,0x954Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05954Fu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05954Fu,2u,0x20u,0x9551u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059551u:
    if(m==0u&&x==1u&&e==0u){ /* A9 D4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059551u,3u,0x00u,0x9554u);
      sc_v11_op_lda(r,0x00D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059554u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059554u,3u,0x02u,0x9557u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059557u:
    if(m==0u&&x==1u&&e==0u){ /* A5 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059557u,2u,0x28u,0x9559u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x28u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059559u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059559u,3u,0x02u,0x955Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05955Cu:
    if(m==0u&&x==1u&&e==0u){ /* A5 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05955Cu,2u,0x2Au,0x955Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x2Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05955Eu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05955Eu,3u,0x02u,0x9561u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059561u:
    if(m==0u&&x==1u&&e==0u){ /* A9 1A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059561u,3u,0x00u,0x9564u);
      sc_v11_op_lda(r,0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059564u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059564u,3u,0x02u,0x9567u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059567u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059567u,2u,0x20u,0x9569u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059569u:
    if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059569u,3u,0x00u,0x956Cu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05956Cu:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05956Cu,2u,0x00u,0x956Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x956Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05956Eu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05956Eu,1u,0x60u,0x956Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05956Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05956Fu,2u,0x30u,0x9571u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059571u:
    if(m==1u&&x==1u&&e==0u){ /* A9 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059571u,2u,0x8Fu,0x9573u);
      sc_v11_op_lda(r,0x008Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059573u:
    if(m==1u&&x==1u&&e==0u){ /* 85 5F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059573u,2u,0x5Fu,0x9575u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x5Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059575u:
    if(m==1u&&x==1u&&e==0u){ /* 64 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059575u,2u,0x60u,0x9577u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059577u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 02 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059577u,3u,0x21u,0x957Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2102u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05957Au:
    if(m==1u&&x==1u&&e==0u){ /* 9C 03 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05957Au,3u,0x21u,0x957Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2103u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05957Du:
    if(m==1u&&x==1u&&e==0u){ /* 9C 06 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05957Du,3u,0x21u,0x9580u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2106u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059580u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059580u,2u,0x01u,0x9582u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059582u:
    if(m==1u&&x==1u&&e==0u){ /* 64 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059582u,2u,0x61u,0x9584u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059584u:
    if(m==1u&&x==1u&&e==0u){ /* A9 35 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059584u,2u,0x35u,0x9586u);
      sc_v11_op_lda(r,0x0035u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059586u:
    if(m==1u&&x==1u&&e==0u){ /* 85 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059586u,2u,0x62u,0x9588u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059588u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 07 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059588u,3u,0x21u,0x958Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2107u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05958Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05958Bu,2u,0x20u,0x958Du);
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05958Du:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05958Du,3u,0x21u,0x9590u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059590u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 13 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059590u,3u,0x21u,0x9593u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2113u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059593u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 13 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059593u,3u,0x21u,0x9596u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2113u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059596u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 14 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059596u,3u,0x21u,0x9599u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2114u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059599u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 14 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059599u,3u,0x21u,0x959Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2114u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05959Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05959Cu,2u,0x80u,0x959Eu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05959Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 15 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x05959Eu,3u,0x21u,0x95A1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2115u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595A1u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 23 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595A1u,3u,0x21u,0x95A4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2123u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595A4u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 24 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595A4u,3u,0x21u,0x95A7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2124u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595A7u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 25 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595A7u,3u,0x21u,0x95AAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2125u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595AAu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2A 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595AAu,3u,0x21u,0x95ADu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Au),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595ADu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2B 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595ADu,3u,0x21u,0x95B0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595B0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595B0u,2u,0x01u,0x95B2u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595B2u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2C 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595B2u,3u,0x21u,0x95B5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595B5u:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595B5u,2u,0x68u,0x95B7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595B7u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595B7u,3u,0x21u,0x95BAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595BAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595BAu,2u,0x01u,0x95BCu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595BCu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595BCu,3u,0x21u,0x95BFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595BFu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595BFu,3u,0x21u,0x95C2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595C2u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 28 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595C2u,3u,0x21u,0x95C5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2128u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595C5u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 29 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595C5u,3u,0x21u,0x95C8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2129u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595C8u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 30 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595C8u,3u,0x21u,0x95CBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2130u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595CBu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 31 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595CBu,3u,0x21u,0x95CEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2131u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595CEu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 33 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595CEu,3u,0x21u,0x95D1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2133u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595D1u:
    if(m==1u&&x==1u&&e==0u){ /* 64 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595D1u,2u,0xB1u,0x95D3u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595D3u:
    if(m==1u&&x==1u&&e==0u){ /* 64 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595D3u,2u,0xB3u,0x95D5u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595D5u:
    if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595D5u,2u,0xFFu,0x95D7u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595D7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 01 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595D7u,3u,0x42u,0x95DAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595DAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595DAu,2u,0x00u,0x95DCu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595DCu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 02 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595DCu,3u,0x42u,0x95DFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595DFu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 03 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595DFu,3u,0x42u,0x95E2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595E2u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 04 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595E2u,3u,0x42u,0x95E5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595E5u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 05 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595E5u,3u,0x42u,0x95E8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4205u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595E8u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 06 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595E8u,3u,0x42u,0x95EBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4206u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595EBu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 07 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595EBu,3u,0x42u,0x95EEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4207u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595EEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 08 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595EEu,3u,0x42u,0x95F1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4208u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595F1u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 09 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595F1u,3u,0x42u,0x95F4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4209u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595F4u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0A 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595F4u,3u,0x42u,0x95F7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595F7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595F7u,3u,0x42u,0x95FAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595FAu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0C 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595FAu,3u,0x42u,0x95FDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595FDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595FDu,2u,0x00u,0x95FFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0595FFu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0D 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0595FFu,3u,0x42u,0x9602u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059602u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059602u,1u,0x60u,0x9603u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
