/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00073(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01CC00u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC00u,3u,0xA8u,0xCC03u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC02u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC03u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC03u,2u,0x20u,0xCC05u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC03u,2u,0x20u,0xCC05u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC03u,2u,0x20u,0xCC05u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC03u,2u,0x20u,0xCC05u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC05u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC05u,3u,0x00u,0xCC08u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC05u,3u,0x00u,0xCC08u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC08u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC08u,2u,0x00u,0xCC0Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC0Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC08u,2u,0x00u,0xCC0Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC0Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC0Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Au,1u,0x60u,0xCC0Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Au,1u,0x60u,0xCC0Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Bu,4u,0x00u,0xCC0Fu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC0Eu))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Bu,4u,0x00u,0xCC0Fu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC0Eu))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Bu,4u,0x00u,0xCC0Fu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC0Eu))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Bu,4u,0x00u,0xCC0Fu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC0Eu))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Fu,3u,0xA8u,0xCC12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC11u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Fu,3u,0xA8u,0xCC12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC11u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Fu,3u,0xA8u,0xCC12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC11u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC0Fu,3u,0xA8u,0xCC12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC11u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC12u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC12u,2u,0x20u,0xCC14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC12u,2u,0x20u,0xCC14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC12u,2u,0x20u,0xCC14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC12u,2u,0x20u,0xCC14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC14u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC14u,3u,0x00u,0xCC17u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC14u,3u,0x00u,0xCC17u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC17u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC17u,2u,0x00u,0xCC19u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC19u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC17u,2u,0x00u,0xCC19u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC19u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC19u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC19u,1u,0x60u,0xCC1Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC19u,1u,0x60u,0xCC1Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC1Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 A8 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Au,3u,0xCCu,0xCC1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC1Cu))return 0;c->pc=0xCCA8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A8 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Au,3u,0xCCu,0xCC1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC1Cu))return 0;c->pc=0xCCA8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A8 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Au,3u,0xCCu,0xCC1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC1Cu))return 0;c->pc=0xCCA8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A8 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Au,3u,0xCCu,0xCC1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC1Cu))return 0;c->pc=0xCCA8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC1Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Du,2u,0x20u,0xCC1Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Du,2u,0x20u,0xCC1Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Du,2u,0x20u,0xCC1Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Du,2u,0x20u,0xCC1Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC1Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Fu,3u,0x00u,0xCC22u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC1Fu,3u,0x00u,0xCC22u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC22u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC22u,2u,0x00u,0xCC24u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC24u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC22u,2u,0x00u,0xCC24u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC24u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC24u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC24u,2u,0xC9u,0xCC26u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC24u,2u,0xC9u,0xCC26u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC26u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC26u,3u,0x0Fu,0xCC29u);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC26u,3u,0x0Fu,0xCC29u);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC29u:
    if(m==0u&&x==0u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC29u,2u,0x10u,0xCC2Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCC3Bu;}
      if(c->pc!=0xCC2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC29u,2u,0x10u,0xCC2Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCC3Bu;}
      if(c->pc!=0xCC2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC2Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC2Bu,2u,0xC9u,0xCC2Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC2Bu,2u,0xC9u,0xCC2Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC2Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC2Du,3u,0x80u,0xCC30u);
      sc_v11_op_and(r,0x8040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 40 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC2Du,3u,0x80u,0xCC30u);
      sc_v11_op_and(r,0x8040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC30u:
    if(m==0u&&x==0u&&e==0u){ /* F0 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC30u,2u,0xE8u,0xCC32u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCC1Au;}
      if(c->pc!=0xCC32u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC32u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC30u,2u,0xE8u,0xCC32u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCC1Au;}
      if(c->pc!=0xCC32u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC32u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC32u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC32u,1u,0x08u,0xCC33u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC32u,1u,0x08u,0xCC33u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC33u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC33u,4u,0x00u,0xCC37u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC36u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC33u,4u,0x00u,0xCC37u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC36u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC37u:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC37u,2u,0x01u,0xCC39u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC39u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC37u,2u,0x01u,0xCC39u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC39u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC37u,2u,0x01u,0xCC39u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC39u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC37u,2u,0x01u,0xCC39u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC39u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC39u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC39u,1u,0x28u,0xCC3Au);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC39u,1u,0x28u,0xCC3Au);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC39u,1u,0x28u,0xCC3Au);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC39u,1u,0x28u,0xCC3Au);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC3Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC3Au,1u,0x60u,0xCC3Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC3Au,1u,0x60u,0xCC3Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC3Au,1u,0x60u,0xCC3Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC3Au,1u,0x60u,0xCC3Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 0D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC3Bu,3u,0x01u,0xCC3Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 0D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC3Bu,3u,0x01u,0xCC3Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC3Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC3Eu,2u,0x20u,0xCC40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC3Eu,2u,0x20u,0xCC40u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC40u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC40u,1u,0xEBu,0xCC41u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC40u,1u,0xEBu,0xCC41u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC41u:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC41u,1u,0x4Au,0xCC42u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC41u,1u,0x4Au,0xCC42u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC42u:
    if(m==1u&&x==0u&&e==0u){ /* B0 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC42u,2u,0x29u,0xCC44u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCC6Du;}
      if(c->pc!=0xCC44u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC44u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC42u,2u,0x29u,0xCC44u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCC6Du;}
      if(c->pc!=0xCC44u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC44u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC44u:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC44u,1u,0x4Au,0xCC45u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC44u,1u,0x4Au,0xCC45u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC45u:
    if(m==1u&&x==0u&&e==0u){ /* B0 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC45u,2u,0x36u,0xCC47u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCC7Du;}
      if(c->pc!=0xCC47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC47u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC45u,2u,0x36u,0xCC47u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCC7Du;}
      if(c->pc!=0xCC47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC47u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC47u:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC47u,1u,0x4Au,0xCC48u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC47u,1u,0x4Au,0xCC48u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC48u:
    if(m==1u&&x==0u&&e==0u){ /* B0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC48u,2u,0x10u,0xCC4Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCC5Au;}
      if(c->pc!=0xCC4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC48u,2u,0x10u,0xCC4Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCC5Au;}
      if(c->pc!=0xCC4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC4Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC4Au,2u,0x20u,0xCC4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC4Au,2u,0x20u,0xCC4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC4Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC4Cu,3u,0x03u,0xCC4Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC4Cu,3u,0x03u,0xCC4Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC4Fu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC4Fu,1u,0x38u,0xCC50u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC4Fu,1u,0x38u,0xCC50u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC50u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC50u,3u,0x00u,0xCC53u);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC50u,3u,0x00u,0xCC53u);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC53u:
    if(m==0u&&x==0u&&e==0u){ /* B0 33 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC53u,2u,0x33u,0xCC55u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCC88u;}
      if(c->pc!=0xCC55u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC55u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 33 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC53u,2u,0x33u,0xCC55u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCC88u;}
      if(c->pc!=0xCC55u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC55u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC55u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC55u,3u,0x00u,0xCC58u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC55u,3u,0x00u,0xCC58u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC58u:
    if(m==0u&&x==0u&&e==0u){ /* 80 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC58u,2u,0x2Eu,0xCC5Au);
      if(1){c->pc=0xCC88u;}
      if(c->pc!=0xCC5Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC5Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC58u,2u,0x2Eu,0xCC5Au);
      if(1){c->pc=0xCC88u;}
      if(c->pc!=0xCC5Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC5Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC5Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC5Au,2u,0x20u,0xCC5Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC5Au,2u,0x20u,0xCC5Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC5Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC5Cu,3u,0x03u,0xCC5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC5Cu,3u,0x03u,0xCC5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC5Fu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC5Fu,1u,0x18u,0xCC60u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC5Fu,1u,0x18u,0xCC60u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC60u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC60u,3u,0x00u,0xCC63u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC60u,3u,0x00u,0xCC63u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC63u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC63u,3u,0x00u,0xCC66u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC63u,3u,0x00u,0xCC66u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC66u:
    if(m==0u&&x==0u&&e==0u){ /* 90 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC66u,2u,0x20u,0xCC68u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCC88u;}
      if(c->pc!=0xCC68u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC68u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC66u,2u,0x20u,0xCC68u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCC88u;}
      if(c->pc!=0xCC68u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC68u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC68u:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC68u,3u,0x00u,0xCC6Bu);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC68u,3u,0x00u,0xCC6Bu);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 80 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC6Bu,2u,0x1Bu,0xCC6Du);
      if(1){c->pc=0xCC88u;}
      if(c->pc!=0xCC6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC6Bu,2u,0x1Bu,0xCC6Du);
      if(1){c->pc=0xCC88u;}
      if(c->pc!=0xCC6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC6Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC6Du,2u,0x20u,0xCC6Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC6Du,2u,0x20u,0xCC6Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC6Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC6Fu,3u,0x03u,0xCC72u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC6Fu,3u,0x03u,0xCC72u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC72u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC72u,1u,0x1Au,0xCC73u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC72u,1u,0x1Au,0xCC73u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC73u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC73u,3u,0x00u,0xCC76u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC73u,3u,0x00u,0xCC76u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC76u:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC76u,2u,0x10u,0xCC78u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCC88u;}
      if(c->pc!=0xCC78u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC78u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC76u,2u,0x10u,0xCC78u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCC88u;}
      if(c->pc!=0xCC78u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC78u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC78u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC78u,3u,0x00u,0xCC7Bu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC78u,3u,0x00u,0xCC7Bu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC7Bu:
    if(m==0u&&x==0u&&e==0u){ /* 80 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC7Bu,2u,0x0Bu,0xCC7Du);
      if(1){c->pc=0xCC88u;}
      if(c->pc!=0xCC7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC7Bu,2u,0x0Bu,0xCC7Du);
      if(1){c->pc=0xCC88u;}
      if(c->pc!=0xCC7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC7Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC7Du,2u,0x20u,0xCC7Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC7Du,2u,0x20u,0xCC7Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC7Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC7Fu,3u,0x03u,0xCC82u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC7Fu,3u,0x03u,0xCC82u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC82u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC82u,1u,0x3Au,0xCC83u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC82u,1u,0x3Au,0xCC83u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC83u:
    if(m==0u&&x==0u&&e==0u){ /* 10 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC83u,2u,0x03u,0xCC85u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xCC88u;}
      if(c->pc!=0xCC85u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC85u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC83u,2u,0x03u,0xCC85u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xCC88u;}
      if(c->pc!=0xCC85u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC85u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC85u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC85u,3u,0x00u,0xCC88u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC85u,3u,0x00u,0xCC88u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC88u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC88u,1u,0xAAu,0xCC89u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC88u,1u,0xAAu,0xCC89u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC89u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC89u,1u,0xA8u,0xCC8Au);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC89u,1u,0xA8u,0xCC8Au);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC8Au:
    if(m==0u&&x==0u&&e==0u){ /* BD F5 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC8Au,3u,0x03u,0xCC8Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x03F5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BD F5 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC8Au,3u,0x03u,0xCC8Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x03F5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC8Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC8Du,3u,0x00u,0xCC90u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC8Du,3u,0x00u,0xCC90u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC90u:
    if(m==0u&&x==0u&&e==0u){ /* F0 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC90u,2u,0x88u,0xCC92u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCC1Au;}
      if(c->pc!=0xCC92u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC92u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC90u,2u,0x88u,0xCC92u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCC1Au;}
      if(c->pc!=0xCC92u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC92u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC92u:
    if(m==0u&&x==0u&&e==0u){ /* 8C F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC92u,3u,0x03u,0xCC95u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F3u),c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8C F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC92u,3u,0x03u,0xCC95u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03F3u),(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC95u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC95u,1u,0x08u,0xCC96u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC95u,1u,0x08u,0xCC96u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC96u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC96u,4u,0x00u,0xCC9Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC99u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC96u,4u,0x00u,0xCC9Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC99u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC9Au:
    if(m==0u&&x==0u&&e==0u){ /* 03 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Au,2u,0x07u,0xCC9Cu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x07u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Au,2u,0x07u,0xCC9Cu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x07u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Au,2u,0x07u,0xCC9Cu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x07u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Au,2u,0x07u,0xCC9Cu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x07u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Cu,1u,0x28u,0xCC9Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Cu,1u,0x28u,0xCC9Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Cu,1u,0x28u,0xCC9Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Cu,1u,0x28u,0xCC9Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CC9Du:
    if(m==0u&&x==0u&&e==0u){ /* 4C 1A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Du,3u,0xCCu,0xCCA0u);
      c->pc=0xCC1Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 1A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Du,3u,0xCCu,0xCCA0u);
      c->pc=0xCC1Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 1A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Du,3u,0xCCu,0xCCA0u);
      c->pc=0xCC1Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 1A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CC9Du,3u,0xCCu,0xCCA0u);
      c->pc=0xCC1Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCA8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCA8u,2u,0x30u,0xCCAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCA8u,2u,0x30u,0xCCAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCA8u,2u,0x30u,0xCCAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCA8u,2u,0x30u,0xCCAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCAAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCAAu,3u,0x01u,0xCCADu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x010Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCADu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCADu,2u,0x0Au,0xCCAFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCCB9u;}
      if(c->pc!=0xCCAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCCAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCAFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCAFu,2u,0xD1u,0xCCB1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCB1u:
    if(m==0u&&x==0u&&e==0u){ /* 29 3F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCB1u,3u,0x00u,0xCCB4u);
      sc_v11_op_and(r,0x003Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCB4u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCB4u,3u,0x00u,0xCCB7u);
      sc_v11_op_compare(r,c->a,0x002Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCB7u:
    if(m==0u&&x==0u&&e==0u){ /* B0 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCB7u,2u,0x30u,0xCCB9u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xCCE9u;}
      if(c->pc!=0xCCB9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCCB9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCB9u:
    if(m==0u&&x==0u&&e==0u){ /* AD F3 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCB9u,3u,0x03u,0xCCBCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCBCu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCBCu,1u,0x0Au,0xCCBDu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCBDu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCBDu,1u,0xAAu,0xCCBEu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCBEu:
    if(m==0u&&x==0u&&e==0u){ /* BF A0 CC 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCBEu,4u,0x01u,0xCCC2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01CCA0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCC2u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCC2u,1u,0x48u,0xCCC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCC3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCC3u,3u,0x00u,0xCCC6u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCC6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCC6u,3u,0x02u,0xCCC9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCC9u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCC9u,1u,0x68u,0xCCCAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCCAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCCAu,2u,0x20u,0xCCCCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCCCu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCCCu,1u,0xEBu,0xCCCDu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCCDu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCCDu,2u,0x20u,0xCCCFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCCFu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCCFu,3u,0x00u,0xCCD2u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCD2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCD2u,3u,0x02u,0xCCD5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCD5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCD5u,3u,0x00u,0xCCD8u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCD8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCD8u,3u,0x02u,0xCCDBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCDBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCDBu,3u,0x00u,0xCCDEu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCDEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCDEu,3u,0x02u,0xCCE1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCE1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCE1u,2u,0x20u,0xCCE3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCE3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCE3u,3u,0x00u,0xCCE6u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCE6u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCE6u,2u,0x00u,0xCCE8u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCCE8u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCE8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCE8u,1u,0x60u,0xCCE9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCE9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCE9u,2u,0x20u,0xCCEBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCEBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCEBu,2u,0x55u,0xCCEDu);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCEDu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCEDu,4u,0x7Eu,0xCCF1u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCF1u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCF1u,1u,0x60u,0xCCF2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCF2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 68 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCF2u,3u,0xCDu,0xCCF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCCF4u))return 0;c->pc=0xCD68u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 68 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCF2u,3u,0xCDu,0xCCF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCCF4u))return 0;c->pc=0xCD68u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCF5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCF5u,2u,0x30u,0xCCF7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCF5u,2u,0x30u,0xCCF7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCF5u,2u,0x30u,0xCCF7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCF5u,2u,0x30u,0xCCF7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCF7u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCF7u,3u,0x00u,0xCCFAu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCFAu:
    if(m==0u&&x==0u&&e==0u){ /* 86 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCFAu,2u,0x79u,0xCCFCu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCFCu:
    if(m==0u&&x==0u&&e==0u){ /* BD F5 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCFCu,3u,0x03u,0xCCFFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x03F5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CCFFu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CCFFu,3u,0x00u,0xCD02u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD02u:
    if(m==0u&&x==0u&&e==0u){ /* 20 BC CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD02u,3u,0xCEu,0xCD05u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCD04u))return 0;c->pc=0xCEBCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD05u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD05u,2u,0x30u,0xCD07u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD05u,2u,0x30u,0xCD07u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD05u,2u,0x30u,0xCD07u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD05u,2u,0x30u,0xCD07u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD07u:
    if(m==0u&&x==0u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD07u,2u,0x79u,0xCD09u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD09u:
    if(m==0u&&x==0u&&e==0u){ /* A6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD09u,2u,0x79u,0xCD0Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD0Bu:
    if(m==0u&&x==0u&&e==0u){ /* E0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD0Bu,3u,0x00u,0xCD0Eu);
      sc_v11_op_compare(r,c->x,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD0Eu,2u,0xECu,0xCD10u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCCFCu;}
      if(c->pc!=0xCD10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCD10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD10u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD10u,2u,0x20u,0xCD12u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD12u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD12u,2u,0x20u,0xCD14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD14u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD14u,2u,0xB3u,0xCD16u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD16u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD16u,2u,0x7Fu,0xCD18u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD18u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD18u,2u,0xB1u,0xCD1Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD1Au:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD1Au,4u,0x00u,0xCD1Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCD1Du))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD1Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD1Eu,2u,0x20u,0xCD20u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD1Eu,2u,0x20u,0xCD20u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD1Eu,2u,0x20u,0xCD20u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD1Eu,2u,0x20u,0xCD20u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD20u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD20u,3u,0x6Cu,0xCD23u);
      sc_v11_op_lda(r,0x6C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD20u,3u,0x6Cu,0xCD23u);
      sc_v11_op_lda(r,0x6C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD23u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD23u,3u,0x21u,0xCD26u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD23u,3u,0x21u,0xCD26u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD26u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD26u,2u,0x30u,0xCD28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD26u,2u,0x30u,0xCD28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD28u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD28u,2u,0x01u,0xCD2Au);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD2Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD2Au,1u,0x0Au,0xCD2Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD2Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD2Bu,1u,0x0Au,0xCD2Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD2Cu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD2Cu,1u,0x0Au,0xCD2Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD2Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD2Du,1u,0x0Au,0xCD2Eu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD2Eu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD2Eu,1u,0xAAu,0xCD2Fu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD2Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD2Fu,2u,0x01u,0xCD31u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD31u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD31u,3u,0x43u,0xCD34u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD34u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD34u,2u,0x18u,0xCD36u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD36u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD36u,3u,0x43u,0xCD39u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD39u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD39u,2u,0x00u,0xCD3Bu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD3Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD3Bu,3u,0x43u,0xCD3Eu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD3Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD3Eu,2u,0x80u,0xCD40u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD40u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD40u,3u,0x43u,0xCD43u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD43u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD43u,2u,0x7Eu,0xCD45u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD45u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD45u,3u,0x43u,0xCD48u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD48u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD48u,2u,0x00u,0xCD4Au);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD4Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD4Au,3u,0x43u,0xCD4Du);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD4Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD4Du,2u,0x08u,0xCD4Fu);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD4Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD4Fu,3u,0x43u,0xCD52u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD52u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD52u,2u,0x01u,0xCD54u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD54u:
    if(m==1u&&x==1u&&e==0u){ /* A2 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD54u,2u,0x01u,0xCD56u);
      sc_v11_op_ldx(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD56u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD56u,2u,0x04u,0xCD58u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCD5Cu;}
      if(c->pc!=0xCD58u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCD58u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD58u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD58u,1u,0x0Au,0xCD59u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD59u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD59u,1u,0xCAu,0xCD5Au);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD5Au:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD5Au,2u,0xFCu,0xCD5Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCD58u;}
      if(c->pc!=0xCD5Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCD5Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD5Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD5Cu,3u,0x42u,0xCD5Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD5Fu:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD5Fu,2u,0x20u,0xCD61u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD61u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD61u,2u,0xB3u,0xCD63u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD63u:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD63u,2u,0x80u,0xCD65u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD65u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD65u,2u,0xB1u,0xCD67u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD67u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD67u,1u,0x60u,0xCD68u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD68u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD68u,2u,0x20u,0xCD6Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD68u,2u,0x20u,0xCD6Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD6Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD6Au,2u,0x10u,0xCD6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD6Au,2u,0x10u,0xCD6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD6Cu:
    if(m==1u&&x==0u&&e==0u){ /* A2 CF C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD6Cu,3u,0xC4u,0xCD6Fu);
      sc_v11_op_ldx(r,0xC4CFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD6Fu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD6Fu,2u,0x09u,0xCD71u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD71u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD71u,2u,0x0Au,0xCD73u);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD73u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD73u,2u,0x0Bu,0xCD75u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD75u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD75u,3u,0x10u,0xCD78u);
      sc_v11_op_ldx(r,0x1000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD78u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD78u,2u,0x0Eu,0xCD7Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD7Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD7Au,2u,0x20u,0xCD7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD7Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD7Cu,3u,0x00u,0xCD7Fu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD7Fu,2u,0x00u,0xCD81u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCD81u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CD81u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CD81u,1u,0x60u,0xCD82u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEBCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEBCu,2u,0x30u,0xCEBEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEBEu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEBEu,1u,0x48u,0xCEBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEBFu:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEBFu,1u,0x8Au,0xCEC0u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEC0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEC0u,1u,0x0Au,0xCEC1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEC1u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEC1u,1u,0xAAu,0xCEC2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEC2u:
    if(m==0u&&x==0u&&e==0u){ /* BF 82 CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEC2u,4u,0x01u,0xCEC6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01CD82u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEC6u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEC6u,2u,0x7Cu,0xCEC8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEC8u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEC8u,1u,0x68u,0xCEC9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEC9u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEC9u,1u,0x0Au,0xCECAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CECAu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CECAu,1u,0xAAu,0xCECBu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CECBu:
    if(m==0u&&x==0u&&e==0u){ /* BF 8A CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CECBu,4u,0x01u,0xCECFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01CD8Au)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CECFu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CECFu,1u,0x48u,0xCED0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CED0u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CED0u,3u,0x00u,0xCED3u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CED3u:
    if(m==0u&&x==0u&&e==0u){ /* A6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CED3u,2u,0x7Cu,0xCED5u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CED5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CED5u,3u,0x00u,0xCED8u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CED8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CED8u,2u,0x7Fu,0xCEDAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEDAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEDAu,3u,0x00u,0xCEDDu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEDDu:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEDDu,2u,0x82u,0xCEDFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEDFu:
    if(m==0u&&x==0u&&e==0u){ /* A6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEDFu,2u,0x7Cu,0xCEE1u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEE1u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEE1u,1u,0x4Bu,0xCEE2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEE2u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEE2u,1u,0xABu,0xCEE3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEE3u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEE3u,2u,0x01u,0xCEE5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEE5u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEE5u,1u,0xC8u,0xCEE6u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEE6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEE6u,3u,0x00u,0xCEE9u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEE9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEE9u,3u,0x00u,0xCEECu);
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEECu:
    if(m==0u&&x==0u&&e==0u){ /* F0 4D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEECu,2u,0x4Du,0xCEEEu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCF3Bu;}
      if(c->pc!=0xCEEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCEEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEEEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEEEu,1u,0x0Au,0xCEEFu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEEFu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEEFu,1u,0x0Au,0xCEF0u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEF0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEF0u,1u,0x0Au,0xCEF1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEF1u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEF1u,1u,0x0Au,0xCEF2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEF2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEF2u,1u,0x0Au,0xCEF3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEF3u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEF3u,1u,0x5Au,0xCEF4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEF4u:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEF4u,1u,0x9Bu,0xCEF5u);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEF5u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEF5u,1u,0x18u,0xCEF6u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEF6u:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEF6u,3u,0x90u,0xCEF9u);
      sc_v11_op_adc(r,0x9000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEF9u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEF9u,1u,0xAAu,0xCEFAu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEFAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEFAu,3u,0x00u,0xCEFDu);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CEFDu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CEFDu,3u,0x7Eu,0xCF00u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xCEFDu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF00u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF00u,1u,0x4Bu,0xCF01u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF01u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF01u,1u,0xABu,0xCF02u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF02u:
    if(m==0u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF02u,1u,0xBBu,0xCF03u);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF03u:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF03u,1u,0x7Au,0xCF04u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF04u:
    if(m==0u&&x==0u&&e==0u){ /* C6 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF04u,2u,0x82u,0xCF06u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x82u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF06u:
    if(m==0u&&x==0u&&e==0u){ /* D0 D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF06u,2u,0xD9u,0xCF08u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCEE1u;}
      if(c->pc!=0xCF08u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCF08u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF08u:
    if(m==0u&&x==0u&&e==0u){ /* A5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF08u,2u,0x7Cu,0xCF0Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF0Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF0Au,1u,0x18u,0xCF0Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF0Bu,3u,0x02u,0xCF0Eu);
      sc_v11_op_adc(r,0x0200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF0Eu,2u,0x7Cu,0xCF10u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF10u:
    if(m==0u&&x==0u&&e==0u){ /* C6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF10u,2u,0x7Fu,0xCF12u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF12u:
    if(m==0u&&x==0u&&e==0u){ /* D0 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF12u,2u,0xC6u,0xCF14u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCEDAu;}
      if(c->pc!=0xCF14u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCF14u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF14u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF14u,3u,0x00u,0xCF17u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF17u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF17u,1u,0xABu,0xCF18u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF18u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF18u,1u,0xABu,0xCF19u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF19u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF19u,1u,0x68u,0xCF1Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF1Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF1Au,1u,0x60u,0xCF1Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF3Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF3Bu,2u,0x30u,0xCF3Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF3Du:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF3Du,1u,0x5Au,0xCF3Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF3Eu,1u,0x9Bu,0xCF3Fu);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF3Fu:
    if(m==0u&&x==0u&&e==0u){ /* A2 1B CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF3Fu,3u,0xCFu,0xCF42u);
      sc_v11_op_ldx(r,0xCF1Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF42u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF42u,3u,0x00u,0xCF45u);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF45u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF45u,3u,0x01u,0xCF48u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x01u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xCF45u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF48u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF48u,1u,0x4Bu,0xCF49u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF49u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF49u,1u,0xABu,0xCF4Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF4Au:
    if(m==0u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF4Au,1u,0xBBu,0xCF4Bu);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF4Bu,1u,0x7Au,0xCF4Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF4Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF4Cu,2u,0xB6u,0xCF4Eu);
      if(1){c->pc=0xCF04u;}
      if(c->pc!=0xCF4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCF4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF8Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 19 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Au,3u,0xD0u,0xCF8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCF8Cu))return 0;c->pc=0xD019u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 19 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Au,3u,0xD0u,0xCF8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCF8Cu))return 0;c->pc=0xD019u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 19 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Au,3u,0xD0u,0xCF8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCF8Cu))return 0;c->pc=0xD019u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 19 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Au,3u,0xD0u,0xCF8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCF8Cu))return 0;c->pc=0xD019u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF8Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Du,2u,0x30u,0xCF8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Du,2u,0x30u,0xCF8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Du,2u,0x30u,0xCF8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Du,2u,0x30u,0xCF8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF8Fu,1u,0x4Bu,0xCF90u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF90u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF90u,1u,0xABu,0xCF91u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF91u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF91u,3u,0x00u,0xCF94u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF94u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF94u,2u,0x79u,0xCF96u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF96u:
    if(m==0u&&x==0u&&e==0u){ /* A6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF96u,2u,0x79u,0xCF98u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF98u:
    if(m==0u&&x==0u&&e==0u){ /* BD F5 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF98u,3u,0x03u,0xCF9Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x03F5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF9Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF9Bu,3u,0x00u,0xCF9Eu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CF9Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CF9Eu,2u,0x01u,0xCFA0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCFA1u;}
      if(c->pc!=0xCFA0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFA0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFA0u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFA0u,1u,0x3Au,0xCFA1u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFA1u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFA1u,1u,0x0Au,0xCFA2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFA2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFA2u,1u,0x0Au,0xCFA3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFA3u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFA3u,1u,0xA8u,0xCFA4u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFA4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFA4u,3u,0x00u,0xCFA7u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFA7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFA7u,2u,0x7Cu,0xCFA9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFA9u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFA9u,2u,0x79u,0xCFABu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFABu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFABu,1u,0x0Au,0xCFACu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFACu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFACu,1u,0x0Au,0xCFADu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFADu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFADu,1u,0x0Au,0xCFAEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFAEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFAEu,1u,0x0Au,0xCFAFu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFAFu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFAFu,1u,0xAAu,0xCFB0u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFB0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFB0u,2u,0x20u,0xCFB2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFB2u:
    if(m==1u&&x==0u&&e==0u){ /* B9 4E CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFB2u,3u,0xCFu,0xCFB5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xCF4Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFB5u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFB5u,1u,0xC8u,0xCFB6u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFB6u:
    if(m==1u&&x==0u&&e==0u){ /* 9F A3 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFB6u,4u,0x7Eu,0xCFBAu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E20A3u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFBAu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFBAu,1u,0xE8u,0xCFBBu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFBBu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFBBu,1u,0xE8u,0xCFBCu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFBCu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFBCu,1u,0xE8u,0xCFBDu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFBDu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFBDu,1u,0xE8u,0xCFBEu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFBEu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFBEu,2u,0x20u,0xCFC0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFC0u:
    if(m==0u&&x==0u&&e==0u){ /* C6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFC0u,2u,0x7Cu,0xCFC2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Cu),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFC2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFC2u,2u,0xECu,0xCFC4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFB0u;}
      if(c->pc!=0xCFC4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFC4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFC4u:
    if(m==0u&&x==0u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFC4u,2u,0x79u,0xCFC6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFC6u:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFC6u,2u,0x79u,0xCFC8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFC8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFC8u,3u,0x00u,0xCFCBu);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFCBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFCBu,2u,0xC9u,0xCFCDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCF96u;}
      if(c->pc!=0xCFCDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFCDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFCDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 AA AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFCDu,3u,0xAAu,0xCFD0u);
      sc_v11_op_lda(r,0xAAAAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFD0u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0A 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFD0u,4u,0x7Eu,0xCFD4u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFD4u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0C 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFD4u,4u,0x7Eu,0xCFD8u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01CFD8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01CFD8u,1u,0x60u,0xCFD9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
