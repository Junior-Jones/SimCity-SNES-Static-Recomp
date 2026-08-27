/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00033(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00CC02u:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC02u,3u,0x0Bu,0xCC05u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC05u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 10 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC05u,3u,0x04u,0xCC08u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0410u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC08u:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC08u,3u,0x0Bu,0xCC0Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 13 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC0Bu,3u,0x04u,0xCC0Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0413u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC0Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC0Eu,3u,0x82u,0xCC11u);
      sc_v11_op_lda(r,0x8200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC11u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 15 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC11u,3u,0x04u,0xCC14u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0415u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC14u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC14u,3u,0x00u,0xCC17u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC17u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 17 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC17u,3u,0x04u,0xCC1Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0417u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC1Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC1Au,3u,0x01u,0xCC1Du);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC1Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 19 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC1Du,3u,0x04u,0xCC20u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0419u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC20u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B2 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC20u,3u,0xCAu,0xCC23u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC22u))return 0;c->pc=0xCAB2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC23u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C7 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC23u,3u,0xCAu,0xCC26u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC25u))return 0;c->pc=0xCAC7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C7 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC23u,3u,0xCAu,0xCC26u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC25u))return 0;c->pc=0xCAC7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C7 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC23u,3u,0xCAu,0xCC26u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC25u))return 0;c->pc=0xCAC7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C7 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC23u,3u,0xCAu,0xCC26u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC25u))return 0;c->pc=0xCAC7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC26u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5E CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC26u,3u,0xCCu,0xCC29u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC28u))return 0;c->pc=0xCC5Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5E CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC26u,3u,0xCCu,0xCC29u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC28u))return 0;c->pc=0xCC5Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 5E CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC26u,3u,0xCCu,0xCC29u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC28u))return 0;c->pc=0xCC5Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 5E CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC26u,3u,0xCCu,0xCC29u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC28u))return 0;c->pc=0xCC5Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC29u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC29u,1u,0x60u,0xCC2Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC29u,1u,0x60u,0xCC2Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC29u,1u,0x60u,0xCC2Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC29u,1u,0x60u,0xCC2Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC2Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 5B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC2Au,3u,0x0Bu,0xCC2Du);
      sc_v11_op_lda(r,0x0B5Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC2Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0C 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC2Du,3u,0x04u,0xCC30u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x040Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC30u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC30u,3u,0x0Du,0xCC33u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC33u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC33u,3u,0x04u,0xCC36u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x040Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC36u:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC36u,3u,0x0Bu,0xCC39u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC39u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 10 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC39u,3u,0x04u,0xCC3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0410u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC3Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC3Cu,3u,0x0Bu,0xCC3Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 13 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC3Fu,3u,0x04u,0xCC42u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0413u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC42u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC42u,3u,0x82u,0xCC45u);
      sc_v11_op_lda(r,0x8280u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC45u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 15 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC45u,3u,0x04u,0xCC48u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0415u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC48u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC48u,3u,0x03u,0xCC4Bu);
      sc_v11_op_lda(r,0x0300u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 17 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC4Bu,3u,0x04u,0xCC4Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0417u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC4Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC4Eu,3u,0x05u,0xCC51u);
      sc_v11_op_lda(r,0x0500u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC51u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 19 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC51u,3u,0x04u,0xCC54u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0419u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC54u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B2 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC54u,3u,0xCAu,0xCC57u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC56u))return 0;c->pc=0xCAB2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC57u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C7 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC57u,3u,0xCAu,0xCC5Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC59u))return 0;c->pc=0xCAC7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C7 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC57u,3u,0xCAu,0xCC5Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC59u))return 0;c->pc=0xCAC7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C7 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC57u,3u,0xCAu,0xCC5Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC59u))return 0;c->pc=0xCAC7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C7 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC57u,3u,0xCAu,0xCC5Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC59u))return 0;c->pc=0xCAC7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC5Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 5E CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Au,3u,0xCCu,0xCC5Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC5Cu))return 0;c->pc=0xCC5Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5E CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Au,3u,0xCCu,0xCC5Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC5Cu))return 0;c->pc=0xCC5Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 5E CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Au,3u,0xCCu,0xCC5Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC5Cu))return 0;c->pc=0xCC5Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 5E CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Au,3u,0xCCu,0xCC5Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC5Cu))return 0;c->pc=0xCC5Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC5Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Du,1u,0x60u,0xCC5Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Du,1u,0x60u,0xCC5Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Du,1u,0x60u,0xCC5Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Du,1u,0x60u,0xCC5Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 8C CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Eu,3u,0xCCu,0xCC61u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC60u))return 0;c->pc=0xCC8Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 8C CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Eu,3u,0xCCu,0xCC61u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC60u))return 0;c->pc=0xCC8Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 8C CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Eu,3u,0xCCu,0xCC61u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC60u))return 0;c->pc=0xCC8Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 8C CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC5Eu,3u,0xCCu,0xCC61u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC60u))return 0;c->pc=0xCC8Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC61u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C9 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC61u,3u,0xCCu,0xCC64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC63u))return 0;c->pc=0xCCC9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C9 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC61u,3u,0xCCu,0xCC64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC63u))return 0;c->pc=0xCCC9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C9 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC61u,3u,0xCCu,0xCC64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC63u))return 0;c->pc=0xCCC9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C9 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC61u,3u,0xCCu,0xCC64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC63u))return 0;c->pc=0xCCC9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC64u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5B CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC64u,3u,0xCDu,0xCC67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC66u))return 0;c->pc=0xCD5Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5B CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC64u,3u,0xCDu,0xCC67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC66u))return 0;c->pc=0xCD5Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 5B CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC64u,3u,0xCDu,0xCC67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC66u))return 0;c->pc=0xCD5Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 5B CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC64u,3u,0xCDu,0xCC67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCC66u))return 0;c->pc=0xCD5Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC67u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC67u,1u,0x60u,0xCC68u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC67u,1u,0x60u,0xCC68u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC67u,1u,0x60u,0xCC68u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC67u,1u,0x60u,0xCC68u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC8Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC8Cu,2u,0x30u,0xCC8Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC8Cu,2u,0x30u,0xCC8Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC8Cu,2u,0x30u,0xCC8Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC8Cu,2u,0x30u,0xCC8Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC8Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC8Eu,3u,0x00u,0xCC91u);
      sc_v11_op_lda(r,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC91u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC91u,2u,0x79u,0xCC93u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC93u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC93u,2u,0x7Cu,0xCC95u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC95u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC95u,3u,0x04u,0xCC98u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x040Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC98u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC98u,3u,0x00u,0xCC9Bu);
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC9Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC9Bu,2u,0x05u,0xCC9Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCCA2u;}
      if(c->pc!=0xCC9Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC9Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CC9Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 68 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CC9Du,3u,0xCCu,0xCCA0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0xCC68u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCA0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCA0u,2u,0x06u,0xCCA2u);
      if(1){c->pc=0xCCA8u;}
      if(c->pc!=0xCCA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCCA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCA2u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCA2u,1u,0x1Au,0xCCA3u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCA3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCA3u,1u,0x0Au,0xCCA4u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCA4u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCA4u,1u,0xAAu,0xCCA5u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCA5u:
    if(m==0u&&x==0u&&e==0u){ /* BD 68 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCA5u,3u,0xCCu,0xCCA8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xCC68u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCA8u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCA8u,1u,0xAAu,0xCCA9u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCA9u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCA9u,1u,0xDAu,0xCCAAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCAAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCAAu,2u,0x7Cu,0xCCACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCACu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCACu,1u,0x0Au,0xCCADu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCADu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCADu,1u,0xAAu,0xCCAEu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCAEu:
    if(m==0u&&x==0u&&e==0u){ /* BD 7A CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCAEu,3u,0xCCu,0xCCB1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xCC7Au)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCB1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCB1u,1u,0x18u,0xCCB2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCB2u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 15 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCB2u,3u,0x04u,0xCCB5u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0415u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCB5u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCB5u,1u,0xA8u,0xCCB6u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCB6u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCB6u,1u,0xFAu,0xCCB7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCB7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCB7u,3u,0x00u,0xCCBAu);
      sc_v11_op_lda(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCBAu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCBAu,3u,0x7Eu,0xCCBDu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xCCBAu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCBDu:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCBDu,3u,0x00u,0xCCC0u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCC0u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC0u,1u,0xABu,0xCCC1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCC1u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC1u,1u,0xABu,0xCCC2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCC2u:
    if(m==0u&&x==0u&&e==0u){ /* E6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC2u,2u,0x7Cu,0xCCC4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Cu),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCC4u:
    if(m==0u&&x==0u&&e==0u){ /* C6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC4u,2u,0x79u,0xCCC6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCC6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC6u,2u,0xE1u,0xCCC8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCCA9u;}
      if(c->pc!=0xCCC8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCCC8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCC8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC8u,1u,0x60u,0xCCC9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCC9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC9u,2u,0x30u,0xCCCBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC9u,2u,0x30u,0xCCCBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC9u,2u,0x30u,0xCCCBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCC9u,2u,0x30u,0xCCCBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCCBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCCBu,3u,0x04u,0xCCCEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x040Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCCEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCCEu,3u,0x00u,0xCCD1u);
      sc_v11_op_compare(r,c->a,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCD1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCD1u,2u,0x03u,0xCCD3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCCD6u;}
      if(c->pc!=0xCCD3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCCD3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCD3u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 36 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCD3u,3u,0xCDu,0xCCD6u);
      c->pc=0xCD36u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCD6u:
    if(m==0u&&x==0u&&e==0u){ /* A2 10 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCD6u,3u,0x04u,0xCCD9u);
      sc_v11_op_ldx(r,0x0410u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCD9u:
    if(m==0u&&x==0u&&e==0u){ /* 22 EB 8F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCD9u,4u,0x00u,0xCCDDu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCCDCu))return 0;
      c->pbr=0x00u;c->pc=0x8FEBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCDDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCDDu,2u,0x30u,0xCCDFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCDDu,2u,0x30u,0xCCDFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCDDu,2u,0x30u,0xCCDFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCDDu,2u,0x30u,0xCCDFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCDFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCDFu,2u,0x7Bu,0xCCE1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Bu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCE1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCE1u,3u,0x04u,0xCCE4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x041Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCE4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 7D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCE4u,2u,0x7Du,0xCCE6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCE6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCE6u,3u,0x04u,0xCCE9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x041Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCE9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCE9u,2u,0x20u,0xCCEBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCEBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCEBu,2u,0x10u,0xCCEDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCEDu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCEDu,3u,0x00u,0xCCF0u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCF0u:
    if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCF0u,3u,0x00u,0xCCF3u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCF3u:
    if(m==1u&&x==0u&&e==0u){ /* BD 1B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCF3u,3u,0x04u,0xCCF6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x041Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCF6u:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCF6u,1u,0xDAu,0xCCF7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCF7u:
    if(m==1u&&x==0u&&e==0u){ /* AE 17 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCF7u,3u,0x04u,0xCCFAu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0417u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCFAu:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCFAu,1u,0x5Au,0xCCFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCFBu:
    if(m==1u&&x==0u&&e==0u){ /* 20 9C CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCFBu,3u,0xCDu,0xCCFEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCCFDu))return 0;c->pc=0xCD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CCFEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCFEu,2u,0x20u,0xCD00u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCFEu,2u,0x20u,0xCD00u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCFEu,2u,0x20u,0xCD00u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CCFEu,2u,0x20u,0xCD00u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD00u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD00u,2u,0x10u,0xCD02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD00u,2u,0x10u,0xCD02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD02u:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD02u,1u,0x7Au,0xCD03u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD03u:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD03u,1u,0xFAu,0xCD04u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD04u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD04u,1u,0xC8u,0xCD05u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD05u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD05u,1u,0xE8u,0xCD06u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD06u:
    if(m==1u&&x==0u&&e==0u){ /* E0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD06u,3u,0x00u,0xCD09u);
      sc_v11_op_compare(r,c->x,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD09u:
    if(m==1u&&x==0u&&e==0u){ /* 90 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD09u,2u,0xE8u,0xCD0Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCCF3u;}
      if(c->pc!=0xCD0Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCD0Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD0Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD0Bu,2u,0x30u,0xCD0Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD0Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD0Du,3u,0x04u,0xCD10u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0413u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD10u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD10u,1u,0x0Au,0xCD11u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD11u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD11u,1u,0x18u,0xCD12u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD12u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 13 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD12u,3u,0x04u,0xCD15u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0413u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD15u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD15u,1u,0x3Au,0xCD16u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD16u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD16u,1u,0x3Au,0xCD17u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD17u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD17u,1u,0x3Au,0xCD18u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD18u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD18u,1u,0xAAu,0xCD19u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD19u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD19u,2u,0x20u,0xCD1Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD1Bu:
    if(m==1u&&x==0u&&e==0u){ /* A0 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD1Bu,3u,0x00u,0xCD1Eu);
      sc_v11_op_ldy(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD1Eu:
    if(m==1u&&x==0u&&e==0u){ /* BD 37 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD1Eu,3u,0xCDu,0xCD21u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xCD37u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD21u:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD21u,1u,0xDAu,0xCD22u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD22u:
    if(m==1u&&x==0u&&e==0u){ /* AE 17 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD22u,3u,0x04u,0xCD25u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0417u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD25u:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD25u,1u,0x5Au,0xCD26u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD26u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9C CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD26u,3u,0xCDu,0xCD29u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCD28u))return 0;c->pc=0xCD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD29u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD29u,2u,0x20u,0xCD2Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD29u,2u,0x20u,0xCD2Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD29u,2u,0x20u,0xCD2Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD29u,2u,0x20u,0xCD2Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD2Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD2Bu,2u,0x10u,0xCD2Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD2Bu,2u,0x10u,0xCD2Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD2Du:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD2Du,1u,0x7Au,0xCD2Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD2Eu:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD2Eu,1u,0xFAu,0xCD2Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD2Fu:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD2Fu,1u,0xC8u,0xCD30u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD30u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD30u,1u,0xE8u,0xCD31u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD31u:
    if(m==1u&&x==0u&&e==0u){ /* C0 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD31u,3u,0x00u,0xCD34u);
      sc_v11_op_compare(r,c->y,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD34u:
    if(m==1u&&x==0u&&e==0u){ /* 90 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD34u,2u,0xE8u,0xCD36u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xCD1Eu;}
      if(c->pc!=0xCD36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCD36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD36u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD36u,1u,0x60u,0xCD37u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD36u,1u,0x60u,0xCD37u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD5Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD5Bu,2u,0x20u,0xCD5Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD5Bu,2u,0x20u,0xCD5Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD5Bu,2u,0x20u,0xCD5Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD5Bu,2u,0x20u,0xCD5Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD5Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD5Du,2u,0x10u,0xCD5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD5Du,2u,0x10u,0xCD5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD5Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD 0E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD5Fu,3u,0x04u,0xCD62u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x040Eu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD62u:
    if(m==1u&&x==0u&&e==0u){ /* C9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD62u,2u,0xFFu,0xCD64u);
      sc_v11_op_compare(r,c->a,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD64u:
    if(m==1u&&x==0u&&e==0u){ /* F0 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD64u,2u,0x31u,0xCD66u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCD97u;}
      if(c->pc!=0xCD66u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCD66u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD66u:
    if(m==1u&&x==0u&&e==0u){ /* AE 0C 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD66u,3u,0x04u,0xCD69u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x040Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD69u:
    if(m==1u&&x==0u&&e==0u){ /* B5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD69u,2u,0x00u,0xCD6Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD6Bu:
    if(m==1u&&x==0u&&e==0u){ /* F0 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD6Bu,2u,0x2Au,0xCD6Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCD97u;}
      if(c->pc!=0xCD6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCD6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD6Du:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD6Du,1u,0xE8u,0xCD6Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD6Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 1F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD6Eu,3u,0x04u,0xCD71u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x041Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD71u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD71u,2u,0x0Au,0xCD73u);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD73u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD73u,1u,0x38u,0xCD74u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD74u:
    if(m==1u&&x==0u&&e==0u){ /* ED 1F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD74u,3u,0x04u,0xCD77u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x041Fu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD77u:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD77u,1u,0x4Au,0xCD78u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD78u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD78u,2u,0x20u,0xCD7Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD7Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD7Au,3u,0x00u,0xCD7Du);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD7Du:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD7Du,1u,0xA8u,0xCD7Eu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD7Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD7Eu,2u,0x20u,0xCD80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD80u:
    if(m==1u&&x==0u&&e==0u){ /* B5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD80u,2u,0x00u,0xCD82u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dpx(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD82u:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD82u,1u,0xDAu,0xCD83u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD83u:
    if(m==1u&&x==0u&&e==0u){ /* AE 19 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD83u,3u,0x04u,0xCD86u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0419u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD86u:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD86u,1u,0x5Au,0xCD87u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD87u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9C CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD87u,3u,0xCDu,0xCD8Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCD89u))return 0;c->pc=0xCD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD8Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD8Au,2u,0x20u,0xCD8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD8Au,2u,0x20u,0xCD8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD8Au,2u,0x20u,0xCD8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD8Au,2u,0x20u,0xCD8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD8Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD8Cu,2u,0x10u,0xCD8Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD8Cu,2u,0x10u,0xCD8Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD8Eu:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD8Eu,1u,0x7Au,0xCD8Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD8Fu:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD8Fu,1u,0xFAu,0xCD90u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD90u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD90u,1u,0xE8u,0xCD91u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD91u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD91u,1u,0xC8u,0xCD92u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD92u:
    if(m==1u&&x==0u&&e==0u){ /* CE 1F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD92u,3u,0x04u,0xCD95u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x041Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD95u:
    if(m==1u&&x==0u&&e==0u){ /* D0 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD95u,2u,0xE9u,0xCD97u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCD80u;}
      if(c->pc!=0xCD97u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCD97u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD97u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD97u,1u,0x60u,0xCD98u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CD9Bu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD9Bu,1u,0x6Bu,0xCD9Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD9Bu,1u,0x6Bu,0xCD9Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CD9Bu,1u,0x6Bu,0xCD9Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CDF4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDF4u,2u,0x20u,0xCDF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDF4u,2u,0x20u,0xCDF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDF4u,2u,0x20u,0xCDF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDF4u,2u,0x20u,0xCDF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CDF6u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDF6u,2u,0xB3u,0xCDF8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDF6u,2u,0xB3u,0xCDF8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CDF8u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDF8u,2u,0x7Fu,0xCDFAu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDF8u,2u,0x7Fu,0xCDFAu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CDFAu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDFAu,2u,0xB1u,0xCDFCu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDFAu,2u,0xB1u,0xCDFCu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CDFCu:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDFCu,4u,0x00u,0xCE00u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCDFFu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CDFCu,4u,0x00u,0xCE00u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCDFFu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE00u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE00u,2u,0x20u,0xCE02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE00u,2u,0x20u,0xCE02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE00u,2u,0x20u,0xCE02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE00u,2u,0x20u,0xCE02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE02u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE02u,2u,0x10u,0xCE04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE02u,2u,0x10u,0xCE04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE04u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE04u,2u,0x01u,0xCE06u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE06u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE06u,3u,0x43u,0xCE09u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE09u:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE09u,2u,0x18u,0xCE0Bu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE0Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE0Bu,3u,0x43u,0xCE0Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE0Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE0Eu,2u,0x7Eu,0xCE10u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE10u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE10u,3u,0x43u,0xCE13u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE13u:
    if(m==1u&&x==0u&&e==0u){ /* A2 80 76 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE13u,3u,0x76u,0xCE16u);
      sc_v11_op_ldx(r,0x7680u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE16u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE16u,3u,0x21u,0xCE19u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE19u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE19u,3u,0x80u,0xCE1Cu);
      sc_v11_op_ldx(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE1Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE1Cu,3u,0x43u,0xCE1Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE1Fu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE1Fu,3u,0x01u,0xCE22u);
      sc_v11_op_ldx(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE22u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE22u,3u,0x43u,0xCE25u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE25u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE25u,2u,0x02u,0xCE27u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE27u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE27u,3u,0x42u,0xCE2Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE2Au:
    if(m==1u&&x==0u&&e==0u){ /* A2 80 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE2Au,3u,0x77u,0xCE2Du);
      sc_v11_op_ldx(r,0x7780u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE2Du:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE2Du,3u,0x21u,0xCE30u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE30u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE30u,3u,0x81u,0xCE33u);
      sc_v11_op_ldx(r,0x8100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE33u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE33u,3u,0x43u,0xCE36u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE36u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE36u,3u,0x01u,0xCE39u);
      sc_v11_op_ldx(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE39u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE39u,3u,0x43u,0xCE3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE3Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE3Cu,2u,0x02u,0xCE3Eu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE3Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE3Eu,3u,0x42u,0xCE41u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE41u:
    if(m==1u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE41u,4u,0x00u,0xCE45u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCE44u))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE45u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE45u,2u,0x20u,0xCE47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE45u,2u,0x20u,0xCE47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE45u,2u,0x20u,0xCE47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE45u,2u,0x20u,0xCE47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE47u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE47u,2u,0x10u,0xCE49u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE47u,2u,0x10u,0xCE49u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE49u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE49u,2u,0x01u,0xCE4Bu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE4Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 10 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE4Bu,3u,0x43u,0xCE4Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4310u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE4Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE4Eu,2u,0x18u,0xCE50u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE50u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 11 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE50u,3u,0x43u,0xCE53u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4311u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE53u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE53u,2u,0x7Eu,0xCE55u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE55u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 14 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE55u,3u,0x43u,0xCE58u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4314u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE58u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE58u,3u,0x78u,0xCE5Bu);
      sc_v11_op_ldx(r,0x7800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE5Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE5Bu,3u,0x21u,0xCE5Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE5Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE5Eu,3u,0x82u,0xCE61u);
      sc_v11_op_ldx(r,0x8200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE61u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 12 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE61u,3u,0x43u,0xCE64u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4312u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE64u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE64u,3u,0x08u,0xCE67u);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE67u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 15 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE67u,3u,0x43u,0xCE6Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4315u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE6Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE6Au,2u,0x02u,0xCE6Cu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE6Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE6Cu,3u,0x42u,0xCE6Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE6Fu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE6Fu,2u,0x20u,0xCE71u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE71u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE71u,2u,0xB3u,0xCE73u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE73u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE73u,2u,0x80u,0xCE75u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE75u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE75u,2u,0xB1u,0xCE77u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CE77u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CE77u,1u,0x60u,0xCE78u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFB8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFB8u,2u,0x30u,0xCFBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFB8u,2u,0x30u,0xCFBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFB8u,2u,0x30u,0xCFBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFB8u,2u,0x30u,0xCFBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFBAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 52 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFBAu,3u,0x03u,0xCFBDu);
      sc_v11_op_lda(r,0x0352u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFBDu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFBDu,2u,0x79u,0xCFBFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFBFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFBFu,3u,0x00u,0xCFC2u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFC2u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFC2u,2u,0x7Cu,0xCFC4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFC4u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFC4u,1u,0x4Bu,0xCFC5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFC5u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFC5u,1u,0xABu,0xCFC6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFC6u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFC6u,3u,0x00u,0xCFC9u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFC9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFC9u,3u,0x00u,0xCFCCu);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFCCu:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFCCu,2u,0x7Fu,0xCFCEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFCEu:
    if(m==0u&&x==0u&&e==0u){ /* A6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFCEu,2u,0x79u,0xCFD0u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFD0u:
    if(m==0u&&x==0u&&e==0u){ /* B9 78 CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFD0u,3u,0xCEu,0xCFD3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCE78u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFD3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 38 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFD3u,4u,0x7Eu,0xCFD7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFD7u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFD7u,1u,0xE8u,0xCFD8u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFD8u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFD8u,1u,0xE8u,0xCFD9u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFD9u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFD9u,1u,0xC8u,0xCFDAu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFDAu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFDAu,1u,0xC8u,0xCFDBu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFDBu:
    if(m==0u&&x==0u&&e==0u){ /* C6 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFDBu,2u,0x7Fu,0xCFDDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Fu),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFDDu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFDDu,2u,0xF1u,0xCFDFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFD0u;}
      if(c->pc!=0xCFDFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFDFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFDFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFDFu,2u,0x79u,0xCFE1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFE1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFE1u,1u,0x18u,0xCFE2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFE2u:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFE2u,3u,0x00u,0xCFE5u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFE5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFE5u,2u,0x79u,0xCFE7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFE7u:
    if(m==0u&&x==0u&&e==0u){ /* C6 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFE7u,2u,0x7Cu,0xCFE9u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x7Cu),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFE9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFE9u,2u,0xDEu,0xCFEBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFC9u;}
      if(c->pc!=0xCFEBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFEBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFEBu:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFEBu,3u,0x00u,0xCFEEu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFEEu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFEEu,1u,0xABu,0xCFEFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFEFu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFEFu,1u,0xABu,0xCFF0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFF0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFF0u,2u,0x20u,0xCFF2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFF2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFF2u,2u,0xB3u,0xCFF4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFF4u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFF4u,2u,0x7Fu,0xCFF6u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFF6u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFF6u,2u,0xB1u,0xCFF8u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFF8u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFF8u,2u,0x20u,0xCFFAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFFAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFFAu,3u,0x8Eu,0xCFFDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCFFCu))return 0;c->pc=0x8E21u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFFDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFFDu,2u,0x20u,0xCFFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFFDu,2u,0x20u,0xCFFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFFDu,2u,0x20u,0xCFFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFFDu,2u,0x20u,0xCFFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00CFFFu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFFFu,2u,0xB3u,0xD001u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00CFFFu,2u,0xB3u,0xD001u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
