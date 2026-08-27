/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000A1(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x028401u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028401u,2u,0x10u,0x8403u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028401u,2u,0x10u,0x8403u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028401u,2u,0x10u,0x8403u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028401u,2u,0x10u,0x8403u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028403u:
    if(m==0u&&x==1u&&e==0u){ /* A2 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028403u,2u,0x06u,0x8405u);
      sc_v11_op_ldx(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028403u,2u,0x06u,0x8405u);
      sc_v11_op_ldx(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028405u:
    if(m==0u&&x==1u&&e==0u){ /* AD 25 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028405u,3u,0x0Bu,0x8408u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B25u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 25 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028405u,3u,0x0Bu,0x8408u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B25u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028408u:
    if(m==0u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028408u,2u,0x01u,0x840Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x840Bu;}
      if(c->pc!=0x840Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x840Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028408u,2u,0x01u,0x840Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x840Bu;}
      if(c->pc!=0x840Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x840Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02840Au:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02840Au,1u,0xE8u,0x840Bu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02840Au,1u,0xE8u,0x840Bu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02840Bu:
    if(m==0u&&x==1u&&e==0u){ /* 8E AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02840Bu,3u,0x0Du,0x840Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DAFu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02840Bu,3u,0x0Du,0x840Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DAFu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02840Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 B8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02840Eu,3u,0x9Bu,0x8411u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8410u))return 0;c->pc=0x9BB8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02840Eu,3u,0x9Bu,0x8411u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8410u))return 0;c->pc=0x9BB8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028411u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028411u,2u,0x03u,0x8413u);
      if(1){c->pc=0x8416u;}
      if(c->pc!=0x8413u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8413u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028411u,2u,0x03u,0x8413u);
      if(1){c->pc=0x8416u;}
      if(c->pc!=0x8413u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8413u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028411u,2u,0x03u,0x8413u);
      if(1){c->pc=0x8416u;}
      if(c->pc!=0x8413u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8413u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028411u,2u,0x03u,0x8413u);
      if(1){c->pc=0x8416u;}
      if(c->pc!=0x8413u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8413u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028413u:
    if(m==1u&&x==0u&&e==0u){ /* 20 2A 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028413u,3u,0x9Fu,0x8416u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8415u))return 0;c->pc=0x9F2Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028416u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FC 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028416u,3u,0x9Eu,0x8419u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8418u))return 0;c->pc=0x9EFCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FC 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028416u,3u,0x9Eu,0x8419u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8418u))return 0;c->pc=0x9EFCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FC 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028416u,3u,0x9Eu,0x8419u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8418u))return 0;c->pc=0x9EFCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FC 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028416u,3u,0x9Eu,0x8419u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8418u))return 0;c->pc=0x9EFCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028419u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028419u,3u,0x9Fu,0x841Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x841Bu))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028419u,3u,0x9Fu,0x841Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x841Bu))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028419u,3u,0x9Fu,0x841Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x841Bu))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028419u,3u,0x9Fu,0x841Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x841Bu))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02841Cu:
    if(m==0u&&x==0u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02841Cu,4u,0x00u,0x8420u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x841Fu))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02841Cu,4u,0x00u,0x8420u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x841Fu))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02841Cu,4u,0x00u,0x8420u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x841Fu))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02841Cu,4u,0x00u,0x8420u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x841Fu))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028420u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 9B 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028420u,3u,0x83u,0x8423u);
      c->pc=0x839Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 9B 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028420u,3u,0x83u,0x8423u);
      c->pc=0x839Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 9B 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028420u,3u,0x83u,0x8423u);
      c->pc=0x839Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 9B 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028420u,3u,0x83u,0x8423u);
      c->pc=0x839Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028423u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028423u,1u,0x08u,0x8424u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028423u,1u,0x08u,0x8424u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028423u,1u,0x08u,0x8424u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028423u,1u,0x08u,0x8424u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028424u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028424u,4u,0x00u,0x8428u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8427u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028424u,4u,0x00u,0x8428u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8427u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028424u,4u,0x00u,0x8428u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8427u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028424u,4u,0x00u,0x8428u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8427u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028428u:
    if(m==0u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028428u,2u,0x06u,0x842Au);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028428u,2u,0x06u,0x842Au);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028428u,2u,0x06u,0x842Au);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028428u,2u,0x06u,0x842Au);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02842Au:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Au,1u,0x28u,0x842Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Au,1u,0x28u,0x842Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Au,1u,0x28u,0x842Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Au,1u,0x28u,0x842Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02842Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Bu,2u,0x20u,0x842Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Bu,2u,0x20u,0x842Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Bu,2u,0x20u,0x842Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Bu,2u,0x20u,0x842Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02842Du:
    if(m==1u&&x==0u&&e==0u){ /* 9C 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Du,3u,0x0Du,0x8430u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02842Du,3u,0x0Du,0x8430u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028430u:
    if(m==1u&&x==0u&&e==0u){ /* 20 76 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028430u,3u,0x98u,0x8433u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8432u))return 0;c->pc=0x9876u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 76 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028430u,3u,0x98u,0x8433u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8432u))return 0;c->pc=0x9876u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028433u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028433u,1u,0x68u,0x8434u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028433u,1u,0x68u,0x8434u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028433u,1u,0x68u,0x8434u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028433u,1u,0x68u,0x8434u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028434u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028434u,3u,0x04u,0x8437u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x046Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 6B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028434u,3u,0x04u,0x8437u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x046Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 6B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028434u,3u,0x04u,0x8437u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x046Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 6B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028434u,3u,0x04u,0x8437u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x046Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028437u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028437u,3u,0x85u,0x843Au);
      sc_v11_op_lda(r,0x8503u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028437u,3u,0x85u,0x843Au);
      sc_v11_op_lda(r,0x8503u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028437u,2u,0x03u,0x8439u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028437u,2u,0x03u,0x8439u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028439u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028439u,2u,0x6Fu,0x843Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028439u,2u,0x6Fu,0x843Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02843Au:
    if(m==0u&&x==0u&&e==0u){ /* 6F C2 20 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02843Au,4u,0x68u,0x843Eu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x6820C2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6F C2 20 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02843Au,4u,0x68u,0x843Eu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x6820C2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02843Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02843Bu,2u,0x20u,0x843Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02843Bu,2u,0x20u,0x843Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02843Du:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02843Du,1u,0x68u,0x843Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02843Du,1u,0x68u,0x843Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02843Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02843Eu,3u,0x01u,0x8441u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02843Eu,3u,0x01u,0x8441u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028441u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028441u,1u,0x68u,0x8442u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028441u,1u,0x68u,0x8442u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028442u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028442u,3u,0x01u,0x8445u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028442u,3u,0x01u,0x8445u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028445u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028445u,1u,0x68u,0x8446u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028445u,1u,0x68u,0x8446u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028446u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028446u,3u,0x01u,0x8449u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028446u,3u,0x01u,0x8449u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028449u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028449u,2u,0x20u,0x844Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028449u,2u,0x20u,0x844Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02844Bu:
    if(m==1u&&x==0u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02844Bu,3u,0x01u,0x844Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0195u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02844Bu,3u,0x01u,0x844Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0195u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02844Eu:
    if(m==1u&&x==0u&&e==0u){ /* 29 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02844Eu,2u,0x08u,0x8450u);
      sc_v11_op_and(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02844Eu,2u,0x08u,0x8450u);
      sc_v11_op_and(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028450u:
    if(m==1u&&x==0u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028450u,2u,0x04u,0x8452u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8456u;}
      if(c->pc!=0x8452u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8452u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028450u,2u,0x04u,0x8452u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8456u;}
      if(c->pc!=0x8452u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8452u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028452u:
    if(m==1u&&x==0u&&e==0u){ /* A9 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028452u,2u,0xF0u,0x8454u);
      sc_v11_op_lda(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028452u,2u,0xF0u,0x8454u);
      sc_v11_op_lda(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028454u:
    if(m==1u&&x==0u&&e==0u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028454u,2u,0x03u,0x8456u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028454u,2u,0x03u,0x8456u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028456u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028456u,2u,0x20u,0x8458u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028456u,2u,0x20u,0x8458u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028458u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028458u,2u,0xFFu,0x845Au);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028458u,2u,0xFFu,0x845Au);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02845Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02845Au,2u,0xE3u,0x845Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xE3u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02845Au,2u,0xE3u,0x845Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xE3u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02845Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02845Cu,2u,0xC3u,0x845Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xC3u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02845Cu,2u,0xC3u,0x845Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xC3u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02845Eu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02845Eu,3u,0x0Du,0x8461u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02845Eu,3u,0x0Du,0x8461u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D29u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028461u:
    if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028461u,1u,0x6Bu,0x8462u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028461u,1u,0x6Bu,0x8462u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028462u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028462u,2u,0x20u,0x8464u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028462u,2u,0x20u,0x8464u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028464u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028464u,3u,0x00u,0x8467u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028467u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028467u,2u,0x00u,0x8469u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8469u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028469u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028469u,2u,0x30u,0x846Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028469u,2u,0x30u,0x846Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028469u,2u,0x30u,0x846Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028469u,2u,0x30u,0x846Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02846Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 13 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02846Bu,3u,0x00u,0x846Eu);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02846Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02846Eu,2u,0x14u,0x8470u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028470u:
    if(m==0u&&x==0u&&e==0u){ /* 64 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028470u,2u,0x12u,0x8472u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028472u:
    if(m==0u&&x==0u&&e==0u){ /* A6 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028472u,2u,0xAFu,0x8474u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xAFu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028474u:
    if(m==0u&&x==0u&&e==0u){ /* 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028474u,1u,0x9Au,0x8475u);
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->x&0xffu)):c->x;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028475u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028475u,1u,0x6Bu,0x8476u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028476u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028476u,2u,0x20u,0x8478u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028476u,2u,0x20u,0x8478u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028478u:
    if(m==0u&&x==0u&&e==0u){ /* 64 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028478u,2u,0xE3u,0x847Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028478u,2u,0xE3u,0x847Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02847Au:
    if(m==0u&&x==0u&&e==0u){ /* 24 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02847Au,2u,0xC9u,0x847Cu);
      {uint16_t q=sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u));uint16_t z=(uint16_t)((c->a&0xFFFFu)&q);c->p=(uint8_t)(c->p&~(SC_FLAG_N|SC_FLAG_V|SC_FLAG_Z));if(!z)c->p|=SC_FLAG_Z;if(q&0x8000u)c->p|=SC_FLAG_N;if(q&0x4000u)c->p|=SC_FLAG_V;}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 24 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02847Au,2u,0xC9u,0x847Cu);
      {uint16_t q=sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u));uint16_t z=(uint16_t)((c->a&0xFFFFu)&q);c->p=(uint8_t)(c->p&~(SC_FLAG_N|SC_FLAG_V|SC_FLAG_Z));if(!z)c->p|=SC_FLAG_Z;if(q&0x8000u)c->p|=SC_FLAG_N;if(q&0x4000u)c->p|=SC_FLAG_V;}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02847Cu:
    if(m==0u&&x==0u&&e==0u){ /* 30 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02847Cu,2u,0x1Bu,0x847Eu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x8499u;}
      if(c->pc!=0x847Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x847Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02847Cu,2u,0x1Bu,0x847Eu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x8499u;}
      if(c->pc!=0x847Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x847Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02847Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02847Eu,3u,0x01u,0x8481u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02847Eu,3u,0x01u,0x8481u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028481u:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028481u,3u,0x40u,0x8484u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028481u,3u,0x40u,0x8484u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028484u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028484u,2u,0x05u,0x8486u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x848Bu;}
      if(c->pc!=0x8486u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8486u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028484u,2u,0x05u,0x8486u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x848Bu;}
      if(c->pc!=0x8486u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8486u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028486u:
    if(m==0u&&x==0u&&e==0u){ /* E6 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028486u,2u,0xE3u,0x8488u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xE3u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028486u,2u,0xE3u,0x8488u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xE3u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028488u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 23 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028488u,3u,0x85u,0x848Bu);
      c->pc=0x8523u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 23 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028488u,3u,0x85u,0x848Bu);
      c->pc=0x8523u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02848Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02848Bu,2u,0x20u,0x848Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02848Bu,2u,0x20u,0x848Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02848Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02848Du,2u,0xC9u,0x848Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02848Du,2u,0xC9u,0x848Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02848Fu:
    if(m==1u&&x==0u&&e==0u){ /* 29 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02848Fu,2u,0x40u,0x8491u);
      sc_v11_op_and(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02848Fu,2u,0x40u,0x8491u);
      sc_v11_op_and(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028491u:
    if(m==1u&&x==0u&&e==0u){ /* D0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028491u,2u,0x25u,0x8493u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x84B8u;}
      if(c->pc!=0x8493u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8493u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028491u,2u,0x25u,0x8493u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x84B8u;}
      if(c->pc!=0x8493u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8493u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028493u:
    if(m==1u&&x==0u&&e==0u){ /* 4C 2A 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028493u,3u,0x9Fu,0x8496u);
      c->pc=0x9F2Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 2A 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028493u,3u,0x9Fu,0x8496u);
      c->pc=0x9F2Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028496u:
    if(m==1u&&x==0u&&e==0u){ /* 4C BB 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028496u,3u,0x87u,0x8499u);
      c->pc=0x87BBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C BB 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028496u,3u,0x87u,0x8499u);
      c->pc=0x87BBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028499u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028499u,2u,0x20u,0x849Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028499u,2u,0x20u,0x849Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02849Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 8A 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02849Bu,3u,0x85u,0x849Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x849Du))return 0;c->pc=0x858Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 8A 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02849Bu,3u,0x85u,0x849Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x849Du))return 0;c->pc=0x858Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02849Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02849Eu,2u,0x4Au,0x84A0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x84EAu;}
      if(c->pc!=0x84A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02849Eu,2u,0x4Au,0x84A0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x84EAu;}
      if(c->pc!=0x84A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02849Eu,2u,0x4Au,0x84A0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x84EAu;}
      if(c->pc!=0x84A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02849Eu,2u,0x4Au,0x84A0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x84EAu;}
      if(c->pc!=0x84A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284A0u:
    if(m==0u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A0u,4u,0x01u,0x84A4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84A3u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A0u,4u,0x01u,0x84A4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84A3u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A0u,4u,0x01u,0x84A4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84A3u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A0u,4u,0x01u,0x84A4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84A3u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284A4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A4u,3u,0xA0u,0x84A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84A6u))return 0;c->pc=0xA047u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 47 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A4u,3u,0xA0u,0x84A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84A6u))return 0;c->pc=0xA047u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 47 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A4u,3u,0xA0u,0x84A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84A6u))return 0;c->pc=0xA047u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 47 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A4u,3u,0xA0u,0x84A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84A6u))return 0;c->pc=0xA047u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284A7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 67 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A7u,3u,0x97u,0x84AAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84A9u))return 0;c->pc=0x9767u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 67 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A7u,3u,0x97u,0x84AAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84A9u))return 0;c->pc=0x9767u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 67 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A7u,3u,0x97u,0x84AAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84A9u))return 0;c->pc=0x9767u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 67 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284A7u,3u,0x97u,0x84AAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84A9u))return 0;c->pc=0x9767u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284AAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E4 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284AAu,3u,0x87u,0x84ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84ACu))return 0;c->pc=0x87E4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E4 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284AAu,3u,0x87u,0x84ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84ACu))return 0;c->pc=0x87E4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E4 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284AAu,3u,0x87u,0x84ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84ACu))return 0;c->pc=0x87E4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E4 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284AAu,3u,0x87u,0x84ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84ACu))return 0;c->pc=0x87E4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284ADu:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284ADu,3u,0xA0u,0x84B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84AFu))return 0;c->pc=0xA01Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1D A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284ADu,3u,0xA0u,0x84B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84AFu))return 0;c->pc=0xA01Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1D A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284ADu,3u,0xA0u,0x84B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84AFu))return 0;c->pc=0xA01Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1D A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284ADu,3u,0xA0u,0x84B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84AFu))return 0;c->pc=0xA01Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284B0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A0 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B0u,3u,0x95u,0x84B3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84B2u))return 0;c->pc=0x95A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A0 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B0u,3u,0x95u,0x84B3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84B2u))return 0;c->pc=0x95A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A0 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B0u,3u,0x95u,0x84B3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84B2u))return 0;c->pc=0x95A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A0 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B0u,3u,0x95u,0x84B3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84B2u))return 0;c->pc=0x95A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284B3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B3u,3u,0x0Du,0x84B6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D51u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B3u,3u,0x0Du,0x84B6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D51u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B3u,3u,0x0Du,0x84B6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D51u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B3u,3u,0x0Du,0x84B6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D51u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284B6u:
    if(m==0u&&x==0u&&e==0u){ /* 80 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B6u,2u,0x32u,0x84B8u);
      if(1){c->pc=0x84EAu;}
      if(c->pc!=0x84B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B6u,2u,0x32u,0x84B8u);
      if(1){c->pc=0x84EAu;}
      if(c->pc!=0x84B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B6u,2u,0x32u,0x84B8u);
      if(1){c->pc=0x84EAu;}
      if(c->pc!=0x84B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B6u,2u,0x32u,0x84B8u);
      if(1){c->pc=0x84EAu;}
      if(c->pc!=0x84B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284B8u:
    if(m==1u&&x==0u&&e==0u){ /* AD 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B8u,3u,0x0Du,0x84BBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284B8u,3u,0x0Du,0x84BBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284BBu:
    if(m==1u&&x==0u&&e==0u){ /* F0 D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284BBu,2u,0xD9u,0x84BDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8496u;}
      if(c->pc!=0x84BDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84BDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284BBu,2u,0xD9u,0x84BDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8496u;}
      if(c->pc!=0x84BDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84BDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284BDu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284BDu,2u,0x20u,0x84BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284BDu,2u,0x20u,0x84BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284BFu:
    if(m==1u&&x==0u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284BFu,3u,0x0Du,0x84C2u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284BFu,3u,0x0Du,0x84C2u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284C2u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284C2u,2u,0x00u,0x84C4u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284C2u,2u,0x00u,0x84C4u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284C4u:
    if(m==1u&&x==0u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284C4u,3u,0xA0u,0x84C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84C6u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284C4u,3u,0xA0u,0x84C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84C6u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284C7u:
    if(m==0u&&x==0u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284C7u,3u,0x0Du,0x84CAu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284C7u,3u,0x0Du,0x84CAu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284C7u,3u,0x0Du,0x84CAu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284C7u,3u,0x0Du,0x84CAu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284CAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CAu,3u,0x20u,0x84CDu);
      sc_v11_op_lda(r,0x2001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CAu,3u,0x20u,0x84CDu);
      sc_v11_op_lda(r,0x2001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CAu,2u,0x01u,0x84CCu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CAu,2u,0x01u,0x84CCu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284CCu:
    if(m==1u&&x==0u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CCu,3u,0xA0u,0x84CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84CEu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CCu,3u,0xA0u,0x84CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x84CEu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284CFu:
    if(m==0u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CFu,4u,0x01u,0x84D3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84D2u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CFu,4u,0x01u,0x84D3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84D2u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CFu,4u,0x01u,0x84D3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84D2u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284CFu,4u,0x01u,0x84D3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84D2u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284D3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D3u,3u,0x0Du,0x84D6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D3u,3u,0x0Du,0x84D6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D3u,3u,0x0Du,0x84D6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D3u,3u,0x0Du,0x84D6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284D6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D6u,3u,0x0Du,0x84D9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D49u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D6u,3u,0x0Du,0x84D9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D49u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D6u,3u,0x0Du,0x84D9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D49u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D6u,3u,0x0Du,0x84D9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D49u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284D9u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D9u,1u,0x18u,0x84DAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D9u,1u,0x18u,0x84DAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D9u,1u,0x18u,0x84DAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284D9u,1u,0x18u,0x84DAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284DAu:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DAu,3u,0x8Du,0x84DDu);
      sc_v11_op_adc(r,0x8D04u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 04 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DAu,3u,0x8Du,0x84DDu);
      sc_v11_op_adc(r,0x8D04u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DAu,2u,0x04u,0x84DCu);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DAu,2u,0x04u,0x84DCu);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284DCu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4B 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DCu,3u,0x0Du,0x84DFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4B 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DCu,3u,0x0Du,0x84DFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284DDu:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DDu,1u,0x4Bu,0x84DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DDu,1u,0x4Bu,0x84DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284DEu:
    if(m==0u&&x==0u&&e==0u){ /* 0D 9C 51 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DEu,3u,0x51u,0x84E1u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x519Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0D 9C 51 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DEu,3u,0x51u,0x84E1u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x519Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284DFu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DFu,3u,0x0Du,0x84E2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D51u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284DFu,3u,0x0Du,0x84E2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D51u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284E1u:
    if(m==0u&&x==0u&&e==0u){ /* 0D 08 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E1u,3u,0x22u,0x84E4u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x2208u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0D 08 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E1u,3u,0x22u,0x84E4u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x2208u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284E2u:
    if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E2u,1u,0x08u,0x84E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E2u,1u,0x08u,0x84E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284E3u:
    if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E3u,4u,0x00u,0x84E7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84E6u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E3u,4u,0x00u,0x84E7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x84E6u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284E4u:
    if(m==0u&&x==0u&&e==0u){ /* A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E4u,3u,0x00u,0x84E7u);
      sc_v11_op_ldy(r,0x0098u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E4u,2u,0x98u,0x84E6u);
      sc_v11_op_ldy(r,0x0098u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284E7u:
    if(m==0u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E7u,2u,0x06u,0x84E9u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E7u,2u,0x06u,0x84E9u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E7u,2u,0x06u,0x84E9u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E7u,2u,0x06u,0x84E9u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284E9u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E9u,1u,0x28u,0x84EAu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E9u,1u,0x28u,0x84EAu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E9u,1u,0x28u,0x84EAu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284E9u,1u,0x28u,0x84EAu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284EAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EAu,1u,0x60u,0x84EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EAu,1u,0x60u,0x84EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EAu,1u,0x60u,0x84EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EAu,1u,0x60u,0x84EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284EBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EBu,2u,0x10u,0x84EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EBu,2u,0x10u,0x84EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EBu,2u,0x10u,0x84EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EBu,2u,0x10u,0x84EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284EDu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EDu,2u,0x20u,0x84EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EDu,2u,0x20u,0x84EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284EFu:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284EFu,3u,0x01u,0x84F2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284F2u:
    if(m==0u&&x==1u&&e==0u){ /* D0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284F2u,2u,0x20u,0x84F4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8514u;}
      if(c->pc!=0x84F4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84F4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284F4u:
    if(m==0u&&x==1u&&e==0u){ /* AD 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284F4u,3u,0x0Du,0x84F7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284F7u:
    if(m==0u&&x==1u&&e==0u){ /* D0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284F7u,2u,0x1Bu,0x84F9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8514u;}
      if(c->pc!=0x84F9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x84F9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284F9u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284F9u,2u,0x20u,0x84FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284FBu:
    if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284FBu,1u,0x8Bu,0x84FCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284FCu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284FCu,2u,0x02u,0x84FEu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284FEu:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284FEu,1u,0x48u,0x84FFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0284FFu:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0284FFu,1u,0xABu,0x8500u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028500u:
    if(m==1u&&x==1u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028500u,3u,0x0Du,0x8503u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028503u:
    if(m==1u&&x==1u&&e==0u){ /* BD 15 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028503u,3u,0x85u,0x8506u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x8515u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028506u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028506u,1u,0xAAu,0x8507u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028507u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028507u,1u,0xABu,0x8508u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028508u:
    if(m==1u&&x==1u&&e==0u){ /* BD DD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028508u,3u,0x0Cu,0x850Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0CDDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02850Bu:
    if(m==1u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02850Bu,2u,0x03u,0x850Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8510u;}
      if(c->pc!=0x850Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x850Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02850Du:
    if(m==1u&&x==1u&&e==0u){ /* 4C E4 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02850Du,3u,0x87u,0x8510u);
      c->pc=0x87E4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028510u:
    if(m==1u&&x==1u&&e==0u){ /* 22 2F C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028510u,4u,0x01u,0x8514u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8513u))return 0;
      c->pbr=0x01u;c->pc=0xC02Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028514u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028514u,1u,0x60u,0x8515u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028514u,1u,0x60u,0x8515u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028514u,1u,0x60u,0x8515u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028514u,1u,0x60u,0x8515u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028523u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028523u,2u,0x20u,0x8525u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028523u,2u,0x20u,0x8525u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028525u:
    if(m==1u&&x==0u&&e==0u){ /* AD 1C 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028525u,3u,0x01u,0x8528u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 1C 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028525u,3u,0x01u,0x8528u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028528u:
    if(m==1u&&x==0u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028528u,2u,0x0Fu,0x852Au);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028528u,2u,0x0Fu,0x852Au);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02852Au:
    if(m==1u&&x==0u&&e==0u){ /* F0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02852Au,2u,0x5Du,0x852Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x852Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x852Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02852Au,2u,0x5Du,0x852Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x852Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x852Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02852Cu:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02852Cu,1u,0x4Au,0x852Du);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02852Cu,1u,0x4Au,0x852Du);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02852Du:
    if(m==1u&&x==0u&&e==0u){ /* B0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02852Du,2u,0x19u,0x852Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8548u;}
      if(c->pc!=0x852Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x852Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02852Du,2u,0x19u,0x852Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8548u;}
      if(c->pc!=0x852Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x852Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02852Fu:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02852Fu,1u,0x4Au,0x8530u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02852Fu,1u,0x4Au,0x8530u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028530u:
    if(m==1u&&x==0u&&e==0u){ /* B0 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028530u,2u,0x29u,0x8532u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x855Bu;}
      if(c->pc!=0x8532u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8532u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028530u,2u,0x29u,0x8532u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x855Bu;}
      if(c->pc!=0x8532u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8532u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028532u:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028532u,1u,0x4Au,0x8533u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028532u,1u,0x4Au,0x8533u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028533u:
    if(m==1u&&x==0u&&e==0u){ /* B0 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028533u,2u,0x39u,0x8535u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x856Eu;}
      if(c->pc!=0x8535u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8535u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028533u,2u,0x39u,0x8535u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x856Eu;}
      if(c->pc!=0x8535u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8535u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028535u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028535u,2u,0x20u,0x8537u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028535u,2u,0x20u,0x8537u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028537u:
    if(m==0u&&x==0u&&e==0u){ /* AD 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028537u,3u,0x0Du,0x853Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D35u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028537u,3u,0x0Du,0x853Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D35u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02853Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 2C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02853Au,3u,0x00u,0x853Du);
      sc_v11_op_compare(r,c->a,0x002Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 2C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02853Au,3u,0x00u,0x853Du);
      sc_v11_op_compare(r,c->a,0x002Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02853Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02853Du,2u,0x4Au,0x853Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x853Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x853Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02853Du,2u,0x4Au,0x853Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x853Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x853Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02853Fu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02853Fu,1u,0x3Au,0x8540u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02853Fu,1u,0x3Au,0x8540u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028540u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028540u,3u,0x0Du,0x8543u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D35u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028540u,3u,0x0Du,0x8543u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D35u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028543u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028543u,3u,0x00u,0x8546u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028543u,3u,0x00u,0x8546u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028546u:
    if(m==0u&&x==0u&&e==0u){ /* 80 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028546u,2u,0x37u,0x8548u);
      if(1){c->pc=0x857Fu;}
      if(c->pc!=0x8548u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8548u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028546u,2u,0x37u,0x8548u);
      if(1){c->pc=0x857Fu;}
      if(c->pc!=0x8548u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8548u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028548u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028548u,2u,0x20u,0x854Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028548u,2u,0x20u,0x854Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02854Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02854Au,3u,0x0Du,0x854Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02854Au,3u,0x0Du,0x854Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02854Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02854Du,3u,0x00u,0x8550u);
      sc_v11_op_compare(r,c->a,0x00A5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02854Du,3u,0x00u,0x8550u);
      sc_v11_op_compare(r,c->a,0x00A5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028550u:
    if(m==0u&&x==0u&&e==0u){ /* F0 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028550u,2u,0x37u,0x8552u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x8552u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8552u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028550u,2u,0x37u,0x8552u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x8552u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8552u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028552u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028552u,1u,0x1Au,0x8553u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028552u,1u,0x1Au,0x8553u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028553u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028553u,3u,0x0Du,0x8556u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028553u,3u,0x0Du,0x8556u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028556u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028556u,3u,0x00u,0x8559u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028556u,3u,0x00u,0x8559u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028559u:
    if(m==0u&&x==0u&&e==0u){ /* 80 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028559u,2u,0x24u,0x855Bu);
      if(1){c->pc=0x857Fu;}
      if(c->pc!=0x855Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x855Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028559u,2u,0x24u,0x855Bu);
      if(1){c->pc=0x857Fu;}
      if(c->pc!=0x855Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x855Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02855Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02855Bu,2u,0x20u,0x855Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02855Bu,2u,0x20u,0x855Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02855Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02855Du,3u,0x0Du,0x8560u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02855Du,3u,0x0Du,0x8560u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028560u:
    if(m==0u&&x==0u&&e==0u){ /* C9 3F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028560u,3u,0x00u,0x8563u);
      sc_v11_op_compare(r,c->a,0x003Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 3F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028560u,3u,0x00u,0x8563u);
      sc_v11_op_compare(r,c->a,0x003Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028563u:
    if(m==0u&&x==0u&&e==0u){ /* F0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028563u,2u,0x24u,0x8565u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x8565u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8565u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028563u,2u,0x24u,0x8565u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x8565u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8565u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028565u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028565u,1u,0x3Au,0x8566u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028565u,1u,0x3Au,0x8566u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028566u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028566u,3u,0x0Du,0x8569u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028566u,3u,0x0Du,0x8569u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028569u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028569u,3u,0x00u,0x856Cu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028569u,3u,0x00u,0x856Cu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02856Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02856Cu,2u,0x11u,0x856Eu);
      if(1){c->pc=0x857Fu;}
      if(c->pc!=0x856Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x856Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02856Cu,2u,0x11u,0x856Eu);
      if(1){c->pc=0x857Fu;}
      if(c->pc!=0x856Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x856Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02856Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02856Eu,2u,0x20u,0x8570u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02856Eu,2u,0x20u,0x8570u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028570u:
    if(m==0u&&x==0u&&e==0u){ /* AD 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028570u,3u,0x0Du,0x8573u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D35u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028570u,3u,0x0Du,0x8573u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D35u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028573u:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028573u,3u,0x00u,0x8576u);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028573u,3u,0x00u,0x8576u);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028576u:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028576u,2u,0x11u,0x8578u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x8578u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8578u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028576u,2u,0x11u,0x8578u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8589u;}
      if(c->pc!=0x8578u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8578u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028578u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028578u,1u,0x1Au,0x8579u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028578u,1u,0x1Au,0x8579u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028579u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028579u,3u,0x0Du,0x857Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D35u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028579u,3u,0x0Du,0x857Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D35u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02857Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02857Cu,3u,0x00u,0x857Fu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02857Cu,3u,0x00u,0x857Fu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02857Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02857Fu,3u,0x01u,0x8582u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x019Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 9D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02857Fu,3u,0x01u,0x8582u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x019Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028582u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028582u,2u,0x20u,0x8584u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028582u,2u,0x20u,0x8584u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028584u:
    if(m==0u&&x==0u&&e==0u){ /* A9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028584u,3u,0x00u,0x8587u);
      sc_v11_op_lda(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028584u,3u,0x00u,0x8587u);
      sc_v11_op_lda(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028587u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028587u,2u,0x00u,0x8589u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8589u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028587u,2u,0x00u,0x8589u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8589u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028589u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028589u,1u,0x60u,0x858Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028589u,1u,0x60u,0x858Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028589u,1u,0x60u,0x858Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028589u,1u,0x60u,0x858Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02858Au:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02858Au,2u,0x30u,0x858Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02858Au,2u,0x30u,0x858Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02858Cu:
    if(m==1u&&x==1u&&e==0u){ /* AD 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02858Cu,3u,0x0Du,0x858Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02858Fu:
    if(m==1u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02858Fu,2u,0x03u,0x8591u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8594u;}
      if(c->pc!=0x8591u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8591u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028591u:
    if(m==1u&&x==1u&&e==0u){ /* 4C 03 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028591u,3u,0x86u,0x8594u);
      c->pc=0x8603u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028594u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028594u,2u,0x00u,0x8596u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028596u:
    if(m==1u&&x==1u&&e==0u){ /* 20 69 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028596u,3u,0x87u,0x8599u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8598u))return 0;c->pc=0x8769u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028599u:
    if(m==0u&&x==0u&&e==0u){ /* 90 65 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028599u,2u,0x65u,0x859Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8600u;}
      if(c->pc!=0x859Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x859Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 65 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028599u,2u,0x65u,0x859Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8600u;}
      if(c->pc!=0x859Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x859Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 65 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028599u,2u,0x65u,0x859Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8600u;}
      if(c->pc!=0x859Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x859Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 65 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028599u,2u,0x65u,0x859Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8600u;}
      if(c->pc!=0x859Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x859Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02859Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Bu,2u,0x20u,0x859Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Bu,2u,0x20u,0x859Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Bu,2u,0x20u,0x859Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Bu,2u,0x20u,0x859Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02859Du:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Du,1u,0x48u,0x859Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Du,1u,0x48u,0x859Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02859Eu:
    if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Eu,1u,0x08u,0x859Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Eu,1u,0x08u,0x859Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02859Fu:
    if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Fu,4u,0x00u,0x85A3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x85A2u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02859Fu,4u,0x00u,0x85A3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x85A2u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285A3u:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A3u,2u,0x01u,0x85A5u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x85A5u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A3u,2u,0x01u,0x85A5u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x85A5u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A3u,2u,0x01u,0x85A5u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x85A5u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A3u,2u,0x01u,0x85A5u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x85A5u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285A5u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A5u,1u,0x28u,0x85A6u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A5u,1u,0x28u,0x85A6u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A5u,1u,0x28u,0x85A6u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A5u,1u,0x28u,0x85A6u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285A6u:
    if(m==0u&&x==0u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A6u,3u,0x0Du,0x85A9u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A6u,3u,0x0Du,0x85A9u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A6u,3u,0x0Du,0x85A9u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A6u,3u,0x0Du,0x85A9u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285A9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A9u,3u,0x20u,0x85ACu);
      sc_v11_op_lda(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A9u,3u,0x20u,0x85ACu);
      sc_v11_op_lda(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A9u,2u,0x00u,0x85ABu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285A9u,2u,0x00u,0x85ABu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285ABu:
    if(m==1u&&x==0u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285ABu,3u,0xA0u,0x85AEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x85ADu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285ABu,3u,0xA0u,0x85AEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x85ADu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285AEu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285AEu,1u,0x68u,0x85AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285AEu,1u,0x68u,0x85AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285AEu,1u,0x68u,0x85AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285AEu,1u,0x68u,0x85AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285AFu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285AFu,1u,0x48u,0x85B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285AFu,1u,0x48u,0x85B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285AFu,1u,0x48u,0x85B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285AFu,1u,0x48u,0x85B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285B0u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B0u,1u,0xAAu,0x85B1u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B0u,1u,0xAAu,0x85B1u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B0u,1u,0xAAu,0x85B1u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B0u,1u,0xAAu,0x85B1u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285B1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B1u,3u,0x20u,0x85B4u);
      sc_v11_op_lda(r,0x2001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B1u,3u,0x20u,0x85B4u);
      sc_v11_op_lda(r,0x2001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B1u,2u,0x01u,0x85B3u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B1u,2u,0x01u,0x85B3u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285B3u:
    if(m==1u&&x==0u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B3u,3u,0xA0u,0x85B6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x85B5u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B3u,3u,0xA0u,0x85B6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x85B5u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285B6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B6u,2u,0x20u,0x85B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B6u,2u,0x20u,0x85B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B6u,2u,0x20u,0x85B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B6u,2u,0x20u,0x85B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285B8u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B8u,1u,0x68u,0x85B9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B8u,1u,0x68u,0x85B9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285B9u:
    if(m==1u&&x==0u&&e==0u){ /* CD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B9u,3u,0x0Du,0x85BCu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285B9u,3u,0x0Du,0x85BCu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285BCu:
    if(m==1u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285BCu,2u,0x0Cu,0x85BEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x85CAu;}
      if(c->pc!=0x85BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285BCu,2u,0x0Cu,0x85BEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x85CAu;}
      if(c->pc!=0x85BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285BEu:
    if(m==1u&&x==0u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285BEu,2u,0x00u,0x85C0u);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285BEu,2u,0x00u,0x85C0u);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285C0u:
    if(m==1u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C0u,2u,0x08u,0x85C2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x85CAu;}
      if(c->pc!=0x85C2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85C2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C0u,2u,0x08u,0x85C2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x85CAu;}
      if(c->pc!=0x85C2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85C2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285C2u:
    if(m==1u&&x==0u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C2u,2u,0x06u,0x85C4u);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C2u,2u,0x06u,0x85C4u);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285C4u:
    if(m==1u&&x==0u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C4u,2u,0x04u,0x85C6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x85CAu;}
      if(c->pc!=0x85C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C4u,2u,0x04u,0x85C6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x85CAu;}
      if(c->pc!=0x85C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285C6u:
    if(m==1u&&x==0u&&e==0u){ /* C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C6u,2u,0x0Cu,0x85C8u);
      sc_v11_op_compare(r,c->a,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C6u,2u,0x0Cu,0x85C8u);
      sc_v11_op_compare(r,c->a,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285C8u:
    if(m==1u&&x==0u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C8u,2u,0x12u,0x85CAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x85DCu;}
      if(c->pc!=0x85CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285C8u,2u,0x12u,0x85CAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x85DCu;}
      if(c->pc!=0x85CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285CAu:
    if(m==1u&&x==0u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285CAu,3u,0x0Du,0x85CDu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285CAu,3u,0x0Du,0x85CDu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285CDu:
    if(m==1u&&x==0u&&e==0u){ /* 8E 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285CDu,3u,0x0Du,0x85D0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D4Du),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285CDu,3u,0x0Du,0x85D0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Du),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285D0u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D0u,3u,0x0Du,0x85D3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D49u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D0u,3u,0x0Du,0x85D3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D49u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285D3u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D3u,1u,0x18u,0x85D4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D3u,1u,0x18u,0x85D4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285D4u:
    if(m==1u&&x==0u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D4u,2u,0x04u,0x85D6u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D4u,2u,0x04u,0x85D6u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285D6u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4B 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D6u,3u,0x0Du,0x85D9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4B 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D6u,3u,0x0Du,0x85D9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285D9u:
    if(m==1u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D9u,3u,0x0Du,0x85DCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285D9u,3u,0x0Du,0x85DCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285DCu:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285DCu,1u,0x0Au,0x85DDu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285DCu,1u,0x0Au,0x85DDu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285DDu:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285DDu,1u,0xAAu,0x85DEu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285DDu,1u,0xAAu,0x85DEu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285DEu:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285DEu,1u,0x8Bu,0x85DFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285DEu,1u,0x8Bu,0x85DFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285DFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285DFu,2u,0x02u,0x85E1u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285DFu,2u,0x02u,0x85E1u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285E1u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E1u,1u,0x48u,0x85E2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E1u,1u,0x48u,0x85E2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285E2u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E2u,1u,0xABu,0x85E3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E2u,1u,0xABu,0x85E3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285E3u:
    if(m==1u&&x==0u&&e==0u){ /* BD A4 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E3u,3u,0x86u,0x85E6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x86A4u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD A4 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E3u,3u,0x86u,0x85E6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x86A4u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285E6u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E6u,1u,0xABu,0x85E7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E6u,1u,0xABu,0x85E7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285E7u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E7u,3u,0x0Du,0x85EAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D51u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285E7u,3u,0x0Du,0x85EAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D51u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285EAu:
    if(m==1u&&x==0u&&e==0u){ /* AD 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285EAu,3u,0x0Du,0x85EDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 51 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285EAu,3u,0x0Du,0x85EDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285EDu:
    if(m==1u&&x==0u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285EDu,2u,0x13u,0x85EFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8602u;}
      if(c->pc!=0x85EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285EDu,2u,0x13u,0x85EFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8602u;}
      if(c->pc!=0x85EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285EFu:
    if(m==1u&&x==0u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285EFu,2u,0x01u,0x85F1u);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285EFu,2u,0x01u,0x85F1u);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285F1u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285F1u,2u,0x03u,0x85F3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x85F6u;}
      if(c->pc!=0x85F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285F1u,2u,0x03u,0x85F3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x85F6u;}
      if(c->pc!=0x85F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285F3u:
    if(m==1u&&x==0u&&e==0u){ /* 4C C0 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285F3u,3u,0x86u,0x85F6u);
      c->pc=0x86C0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C C0 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285F3u,3u,0x86u,0x85F6u);
      c->pc=0x86C0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285F6u:
    if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285F6u,2u,0x02u,0x85F8u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285F6u,2u,0x02u,0x85F8u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285F8u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285F8u,2u,0x03u,0x85FAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x85FDu;}
      if(c->pc!=0x85FAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85FAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285F8u,2u,0x03u,0x85FAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x85FDu;}
      if(c->pc!=0x85FAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x85FAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285FAu:
    if(m==1u&&x==0u&&e==0u){ /* 4C 03 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285FAu,3u,0x87u,0x85FDu);
      c->pc=0x8703u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 03 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285FAu,3u,0x87u,0x85FDu);
      c->pc=0x8703u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0285FDu:
    if(m==1u&&x==0u&&e==0u){ /* 4C 36 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285FDu,3u,0x87u,0x8600u);
      c->pc=0x8736u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 36 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0285FDu,3u,0x87u,0x8600u);
      c->pc=0x8736u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028600u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028600u,3u,0x60u,0x8603u);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028600u,3u,0x60u,0x8603u);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028600u,2u,0x80u,0x8602u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028600u,2u,0x80u,0x8602u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028602u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028602u,1u,0x60u,0x8603u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028602u,1u,0x60u,0x8603u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028603u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028603u,2u,0x30u,0x8605u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028603u,2u,0x30u,0x8605u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028603u,2u,0x30u,0x8605u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028605u:
    if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028605u,1u,0x8Bu,0x8606u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028606u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028606u,2u,0x02u,0x8608u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028608u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028608u,1u,0x48u,0x8609u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028609u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028609u,1u,0xABu,0x860Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02860Au:
    if(m==1u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02860Au,3u,0x0Du,0x860Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02860Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02860Du,1u,0x0Au,0x860Eu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02860Eu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02860Eu,1u,0xAAu,0x860Fu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02860Fu:
    if(m==1u&&x==1u&&e==0u){ /* BD A4 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02860Fu,3u,0x86u,0x8612u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x86A4u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028612u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028612u,1u,0xAAu,0x8613u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028613u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028613u,1u,0xABu,0x8614u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028614u:
    if(m==1u&&x==1u&&e==0u){ /* 20 69 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028614u,3u,0x87u,0x8617u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8616u))return 0;c->pc=0x8769u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028617u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028617u,2u,0x03u,0x8619u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x861Cu;}
      if(c->pc!=0x8619u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8619u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028617u,2u,0x03u,0x8619u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x861Cu;}
      if(c->pc!=0x8619u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8619u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028617u,2u,0x03u,0x8619u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x861Cu;}
      if(c->pc!=0x8619u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8619u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028617u,2u,0x03u,0x8619u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x861Cu;}
      if(c->pc!=0x8619u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8619u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028619u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028619u,3u,0x60u,0x861Cu);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028619u,3u,0x60u,0x861Cu);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028619u,2u,0x80u,0x861Bu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028619u,2u,0x80u,0x861Bu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02861Bu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02861Bu,1u,0x60u,0x861Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02861Bu,1u,0x60u,0x861Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02861Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02861Cu,2u,0x30u,0x861Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02861Cu,2u,0x30u,0x861Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02861Cu,2u,0x30u,0x861Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02861Cu,2u,0x30u,0x861Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02861Eu:
    if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02861Eu,1u,0xDAu,0x861Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02861Fu:
    if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02861Fu,1u,0x08u,0x8620u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028620u:
    if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028620u,4u,0x00u,0x8624u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8623u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028624u:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028624u,2u,0x01u,0x8626u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8626u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028624u,2u,0x01u,0x8626u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8626u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028624u,2u,0x01u,0x8626u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8626u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028624u,2u,0x01u,0x8626u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8626u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028626u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028626u,1u,0x28u,0x8627u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028626u,1u,0x28u,0x8627u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028626u,1u,0x28u,0x8627u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028626u,1u,0x28u,0x8627u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028627u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028627u,1u,0x68u,0x8628u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028627u,1u,0x68u,0x8628u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028627u,1u,0x68u,0x8628u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028627u,1u,0x68u,0x8628u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028628u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028628u,1u,0x18u,0x8629u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028628u,1u,0x18u,0x8629u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028628u,1u,0x18u,0x8629u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028628u,1u,0x18u,0x8629u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028629u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028629u,3u,0x0Du,0x862Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028629u,3u,0x0Du,0x862Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028629u,3u,0x0Du,0x862Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028629u,3u,0x0Du,0x862Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02862Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02862Cu,3u,0x0Du,0x862Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D49u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02862Cu,3u,0x0Du,0x862Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D49u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02862Cu,3u,0x0Du,0x862Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D49u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02862Cu,3u,0x0Du,0x862Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D49u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02862Fu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02862Fu,1u,0x18u,0x8630u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02862Fu,1u,0x18u,0x8630u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02862Fu,1u,0x18u,0x8630u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02862Fu,1u,0x18u,0x8630u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028630u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028630u,3u,0x8Du,0x8633u);
      sc_v11_op_adc(r,0x8D04u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 04 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028630u,3u,0x8Du,0x8633u);
      sc_v11_op_adc(r,0x8D04u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028630u,2u,0x04u,0x8632u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028630u,2u,0x04u,0x8632u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028632u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 4B 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028632u,3u,0x0Du,0x8635u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4B 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028632u,3u,0x0Du,0x8635u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D4Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028633u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028633u,1u,0x4Bu,0x8634u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028633u,1u,0x4Bu,0x8634u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028634u:
    if(m==0u&&x==0u&&e==0u){ /* 0D E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028634u,3u,0x30u,0x8637u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x30E2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0D E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028634u,3u,0x30u,0x8637u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x30E2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028635u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028635u,2u,0x30u,0x8637u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028635u,2u,0x30u,0x8637u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028637u:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028637u,3u,0x0Du,0x863Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028637u,3u,0x0Du,0x863Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028637u,3u,0x0Du,0x863Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02863Au:
    if(m==0u&&x==0u&&e==0u){ /* CD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Au,3u,0x0Du,0x863Du);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Au,3u,0x0Du,0x863Du);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Au,3u,0x0Du,0x863Du);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02863Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Du,2u,0x54u,0x863Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8693u;}
      if(c->pc!=0x863Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x863Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Du,2u,0x54u,0x863Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8693u;}
      if(c->pc!=0x863Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x863Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Du,2u,0x54u,0x863Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8693u;}
      if(c->pc!=0x863Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x863Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02863Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Fu,1u,0x8Bu,0x8640u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Fu,1u,0x8Bu,0x8640u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02863Fu,1u,0x8Bu,0x8640u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028640u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028640u,3u,0x48u,0x8643u);
      sc_v11_op_lda(r,0x4802u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028640u,3u,0x48u,0x8643u);
      sc_v11_op_lda(r,0x4802u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028640u,2u,0x02u,0x8642u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028642u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028642u,1u,0x48u,0x8643u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028643u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028643u,1u,0xABu,0x8644u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028643u,1u,0xABu,0x8644u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028643u,1u,0xABu,0x8644u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028644u:
    if(m==0u&&x==0u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028644u,3u,0x0Du,0x8647u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028644u,3u,0x0Du,0x8647u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028644u,3u,0x0Du,0x8647u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028647u:
    if(m==0u&&x==0u&&e==0u){ /* BD 96 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028647u,3u,0x86u,0x864Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8696u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BD 96 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028647u,3u,0x86u,0x864Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8696u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD 96 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028647u,3u,0x86u,0x864Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x8696u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02864Au:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Au,1u,0xAAu,0x864Bu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Au,1u,0xAAu,0x864Bu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Au,1u,0xAAu,0x864Bu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02864Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Bu,3u,0xABu,0x864Eu);
      sc_v11_op_lda(r,0xAB01u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Bu,3u,0xABu,0x864Eu);
      sc_v11_op_lda(r,0xAB01u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Bu,2u,0x01u,0x864Du);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02864Du:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Du,1u,0xABu,0x864Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02864Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Eu,3u,0xA0u,0x8651u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8650u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Eu,3u,0xA0u,0x8651u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8650u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02864Eu,3u,0xA0u,0x8651u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8650u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028651u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028651u,3u,0xCDu,0x8654u);
      sc_v11_op_lda(r,0xCD03u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028651u,3u,0xCDu,0x8654u);
      sc_v11_op_lda(r,0xCD03u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028651u,2u,0x03u,0x8653u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028651u,2u,0x03u,0x8653u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028653u:
    if(m==1u&&x==0u&&e==0u){ /* CD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028653u,3u,0x0Du,0x8656u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028653u,3u,0x0Du,0x8656u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028656u:
    if(m==1u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028656u,2u,0x07u,0x8658u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x865Fu;}
      if(c->pc!=0x8658u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8658u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028656u,2u,0x07u,0x8658u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x865Fu;}
      if(c->pc!=0x8658u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8658u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028658u:
    if(m==1u&&x==0u&&e==0u){ /* CD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028658u,3u,0x0Du,0x865Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028658u,3u,0x0Du,0x865Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02865Bu:
    if(m==1u&&x==0u&&e==0u){ /* B0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02865Bu,2u,0x24u,0x865Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8681u;}
      if(c->pc!=0x865Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x865Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02865Bu,2u,0x24u,0x865Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8681u;}
      if(c->pc!=0x865Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x865Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02865Du:
    if(m==1u&&x==0u&&e==0u){ /* 90 34 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02865Du,2u,0x34u,0x865Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8693u;}
      if(c->pc!=0x865Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x865Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 34 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02865Du,2u,0x34u,0x865Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8693u;}
      if(c->pc!=0x865Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x865Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02865Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02865Fu,3u,0x0Du,0x8662u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02865Fu,3u,0x0Du,0x8662u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028662u:
    if(m==1u&&x==0u&&e==0u){ /* 29 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028662u,2u,0x06u,0x8664u);
      sc_v11_op_and(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028662u,2u,0x06u,0x8664u);
      sc_v11_op_and(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028664u:
    if(m==1u&&x==0u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028664u,2u,0x06u,0x8666u);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028664u,2u,0x06u,0x8666u);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028666u:
    if(m==1u&&x==0u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028666u,2u,0x0Bu,0x8668u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8673u;}
      if(c->pc!=0x8668u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8668u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028666u,2u,0x0Bu,0x8668u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8673u;}
      if(c->pc!=0x8668u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8668u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028668u:
    if(m==1u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028668u,3u,0x0Du,0x866Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028668u,3u,0x0Du,0x866Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02866Bu:
    if(m==1u&&x==0u&&e==0u){ /* 29 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02866Bu,2u,0x06u,0x866Du);
      sc_v11_op_and(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02866Bu,2u,0x06u,0x866Du);
      sc_v11_op_and(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02866Du:
    if(m==1u&&x==0u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02866Du,2u,0x06u,0x866Fu);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02866Du,2u,0x06u,0x866Fu);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02866Fu:
    if(m==1u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02866Fu,2u,0x10u,0x8671u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8681u;}
      if(c->pc!=0x8671u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8671u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02866Fu,2u,0x10u,0x8671u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8681u;}
      if(c->pc!=0x8671u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8671u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028671u:
    if(m==1u&&x==0u&&e==0u){ /* D0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028671u,2u,0x20u,0x8673u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8693u;}
      if(c->pc!=0x8673u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8673u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028671u,2u,0x20u,0x8673u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8693u;}
      if(c->pc!=0x8673u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8673u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028673u:
    if(m==1u&&x==0u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028673u,3u,0x0Du,0x8676u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028673u,3u,0x0Du,0x8676u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028676u:
    if(m==1u&&x==0u&&e==0u){ /* C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028676u,2u,0x0Cu,0x8678u);
      sc_v11_op_compare(r,c->a,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028676u,2u,0x0Cu,0x8678u);
      sc_v11_op_compare(r,c->a,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028678u:
    if(m==1u&&x==0u&&e==0u){ /* 90 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028678u,2u,0x19u,0x867Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8693u;}
      if(c->pc!=0x867Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x867Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028678u,2u,0x19u,0x867Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8693u;}
      if(c->pc!=0x867Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x867Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02867Au:
    if(m==1u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02867Au,3u,0x0Du,0x867Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02867Au,3u,0x0Du,0x867Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02867Du:
    if(m==1u&&x==0u&&e==0u){ /* C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02867Du,2u,0x0Cu,0x867Fu);
      sc_v11_op_compare(r,c->a,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02867Du,2u,0x0Cu,0x867Fu);
      sc_v11_op_compare(r,c->a,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02867Fu:
    if(m==1u&&x==0u&&e==0u){ /* 90 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02867Fu,2u,0x12u,0x8681u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8693u;}
      if(c->pc!=0x8681u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8681u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02867Fu,2u,0x12u,0x8681u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8693u;}
      if(c->pc!=0x8681u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8681u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028681u:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028681u,1u,0x8Bu,0x8682u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028681u,1u,0x8Bu,0x8682u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028682u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028682u,2u,0x02u,0x8684u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028682u,2u,0x02u,0x8684u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028684u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028684u,1u,0x48u,0x8685u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028684u,1u,0x48u,0x8685u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028685u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028685u,1u,0xABu,0x8686u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028685u,1u,0xABu,0x8686u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028686u:
    if(m==1u&&x==0u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028686u,3u,0x0Du,0x8689u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028686u,3u,0x0Du,0x8689u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028689u:
    if(m==1u&&x==0u&&e==0u){ /* BD 96 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028689u,3u,0x86u,0x868Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x8696u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD 96 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028689u,3u,0x86u,0x868Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x8696u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02868Cu:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02868Cu,1u,0xAAu,0x868Du);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02868Cu,1u,0xAAu,0x868Du);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02868Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02868Du,2u,0x00u,0x868Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02868Du,2u,0x00u,0x868Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02868Fu:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02868Fu,1u,0xABu,0x8690u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02868Fu,1u,0xABu,0x8690u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028690u:
    if(m==1u&&x==0u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028690u,3u,0xA0u,0x8693u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8692u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028690u,3u,0xA0u,0x8693u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8692u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028693u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028693u,3u,0x60u,0x8696u);
      sc_v11_op_lda(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028693u,3u,0x60u,0x8696u);
      sc_v11_op_lda(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028693u,2u,0x00u,0x8695u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028693u,2u,0x00u,0x8695u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028695u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028695u,1u,0x60u,0x8696u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028695u,1u,0x60u,0x8696u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028696u:
    if(m==0u&&x==0u&&e==0u){ /* 0E 0F 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028696u,3u,0x10u,0x8699u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x100Fu),16u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0E 0F 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028696u,3u,0x10u,0x8699u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x100Fu),16u,0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286C0u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286C0u,2u,0x30u,0x86C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286C0u,2u,0x30u,0x86C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286C2u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286C2u,2u,0x00u,0x86C4u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286C4u:
    if(m==1u&&x==1u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286C4u,3u,0x0Du,0x86C7u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286C7u:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286C7u,2u,0x01u,0x86C9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x86CAu;}
      if(c->pc!=0x86C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286C9u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286C9u,1u,0x1Au,0x86CAu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286CAu:
    if(m==1u&&x==1u&&e==0u){ /* A2 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286CAu,2u,0x0Eu,0x86CCu);
      sc_v11_op_ldx(r,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286CCu:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286CCu,3u,0xA0u,0x86CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x86CEu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286CFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286CFu,3u,0xACu,0x86D2u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286CFu,3u,0xACu,0x86D2u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286CFu,2u,0x00u,0x86D1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286CFu,2u,0x00u,0x86D1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286D1u:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286D1u,3u,0x0Du,0x86D4u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286D1u,3u,0x0Du,0x86D4u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286D4u:
    if(m==1u&&x==0u&&e==0u){ /* C0 01 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286D4u,3u,0xD0u,0x86D7u);
      sc_v11_op_compare(r,c->y,0xD001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286D4u,2u,0x01u,0x86D6u);
      sc_v11_op_compare(r,c->y,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286D6u:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286D6u,2u,0x01u,0x86D8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x86D9u;}
      if(c->pc!=0x86D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286D8u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286D8u,1u,0x1Au,0x86D9u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286D9u:
    if(m==1u&&x==1u&&e==0u){ /* A2 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286D9u,2u,0x0Fu,0x86DBu);
      sc_v11_op_ldx(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286DBu:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286DBu,3u,0xA0u,0x86DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x86DDu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286DEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286DEu,3u,0xACu,0x86E1u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286DEu,3u,0xACu,0x86E1u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286DEu,2u,0x00u,0x86E0u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286DEu,2u,0x00u,0x86E0u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286E0u:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286E0u,3u,0x0Du,0x86E3u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286E0u,3u,0x0Du,0x86E3u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286E3u:
    if(m==1u&&x==0u&&e==0u){ /* C0 02 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286E3u,3u,0xD0u,0x86E6u);
      sc_v11_op_compare(r,c->y,0xD002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286E3u,2u,0x02u,0x86E5u);
      sc_v11_op_compare(r,c->y,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286E5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286E5u,2u,0x01u,0x86E7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x86E8u;}
      if(c->pc!=0x86E7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86E7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286E7u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286E7u,1u,0x1Au,0x86E8u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286E8u:
    if(m==1u&&x==1u&&e==0u){ /* A2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286E8u,2u,0x10u,0x86EAu);
      sc_v11_op_ldx(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286EAu:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286EAu,3u,0xA0u,0x86EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x86ECu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286EDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286EDu,3u,0xACu,0x86F0u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286EDu,3u,0xACu,0x86F0u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286EDu,2u,0x00u,0x86EFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286EDu,2u,0x00u,0x86EFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286EFu:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286EFu,3u,0x0Du,0x86F2u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286EFu,3u,0x0Du,0x86F2u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286F2u:
    if(m==1u&&x==0u&&e==0u){ /* C0 03 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286F2u,3u,0xD0u,0x86F5u);
      sc_v11_op_compare(r,c->y,0xD003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286F2u,2u,0x03u,0x86F4u);
      sc_v11_op_compare(r,c->y,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286F4u:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286F4u,2u,0x01u,0x86F6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x86F7u;}
      if(c->pc!=0x86F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x86F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286F6u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286F6u,1u,0x1Au,0x86F7u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286F7u:
    if(m==1u&&x==1u&&e==0u){ /* A2 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286F7u,2u,0x11u,0x86F9u);
      sc_v11_op_ldx(r,0x0011u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286F9u:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286F9u,3u,0xA0u,0x86FCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x86FBu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0286FCu:
    if(m==0u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286FCu,4u,0x01u,0x8700u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x86FFu))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286FCu,4u,0x01u,0x8700u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x86FFu))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286FCu,4u,0x01u,0x8700u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x86FFu))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0286FCu,4u,0x01u,0x8700u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x86FFu))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028700u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028700u,3u,0x60u,0x8703u);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028700u,3u,0x60u,0x8703u);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028700u,2u,0x80u,0x8702u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028700u,2u,0x80u,0x8702u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028702u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028702u,1u,0x60u,0x8703u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028702u,1u,0x60u,0x8703u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028703u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028703u,3u,0xACu,0x8706u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028703u,3u,0xACu,0x8706u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028703u,2u,0x00u,0x8705u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028703u,2u,0x00u,0x8705u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028705u:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028705u,3u,0x0Du,0x8708u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028705u,3u,0x0Du,0x8708u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028708u:
    if(m==1u&&x==0u&&e==0u){ /* C0 06 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028708u,3u,0xD0u,0x870Bu);
      sc_v11_op_compare(r,c->y,0xD006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028708u,2u,0x06u,0x870Au);
      sc_v11_op_compare(r,c->y,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02870Au:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02870Au,2u,0x01u,0x870Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x870Du;}
      if(c->pc!=0x870Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x870Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02870Cu:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02870Cu,1u,0x1Au,0x870Du);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02870Du:
    if(m==1u&&x==1u&&e==0u){ /* A2 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02870Du,2u,0x12u,0x870Fu);
      sc_v11_op_ldx(r,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02870Fu:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02870Fu,3u,0xA0u,0x8712u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8711u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028712u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028712u,3u,0xACu,0x8715u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028712u,3u,0xACu,0x8715u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028712u,2u,0x00u,0x8714u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028712u,2u,0x00u,0x8714u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028714u:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028714u,3u,0x0Du,0x8717u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028714u,3u,0x0Du,0x8717u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028717u:
    if(m==1u&&x==0u&&e==0u){ /* C0 07 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028717u,3u,0xD0u,0x871Au);
      sc_v11_op_compare(r,c->y,0xD007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028717u,2u,0x07u,0x8719u);
      sc_v11_op_compare(r,c->y,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028719u:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028719u,2u,0x01u,0x871Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x871Cu;}
      if(c->pc!=0x871Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x871Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02871Bu:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02871Bu,1u,0x1Au,0x871Cu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02871Cu:
    if(m==1u&&x==1u&&e==0u){ /* A2 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02871Cu,2u,0x13u,0x871Eu);
      sc_v11_op_ldx(r,0x0013u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02871Eu:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02871Eu,3u,0xA0u,0x8721u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8720u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028721u:
    if(m==0u&&x==0u&&e==0u){ /* A2 14 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028721u,3u,0xA9u,0x8724u);
      sc_v11_op_ldx(r,0xA914u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028721u,2u,0x14u,0x8723u);
      sc_v11_op_ldx(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 14 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028721u,3u,0xA9u,0x8724u);
      sc_v11_op_ldx(r,0xA914u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028721u,2u,0x14u,0x8723u);
      sc_v11_op_ldx(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028723u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028723u,3u,0x20u,0x8726u);
      sc_v11_op_lda(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028723u,2u,0x00u,0x8725u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028725u:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028725u,3u,0xA0u,0x8728u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8727u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028728u:
    if(m==0u&&x==0u&&e==0u){ /* A2 15 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028728u,3u,0xA9u,0x872Bu);
      sc_v11_op_ldx(r,0xA915u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028728u,2u,0x15u,0x872Au);
      sc_v11_op_ldx(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 15 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028728u,3u,0xA9u,0x872Bu);
      sc_v11_op_ldx(r,0xA915u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028728u,2u,0x15u,0x872Au);
      sc_v11_op_ldx(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02872Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02872Au,3u,0x20u,0x872Du);
      sc_v11_op_lda(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02872Au,2u,0x00u,0x872Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02872Cu:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02872Cu,3u,0xA0u,0x872Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x872Eu))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02872Fu:
    if(m==0u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02872Fu,4u,0x01u,0x8733u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8732u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02872Fu,4u,0x01u,0x8733u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8732u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02872Fu,4u,0x01u,0x8733u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8732u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02872Fu,4u,0x01u,0x8733u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8732u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028733u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028733u,3u,0x60u,0x8736u);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028733u,3u,0x60u,0x8736u);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028733u,2u,0x80u,0x8735u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028733u,2u,0x80u,0x8735u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028735u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028735u,1u,0x60u,0x8736u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028735u,1u,0x60u,0x8736u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028736u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028736u,3u,0xACu,0x8739u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028736u,3u,0xACu,0x8739u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028736u,2u,0x00u,0x8738u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028736u,2u,0x00u,0x8738u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028738u:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028738u,3u,0x0Du,0x873Bu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028738u,3u,0x0Du,0x873Bu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02873Bu:
    if(m==1u&&x==0u&&e==0u){ /* C0 0C D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02873Bu,3u,0xD0u,0x873Eu);
      sc_v11_op_compare(r,c->y,0xD00Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02873Bu,2u,0x0Cu,0x873Du);
      sc_v11_op_compare(r,c->y,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02873Du:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02873Du,2u,0x01u,0x873Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8740u;}
      if(c->pc!=0x873Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x873Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02873Fu:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02873Fu,1u,0x1Au,0x8740u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028740u:
    if(m==1u&&x==1u&&e==0u){ /* A2 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028740u,2u,0x16u,0x8742u);
      sc_v11_op_ldx(r,0x0016u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028742u:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028742u,3u,0xA0u,0x8745u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8744u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028745u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028745u,3u,0xACu,0x8748u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028745u,3u,0xACu,0x8748u);
      sc_v11_op_lda(r,0xAC00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028745u,2u,0x00u,0x8747u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028745u,2u,0x00u,0x8747u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028747u:
    if(m==1u&&x==0u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028747u,3u,0x0Du,0x874Au);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D4Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AC 4D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028747u,3u,0x0Du,0x874Au);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D4Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02874Au:
    if(m==1u&&x==0u&&e==0u){ /* C0 0D D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02874Au,3u,0xD0u,0x874Du);
      sc_v11_op_compare(r,c->y,0xD00Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02874Au,2u,0x0Du,0x874Cu);
      sc_v11_op_compare(r,c->y,0x000Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02874Cu:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02874Cu,2u,0x01u,0x874Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x874Fu;}
      if(c->pc!=0x874Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x874Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02874Eu:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02874Eu,1u,0x1Au,0x874Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02874Fu:
    if(m==1u&&x==1u&&e==0u){ /* A2 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02874Fu,2u,0x17u,0x8751u);
      sc_v11_op_ldx(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028751u:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028751u,3u,0xA0u,0x8754u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8753u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028754u:
    if(m==0u&&x==0u&&e==0u){ /* A2 14 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028754u,3u,0xA9u,0x8757u);
      sc_v11_op_ldx(r,0xA914u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028754u,2u,0x14u,0x8756u);
      sc_v11_op_ldx(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 14 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028754u,3u,0xA9u,0x8757u);
      sc_v11_op_ldx(r,0xA914u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028754u,2u,0x14u,0x8756u);
      sc_v11_op_ldx(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028756u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028756u,3u,0x20u,0x8759u);
      sc_v11_op_lda(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028756u,2u,0x00u,0x8758u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028758u:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028758u,3u,0xA0u,0x875Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x875Au))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02875Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 15 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02875Bu,3u,0xA9u,0x875Eu);
      sc_v11_op_ldx(r,0xA915u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02875Bu,2u,0x15u,0x875Du);
      sc_v11_op_ldx(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 15 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02875Bu,3u,0xA9u,0x875Eu);
      sc_v11_op_ldx(r,0xA915u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02875Bu,2u,0x15u,0x875Du);
      sc_v11_op_ldx(r,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02875Du:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02875Du,3u,0x20u,0x8760u);
      sc_v11_op_lda(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02875Du,2u,0x00u,0x875Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02875Fu:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02875Fu,3u,0xA0u,0x8762u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8761u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028762u:
    if(m==0u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028762u,4u,0x01u,0x8766u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8765u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028762u,4u,0x01u,0x8766u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8765u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028762u,4u,0x01u,0x8766u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8765u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028762u,4u,0x01u,0x8766u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8765u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028766u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028766u,3u,0x60u,0x8769u);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028766u,3u,0x60u,0x8769u);
      sc_v11_op_lda(r,0x6080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028766u,2u,0x80u,0x8768u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028766u,2u,0x80u,0x8768u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028768u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028768u,1u,0x60u,0x8769u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028768u,1u,0x60u,0x8769u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028769u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028769u,2u,0x30u,0x876Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028769u,2u,0x30u,0x876Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028769u,2u,0x30u,0x876Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02876Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02876Bu,1u,0x8Bu,0x876Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02876Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02876Cu,2u,0x02u,0x876Eu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02876Eu:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02876Eu,1u,0x48u,0x876Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02876Fu:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02876Fu,1u,0xABu,0x8770u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028770u:
    if(m==1u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028770u,3u,0x01u,0x8773u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028773u:
    if(m==1u&&x==1u&&e==0u){ /* DD AB 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028773u,3u,0x87u,0x8776u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x87ABu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028776u:
    if(m==1u&&x==1u&&e==0u){ /* 90 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028776u,2u,0x27u,0x8778u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x879Fu;}
      if(c->pc!=0x8778u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8778u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028778u:
    if(m==1u&&x==1u&&e==0u){ /* DD AF 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028778u,3u,0x87u,0x877Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x87AFu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02877Bu:
    if(m==1u&&x==1u&&e==0u){ /* B0 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02877Bu,2u,0x22u,0x877Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x879Fu;}
      if(c->pc!=0x877Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x877Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02877Du:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02877Du,2u,0x00u,0x877Fu);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02877Fu:
    if(m==1u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02877Fu,3u,0x01u,0x8782u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028782u:
    if(m==1u&&x==1u&&e==0u){ /* DD B3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028782u,3u,0x87u,0x8785u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x87B3u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028785u:
    if(m==1u&&x==1u&&e==0u){ /* B0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028785u,2u,0x18u,0x8787u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x879Fu;}
      if(c->pc!=0x8787u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8787u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x028787u:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x028787u,1u,0x38u,0x8788u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02879Fu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02879Fu,1u,0x18u,0x87A0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287A0u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287A0u,1u,0xABu,0x87A1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287A1u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287A1u,1u,0x60u,0x87A2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287BBu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287BBu,2u,0x20u,0x87BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287BBu,2u,0x20u,0x87BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287BDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287BDu,2u,0x08u,0x87BFu);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287BDu,2u,0x08u,0x87BFu);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287BFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287BFu,3u,0x0Du,0x87C2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D29u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 29 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287BFu,3u,0x0Du,0x87C2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0D29u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287C2u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C2u,1u,0x60u,0x87C3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C2u,1u,0x60u,0x87C3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287C3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C3u,2u,0x20u,0x87C5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C3u,2u,0x20u,0x87C5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C3u,2u,0x20u,0x87C5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C3u,2u,0x20u,0x87C5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287C5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C5u,3u,0x0Cu,0x87C8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C5u,3u,0x0Cu,0x87C8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287C8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C8u,2u,0x0Du,0x87CAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x87D7u;}
      if(c->pc!=0x87CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x87CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287C8u,2u,0x0Du,0x87CAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x87D7u;}
      if(c->pc!=0x87CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x87CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287CAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287CAu,3u,0x01u,0x87CDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287CAu,3u,0x01u,0x87CDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287CDu:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287CDu,3u,0x40u,0x87D0u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287CDu,3u,0x40u,0x87D0u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287D0u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D0u,2u,0x05u,0x87D2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x87D7u;}
      if(c->pc!=0x87D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x87D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D0u,2u,0x05u,0x87D2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x87D7u;}
      if(c->pc!=0x87D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x87D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287D2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B6 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D2u,3u,0x97u,0x87D5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87D4u))return 0;c->pc=0x97B6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B6 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D2u,3u,0x97u,0x87D5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87D4u))return 0;c->pc=0x97B6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287D5u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D5u,2u,0x03u,0x87D7u);
      if(1){c->pc=0x87DAu;}
      if(c->pc!=0x87D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x87D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D5u,2u,0x03u,0x87D7u);
      if(1){c->pc=0x87DAu;}
      if(c->pc!=0x87D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x87D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D5u,2u,0x03u,0x87D7u);
      if(1){c->pc=0x87DAu;}
      if(c->pc!=0x87D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x87D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D5u,2u,0x03u,0x87D7u);
      if(1){c->pc=0x87DAu;}
      if(c->pc!=0x87D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x87D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287D7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D7u,3u,0x9Fu,0x87DAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87D9u))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7C 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287D7u,3u,0x9Fu,0x87DAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87D9u))return 0;c->pc=0x9F7Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287DAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 0C 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287DAu,3u,0x98u,0x87DDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87DCu))return 0;c->pc=0x980Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0C 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287DAu,3u,0x98u,0x87DDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87DCu))return 0;c->pc=0x980Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 0C 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287DAu,3u,0x98u,0x87DDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87DCu))return 0;c->pc=0x980Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 0C 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287DAu,3u,0x98u,0x87DDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87DCu))return 0;c->pc=0x980Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287DDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 67 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287DDu,3u,0x97u,0x87E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87DFu))return 0;c->pc=0x9767u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 67 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287DDu,3u,0x97u,0x87E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87DFu))return 0;c->pc=0x9767u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 67 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287DDu,3u,0x97u,0x87E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87DFu))return 0;c->pc=0x9767u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 67 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287DDu,3u,0x97u,0x87E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87DFu))return 0;c->pc=0x9767u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287E0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E0u,3u,0x95u,0x87E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E2u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E0u,3u,0x95u,0x87E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E2u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E0u,3u,0x95u,0x87E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E2u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E0u,3u,0x95u,0x87E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E2u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287E3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E3u,1u,0x60u,0x87E4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E3u,1u,0x60u,0x87E4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E3u,1u,0x60u,0x87E4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E3u,1u,0x60u,0x87E4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287E4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E4u,3u,0x87u,0x87E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E6u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E4u,3u,0x87u,0x87E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E6u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E4u,3u,0x87u,0x87E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E6u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C3 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E4u,3u,0x87u,0x87E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E6u))return 0;c->pc=0x87C3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287E7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E7u,3u,0x95u,0x87EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E9u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E7u,3u,0x95u,0x87EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E9u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E7u,3u,0x95u,0x87EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E9u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EC 95 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287E7u,3u,0x95u,0x87EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x87E9u))return 0;c->pc=0x95ECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287EAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287EAu,2u,0x20u,0x87ECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287EAu,2u,0x20u,0x87ECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287EAu,2u,0x20u,0x87ECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287EAu,2u,0x20u,0x87ECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287ECu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287ECu,3u,0x00u,0x87EFu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287ECu,3u,0x00u,0x87EFu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287EFu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287EFu,2u,0x00u,0x87F1u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x87F1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287EFu,2u,0x00u,0x87F1u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x87F1u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287F1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F1u,2u,0x20u,0x87F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F1u,2u,0x20u,0x87F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F1u,2u,0x20u,0x87F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287F3u:
    if(m==0u&&x==0u&&e==0u){ /* E6 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F3u,2u,0xC3u,0x87F5u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xC3u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F3u,2u,0xC3u,0x87F5u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xC3u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287F5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F5u,3u,0x0Du,0x87F8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F5u,3u,0x0Du,0x87F8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287F8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F8u,2u,0x10u,0x87FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F8u,2u,0x10u,0x87FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287F8u,2u,0x10u,0x87FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287FAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FAu,1u,0x0Au,0x87FBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FAu,1u,0x0Au,0x87FBu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287FBu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FBu,1u,0xAAu,0x87FCu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FBu,1u,0xAAu,0x87FCu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287FCu:
    if(m==0u&&x==0u&&e==0u){ /* FC 0D 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FCu,3u,0x88u,0x87FFu);
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x880Du+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0x87FEu))return 0;c->pc=t;}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FC 0D 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FCu,3u,0x88u,0x87FFu);
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x880Du+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0x87FEu))return 0;c->pc=t;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0287FFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FFu,2u,0x20u,0x8801u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FFu,2u,0x20u,0x8801u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FFu,2u,0x20u,0x8801u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0287FFu,2u,0x20u,0x8801u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
