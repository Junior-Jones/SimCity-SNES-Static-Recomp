/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000AB(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02AC00u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC00u,3u,0x0Du,0xAC03u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC03u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC03u,2u,0x79u,0xAC05u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC05u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC05u,2u,0x7Cu,0xAC07u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC07u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC07u,3u,0xB3u,0xAC0Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC09u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC0Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC0Au,2u,0x20u,0xAC0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC0Au,2u,0x20u,0xAC0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC0Au,2u,0x20u,0xAC0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC0Au,2u,0x20u,0xAC0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC0Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC0Cu,3u,0x00u,0xAC0Fu);
      sc_v11_op_lda(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC0Cu,3u,0x00u,0xAC0Fu);
      sc_v11_op_lda(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC0Fu,3u,0xB2u,0xAC12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC11u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC0Fu,3u,0xB2u,0xAC12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC11u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC12u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC12u,2u,0x20u,0xAC14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC12u,2u,0x20u,0xAC14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC12u,2u,0x20u,0xAC14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC12u,2u,0x20u,0xAC14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC14u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC14u,3u,0x00u,0xAC17u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC14u,3u,0x00u,0xAC17u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC17u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC17u,2u,0x00u,0xAC19u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC19u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC17u,2u,0x00u,0xAC19u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC19u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC19u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC19u,2u,0x30u,0xAC1Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC19u,2u,0x30u,0xAC1Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC1Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC1Bu,3u,0x0Bu,0xAC1Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC1Eu,2u,0x79u,0xAC20u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC20u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC20u,3u,0x0Bu,0xAC23u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC23u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC23u,2u,0x7Cu,0xAC25u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC25u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC25u,3u,0xB3u,0xAC28u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC27u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC28u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC28u,2u,0x20u,0xAC2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC28u,2u,0x20u,0xAC2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC28u,2u,0x20u,0xAC2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC28u,2u,0x20u,0xAC2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC2Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 11 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC2Au,3u,0x00u,0xAC2Du);
      sc_v11_op_lda(r,0x0011u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 11 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC2Au,3u,0x00u,0xAC2Du);
      sc_v11_op_lda(r,0x0011u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC2Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC2Du,3u,0xB2u,0xAC30u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC2Fu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC2Du,3u,0xB2u,0xAC30u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC2Fu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC30u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC30u,2u,0x20u,0xAC32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC30u,2u,0x20u,0xAC32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC30u,2u,0x20u,0xAC32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC30u,2u,0x20u,0xAC32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC32u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC32u,3u,0x00u,0xAC35u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC32u,3u,0x00u,0xAC35u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC35u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC35u,2u,0x00u,0xAC37u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC37u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC35u,2u,0x00u,0xAC37u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC37u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC37u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC37u,2u,0x30u,0xAC39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC37u,2u,0x30u,0xAC39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC39u:
    if(m==0u&&x==0u&&e==0u){ /* AD D9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC39u,3u,0x0Du,0xAC3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC3Cu,2u,0x79u,0xAC3Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC3Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD DB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC3Eu,3u,0x0Du,0xAC41u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DDBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC41u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC41u,2u,0x7Cu,0xAC43u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC43u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC43u,3u,0xB3u,0xAC46u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC45u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC46u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC46u,2u,0x20u,0xAC48u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC46u,2u,0x20u,0xAC48u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC46u,2u,0x20u,0xAC48u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC46u,2u,0x20u,0xAC48u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC48u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC48u,3u,0x00u,0xAC4Bu);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC48u,3u,0x00u,0xAC4Bu);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC4Bu,3u,0xB2u,0xAC4Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC4Du))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC4Bu,3u,0xB2u,0xAC4Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC4Du))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC4Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC4Eu,2u,0x20u,0xAC50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC4Eu,2u,0x20u,0xAC50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC4Eu,2u,0x20u,0xAC50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC4Eu,2u,0x20u,0xAC50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC50u:
    if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC50u,1u,0x08u,0xAC51u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC50u,1u,0x08u,0xAC51u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC51u:
    if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC51u,4u,0x00u,0xAC55u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAC54u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC51u,4u,0x00u,0xAC55u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAC54u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC55u:
    if(m==0u&&x==0u&&e==0u){ /* 02 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC55u,2u,0x06u,0xAC57u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC57u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC55u,2u,0x06u,0xAC57u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC57u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC55u,2u,0x06u,0xAC57u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC57u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC55u,2u,0x06u,0xAC57u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC57u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC57u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC57u,1u,0x28u,0xAC58u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC57u,1u,0x28u,0xAC58u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC57u,1u,0x28u,0xAC58u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC57u,1u,0x28u,0xAC58u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC58u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC58u,2u,0x20u,0xAC5Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC58u,2u,0x20u,0xAC5Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC58u,2u,0x20u,0xAC5Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC58u,2u,0x20u,0xAC5Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC5Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C 67 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC5Au,3u,0x0Du,0xAC5Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D67u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 67 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC5Au,3u,0x0Du,0xAC5Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D67u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC5Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC5Du,2u,0x20u,0xAC5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC5Du,2u,0x20u,0xAC5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC5Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC5Fu,3u,0x00u,0xAC62u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC5Fu,3u,0x00u,0xAC62u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC62u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC62u,2u,0x00u,0xAC64u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC64u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC62u,2u,0x00u,0xAC64u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC64u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC64u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1F B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC64u,3u,0xB5u,0xAC67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC66u))return 0;c->pc=0xB51Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1F B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC64u,3u,0xB5u,0xAC67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC66u))return 0;c->pc=0xB51Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC67u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9D AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC67u,3u,0xAAu,0xAC6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC69u))return 0;c->pc=0xAA9Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9D AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC67u,3u,0xAAu,0xAC6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC69u))return 0;c->pc=0xAA9Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9D AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC67u,3u,0xAAu,0xAC6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC69u))return 0;c->pc=0xAA9Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9D AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC67u,3u,0xAAu,0xAC6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC69u))return 0;c->pc=0xAA9Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC6Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC6Au,2u,0x20u,0xAC6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC6Au,2u,0x20u,0xAC6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC6Au,2u,0x20u,0xAC6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC6Au,2u,0x20u,0xAC6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC6Cu:
    if(m==0u&&x==0u&&e==0u){ /* 64 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC6Cu,2u,0x56u,0xAC6Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x56u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC6Cu,2u,0x56u,0xAC6Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x56u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC6Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A9 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC6Eu,3u,0xA5u,0xAC71u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC70u))return 0;c->pc=0xA5A9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A9 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC6Eu,3u,0xA5u,0xAC71u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC70u))return 0;c->pc=0xA5A9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC71u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC71u,1u,0x60u,0xAC72u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC71u,1u,0x60u,0xAC72u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC71u,1u,0x60u,0xAC72u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC71u,1u,0x60u,0xAC72u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC72u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC72u,2u,0x20u,0xAC74u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC72u,2u,0x20u,0xAC74u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC74u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC74u,3u,0x00u,0xAC77u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC77u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC77u,2u,0x00u,0xAC79u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC79u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC79u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC79u,2u,0x30u,0xAC7Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC7Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC7Bu,3u,0x0Du,0xAC7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DDFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC7Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC7Eu,2u,0x79u,0xAC80u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC80u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC80u,2u,0x7Cu,0xAC82u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC82u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC82u,3u,0xB3u,0xAC85u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC84u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC85u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC85u,2u,0x20u,0xAC87u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC85u,2u,0x20u,0xAC87u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC85u,2u,0x20u,0xAC87u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC85u,2u,0x20u,0xAC87u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC87u:
    if(m==0u&&x==0u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC87u,3u,0x00u,0xAC8Au);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC87u,3u,0x00u,0xAC8Au);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC8Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC8Au,3u,0xB2u,0xAC8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC8Cu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC8Au,3u,0xB2u,0xAC8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC8Cu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC8Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC8Du,2u,0x20u,0xAC8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC8Du,2u,0x20u,0xAC8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC8Du,2u,0x20u,0xAC8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC8Du,2u,0x20u,0xAC8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC8Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC8Fu,3u,0x00u,0xAC92u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC8Fu,3u,0x00u,0xAC92u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC92u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC92u,2u,0x00u,0xAC94u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC94u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC92u,2u,0x00u,0xAC94u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAC94u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC94u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC94u,2u,0x30u,0xAC96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC94u,2u,0x30u,0xAC96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC96u:
    if(m==0u&&x==0u&&e==0u){ /* AD E1 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC96u,3u,0x0Du,0xAC99u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DE1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC99u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC99u,2u,0x79u,0xAC9Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC9Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC9Bu,2u,0x7Cu,0xAC9Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AC9Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AC9Du,3u,0xB3u,0xACA0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC9Fu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACA0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA0u,2u,0x20u,0xACA2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA0u,2u,0x20u,0xACA2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA0u,2u,0x20u,0xACA2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA0u,2u,0x20u,0xACA2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACA2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 13 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA2u,3u,0x00u,0xACA5u);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 13 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA2u,3u,0x00u,0xACA5u);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACA5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA5u,3u,0xB2u,0xACA8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA7u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA5u,3u,0xB2u,0xACA8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACA7u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACA8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA8u,2u,0x20u,0xACAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA8u,2u,0x20u,0xACAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA8u,2u,0x20u,0xACAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACA8u,2u,0x20u,0xACAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACAAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACAAu,3u,0x00u,0xACADu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACAAu,3u,0x00u,0xACADu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACADu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACADu,2u,0x00u,0xACAFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACAFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACADu,2u,0x00u,0xACAFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACAFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACAFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACAFu,2u,0x20u,0xACB1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACAFu,2u,0x20u,0xACB1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACB1u:
    if(m==0u&&x==0u&&e==0u){ /* AD A1 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACB1u,3u,0x0Du,0xACB4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD A1 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACB1u,3u,0x0Du,0xACB4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACB4u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACB4u,3u,0x00u,0xACB7u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACB4u,3u,0x00u,0xACB7u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACB7u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACB7u,2u,0x03u,0xACB9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xACBCu;}
      if(c->pc!=0xACB9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACB9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACB7u,2u,0x03u,0xACB9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xACBCu;}
      if(c->pc!=0xACB9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACB9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACB9u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 4F AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACB9u,3u,0xADu,0xACBCu);
      c->pc=0xAD4Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 4F AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACB9u,3u,0xADu,0xACBCu);
      c->pc=0xAD4Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACBCu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACBCu,2u,0x79u,0xACBEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACBCu,2u,0x79u,0xACBEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACBEu:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACBEu,2u,0x7Cu,0xACC0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACBEu,2u,0x7Cu,0xACC0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACC0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC0u,3u,0xB3u,0xACC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACC2u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC0u,3u,0xB3u,0xACC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACC2u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACC3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC3u,2u,0x20u,0xACC5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC3u,2u,0x20u,0xACC5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC3u,2u,0x20u,0xACC5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC3u,2u,0x20u,0xACC5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACC5u:
    if(m==1u&&x==0u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC5u,2u,0x14u,0xACC7u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC5u,2u,0x14u,0xACC7u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACC7u:
    if(m==1u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC7u,3u,0xB2u,0xACCAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACC9u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACC7u,3u,0xB2u,0xACCAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACC9u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACCAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACCAu,2u,0x30u,0xACCCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACCAu,2u,0x30u,0xACCCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACCAu,2u,0x30u,0xACCCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACCAu,2u,0x30u,0xACCCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACCCu:
    if(m==1u&&x==1u&&e==0u){ /* AC A2 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACCCu,3u,0x0Du,0xACCFu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DA2u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACCFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACCFu,2u,0x00u,0xACD1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACD1u:
    if(m==1u&&x==1u&&e==0u){ /* 20 EC B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD1u,3u,0xB2u,0xACD4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACD3u))return 0;c->pc=0xB2ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACD4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD4u,2u,0x20u,0xACD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD4u,2u,0x20u,0xACD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD4u,2u,0x20u,0xACD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD4u,2u,0x20u,0xACD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACD6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD6u,3u,0x00u,0xACD9u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD6u,3u,0x00u,0xACD9u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACD9u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD9u,2u,0x00u,0xACDBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACDBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACD9u,2u,0x00u,0xACDBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xACDBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACDBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACDBu,2u,0x20u,0xACDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACDBu,2u,0x20u,0xACDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACDDu:
    if(m==0u&&x==0u&&e==0u){ /* AD A3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACDDu,3u,0x0Du,0xACE0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD A3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACDDu,3u,0x0Du,0xACE0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACE0u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE0u,3u,0x00u,0xACE3u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE0u,3u,0x00u,0xACE3u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACE3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE3u,2u,0x6Au,0xACE5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAD4Fu;}
      if(c->pc!=0xACE5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACE5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE3u,2u,0x6Au,0xACE5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAD4Fu;}
      if(c->pc!=0xACE5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACE5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACE5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE5u,2u,0x79u,0xACE7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE5u,2u,0x79u,0xACE7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACE7u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE7u,2u,0x7Cu,0xACE9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE7u,2u,0x7Cu,0xACE9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACE9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE9u,3u,0xB3u,0xACECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACEBu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACE9u,3u,0xB3u,0xACECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACEBu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACECu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACECu,2u,0x20u,0xACEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACECu,2u,0x20u,0xACEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACECu,2u,0x20u,0xACEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACECu,2u,0x20u,0xACEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACEEu:
    if(m==1u&&x==0u&&e==0u){ /* A9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACEEu,2u,0x15u,0xACF0u);
      sc_v11_op_lda(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACEEu,2u,0x15u,0xACF0u);
      sc_v11_op_lda(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACF0u:
    if(m==1u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACF0u,3u,0xB2u,0xACF3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACF2u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACF0u,3u,0xB2u,0xACF3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACF2u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACF3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACF3u,2u,0x30u,0xACF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACF3u,2u,0x30u,0xACF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACF3u,2u,0x30u,0xACF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACF3u,2u,0x30u,0xACF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACF5u:
    if(m==1u&&x==1u&&e==0u){ /* AC A4 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACF5u,3u,0x0Du,0xACF8u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DA4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACF8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACF8u,2u,0x01u,0xACFAu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACFAu:
    if(m==1u&&x==1u&&e==0u){ /* 20 EC B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACFAu,3u,0xB2u,0xACFDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xACFCu))return 0;c->pc=0xB2ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACFDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACFDu,2u,0x20u,0xACFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACFDu,2u,0x20u,0xACFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACFDu,2u,0x20u,0xACFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACFDu,2u,0x20u,0xACFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ACFFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACFFu,3u,0x00u,0xAD02u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ACFFu,3u,0x00u,0xAD02u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD02u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD02u,2u,0x00u,0xAD04u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAD04u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD02u,2u,0x00u,0xAD04u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAD04u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD04u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD04u,2u,0x20u,0xAD06u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD04u,2u,0x20u,0xAD06u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD06u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD06u,3u,0x0Du,0xAD09u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD A5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD06u,3u,0x0Du,0xAD09u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD09u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD09u,3u,0x00u,0xAD0Cu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD09u,3u,0x00u,0xAD0Cu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD0Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 41 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD0Cu,2u,0x41u,0xAD0Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAD4Fu;}
      if(c->pc!=0xAD0Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD0Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 41 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD0Cu,2u,0x41u,0xAD0Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAD4Fu;}
      if(c->pc!=0xAD0Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD0Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD0Eu,2u,0x79u,0xAD10u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD0Eu,2u,0x79u,0xAD10u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD10u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD10u,2u,0x7Cu,0xAD12u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD10u,2u,0x7Cu,0xAD12u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD12u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD12u,3u,0xB3u,0xAD15u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD14u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD12u,3u,0xB3u,0xAD15u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD14u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD15u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD15u,2u,0x20u,0xAD17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD15u,2u,0x20u,0xAD17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD15u,2u,0x20u,0xAD17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD15u,2u,0x20u,0xAD17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD17u:
    if(m==1u&&x==0u&&e==0u){ /* A9 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD17u,2u,0x16u,0xAD19u);
      sc_v11_op_lda(r,0x0016u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD17u,2u,0x16u,0xAD19u);
      sc_v11_op_lda(r,0x0016u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD19u:
    if(m==1u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD19u,3u,0xB2u,0xAD1Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD1Bu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD19u,3u,0xB2u,0xAD1Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD1Bu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD1Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD1Cu,2u,0x30u,0xAD1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD1Cu,2u,0x30u,0xAD1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD1Cu,2u,0x30u,0xAD1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD1Cu,2u,0x30u,0xAD1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD1Eu:
    if(m==1u&&x==1u&&e==0u){ /* AC A6 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD1Eu,3u,0x0Du,0xAD21u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DA6u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD21u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD21u,2u,0x02u,0xAD23u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD23u:
    if(m==1u&&x==1u&&e==0u){ /* 20 EC B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD23u,3u,0xB2u,0xAD26u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD25u))return 0;c->pc=0xB2ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD26u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD26u,2u,0x20u,0xAD28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD26u,2u,0x20u,0xAD28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD26u,2u,0x20u,0xAD28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD26u,2u,0x20u,0xAD28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD28u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD28u,3u,0x00u,0xAD2Bu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD28u,3u,0x00u,0xAD2Bu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD2Bu,2u,0x00u,0xAD2Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAD2Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD2Bu,2u,0x00u,0xAD2Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAD2Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD2Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD2Du,2u,0x20u,0xAD2Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD2Du,2u,0x20u,0xAD2Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD2Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD2Fu,3u,0x0Du,0xAD32u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD A7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD2Fu,3u,0x0Du,0xAD32u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD32u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD32u,3u,0x00u,0xAD35u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD32u,3u,0x00u,0xAD35u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD35u:
    if(m==0u&&x==0u&&e==0u){ /* F0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD35u,2u,0x18u,0xAD37u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAD4Fu;}
      if(c->pc!=0xAD37u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD37u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD35u,2u,0x18u,0xAD37u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAD4Fu;}
      if(c->pc!=0xAD37u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD37u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD37u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD37u,2u,0x79u,0xAD39u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD37u,2u,0x79u,0xAD39u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD39u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD39u,2u,0x7Cu,0xAD3Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD39u,2u,0x7Cu,0xAD3Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD3Bu,3u,0xB3u,0xAD3Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD3Du))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD3Bu,3u,0xB3u,0xAD3Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD3Du))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD3Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD3Eu,2u,0x20u,0xAD40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD3Eu,2u,0x20u,0xAD40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD3Eu,2u,0x20u,0xAD40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD3Eu,2u,0x20u,0xAD40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD40u:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD40u,2u,0x17u,0xAD42u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD40u,2u,0x17u,0xAD42u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD42u:
    if(m==1u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD42u,3u,0xB2u,0xAD45u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD44u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD42u,3u,0xB2u,0xAD45u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD44u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD45u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD45u,2u,0x30u,0xAD47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD45u,2u,0x30u,0xAD47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD45u,2u,0x30u,0xAD47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD45u,2u,0x30u,0xAD47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD47u:
    if(m==1u&&x==1u&&e==0u){ /* AC A8 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD47u,3u,0x0Du,0xAD4Au);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DA8u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD4Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD4Au,2u,0x03u,0xAD4Cu);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD4Cu:
    if(m==1u&&x==1u&&e==0u){ /* 20 EC B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD4Cu,3u,0xB2u,0xAD4Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD4Eu))return 0;c->pc=0xB2ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD4Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD4Fu,2u,0x30u,0xAD51u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD4Fu,2u,0x30u,0xAD51u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD4Fu,2u,0x30u,0xAD51u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD4Fu,2u,0x30u,0xAD51u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD51u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD51u,3u,0x0Bu,0xAD54u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD54u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD54u,2u,0x79u,0xAD56u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD56u:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD56u,3u,0x0Bu,0xAD59u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD59u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD59u,3u,0x00u,0xAD5Cu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD5Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD5Cu,2u,0x7Cu,0xAD5Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD5Eu,3u,0xB3u,0xAD61u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD60u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD61u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD61u,2u,0x20u,0xAD63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD61u,2u,0x20u,0xAD63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD61u,2u,0x20u,0xAD63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD61u,2u,0x20u,0xAD63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD63u:
    if(m==0u&&x==0u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD63u,3u,0x00u,0xAD66u);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD63u,3u,0x00u,0xAD66u);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD66u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD66u,3u,0xB2u,0xAD69u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD68u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD66u,3u,0xB2u,0xAD69u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD68u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD69u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD69u,2u,0x30u,0xAD6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD69u,2u,0x30u,0xAD6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD69u,2u,0x30u,0xAD6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD69u,2u,0x30u,0xAD6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD6Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD E5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD6Bu,3u,0x0Du,0xAD6Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DE5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD6Eu:
    if(m==0u&&x==0u&&e==0u){ /* 10 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD6Eu,2u,0x1Au,0xAD70u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xAD8Au;}
      if(c->pc!=0xAD70u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD70u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD70u:
    if(m==0u&&x==0u&&e==0u){ /* 49 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD70u,3u,0xFFu,0xAD73u);
      sc_v11_op_eor(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD73u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD73u,2u,0x7Cu,0xAD75u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD75u:
    if(m==0u&&x==0u&&e==0u){ /* AD E3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD75u,3u,0x0Du,0xAD78u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DE3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD78u:
    if(m==0u&&x==0u&&e==0u){ /* 49 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD78u,3u,0xFFu,0xAD7Bu);
      sc_v11_op_eor(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD7Bu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD7Bu,1u,0x18u,0xAD7Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 69 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD7Cu,3u,0x00u,0xAD7Fu);
      sc_v11_op_adc(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD7Fu,2u,0x79u,0xAD81u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD81u:
    if(m==0u&&x==0u&&e==0u){ /* A5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD81u,2u,0x7Cu,0xAD83u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD83u:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD83u,3u,0x00u,0xAD86u);
      sc_v11_op_adc(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD86u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD86u,2u,0x7Cu,0xAD88u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD88u:
    if(m==0u&&x==0u&&e==0u){ /* 80 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD88u,2u,0x07u,0xAD8Au);
      if(1){c->pc=0xAD91u;}
      if(c->pc!=0xAD8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD8Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD8Au,2u,0x7Cu,0xAD8Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD8Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD E3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD8Cu,3u,0x0Du,0xAD8Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DE3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD8Fu,2u,0x79u,0xAD91u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD91u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD91u,3u,0xB3u,0xAD94u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAD93u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD94u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD94u,2u,0x30u,0xAD96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD94u,2u,0x30u,0xAD96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD94u,2u,0x30u,0xAD96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD94u,2u,0x30u,0xAD96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD96u:
    if(m==0u&&x==0u&&e==0u){ /* AD E5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD96u,3u,0x0Du,0xAD99u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DE5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD99u:
    if(m==0u&&x==0u&&e==0u){ /* 10 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD99u,2u,0x06u,0xAD9Bu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xADA1u;}
      if(c->pc!=0xAD9Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD9Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD9Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD9Bu,3u,0x00u,0xAD9Eu);
      sc_v11_op_ldx(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AD9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 4A AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AD9Eu,3u,0xAEu,0xADA1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADA0u))return 0;c->pc=0xAE4Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADA1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA1u,2u,0x20u,0xADA3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA1u,2u,0x20u,0xADA3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA1u,2u,0x20u,0xADA3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA1u,2u,0x20u,0xADA3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADA3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 19 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA3u,3u,0x00u,0xADA6u);
      sc_v11_op_lda(r,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 19 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA3u,3u,0x00u,0xADA6u);
      sc_v11_op_lda(r,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADA6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA6u,3u,0xB2u,0xADA9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADA8u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA6u,3u,0xB2u,0xADA9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADA8u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADA9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA9u,2u,0x30u,0xADABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA9u,2u,0x30u,0xADABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA9u,2u,0x30u,0xADABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADA9u,2u,0x30u,0xADABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADABu:
    if(m==0u&&x==0u&&e==0u){ /* AD E7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADABu,3u,0x0Du,0xADAEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DE7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADAEu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADAEu,2u,0x79u,0xADB0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADAEu,2u,0x79u,0xADB0u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADB0u:
    if(m==0u&&x==0u&&e==0u){ /* AD E9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB0u,3u,0x0Du,0xADB3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DE9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD E9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB0u,3u,0x0Du,0xADB3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DE9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADB3u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB3u,2u,0x7Cu,0xADB5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB3u,2u,0x7Cu,0xADB5u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADB5u:
    if(m==0u&&x==0u&&e==0u){ /* 05 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB5u,2u,0x79u,0xADB7u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 05 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB5u,2u,0x79u,0xADB7u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADB7u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB7u,3u,0x0Fu,0xADBAu);
      sc_v11_op_and(r,0x0FFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB7u,2u,0xFFu,0xADB9u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADB9u:
    if(m==1u&&x==0u&&e==0u){ /* 0F F0 1E 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADB9u,4u,0x20u,0xADBDu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x201EF0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADBAu:
    if(m==0u&&x==0u&&e==0u){ /* F0 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADBAu,2u,0x1Eu,0xADBCu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xADDAu;}
      if(c->pc!=0xADBCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADBCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADBCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADBCu,3u,0xB3u,0xADBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADBEu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADBFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADBFu,2u,0x10u,0xADC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADBFu,2u,0x10u,0xADC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADBFu,2u,0x10u,0xADC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADBFu,2u,0x10u,0xADC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADC1u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADC1u,2u,0x20u,0xADC3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADC1u,2u,0x20u,0xADC3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADC3u:
    if(m==0u&&x==1u&&e==0u){ /* A2 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADC3u,2u,0x06u,0xADC5u);
      sc_v11_op_ldx(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADC5u:
    if(m==0u&&x==1u&&e==0u){ /* BD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADC5u,3u,0x0Du,0xADC8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0D95u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADC8u:
    if(m==0u&&x==1u&&e==0u){ /* 9D 97 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADC8u,3u,0x0Du,0xADCBu);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0D97u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADCBu:
    if(m==0u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADCBu,1u,0xCAu,0xADCCu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADCCu:
    if(m==0u&&x==1u&&e==0u){ /* 10 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADCCu,2u,0xF7u,0xADCEu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xADC5u;}
      if(c->pc!=0xADCEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADCEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADCEu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 96 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADCEu,3u,0x0Du,0xADD1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D96u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADD1u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADD1u,3u,0x0Du,0xADD4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D95u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADD4u:
    if(m==0u&&x==1u&&e==0u){ /* A9 1A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADD4u,3u,0x00u,0xADD7u);
      sc_v11_op_lda(r,0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADD7u:
    if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADD7u,3u,0xB2u,0xADDAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADD9u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADDAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADDAu,2u,0x30u,0xADDCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADDAu,2u,0x30u,0xADDCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADDAu,2u,0x30u,0xADDCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADDAu,2u,0x30u,0xADDCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADDCu:
    if(m==1u&&x==1u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADDCu,3u,0x0Du,0xADDFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADDFu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADDFu,1u,0x18u,0xADE0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADE0u:
    if(m==1u&&x==1u&&e==0u){ /* 69 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADE0u,2u,0x07u,0xADE2u);
      sc_v11_op_adc(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADE2u:
    if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADE2u,1u,0xA8u,0xADE3u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADE3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADE3u,2u,0x04u,0xADE5u);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADE5u:
    if(m==1u&&x==1u&&e==0u){ /* 20 EC B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADE5u,3u,0xB2u,0xADE8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADE7u))return 0;c->pc=0xB2ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADE8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADE8u,2u,0x30u,0xADEAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADE8u,2u,0x30u,0xADEAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADE8u,2u,0x30u,0xADEAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADE8u,2u,0x30u,0xADEAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADEAu:
    if(m==1u&&x==1u&&e==0u){ /* AD 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADEAu,3u,0x0Bu,0xADEDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B57u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADEDu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADEDu,1u,0x18u,0xADEEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADEEu:
    if(m==1u&&x==1u&&e==0u){ /* 69 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADEEu,2u,0x0Du,0xADF0u);
      sc_v11_op_adc(r,0x000Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADF0u:
    if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADF0u,1u,0xA8u,0xADF1u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADF1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADF1u,2u,0x05u,0xADF3u);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADF3u:
    if(m==1u&&x==1u&&e==0u){ /* 20 EC B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADF3u,3u,0xB2u,0xADF6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xADF5u))return 0;c->pc=0xB2ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADF6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADF6u,2u,0x30u,0xADF8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADF6u,2u,0x30u,0xADF8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADF6u,2u,0x30u,0xADF8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADF6u,2u,0x30u,0xADF8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADF8u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADF8u,3u,0x0Du,0xADFBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADFBu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADFBu,2u,0x79u,0xADFDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADFDu:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADFDu,2u,0x7Cu,0xADFFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02ADFFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02ADFFu,3u,0xB3u,0xAE02u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE01u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE02u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE02u,2u,0x20u,0xAE04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE02u,2u,0x20u,0xAE04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE02u,2u,0x20u,0xAE04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE02u,2u,0x20u,0xAE04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE04u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE04u,3u,0x00u,0xAE07u);
      sc_v11_op_lda(r,0x001Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE04u,3u,0x00u,0xAE07u);
      sc_v11_op_lda(r,0x001Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE07u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE07u,3u,0xB2u,0xAE0Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE09u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE07u,3u,0xB2u,0xAE0Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE09u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE0Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE0Au,2u,0x30u,0xAE0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE0Au,2u,0x30u,0xAE0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE0Au,2u,0x30u,0xAE0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE0Au,2u,0x30u,0xAE0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE0Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE0Cu,3u,0x0Du,0xAE0Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 10 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE0Fu,2u,0x07u,0xAE11u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xAE18u;}
      if(c->pc!=0xAE11u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE11u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE11u:
    if(m==0u&&x==0u&&e==0u){ /* 49 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE11u,3u,0xFFu,0xAE14u);
      sc_v11_op_eor(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE14u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE14u,1u,0x18u,0xAE15u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE15u:
    if(m==0u&&x==0u&&e==0u){ /* 69 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE15u,3u,0x00u,0xAE18u);
      sc_v11_op_adc(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE18u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE18u,2u,0x79u,0xAE1Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE1Au:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE1Au,2u,0x7Cu,0xAE1Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE1Cu,3u,0xB3u,0xAE1Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE1Eu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE1Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE1Fu,2u,0x20u,0xAE21u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE1Fu,2u,0x20u,0xAE21u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE1Fu,2u,0x20u,0xAE21u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE1Fu,2u,0x20u,0xAE21u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE21u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE21u,3u,0x0Du,0xAE24u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE21u,3u,0x0Du,0xAE24u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE24u:
    if(m==0u&&x==0u&&e==0u){ /* 10 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE24u,2u,0x06u,0xAE26u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xAE2Cu;}
      if(c->pc!=0xAE26u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE26u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE24u,2u,0x06u,0xAE26u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xAE2Cu;}
      if(c->pc!=0xAE26u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE26u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE26u:
    if(m==0u&&x==0u&&e==0u){ /* A2 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE26u,3u,0x00u,0xAE29u);
      sc_v11_op_ldx(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE26u,2u,0x03u,0xAE28u);
      sc_v11_op_ldx(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE29u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4A AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE29u,3u,0xAEu,0xAE2Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE2Bu))return 0;c->pc=0xAE4Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE2Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE2Cu,2u,0x20u,0xAE2Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE2Cu,2u,0x20u,0xAE2Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE2Cu,2u,0x20u,0xAE2Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE2Cu,2u,0x20u,0xAE2Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE2Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE2Eu,3u,0x00u,0xAE31u);
      sc_v11_op_lda(r,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE2Eu,3u,0x00u,0xAE31u);
      sc_v11_op_lda(r,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE31u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE31u,3u,0xB2u,0xAE34u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE33u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE31u,3u,0xB2u,0xAE34u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE33u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE34u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1F B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE34u,3u,0xB5u,0xAE37u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE36u))return 0;c->pc=0xB51Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1F B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE34u,3u,0xB5u,0xAE37u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE36u))return 0;c->pc=0xB51Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1F B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE34u,3u,0xB5u,0xAE37u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE36u))return 0;c->pc=0xB51Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1F B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE34u,3u,0xB5u,0xAE37u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE36u))return 0;c->pc=0xB51Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE37u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE37u,2u,0x20u,0xAE39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE37u,2u,0x20u,0xAE39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE37u,2u,0x20u,0xAE39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE37u,2u,0x20u,0xAE39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE39u:
    if(m==1u&&x==0u&&e==0u){ /* AD DF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE39u,3u,0x0Du,0xAE3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DDFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD DF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE39u,3u,0x0Du,0xAE3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DDFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE3Cu:
    if(m==1u&&x==0u&&e==0u){ /* C9 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE3Cu,2u,0x32u,0xAE3Eu);
      sc_v11_op_compare(r,c->a,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE3Cu,2u,0x32u,0xAE3Eu);
      sc_v11_op_compare(r,c->a,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE3Eu:
    if(m==1u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE3Eu,2u,0x05u,0xAE40u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAE45u;}
      if(c->pc!=0xAE40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE3Eu,2u,0x05u,0xAE40u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAE45u;}
      if(c->pc!=0xAE40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE40u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE40u,2u,0x0Eu,0xAE42u);
      sc_v11_op_lda(r,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE40u,2u,0x0Eu,0xAE42u);
      sc_v11_op_lda(r,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE42u:
    if(m==1u&&x==0u&&e==0u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE42u,2u,0x03u,0xAE44u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE42u,2u,0x03u,0xAE44u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE44u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE44u,1u,0x60u,0xAE45u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE44u,1u,0x60u,0xAE45u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE45u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE45u,2u,0x0Du,0xAE47u);
      sc_v11_op_lda(r,0x000Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE45u,2u,0x0Du,0xAE47u);
      sc_v11_op_lda(r,0x000Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE47u:
    if(m==1u&&x==0u&&e==0u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE47u,2u,0x03u,0xAE49u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE47u,2u,0x03u,0xAE49u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE49u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE49u,1u,0x60u,0xAE4Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE49u,1u,0x60u,0xAE4Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE4Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE4Au,2u,0x20u,0xAE4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE4Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE4Cu,2u,0x10u,0xAE4Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE4Eu:
    if(m==1u&&x==0u&&e==0u){ /* BD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE4Eu,3u,0x0Du,0xAE51u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0D95u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE51u:
    if(m==1u&&x==0u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE51u,2u,0x04u,0xAE53u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAE57u;}
      if(c->pc!=0xAE53u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE53u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE53u:
    if(m==1u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE53u,1u,0xCAu,0xAE54u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE54u:
    if(m==1u&&x==0u&&e==0u){ /* 10 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE54u,2u,0xF8u,0xAE56u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xAE4Eu;}
      if(c->pc!=0xAE56u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE56u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE56u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE56u,1u,0x60u,0xAE57u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE57u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE57u,2u,0x0Fu,0xAE59u);
      sc_v11_op_lda(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE59u:
    if(m==1u&&x==0u&&e==0u){ /* 9D 96 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE59u,3u,0x0Du,0xAE5Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0D96u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE5Cu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE5Cu,1u,0x60u,0xAE5Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE5Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE5Du,2u,0x20u,0xAE5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE5Du,2u,0x20u,0xAE5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE5Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE5Fu,3u,0x00u,0xAE62u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE62u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE62u,2u,0x00u,0xAE64u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAE64u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE64u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE64u,2u,0x30u,0xAE66u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE66u:
    if(m==0u&&x==0u&&e==0u){ /* AD 73 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE66u,3u,0x0Cu,0xAE69u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C73u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE69u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE69u,2u,0x79u,0xAE6Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE6Bu,2u,0x7Cu,0xAE6Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE6Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE6Du,3u,0xB3u,0xAE70u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE6Fu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE70u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE70u,2u,0x20u,0xAE72u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE70u,2u,0x20u,0xAE72u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE70u,2u,0x20u,0xAE72u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE70u,2u,0x20u,0xAE72u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE72u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE72u,3u,0x00u,0xAE75u);
      sc_v11_op_lda(r,0x001Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE72u,3u,0x00u,0xAE75u);
      sc_v11_op_lda(r,0x001Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE75u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE75u,3u,0xB2u,0xAE78u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE77u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE75u,3u,0xB2u,0xAE78u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE77u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE78u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE78u,2u,0x20u,0xAE7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE78u,2u,0x20u,0xAE7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE78u,2u,0x20u,0xAE7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE78u,2u,0x20u,0xAE7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE7Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 73 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE7Au,3u,0x0Cu,0xAE7Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C73u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 73 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE7Au,3u,0x0Cu,0xAE7Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C73u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE7Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE7Du,2u,0x11u,0xAE7Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAE90u;}
      if(c->pc!=0xAE7Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE7Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE7Du,2u,0x11u,0xAE7Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAE90u;}
      if(c->pc!=0xAE7Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE7Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE7Fu,2u,0x7Fu,0xAE81u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE7Fu,2u,0x7Fu,0xAE81u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE81u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B4 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE81u,3u,0xB4u,0xAE84u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE83u))return 0;c->pc=0xB4B4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B4 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE81u,3u,0xB4u,0xAE84u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE83u))return 0;c->pc=0xB4B4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE84u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE84u,2u,0x20u,0xAE86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE84u,2u,0x20u,0xAE86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE84u,2u,0x20u,0xAE86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE84u,2u,0x20u,0xAE86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE86u:
    if(m==0u&&x==0u&&e==0u){ /* AD 21 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE86u,3u,0x0Eu,0xAE89u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E21u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 21 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE86u,3u,0x0Eu,0xAE89u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E21u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE89u:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE89u,2u,0x82u,0xAE8Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE89u,2u,0x82u,0xAE8Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE8Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7F B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE8Bu,3u,0xB4u,0xAE8Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE8Du))return 0;c->pc=0xB47Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7F B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE8Bu,3u,0xB4u,0xAE8Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE8Du))return 0;c->pc=0xB47Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE8Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE8Eu,2u,0x30u,0xAE90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE8Eu,2u,0x30u,0xAE90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE8Eu,2u,0x30u,0xAE90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE8Eu,2u,0x30u,0xAE90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE90u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE90u,2u,0x79u,0xAE92u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE90u,2u,0x79u,0xAE92u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE92u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE92u,2u,0x7Cu,0xAE94u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE92u,2u,0x7Cu,0xAE94u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE94u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE94u,3u,0xB3u,0xAE97u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE96u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE94u,3u,0xB3u,0xAE97u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE96u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE97u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE97u,2u,0x20u,0xAE99u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE97u,2u,0x20u,0xAE99u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE97u,2u,0x20u,0xAE99u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE97u,2u,0x20u,0xAE99u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE99u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE99u,3u,0x00u,0xAE9Cu);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE99u,3u,0x00u,0xAE9Cu);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE9Cu,3u,0xB2u,0xAE9Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE9Eu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE9Cu,3u,0xB2u,0xAE9Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE9Eu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AE9Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE9Fu,2u,0x20u,0xAEA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE9Fu,2u,0x20u,0xAEA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE9Fu,2u,0x20u,0xAEA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AE9Fu,2u,0x20u,0xAEA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEA1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEA1u,3u,0x00u,0xAEA4u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEA1u,3u,0x00u,0xAEA4u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEA4u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEA4u,2u,0x00u,0xAEA6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAEA6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEA4u,2u,0x00u,0xAEA6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAEA6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEA6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEA6u,2u,0x30u,0xAEA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEA6u,2u,0x30u,0xAEA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEA8u:
    if(m==0u&&x==0u&&e==0u){ /* AD 75 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEA8u,3u,0x0Cu,0xAEABu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C75u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEABu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEABu,2u,0x79u,0xAEADu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEADu:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEADu,2u,0x7Cu,0xAEAFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEAFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEAFu,3u,0xB3u,0xAEB2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEB1u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEB2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEB2u,2u,0x20u,0xAEB4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEB2u,2u,0x20u,0xAEB4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEB2u,2u,0x20u,0xAEB4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEB2u,2u,0x20u,0xAEB4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEB4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEB4u,3u,0x00u,0xAEB7u);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEB4u,3u,0x00u,0xAEB7u);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEB7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEB7u,3u,0xB2u,0xAEBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEB9u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEB7u,3u,0xB2u,0xAEBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEB9u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEBAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEBAu,2u,0x20u,0xAEBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEBAu,2u,0x20u,0xAEBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEBAu,2u,0x20u,0xAEBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEBAu,2u,0x20u,0xAEBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEBCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 75 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEBCu,3u,0x0Cu,0xAEBFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C75u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 75 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEBCu,3u,0x0Cu,0xAEBFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C75u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEBFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEBFu,2u,0x11u,0xAEC1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAED2u;}
      if(c->pc!=0xAEC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEBFu,2u,0x11u,0xAEC1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAED2u;}
      if(c->pc!=0xAEC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEC1u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC1u,2u,0x7Fu,0xAEC3u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC1u,2u,0x7Fu,0xAEC3u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEC3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B4 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC3u,3u,0xB4u,0xAEC6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEC5u))return 0;c->pc=0xB4B4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B4 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC3u,3u,0xB4u,0xAEC6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEC5u))return 0;c->pc=0xB4B4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEC6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC6u,2u,0x20u,0xAEC8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC6u,2u,0x20u,0xAEC8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC6u,2u,0x20u,0xAEC8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC6u,2u,0x20u,0xAEC8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEC8u:
    if(m==0u&&x==0u&&e==0u){ /* AD 21 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC8u,3u,0x0Eu,0xAECBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E21u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 21 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEC8u,3u,0x0Eu,0xAECBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E21u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AECBu:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AECBu,2u,0x82u,0xAECDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AECBu,2u,0x82u,0xAECDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AECDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7F B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AECDu,3u,0xB4u,0xAED0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAECFu))return 0;c->pc=0xB47Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7F B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AECDu,3u,0xB4u,0xAED0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAECFu))return 0;c->pc=0xB47Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AED0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED0u,2u,0x30u,0xAED2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED0u,2u,0x30u,0xAED2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED0u,2u,0x30u,0xAED2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED0u,2u,0x30u,0xAED2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AED2u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED2u,2u,0x79u,0xAED4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED2u,2u,0x79u,0xAED4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AED4u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED4u,2u,0x7Cu,0xAED6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED4u,2u,0x7Cu,0xAED6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AED6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED6u,3u,0xB3u,0xAED9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAED8u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED6u,3u,0xB3u,0xAED9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAED8u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AED9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED9u,2u,0x20u,0xAEDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED9u,2u,0x20u,0xAEDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED9u,2u,0x20u,0xAEDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AED9u,2u,0x20u,0xAEDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEDBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEDBu,3u,0x00u,0xAEDEu);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEDBu,3u,0x00u,0xAEDEu);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEDEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEDEu,3u,0xB2u,0xAEE1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEE0u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEDEu,3u,0xB2u,0xAEE1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEE0u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEE1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE1u,2u,0x20u,0xAEE3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE1u,2u,0x20u,0xAEE3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE1u,2u,0x20u,0xAEE3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE1u,2u,0x20u,0xAEE3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEE3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE3u,3u,0x00u,0xAEE6u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE3u,3u,0x00u,0xAEE6u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEE6u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE6u,2u,0x00u,0xAEE8u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAEE8u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE6u,2u,0x00u,0xAEE8u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAEE8u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEE8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE8u,2u,0x30u,0xAEEAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEE8u,2u,0x30u,0xAEEAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEEAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 77 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEEAu,3u,0x0Cu,0xAEEDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C77u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEEDu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEEDu,2u,0x79u,0xAEEFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEEFu:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEEFu,2u,0x7Cu,0xAEF1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEF1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF1u,3u,0xB3u,0xAEF4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEF3u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEF4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF4u,2u,0x20u,0xAEF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF4u,2u,0x20u,0xAEF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF4u,2u,0x20u,0xAEF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF4u,2u,0x20u,0xAEF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEF6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF6u,3u,0x00u,0xAEF9u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF6u,3u,0x00u,0xAEF9u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEF9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF9u,3u,0xB2u,0xAEFCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEFBu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEF9u,3u,0xB2u,0xAEFCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEFBu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEFCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEFCu,2u,0x20u,0xAEFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEFCu,2u,0x20u,0xAEFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEFCu,2u,0x20u,0xAEFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEFCu,2u,0x20u,0xAEFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AEFEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 77 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEFEu,3u,0x0Cu,0xAF01u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C77u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 77 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AEFEu,3u,0x0Cu,0xAF01u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C77u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF01u:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF01u,2u,0x11u,0xAF03u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAF14u;}
      if(c->pc!=0xAF03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF01u,2u,0x11u,0xAF03u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAF14u;}
      if(c->pc!=0xAF03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF03u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF03u,2u,0x7Fu,0xAF05u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF03u,2u,0x7Fu,0xAF05u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF05u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B4 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF05u,3u,0xB4u,0xAF08u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF07u))return 0;c->pc=0xB4B4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B4 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF05u,3u,0xB4u,0xAF08u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF07u))return 0;c->pc=0xB4B4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF08u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF08u,2u,0x20u,0xAF0Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF08u,2u,0x20u,0xAF0Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF08u,2u,0x20u,0xAF0Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF08u,2u,0x20u,0xAF0Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF0Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 21 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF0Au,3u,0x0Eu,0xAF0Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E21u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 21 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF0Au,3u,0x0Eu,0xAF0Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E21u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF0Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF0Du,2u,0x82u,0xAF0Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF0Du,2u,0x82u,0xAF0Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7F B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF0Fu,3u,0xB4u,0xAF12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF11u))return 0;c->pc=0xB47Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7F B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF0Fu,3u,0xB4u,0xAF12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF11u))return 0;c->pc=0xB47Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF12u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF12u,2u,0x30u,0xAF14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF12u,2u,0x30u,0xAF14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF12u,2u,0x30u,0xAF14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF12u,2u,0x30u,0xAF14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF14u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF14u,2u,0x79u,0xAF16u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF14u,2u,0x79u,0xAF16u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF16u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF16u,2u,0x7Cu,0xAF18u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF16u,2u,0x7Cu,0xAF18u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF18u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF18u,3u,0xB3u,0xAF1Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF1Au))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF18u,3u,0xB3u,0xAF1Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF1Au))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF1Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF1Bu,2u,0x20u,0xAF1Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF1Bu,2u,0x20u,0xAF1Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF1Bu,2u,0x20u,0xAF1Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF1Bu,2u,0x20u,0xAF1Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF1Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 22 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF1Du,3u,0x00u,0xAF20u);
      sc_v11_op_lda(r,0x0022u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 22 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF1Du,3u,0x00u,0xAF20u);
      sc_v11_op_lda(r,0x0022u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF20u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF20u,3u,0xB2u,0xAF23u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF22u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF20u,3u,0xB2u,0xAF23u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF22u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF23u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF23u,2u,0x20u,0xAF25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF23u,2u,0x20u,0xAF25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF23u,2u,0x20u,0xAF25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF23u,2u,0x20u,0xAF25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF25u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF25u,3u,0x00u,0xAF28u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF25u,3u,0x00u,0xAF28u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF28u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF28u,2u,0x00u,0xAF2Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF2Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF28u,2u,0x00u,0xAF2Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF2Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF2Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF2Au,2u,0x30u,0xAF2Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF2Au,2u,0x30u,0xAF2Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF2Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 7D 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF2Cu,3u,0x0Cu,0xAF2Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C7Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF2Fu,2u,0x79u,0xAF31u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF31u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF31u,2u,0x7Cu,0xAF33u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF33u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF33u,3u,0xB3u,0xAF36u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF35u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF36u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF36u,2u,0x20u,0xAF38u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF36u,2u,0x20u,0xAF38u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF36u,2u,0x20u,0xAF38u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF36u,2u,0x20u,0xAF38u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF38u:
    if(m==0u&&x==0u&&e==0u){ /* A9 25 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF38u,3u,0x00u,0xAF3Bu);
      sc_v11_op_lda(r,0x0025u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 25 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF38u,3u,0x00u,0xAF3Bu);
      sc_v11_op_lda(r,0x0025u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF3Bu,3u,0xB2u,0xAF3Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF3Du))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF3Bu,3u,0xB2u,0xAF3Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF3Du))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF3Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF3Eu,2u,0x20u,0xAF40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF3Eu,2u,0x20u,0xAF40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF3Eu,2u,0x20u,0xAF40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF3Eu,2u,0x20u,0xAF40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF40u:
    if(m==0u&&x==0u&&e==0u){ /* AD 7D 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF40u,3u,0x0Cu,0xAF43u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C7Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 7D 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF40u,3u,0x0Cu,0xAF43u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C7Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF43u:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF43u,2u,0x11u,0xAF45u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAF56u;}
      if(c->pc!=0xAF45u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF45u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF43u,2u,0x11u,0xAF45u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAF56u;}
      if(c->pc!=0xAF45u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF45u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF45u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF45u,2u,0x7Fu,0xAF47u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF45u,2u,0x7Fu,0xAF47u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF47u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B4 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF47u,3u,0xB4u,0xAF4Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF49u))return 0;c->pc=0xB4B4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B4 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF47u,3u,0xB4u,0xAF4Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF49u))return 0;c->pc=0xB4B4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF4Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF4Au,2u,0x20u,0xAF4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF4Au,2u,0x20u,0xAF4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF4Au,2u,0x20u,0xAF4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF4Au,2u,0x20u,0xAF4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF4Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 21 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF4Cu,3u,0x0Eu,0xAF4Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E21u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 21 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF4Cu,3u,0x0Eu,0xAF4Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E21u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF4Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF4Fu,2u,0x82u,0xAF51u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF4Fu,2u,0x82u,0xAF51u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF51u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7F B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF51u,3u,0xB4u,0xAF54u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF53u))return 0;c->pc=0xB47Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7F B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF51u,3u,0xB4u,0xAF54u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF53u))return 0;c->pc=0xB47Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF54u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF54u,2u,0x30u,0xAF56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF54u,2u,0x30u,0xAF56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF54u,2u,0x30u,0xAF56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF54u,2u,0x30u,0xAF56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF56u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF56u,2u,0x79u,0xAF58u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF56u,2u,0x79u,0xAF58u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF58u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF58u,2u,0x7Cu,0xAF5Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF58u,2u,0x7Cu,0xAF5Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF5Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF5Au,3u,0xB3u,0xAF5Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF5Cu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF5Au,3u,0xB3u,0xAF5Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF5Cu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF5Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF5Du,2u,0x20u,0xAF5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF5Du,2u,0x20u,0xAF5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF5Du,2u,0x20u,0xAF5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF5Du,2u,0x20u,0xAF5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF5Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 26 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF5Fu,3u,0x00u,0xAF62u);
      sc_v11_op_lda(r,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 26 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF5Fu,3u,0x00u,0xAF62u);
      sc_v11_op_lda(r,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF62u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF62u,3u,0xB2u,0xAF65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF64u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF62u,3u,0xB2u,0xAF65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF64u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF65u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF65u,2u,0x20u,0xAF67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF65u,2u,0x20u,0xAF67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF65u,2u,0x20u,0xAF67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF65u,2u,0x20u,0xAF67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF67u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF67u,3u,0x00u,0xAF6Au);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF67u,3u,0x00u,0xAF6Au);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF6Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF6Au,2u,0x00u,0xAF6Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF6Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF6Au,2u,0x00u,0xAF6Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF6Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF6Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF6Cu,2u,0x30u,0xAF6Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF6Cu,2u,0x30u,0xAF6Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF6Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 79 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF6Eu,3u,0x0Cu,0xAF71u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C79u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF71u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF71u,2u,0x79u,0xAF73u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF73u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF73u,2u,0x7Cu,0xAF75u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF75u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF75u,3u,0xB3u,0xAF78u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF77u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF78u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF78u,2u,0x20u,0xAF7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF78u,2u,0x20u,0xAF7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF78u,2u,0x20u,0xAF7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF78u,2u,0x20u,0xAF7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF7Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 23 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF7Au,3u,0x00u,0xAF7Du);
      sc_v11_op_lda(r,0x0023u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 23 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF7Au,3u,0x00u,0xAF7Du);
      sc_v11_op_lda(r,0x0023u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF7Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF7Du,3u,0xB2u,0xAF80u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF7Fu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF7Du,3u,0xB2u,0xAF80u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF7Fu))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF80u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF80u,2u,0x20u,0xAF82u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF80u,2u,0x20u,0xAF82u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF80u,2u,0x20u,0xAF82u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF80u,2u,0x20u,0xAF82u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF82u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF82u,3u,0x00u,0xAF85u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF82u,3u,0x00u,0xAF85u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF85u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF85u,2u,0x00u,0xAF87u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF87u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF85u,2u,0x00u,0xAF87u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAF87u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF87u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF87u,2u,0x30u,0xAF89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF87u,2u,0x30u,0xAF89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF89u:
    if(m==0u&&x==0u&&e==0u){ /* AD 7B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF89u,3u,0x0Cu,0xAF8Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C7Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF8Cu,2u,0x79u,0xAF8Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF8Eu,2u,0x7Cu,0xAF90u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF90u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF90u,3u,0xB3u,0xAF93u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF92u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF93u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF93u,2u,0x20u,0xAF95u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF93u,2u,0x20u,0xAF95u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF93u,2u,0x20u,0xAF95u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF93u,2u,0x20u,0xAF95u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF95u:
    if(m==0u&&x==0u&&e==0u){ /* A9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF95u,3u,0x00u,0xAF98u);
      sc_v11_op_lda(r,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF95u,3u,0x00u,0xAF98u);
      sc_v11_op_lda(r,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF98u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF98u,3u,0xB2u,0xAF9Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF9Au))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF98u,3u,0xB2u,0xAF9Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAF9Au))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF9Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF9Bu,2u,0x20u,0xAF9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF9Bu,2u,0x20u,0xAF9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF9Bu,2u,0x20u,0xAF9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF9Bu,2u,0x20u,0xAF9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AF9Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF9Du,3u,0x00u,0xAFA0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AF9Du,3u,0x00u,0xAFA0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFA0u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFA0u,2u,0x00u,0xAFA2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAFA2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFA0u,2u,0x00u,0xAFA2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAFA2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFA2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFA2u,2u,0x30u,0xAFA4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFA2u,2u,0x30u,0xAFA4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFA4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 7F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFA4u,3u,0x0Cu,0xAFA7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C7Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFA7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFA7u,2u,0x79u,0xAFA9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFA9u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFA9u,2u,0x7Cu,0xAFABu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFABu:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFABu,3u,0xB3u,0xAFAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFADu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFAEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFAEu,2u,0x20u,0xAFB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFAEu,2u,0x20u,0xAFB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFAEu,2u,0x20u,0xAFB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFAEu,2u,0x20u,0xAFB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFB0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFB0u,3u,0x0Du,0xAFB3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFB0u,3u,0x0Du,0xAFB3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFB3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFB3u,3u,0x00u,0xAFB6u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFB3u,3u,0x00u,0xAFB6u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFB6u:
    if(m==0u&&x==0u&&e==0u){ /* 09 20 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFB6u,3u,0x04u,0xAFB9u);
      sc_v11_op_ora(r,0x0420u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 09 20 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFB6u,3u,0x04u,0xAFB9u);
      sc_v11_op_ora(r,0x0420u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFB9u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 98 2D 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFB9u,4u,0x7Eu,0xAFBDu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2D98u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 98 2D 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFB9u,4u,0x7Eu,0xAFBDu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2D98u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFBDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFBDu,2u,0x30u,0xAFBFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFBDu,2u,0x30u,0xAFBFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFBFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFBFu,2u,0x00u,0xAFC1u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFC1u:
    if(m==1u&&x==1u&&e==0u){ /* BD 96 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFC1u,3u,0x0Du,0xAFC4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0D96u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFC4u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFC4u,3u,0x0Du,0xAFC7u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0D95u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFC7u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFC7u,1u,0xE8u,0xAFC8u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFC8u:
    if(m==1u&&x==1u&&e==0u){ /* E0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFC8u,2u,0x04u,0xAFCAu);
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFCAu:
    if(m==1u&&x==1u&&e==0u){ /* 90 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFCAu,2u,0xF5u,0xAFCCu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAFC1u;}
      if(c->pc!=0xAFCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFCCu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFCCu,2u,0x20u,0xAFCEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFCEu:
    if(m==0u&&x==1u&&e==0u){ /* A9 27 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFCEu,3u,0x00u,0xAFD1u);
      sc_v11_op_lda(r,0x0027u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFD1u:
    if(m==0u&&x==1u&&e==0u){ /* 20 66 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD1u,3u,0xB2u,0xAFD4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFD3u))return 0;c->pc=0xB266u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFD4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD4u,2u,0x20u,0xAFD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD4u,2u,0x20u,0xAFD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD4u,2u,0x20u,0xAFD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD4u,2u,0x20u,0xAFD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFD6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD6u,3u,0x00u,0xAFD9u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD6u,3u,0x00u,0xAFD9u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFD9u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD9u,2u,0x00u,0xAFDBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAFDBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFD9u,2u,0x00u,0xAFDBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xAFDBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFDBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFDBu,2u,0x30u,0xAFDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFDBu,2u,0x30u,0xAFDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFDDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 81 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFDDu,3u,0x0Cu,0xAFE0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C81u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFE0u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE0u,2u,0x79u,0xAFE2u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFE2u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE2u,2u,0x7Cu,0xAFE4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFE4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE4u,3u,0xB3u,0xAFE7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFE6u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFE7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE7u,2u,0x20u,0xAFE9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE7u,2u,0x20u,0xAFE9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE7u,2u,0x20u,0xAFE9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE7u,2u,0x20u,0xAFE9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFE9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE9u,3u,0x0Du,0xAFECu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFE9u,3u,0x0Du,0xAFECu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFECu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFECu,3u,0x00u,0xAFEFu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFECu,3u,0x00u,0xAFEFu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFEFu:
    if(m==0u&&x==0u&&e==0u){ /* 09 20 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFEFu,3u,0x04u,0xAFF2u);
      sc_v11_op_ora(r,0x0420u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 09 20 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFEFu,3u,0x04u,0xAFF2u);
      sc_v11_op_ora(r,0x0420u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFF2u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 18 2E 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFF2u,4u,0x7Eu,0xAFF6u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2E18u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 18 2E 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFF2u,4u,0x7Eu,0xAFF6u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2E18u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFF6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFF6u,2u,0x30u,0xAFF8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFF6u,2u,0x30u,0xAFF8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFF8u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFF8u,2u,0x00u,0xAFFAu);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFFAu:
    if(m==1u&&x==1u&&e==0u){ /* BD 96 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFFAu,3u,0x0Du,0xAFFDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0D96u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02AFFDu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02AFFDu,3u,0x0Du,0xB000u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0D95u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
